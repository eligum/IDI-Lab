#include <QApplication>
// #include <QSurfaceFormat>

#include "MyForm.h"

int main (int argc, char **argv)
{
    QApplication app(argc, argv);
    // QSurfaceFormat f;
    // f.setVersion(3,3);
    // f.setProfile(QSurfaceFormat::CoreProfile);
    // QSurfaceFormat::setDefaultFormat(f);

    MyForm myf;
    myf.show();

    return app.exec ();
}

