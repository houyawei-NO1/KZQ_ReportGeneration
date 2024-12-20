#ifndef KZQ_REPORTGENERATION_H
#define KZQ_REPORTGENERATION_H

#include <QMainWindow>
#include <QDir>
#include "qtexcel.h"
#include <QFileDialog>



QT_BEGIN_NAMESPACE
namespace Ui {
class KZQ_ReportGeneration;
}
QT_END_NAMESPACE

class KZQ_ReportGeneration : public QMainWindow
{
    Q_OBJECT

public:
    KZQ_ReportGeneration(QWidget *parent = nullptr);
    ~KZQ_ReportGeneration();
    qtexcel *qexcel;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void btnToggled(int btn, bool checked);

private:
    Ui::KZQ_ReportGeneration *ui;
};
#endif // KZQ_REPORTGENERATION_H
