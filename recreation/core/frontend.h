#pragma once

#include "common/video/presentation.h"
#include "engine/alphabit/alphabitmap.h"
#include "platform/upscaler.h"

#include <initializer_list>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {

// The front-end part styles this build draws, as a package's [front_end] names them: CMoon's 3D
// sky scene or figure scene behind the menus, CLevelLoader's moon, rollCredits's scrolling
// column, and showChapterSelect's list of stories and their chapters.
inline constexpr std::string_view kSkySceneBackdrop = "sky_scene";
inline constexpr std::string_view kFigureSceneBackdrop = "figure_scene";
inline constexpr std::string_view kMoonLoadingIndicator = "moon";
inline constexpr std::string_view kColumnScrollCredits = "column_scroll";
inline constexpr std::string_view kStoryListSelect = "story_list";

// A part, as a message names it ("title backdrop"), checked as it is first used: one no package
// names, or names in a style this build doesn't draw, is fatal, whichever game names it. The
// rest of the front end runs without it.
void requireFrontEndStyle(std::string_view part, const std::optional<std::string> &style,
                          std::initializer_list<std::string_view> built);

// Every front-end screen is laid out for 640x480. With acceleration the front end runs at the
// picked resolution, the one the missions run at, with that layout scaled to it and centred; the
// original ran it at 640x480 whatever was picked.
inline constexpr int kFrontEndLayoutWidth = 640;
inline constexpr int kFrontEndHeight = 480;

// The front end's mode: the picked resolution, or 640x480 without acceleration, or for a pick
// smaller than the layout, which the menus would not fit.
[[nodiscard]] common::SExtent getFrontEndMode(int picked_width, int picked_height,
                                              bool accelerated);

// The 640x480 layout as a screen shows it: scaled by the smaller of the two ratios, so all of it
// fits, and centred.
struct SFrontEndLayout {
    float scale = 1.0F;
    int left = 0;
    int top = 0;

    // A layout point's screen position along each axis.
    [[nodiscard]] int getX(int layout_x) const;
    [[nodiscard]] int getY(int layout_y) const;
    // A layout length on the screen, at least a pixel for one of at least a pixel.
    [[nodiscard]] int getLength(int layout_length) const;
};

[[nodiscard]] SFrontEndLayout getFrontEndLayout(int screen_width, int screen_height);

// How the layout's art is enlarged, as the Upscaler setting enlarges the frame: Nearest and xBR,
// a pixel-art filter, keep the art's pixels; Standard keeps them at a whole multiple; the rest
// blend.
[[nodiscard]] engine::EBitmapFilter getFrontEndArtFilter(platform::EUpscaler upscaler, float scale);

// A bitmap at x, y and width by height in the layout, drawn where and as large as the screen
// shows it, enlarged as the upscaler says.
void displayInLayout(engine::CAlphaBitmap &bitmap, const SFrontEndLayout &layout,
                     const common::SViewport &area, int alpha, platform::EUpscaler upscaler);

} // namespace nocturne::core
