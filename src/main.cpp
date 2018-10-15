#include <QApplication>
#include <QWidget>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
	QWidget window;
	window.show();
    return app.exec();
}
