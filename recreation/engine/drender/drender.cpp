#include "engine/drender/drender.h"

#include "common/render/renderstate.h"
#include "engine/3d/3d.h"
#include "engine/polygonstate.h"
#include "engine/prim/prim.h"
#include "engine/rasteredges.h"
#include "engine/softwareedge.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "platform/rendervertex.h"

#include <limits>
#include <span>
#include <vector>

namespace nocturne::engine {
namespace {

using platform::SRenderVertex;

// Whether the triangle is done before the software rasteriser: culled on its first three
// corners, or drawn by the hardware renderer.
bool isCulledOrDrawnInHardware(std::span<SRenderVertex *> corners, const SPolygonState &state,
                               CSpecial &special, const C3d &three_d,
                               const SCurrentTexture &texture) {
    if (raster::isBackFacing(*corners[0], *corners[1], *corners[2], three_d.getCullingMode())) {
        return true;
    }
    if (!special.getUseExternalRenderer() || texture.textures_disabled) {
        return false;
    }
    special.drawPolygon2(corners, static_cast<int>(state.mode.render_flags));
    return true;
}

} // namespace

// The original stopped when a row set a global abort flag.
// deferred: adding to the rendered-triangle count, with CGame::processFrame's statistics
// nocedit 0x00483370
void renderTriangleTextured(std::span<SRenderVertex> vertex_buffer,
                            std::span<const int> vertex_indices, const SPolygonState &state,
                            CSpecial &special, const C3d &three_d, const SCurrentTexture &texture) {
    std::vector<SRenderVertex *> corners = raster::getCorners(vertex_buffer, vertex_indices);
    if (isCulledOrDrawnInHardware(corners, state, special, three_d, texture)) {
        return;
    }
    const raster::EDepthSource depth_source = texture.textures_disabled
                                                  ? raster::EDepthSource::Transformed
                                                  : raster::EDepthSource::Reciprocal;
    const bool green_blue = (state.mode.render_flags & common::kRenderVertexColor) != 0;
    const std::vector<const SRenderVertex *> read_corners(corners.begin(), corners.end());
    raster::SEdgeList list = raster::buildEdges(
        read_corners,
        [depth_source, green_blue](const raster::SEdgeSlope &slope, const SRenderVertex &top,
                                   const SRenderVertex &bottom, SSoftwareEdge &edge) {
            raster::rampTexturedEdge(slope, top, bottom, depth_source, green_blue, edge);
        });
    raster::walkScanlines(
        list, std::numeric_limits<int>::max(),
        [green_blue](SSoftwareEdge &edge) { raster::stepTexturedEdge(edge, green_blue); },
        state.draw_scanline, raster::ERowStop::Honoured);
}

// The original stopped when a row set a global abort flag.
// deferred: adding to the rendered-triangle count, with CGame::processFrame's statistics
// nocedit 0x004839f0
void renderTriangleSimple(std::span<SRenderVertex> vertex_buffer,
                          std::span<const int> vertex_indices, const SPolygonState &state,
                          CSpecial &special, const C3d &three_d, const SCurrentTexture &texture) {
    std::vector<SRenderVertex *> corners = raster::getCorners(vertex_buffer, vertex_indices);
    if (isCulledOrDrawnInHardware(corners, state, special, three_d, texture)) {
        return;
    }
    const int preprocess_mode = state.mode.vertex_preprocess_mode;
    for (SRenderVertex *corner : corners) {
        if (preprocess_mode == 1) {
            prepareDepthBuffer({corner, 1});
        } else if (preprocess_mode == 6) {
            replaceWWithDepth({corner, 1});
        }
    }
    const std::vector<const SRenderVertex *> read_corners(corners.begin(), corners.end());
    raster::rasterizeDepthPolygon(read_corners, state);
}

} // namespace nocturne::engine
