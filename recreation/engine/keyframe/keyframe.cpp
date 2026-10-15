#include "engine/keyframe/keyframe.h"

#include "common/math/fixed.h"
#include "common/math/math.h"
#include "platform/mrglprimitivequad.h"

#include <algorithm>
#include <cmath>
#include <cstddef>

namespace nocturne::engine {
namespace {

using common::roundToFloat;

constexpr double kNormalLength = 65535.0;

// FISTP under the default control word: to nearest, ties to even.
int roundToNearest(double value) {
    return static_cast<int>(std::nearbyint(value));
}

} // namespace

// Fewer than three corners, or a corner past the vertices, makes no plane; the original read
// past them. The original stores the first edge's z, the normal, its length, the scaled normal
// and the distance as floats.
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
    const auto edge = [](int to, int from) {
        return static_cast<double>(common::wrappingSubtract(to, from));
    };
    const double ax = edge(p1.x, p0.x);
    const double ay = edge(p1.y, p0.y);
    const double az = roundToFloat(edge(p1.z, p0.z));
    const double bx = edge(p2.x, p1.x);
    const double by = edge(p2.y, p1.y);
    const double bz = edge(p2.z, p1.z);
    const double nx = roundToFloat((ay * bz) - (by * az));
    const double ny = roundToFloat((bx * az) - (bz * ax));
    const double nz = roundToFloat((ax * by) - (ay * bx));
    double length = roundToFloat(std::sqrt(((nx * nx) + (ny * ny)) + (nz * nz)));
    if (length == 0.0) {
        length = kNormalLength;
    }
    const double inverse = 1.0 / length;
    const double a = roundToFloat(nx * inverse * kNormalLength);
    const double b = roundToFloat(ny * inverse * kNormalLength);
    const double c = roundToFloat(nz * inverse * kNormalLength);
    return {.a = roundToNearest(a),
            .b = roundToNearest(b),
            .c = roundToNearest(c),
            .d = roundToNearest(roundToFloat(((p0.y * b) + (p0.x * a)) + (p0.z * c)))};
}

} // namespace nocturne::engine
