// Copyright (c) 2023-2024 Manuel Schneider

#pragma once
#include "albert/export.h"
#include <QString>
#include <functional>

namespace albert
{

///
/// Action used by result items (Item).
///
class ALBERT_EXPORT Action final
{
public:

    /// Action constructor
    /// \param id Identifier of the action.
    /// \param text Description of the action.
    /// \param function The action function.
    Action(QString id, QString text, std::function<void()> function);

    /// The identifier of the action.
    QString id;

    /// The description of the action.
    QString text;

    /// The action function.
    std::function<void()> function;
};

}
