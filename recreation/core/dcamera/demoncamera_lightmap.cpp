// The camera's per-pixel work over the backdrop: the composite of its light map into the frame,
// the corona's light and fog, and each pixel's place, normal and light. A hot path, built
// optimised even in a debug build.

#include "common/error/error.h"
#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcamera/cameratables.h"
#include "core/dcamera/demoncamera.h"
#include "core/dlight/demonlight.h"
#include "core/dlight/lightmappixel.h"
#include "core/dstrender/dstrender.h"
#include "engine/screendevice.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <format>
#include <optional>
#include <span>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

constexpr int kSixteenBitsPerPixel = 16;
constexpr int kThirtyTwoBitsPerPixel = 32;
// The 16-bit screen's fog colour, as the blends take it: red above green above blue.
constexpr unsigned kFogRedShift = 16;
constexpr unsigned kFogGreenShift = 8;
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

} // namespace

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
                blendHalfLightRow16Even(output, backdrop, light_row, fog_row, look, masks);
            } else if (shared) {
                blendHalfLightRow16Odd(output, backdrop, light_row, light_below, fog_row, look,
                                       masks);
            } else if (even) {
                blendLightRow16Even(output, backdrop, light_row, fog_row, look, masks);
            } else {
                blendLightRow16Odd(output, backdrop, light_row, fog_row, look, masks);
            }
            continue;
        }
        const std::span<std::uint32_t> output(static_cast<std::uint32_t *>(row), width);
        if (shared && even) {
            blendHalfLightRow32Even(output, backdrop, light_row, fog_row, look);
        } else if (shared) {
            blendHalfLightRow32Odd(output, backdrop, light_row, light_below, fog_row, look);
        } else if (even) {
            blendLightRow32Even(output, backdrop, light_row, fog_row, look);
        } else {
            blendLightRow32Odd(output, backdrop, light_row, fog_row, look);
        }
    }
}

// The original's 16-bit fog colour took red, green and blue in that order from the top.
std::uint32_t CDemonCamera::getFogColor() const {
    const CColor3i &index = owners_.tables.fog_color_index;
    const auto level = [this](int at) { return static_cast<std::uint32_t>(paletteLevel(at)); };
    if (owners_.screen.getBitsPerPixel() != kThirtyTwoBitsPerPixel) {
        return (level(index.r) << kFogRedShift) | (level(index.g) << kFogGreenShift) |
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
        blurLightRow(blurred.subspan(row * SCameraTables::kFogPlaneWidth), tables.corona_light, row,
                     width);
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
        mixBytes(std::span(tables.fog_mix).subspan(at, width), first.subspan(at, width),
                 second.subspan(at, width), weight);
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

} // namespace nocturne::core
