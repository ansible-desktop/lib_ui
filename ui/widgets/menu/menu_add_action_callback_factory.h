// This file is part of Ansible Desktop Toolkit, a fork of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
//
#pragma once

#include "base/unique_qptr.h"

namespace Ui {
class DropdownMenu;
class PopupMenu;
} // namespace Ui

namespace Ui::Menu {

struct MenuCallback;

[[nodiscard]] MenuCallback CreateAddActionCallback(
	not_null<Ui::PopupMenu*> menu);
[[nodiscard]] MenuCallback CreateAddActionCallback(
	not_null<Ui::DropdownMenu*> menu);
[[nodiscard]] MenuCallback CreateAddActionCallback(
	const base::unique_qptr<Ui::PopupMenu> &menu);

} // namespace Ui::Menu
