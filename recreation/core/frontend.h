#pragma once

#include "common/video/presentation.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/fwd.h"
#include "platform/upscaler.h"
#include "support/fwd.h"

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
inline constexpr std::string_view kTiledScrollBackdrop = "tiled_scroll";
inline constexpr std::string_view kTwoColumnCredits = "two_column";
inline constexpr std::string_view kMoonLoadingIndicator = "moon";
inline constexpr std::string_view kColumnScrollCredits = "column_scroll";
inline constexpr std::string_view kFadeLoopCredits = "fade_loop";
inline constexpr std::string_view kStoryListSelect = "story_list";
inline constexpr std::string_view kDirectStartSelect = "direct_start";

// The menus' text for a label id, as the packages' [labels] give it, then looked up in the
// message file as any other text; an id no package gives is fatal.
[[nodiscard]] std::string getLabel(const engine::SGameContent &content,
                                   const support::CNewMsg &messages, std::string_view id);

// The text in at most length characters: whole, or its start with "..." for the rest and no
// space left before the dots.
[[nodiscard]] std::string shortenToLength(std::string_view text, std::size_t length);

// A part, as a message names it ("title backdrop"), checked as it is first used: one no package
// names, or names in a style this build doesn't draw, is fatal, whichever game names it. The
// rest of the front end runs without it. The style, for a part built in more than one.
std::string_view requireFrontEndStyle(std::string_view part,
                                      const std::optional<std::string> &style,
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

// Where a 640x480 picture is on the screen, as its fit puts it: what keeps its shape is the
// layout, against the side its anchor names; what stretches is the whole screen.
struct SPictureArea {
    float scale_x = 1.0F;
    float scale_y = 1.0F;
    int left = 0;
    int top = 0;

    // A point on the picture on the screen.
    [[nodiscard]] int getX(int picture_x) const;
    [[nodiscard]] int getY(int picture_y) const;
    // Lengths across and down, at least a pixel for one of at least a pixel.
    [[nodiscard]] int getWidth(int picture_width) const;
    [[nodiscard]] int getHeight(int picture_height) const;
    // How much larger what keeps its shape on the picture is, text and the moon's window: by
    // the picture's height.
    [[nodiscard]] float getScale() const;
    [[nodiscard]] bool operator==(const SPictureArea &) const = default;
};

[[nodiscard]] SPictureArea getPictureArea(int screen_width, int screen_height,
                                          const engine::SPictureFit &fit);

// Where the title backdrop's picture is: a figure_scene's or tiled_scroll's as its fit puts it;
// a backdrop with no still picture, as the sky_scene, is the whole screen.
[[nodiscard]] SPictureArea getTitleBackdropPicture(const engine::SGameContent &content,
                                                   int screen_width, int screen_height);

// How the picture's art is enlarged: as the layout's, its pixels kept only where they would be
// kept both across and down.
[[nodiscard]] engine::EBitmapFilter getPictureArtFilter(platform::EUpscaler upscaler,
                                                        const SPictureArea &picture);

// A bitmap at x, y and width by height on the picture, drawn where and as large as the screen
// shows it, enlarged as getPictureArtFilter says.
void displayInPicture(engine::CAlphaBitmap &bitmap, const SPictureArea &picture,
                      const common::SViewport &area, int alpha, platform::EUpscaler upscaler);

} // namespace nocturne::core
