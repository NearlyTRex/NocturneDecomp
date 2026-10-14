#include "engine/keyframe/keyframe.h"

#include "platform/mrglprimitivequad.h"

#include <algorithm>
#include <cmath>
#include <cstddef>

namespace nocturne::engine {
namespace {

constexpr double kNormalLength = 65535.0;

// FISTP under the default control word: to nearest, ties to even.
int roundToNearest(double value) {
    return static_cast<int>(std::nearbyint(value));
}

} // namespace

// Fewer than three corners, or a corner past the vertices, makes no plane; the original read
// past them.
// nocedit 0x00501bc0
platform::SClipPlane calculateSurfaceNormal(std::span<const common::CVector3i> vertex_data,
                                            const platform::SMRGLPrimitiveQuad &polygon) {
    const std::vector<platform::SMRGLVertex> &corners = polygon.vertices;
    if (corners.size() < 3 ||
        std::any_of(corners.begin(), corners.begin() + 3, [&vertex_data](const auto &corner) {
            return corner.vertex_index < 0 ||
                   static_cast<std::size_t>(corner.vertex_index) >= vertex_data.size();
        })) {
        return {};
    }
    const common::CVector3i &p0 = vertex_data[static_cast<std::size_t>(corners[0].vertex_index)];
    const common::CVector3i &p1 = vertex_data[static_cast<std::size_t>(corners[1].vertex_index)];
    const common::CVector3i &p2 = vertex_data[static_cast<std::size_t>(corners[2].vertex_index)];
    const double ax = static_cast<double>(p1.x) - p0.x;
    const double ay = static_cast<double>(p1.y) - p0.y;
    const double az = static_cast<double>(p1.z) - p0.z;
    const double bx = static_cast<double>(p2.x) - p1.x;
    const double by = static_cast<double>(p2.y) - p1.y;
    const double bz = static_cast<double>(p2.z) - p1.z;
    const double nx = (ay * bz) - (by * az);
    const double ny = (bx * az) - (ax * bz);
    const double nz = (ax * by) - (bx * ay);
    double length = std::sqrt((nz * nz) + (ny * ny) + (nx * nx));
    if (length == 0.0) {
        length = kNormalLength;
    }
    const double a = nx / length * kNormalLength;
    const double b = ny / length * kNormalLength;
    const double c = nz / length * kNormalLength;
    return {.a = roundToNearest(a),
            .b = roundToNearest(b),
            .c = roundToNearest(c),
            .d = roundToNearest((p0.z * c) + (p0.x * a) + (p0.y * b))};
}

} // namespace nocturne::engine
