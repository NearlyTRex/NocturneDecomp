#pragma once

#include "platform/projectedvertex.h"

namespace nocturne::engine {

// One side of the view in eye space: the coordinate equal to the depth, or to minus the depth
// when negative. The other coordinate is the one the side leaves free.
struct SFrustumPlane {
    int platform::SProjectedVertex::*coordinate;
    int platform::SProjectedVertex::*other;
    bool negative;
};

inline constexpr SFrustumPlane kPositiveXPlane{.coordinate =
                                                   &platform::SProjectedVertex::transformed_x,
                                               .other = &platform::SProjectedVertex::transformed_y,
                                               .negative = false};
inline constexpr SFrustumPlane kNegativeXPlane{.coordinate =
                                                   &platform::SProjectedVertex::transformed_x,
                                               .other = &platform::SProjectedVertex::transformed_y,
                                               .negative = true};
inline constexpr SFrustumPlane kPositiveYPlane{.coordinate =
                                                   &platform::SProjectedVertex::transformed_y,
                                               .other = &platform::SProjectedVertex::transformed_x,
                                               .negative = false};
inline constexpr SFrustumPlane kNegativeYPlane{.coordinate =
                                                   &platform::SProjectedVertex::transformed_y,
                                               .other = &platform::SProjectedVertex::transformed_x,
                                               .negative = true};

// Whether the point is on the plane or past it.
[[nodiscard]] bool isPastPlane(const platform::SProjectedVertex &point, const SFrustumPlane &plane);

// Writes the eye-space point where the edge from inside to outside meets the plane, with
// screen_x -1 to say it is not projected yet, and returns how far along the edge that is in 1.31
// for the caller to carry the vertex's other fields by.
int clipEdgeToPlane(const platform::SProjectedVertex &inside,
                    const platform::SProjectedVertex &outside, const SFrustumPlane &plane,
                    platform::SProjectedVertex &output);

} // namespace nocturne::engine
