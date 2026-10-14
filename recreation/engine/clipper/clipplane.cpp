#include "engine/clipper/clipplane.h"

#include "common/math/fixed.h"

namespace nocturne::engine {
namespace {

using common::interpolateFraction31;
using common::wrappingAdd;
using common::wrappingSubtract;
using platform::SProjectedVertex;

// How far the point is inside the plane, wrapping as the clippers' ADD and SUB do.
int getDistanceInside(const SProjectedVertex &point, const SFrustumPlane &plane) {
    const int coordinate = point.*plane.coordinate;
    return plane.negative ? wrappingAdd(coordinate, point.transformed_z)
                          : wrappingSubtract(point.transformed_z, coordinate);
}

} // namespace

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

} // namespace nocturne::engine
