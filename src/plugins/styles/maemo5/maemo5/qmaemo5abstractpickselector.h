/****************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** No Commercial Usage
** This file contains pre-release code and may not be distributed.
** You may use this file in accordance with the terms and conditions
** contained in the Technology Preview License Agreement accompanying
** this package.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights.  These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** If you have questions regarding the use of this file, please contact
** Nokia at qt-info@nokia.com.
**
**
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QMAEMO5ABSTRACTPICKSELECTOR_H
#define QMAEMO5ABSTRACTPICKSELECTOR_H

#include "QtMaemo5/maemo5global.h"

#include <QtCore/qobject.h>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(Maemo5)

class QMaemo5AbstractPickSelectorPrivate;

class Q_MAEMO5_EXPORT QMaemo5AbstractPickSelector : public QObject
{
    Q_OBJECT
public:
    explicit QMaemo5AbstractPickSelector(QObject *parent = 0);
    ~QMaemo5AbstractPickSelector();

    virtual QWidget *widget(QWidget *parent) = 0;

    virtual QString currentValueText() const = 0;

Q_SIGNALS:
    void selected(const QString &);

protected:
    QMaemo5AbstractPickSelector(QMaemo5AbstractPickSelectorPrivate &dd, QObject *parent = 0);

    QScopedPointer<QMaemo5AbstractPickSelectorPrivate> d_ptr;

private:
    Q_DISABLE_COPY(QMaemo5AbstractPickSelector)
    Q_DECLARE_PRIVATE(QMaemo5AbstractPickSelector)
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QMAEMO5ABSTRACTPICKSELECTOR_H
