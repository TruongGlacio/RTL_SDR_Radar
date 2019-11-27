#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "../MyLib/RTL_SDR_RadarLib/GraphicsWidget/GraphicsWidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    GraphicsWidget* _graphicsWidget = nullptr;

};

#endif // MAINWINDOW_H
