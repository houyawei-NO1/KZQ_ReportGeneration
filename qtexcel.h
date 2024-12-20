#ifndef QTEXCEL_H
#define QTEXCEL_H

#include <QObject>
#include <QDir>

// [0] include QXlsx headers
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxchartsheet.h"
#include "xlsxdocument.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
using namespace QXlsx;

class qtexcel : public QObject
{
    Q_OBJECT
public:
    explicit qtexcel(QObject *parent = nullptr);

signals:
};

#endif // QTEXCEL_H
