#include "inputline.h"

InputLine::InputLine(QWidget *parent) :
	QLineEdit(parent)
{
	setObjectName(QString::fromLocal8Bit("inputline"));
	setSizePolicy(QSizePolicy::Minimum,QSizePolicy::Minimum);
}
