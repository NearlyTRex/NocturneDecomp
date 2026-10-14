#include "engine/rasteredges.h"

#include "common/math/fixed.h"
#include "engine/polygonstate.h"
#include "engine/prim/prim.h"
#include "engine/softwareedge.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <span>
#include <utility>
#include <vector>

namespace nocturne::engine::raster {
namespace {

using common::wrappingAdd;
using platform::SRenderVertex;

// Depth in 24.8, as IMUL by 256 wraps it.
int toDepth(int transformed_z) {
    return static_cast<int>(static_cast<std::uint32_t>(transformed_z) << 8U);
}

int getDepth(const SRenderVertex &vertex, EDepthSource source) {
    return source == EDepthSource::Reciprocal ? vertex.projected_vertex.inv_z
                                              : vertex.projected_vertex.transformed_z;
}

} // namespace

std::vector<const SRenderVertex *> getCorners(std::span<const SRenderVertex> vertices) {
    std::vector<const SRenderVertex *> corners;
    corners.reserve(vertices.size());
    for (const SRenderVertex &vertex : vertices) {
        corners.push_back(&vertex);
    }
    return corners;
}

std::vector<SRenderVertex *> getCorners(std::span<SRenderVertex> vertex_buffer,
                                        std::span<const int> vertex_indices) {
    std::vector<SRenderVertex *> corners;
    corners.reserve(vertex_indices.size());
    for (const int index : vertex_indices) {
        corners.push_back(&vertex_buffer[static_cast<std::size_t>(index)]);
    }
    return corners;
}

bool isBackFacing(const SRenderVertex &v0, const SRenderVertex &v1, const SRenderVertex &v2,
                  int culling_mode) {
    return culling_mode != 0 && !calculateTriangleWindingOrder(v0, v1, v2, culling_mode);
}

SEdgeList buildEdges(std::span<const SRenderVertex *const> corners, const EdgeRamp &ramp) {
    SEdgeList list;
    list.edges.reserve(corners.size());
    for (std::size_t i = 0; i < corners.size(); ++i) {
        const SRenderVertex *top = corners[i];
        const SRenderVertex *bottom = corners[(i + 1) % corners.size()];
        if (getRow(*top) == getRow(*bottom)) {
            continue;
        }
        if (bottom->projected_vertex.screen_y < top->projected_vertex.screen_y) {
            std::swap(top, bottom);
        }
        const SEdgeSlope slope =
            getEdgeSlope(top->projected_vertex.screen_y, bottom->projected_vertex.screen_y);
        SSoftwareEdge &edge =
            list.edges.emplace_back(SSoftwareEdge{.y_min = getRow(*top), .y_max = getRow(*bottom)});
        ramp(slope, *top, *bottom, edge);
        list.first_row = std::min(list.first_row, edge.y_min);
    }
    return list;
}

void rampTexturedEdge(const SEdgeSlope &slope, const SRenderVertex &top,
                      const SRenderVertex &bottom, EDepthSource depth_source, bool green_blue,
                      SSoftwareEdge &edge) {
    rampEdge(slope, top.projected_vertex.screen_x, bottom.projected_vertex.screen_x, edge.x_current,
             edge.x_gradient);
    rampEdge(slope, top.u, bottom.u, edge.u_current, edge.u_gradient);
    rampEdge(slope, top.v, bottom.v, edge.v_current, edge.v_gradient);
    rampEdge(slope, top.r, bottom.r, edge.red_current, edge.red_gradient);
    rampEdge(slope, top.a, bottom.a, edge.alpha_current, edge.alpha_gradient);
    rampEdge(slope, getDepth(top, depth_source), getDepth(bottom, depth_source), edge.depth_current,
             edge.depth_gradient);
    if (green_blue) {
        rampEdge(slope, top.g, bottom.g, edge.green_current, edge.green_gradient);
        rampEdge(slope, top.b, bottom.b, edge.blue_current, edge.blue_gradient);
    }
}

void stepTexturedEdge(SSoftwareEdge &edge, bool green_blue) {
    edge.x_current = wrappingAdd(edge.x_current, edge.x_gradient);
    edge.u_current = wrappingAdd(edge.u_current, edge.u_gradient);
    edge.v_current = wrappingAdd(edge.v_current, edge.v_gradient);
    edge.red_current = wrappingAdd(edge.red_current, edge.red_gradient);
    edge.depth_current = wrappingAdd(edge.depth_current, edge.depth_gradient);
    edge.alpha_current = wrappingAdd(edge.alpha_current, edge.alpha_gradient);
    if (green_blue) {
        edge.green_current = wrappingAdd(edge.green_current, edge.green_gradient);
        edge.blue_current = wrappingAdd(edge.blue_current, edge.blue_gradient);
    }
}

void rampDepthEdge(const SEdgeSlope &slope, const SRenderVertex &top, const SRenderVertex &bottom,
                   bool with_red, SSoftwareEdge &edge) {
    rampEdge(slope, top.projected_vertex.screen_x, bottom.projected_vertex.screen_x, edge.x_current,
             edge.x_gradient);
    rampEdge(slope, toDepth(top.projected_vertex.transformed_z),
             toDepth(bottom.projected_vertex.transformed_z), edge.depth_current,
             edge.depth_gradient);
    if (with_red) {
        rampEdge(slope, top.r, bottom.r, edge.red_current, edge.red_gradient);
    }
}

void stepDepthEdge(SSoftwareEdge &edge, bool with_red) {
    edge.x_current = wrappingAdd(edge.x_current, edge.x_gradient);
    edge.depth_current = wrappingAdd(edge.depth_current, edge.depth_gradient);
    if (with_red) {
        edge.red_current = wrappingAdd(edge.red_current, edge.red_gradient);
    }
}

void walkEdges(std::span<SSoftwareEdge> edges, int first_row, int row_limit,
               const EdgeStepper &step_edge, const RowDrawer &draw_row) {
    SSoftwareEdge *first = findEdgeInBuffer(edges, first_row, nullptr);
    if (first == nullptr) {
        return;
    }
    // The top corner, or the ends of a level top, start two edges, so the original's check for
    // a second is dropped.
    SSoftwareEdge *second = findEdgeInBuffer(edges, first_row, first);
    for (int y = first_row; y < row_limit; ++y) {
        if (first->y_max <= y) {
            first->y_min = -1;
            first = findEdgeInBuffer(edges, y, second);
            if (first == nullptr) {
                return;
            }
        }
        if (second->y_max <= y) {
            second->y_min = -1;
            second = findEdgeInBuffer(edges, y, first);
            if (second == nullptr) {
                return;
            }
        }
        if (draw_row(*first, *second, y)) {
            return;
        }
        step_edge(*first);
        step_edge(*second);
    }
}

void walkScanlines(SEdgeList &list, int row_limit, const EdgeStepper &step_edge,
                   const ScanlineDrawer &draw_scanline, ERowStop stop) {
    walkEdges(
        list.edges, list.first_row, row_limit, step_edge,
        [&draw_scanline, stop](const SSoftwareEdge &first, const SSoftwareEdge &second, int y) {
            return draw_scanline(second, first, y) && stop == ERowStop::Honoured;
        });
}

void rasterizeDepthPolygon(std::span<const SRenderVertex *const> corners,
                           const SPolygonState &state) {
    SEdgeList list = buildEdges(
        corners, [](const SEdgeSlope &slope, const SRenderVertex &top, const SRenderVertex &bottom,
                    SSoftwareEdge &edge) { rampDepthEdge(slope, top, bottom, false, edge); });
    for (SSoftwareEdge &edge : list.edges) {
        edge.depth_current = common::wrappingSubtract(edge.depth_current, state.depth_bias);
    }
    walkScanlines(
        list, std::numeric_limits<int>::max(),
        [](SSoftwareEdge &edge) { stepDepthEdge(edge, false); }, state.draw_scanline,
        ERowStop::Honoured);
}

} // namespace nocturne::engine::raster
