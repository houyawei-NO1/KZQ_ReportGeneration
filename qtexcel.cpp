#include "qtexcel.h"

qtexcel::qtexcel(QObject *parent)
    : QObject{parent}
{
    QXlsx::Document xlsxW;
    // the header row

    Format headerStyle;
    headerStyle.setFontSize(48);
    headerStyle.setFontColor(Qt::darkBlue);
    headerStyle.setHorizontalAlignment(Format::AlignHCenter);
    headerStyle.setVerticalAlignment(Format::AlignVCenter);
    headerStyle.setRightBorderStyle(Format::BorderThin);
    headerStyle.setBottomBorderStyle(Format::BorderThin);
    xlsxW.setRowHeight(1, 80);
    xlsxW.write("A1", QString("控制器生产跟踪记录单"));
    xlsxW.mergeCells("A1:G1", headerStyle);

    xlsxW.setColumnWidth(1,20);
    xlsxW.setColumnWidth(2,20);
    xlsxW.setColumnWidth(3,40);
    xlsxW.setColumnWidth(4,20);
    xlsxW.setColumnWidth(5,20);
    xlsxW.setColumnWidth(6,20);
    xlsxW.setColumnWidth(7,40);

    Format fontStyle;
    fontStyle.setFontSize(15);
    fontStyle.setHorizontalAlignment(Format::AlignHCenter);
    fontStyle.setVerticalAlignment(Format::AlignTop);
    // fontStyle.setPatternBackgroundColor(QColor("#93CCEA"));
    fontStyle.setRightBorderStyle(Format::BorderThin);
    fontStyle.setBottomBorderStyle(Format::BorderThin);
    xlsxW.write(2, 1, QString("产品型号"),fontStyle);
    xlsxW.write(2, 2, QString("NDC9-2"),fontStyle);
    xlsxW.write(2, 3, QString("硬件版本"),fontStyle);
    xlsxW.write(2, 4, QString("V1.2.1"),fontStyle);
    xlsxW.write(2, 5, QString("记录日期"),fontStyle);
    QDate date =QDate::currentDate();
    xlsxW.write(2, 6, date,fontStyle);
    xlsxW.write(2, 7, "",fontStyle);

    xlsxW.write(3, 1, QString("出厂编号"),fontStyle);
    xlsxW.write(3, 2, QString("Exxx"),fontStyle);
    xlsxW.write(3, 3, QString("软件版本"),fontStyle);
    xlsxW.write(3, 4, QString("boot V1.2"),fontStyle);
    xlsxW.write(3, 5, QString("记录人"),fontStyle);
    xlsxW.write(3, 6, "",fontStyle);
    xlsxW.write(3, 7, "",fontStyle);

    xlsxW.write(4, 1, QString("序号"),fontStyle);
    xlsxW.write(4, 2, QString("要素"),fontStyle);
    xlsxW.write(4, 3, QString("记录形式"),fontStyle);
    xlsxW.write(4, 4, QString("操作人员"),fontStyle);
    xlsxW.write(4, 5, QString("日期"),fontStyle);
    xlsxW.write(4, 6, QString("确认人"),fontStyle);
    xlsxW.write(4, 7, QString("操作要求"),fontStyle);

    xlsxW.write(5, 1, QString("1"),fontStyle);
    xlsxW.write(5, 2, QString("锡膏印刷"),fontStyle);
    // xlsxW.write(5, 3, QString("锡膏照片"),fontStyle);
    // xlsxW.currentWorksheet()->writeHyperlink(5, 3, QUrl("mailto:123@qq.com"));、
    QString filename ;
    QFile file("path/to/your/file.txt"); // 替换为你要检查的文件路径
    if (file.exists()) {
        qDebug() << "文件存在";
    } else {
        qDebug() << "文件不存在";
    }
    xlsxW.write(5, 3, "file:///D:/Desktop/微信截图_20241216170518.png");
    xlsxW.write(5, 4, QString(""),fontStyle);
    xlsxW.write(5, 5, QString(""),fontStyle);
    xlsxW.write(5, 6, QString(""),fontStyle);
    xlsxW.write(5, 7, QString("操作员只取有二维码面照片"),fontStyle);

    xlsxW.write(6, 1, QString("2"),fontStyle);
    xlsxW.write(6, 2, QString("三防检测"),fontStyle);
    xlsxW.write(6, 3,"file:///D:/Desktop/微信截图_20241216170518.png");
    xlsxW.write(6, 4, QString(""),fontStyle);
    xlsxW.write(6, 5, QString(""),fontStyle);
    xlsxW.write(6, 6, QString(""),fontStyle);
    xlsxW.write(6, 7, QString("操作员只取有二维码面照片"),fontStyle);


    xlsxW.write(7, 1, QString("3"),fontStyle);
    xlsxW.write(7, 2, QString("散热胶"),fontStyle);
    xlsxW.write(7, 3, "file:///D:/Desktop/微信截图_20241216170518.png");
    xlsxW.write(7, 4, QString(""),fontStyle);
    xlsxW.write(7, 5, QString(""),fontStyle);
    xlsxW.write(7, 6, QString(""),fontStyle);
    xlsxW.write(7, 7, QString("操作员拍照"),fontStyle);

    xlsxW.write(8, 1, QString("4"),fontStyle);
    xlsxW.write(8, 2, QString("锡膏印刷"),fontStyle);
    xlsxW.write(8, 3, "file:///D:/Desktop/微信截图_20241216170518.png");
    xlsxW.write(8, 4, QString(""),fontStyle);
    xlsxW.write(8, 5, QString(""),fontStyle);
    xlsxW.write(8, 6, QString(""),fontStyle);
    xlsxW.write(8, 7, QString("操作员拍照"),fontStyle);

    xlsxW.write(9, 1, QString("5"),fontStyle);
    xlsxW.write(9, 2, QString("锡膏印刷"),fontStyle);
    xlsxW.write(9, 3, "file:///D:/Desktop/微信截图_20241216170518.png");
    xlsxW.write(9, 4, QString(""),fontStyle);
    xlsxW.write(9, 5, QString(""),fontStyle);
    xlsxW.write(9, 6, QString(""),fontStyle);
    xlsxW.write(9, 7, QString("操作员只取有二维码面照片"),fontStyle);


    if (xlsxW.saveAs("Exxx.xlsx"))
    {
        qDebug() << "success to write xlsx file";
    } else {
        qDebug() << "failed to write xlsx file";
        exit(-1);
    }

    qDebug() << "current directory is " << QDir::currentPath();
}
