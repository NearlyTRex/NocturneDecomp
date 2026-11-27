#include "core/water/water.h"

#include "common/math/extendedfloat.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcamera/cameratables.h"
#include "core/dtrace/demonraytrace.h"
#include "core/game/game.h"
#include "core/set/demonset.h"
#include "engine/console/console.h"
#include "engine/drender/demonrenderer.h"
#include "engine/special/special.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <format>
#include <span>

namespace nocturne::core {
namespace {

using common::CExtendedFloat;

constexpr float kDefaultTileSize = 32.0F;
// The grid reaches a tenth past the geometry's half-widths, at least its height.
constexpr double kHalf = 0.5;
constexpr double kReachMargin = 1.1;
// A tile is visible once this many of its pixels pass the depths.
constexpr int kVisiblePixels = 16;
// The ripples step a frame on every 0x2000 of frame time.
constexpr int kRippleFrameTime = 0x2000;
// The waves roll a full turn a second, rising a quarter of a unit, a tile's x half a turn on and
// its z a quarter.
constexpr double kPi = 3.1415926535;
constexpr double kTwo = 2.0;
constexpr double kWaveHeight = 0.25;
// Waving water is drawn at 0xa000 of full alpha.
constexpr int kWaveAlpha = 0xa000;
// The still water's quad: its four corners, each the texture's corner, in 8.24.
constexpr int kWholeTexture = 0x1000000;
constexpr std::size_t kTileCorners = 4;

// The quad the renderer's first four vertices make, the texture across it once.
[[nodiscard]] platform::SMRGLPrimitiveQuad makeTileQuad() {
    return {
        .surface_normal = {},
        .vertices = {{.vertex_index = 0, .texture_u = 0, .texture_v = 0},
                     {.vertex_index = 1, .texture_u = kWholeTexture, .texture_v = 0},
                     {.vertex_index = 2, .texture_u = kWholeTexture, .texture_v = kWholeTexture},
                     {.vertex_index = 3, .texture_u = 0, .texture_v = kWholeTexture}}};
}

// The tile's four corners from its origin, x then z on, a step of the tile's size: as the
// original wound them.
[[nodiscard]] std::array<common::CVector3f, kTileCorners> tileCorners(float tile_size) {
    return {{{.x = 0.0F, .y = 0.0F, .z = 0.0F},
             {.x = tile_size, .y = 0.0F, .z = 0.0F},
             {.x = tile_size, .y = 0.0F, .z = tile_size},
             {.x = 0.0F, .y = 0.0F, .z = tile_size}}};
}

// The corner's grid point, as an offset from the tile's.
constexpr std::array<SWaterTile, kTileCorners> kCornerSteps{
    {{.x = 0, .z = 0}, {.x = 1, .z = 0}, {.x = 1, .z = 1}, {.x = 0, .z = 1}}};

// Half the extent times the margin, at the x87's precision, stored.
[[nodiscard]] float marginedHalf(float low, float high) {
    return (((CExtendedFloat(static_cast<double>(high)) -
              CExtendedFloat(static_cast<double>(low))) *
             CExtendedFloat(kHalf)) *
            CExtendedFloat(kReachMargin))
        .toFloat();
}

} // namespace

// nocedit 0x005e9e10
CWater::CWater() : tile_size_(kDefaultTileSize) {
    for (std::size_t frame = 0; frame < textures_.size(); ++frame) {
        textures_.at(frame).texture_name = std::format("WATER{}.RAW", frame);
    }
}

// nocedit 0x005e9e40
void CWater::captureTextures(engine::CDemonRenderer &renderer) {
    for (platform::SMRGLTextureBasic &texture : textures_) {
        renderer.captureTexture(texture);
    }
}

// The original also kept 32 entries of the 2D colour cube, which nothing read, and quit past
// 4096 visible tiles, the size of its tables.
// nocedit 0x005e9e70
void CWater::calculateVisibleTiles(const SWaterOwners &owners) {
    visible_area_ = 0.0F;
    if (water_level_y_ == 0.0F) {
        return;
    }
    const common::CVector3f low = owners.raytrace.getBBoxMin();
    const common::CVector3f high = owners.raytrace.getBBoxMax();
    centre_ = {.x = static_cast<float>((static_cast<double>(low.x) + high.x) * kHalf),
               .y = 0.0F,
               .z = static_cast<float>((static_cast<double>(low.z) + high.z) * kHalf)};
    // Each kept only where the reach so far is less, as the original compared them.
    float reach = std::max(0.0F, marginedHalf(low.x, high.x));
    reach = std::max(reach, high.y - low.y);
    reach = std::max(reach, marginedHalf(low.z, high.z));
    const int tiles = ((CExtendedFloat(static_cast<double>(reach)) /
                        CExtendedFloat(static_cast<double>(tile_size_))) +
                       CExtendedFloat(1.0))
                          .truncateToInt();
    visible_tiles_.clear();
    const std::span<platform::SRenderVertex> vertices = owners.renderer.getVertexBuffer();
    const std::array<common::CVector3f, kTileCorners> corners = tileCorners(tile_size_);
    for (int x = -tiles; x < tiles; ++x) {
        for (int z = -tiles; z < tiles; ++z) {
            owners.renderer.processCameraRelativeVertex(getTileOrigin({.x = x, .z = z}));
            std::uint32_t shared_sides = ~0U;
            for (std::size_t corner = 0; corner < kTileCorners; ++corner) {
                platform::SProjectedVertex &projected = vertices[corner].projected_vertex;
                owners.special.transformAndProjectPoint(projected, corners.at(corner).toFixed8());
                shared_sides &= static_cast<std::uint32_t>(projected.screen_x);
            }
            if (static_cast<std::int32_t>(shared_sides) < 0 && (shared_sides & 0xffU) != 0) {
                continue;
            }
            if (!owners.renderer.renderDepthProfiledDirect(
                    {.surface_normal = {}, .vertex_indices = {0, 1, 2, 3}}, kVisiblePixels)) {
                continue;
            }
            visible_tiles_.push_back({.x = x, .z = z});
        }
    }
    const CExtendedFloat tile(static_cast<double>(tile_size_));
    visible_area_ =
        (CExtendedFloat(static_cast<double>(visible_tiles_.size())) * tile * tile).toFloat();
    owners.console.printf(std::format("Vis water tiles : {}, SqFt : {:f}\n", visible_tiles_.size(),
                                      static_cast<double>(visible_area_)));
}

// The water moves only as it is drawn; its frame does nothing, in every game.
// nocedit 0x005e9ed0
// bw1 0x005a9a90
// bw2 0x00585e60
// bw3 0x005772e0
void CWater::process() {}

// The original also kept how far the ripples were between frames, which nothing read.
// deferred: the polygon colour set to 1 for the hardware's still water, with
//   setCurrentPolygonColor's reader clipAndDrawLine3D
// unverified: the waves' last bit, which the original took from the x87's FSIN of the extended
//   sum where this takes double's sine of it, by running render in the machine-code oracle
// nocedit 0x005ea320
void CWater::render(int render_mode, const SWaterOwners &owners) {
    if (water_level_y_ == 0.0F) {
        return;
    }
    stepRipples(owners.game);
    owners.renderer.captureTexture(textures_.at(current_frame_));
    owners.camera_tables.perspective_reciprocal = 0;
    wave_phase_ = ((CExtendedFloat(static_cast<double>(owners.game.getDeltaTimeFloat())) *
                    CExtendedFloat(kPi) * CExtendedFloat(kHalf) * CExtendedFloat(kTwo)) +
                   CExtendedFloat(static_cast<double>(wave_phase_)))
                      .toFloat();
    const std::span<platform::SRenderVertex> vertices = owners.renderer.getVertexBuffer();
    const platform::SMRGLPrimitiveQuad quad = makeTileQuad();
    const bool hardware = owners.special.getUseExternalRenderer();
    for (const SWaterTile &tile : visible_tiles_) {
        const common::CVector3f origin = getTileOrigin(tile);
        owners.renderer.processCameraRelativeVertex(origin);
        std::array<common::CVector3f, kTileCorners> corners = tileCorners(tile_size_);
        for (std::size_t corner = 0; corner < kTileCorners; ++corner) {
            common::CVector3f &point = corners.at(corner);
            if (wave_animation_enabled_) {
                point.y = getWaveHeight(tile.x + kCornerSteps.at(corner).x,
                                        tile.z + kCornerSteps.at(corner).z);
            }
            owners.special.transformAndProjectPoint(vertices[corner].projected_vertex,
                                                    point.toFixed8());
            owners.set.computeVertexOmniLighting(point, origin, corner);
        }
        if (wave_animation_enabled_) {
            static_cast<void>(owners.renderer.setRenderAlpha(kWaveAlpha));
            owners.renderer.renderBlendedPoly(quad);
        } else if (hardware) {
            owners.renderer.renderSolidColorPoly(quad);
        } else if (render_mode == 0) {
            owners.renderer.renderDecalPoly(quad);
        } else {
            owners.renderer.renderAlphaBlendedPoly(quad);
        }
    }
}

void CWater::stepRipples(const CGame &game) {
    ripple_timer_ += game.getDeltaTimeInt();
    if (ripple_timer_ > kRippleFrameTime) {
        ripple_timer_ -= kRippleFrameTime;
        current_frame_ = (current_frame_ + 1) % kTextureCount;
    }
}

// The tile's step out stored as a float before the centre is added, as the original did.
common::CVector3f CWater::getTileOrigin(const SWaterTile &tile) const {
    const auto along = [this](int steps, float centre) {
        const auto step = static_cast<float>(static_cast<double>(steps) * tile_size_);
        return static_cast<float>(static_cast<double>(step) + centre);
    };
    return {.x = along(tile.x, centre_.x),
            .y = static_cast<float>(static_cast<double>(water_level_y_) + centre_.y),
            .z = along(tile.z, centre_.z)};
}

float CWater::getWaveHeight(int x, int z) const {
    const CExtendedFloat pi(kPi);
    const CExtendedFloat angle =
        ((CExtendedFloat(static_cast<double>(z)) * pi * CExtendedFloat(kHalf)) +
         (CExtendedFloat(static_cast<double>(x)) * pi)) +
        CExtendedFloat(static_cast<double>(wave_phase_));
    return static_cast<float>(std::sin(angle.toDouble()) * kWaveHeight);
}

std::span<const SWaterTile> CWater::getVisibleTiles() const {
    return visible_tiles_;
}

float CWater::getVisibleArea() const {
    return visible_area_;
}

const common::CVector3f &CWater::getCentre() const {
    return centre_;
}

std::size_t CWater::getCurrentFrame() const {
    return current_frame_;
}

float CWater::getWavePhase() const {
    return wave_phase_;
}

std::span<const platform::SMRGLTextureBasic> CWater::getTextures() const {
    return textures_;
}

void CWater::setLevel(float water_level_y, float tile_size) {
    water_level_y_ = water_level_y;
    tile_size_ = tile_size;
}

void CWater::setWaveAnimationEnabled(bool enabled) {
    wave_animation_enabled_ = enabled;
}

float CWater::getWaterLevelY() const {
    return water_level_y_;
}

float CWater::getTileSize() const {
    return tile_size_;
}

bool CWater::getWaveAnimationEnabled() const {
    return wave_animation_enabled_;
}

} // namespace nocturne::core
