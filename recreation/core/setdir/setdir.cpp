#include "core/setdir/setdir.h"

#include "core/box/boundingbox3d.h"
#include "core/setdir/vdbox.h"

#include <array>
#include <cmath>
#include <cstddef>
#include <cstdint>

namespace nocturne::core {
namespace {

constexpr std::size_t kCorners = 8;
// Each corner's neighbours differ from it in one bit of its index.
constexpr std::array<std::uint32_t, 3> kEdgeBits = {1, 2, 4};

common::CVector3f subtract(const common::CVector3f &a, const common::CVector3f &b) {
    return {.x = a.x - b.x, .y = a.y - b.y, .z = a.z - b.z};
}

// Corner i of the box in the other box's own frame: bits 0, 1 and 2 of i turn x, y and z negative.
common::CVector3f cornerInFrameOf(const SVDBox &box, std::uint32_t i, const SVDBox &frame) {
    const common::CVector3f local{.x = (i & 1U) != 0 ? -box.extents.x : box.extents.x,
                                  .y = (i & 2U) != 0 ? -box.extents.y : box.extents.y,
                                  .z = (i & 4U) != 0 ? -box.extents.z : box.extents.z};
    const common::CVector3f turned = box.rotation_matrix.transformVector(local);
    const common::CVector3f world{.x = turned.x + box.position.x,
                                  .y = turned.y + box.position.y,
                                  .z = turned.z + box.position.z};
    return frame.rotation_matrix.transformVectorTranspose(subtract(world, frame.position));
}

// The min sides let an unordered compare through and the max sides do not, as the original's do.
bool contains(const CBoundingBox3D &bounds, const common::CVector3f &point) {
    return !std::isgreater(bounds.min.x, point.x) && !std::isgreater(bounds.min.y, point.y) &&
           !std::isgreater(bounds.min.z, point.z) && std::isgreaterequal(bounds.max.x, point.x) &&
           std::isgreaterequal(bounds.max.y, point.y) && std::isgreaterequal(bounds.max.z, point.z);
}

} // namespace

// The original also requires an edge's distance to be at most 1, which doesRayIntersect never
// exceeds.
// nocedit 0x005763a0
bool testOBBIntersection(const SVDBox &obb_a, const SVDBox &obb_b) {
    const CBoundingBox3D bounds{
        .min = {.x = -obb_b.extents.x, .y = -obb_b.extents.y, .z = -obb_b.extents.z},
        .max = obb_b.extents};
    std::array<common::CVector3f, kCorners> corners;
    for (std::uint32_t i = 0; i < kCorners; ++i) {
        corners.at(i) = cornerInFrameOf(obb_a, i, obb_b);
        if (contains(bounds, corners.at(i))) {
            return true;
        }
    }
    for (std::uint32_t i = 0; i < kCorners; ++i) {
        for (const std::uint32_t bit : kEdgeBits) {
            const common::CVector3f edge = subtract(corners.at(i ^ bit), corners.at(i));
            const float distance = bounds.doesRayIntersect(corners.at(i), edge, nullptr);
            if (distance >= 0.0F) {
                return true;
            }
        }
    }
    return false;
}

} // namespace nocturne::core
