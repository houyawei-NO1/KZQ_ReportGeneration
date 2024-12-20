#include "kzq_reportgeneration.h"
#include "ui_kzq_reportgeneration.h"
QString xglocalPath;
QString localPath;
KZQ_ReportGeneration::KZQ_ReportGeneration(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::KZQ_ReportGeneration)
{
    ui->setupUi(this);
    ui->buttonGroup->setId(ui->radioButton,0);
    ui->buttonGroup->setId(ui->radioButton_2,1);

    qtexcel qtexcel;

    // 连接信号与槽函数
    connect(ui->buttonGroup, SIGNAL(idToggled(int,bool)), this, SLOT(btnToggled(int,bool)));
}

KZQ_ReportGeneration::~KZQ_ReportGeneration()
{
    delete ui;
}

// 在槽函数中根据按钮选中与否进行相应操作
void KZQ_ReportGeneration::btnToggled(int btn, bool checked)
{
     qDebug() << "btn"<<btn;
    if (!checked)
    {
        return;
    }

    switch (btn)
    {
    case 0:
        qDebug() << "This is button zreo";
        break;
    case 1:
        qDebug() <<"This is button one";
        break;
    default:
        break;
    }
}
void KZQ_ReportGeneration::on_pushButton_clicked()//锡膏文件夹路径
{
    QDir dir= QCoreApplication::applicationDirPath();
    dir.cdUp();
    xglocalPath = dir.path();
    xglocalPath = QFileDialog::getExistingDirectory(this, tr("选择文件夹"),
                                                  xglocalPath,
                                                  QFileDialog::ShowDirsOnly
                                                      | QFileDialog::DontResolveSymlinks);
    ui->lineEdit->setText(xglocalPath);
}


void KZQ_ReportGeneration::on_pushButton_2_clicked()//三防检测
{
    QDir dir= QCoreApplication::applicationDirPath();
    dir.cdUp();
    localPath = dir.path();
    localPath = QFileDialog::getExistingDirectory(this, tr("选择文件夹"),
                                                  localPath,
                                                  QFileDialog::ShowDirsOnly
                                                      | QFileDialog::DontResolveSymlinks);
    ui->lineEdit_4->setText(localPath);
}


void KZQ_ReportGeneration::on_pushButton_3_clicked()//散热胶
{
    QDir dir= QCoreApplication::applicationDirPath();
    dir.cdUp();
    localPath = dir.path();
    localPath = QFileDialog::getExistingDirectory(this, tr("选择文件夹"),
                                                  localPath,
                                                  QFileDialog::ShowDirsOnly
                                                      | QFileDialog::DontResolveSymlinks);
    ui->lineEdit_7->setText(localPath);
}


void KZQ_ReportGeneration::on_pushButton_4_clicked()//密封胶
{
    QDir dir= QCoreApplication::applicationDirPath();
    dir.cdUp();
    localPath = dir.path();
    localPath = QFileDialog::getExistingDirectory(this, tr("选择文件夹"),
                                                  localPath,
                                                  QFileDialog::ShowDirsOnly
                                                      | QFileDialog::DontResolveSymlinks);
    ui->lineEdit_10->setText(localPath);
}


void KZQ_ReportGeneration::on_pushButton_5_clicked()//透气阀
{
    QDir dir= QCoreApplication::applicationDirPath();
    dir.cdUp();
    localPath = dir.path();
    localPath = QFileDialog::getExistingDirectory(this, tr("选择文件夹"),
                                                  localPath,
                                                  QFileDialog::ShowDirsOnly
                                                      | QFileDialog::DontResolveSymlinks);
    ui->lineEdit_13->setText(localPath);
}

