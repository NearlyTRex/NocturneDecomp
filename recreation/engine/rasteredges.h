#pragma once

#include "common/math/fixed.h"
#include "engine/prim/prim.h"
#include "engine/softwareedge.h"
#include "platform/rendervertex.h"

#include <cstdint>
#include <functional>
#include <span>

// What the software rasterisers share: the edge slope, the walk down the rows and the vertex
// preprocessing for the polygon's mode.
namespace nocturne::engine::raster {

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

using EdgeStepper = std::function<void(SSoftwareEdge &edge)>;
// Draws a row between the first and second edges found, and says whether to stop.
using RowDrawer =
    std::function<bool(const SSoftwareEdge &first, const SSoftwareEdge &second, int y)>;

// Down the rows from the first between two edges; when one ends, the next to start on that row
// takes its place, and with none, or when drawing a row asks to stop, the polygon is done.
void walkEdges(std::span<SSoftwareEdge> edges, int first_row, int row_limit,
               const EdgeStepper &step_edge, const RowDrawer &draw_row);

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
