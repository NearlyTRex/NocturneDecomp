#include "common/error/error.h"
#include "common/math/extendedfloat.h"
#include "common/math/fixed.h"
#include "common/math/matrix3x3i.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcube/cubedrawowners.h"
#include "core/dcube/demoncube.h"
#include "core/dtrace/demonraytrace.h"
#include "engine/drender/demonrenderer.h"
#include "engine/matrix/matrix.h"
#include "engine/special/special.h"
#include "platform/clipplane.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <format>
#include <functional>
#include <span>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using common::CExtendedFloat;
using common::CVector3i;

using Axis = int CVector3i::*;

// The cubes a frustum draw may reach, inclusive.
struct SGridBounds {
    CVector3i min;
    CVector3i max;
};
using FloatAxis = float common::CVector3f::*;

// x, y and z, of a grid coordinate and of a world size or position alike.
constexpr std::array<Axis, 3> kAxes{&CVector3i::x, &CVector3i::y, &CVector3i::z};
constexpr std::array<FloatAxis, 3> kFloatAxes{&common::CVector3f::x, &common::CVector3f::y,
                                              &common::CVector3f::z};
constexpr std::size_t kAxisX = 0;
constexpr std::size_t kAxisY = 1;
constexpr std::size_t kAxisZ = 2;

// The camera's 24.8 origin to world units.
constexpr double kFixedToWorld = 1.0 / 256.0;
// World units to the renderer's 24.8, and back for the reach.
constexpr double kWorldToFixed = 256.0;
// The bounds start past any grid before the corners narrow them.
constexpr int kUnboundedMin = 999;
constexpr int kUnboundedMax = -999;
constexpr int kWhite = 0xff;
// A projected corner's screen_x holds its clip flags instead when the top bit is set, and which
// sides it is past in the low byte.
constexpr std::uint32_t kClipped = 0x80000000U;
constexpr std::uint32_t kClipSides = 0xffU;
constexpr std::size_t kCubeCorners = 8;
// The first two slabs from the camera are drawn without testing them against the depth.
constexpr int kUntestedSlabs = 2;

// A cube's corners, as offsets from its lowest one, in the order the renderer's buffer takes
// them.
constexpr std::array<CVector3i, kCubeCorners> kCornerOffsets{{
    {.x = 0, .y = 0, .z = 0},
    {.x = 1, .y = 0, .z = 0},
    {.x = 1, .y = 0, .z = 1},
    {.x = 0, .y = 0, .z = 1},
    {.x = 0, .y = 1, .z = 0},
    {.x = 1, .y = 1, .z = 0},
    {.x = 1, .y = 1, .z = 1},
    {.x = 0, .y = 1, .z = 1},
}};

// A face of a cube: four of its corners, its outward normal and the axis it lies across, on
// the cube's low or high side.
struct SCubeFace {
    std::array<int, 4> corners;
    CVector3i normal;
    std::size_t axis;
    bool high_side;
};

// In the order the original tested them.
constexpr std::array<SCubeFace, 6> kCubeFaces{{
    {.corners = {0, 1, 5, 4},
     .normal = {.x = 0, .y = 0, .z = -1},
     .axis = kAxisZ,
     .high_side = false},
    {.corners = {2, 3, 7, 6},
     .normal = {.x = 0, .y = 0, .z = 1},
     .axis = kAxisZ,
     .high_side = true},
    {.corners = {0, 4, 7, 3},
     .normal = {.x = -1, .y = 0, .z = 0},
     .axis = kAxisX,
     .high_side = false},
    {.corners = {1, 2, 6, 5},
     .normal = {.x = 1, .y = 0, .z = 0},
     .axis = kAxisX,
     .high_side = true},
    {.corners = {4, 5, 6, 7},
     .normal = {.x = 0, .y = 1, .z = 0},
     .axis = kAxisY,
     .high_side = true},
    {.corners = {0, 1, 2, 3},
     .normal = {.x = 0, .y = -1, .z = 0},
     .axis = kAxisY,
     .high_side = false},
}};

// What the walk takes for each cube: its coordinate along an axis, and how many cubes out from
// the start that is.
using Visit = std::function<void(int index, std::int64_t distance)>;

// Up from start through last, then down from start - 1 through first. The original stepped
// through the cells outside first..last as well, each rejected when it was drawn, which takes
// billions of steps from a start the x87 left indefinite.
void walkOutward(int start, int first, int last, const Visit &visit) {
    const std::int64_t origin = start;
    for (std::int64_t index = std::max<std::int64_t>(origin, first); index <= last; ++index) {
        visit(static_cast<int>(index), index - origin);
    }
    for (std::int64_t index = std::min<std::int64_t>(origin - 1, last); index >= first; --index) {
        visit(static_cast<int>(index), origin - index);
    }
}

// As CDQ, XOR and SUB leave it: the most negative int stays as it is.
int wrappingAbs(int value) {
    const auto bits = static_cast<std::uint32_t>(value);
    const std::uint32_t sign = value < 0 ? 0xffffffffU : 0U;
    return static_cast<int>((bits ^ sign) - sign);
}

// FISTP under the default control word: to nearest, ties to even.
int roundToInt(double value) {
    return static_cast<int>(std::nearbyint(value));
}

// The main axis first, then the axis walked outside the other.
struct SWalkAxes {
    Axis main;
    Axis outer;
    Axis inner;
};

// Along the forward axis's largest component; x wins a tie with either, and y one with z.
SWalkAxes getWalkAxes(const CVector3i &forward) {
    const int x = wrappingAbs(forward.x);
    const int y = wrappingAbs(forward.y);
    const int z = wrappingAbs(forward.z);
    if (x >= y && x >= z) {
        return {.main = &CVector3i::x, .outer = &CVector3i::y, .inner = &CVector3i::z};
    }
    if (y >= x && y >= z) {
        return {.main = &CVector3i::y, .outer = &CVector3i::x, .inner = &CVector3i::z};
    }
    return {.main = &CVector3i::z, .outer = &CVector3i::x, .inner = &CVector3i::y};
}

} // namespace

// The walk goes out from the camera's cube along the axis the view looks most along, slab by
// slab, and out from the camera's cube within each slab, so nearer cubes fill the depth the
// farther are tested against. Its bounds are the cubes the camera and the corners of a square
// pyramid reach_distance deep along the view reach. The original also kept a drawing mode that
// only the editor changes.
// deferred: counting the cubes tested, holding voxels, in view and drawn, and the triangles
//   drawn, with CGame's frame stats display
// deferred: taking the debug cube's base point through processCameraRelativePoint, for the point
//   it stores, with CBoundingBox3D::isVisible
// unverified: the walk's order and bounds against the original's code, by running both over a
//   grid and comparing the cubes each draws
// nocedit 0x00497e50
void CDemonRaytrace::renderFrustumCubes(float reach_distance, bool use_pvs,
                                        const SCubeDrawOwners &owners) {
    if (pvs_ready_ && use_pvs) {
        renderPVSCubes(owners);
        return;
    }
    pvs_cubes_.clear();
    // x keeps the x87's precision; y and z come back from the floats they were stored as.
    const CVector3i origin = owners.renderer.getCameraOriginFixed();
    const auto cellOfOrigin = [](const CExtendedFloat &world, float start, float size) {
        return ((world - CExtendedFloat(start)) / CExtendedFloat(size)).truncateToInt();
    };
    const CVector3i camera{
        .x = cellOfOrigin(CExtendedFloat(static_cast<double>(origin.x) * kFixedToWorld),
                          bbox_min_.x, cell_size_.x),
        .y = cellOfOrigin(CExtendedFloat(static_cast<float>(origin.y * kFixedToWorld)), bbox_min_.y,
                          cell_size_.y),
        .z = cellOfOrigin(CExtendedFloat(static_cast<float>(origin.z * kFixedToWorld)), bbox_min_.z,
                          cell_size_.z)};
    const int reach =
        (CExtendedFloat(reach_distance) * CExtendedFloat(kWorldToFixed)).truncateToInt();
    const common::CMatrix3x3i &inverse = owners.matrix.getInverseMatrix();
    // reach along the view, and reach to either side along the right and up axes.
    const auto pyramidCorner = [&inverse, reach](int right, int up) {
        const auto component = [&](Axis axis) {
            return common::wrappingAdd(
                common::wrappingAdd(common::fixedMultiply(inverse.m[0].*axis, right),
                                    common::fixedMultiply(inverse.m[1].*axis, up)),
                common::fixedMultiply(inverse.m[2].*axis, reach));
        };
        return CVector3i{.x = component(&CVector3i::x),
                         .y = component(&CVector3i::y),
                         .z = component(&CVector3i::z)};
    };
    const int away = common::wrappingSubtract(0, reach);
    const std::array<CVector3i, 5> corners{pyramidCorner(reach, reach), pyramidCorner(away, reach),
                                           pyramidCorner(away, away), pyramidCorner(reach, away),
                                           CVector3i{}};
    SGridBounds bounds{.min = {.x = kUnboundedMin, .y = kUnboundedMin, .z = kUnboundedMin},
                       .max = {.x = kUnboundedMax, .y = kUnboundedMax, .z = kUnboundedMax}};
    for (const CVector3i &corner : corners) {
        for (std::size_t i = 0; i < kAxes.size(); ++i) {
            const Axis axis = kAxes.at(i);
            // A cell's width in 24.8, stored as a double.
            const double width = static_cast<double>(cell_size_.*kFloatAxes.at(i)) * kWorldToFixed;
            const int cell = (CExtendedFloat(camera.*axis) +
                              CExtendedFloat(corner.*axis) / CExtendedFloat(width))
                                 .truncateToInt();
            bounds.min.*axis = std::min(bounds.min.*axis, cell);
            bounds.max.*axis = std::max(bounds.max.*axis, cell);
        }
    }
    for (const Axis axis : kAxes) {
        bounds.min.*axis = std::max(bounds.min.*axis, 0);
        bounds.max.*axis += 1;
        if (bounds.max.*axis >= grid_coord_.*axis) {
            bounds.max.*axis = grid_coord_.*axis - 1;
        }
    }
    owners.renderer.setRGBAColor(kWhite, kWhite, kWhite);
    const SWalkAxes walk = getWalkAxes(inverse.m[2]);
    walkOutward(camera.*walk.main, bounds.min.*walk.main, bounds.max.*walk.main,
                [&](int slab, std::int64_t distance) {
                    walkOutward(camera.*walk.outer, bounds.min.*walk.outer, bounds.max.*walk.outer,
                                [&](int row, std::int64_t /*row_distance*/) {
                                    walkOutward(camera.*walk.inner, bounds.min.*walk.inner,
                                                bounds.max.*walk.inner,
                                                [&](int column, std::int64_t /*column_distance*/) {
                                                    CVector3i cell;
                                                    cell.*walk.main = slab;
                                                    cell.*walk.outer = row;
                                                    cell.*walk.inner = column;
                                                    renderCubeForPVS(cell, distance, owners);
                                                });
                                });
                });
    pvs_ready_ = true;
}

// A cube outside the grid is fatal; the original read past it. The original also held at most
// 20000 cubes, and worked out each one's corner for renderPVSCubes, which doesn't need it.
// nocedit 0x00498e50
void CDemonRaytrace::setPVS(std::span<const int> cube_indices) {
    pvs_ready_ = false;
    if (cube_indices.empty()) {
        return;
    }
    for (const int index : cube_indices) {
        if (index < 0 || std::cmp_greater_equal(index, cube_data_.size())) {
            common::displayErrorAndQuit(
                std::format("CDemonRaytrace::setPVS - cube {} is outside the grid", index));
        }
    }
    pvs_cubes_.assign(cube_indices.begin(), cube_indices.end());
    pvs_ready_ = true;
}

// The original looked each drawn cube's index up again from its address, which a list of
// indices already is.
// nocedit 0x00498fb0
std::vector<int> CDemonRaytrace::savePVS() const {
    if (!pvs_ready_) {
        common::displayErrorAndQuit("CDemonRenderer::getPVS - PVS is not valid!");
    }
    if (pvs_cubes_.empty()) {
        common::displayErrorAndQuit("CDemonRaytrace::getPVS - no cubes rendered???");
    }
    return pvs_cubes_;
}

// The original also moved the camera-relative origin to each cube's corner first, which
// rotateVertices puts back to the world's.
// nocedit 0x004990f0
void CDemonRaytrace::renderPVSCubes(const SCubeDrawOwners &owners) const {
    owners.renderer.setRGBAColor(kWhite, kWhite, kWhite);
    for (const int index : pvs_cubes_) {
        cube_data_[static_cast<std::size_t>(index)].rotateVertices(owners);
        static_cast<void>(owners.special.sync());
    }
}

// Each corner's world position is stored as a float before it is scaled. The original also
// moved the camera-relative origin to the cube's corner and back around the draw, which
// rotateVertices puts at the world's.
// deferred: counting the cubes tested, holding voxels, in view and drawn, with CGame's frame
//   stats display
// unverified: the corners' and the faces' planes' rounding against the original's code, by
//   running both over cubes at fractional cell sizes
// nocedit 0x00497500
void CDemonRaytrace::renderCubeForPVS(const CVector3i &cell, std::int64_t distance,
                                      const SCubeDrawOwners &owners) {
    const CDemonCube *cube = getCubeAt(cell.x, cell.y, cell.z);
    if (cube == nullptr || !cube->getVoxelBuffer1()) {
        return;
    }
    const std::span<platform::SRenderVertex> buffer = owners.renderer.getVertexBuffer();
    const auto worldAt = [](int index, float size, float start) {
        return (CExtendedFloat(index) * CExtendedFloat(size) + CExtendedFloat(start)).toFloat();
    };
    std::uint32_t outside = 0xffffffffU;
    for (std::size_t i = 0; i < kCubeCorners; ++i) {
        const CVector3i &offset = kCornerOffsets.at(i);
        const CVector3i fixed{
            .x = roundToInt(
                static_cast<double>(worldAt(cell.x + offset.x, cell_size_.x, bbox_min_.x)) *
                kWorldToFixed),
            .y = roundToInt(
                static_cast<double>(worldAt(cell.y + offset.y, cell_size_.y, bbox_min_.y)) *
                kWorldToFixed),
            .z = roundToInt(
                static_cast<double>(worldAt(cell.z + offset.z, cell_size_.z, bbox_min_.z)) *
                kWorldToFixed)};
        owners.special.transformAndProjectPoint(buffer[i].projected_vertex, fixed);
        outside &= static_cast<std::uint32_t>(buffer[i].projected_vertex.screen_x);
    }
    if ((outside & kClipped) != 0 && (outside & kClipSides) != 0) {
        return;
    }
    if (distance >= kUntestedSlabs && !isCubeFaceVisible(cell, owners.renderer)) {
        return;
    }
    cube->rotateVertices(owners);
    pvs_cubes_.push_back(static_cast<int>(cube - cube_data_.data()));
}

// Each face's plane distance is chopped from the x87's product; a face facing away is skipped.
bool CDemonRaytrace::isCubeFaceVisible(const CVector3i &cell,
                                       engine::CDemonRenderer &renderer) const {
    for (const SCubeFace &face : kCubeFaces) {
        const FloatAxis world = kFloatAxes.at(face.axis);
        const int side = cell.*kAxes.at(face.axis) + (face.high_side ? 1 : 0);
        const double sign = face.high_side ? kWorldToFixed : -kWorldToFixed;
        const int distance = ((CExtendedFloat(side) * CExtendedFloat(cell_size_.*world) +
                               CExtendedFloat(bbox_min_.*world)) *
                              CExtendedFloat(sign))
                                 .truncateToInt();
        const platform::SMRGLHeaderPrimitive primitive{
            .surface_normal = {.a = face.normal.x,
                               .b = face.normal.y,
                               .c = face.normal.z,
                               .d = distance},
            .vertex_indices = {face.corners.begin(), face.corners.end()}};
        if (renderer.renderDepthProfiledDirect(primitive)) {
            return true;
        }
    }
    return false;
}

} // namespace nocturne::core
