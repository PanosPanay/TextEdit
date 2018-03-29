#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TextEdit.h"

class TextEdit : public QMainWindow
{
	Q_OBJECT

public:
	TextEdit(QWidget *parent = Q_NULLPTR);

private:
	Ui::TextEditClass ui;
};
