#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QString>
#include <QPixmap>
#include <math.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void renderOverheatBatteryWarning();
    void renderOverheatSolarWarning();
    void renderRhombus(QPainter &paint, int h, int w,  int vOff, int hOff);

    void on_batteryWarning_OFF_clicked();

    void on_batteryWarning_ON_clicked();

    void on_solarWarning_ON_clicked();

    void on_solarWarning_OFF_clicked();

private:
    Ui::MainWindow *ui;
    QPixmap warnBattery_ON;  //Stores image of warning label when ON  and (x,y) where its placed
    QPixmap warnBattery_OFF; //Stores image of warning label when OFF and (x,y) where its placed
    QPixmap warnSolar_ON;  //Stores image of warning label when ON  and (x,y) where its placed
    QPixmap warnSolar_OFF; //Stores image of warning label when OFF and (x,y) where its placed
    QPixmap warnMotor_ON;  //Stores image of warning label when ON  and (x,y) where its placed
    QPixmap warnMotor_OFF; //Stores image of warning label when OFF and (x,y) where its placed
};


#endif
