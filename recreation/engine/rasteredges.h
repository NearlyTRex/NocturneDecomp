#pragma once

#include "common/math/fixed.h"
#include "engine/polygonstate.h"
#include "engine/prim/prim.h"
#include "engine/softwareedge.h"
#include "platform/rendervertex.h"

#include <cstdint>
#include <functional>
#include <span>
#include <vector>

// What the software rasterisers share: the edge slope, the edges a polygon's sides give, the walk
// down the rows and the vertex preprocessing for the polygon's mode.
namespace nocturne::engine::raster {

// The first row starts here before any edge lowers it.
inline constexpr int kFirstRowCeiling = 1200;

[[nodiscard]] inline int getRow(const platform::SRenderVertex &vertex) {
    return vertex.projected_vertex.screen_y >> 16;
}

// How an edge between two screen heights steps: the reciprocal of its height, none under a
// pixel, and what is left of the top's row, to start the edge in the middle of its first row.
struct SEdgeSlope {
    int reciprocal = 0;
    int rest_of_row = 0;
};

[[nodiscard]] inline SEdgeSlope getEdgeSlope(int top_y, int bottom_y) {
    const std::uint32_t height =
        static_cast<std::uint32_t>(bottom_y) - static_cast<std::uint32_t>(top_y);
    return {.reciprocal = height < 0x10000U ? 0 : static_cast<int>(0xffffffffU / height),
            .rest_of_row =
                static_cast<int>((static_cast<std::uint32_t>(top_y) & 0xffffU) ^ 0xffffU)};
}

// A value's gradient over the edge's height, and its start moved down by the rest of the row.
inline void rampEdge(const SEdgeSlope &slope, int from, int to, int &current, int &gradient) {
    gradient = common::fixedMultiply(slope.reciprocal, common::wrappingSubtract(to, from));
    current = common::wrappingAdd(from, common::fixedMultiply(slope.rest_of_row, gradient));
}

[[nodiscard]] std::vector<const platform::SRenderVertex *>
getCorners(std::span<const platform::SRenderVertex> vertices);
[[nodiscard]] std::vector<platform::SRenderVertex *>
getCorners(std::span<platform::SRenderVertex> vertex_buffer, std::span<const int> vertex_indices);

// Whether a triangle faces away under the culling mode; mode 0 keeps every one.
[[nodiscard]] bool isBackFacing(const platform::SRenderVertex &v0,
                                const platform::SRenderVertex &v1,
                                const platform::SRenderVertex &v2, int culling_mode);

// The edges for the sides of a polygon that span a row, and the first row any of them starts on.
// The original's buffers held 16, as many as the clip can leave.
struct SEdgeList {
    std::vector<SSoftwareEdge> edges;
    int first_row = kFirstRowCeiling;
};

// Sets an edge's values for the middle of its first row from its top and bottom corners.
using EdgeRamp = std::function<void(const SEdgeSlope &slope, const platform::SRenderVertex &top,
                                    const platform::SRenderVertex &bottom, SSoftwareEdge &edge)>;

// An edge for each side between corners on different rows, the last corner joined to the first.
[[nodiscard]] SEdgeList buildEdges(std::span<const platform::SRenderVertex *const> corners,
                                   const EdgeRamp &ramp);

enum class EDepthSource : std::uint8_t { Transformed, Reciprocal };

// x, u, v, red, alpha and depth, and green and blue for vertex colour.
void rampTexturedEdge(const SEdgeSlope &slope, const platform::SRenderVertex &top,
                      const platform::SRenderVertex &bottom, EDepthSource depth_source,
                      bool green_blue, SSoftwareEdge &edge);
void stepTexturedEdge(SSoftwareEdge &edge, bool green_blue);

// x, depth in 24.8, and red when asked.
void rampDepthEdge(const SEdgeSlope &slope, const platform::SRenderVertex &top,
                   const platform::SRenderVertex &bottom, bool with_red, SSoftwareEdge &edge);
void stepDepthEdge(SSoftwareEdge &edge, bool with_red);

using EdgeStepper = std::function<void(SSoftwareEdge &edge)>;
// Draws a row between the first and second edges found, and says whether to stop.
using RowDrawer =
    std::function<bool(const SSoftwareEdge &first, const SSoftwareEdge &second, int y)>;

// Down the rows from the first between two edges; when one ends, the next to start on that row
// takes its place, and with none, or when drawing a row asks to stop, the polygon is done.
void walkEdges(std::span<SSoftwareEdge> edges, int first_row, int row_limit,
               const EdgeStepper &step_edge, const RowDrawer &draw_row);

// Whether a row's request to stop ends the polygon.
enum class ERowStop : std::uint8_t { Ignored, Honoured };

// Walks the list's rows through a scanline, the second edge found as its left.
void walkScanlines(SEdgeList &list, int row_limit, const EdgeStepper &step_edge,
                   const ScanlineDrawer &draw_scanline, ERowStop stop);

// The depth-only rasteriser zraster's and drender's triangles share: x, and depth in 24.8 less
// the state's bias, to the polygon's end, and a row may stop it.
void rasterizeDepthPolygon(std::span<const platform::SRenderVertex *const> corners,
                           const SPolygonState &state);

inline void preprocessVertices(std::span<platform::SRenderVertex> vertices, int preprocess_mode) {
    switch (preprocess_mode) {
    case 1:
        prepareDepthBuffer(vertices);
        return;
    case 2:
    case 5:
        normalizeTextureCoords(vertices);
        return;
    case 3:
        adjustNearPlaneTextureCoords(vertices);
        return;
    case 6:
        replaceWWithDepth(vertices);
        return;
    default:
        return;
    }
}

} // namespace nocturne::engine::raster
