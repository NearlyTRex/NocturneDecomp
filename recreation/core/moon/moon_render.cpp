#include "common/math/fixed.h"
#include "common/math/vector3i.h"
#include "core/color3i.h"
#include "core/moon/moon.h"
#include "core/moon/moon_functions.h"
#include "core/set/demonset.h"
#include "engine/3d/3d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"

#include <algorithm>
#include <bit>
#include <cstddef>
#include <cstdint>
#include <span>
#include <utility>

namespace nocturne::core {
namespace {

constexpr float kProjectionScale = 112.0F;
constexpr double kMoonSwing = 48.0;
constexpr float kMoonDepth = 72.0F;
constexpr common::CVector3i kMoonLight{.x = -37000, .y = -37000, .z = 37000};
constexpr int kMoonAmbient = 0x280;
constexpr int kMoonFlatScale = 0x10000;
constexpr int kMoonRenderFlags = 0x205;
constexpr common::CVector3i kBatLight{.x = -0x4844, .y = -0x4844, .z = 0x4844};
constexpr int kBatAmbient = 0x2000;
// A quarter turn, as the original stores it.
constexpr float kBatYawOffset = std::bit_cast<float>(0x3fc90fdbU);
// The cloud layers cover the menu's 640x480.
constexpr int kCloudWidth = 640;
constexpr int kCloudHeight = 480;
constexpr int kTrueColorDepth = 32;
constexpr std::uint32_t kTexelMask = 0xff;
constexpr std::uint32_t kCloudRowShift = 8;
constexpr int kAnimationAlpha = 48000;

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
    CDemonSet &set = owners_.set;
    const common::CVector3i light_direction = set.getLightDirection();
    const int ambient = set.getAmbientBaseQuick();
    const CColor3i flat_color = set.getFlatColor();
    owners_.special.clearScreen();
    owners_.special.clearZBufferNative();
    renderMoon();
    renderBats();
    renderClouds();
    owners_.three_d.setBlendMode(1);
    // The timer runs to 60 over 30 frames; the second half holds the first frame.
    int frame = common::truncateToInt(animation_timer_);
    if (frame < 0 || std::cmp_greater_equal(frame, kAnimationFrameCount)) {
        frame = 0;
    }
    animation_textures_[static_cast<std::size_t>(frame)].display(0, 0, kAnimationAlpha);
    owners_.three_d.setBlendMode(0);
    set.setLightDirection(light_direction);
    set.setAmbientBaseQuick(ambient);
    set.setFlatColor(flat_color.r, flat_color.g, flat_color.b);
}

void CMoon::renderMoon() {
    engine::CDemonRenderer &renderer = owners_.renderer;
    renderer.setCameraOriginFromScaledPoint({});
    renderer.setProjectionScale(kProjectionScale);
    renderer.setupSceneRendering({});
    const auto swing =
        static_cast<float>((static_cast<double>(rotation_phase_) - 0.5) * kMoonSwing);
    renderer.processCameraRelativeVertex({.x = swing, .y = swing, .z = kMoonDepth});
    owners_.set.setLightDirection(kMoonLight);
    owners_.set.setAmbientBaseQuick(kMoonAmbient);
    owners_.set.setFlatColor(kMoonFlatScale, kMoonFlatScale, kMoonFlatScale);
    moon_.prepareForRender(0, kMoonRenderFlags, renderer, owners_.set);
}

// Each bat's place on its course sets the ambient level the next bat is lit by: brightest at
// the ends, darkest halfway.
void CMoon::renderBats() {
    CDemonSet &set = owners_.set;
    set.setLightDirection(kBatLight);
    set.setAmbientBaseQuick(kBatAmbient);
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
// farther. The original drew them over 640x480 whatever the mode; they cover what of that the
// screen has, and only at 32 bits.
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
    const auto width = static_cast<std::uint32_t>(std::min(kCloudWidth, screen.getWindowWidth()));
    const auto height =
        static_cast<std::uint32_t>(std::min(kCloudHeight, screen.getWindowHeight()));
    for (std::uint32_t y = 0; y < height; ++y) {
        const std::span<std::uint32_t> row(static_cast<std::uint32_t *>(rows[y]), width);
        for (std::uint32_t x = 0; x < width; ++x) {
            // A texel's top six bits pick one of the palette's first 64 colours.
            const std::uint32_t near =
                palette[cloudTexel(texels, x, y, 1, scroll_x, scroll_y) >> 2U];
            const std::uint32_t far =
                palette[cloudTexel(texels, x, y, 2, scroll_x, scroll_y) >> 2U];
            row[x] = addSaturating(addSaturating(row[x], near), far);
        }
    }
}

} // namespace nocturne::core
