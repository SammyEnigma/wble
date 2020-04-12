#ifndef FILTER_H
#define FILTER_H

#include <QGroupBox>

#include "wble_global.h"

/**
 * @class Filter
 * @brief Filters base class.
 */
class WBLE_EXPORT Filter : public QGroupBox
{
    Q_OBJECT
public:
    explicit Filter(const QString& title, QWidget* parent = nullptr);

    ~Filter() override = default;

    Filter& operator=(const Filter& other) = delete;
    Filter(const Filter& other) = delete;

    Filter& operator=(Filter&& other) = delete;
    Filter(Filter&& other) = delete;

public Q_SLOTS:
    void setChecked(bool checked);

protected:
    virtual void checkedStateChanged(bool checked) = 0;
};

#endif  // FILTER_H
