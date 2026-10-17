#include "engine/zraster/zraster.h"

#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/prim/prim.h"
#include "engine/rasteredges.h"
#include "engine/screenprojection.h"
#include "engine/softwareedge.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "platform/rendervertex.h"

#include <limits>
#include <span>

namespace nocturne::engine {

using platform::SRenderVertex;

CZRaster::CZRaster(CSpecial &special, const C2d &two_d, const C3d &three_d,
                   const SCurrentTexture &texture)
    : special_(special), two_d_(two_d), three_d_(three_d), texture_(texture) {}

bool CZRaster::isCulled(std::span<const SRenderVertex> vertices) const {
    return raster::isBackFacing(vertices[0], vertices[1], vertices[2], three_d_.getCullingMode());
}

// The original stopped when a row set a global abort flag.
// deferred: adding to the rendered-triangle count, with CGame::processFrame's statistics
// nocedit 0x005fcfc0
void CZRaster::rasterizeTriangle(std::span<SRenderVertex> vertex_buffer,
                                 const SPolygonState &state) {
    const int preprocess_mode = state.mode.vertex_preprocess_mode;
    if (state.vertex_processing) {
        for (SRenderVertex &vertex : vertex_buffer) {
            if (vertex.projected_vertex.screen_x >= 0) {
                continue;
            }
            const int inv_z = vertex.projected_vertex.inv_z;
            projectToScreen(vertex.projected_vertex, two_d_.getProjection());
            if ((preprocess_mode & 7) == 0) {
                vertex.projected_vertex.inv_z = inv_z;
            }
        }
    }
    if (isCulled(vertex_buffer)) {
        return;
    }
    if (special_.getUseExternalRenderer() && !texture_.textures_disabled) {
        special_.drawPolygon(vertex_buffer, static_cast<int>(state.mode.render_flags));
        return;
    }
    if (preprocess_mode == 1) {
        prepareDepthBuffer(vertex_buffer);
    } else if (preprocess_mode == 6) {
        replaceWWithDepth(vertex_buffer);
    }
    raster::rasterizeDepthPolygon(raster::getCorners(vertex_buffer), state);
}

// The original projected every vertex the clip left, whatever the vertex processing.
// deferred: adding to the rendered-triangle count, with CGame::processFrame's statistics
// nocedit 0x005fd4e0
void CZRaster::rasterizePolygonCustom(std::span<SRenderVertex> vertex_buffer,
                                      const SPolygonState &state,
                                      const CustomScanlineDrawer &scanline_renderer) {
    for (SRenderVertex &vertex : vertex_buffer) {
        if (vertex.projected_vertex.screen_x < 0) {
            projectToScreen(vertex.projected_vertex, two_d_.getProjection());
        }
    }
    if (isCulled(vertex_buffer)) {
        return;
    }
    raster::preprocessVertices(vertex_buffer, state.mode.vertex_preprocess_mode);
    raster::SEdgeList list = raster::buildEdges(
        raster::getCorners(vertex_buffer),
        [](const raster::SEdgeSlope &slope, const SRenderVertex &top, const SRenderVertex &bottom,
           SSoftwareEdge &edge) { raster::rampDepthEdge(slope, top, bottom, true, edge); });
    raster::walkEdges(
        list.edges, list.first_row, std::numeric_limits<int>::max(),
        [](SSoftwareEdge &edge) { raster::stepDepthEdge(edge, true); },
        [&scanline_renderer](const SSoftwareEdge &first, const SSoftwareEdge &second, int y) {
            scanline_renderer(y, first, second);
            return false;
        });
}

} // namespace nocturne::engine
