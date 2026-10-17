#include "engine/prim/prim.h"

#include "common/math/fixed.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <span>
#include <utility>

namespace nocturne::engine {
namespace {

using platform::SRenderVertex;

constexpr int kLargestDepth = std::numeric_limits<int>::max();
// At or within this depth the reciprocal is held at its largest rather than divided out.
constexpr int kNearestScaledDepth = 0x100;

// a times b over divisor, as IMUL and IDIV compute it. Where the original's IDIV faulted on a
// quotient past 32 bits, this keeps the low 32.
int scaleBy(int a, int b, int divisor) {
    return static_cast<int>(
        static_cast<std::uint32_t>((std::int64_t{a} * b) / std::int64_t{divisor}));
}

} // namespace

// The original also had a path for a processor type other than 0, which neither build ever sets.
// nocedit 0x00551fb0
void prepareDepthBuffer(std::span<SRenderVertex> vertices) {
    for (SRenderVertex &vertex : vertices) {
        platform::SProjectedVertex &point = vertex.projected_vertex;
        point.transformed_z = (point.transformed_z >> 4) == 0 ? kLargestDepth : point.inv_z;
    }
}

// nocedit 0x00552020
void normalizeTextureCoords(std::span<SRenderVertex> vertices) {
    int nearest = kLargestDepth;
    for (const SRenderVertex &vertex : vertices) {
        nearest = std::min(nearest, vertex.projected_vertex.transformed_z);
    }
    for (SRenderVertex &vertex : vertices) {
        const int depth = vertex.projected_vertex.transformed_z;
        if (depth == 0) {
            continue;
        }
        vertex.u = scaleBy(vertex.u, nearest, depth);
        vertex.v = scaleBy(vertex.v, nearest, depth);
        vertex.projected_vertex.transformed_z = scaleBy(nearest, 1 << 24, depth);
    }
}

// nocedit 0x005520a0
void adjustNearPlaneTextureCoords(std::span<SRenderVertex> vertices) {
    for (SRenderVertex &vertex : vertices) {
        const int depth = vertex.projected_vertex.transformed_z;
        const int reciprocal =
            depth <= kNearestScaledDepth ? kLargestDepth : kLargestDepth / (depth >> 4);
        vertex.u = common::fixedMultiply(reciprocal, vertex.u >> 8);
        vertex.v = common::fixedMultiply(reciprocal, vertex.v >> 8);
        vertex.projected_vertex.transformed_z = reciprocal;
    }
}

// nocedit 0x00552110
void replaceWWithDepth(std::span<SRenderVertex> vertices) {
    for (SRenderVertex &vertex : vertices) {
        platform::SProjectedVertex &point = vertex.projected_vertex;
        point.transformed_z = point.transformed_z == 0 ? kLargestDepth : point.inv_z;
    }
}

// The original repeated calculateTriangleWindingOrder's arithmetic over the global buffer.
// nocedit 0x00552210
bool calculateTriangleWindingOrderFromIndices(std::span<const SRenderVertex> vertices,
                                              const platform::SMRGLPrimitiveQuad &triangle,
                                              int culling_mode) {
    const auto corner = [&vertices, &triangle](std::size_t i) -> const SRenderVertex & {
        return vertices[static_cast<std::size_t>(triangle.vertices[i].vertex_index)];
    };
    return calculateTriangleWindingOrder(corner(0), corner(1), corner(2), culling_mode);
}

// nocedit 0x00552150
bool calculateTriangleWindingOrder(const SRenderVertex &v0, const SRenderVertex &v1,
                                   const SRenderVertex &v2, int culling_mode) {
    const auto edge = [](const SRenderVertex &from, const SRenderVertex &to) {
        return std::pair{
            common::wrappingSubtract(to.projected_vertex.screen_x, from.projected_vertex.screen_x),
            common::wrappingSubtract(to.projected_vertex.screen_y, from.projected_vertex.screen_y)};
    };
    auto first = edge(v0, v1);
    auto second = edge(v1, v2);
    if (culling_mode != 1) {
        std::swap(first, second);
    }
    return std::int64_t{first.second} * second.first < std::int64_t{first.first} * second.second;
}

} // namespace nocturne::engine
