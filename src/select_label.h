/*
   Copyright (C) 2015 MeiZhaorui(Mason) <listener_mei@163.com>
   
   The File is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
   
   The File is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
   
   You should have received a copy of the GNU Lesser General Public
   License along with the Library; if not, see
   <http://www.gnu.org/licenses/>.
*/

#ifndef SELECT_LABEL_H
#define SELECT_LABEL_H
#include "common.h"
#include <QLabel>

KUPLAYER_NAMESPACE_BEGIN //namespace begin

class SelectLabel final : public QLabel
{
    Q_OBJECT
signals:
    void be_selected(QString, QString);
public:
    SelectLabel(QString name, QString url = "", QWidget *parent = 0);
    virtual ~SelectLabel();
    void set_selected(bool);
protected:
    virtual void enterEvent(QEvent *);
    virtual void leaveEvent(QEvent *);
    virtual void mouseReleaseEvent(QMouseEvent *);
    virtual void paintEvent(QPaintEvent *ev);
private:
    bool mouse_pressed {false};
    bool be_select {false};
    QString url_;
};

KUPLAYER_NAMESPACE_END // namespace end
#endif // SELECT_LABEL_H
