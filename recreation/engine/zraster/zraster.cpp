#include "engine/zraster/zraster.h"

#include "common/math/fixed.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/prim/prim.h"
#include "engine/rasteredges.h"
#include "engine/screenprojection.h"
#include "engine/softwareedge.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <cstdint>
#include <limits>
#include <span>
#include <utility>
#include <vector>

namespace nocturne::engine {
namespace {

using common::wrappingAdd;
using platform::SRenderVertex;

// The first row starts here before any edge lowers it.
constexpr int kFirstRowCeiling = 1200;
constexpr int kNoRowLimit = std::numeric_limits<int>::max();

// Depth in 24.8, as IMUL by 256 wraps it.
int toDepth(int transformed_z) {
    return static_cast<int>(static_cast<std::uint32_t>(transformed_z) << 8U);
}

struct SEdgeList {
    std::vector<SSoftwareEdge> edges;
    int first_row = kFirstRowCeiling;
};

// The edges between corners on different rows, with x and depth, and red when asked.
SEdgeList buildEdges(std::span<const SRenderVertex> vertices, bool with_red) {
    SEdgeList list;
    list.edges.reserve(vertices.size());
    for (std::size_t i = 0; i < vertices.size(); ++i) {
        const SRenderVertex *top = &vertices[i];
        const SRenderVertex *bottom = &vertices[(i + 1) % vertices.size()];
        if (raster::getRow(*top) == raster::getRow(*bottom)) {
            continue;
        }
        if (bottom->projected_vertex.screen_y < top->projected_vertex.screen_y) {
            std::swap(top, bottom);
        }
        const raster::SEdgeSlope slope =
            raster::getEdgeSlope(top->projected_vertex.screen_y, bottom->projected_vertex.screen_y);
        SSoftwareEdge &edge = list.edges.emplace_back(
            SSoftwareEdge{.y_min = raster::getRow(*top), .y_max = raster::getRow(*bottom)});
        raster::rampEdge(slope, top->projected_vertex.screen_x, bottom->projected_vertex.screen_x,
                         edge.x_current, edge.x_gradient);
        raster::rampEdge(slope, toDepth(top->projected_vertex.transformed_z),
                         toDepth(bottom->projected_vertex.transformed_z), edge.depth_current,
                         edge.depth_gradient);
        if (with_red) {
            raster::rampEdge(slope, top->r, bottom->r, edge.red_current, edge.red_gradient);
        }
        list.first_row = std::min(list.first_row, edge.y_min);
    }
    return list;
}

} // namespace

CZRaster::CZRaster(CSpecial &special, const C2d &two_d, const C3d &three_d,
                   const SCurrentTexture &texture)
    : special_(special), two_d_(two_d), three_d_(three_d), texture_(texture) {}

bool CZRaster::isCulled(std::span<const SRenderVertex> vertices) const {
    const int culling_mode = three_d_.getCullingMode();
    return culling_mode != 0 &&
           !calculateTriangleWindingOrder(vertices[0], vertices[1], vertices[2], culling_mode);
}

// The original counted the polygons for the frame statistics, and stopped when a row set a
// global abort flag.
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
    SEdgeList list = buildEdges(vertex_buffer, false);
    for (SSoftwareEdge &edge : list.edges) {
        edge.depth_current = common::wrappingSubtract(edge.depth_current, state.depth_bias);
    }
    raster::walkEdges(
        list.edges, list.first_row, kNoRowLimit,
        [](SSoftwareEdge &edge) {
            edge.x_current = wrappingAdd(edge.x_current, edge.x_gradient);
            edge.depth_current = wrappingAdd(edge.depth_current, edge.depth_gradient);
        },
        [&state](const SSoftwareEdge &first, const SSoftwareEdge &second, int y) {
            return state.draw_scanline(second, first, y);
        });
}

// The original counted the polygons for the frame statistics. It projected every vertex the
// clip left, whatever the vertex processing.
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
    SEdgeList list = buildEdges(vertex_buffer, true);
    raster::walkEdges(
        list.edges, list.first_row, kNoRowLimit,
        [](SSoftwareEdge &edge) {
            edge.x_current = wrappingAdd(edge.x_current, edge.x_gradient);
            edge.depth_current = wrappingAdd(edge.depth_current, edge.depth_gradient);
            edge.red_current = wrappingAdd(edge.red_current, edge.red_gradient);
        },
        [&scanline_renderer](const SSoftwareEdge &first, const SSoftwareEdge &second, int y) {
            scanline_renderer(y, first, second);
            return false;
        });
}

} // namespace nocturne::engine
