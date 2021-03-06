/** @file
 *
 * VBox frontends: Qt GUI ("VirtualBox"):
 * UIGraphicsSelectorView class declaration
 */

/*
 * Copyright (C) 2012 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 */

#ifndef __UIGraphicsSelectorView_h__
#define __UIGraphicsSelectorView_h__

/* Qt includes: */
#include <QGraphicsView>

/* Forward declaration: */
class UIGraphicsSelectorModel;
class QKeyEvent;

/* Graphics selector view: */
class UIGraphicsSelectorView : public QGraphicsView
{
    Q_OBJECT;

signals:

    /* Notify listeners about size change: */
    void sigResized();

public:

    /* Constructor: */
    UIGraphicsSelectorView(QWidget *pParent);

private slots:

    /* Handles root item height change: */
    void sltHandleRootItemResized(const QSizeF &size);

private:

    /* Resize-event handler: */
    void resizeEvent(QResizeEvent *pEvent);

    /* Helpers: */
    void updateSceneRect(const QSizeF &sizeHint = QSizeF());
};

#endif /* __UIGraphicsSelectorView_h__ */

