#include "common/math/fixed.h"
#include "engine/3d/3d.h"
#include "engine/prim/prim.h"
#include "engine/rasteredges.h"
#include "engine/screenprojection.h"
#include "engine/softwareedge.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <optional>
#include <span>
#include <utility>
#include <vector>

namespace nocturne::engine {
namespace {

using common::wrappingAdd;
using platform::SRenderVertex;
using raster::preprocessVertices;

// The first row starts here before any edge lowers it. Both builds have setters for the simple
// walk's row limit, which is the same, that nothing calls.
constexpr int kScanlineLimit = 1200;

enum class EDepthSource : std::uint8_t { Transformed, Reciprocal };

// What tells the simple rasterisers from the advanced: whether edges carry green and blue, where
// the rows stop, and whether an indexed polygon's corners are preprocessed.
struct SEdgeWalk {
    bool all_channels = false;
    int row_limit = kScanlineLimit;
    bool preprocess_corners = false;
};

constexpr SEdgeWalk kSimpleWalk{};
constexpr SEdgeWalk kAdvancedWalk{
    .all_channels = true, .row_limit = std::numeric_limits<int>::max(), .preprocess_corners = true};

int getDepth(const SRenderVertex &vertex, EDepthSource source) {
    return source == EDepthSource::Reciprocal ? vertex.projected_vertex.inv_z
                                              : vertex.projected_vertex.transformed_z;
}

// The edge between two corners on different rows, its values set for the middle of its first
// row. Green and blue are carried only for the walks that step them.
std::optional<SSoftwareEdge> buildEdge(const SRenderVertex &first, const SRenderVertex &second,
                                       EDepthSource depth_source, const SEdgeWalk &walk) {
    if (raster::getRow(first) == raster::getRow(second)) {
        return std::nullopt;
    }
    const SRenderVertex *top = &first;
    const SRenderVertex *bottom = &second;
    if (second.projected_vertex.screen_y < first.projected_vertex.screen_y) {
        std::swap(top, bottom);
    }
    const raster::SEdgeSlope slope =
        raster::getEdgeSlope(top->projected_vertex.screen_y, bottom->projected_vertex.screen_y);
    SSoftwareEdge edge{.y_min = raster::getRow(*top), .y_max = raster::getRow(*bottom)};
    const auto ramp = [&slope](int from, int to, int &current, int &gradient) {
        raster::rampEdge(slope, from, to, current, gradient);
    };
    ramp(top->projected_vertex.screen_x, bottom->projected_vertex.screen_x, edge.x_current,
         edge.x_gradient);
    ramp(top->u, bottom->u, edge.u_current, edge.u_gradient);
    ramp(top->v, bottom->v, edge.v_current, edge.v_gradient);
    ramp(top->r, bottom->r, edge.red_current, edge.red_gradient);
    ramp(top->a, bottom->a, edge.alpha_current, edge.alpha_gradient);
    ramp(getDepth(*top, depth_source), getDepth(*bottom, depth_source), edge.depth_current,
         edge.depth_gradient);
    if (walk.all_channels) {
        ramp(top->g, bottom->g, edge.green_current, edge.green_gradient);
        ramp(top->b, bottom->b, edge.blue_current, edge.blue_gradient);
    }
    return edge;
}

void stepEdge(SSoftwareEdge &edge, const SEdgeWalk &walk) {
    edge.x_current = wrappingAdd(edge.x_current, edge.x_gradient);
    edge.u_current = wrappingAdd(edge.u_current, edge.u_gradient);
    edge.v_current = wrappingAdd(edge.v_current, edge.v_gradient);
    edge.red_current = wrappingAdd(edge.red_current, edge.red_gradient);
    edge.depth_current = wrappingAdd(edge.depth_current, edge.depth_gradient);
    edge.alpha_current = wrappingAdd(edge.alpha_current, edge.alpha_gradient);
    if (walk.all_channels) {
        edge.green_current = wrappingAdd(edge.green_current, edge.green_gradient);
        edge.blue_current = wrappingAdd(edge.blue_current, edge.blue_gradient);
    }
}

// Edges for each side of the polygon that spans a row, and the first row any of them starts on.
// The original's buffers held 16, as many as the clip can leave.
struct SEdgeList {
    std::vector<SSoftwareEdge> edges;
    int first_row = kScanlineLimit;
};

SEdgeList buildEdges(std::span<const SRenderVertex *const> corners, EDepthSource depth_source,
                     const SEdgeWalk &walk) {
    SEdgeList list;
    list.edges.reserve(corners.size());
    for (std::size_t i = 0; i < corners.size(); ++i) {
        const std::optional<SSoftwareEdge> edge =
            buildEdge(*corners[i], *corners[(i + 1) % corners.size()], depth_source, walk);
        if (edge) {
            list.first_row = std::min(list.first_row, edge->y_min);
            list.edges.push_back(*edge);
        }
    }
    return list;
}

// The second edge found is the left; prim's walks ignore a request to stop.
void walkEdges(SEdgeList &list, const ScanlineDrawer &draw_scanline, const SEdgeWalk &walk) {
    raster::walkEdges(
        list.edges, list.first_row, walk.row_limit,
        [&walk](SSoftwareEdge &edge) { stepEdge(edge, walk); },
        [&draw_scanline](const SSoftwareEdge &first, const SSoftwareEdge &second, int y) {
            draw_scanline(second, first, y);
            return false;
        });
}

} // namespace

// nocedit 0x00551f70
SSoftwareEdge *findEdgeInBuffer(std::span<SSoftwareEdge> edges, int y_value,
                                const SSoftwareEdge *edge_ptr) {
    const auto found = std::ranges::find_if(edges, [y_value, edge_ptr](const SSoftwareEdge &edge) {
        return edge.y_min == y_value && &edge != edge_ptr;
    });
    return found == edges.end() ? nullptr : &*found;
}

CPrim::CPrim(CSpecial &special, const C2d &two_d, const C3d &three_d,
             const SCurrentTexture &texture)
    : special_(special), two_d_(two_d), three_d_(three_d), texture_(texture) {}

bool CPrim::isCulled(std::span<const SRenderVertex *const> corners, ETriangles triangles) const {
    const int culling_mode = three_d_.getCullingMode();
    if (culling_mode == 0) {
        return false;
    }
    for (std::size_t i = 0; i + 2 < corners.size(); ++i) {
        const SRenderVertex &first = triangles == ETriangles::Fan ? *corners[0] : *corners[i];
        if (calculateTriangleWindingOrder(first, *corners[i + 1], *corners[i + 2], culling_mode)) {
            return false;
        }
    }
    return true;
}

bool CPrim::drawsInHardware() const {
    return special_.getUseExternalRenderer() && !texture_.textures_disabled;
}

void CPrim::renderPolygon(std::span<SRenderVertex> vertices, const SPolygonState &state,
                          EVariant variant) {
    const SEdgeWalk &walk = variant == EVariant::Simple ? kSimpleWalk : kAdvancedWalk;
    if (state.vertex_processing) {
        for (SRenderVertex &vertex : vertices) {
            if (vertex.projected_vertex.screen_x < 0) {
                projectToScreen(vertex.projected_vertex, two_d_.getProjection());
            }
        }
    }
    std::vector<const SRenderVertex *> corners;
    corners.reserve(vertices.size());
    for (const SRenderVertex &vertex : vertices) {
        corners.push_back(&vertex);
    }
    if (isCulled(corners, ETriangles::Fan)) {
        return;
    }
    if (drawsInHardware()) {
        special_.drawPolygon(vertices, static_cast<int>(state.mode.render_flags));
        return;
    }
    preprocessVertices(vertices, state.mode.vertex_preprocess_mode);
    SEdgeList edges = buildEdges(corners, EDepthSource::Transformed, walk);
    walkEdges(edges, state.draw_scanline, walk);
}

// Unlike the vertex-list rasterisers, the original culled each run of three corners, a strip
// rather than a fan, and gathered at most 16 corners for the hardware renderer. With
// preprocessing 1 the edges take the reciprocal depth, which the vertex already holds.
void CPrim::renderIndexedPolygon(std::span<SRenderVertex> vertex_buffer,
                                 std::span<const int> vertex_indices, const SPolygonState &state,
                                 EVariant variant) {
    const SEdgeWalk &walk = variant == EVariant::Simple ? kSimpleWalk : kAdvancedWalk;
    std::vector<SRenderVertex *> corners;
    corners.reserve(vertex_indices.size());
    for (const int index : vertex_indices) {
        corners.push_back(&vertex_buffer[static_cast<std::size_t>(index)]);
    }
    const std::vector<const SRenderVertex *> read_corners(corners.begin(), corners.end());
    if (isCulled(read_corners, ETriangles::Strip)) {
        return;
    }
    if (drawsInHardware()) {
        special_.drawPolygon2(corners, static_cast<int>(state.mode.render_flags));
        return;
    }
    if (walk.preprocess_corners) {
        for (SRenderVertex *corner : corners) {
            preprocessVertices({corner, 1}, state.mode.vertex_preprocess_mode);
        }
    }
    SEdgeList edges = buildEdges(read_corners,
                                 state.mode.vertex_preprocess_mode == 1 ? EDepthSource::Reciprocal
                                                                        : EDepthSource::Transformed,
                                 walk);
    walkEdges(edges, state.draw_scanline, walk);
}

// The original counted the polygons for the frame statistics.
// nocedit 0x00552510
void CPrim::renderPolygonSoftware(std::span<SRenderVertex> vertices, const SPolygonState &state) {
    renderPolygon(vertices, state, EVariant::Simple);
}

// The original counted the polygons for the frame statistics.
// nocedit 0x00552a40
void CPrim::renderIndexedPolygonSoftware(std::span<SRenderVertex> vertex_buffer,
                                         std::span<const int> vertex_indices,
                                         const SPolygonState &state) {
    renderIndexedPolygon(vertex_buffer, vertex_indices, state, EVariant::Simple);
}

// The original counted the polygons for the frame statistics.
// nocedit 0x00553470
void CPrim::renderScanlinePolygon(std::span<SRenderVertex> vertices, const SPolygonState &state) {
    renderPolygon(vertices, state, EVariant::Advanced);
}

// The original counted the polygons for the frame statistics.
// nocedit 0x00553b10
void CPrim::renderIndexedPolygonAdvanced(std::span<SRenderVertex> vertex_buffer,
                                         std::span<const int> vertex_indices,
                                         const SPolygonState &state) {
    renderIndexedPolygon(vertex_buffer, vertex_indices, state, EVariant::Advanced);
}

} // namespace nocturne::engine
