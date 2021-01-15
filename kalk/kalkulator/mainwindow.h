#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QStandardItemModel;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Lw1spinbox_valueChanged(int arg1);
    void on_Lk1spinbox_valueChanged(int arg1);
    void on_Lw2spinbox_valueChanged(int arg1);
    void on_Lk2spinbox_valueChanged(int arg1);
    void on_addbut_clicked();
    void on_subbut_clicked();
    void on_multbut_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *M1;
    QStandardItemModel *M2;
    QStandardItemModel *M3;
};
#endif // MAINWINDOW_H
