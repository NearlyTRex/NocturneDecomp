#include "core/dcamera/demoncamera.h"

#include "common/math/fixed.h"
#include "common/random/watcomrandom.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/fog.h"
#include "core/dcamera/foggrid.h"
#include "core/dcamera/gammacurve.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

// The tallest frame the software renderer draws; a taller screen is scaled up to.
constexpr int kMaxFramebufferHeight = 480;
// The widest display the scene is drawn at before it is scaled up.
constexpr int kMaxDisplayWidth = 320;
constexpr int kAspectWidth = 4;
constexpr int kAspectHeight = 3;
constexpr int kGammaOne = 0x10000;
constexpr int kLevelCount = 256;
constexpr int kMaxLevel = 255;
constexpr double kLevelFraction = 1.0 / kMaxLevel;
constexpr double kFixed16 = 65536.0;
constexpr float kFixed8 = 256.0F;
constexpr double kFullIntensity = 65535.0;
// Each fog density is averaged with its six neighbours.
constexpr unsigned kFogNeighbourhood = 7;
constexpr std::size_t kFogMask = SFogGrid::kSize - 1;

[[nodiscard]] std::uint32_t repeatLevel(int level) {
    const auto byte = static_cast<std::uint32_t>(level) & 0xffU;
    return byte | (byte << 8U) | (byte << 16U) | (byte << 24U);
}

[[nodiscard]] int paletteLevel(const SCameraTables &tables, int index) {
    // The original read outside the palette for an index past its ends.
    const auto entry = static_cast<std::size_t>(std::clamp(index, 0, kMaxLevel));
    return static_cast<int>(tables.lightmap_palette[entry] & 0xffU);
}

void passFogColor(const SDemonCameraOwners &owners) {
    const CColor3i &index = owners.tables.fog_color_index;
    static_cast<void>(owners.special.setFogColor(paletteLevel(owners.tables, index.r),
                                                 paletteLevel(owners.tables, index.g),
                                                 paletteLevel(owners.tables, index.b)));
}

// nocedit 0x0044bb70
void resetFogSamplingOffset(SFogGrid &fog) {
    fog.sampling_offset = {};
}

// Filled x by y by z with the CRT stream's low bytes, then smoothed in place in the same order,
// so each density averages neighbours already smoothed with ones not yet.
// nocedit 0x0044bba0
void generateFogGrid(SFogGrid &fog, common::CWatcomRandom &crt_random) {
    for (std::size_t x = 0; x < SFogGrid::kSize; ++x) {
        for (std::size_t y = 0; y < SFogGrid::kSize; ++y) {
            for (SFogGrid::Plane &plane : fog.planes) {
                plane[y][x] = static_cast<std::uint8_t>(crt_random.rand());
            }
        }
    }
    for (std::size_t x = 0; x < SFogGrid::kSize; ++x) {
        for (std::size_t y = 0; y < SFogGrid::kSize; ++y) {
            for (std::size_t z = 0; z < SFogGrid::kSize; ++z) {
                SFogGrid::Plane &plane = fog.planes[z];
                const unsigned sum = plane[y][(x + 1) & kFogMask] + plane[y][(x - 1) & kFogMask] +
                                     plane[(y + 1) & kFogMask][x] + plane[(y - 1) & kFogMask][x] +
                                     plane[y][x] + fog.planes[(z - 1) & kFogMask][y][x] +
                                     fog.planes[(z + 1) & kFogMask][y][x];
                plane[y][x] = static_cast<std::uint8_t>(sum / kFogNeighbourhood);
            }
        }
    }
    resetFogSamplingOffset(fog);
}

} // namespace

// deferred: the scene not yet open, with beginScene and endScene
// nocedit 0x0044c030
CDemonCamera::CDemonCamera(const SDemonCameraOwners &owners) : owners_(owners) {}

// nocedit 0x0044c090
CDemonCamera::~CDemonCamera() = default;

// nocedit 0x0044c0f0
void CDemonCamera::initLookupTable() {
    generateGammaPalette(kGammaOne);
    init(owners_.screen.getWindowHeight());
    generateFogGrid();
    for (std::size_t a = 0; a < SCameraTables::kLookupSize; ++a) {
        for (std::size_t b = 0; b < SCameraTables::kLookupSize; ++b) {
            owners_.tables.lookup_table[(a * SCameraTables::kLookupSize) + b] =
                static_cast<std::uint8_t>((a * b) / SCameraTables::kLookupSize);
        }
    }
}

// The original left 4 KB spare past each buffer, and 16 bytes to align it.
// nocedit 0x0044c190
void CDemonCamera::init(int screen_height) {
    free();
    owners_.tables.screen_width = (screen_height * kAspectWidth) / kAspectHeight;
    owners_.tables.screen_height = screen_height;
    framebuffer_height_ = std::min(screen_height, kMaxFramebufferHeight);
    framebuffer_width_ = (framebuffer_height_ * kAspectWidth) / kAspectHeight;
    scale_factor_ = 1;
    display_width_ = framebuffer_width_;
    display_height_ = framebuffer_height_;
    owners_.tables.downscale_iterations = 0;
    while (display_width_ > kMaxDisplayWidth) {
        display_width_ /= 2;
        display_height_ /= 2;
        ++owners_.tables.downscale_iterations;
        scale_factor_ *= 2;
    }
    const std::size_t pixels = static_cast<std::size_t>(framebuffer_width_) *
                               static_cast<std::size_t>(framebuffer_height_);
    framebuffer_.assign(pixels, 0);
    zbuffer_.assign(pixels, 0);
}

// deferred: forgetting the dirty rectangles, with pushRect and restoreZBufferRectArray
// nocedit 0x0044c360
void CDemonCamera::free() {
    framebuffer_.clear();
    zbuffer_.clear();
}

// nocedit 0x004529a0
void CDemonCamera::generateFogGrid() {
    core::generateFogGrid(owners_.tables.fog_grid, owners_.crt_random);
}

// nocedit 0x004528e0
void CDemonCamera::setEffectIntensity(float intensity) {
    corona_blend_factor_ = common::truncateToInt(static_cast<double>(intensity) * kFullIntensity);
}

// nocedit 0x00453640
void CDemonCamera::initCameraFog(const SFog &fog_config) {
    owners_.tables.fog_color_index = fog_config.color_index;
    passFogColor(owners_);
    SFogGrid &grid = owners_.tables.fog_grid;
    grid.scroll_vector = {
        .x = common::truncateToInt(static_cast<double>(fog_config.scroll.x) * kFixed16),
        .y = common::truncateToInt(static_cast<double>(fog_config.scroll.y) * kFixed16),
        .z = common::truncateToInt(static_cast<double>(fog_config.scroll.z) * kFixed16)};
    grid.height_threshold = common::truncateToInt(fog_config.height_threshold * kFixed8);
    grid.density_multiplier =
        common::truncateToInt(static_cast<double>(fog_config.density_multiplier) * kFixed16);
}

// Checked against nocedit's own code for every gamma from 0x8000 to 0x10000; only a gamma of one
// differs, where the original's table is not the identity.
// nocedit 0x00453bd0
void CDemonCamera::generateGammaPalette(int gamma_value) {
    const float exponent = gammaExponent(gamma_value);
    for (int level = 0; level < kLevelCount; ++level) {
        owners_.tables.lightmap_palette[static_cast<std::size_t>(level)] = repeatLevel(
            applyGammaCurve(static_cast<double>(level) * kLevelFraction, exponent, kMaxLevel));
    }
    passFogColor(owners_);
}

const std::string &CDemonCamera::getCameraName() const {
    return camera_name_;
}

void CDemonCamera::setCameraName(std::string_view camera_name) {
    camera_name_ = camera_name;
}

float CDemonCamera::getMaxDistance() const {
    return max_distance_;
}

void CDemonCamera::setMaxDistance(float max_distance) {
    max_distance_ = max_distance;
}

int CDemonCamera::getFramebufferWidth() const {
    return framebuffer_width_;
}

int CDemonCamera::getFramebufferHeight() const {
    return framebuffer_height_;
}

int CDemonCamera::getScaleFactor() const {
    return scale_factor_;
}

int CDemonCamera::getDisplayWidth() const {
    return display_width_;
}

int CDemonCamera::getDisplayHeight() const {
    return display_height_;
}

std::span<const std::uint32_t> CDemonCamera::getFramebuffer() const {
    return framebuffer_;
}

std::span<const std::uint32_t> CDemonCamera::getZBuffer() const {
    return zbuffer_;
}

int CDemonCamera::getCoronaBlendFactor() const {
    return corona_blend_factor_;
}

} // namespace nocturne::core
