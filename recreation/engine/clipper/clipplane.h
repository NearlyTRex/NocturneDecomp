#pragma once

#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"

#include <cstddef>
#include <functional>
#include <span>
#include <vector>

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

using PastPlaneTest = std::function<bool(const platform::SRenderVertex &vertex)>;
// Writes the vertex where the edge from inside to outside meets the plane.
using EdgeClipper =
    std::function<void(const platform::SRenderVertex &inside,
                       const platform::SRenderVertex &outside, platform::SRenderVertex &output)>;

// One plane's pass over a polygon, from its corner first: each corner inside is kept, and each
// edge crossing the plane adds the point where it does. A new point starts zeroed where the
// original reused a scratch slot.
void clipPolygonToPlane(std::span<const platform::SRenderVertex> input,
                        const PastPlaneTest &is_past, const EdgeClipper &clip_edge,
                        std::size_t first, std::vector<platform::SRenderVertex> &output);
void clipPolygonToPlane(std::span<const platform::SRenderVertex> input, const SFrustumPlane &plane,
                        const EdgeClipper &clip_edge, std::size_t first,
                        std::vector<platform::SRenderVertex> &output);

// A point at no depth goes to the centre one step out, and an x the y passes' chopping or a
// wrapped sum left past a side is pulled back onto it. The original then pulled y in when x was
// within the view, but the last two passes leave y within the depth whenever x is.
void pullOntoView(platform::SProjectedVertex &point);

} // namespace nocturne::engine
