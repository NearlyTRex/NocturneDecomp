#include "core/dcamera/demoncamera.h"

#include "common/error/error.h"
#include "common/math/fixed.h"
#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "common/random/watcomrandom.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/fog.h"
#include "core/dcamera/foggrid.h"
#include "core/dcamera/gammacurve.h"
#include "core/dlight/demonlight.h"
#include "core/dstrender/dstrender.h"
#include "engine/drender/demonrenderer.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <format>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

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
// A background scene draws 32-bit pixels, red above green above blue.
constexpr int kBackgroundBitsPerPixel = 32;
constexpr int kRedBitPosition = 16;
constexpr int kGreenBitPosition = 8;
constexpr int kBlueBitPosition = 0;
constexpr int kSixteenBitsPerPixel = 16;
constexpr int kThirtyTwoBitsPerPixel = 32;
// The drifting fog moves 4 planes a second, in 65536ths of a plane.
constexpr int kFogDriftRate = 4;
constexpr int kWholeFogPlane = 0x10000;
// The effect's intensity to the coronas' starting light, 0 to 63.
constexpr int kCoronaLevelDivisor = 0x400;

// The display's pixels the precomputes keep, 320 a row.
constexpr std::size_t kDisplayColumns = SCameraTables::kFogPlaneWidth;
constexpr std::size_t kDisplayRows = SCameraTables::kFogPlaneHeight;
// screenToWorldCoord's depth where nothing was drawn, and a depth's 24.8 to the world's.
constexpr int kNoDepth = 0x7fffffff;
constexpr float kDepthToWorld = 1.0F / 256.0F;
// The background scene's pixel holds its surface normal, x then y then z down from the top,
// each a signed byte of 127ths.
constexpr unsigned kNormalXShift = 16;
constexpr unsigned kNormalYShift = 8;
constexpr float kNormalScale = 1.0F / 127.0F;
// A light's depths are taken this much nearer, the moving screen's further, so the surfaces
// they light aren't shadowed by themselves.
constexpr std::string_view kMovingScreenFilter = "movscrn.raw";
constexpr int kLightDepthBias = 0x80;
constexpr int kMovingScreenDepthBias = 0x100;

[[nodiscard]] float toNormalComponent(std::uint32_t bits) {
    return static_cast<float>(static_cast<std::int8_t>(bits & 0xffU)) * kNormalScale;
}

[[nodiscard]] int getNextFogPlane(int plane) {
    return plane + 1 < static_cast<int>(SCameraTables::kMaxFogPlanes) ? plane + 1 : 0;
}

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
// bw1 0x0044cc30
// bw2 0x0043b570
// bw3 0x00448d70
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

// nocedit 0x0044c360
// bw1 0x0044cdf0
// bw2 0x0043b730
// bw3 0x00448f30
void CDemonCamera::free() {
    framebuffer_.clear();
    zbuffer_.clear();
    forgetDirtyRects();
}

void CDemonCamera::forgetDirtyRects() {
    dirty_rects_.clear();
    dirty_rects_overflowed_ = false;
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

// The viewport is the camera's frame (the decomp's windowed fix), where the original took the
// screen's size.
// deferred: the camera shake's attack, sustain and decay and the screen's jitter, which stay
//   still until a shake starts, with initCameraShake
// The original also kept the frame as the scene's viewport, which only told restoreZBufferRect
// whether a rectangle met the frame.
// nocedit 0x0044c430
void CDemonCamera::beginScene(int skip_clear_buffers) {
    if (scene_open_) {
        common::displayErrorAndQuit("CDemonCamera::beginScene - Scene already open!");
    }
    scene_open_ = true;
    setSceneCamera(skip_clear_buffers);
    skip_clear_buffers_ = skip_clear_buffers != 0;
    engine::CDemonRenderer &renderer = owners_.renderer;
    renderer.pushViewport(0, 0, framebuffer_width_ - 1, framebuffer_height_ - 1);
    forgetDirtyRects();
    renderer.setCameraOriginFromScaledPoint(getPosition());
    renderer.setProjectionScale(getFocalLength());
    renderer.setupCameraAndProjection(getRotationMatrix());
    if (skip_clear_buffers == 0) {
        clearSceneBuffers();
    }
    updateTransformMatrices();
}

void CDemonCamera::clearSceneBuffers() {
    engine::CSpecial &special = owners_.special;
    if (special.getUseDirect3D()) {
        static_cast<void>(special.beginScene());
    }
    special.clearScreen();
    special.clearZBufferNative();
    if (special.getUseExternalRenderer()) {
        static_cast<void>(special.clear());
        static_cast<void>(special.clearZBuffer());
    }
}

bool CDemonCamera::isSceneOpen() const {
    return scene_open_;
}

// nocedit 0x0044cb80
void CDemonCamera::endScene(int skip_zbuffer_copy) {
    if (!scene_open_) {
        common::displayErrorAndQuit("CDemonCamera::endScene - Scene not open!");
    }
    scene_open_ = false;
    engine::CSpecial &special = owners_.special;
    if (special.getUseDirect3D()) {
        static_cast<void>(special.endScene());
    }
    if (!skip_clear_buffers_ && skip_zbuffer_copy == 0) {
        if (special.getUseExternalRenderer()) {
            static_cast<void>(special.masterZBuffer(0));
        }
        saveZBufferScanlines();
    }
    owners_.renderer.popViewport();
    resetSceneCamera();
}

// nocedit 0x0044c3e0
void CDemonCamera::setSceneCamera(int skip_clear_buffers) {
    owners_.tables.scene_camera = this;
    owners_.tables.kept_camera = skip_clear_buffers != 0 ? this : nullptr;
}

// deferred: the fog's colour from the lightmap palette as the solid colour, with
//   getFogValueAtPosition
// nocedit 0x004537d0
void CDemonCamera::setupPerspectiveAndFog(common::CVector3f *position,
                                          platform::SProjectedVertex *projected_vertex) {
    SCameraTables &tables = owners_.tables;
    if (position == nullptr || tables.background_scene_depth != 0) {
        tables.perspective_reciprocal = 0;
        return;
    }
    common::CVector3i world_position = position->toFixed8();
    tables.perspective_reciprocal = getFogValueAtPosition(&world_position, projected_vertex);
}

// nocedit 0x0044c410
void CDemonCamera::resetSceneCamera() {
    owners_.tables.kept_camera = nullptr;
    owners_.tables.scene_camera = nullptr;
}

// nocedit 0x0044c740
void CDemonCamera::pushRect(const CRect &rect) {
    if (dirty_rects_.size() >= kMaxDirtyRects) {
        dirty_rects_overflowed_ = true;
        return;
    }
    dirty_rects_.push_back(rect);
}

// The original merged each row's rectangles into spans before copying them, which copies the
// same depths. Its copy went to 8-byte boundaries, a depth or so past a rectangle's sides, and
// copied a few even for a rectangle wholly past the frame's right.
// nocedit 0x0044c860
void CDemonCamera::restoreZBufferRectArray() {
    if (owners_.special.getUseExternalRenderer()) {
        static_cast<void>(owners_.special.restoreZBuffer(
            0, 0, 0, owners_.screen.getWindowWidth() - 1, owners_.screen.getWindowHeight() - 1));
        return;
    }
    if (dirty_rects_overflowed_) {
        restoreDepths({.x_min = 0,
                       .x_max = framebuffer_width_ - 1,
                       .y_min = 0,
                       .y_max = framebuffer_height_ - 1});
        return;
    }
    for (const CRect &rect : dirty_rects_) {
        restoreDepths({.x_min = std::max(rect.x_min, 0),
                       .x_max = std::min(rect.x_max, framebuffer_width_ - 1),
                       .y_min = std::max(rect.y_min, 0),
                       .y_max = std::min(rect.y_max, framebuffer_height_ - 1)});
    }
}

// The original's restoreZBufferRect, which restoreZBufferRectArray gave the whole frame; its test
// that the rectangle met the scene's viewport always passed there.
// nocedit 0x0044c780
void CDemonCamera::restoreDepths(const CRect &rect) {
    if (rect.x_min > rect.x_max) {
        return;
    }
    const std::span<std::uint32_t *> depth_rows = owners_.screen.getZBufferRows();
    const auto width = static_cast<std::size_t>(framebuffer_width_);
    const std::size_t count = static_cast<std::size_t>(rect.x_max - rect.x_min) + 1;
    for (int row = rect.y_min; row <= rect.y_max; ++row) {
        const std::size_t from =
            (static_cast<std::size_t>(row) * width) + static_cast<std::size_t>(rect.x_min);
        std::copy_n(zbuffer_.begin() + static_cast<std::ptrdiff_t>(from), count,
                    depth_rows[static_cast<std::size_t>(row)] + rect.x_min);
    }
}

// nocedit 0x004511c0
void CDemonCamera::lockAndRenderToBuffer(int frame_time) {
    engine::CSpecial &special = owners_.special;
    const bool held = owners_.screen.getWindowHeight() > kMaxFramebufferHeight;
    if (!held) {
        static_cast<void>(special.lockFrame());
    } else if (special.lockHoldBuffer() == 0) {
        common::displayErrorAndQuit(
            "Unable to lock hold buffer.   Please set 640x480 as your resolution.");
    }
    compositeLightmapToFramebuffer(frame_time);
    if (held) {
        static_cast<void>(special.unlockHoldBuffer());
    } else {
        static_cast<void>(special.unlockFrame());
    }
    if (special.getUseDirect3D()) {
        static_cast<void>(special.beginScene());
    }
}

// Rows 1 to the frame's last but one, as the original drew them.
// deferred: the fog grid's drift moved on as the fog drifts to its next plane, with
//   updateFogScrollOffset's reader getFogValueAtPosition
// deferred: the backdrop moved on the screen as the camera shakes, with initCameraShake
// deferred: the backdrop's edge pixels blended one at a time, with precomputeNormals' edge list
// nocedit 0x00453270
void CDemonCamera::compositeLightmapToFramebuffer(int frame_time) {
    SCameraTables &tables = owners_.tables;
    tables.fog_drift_fraction += frame_time * kFogDriftRate;
    if (tables.fog_drift_fraction > kWholeFogPlane) {
        tables.fog_drift_fraction -= kWholeFogPlane;
        tables.fog_drift_plane = getNextFogPlane(tables.fog_drift_plane);
    }
    blurCoronaBufferAndClearEdges();
    const SLightmapLook look{.palette = tables.lightmap_palette, .fog_color = getFogColor()};
    const bool sixteen = owners_.screen.getBitsPerPixel() == kSixteenBitsPerPixel;
    const std::span<void *> rows = owners_.screen.getScreenRows();
    const engine::SColorMasks &masks = owners_.screen.getColorMasks();
    const auto width = static_cast<std::size_t>(framebuffer_width_);
    const std::span<const std::uint8_t> light = tables.blurred_light;
    const std::span<const std::uint8_t> fog = tables.fog_mix;
    for (int y = 1; y < framebuffer_height_ - 1; ++y) {
        const std::size_t display_row =
            static_cast<std::size_t>(y) >> static_cast<unsigned>(tables.downscale_iterations);
        const std::span<const std::uint8_t> light_row =
            light.subspan(display_row * SCameraTables::kFogPlaneWidth);
        const std::span<const std::uint8_t> light_below =
            light.subspan((display_row + 1) * SCameraTables::kFogPlaneWidth);
        const std::span<const std::uint8_t> fog_row =
            fog.subspan(display_row * SCameraTables::kFogPlaneWidth);
        const std::span<const std::uint32_t> backdrop(
            framebuffer_.data() + (static_cast<std::size_t>(y) * width), width);
        void *const row = rows[static_cast<std::size_t>(y)];
        const bool even = (y % 2) == 0;
        const bool shared = scale_factor_ != 1;
        if (sixteen) {
            const std::span<std::uint16_t> output(static_cast<std::uint16_t *>(row), width);
            if (shared && even) {
                blendHBilerpLightmapSharedU64toU16pBB56Px2MMX(output, backdrop, light_row, fog_row,
                                                              look, masks);
            } else if (shared) {
                blendVHBilerpLightmapSharedU64toU16pBB34Px2MMX(output, backdrop, light_row,
                                                               light_below, fog_row, look, masks);
            } else if (even) {
                blendLightmapPerPxU32toU16pBB12Px2MMX(output, backdrop, light_row, fog_row, look,
                                                      masks);
            } else {
                blendLightmapPerPxU64toU16pAmbientPx2MMX(output, backdrop, light_row, fog_row, look,
                                                         masks);
            }
            continue;
        }
        const std::span<std::uint32_t> output(static_cast<std::uint32_t *>(row), width);
        if (shared && even) {
            blendHBilerpLightmapSharedU64toU64pBB12Px2MMX(output, backdrop, light_row, fog_row,
                                                          look);
        } else if (shared) {
            blendVHBilerpLightmapSharedU64toU64pAmbientPx2MMX(output, backdrop, light_row,
                                                              light_below, fog_row, look);
        } else if (even) {
            blendLightmapPerPxU32toU32BB12Px2MMX(output, backdrop, light_row, fog_row, look);
        } else {
            blendLightmapPerPxU64toU32AmbientPx2MMX(output, backdrop, light_row, fog_row, look);
        }
    }
}

// The original's 16-bit fog colour took red, green and blue in that order from the top.
std::uint32_t CDemonCamera::getFogColor() const {
    const CColor3i &index = owners_.tables.fog_color_index;
    const auto level = [this](int at) {
        return static_cast<std::uint32_t>(paletteLevel(owners_.tables, at));
    };
    if (owners_.screen.getBitsPerPixel() != kThirtyTwoBitsPerPixel) {
        return (level(index.r) << kRedBitPosition) | (level(index.g) << kGreenBitPosition) |
               level(index.b);
    }
    const engine::SColorChannels &channels = owners_.screen.getColorChannels();
    return (level(index.b) << static_cast<unsigned>(channels.blue.bit_position)) |
           (level(index.r) << static_cast<unsigned>(channels.red.bit_position)) |
           (level(index.g) << static_cast<unsigned>(channels.green.bit_position));
}

// nocedit 0x004509b0
void CDemonCamera::blurCoronaBufferAndClearEdges() {
    SCameraTables &tables = owners_.tables;
    const auto width = static_cast<std::size_t>(display_width_);
    const auto height = static_cast<std::size_t>(display_height_);
    const std::span<std::uint8_t> blurred = tables.blurred_light;
    for (std::size_t row = 1; row + 1 < height; ++row) {
        verticalBlur3TapMMXStride320(blurred.subspan(row * SCameraTables::kFogPlaneWidth),
                                     tables.corona_light, row, width);
    }
    for (std::size_t row = 0; row < height; ++row) {
        blurred[row * SCameraTables::kFogPlaneWidth] = 0;
        blurred[(row * SCameraTables::kFogPlaneWidth) + width - 1] = 0;
    }
    for (std::size_t column = 0; column < width; ++column) {
        blurred[column] = 0;
        blurred[((height - 1) * SCameraTables::kFogPlaneWidth) + column] = 0;
    }
}

// deferred: a still fog's one plane copied into the fog over the display, scaled to it (the
//   decomp's fog plane scale fix), once a light has drawn its corona over the backdrop, with
//   renderLightCoronas and saveBackdrop
// nocedit 0x00451130
void CDemonCamera::processCorona() {
    SCameraTables &tables = owners_.tables;
    std::ranges::fill(tables.corona_light,
                      static_cast<std::uint8_t>(corona_blend_factor_ / kCoronaLevelDivisor));
    if (tables.fog_plane_count > 1) {
        blendFogPlanes(tables.fog_drift_plane, tables.fog_drift_fraction);
    }
}

// The original also kept each pixel's world position before a mirror's transform, which nothing
// read.
// deferred: a pixel a mirror's reflection drew taken back through the mirror's saved transform,
//   with setupMirrorRendering and restoreAlphaTransform
// deferred: the backdrop's depth edges listed for the composite to blend a pixel at a time, with
//   blendLightmapPixel16 and blendLightmapPixel32
// nocedit 0x0044e360
void CDemonCamera::precomputeNormals() {
    const std::size_t pixels = kDisplayColumns * kDisplayRows;
    precomputed_world_.assign(pixels, {});
    precomputed_normals_.assign(pixels, {});
    precomputed_depths_.assign(pixels, 0);
    const std::span<void *> rows = owners_.screen.getScreenRows();
    int farthest = 0;
    for (int y = 1; y < display_height_; ++y) {
        const auto scale = static_cast<std::size_t>(scale_factor_);
        const auto *const row =
            static_cast<const std::uint32_t *>(rows[static_cast<std::size_t>(y) * scale]);
        for (int x = 1; x < display_width_; ++x) {
            const std::uint32_t pixel = row[static_cast<std::size_t>(x) * scale];
            common::CVector3i point;
            static_cast<void>(screenToWorldCoord(x * scale_factor_, y * scale_factor_, &point));
            if (point.z != kNoDepth && farthest < point.z) {
                farthest = point.z;
            }
            common::CVector3i world;
            screenToWorldTransform(&point, &world);
            const std::size_t at =
                (static_cast<std::size_t>(y) * kDisplayColumns) + static_cast<std::size_t>(x);
            precomputed_world_[at] = world;
            precomputed_depths_[at] = point.z;
            precomputed_normals_[at] = {.x = toNormalComponent(pixel >> kNormalXShift),
                                        .y = toNormalComponent(pixel >> kNormalYShift),
                                        .z = toNormalComponent(pixel)};
        }
    }
    setMaxDistance(static_cast<float>(farthest) * kDepthToWorld);
    saveBackdrop();
    precomputed_lights_ = 0;
}

// deferred: the still fog's plane copied into the fog over the display once a backdrop is saved,
//   with processCorona's still-fog copy
// deferred: a camera without a .fog given one, its fog sampled along each pixel's ray and
//   written to backdrop\, with sampleFogAlongRay and CLZWCompress
// deferred: the fog grid's sampling offset started over, with getFogValueAtPosition
// nocedit 0x004529b0
void CDemonCamera::saveBackdrop() {
    SCameraTables &tables = owners_.tables;
    tables.fog_drift_plane = 0;
    tables.fog_drift_fraction = 0;
    const common::CVector3i &drift = tables.fog_grid.scroll_vector;
    tables.fog_plane_count = drift.x == 0 && drift.y == 0 && drift.z == 0
                                 ? 1
                                 : static_cast<int>(SCameraTables::kMaxFogPlanes);
}

// The original took each light's three buffers from a pool of 25, so eight lights at most, and
// with no rectangle, as only the editor asks, started the pool over.
// nocedit 0x0044de10
void CDemonCamera::precomputeLight(CDemonLight &light_source, const CRect &rect) {
    if (precomputed_lights_ >= kMaxPrecomputedLights) {
        common::displayErrorAndQuit(
            std::format("CDemonCamera::precomputeLight - Too many lights visible from camera {}",
                        camera_name_));
    }
    const std::size_t pixels = kDisplayColumns * kDisplayRows;
    if (light_map_pool_.empty()) {
        light_map_pool_.resize(pixels * static_cast<std::size_t>(kMaxPrecomputedLights));
    }
    const std::span<SLightMapPixel> map =
        std::span(light_map_pool_)
            .subspan(static_cast<std::size_t>(precomputed_lights_) * pixels, pixels);
    ++precomputed_lights_;
    light_source.setLightMap(map);
    light_source.initializeVisibilityBuffer();
    const bool moving_screen = light_source.getFilterName() == kMovingScreenFilter;
    const int bias = moving_screen ? kMovingScreenDepthBias : kLightDepthBias;
    const std::span<int, CDemonLight::kDisplayRows> lefts = light_source.getLeftExtents();
    const std::span<int, CDemonLight::kDisplayRows> rights = light_source.getRightExtents();
    CRect area{.x_min = 0, .x_max = display_width_ - 1, .y_min = 0, .y_max = display_height_ - 1};
    if (framebuffer_height_ == kMaxFramebufferHeight) {
        area = rect;
        for (int y = 0; y < display_height_; ++y) {
            if (y < area.y_min || y > area.y_max) {
                lefts[static_cast<std::size_t>(y)] = CDemonLight::kNoLeftExtent;
                rights[static_cast<std::size_t>(y)] = 0;
            }
        }
    }
    for (int y = area.y_min; y <= area.y_max; ++y) {
        int first = CDemonLight::kNoLeftExtent;
        int last = 0;
        for (int x = area.x_min; x <= area.x_max; ++x) {
            const std::size_t at =
                (static_cast<std::size_t>(y) * kDisplayColumns) + static_cast<std::size_t>(x);
            const std::optional<SLightMapPixel> found =
                findInLight(light_source, x, y, moving_screen);
            map[at] = found.value_or(SLightMapPixel{});
            if (found) {
                map[at].depth -= bias;
                first = std::min(first, x);
                last = std::max(last, x);
            }
        }
        lefts[static_cast<std::size_t>(y)] = first;
        rights[static_cast<std::size_t>(y)] = last;
    }
}

// The pixel's depth in the light before its bias, its shadow map entry and its beam texel.
std::optional<SLightMapPixel> CDemonCamera::findInLight(CDemonLight &light_source, int x, int y,
                                                        bool moving_screen) const {
    if (x < 1 || y < 1 || x * scale_factor_ > framebuffer_width_ - 2 ||
        y * scale_factor_ > framebuffer_height_ - 2) {
        return std::nullopt;
    }
    const std::size_t at =
        (static_cast<std::size_t>(y) * kDisplayColumns) + static_cast<std::size_t>(x);
    const common::CVector3f &normal = precomputed_normals_[at];
    const common::CMatrix3x3f &axes = light_source.getRotationMatrix();
    if (!moving_screen && (((double{normal.z} * axes.m[2].z) + (double{normal.x} * axes.m[0].z)) +
                           (double{normal.y} * axes.m[1].z)) < 0.0) {
        return std::nullopt;
    }
    common::CVector3i world = precomputed_world_[at];
    common::CVector3i screen;
    light_source.worldToScreenWithFrustumCull(&world, &screen);
    if (screen.z < 1) {
        return std::nullopt;
    }
    const std::optional<std::size_t> entry =
        light_source.projectLightAndMarkVisibility(screen, (x & 1) != 0, (y & 1) != 0);
    if (!entry) {
        return std::nullopt;
    }
    const unsigned mask = light_source.getTextureCoordMask();
    const auto texel_row =
        (static_cast<unsigned>(screen.y >> light_source.getShadowYShift()) & mask)
        << static_cast<unsigned>(light_source.getTextureRowShift());
    const auto texel_column =
        static_cast<unsigned>(screen.x >> light_source.getShadowXShift()) & mask;
    return SLightMapPixel{.depth = screen.z,
                          .shadow_entry = static_cast<std::uint32_t>(*entry),
                          .texel = texel_row + texel_column};
}

// nocedit 0x00450e30
void CDemonCamera::addLightmapToCorona(const CDemonLight &light_source) {
    const std::span<const SLightMapPixel> map = light_source.getLightMap();
    const std::span<const std::uint16_t> shadow = light_source.getShadowDepthBuffer();
    const std::span<const std::uint8_t> beam = light_source.getPrecomputedLightingTextures();
    std::vector<std::uint8_t> &light = owners_.tables.corona_light;
    for (std::size_t y = 0; std::cmp_less(y, display_height_); ++y) {
        const int first = light_source.getLeftExtents()[y];
        const int last = light_source.getRightExtents()[y];
        for (int x = first; x <= last; ++x) {
            const std::size_t at = (y * kDisplayColumns) + static_cast<std::size_t>(x);
            const SLightMapPixel &pixel = map[at];
            if (pixel.depth != 0 && std::cmp_less_equal(static_cast<unsigned>(pixel.depth),
                                                        shadow[pixel.shadow_entry])) {
                light[at] = static_cast<std::uint8_t>(light[at] + beam[pixel.texel]);
            }
        }
    }
}

std::span<const common::CVector3i> CDemonCamera::getPrecomputedWorldPositions() const {
    return precomputed_world_;
}

std::span<const common::CVector3f> CDemonCamera::getPrecomputedNormals() const {
    return precomputed_normals_;
}

std::span<const int> CDemonCamera::getPrecomputedDepths() const {
    return precomputed_depths_;
}

const SDemonCameraOwners &CDemonCamera::getOwners() const {
    return owners_;
}

void CDemonCamera::setSceneOpen(bool open, bool skip_clear_buffers) {
    scene_open_ = open;
    skip_clear_buffers_ = skip_clear_buffers;
}

bool CDemonCamera::getSkipClearBuffers() const {
    return skip_clear_buffers_;
}

// nocedit 0x00453160
void CDemonCamera::blendFogPlanes(int plane, int alpha) {
    SCameraTables &tables = owners_.tables;
    const std::span<const std::uint8_t> planes = tables.fog_planes;
    const std::span<const std::uint8_t> first =
        planes.subspan(static_cast<std::size_t>(plane) * SCameraTables::kFogPlaneSize);
    const std::span<const std::uint8_t> second = planes.subspan(
        static_cast<std::size_t>(getNextFogPlane(plane)) * SCameraTables::kFogPlaneSize);
    const int weight = std::clamp(alpha, 0, kWholeFogPlane - 1);
    const auto width = static_cast<std::size_t>(display_width_);
    for (std::size_t row = 0; std::cmp_less(row, display_height_); ++row) {
        const std::size_t at = row * SCameraTables::kFogPlaneWidth;
        alphaBlendPixelsMMX(std::span(tables.fog_mix).subspan(at, width), first.subspan(at, width),
                            second.subspan(at, width), weight);
    }
}

std::span<const CRect> CDemonCamera::getDirtyRects() const {
    return dirty_rects_;
}

bool CDemonCamera::getDirtyRectsOverflowed() const {
    return dirty_rects_overflowed_;
}

// nocedit 0x00454450
void CDemonCamera::saveZBufferScanlines() {
    const std::span<std::uint32_t *> depth_rows = owners_.screen.getZBufferRows();
    const auto width = static_cast<std::size_t>(framebuffer_width_);
    for (std::size_t row = 0; std::cmp_less(row, framebuffer_height_); ++row) {
        std::copy_n(depth_rows[row], width,
                    zbuffer_.begin() + static_cast<std::ptrdiff_t>(row * width));
    }
}

// nocedit 0x004544a0
void CDemonCamera::restoreZBufferScanlines() {
    const std::span<std::uint32_t *> depth_rows = owners_.screen.getZBufferRows();
    const auto width = static_cast<std::size_t>(framebuffer_width_);
    for (std::size_t row = 0; std::cmp_less(row, framebuffer_height_); ++row) {
        std::copy_n(zbuffer_.begin() + static_cast<std::ptrdiff_t>(row * width), width,
                    depth_rows[row]);
    }
}

// The screen's rows are kept as many as it has, where the original kept the window's height of
// them.
// deferred: the projection as the background scene sets it, and the renderer's camera and
//   viewport, with testVisibility
// nocedit 0x0044cc70
void CDemonCamera::beginBackgroundScene() {
    if (!scene_open_) {
        common::displayErrorAndQuit("CDemonCamera::beginBackgroundScene - Scene not open");
    }
    SCameraTables &tables = owners_.tables;
    ++tables.background_scene_depth;
    if (tables.background_scene_depth != 1) {
        return;
    }
    engine::IScreenDevice &screen = owners_.screen;
    const std::span<void *> rows = screen.getScreenRows();
    engine::SColorChannels &channels = screen.getColorChannels();
    tables.background_save = {.bits_per_pixel = screen.getBitsPerPixel(),
                              .use_external_renderer = owners_.special.getUseExternalRenderer(),
                              .screen_rows = {rows.begin(), rows.end()},
                              .channels = channels};
    screen.setBitsPerPixel(kBackgroundBitsPerPixel);
    owners_.special.setUseExternalRenderer(false);
    channels.red.bit_position = kRedBitPosition;
    channels.green.bit_position = kGreenBitPosition;
    channels.blue.bit_position = kBlueBitPosition;
    const auto width = static_cast<std::size_t>(framebuffer_width_);
    for (std::size_t row = 0; std::cmp_less(row, framebuffer_height_); ++row) {
        rows[row] = framebuffer_.data() + (row * width);
    }
    owners_.renderer.pushViewport(0, 0, framebuffer_width_ - 1, framebuffer_height_ - 1);
}

// No caller asks for the depths back, so the original's copy of them into the camera's buffer,
// which read each row from a frame's width in, and its hand-over to the hardware renderer are
// left out.
// deferred: the projection as the background scene leaves it, with testVisibility
// nocedit 0x0044cdf0
void CDemonCamera::endBackgroundScene(int /*restore_zbuffer*/) {
    SCameraTables &tables = owners_.tables;
    --tables.background_scene_depth;
    if (tables.background_scene_depth != 0) {
        return;
    }
    owners_.renderer.popViewport();
    engine::IScreenDevice &screen = owners_.screen;
    const SBackgroundSave &saved = tables.background_save;
    screen.setBitsPerPixel(saved.bits_per_pixel);
    owners_.special.setUseExternalRenderer(saved.use_external_renderer);
    std::ranges::copy(saved.screen_rows, screen.getScreenRows().begin());
    screen.getColorChannels() = saved.channels;
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
