#include "common/math/fixed.h"
#include "common/render/renderstate.h"
#include "core/xform/xform.h"
#include "engine/clipper/clipplane.h"
#include "platform/rendervertex.h"

#include <cstddef>
#include <cstdint>
#include <span>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using engine::SFrustumPlane;
using platform::SRenderVertex;

using PlaneInterpolator = void (*)(const SRenderVertex &, const SRenderVertex &, std::uint32_t,
                                   SRenderVertex &);

constexpr std::size_t kSmallestPolygon = 3;

void clipToPlane(const SRenderVertex &vertex_a, const SRenderVertex &vertex_b,
                 std::uint32_t render_flags, const SFrustumPlane &plane,
                 SRenderVertex &vertex_out) {
    const int fraction = engine::clipEdgeToPlane(
        vertex_a.projected_vertex, vertex_b.projected_vertex, plane, vertex_out.projected_vertex);
    if ((render_flags & common::kRenderSmooth) != 0) {
        vertex_out.r = common::interpolateFraction31(vertex_a.r, vertex_b.r, fraction);
    }
}

// One side's pass from the first vertex, in the order the original's case table adds them.
void clipPolygonToPlane(std::span<const SRenderVertex> input, const SFrustumPlane &plane,
                        PlaneInterpolator interpolate, std::uint32_t render_flags,
                        std::vector<SRenderVertex> &output) {
    engine::clipPolygonToPlane(
        input, plane,
        [interpolate, render_flags](const SRenderVertex &inside, const SRenderVertex &outside,
                                    SRenderVertex &cut) {
            interpolate(inside, outside, render_flags, cut);
        },
        0, output);
}

} // namespace

// nocedit 0x005f7bc0
void clipInterpolateRightPlane(const SRenderVertex &vertex_a, const SRenderVertex &vertex_b,
                               std::uint32_t render_flags, SRenderVertex &vertex_out) {
    clipToPlane(vertex_a, vertex_b, render_flags, engine::kPositiveXPlane, vertex_out);
}

// nocedit 0x005f7c80
void clipInterpolateLeftPlane(const SRenderVertex &vertex_a, const SRenderVertex &vertex_b,
                              std::uint32_t render_flags, SRenderVertex &vertex_out) {
    clipToPlane(vertex_a, vertex_b, render_flags, engine::kNegativeXPlane, vertex_out);
}

// nocedit 0x005f7d40
void clipInterpolateTopPlane(const SRenderVertex &vertex_a, const SRenderVertex &vertex_b,
                             std::uint32_t render_flags, SRenderVertex &vertex_out) {
    clipToPlane(vertex_a, vertex_b, render_flags, engine::kPositiveYPlane, vertex_out);
}

// nocedit 0x005f7e00
void clipInterpolateBottomPlane(const SRenderVertex &vertex_a, const SRenderVertex &vertex_b,
                                std::uint32_t render_flags, SRenderVertex &vertex_out) {
    clipToPlane(vertex_a, vertex_b, render_flags, engine::kNegativeYPlane, vertex_out);
}

// The original's stage buffers held 32 vertices and its output 16, unchecked.
// nocedit 0x005f8550
void transformAndClipGeometry(std::span<const SRenderVertex> vertices,
                              std::span<const int> vertex_indices, std::uint32_t render_flags,
                              std::vector<SRenderVertex> &clipped) {
    std::vector<SRenderVertex> polygon;
    polygon.reserve(vertex_indices.size());
    bool any_outside = false;
    for (const int index : vertex_indices) {
        const SRenderVertex &vertex = vertices[static_cast<std::size_t>(index)];
        any_outside = any_outside || vertex.projected_vertex.screen_x < 0;
        polygon.push_back(vertex);
    }
    if (!any_outside) {
        clipped = std::move(polygon);
        return;
    }
    std::vector<SRenderVertex> after_right;
    std::vector<SRenderVertex> after_left;
    std::vector<SRenderVertex> after_top;
    clipped.clear();
    clipPolygonToPlane(polygon, engine::kPositiveXPlane, clipInterpolateRightPlane, render_flags,
                       after_right);
    if (after_right.size() < kSmallestPolygon) {
        return;
    }
    clipPolygonToPlane(after_right, engine::kNegativeXPlane, clipInterpolateLeftPlane, render_flags,
                       after_left);
    if (after_left.size() < kSmallestPolygon) {
        return;
    }
    clipPolygonToPlane(after_left, engine::kPositiveYPlane, clipInterpolateTopPlane, render_flags,
                       after_top);
    if (after_top.size() < kSmallestPolygon) {
        return;
    }
    // A pass gives none or three or more, so the original's check of the last one is dropped.
    clipPolygonToPlane(after_top, engine::kNegativeYPlane, clipInterpolateBottomPlane, render_flags,
                       clipped);
    for (SRenderVertex &vertex : clipped) {
        engine::pullOntoView(vertex.projected_vertex);
    }
}

} // namespace nocturne::core
