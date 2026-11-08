#pragma once

#include <string_view>

namespace nocturne::core {

// The front end a package names to run Nocturne's menus.
inline constexpr std::string_view kNocturneFrontEnd = "nocturne";
// The loading indicator a package names for CLevelLoader's moon.
inline constexpr std::string_view kMoonLoadingIndicator = "moon";

// Every front-end screen is laid out for 640x480. With acceleration the front end runs at the
// picked resolution's aspect, 480 lines tall, with that layout centred; the original ran it at
// 640x480 whatever was picked.
inline constexpr int kFrontEndLayoutWidth = 640;
inline constexpr int kFrontEndHeight = 480;

// The front end's width: the picked resolution's aspect at 480 lines, a multiple of 16 as
// clearScreen's rows need, between 640 and 1280. 640 without acceleration, since only the
// hardware renderer widens the menu's moon.
[[nodiscard]] int getFrontEndWidth(int picked_width, int picked_height, bool accelerated);
// Where the layout starts on a screen this wide.
[[nodiscard]] int getFrontEndLeft(int screen_width);

} // namespace nocturne::core
