#include "common/math/fixed.h"
#include "engine/3d/3d.h"
#include "engine/prim/prim.h"
#include "engine/screenprojection.h"
#include "engine/softwareedge.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <utility>
#include <vector>

namespace nocturne::engine {
namespace {

using common::fixedMultiply;
using common::wrappingAdd;
using common::wrappingSubtract;
using platform::SRenderVertex;

// The rows run up to here at most, and the first row starts here before any edge lowers it. Both
// builds have setters for the limit that nothing calls.
constexpr int kScanlineLimit = 1200;

enum class EDepthSource : std::uint8_t { Transformed, Reciprocal };

int getDepth(const SRenderVertex &vertex, EDepthSource source) {
    return source == EDepthSource::Reciprocal ? vertex.projected_vertex.inv_z
                                              : vertex.projected_vertex.transformed_z;
}

int getRow(const SRenderVertex &vertex) {
    return vertex.projected_vertex.screen_y >> 16;
}

// The edge between two corners on different rows, its values set for the middle of its first
// row: each gradient is the change over the height, and each start the top value moved down by
// what is left of the top's row. A height under a pixel gives no gradients.
std::optional<SSoftwareEdge> buildEdge(const SRenderVertex &first, const SRenderVertex &second,
                                       EDepthSource depth_source) {
    if (getRow(first) == getRow(second)) {
        return std::nullopt;
    }
    const SRenderVertex *top = &first;
    const SRenderVertex *bottom = &second;
    if (second.projected_vertex.screen_y < first.projected_vertex.screen_y) {
        std::swap(top, bottom);
    }
    const std::uint32_t height = static_cast<std::uint32_t>(bottom->projected_vertex.screen_y) -
                                 static_cast<std::uint32_t>(top->projected_vertex.screen_y);
    const int reciprocal = height < 0x10000U ? 0 : static_cast<int>(0xffffffffU / height);
    const int rest_of_row = static_cast<int>(
        (static_cast<std::uint32_t>(top->projected_vertex.screen_y) & 0xffffU) ^ 0xffffU);
    SSoftwareEdge edge{.y_min = getRow(*top), .y_max = getRow(*bottom)};
    const auto ramp = [reciprocal, rest_of_row](int from, int to, int &current, int &gradient) {
        gradient = fixedMultiply(reciprocal, wrappingSubtract(to, from));
        current = wrappingAdd(from, fixedMultiply(rest_of_row, gradient));
    };
    ramp(top->projected_vertex.screen_x, bottom->projected_vertex.screen_x, edge.x_current,
         edge.x_gradient);
    ramp(top->u, bottom->u, edge.u_current, edge.u_gradient);
    ramp(top->v, bottom->v, edge.v_current, edge.v_gradient);
    ramp(top->r, bottom->r, edge.red_current, edge.red_gradient);
    ramp(top->a, bottom->a, edge.alpha_current, edge.alpha_gradient);
    ramp(getDepth(*top, depth_source), getDepth(*bottom, depth_source), edge.depth_current,
         edge.depth_gradient);
    return edge;
}

void stepEdge(SSoftwareEdge &edge) {
    edge.x_current = wrappingAdd(edge.x_current, edge.x_gradient);
    edge.u_current = wrappingAdd(edge.u_current, edge.u_gradient);
    edge.v_current = wrappingAdd(edge.v_current, edge.v_gradient);
    edge.red_current = wrappingAdd(edge.red_current, edge.red_gradient);
    edge.depth_current = wrappingAdd(edge.depth_current, edge.depth_gradient);
    edge.alpha_current = wrappingAdd(edge.alpha_current, edge.alpha_gradient);
}

// Edges for each side of the polygon that spans a row, and the first row any of them starts on.
// The original's buffer held 16, as many as the clip can leave.
struct SEdgeList {
    std::vector<SSoftwareEdge> edges;
    int first_row = kScanlineLimit;
};

SEdgeList buildEdges(std::span<const SRenderVertex *const> corners, EDepthSource depth_source) {
    SEdgeList list;
    list.edges.reserve(corners.size());
    for (std::size_t i = 0; i < corners.size(); ++i) {
        const std::optional<SSoftwareEdge> edge =
            buildEdge(*corners[i], *corners[(i + 1) % corners.size()], depth_source);
        if (edge) {
            list.first_row = std::min(list.first_row, edge->y_min);
            list.edges.push_back(*edge);
        }
    }
    return list;
}

// Down the rows from the first between two edges; when one ends, the next to start on that row
// takes its place, and with none the polygon is done.
void walkEdges(SEdgeList &list, const ScanlineDrawer &draw_scanline) {
    const std::span<SSoftwareEdge> edges(list.edges);
    SSoftwareEdge *right = findEdgeInBuffer(edges, list.first_row, nullptr);
    if (right == nullptr) {
        return;
    }
    // The top corner, or the ends of a level top, start two edges, so the original's check for
    // a second is dropped.
    SSoftwareEdge *left = findEdgeInBuffer(edges, list.first_row, right);
    for (int y = list.first_row; y < kScanlineLimit; ++y) {
        if (right->y_max <= y) {
            right->y_min = -1;
            right = findEdgeInBuffer(edges, y, left);
            if (right == nullptr) {
                return;
            }
        }
        if (left->y_max <= y) {
            left->y_min = -1;
            left = findEdgeInBuffer(edges, y, right);
            if (left == nullptr) {
                return;
            }
        }
        draw_scanline(*left, *right, y);
        stepEdge(*right);
        stepEdge(*left);
    }
}

void preprocessVertices(std::span<SRenderVertex> vertices, int preprocess_mode) {
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

// The original counted the polygons for the frame statistics.
// nocedit 0x00552510
void CPrim::renderPolygonSoftware(std::span<SRenderVertex> vertices, const SPolygonState &state) {
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
    SEdgeList edges = buildEdges(corners, EDepthSource::Transformed);
    walkEdges(edges, state.draw_scanline);
}

// The original counted the polygons for the frame statistics, and gathered at most 16 corners
// for the hardware renderer.
// nocedit 0x00552a40
void CPrim::renderIndexedPolygonSoftware(std::span<SRenderVertex> vertex_buffer,
                                         std::span<const int> vertex_indices,
                                         const SPolygonState &state) {
    std::vector<SRenderVertex *> corners;
    corners.reserve(vertex_indices.size());
    for (const int index : vertex_indices) {
        corners.push_back(&vertex_buffer[static_cast<std::size_t>(index)]);
    }
    const std::vector<const SRenderVertex *> read_corners(corners.begin(), corners.end());
    // Unlike renderPolygonSoftware, the original culled each run of three corners, a strip
    // rather than a fan.
    if (isCulled(read_corners, ETriangles::Strip)) {
        return;
    }
    if (drawsInHardware()) {
        special_.drawPolygon2(corners, static_cast<int>(state.mode.render_flags));
        return;
    }
    // Preprocessing 1 is the reciprocal depth, which the vertex already holds.
    SEdgeList edges = buildEdges(read_corners, state.mode.vertex_preprocess_mode == 1
                                                   ? EDepthSource::Reciprocal
                                                   : EDepthSource::Transformed);
    walkEdges(edges, state.draw_scanline);
}

} // namespace nocturne::engine
