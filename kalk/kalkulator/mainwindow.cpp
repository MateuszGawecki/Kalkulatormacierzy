#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStandardItemModel>
#include "doublespinboxdelegate.h"

int n1,m1,n2,m2;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    M1 =new QStandardItemModel (this);
    M2 =new QStandardItemModel (this);
    M3 =new QStandardItemModel (this);
    ui->tableView->setModel(M1);
    ui->tableView_2->setModel(M2);
    ui->tableView_3->setModel(M3);
    ui->tableView->setItemDelegate(new DoubleSpinBoxDelegate(this));
    ui->tableView_2->setItemDelegate(new DoubleSpinBoxDelegate(this));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_Lw1spinbox_valueChanged(int arg1)
{
    n1=arg1;
    M1->setRowCount(arg1);
}

void MainWindow::on_Lk1spinbox_valueChanged(int arg1)
{
    m1=arg1;
    M1->setColumnCount(arg1);
}

void MainWindow::on_Lw2spinbox_valueChanged(int arg1)
{
    n2=arg1;
    M2->setRowCount(arg1);
}

void MainWindow::on_Lk2spinbox_valueChanged(int arg1)
{
    m2=arg1;
    M2->setColumnCount(arg1);
}

void MainWindow::on_addbut_clicked()
{
    if(n1==n2 && m1==m2)
     {
        M3->setRowCount(n1);
        M3->setColumnCount(m1);

        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
            {
             M3->setItem(i,j,new QStandardItem(QString::number(0)));
            }
        }

        for(int i=0; i<n1; i++)
          {
            for(int j=0; j<m1; j++)
             {
               M3->setItem(i,j,new QStandardItem(QString::number(M1->item(i,j)->text().toDouble()+M2->item(i,j)->text().toDouble())));
             }
          }
     }
     else
    {
        //M3->setRowCount(0);
        //M3->setColumnCount(0);
        M3->setItem(0,0,new QStandardItem(QString("Nie mozna dodac")));
    }
}

void MainWindow::on_subbut_clicked()
{
    if(n1==n2 && m1==m2)
    {
        M3->setRowCount(n1);
        M3->setColumnCount(m1);

        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m1;j++)
            {
             M3->setItem(i,j,new QStandardItem(QString::number(0)));
            }
        }

        for(int i=0; i<n1; i++)
          {
            for(int j=0; j<m1; j++)
             {
               M3->setItem(i,j,new QStandardItem(QString::number(M1->item(i,j)->text().toDouble()-M2->item(i,j)->text().toDouble())));
             }
          }
    }
    else
    {
        //M3->setRowCount(0);
        //M3->setColumnCount(0);
        M3->setItem(0,0,new QStandardItem(QString("Nie mozna odjac")));
    }
}

void MainWindow::on_multbut_clicked()
{
    if(m1==n2)
    {
        M3->setRowCount(n1);
        M3->setColumnCount(m2);

        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m2;j++)
            {
             M3->setItem(i,j,new QStandardItem(QString::number(0)));
            }
        }

        for(int i=0;i<n1;i++)
         {
           for(int j=0;j<m2;j++)
            {
              for(int k=0;k<m1;k++)
               {
                 M3->setItem(i,j,new QStandardItem(QString::number(M3->item(i,j)->text().toDouble()+(M1->item(i,k)->text().toDouble()*M2->item(k,j)->text().toDouble()))));
               }
            }
         }
    }
    else
    {
        //M3->setRowCount(0);
        //M3->setColumnCount(0);
        M3->setItem(0,0,new QStandardItem(QString("Nie mozna pomnozyc")));
    }
}
