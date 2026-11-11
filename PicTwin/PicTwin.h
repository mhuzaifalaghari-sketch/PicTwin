#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PicTwin.h"

class PicTwin : public QMainWindow
{
    Q_OBJECT

public:
    PicTwin(QWidget *parent = nullptr);
    ~PicTwin();

private:
    Ui::PicTwinClass ui;
};

