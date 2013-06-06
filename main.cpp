#include <QApplication>
#include "explorer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Explorer w;
    w.show();
    
    return a.exec();
}
