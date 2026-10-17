#include "engine/clipper/clipplane.h"

#include "common/math/fixed.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::engine {
namespace {

using common::interpolateFraction31;
using common::wrappingAdd;
using common::wrappingSubtract;
using platform::SProjectedVertex;
using platform::SRenderVertex;

// How far the point is inside the plane, wrapping as the clippers' ADD and SUB do.
int getDistanceInside(const SProjectedVertex &point, const SFrustumPlane &plane) {
    const int coordinate = point.*plane.coordinate;
    return plane.negative ? wrappingAdd(coordinate, point.transformed_z)
                          : wrappingSubtract(point.transformed_z, coordinate);
}

} // namespace

bool isWhollyPastASide(std::span<const SRenderVertex *const> corners) {
    auto shared = static_cast<std::uint32_t>(-1);
    for (const SRenderVertex *corner : corners) {
        shared &= static_cast<std::uint32_t>(corner->projected_vertex.screen_x);
    }
    return (shared >> 31U) != 0 && (shared & 0xffU) != 0;
}

bool isPastPlane(const SProjectedVertex &point, const SFrustumPlane &plane) {
    const int coordinate = point.*plane.coordinate;
    return plane.negative ? coordinate <= wrappingSubtract(0, point.transformed_z)
                          : point.transformed_z <= coordinate;
}

int clipEdgeToPlane(const SProjectedVertex &inside, const SProjectedVertex &outside,
                    const SFrustumPlane &plane, SProjectedVertex &output) {
    const int inside_distance = getDistanceInside(inside, plane);
    const int fraction = common::clipFraction(
        inside_distance, wrappingSubtract(inside_distance, getDistanceInside(outside, plane)));
    output.transformed_z =
        interpolateFraction31(inside.transformed_z, outside.transformed_z, fraction);
    output.*plane.coordinate =
        plane.negative ? wrappingSubtract(0, output.transformed_z) : output.transformed_z;
    output.*plane.other =
        interpolateFraction31(inside.*plane.other, outside.*plane.other, fraction);
    output.screen_x = -1;
    return fraction;
}

void clipPolygonToPlane(std::span<const SRenderVertex> input, const PastPlaneTest &is_past,
                        const EdgeClipper &clip_edge, std::size_t first,
                        std::vector<SRenderVertex> &output) {
    output.clear();
    for (std::size_t i = 0; i < input.size(); ++i) {
        const SRenderVertex &current = input[(first + i) % input.size()];
        const SRenderVertex &next = input[(first + i + 1) % input.size()];
        const bool current_past = is_past(current);
        if (!current_past) {
            output.push_back(current);
        }
        if (current_past != is_past(next)) {
            clip_edge(current_past ? next : current, current_past ? current : next,
                      output.emplace_back());
        }
    }
}

void clipPolygonToPlane(std::span<const SRenderVertex> input, const SFrustumPlane &plane,
                        const EdgeClipper &clip_edge, std::size_t first,
                        std::vector<SRenderVertex> &output) {
    clipPolygonToPlane(
        input,
        [&plane](const SRenderVertex &vertex) {
            return isPastPlane(vertex.projected_vertex, plane);
        },
        clip_edge, first, output);
}

void pullOntoView(SProjectedVertex &point) {
    const int depth = point.transformed_z;
    if (depth == 0) {
        point.transformed_z = 1;
        point.transformed_x = 0;
        point.transformed_y = 0;
    } else if (point.transformed_x > depth) {
        point.transformed_x = depth;
    } else {
        point.transformed_x = std::max(point.transformed_x, wrappingSubtract(0, depth));
    }
}

} // namespace nocturne::engine
