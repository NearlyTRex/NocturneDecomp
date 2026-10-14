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
#include <limits>
#include <span>
#include <vector>

namespace nocturne::engine {
namespace {

using platform::SRenderVertex;
using raster::EDepthSource;
using raster::preprocessVertices;

// The simple walks stop at the row the first row starts from. Both builds have setters for it
// that nothing calls.
constexpr int kScanlineLimit = raster::kFirstRowCeiling;

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

// prim's walks ignore a request to stop.
void rasterizeEdges(std::span<const SRenderVertex *const> corners, EDepthSource depth_source,
                    const ScanlineDrawer &draw_scanline, const SEdgeWalk &walk) {
    raster::SEdgeList list = raster::buildEdges(
        corners, [depth_source, &walk](const raster::SEdgeSlope &slope, const SRenderVertex &top,
                                       const SRenderVertex &bottom, SSoftwareEdge &edge) {
            raster::rampTexturedEdge(slope, top, bottom, depth_source, walk.all_channels, edge);
        });
    raster::walkScanlines(
        list, walk.row_limit,
        [&walk](SSoftwareEdge &edge) { raster::stepTexturedEdge(edge, walk.all_channels); },
        draw_scanline, raster::ERowStop::Ignored);
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
    const std::vector<const SRenderVertex *> corners = raster::getCorners(vertices);
    if (isCulled(corners, ETriangles::Fan)) {
        return;
    }
    if (drawsInHardware()) {
        special_.drawPolygon(vertices, static_cast<int>(state.mode.render_flags));
        return;
    }
    preprocessVertices(vertices, state.mode.vertex_preprocess_mode);
    rasterizeEdges(corners, EDepthSource::Transformed, state.draw_scanline, walk);
}

// Unlike the vertex-list rasterisers, the original culled each run of three corners, a strip
// rather than a fan, and gathered at most 16 corners for the hardware renderer. With
// preprocessing 1 the edges take the reciprocal depth, which the vertex already holds.
void CPrim::renderIndexedPolygon(std::span<SRenderVertex> vertex_buffer,
                                 std::span<const int> vertex_indices, const SPolygonState &state,
                                 EVariant variant) {
    const SEdgeWalk &walk = variant == EVariant::Simple ? kSimpleWalk : kAdvancedWalk;
    std::vector<SRenderVertex *> corners = raster::getCorners(vertex_buffer, vertex_indices);
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
    rasterizeEdges(read_corners,
                   state.mode.vertex_preprocess_mode == 1 ? EDepthSource::Reciprocal
                                                          : EDepthSource::Transformed,
                   state.draw_scanline, walk);
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
