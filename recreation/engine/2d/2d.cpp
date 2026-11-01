#include "engine/2d/2d.h"

#include "common/error/error.h"
#include "engine/dosio/dosio.h"
#include "engine/screendevice.h"

#include <algorithm>
#include <limits>
#include <optional>
#include <string>

namespace nocturne::engine {
namespace {

// initializeGameSystems always leaves g_RenderingMode at 640x480 in the table: retail's 3,
// nocedit's 4.
constexpr int kStartupWidth = 640;
constexpr int kStartupHeight = 480;
constexpr int kStartupBitsPerPixel = 8;

} // namespace

C2d::C2d(const CDosIo &dosio, IScreenDevice &screen, IRawInput &raw_input)
    : dosio_(dosio), screen_(screen), raw_input_(raw_input) {}

// The retail build also loads startup/font.ndx and font.bin, for an antialiased font nothing
// draws, and builds two blend tables nothing reads; neither is kept.
// nocedit 0x00401010
void C2d::initGraphicsSystem() {
    if (screen_.initializeGraphicsSystem(screen_.getWindowWidth(), screen_.getWindowHeight()) ==
        0) {
        common::displayErrorAndQuit("No room for frame buffer.  Please run SETUP");
    }
    // A refusal is ignored: initializeGameSystems sets the real mode next and checks that.
    screen_.setScreenResolution(kStartupWidth, kStartupHeight, kStartupBitsPerPixel);
    loadPaletteFile("vga.act");
    loadLightTable("vga.lte");
    loadOrBuildColorMap("vga.map");
    screen_.setupColorPalette();
    reciprocal_lookup_table_[0] = std::numeric_limits<std::uint32_t>::max();
    for (std::uint32_t i = 1; i < kReciprocalCount; ++i) {
        reciprocal_lookup_table_[i] = std::numeric_limits<std::uint32_t>::max() / i;
    }
    const std::optional<std::string> defaults = dosio_.readFile("art", "default.act");
    if (defaults) {
        std::copy_n(defaults->begin(), std::min(defaults->size(), kPaletteBytes),
                    default_palette_.begin());
    }
}

// The original jumps straight to wddvmem's.
// nocedit 0x00402a70
void C2d::resetGraphicsSystem() {
    screen_.resetGraphicsSystem();
}

// A short file replaces only the entries it has.
// nocedit 0x004015a0
void C2d::loadPaletteFile(std::string_view filename) {
    const std::optional<std::string> palette = dosio_.readFile("art", filename);
    if (!palette) {
        common::displayErrorAndQuit("Unable to open VGA palette");
    }
    std::copy_n(palette->begin(), std::min(palette->size(), kPaletteBytes),
                source_palette_data_.begin());
}

// nocedit 0x00401800
void C2d::setupViewportAndClipping(int left, int top, int right, int bottom) {
    clip_left_ = left;
    clip_top_ = top;
    clip_right_ = right;
    clip_bottom_ = bottom;
    viewport_width_ = right - left + 1;
    viewport_height_ = bottom - top + 1;
    const int half_width = ((viewport_width_ / 2) & 0xffff) - 1;
    const int half_height = ((viewport_height_ / 2) & 0xffff) - 1;
    projection_.half_width_fixed = half_width << 16;
    projection_.neg_half_height_fixed = -half_height << 16;
    projection_.center_x_fixed = (left + half_width + 1) << 16;
    projection_.center_y_fixed = (top + half_height + 1) << 16;
}

const C2d::Palette &C2d::getSourcePaletteData() const {
    return source_palette_data_;
}

const C2d::Palette &C2d::getDefaultPalette() const {
    return default_palette_;
}

std::span<const std::uint8_t, C2d::kColorCubeSize> C2d::getColorCubeLookup() const {
    return color_cube_lookup_;
}

std::span<const C2d::LightRow, C2d::kLightLevels + 2> C2d::getLightTable() const {
    return light_table_;
}

std::span<const std::uint32_t, C2d::kReciprocalCount> C2d::getReciprocalLookupTable() const {
    return reciprocal_lookup_table_;
}

int C2d::getClipLeft() const {
    return clip_left_;
}

int C2d::getClipTop() const {
    return clip_top_;
}

int C2d::getClipRight() const {
    return clip_right_;
}

int C2d::getClipBottom() const {
    return clip_bottom_;
}

int C2d::getViewportWidth() const {
    return viewport_width_;
}

int C2d::getViewportHeight() const {
    return viewport_height_;
}

const SProjectionParams &C2d::getProjection() const {
    return projection_;
}

SClipRect C2d::getClipRect() const {
    return {.left = clip_left_, .top = clip_top_, .right = clip_right_, .bottom = clip_bottom_};
}

void C2d::setClipRect(const SClipRect &clip) {
    clip_left_ = clip.left;
    clip_top_ = clip.top;
    clip_right_ = clip.right;
    clip_bottom_ = clip.bottom;
}

void C2d::setProjection(const SProjectionParams &projection) {
    projection_ = projection;
}

void C2d::setViewportSize(int width, int height) {
    viewport_width_ = width;
    viewport_height_ = height;
}

int C2d::getActiveRenderColor() const {
    return active_render_color_;
}

void C2d::setActiveRenderColor(int color) {
    active_render_color_ = color;
}

} // namespace nocturne::engine
