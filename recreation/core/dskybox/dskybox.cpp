#include "core/dskybox/dskybox.h"

#include "common/math/extendedfloat.h"
#include "common/math/vector3i.h"
#include "common/render/renderstate.h"
#include "core/dtrace/demonraytrace.h"
#include "engine/drender/demonrenderer.h"
#include "engine/special/special.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <array>
#include <bit>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string_view>

namespace nocturne::core {
namespace {

using common::CExtendedFloat;

constexpr double kPi = 3.1415926535;
constexpr double kHalf = 0.5;
constexpr double kTwo = 2.0;
constexpr double kFixedOne = 256.0;
// How much wider than the geometry the dome is.
constexpr double kSpread = 1.414;
// The overhead quad's corners, 3/16 of a turn down from the top.
constexpr double kTopAngle = 0.58904862253125;
// A column's turn and a row's, as fractions of a turn and of a quarter turn.
constexpr float kColumnFraction = 0.0625F;
constexpr float kRowFraction = 0.25F;
// The lowest row, just above the horizon rather than on it.
constexpr float kHorizonAngle = std::bit_cast<float>(0x3ca0d97cU);
constexpr int kColumns = 16;
constexpr int kRows = 4;
constexpr int kTopCorners = 4;
// 8.24 texture positions: the one overhead, and a column's and a row's step.
constexpr int kTopTexel = 8 << 16;
constexpr int kTextureOne = 0x1000000;
constexpr int kTextureQuarter = kTextureOne / 4;
constexpr std::uint32_t kTextureMask = 0xffffff;
constexpr int kLastTexturePosition = 0xffffff;
constexpr int kSkyFlags =
    static_cast<int>(common::kRenderTextured | common::kRenderSmooth | common::kRenderDepthTest |
                     common::kRenderDepthWrite | common::kRenderVertexColor);

CExtendedFloat extended(double value) {
    return CExtendedFloat(value);
}

} // namespace

common::CVector3i getSkyDomeTopCorner(float vertex_scale) {
    const CExtendedFloat scale(vertex_scale);
    const int out = (extended(std::sin(kTopAngle)) * scale * extended(kFixedOne)).truncateToInt();
    return {.x = out, .y = (extended(kFixedOne) * scale).truncateToInt(), .z = out};
}

// The original added to the turn around a float past the sky texture's record, which nothing
// writes: 0.
common::CVector3i getSkyDomeCorner(float vertex_scale, int u_coord, int v_coord) {
    const float around =
        (extended(u_coord) * extended(kColumnFraction) * extended(kPi) * extended(kTwo)).toFloat();
    const float up =
        v_coord == 0
            ? kHorizonAngle
            : (extended(v_coord) * extended(kRowFraction) * extended(kPi) * extended(kHalf))
                  .toFloat();
    const CExtendedFloat scale(vertex_scale);
    // The original keeps the row's cosine as a double.
    const CExtendedFloat flat(std::cos(static_cast<double>(up)));
    const CExtendedFloat fixed_one(kFixedOne);
    const auto along = [&](double turn) {
        return (extended(turn) * scale * flat * fixed_one).truncateToInt();
    };
    return {.x = along(std::sin(static_cast<double>(around))),
            .y = (scale * extended(std::sin(static_cast<double>(up))) * fixed_one).truncateToInt(),
            .z = along(std::cos(static_cast<double>(around)))};
}

// The original's staticInit and initializeSkyboxTexture named the texture NITESKY.RAW and put
// the centre at the origin.
// nocedit 0x00490040
// nocedit 0x00490070
CSkyDome::CSkyDome(engine::CDemonRenderer &renderer, const engine::CSpecial &special,
                   const CDemonRaytrace &raytrace)
    : renderer_(renderer), special_(special), raytrace_(raytrace) {}

// The overhead quad's corners and each row are a quarter turn apart, so the top row meets them.
// nocedit 0x004901f0
void CSkyDome::renderSkyDome(std::string_view texture_name, int brightness_factor) {
    texture_.texture_name = texture_name;
    brightness_ = brightness_factor;
    const common::CVector3f low = raytrace_.getBBoxMin();
    const common::CVector3f high = raytrace_.getBBoxMax();
    center_ = {.x = ((extended(low.x) + extended(high.x)) * extended(kHalf)).toFloat(),
               .y = low.y,
               .z = ((extended(low.z) + extended(high.z)) * extended(kHalf)).toFloat()};
    const float across =
        ((extended(high.x) - extended(low.x)) * extended(kHalf) * extended(kSpread)).toFloat();
    const float tall = ((extended(high.y) - extended(low.y)) * extended(kSpread)).toFloat();
    const float deep =
        ((extended(high.z) - extended(low.z)) * extended(kHalf) * extended(kSpread)).toFloat();
    vertex_scale_ = 0.0F;
    for (const float radius : {across, tall, deep}) {
        vertex_scale_ = std::max(vertex_scale_, radius);
    }
    renderer_.processCameraRelativeVertex(center_);
    renderer_.captureTexture(texture_);
    const common::CVector3i corner = getSkyDomeTopCorner(vertex_scale_);
    const std::array<common::CVector3i, kTopCorners> top{
        {corner,
         {.x = -corner.x, .y = corner.y, .z = corner.z},
         {.x = -corner.x, .y = corner.y, .z = -corner.z},
         {.x = corner.x, .y = corner.y, .z = -corner.z}}};
    platform::SMRGLPrimitiveQuad quad;
    for (int corner = 0; corner < kTopCorners; ++corner) {
        projectCorner(corner, top[static_cast<std::size_t>(corner)]);
        quad.vertices.push_back(
            {.vertex_index = corner, .texture_u = kTopTexel, .texture_v = kTopTexel});
    }
    renderer_.renderTexturedPoly(quad, kSkyFlags);
    for (int column = 0; column <= kColumns; ++column) {
        for (int row = 0; row < kRows; ++row) {
            generateSkyDomeVertex(column, row, (column * kRows) + row);
        }
    }
    for (int column = 0; column < kColumns; ++column) {
        const auto left =
            static_cast<int>((static_cast<std::uint32_t>(column) * kTextureQuarter) & kTextureMask);
        const int first = column * kRows;
        for (int row = 0; row + 1 < kRows; ++row) {
            // Rows count up from the texture's last line.
            const int bottom = (row * kTextureQuarter) ^ kLastTexturePosition;
            const int top_v = ((row + 1) * kTextureQuarter) ^ kLastTexturePosition;
            quad.vertices = {
                {.vertex_index = first + row, .texture_u = left, .texture_v = bottom},
                {.vertex_index = first + row + 1, .texture_u = left, .texture_v = top_v},
                {.vertex_index = first + row + kRows + 1,
                 .texture_u = left + kTextureQuarter,
                 .texture_v = top_v},
                {.vertex_index = first + row + kRows,
                 .texture_u = left + kTextureQuarter,
                 .texture_v = bottom}};
            renderer_.renderTexturedPoly(quad, kSkyFlags);
        }
    }
}

// nocedit 0x004900b0
void CSkyDome::generateSkyDomeVertex(int u_coord, int v_coord, int vertex_index) {
    projectCorner(vertex_index, getSkyDomeCorner(vertex_scale_, u_coord, v_coord));
}

void CSkyDome::projectCorner(int vertex_index, const common::CVector3i &point) {
    platform::SRenderVertex &vertex =
        renderer_.getVertexBuffer()[static_cast<std::size_t>(vertex_index)];
    special_.transformAndProjectPoint(vertex.projected_vertex, point);
    vertex.r = brightness_;
    vertex.g = brightness_;
    vertex.b = brightness_;
    vertex.a = 0;
}

const platform::SMRGLTextureBasic &CSkyDome::getTexture() const {
    return texture_;
}

const common::CVector3f &CSkyDome::getCenter() const {
    return center_;
}

float CSkyDome::getVertexScale() const {
    return vertex_scale_;
}

} // namespace nocturne::core
