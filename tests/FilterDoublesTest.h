#pragma once

#include <QList>
#include <QObject>

class QLineEdit;

class FilterDoublesTest : public QObject
{
    Q_OBJECT
private Q_SLOTS:
    void testToggling();

    void testChangingEditLinesValues();

    void testReactionForMovingDoubleSlider();

private:
    static constexpr double fromValue_{0.};
    static constexpr double toValue_{100.};
};
