#include "explorer.h"
#include "ui_explorer.h"

Explorer::Explorer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Explorer)
{
    ui->setupUi(this);

    QString sPath= "";
    directory=new QFileSystemModel(this);
    directory->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    directory->setRootPath(sPath);
    ui->treeView->setModel(directory);

    file= new QFileSystemModel(this);
    file->setFilter(QDir::NoDotAndDotDot | QDir::Files);
    file->setRootPath(sPath);
    ui->listView->setModel(file);

}

Explorer::~Explorer()
{
    delete ui;
}

void Explorer::on_treeView_clicked(const QModelIndex &index)
{
    QString sPath = directory->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(file->setRootPath(sPath));

}
