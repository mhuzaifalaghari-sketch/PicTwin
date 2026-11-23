3#include <QMainWindow>
#include <QPushButton>
#include <QtWidgets/QApplication>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow window;
    QVBoxLayout Hc;
    window.setLayout(&Hc);

    QPushButton button;
    Hc.addWidget(&button);
    button.setText("Press me");
    window.show();
    window.resize(400, 400);
    return app.exec();
}
