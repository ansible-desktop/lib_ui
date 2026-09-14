// This file is part of Ansible Desktop Toolkit, a fork of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
//
#pragma once

#include "ui/text/text_entity.h"

namespace v::text {

using data = std::variant<
	v::null_t,
	QString,
	rpl::producer<QString>,
	TextWithEntities,
	rpl::producer<TextWithEntities>>;

[[nodiscard]] bool is_plain(const data &d);
[[nodiscard]] bool is_marked(const data &d);
[[nodiscard]] rpl::producer<QString> take_plain(
	data &&d,
	rpl::producer<QString> &&fallback = rpl::never<QString>());
[[nodiscard]] rpl::producer<TextWithEntities> take_marked(
	data &&d,
	rpl::producer<TextWithEntities> &&fallback
		= rpl::never<TextWithEntities>());

} // namespace v::text
