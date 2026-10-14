#pragma once

namespace nocturne::engine {

// The HUD and its text are pixel art for a 480-line screen, which the original drew one screen
// pixel per art pixel however large the screen. The enhanced game draws them at a whole-number
// scale instead, so they keep the size they had at 640x480: the screen height over 480, rounded
// to nearest and held to 1 to 4. 480 and 600 lines are 1, 768 to 1080 are 2.
[[nodiscard]] int getUiScale(int window_height);

} // namespace nocturne::engine
