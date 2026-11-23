#include "common/math/fixed.h"
#include "common/math/matrix3x3f.h"
#include "common/math/vector3i.h"
#include "core/color3i.h"
#include "core/frontend.h"
#include "core/moon/moon.h"
#include "core/moon/moon_functions.h"
#include "core/set/demonset.h"
#include "engine/3d/3d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/package/gamecontent.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/display.h"
#include "platform/renderer.h"

#include <algorithm>
#include <array>
#include <bit>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

constexpr int kMoonRenderFlags = 0x205;
constexpr int kFullAlpha = 0xffff;
// A quarter turn, as the original stores it.
constexpr float kBatYawOffset = std::bit_cast<float>(0x3fc90fdbU);
constexpr int kTrueColorDepth = 32;
constexpr std::uint32_t kTexelMask = 0xff;
constexpr std::uint32_t kCloudRowShift = 8;

common::CVector3i toVector(const std::array<int, 3> &light) {
    return {.x = light[0], .y = light[1], .z = light[2]};
}

// PADDUSB on one pixel: each byte added, saturating at 0xff.
std::uint32_t addSaturating(std::uint32_t a, std::uint32_t b) {
    std::uint32_t sum = 0;
    for (std::uint32_t shift = 0; shift < 32; shift += 8) {
        const std::uint32_t lane = ((a >> shift) & 0xffU) + ((b >> shift) & 0xffU);
        sum |= std::min(lane, 0xffU) << shift;
    }
    return sum;
}

// The cloud texel under a screen pixel at one layer's scale, which halves it per step.
std::uint8_t cloudTexel(std::span<const std::uint8_t> texels, std::uint32_t x, std::uint32_t y,
                        std::uint32_t scale_shift, std::int32_t scroll_x, std::int32_t scroll_y) {
    const std::uint32_t u =
        ((x >> scale_shift) + static_cast<std::uint32_t>(scroll_x)) & kTexelMask;
    const std::uint32_t v =
        ((y >> scale_shift) + static_cast<std::uint32_t>(scroll_y)) & kTexelMask;
    return texels[(u << kCloudRowShift) + v];
}

} // namespace

// The original also processed the sound queue here, which the audio device pulls on its own
// thread, and left the set lit for the bats; the lighting it found is put back.
// deferred: switching the set to quick lighting for the moon and bats and back again, with
//   setRenderingMode
// nocedit 0x00529ed0
void CMoon::render() {
    const EStyle style = getStyle();
    if (style == EStyle::Figure) {
        renderFigure();
        return;
    }
    if (style == EStyle::Tiled) {
        renderTiled();
        return;
    }
    const engine::SSkyScene &sky = getSky();
    CDemonSet &set = owners_.set;
    const common::CVector3i light_direction = set.getLightDirection();
    const int ambient = set.getAmbientBaseQuick();
    const CColor3i flat_color = set.getFlatColor();
    owners_.special.clearScreen();
    owners_.special.clearZBufferNative();
    const std::optional<float> widened = beginWideScene();
    renderMoon(static_cast<float>(sky.projection) * widened.value_or(1.0F));
    renderBats();
    if (widened) {
        endWideScene();
    }
    renderClouds();
    owners_.three_d.setBlendMode(1);
    // The timer runs to its wrap past the frames; past them, the first frame is held.
    int frame = common::truncateToInt(animation_timer_);
    if (frame < 0 || std::cmp_greater_equal(frame, animation_textures_.size())) {
        frame = 0;
    }
    displayInLayout(
        animation_textures_[static_cast<std::size_t>(frame)],
        getFrontEndLayout(owners_.screen.getWindowWidth(), owners_.screen.getWindowHeight()),
        {.x = sky.frame_x, .y = sky.frame_y, .width = sky.frame_width, .height = sky.frame_height},
        sky.frame_alpha, owners_.display.getUpscaler());
    owners_.three_d.setBlendMode(0);
    set.setLightDirection(light_direction);
    set.setAmbientBaseQuick(ambient);
    set.setFlatColor(flat_color.r, flat_color.g, flat_color.b);
}

// The renderer stretches a 640x480 viewport over the whole screen, drawing at the screen's own
// pixels, so the view widens by how much wider than 4:3 the screen is and the sky keeps its
// proportions; the rotation matrix already corrects the vertical. Software runs at 640x480.
std::optional<float> CMoon::beginWideScene() {
    const int width = owners_.screen.getWindowWidth();
    const int height = owners_.screen.getWindowHeight();
    if ((width == kFrontEndLayoutWidth && height == kFrontEndHeight) || height <= 0 ||
        !owners_.special.getUseExternalRenderer()) {
        return std::nullopt;
    }
    const float scale_x = static_cast<float>(width) / static_cast<float>(kFrontEndLayoutWidth);
    const float scale_y = static_cast<float>(height) / static_cast<float>(kFrontEndHeight);
    const float widen = scale_x / scale_y;
    owners_.renderer.pushViewport(0, 0, kFrontEndLayoutWidth, kFrontEndHeight);
    if (!owners_.special.beginOverlay(
            {.scale_x = scale_x, .scale_y = scale_y, .offset_x = 0.0F, .offset_y = 0.0F})) {
        owners_.renderer.popViewport();
        return std::nullopt;
    }
    return widen;
}

// The models stand on the backdrop, so the 3D is scaled and centred with the layout rather than
// widened. The front end draws in software, where the screen's own viewport would centre the
// figures on the screen and project them as wide as it is; the layout's place and size keep them
// on the backdrop, as the hardware renderer's pass does.
CMoon::ELayoutScene CMoon::beginLayoutScene(const SPictureArea &picture) {
    const int width = owners_.screen.getWindowWidth();
    const int height = owners_.screen.getWindowHeight();
    if (width == kFrontEndLayoutWidth && height == kFrontEndHeight) {
        return ELayoutScene::Screen;
    }
    if (!owners_.special.getUseExternalRenderer()) {
        // The viewport's right and bottom are its last pixels. A stretched picture's view keeps
        // the layout's projection, so it stretches with the picture.
        owners_.renderer.pushViewport(picture.left, picture.top,
                                      picture.getWidth(kFrontEndLayoutWidth) - 1,
                                      picture.getHeight(kFrontEndHeight) - 1);
        if (picture.scale_x != picture.scale_y) {
            owners_.renderer.setProjectionShape(kFrontEndLayoutWidth, kFrontEndHeight);
        }
        return ELayoutScene::Viewport;
    }
    owners_.renderer.pushViewport(0, 0, kFrontEndLayoutWidth, kFrontEndHeight);
    if (!owners_.special.beginOverlay({.scale_x = picture.scale_x,
                                       .scale_y = picture.scale_y,
                                       .offset_x = static_cast<float>(picture.left),
                                       .offset_y = static_cast<float>(picture.top)})) {
        owners_.renderer.popViewport();
        return ELayoutScene::Screen;
    }
    return ELayoutScene::Overlay;
}

void CMoon::endLayoutScene(ELayoutScene placed) {
    if (placed == ELayoutScene::Overlay) {
        endWideScene();
    } else if (placed == ELayoutScene::Viewport) {
        owners_.renderer.popViewport();
    }
}

// The original also processed the sound queue here, which the audio device pulls on its own
// thread, and cleared only the screen; the depth is cleared as the sky's is. The lighting it
// found is put back. The original stepped each model a frame per drawing; update steps them by
// time. Without a backdrop, as BW2's, the frames are over the cleared screen.
// deferred: switching the set to quick lighting for the models and back again, with
//   setRenderingMode
// bw2 0x00502510
// bw1 0x00521e40
void CMoon::renderFigure() {
    const engine::SFigureScene &figure = getFigure();
    CDemonSet &set = owners_.set;
    const common::CVector3i light_direction = set.getLightDirection();
    const int ambient = set.getAmbientBaseQuick();
    const CColor3i flat_color = set.getFlatColor();
    owners_.special.clearScreen();
    owners_.special.clearZBufferNative();
    const SPictureArea picture = getPictureArea(owners_.screen.getWindowWidth(),
                                                owners_.screen.getWindowHeight(), figure.fit);
    const platform::EUpscaler upscaler = owners_.display.getUpscaler();
    if (!figure.backdrop.empty()) {
        displayInPicture(backdrop_, picture,
                         {.x = 0, .y = 0, .width = kFrontEndLayoutWidth, .height = kFrontEndHeight},
                         figure.backdrop_alpha, upscaler);
    }
    const ELayoutScene placed = beginLayoutScene(picture);
    engine::CDemonRenderer &renderer = owners_.renderer;
    const std::array<double, 3> &origin = figure.camera_origin;
    renderer.setCameraOriginFromScaledPoint({.x = static_cast<float>(origin[0]),
                                             .y = static_cast<float>(origin[1]),
                                             .z = static_cast<float>(origin[2])});
    renderer.setProjectionScale(static_cast<float>(figure.projection));
    common::CMatrix3x3f rotation;
    for (std::size_t row = 0; row < rotation.m.size(); ++row) {
        rotation.m.at(row) = {.x = static_cast<float>(figure.camera_rotation.at(row * 3)),
                              .y = static_cast<float>(figure.camera_rotation.at((row * 3) + 1)),
                              .z = static_cast<float>(figure.camera_rotation.at((row * 3) + 2))};
    }
    renderer.setupCameraAndProjection(rotation);
    renderer.processCameraRelativeVertex({});
    set.setLightDirection(toVector(figure.light));
    set.setFlatColor(figure.flat[0], figure.flat[1], figure.flat[2]);
    set.setAmbientBaseQuick(figure.ambient);
    for (std::size_t i = 0; i < figures_.size(); ++i) {
        figures_[i]->prepareForRender(figure_frames_[i], kMoonRenderFlags, renderer, set);
    }
    endLayoutScene(placed);
    owners_.three_d.setBlendMode(1);
    // The x87 rounds the timer to the nearest frame, an even one on a tie; past the frames, the
    // first is shown.
    auto frame = static_cast<int>(std::lrint(static_cast<double>(animation_timer_)));
    if (frame < 0 || std::cmp_greater_equal(frame, animation_textures_.size())) {
        frame = 0;
    }
    displayInPicture(animation_textures_[static_cast<std::size_t>(frame)], picture,
                     {.x = figure.frame_x,
                      .y = figure.frame_y,
                      .width = figure.frame_width,
                      .height = figure.frame_height},
                     figure.frame_alpha, upscaler);
    owners_.three_d.setBlendMode(0);
    set.setLightDirection(light_direction);
    set.setAmbientBaseQuick(ambient);
    set.setFlatColor(flat_color.r, flat_color.g, flat_color.b);
}

// The four tiles, the hand and the overlay. BW3 stepped the tiles and the hand's alpha here,
// once a drawing; update steps them by time. The original also set BW1's camera and lit the set
// as it, with nothing to draw in 3D, and left the set lit so.
// bw3 0x004f9670
void CMoon::renderTiled() {
    const engine::STiledScroll &tiled = getTiled();
    owners_.special.clearScreen();
    const SPictureArea picture = getPictureArea(owners_.screen.getWindowWidth(),
                                                owners_.screen.getWindowHeight(), tiled.fit);
    const platform::EUpscaler upscaler = owners_.display.getUpscaler();
    // The first tile's corner is rounded to the screen once and the others kept their distance
    // from it, so the tiles move together a screen pixel at a time and stay edge to edge.
    const auto toScreen = [](double length, float scale) {
        return static_cast<int>(std::lround(length * static_cast<double>(scale)));
    };
    const int left = picture.left + toScreen(tile_columns_[0], picture.scale_x);
    const int top = picture.top + toScreen(tile_rows_[0], picture.scale_y);
    const engine::EBitmapFilter filter = getPictureArtFilter(upscaler, picture);
    // The tiles reach past the picture; BW3's 4:3 screen hid them, so the bars beside a picture
    // keeping its shape do.
    const engine::CAlphaBitmap::SBounds within{
        .left = picture.left,
        .top = picture.top,
        .right = picture.left + picture.getWidth(kFrontEndLayoutWidth),
        .bottom = picture.top + picture.getHeight(kFrontEndHeight)};
    for (const double row : tile_rows_) {
        for (const double column : tile_columns_) {
            backdrop_.displayScaledWithin(
                left + toScreen(column - tile_columns_[0], picture.scale_x),
                top + toScreen(row - tile_rows_[0], picture.scale_y),
                picture.getWidth(kFrontEndLayoutWidth), picture.getHeight(kFrontEndHeight),
                kFullAlpha, filter, within);
        }
    }
    displayInPicture(hand_, picture,
                     {.x = tiled.hand_x,
                      .y = tiled.hand_y,
                      .width = tiled.hand_width,
                      .height = tiled.hand_height},
                     static_cast<int>(std::lround(hand_alpha_)), upscaler);
    displayInPicture(overlay_, picture,
                     {.x = 0, .y = 0, .width = kFrontEndLayoutWidth, .height = kFrontEndHeight},
                     kFullAlpha, upscaler);
}

void CMoon::endWideScene() {
    owners_.special.endOverlay();
    owners_.renderer.popViewport();
}

void CMoon::renderMoon(float projection_scale) {
    const engine::SSkyScene &sky = getSky();
    engine::CDemonRenderer &renderer = owners_.renderer;
    renderer.setCameraOriginFromScaledPoint({});
    renderer.setProjectionScale(projection_scale);
    renderer.setupSceneRendering({});
    const auto swing = static_cast<float>((static_cast<double>(rotation_phase_) - 0.5) * sky.swing);
    renderer.processCameraRelativeVertex(
        {.x = swing, .y = swing, .z = static_cast<float>(sky.depth)});
    owners_.set.setLightDirection(toVector(sky.moon_light));
    owners_.set.setAmbientBaseQuick(sky.moon_ambient);
    owners_.set.setFlatColor(sky.moon_flat, sky.moon_flat, sky.moon_flat);
    moon_.prepareForRender(0, kMoonRenderFlags, renderer, owners_.set);
}

// Each bat's place on its course sets the ambient level the next bat is lit by: brightest at
// the ends, darkest halfway.
void CMoon::renderBats() {
    CDemonSet &set = owners_.set;
    set.setLightDirection(toVector(getSky().bat_light));
    set.setAmbientBaseQuick(getSky().bat_ambient);
    if (!bats_enabled_) {
        return;
    }
    for (const SBat &bat : bats_) {
        if (0.0F > bat.course_position) {
            continue;
        }
        const int length = bat_courses_[static_cast<std::size_t>(bat.course_index)].getLength();
        // The original also drew a bat between its course's last frame and the wrap, at the
        // course's start, so it flashed across the moon.
        if (bat.course_position <= static_cast<float>(length - 1)) {
            renderBat(bat);
        }
        set.setAmbientBaseQuick(getBatAmbient(bat.course_position, length));
    }
}

void CMoon::renderBat(const SBat &bat) {
    engine::CDemonRenderer &renderer = owners_.renderer;
    common::CVector3f position;
    common::CVector3f euler;
    bat_courses_[static_cast<std::size_t>(bat.course_index)].evaluate(bat.course_position, position,
                                                                      euler);
    position.x += bat.random_offset.x;
    position.y += bat.random_offset.y;
    position.z += bat.random_offset.z;
    euler.y += kBatYawOffset;
    renderer.processCameraRelativeVertex(position);
    renderer.applyScaledTransform(euler, nullptr);
    bat_model_.prepareForRender(common::truncateToInt(bat.animation_frame), -1, renderer,
                                owners_.set);
    renderer.matrixPop();
}

// Two layers of the cloud texture added over the frame, the nearer at twice the scale of the
// farther. The original drew them over 640x480 whatever the mode; they cover the whole screen,
// sampled at the layout's scale so they look as they did at 480 lines, and only at 32 bits.
void CMoon::renderClouds() {
    cloud_texture_.initPalette();
    engine::IScreenDevice &screen = owners_.screen;
    if (screen.getBitsPerPixel() != kTrueColorDepth) {
        return;
    }
    const std::span<const std::uint8_t> texels = cloud_texture_.getRaw();
    const std::span<const std::uint32_t, 256> palette = screen.getHardwarePalette32();
    const std::span<void *> rows = screen.getScreenRows();
    const std::int32_t scroll_x = cloud_scroll_x_ >> 16;
    const std::int32_t scroll_y = cloud_scroll_y_ >> 16;
    const auto width = static_cast<std::uint32_t>(screen.getWindowWidth());
    const auto height = static_cast<std::uint32_t>(screen.getWindowHeight());
    const float scale = getFrontEndLayout(screen.getWindowWidth(), screen.getWindowHeight()).scale;
    // Each screen column's layout column, worked out once for every row.
    std::vector<std::uint32_t> layout_x(width);
    for (std::uint32_t x = 0; x < width; ++x) {
        layout_x[x] = static_cast<std::uint32_t>(static_cast<float>(x) / scale);
    }
    for (std::uint32_t y = 0; y < height; ++y) {
        const std::span<std::uint32_t> row(static_cast<std::uint32_t *>(rows[y]), width);
        const auto layout_y = static_cast<std::uint32_t>(static_cast<float>(y) / scale);
        for (std::uint32_t x = 0; x < width; ++x) {
            // A texel's top six bits pick one of the palette's first 64 colours.
            const std::uint32_t near =
                palette[cloudTexel(texels, layout_x[x], layout_y, 1, scroll_x, scroll_y) >> 2U];
            const std::uint32_t far =
                palette[cloudTexel(texels, layout_x[x], layout_y, 2, scroll_x, scroll_y) >> 2U];
            row[x] = addSaturating(addSaturating(row[x], near), far);
        }
    }
}

} // namespace nocturne::core
