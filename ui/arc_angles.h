/*
This file is part of Ansible Desktop, a fork of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/ansible-desktop/app-desktop/blob/master/LEGAL
*/
#pragma once

namespace arc {

constexpr auto kFullLength = 360 * 16;
constexpr auto kHalfLength = (kFullLength / 2);
constexpr auto kQuarterLength = (kFullLength / 4);
constexpr auto kMinLength = (kFullLength / 360);
constexpr auto kAlmostFullLength = (kFullLength - kMinLength);

} // namespace arc
