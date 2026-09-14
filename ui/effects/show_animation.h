// This file is part of Ansible Desktop Toolkit, a fork of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
//
#pragma once

namespace Ui {
class RpWidget;
} // namespace Ui

namespace Ui::Animations {

using Widgets = std::vector<not_null<Ui::RpWidget*>>;

void ShowWidgets(const Widgets &targets);
void HideWidgets(const Widgets &targets);

} // namespace Ui::Animations
