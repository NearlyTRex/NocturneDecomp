#include "common/math/extendedfloat.h"
#include "common/math/fixed.h"
#include "common/render/renderstate.h"
#include "engine/2d/2d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/matrix/matrix.h"
#include "engine/polygonstate.h"
#include "engine/scanlinespan.h"
#include "engine/softwareedge.h"
#include "platform/mrglprimitivequad.h"
#include "platform/projectedvertex.h"
#include "platform/rendervertex.h"

#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::engine {
namespace {

// The preprocessing that gives each corner its reciprocal depth as its depth.
constexpr int kReplaceWWithDepth = 6;
constexpr double kUnitScale = 65536.0;
// A corner's clip flags: past a side when the sign bit is set, and which sides below it.
constexpr std::uint32_t kClipped = 0x80000000U;
constexpr std::uint32_t kClipSides = 0x1fU;

// The row's pixels from the further left edge up to the further right, each counted unless its
// depth, shifted down by 8, is nearer than the one in the row. The original kept the count in a
// global.
// nocedit 0x00490d35
void countDepthPassingPixels(const SSoftwareEdge &left_edge, const SSoftwareEdge &right_edge,
                             std::uint32_t *row, std::span<const std::uint32_t> reciprocals,
                             int &counter) {
    const SRowSpan span = getRowSpan(left_edge, right_edge);
    if (span.count <= 0) {
        return;
    }
    const int step = getStep(span.lo->depth_current, span.hi->depth_current,
                             reciprocals[static_cast<std::size_t>(span.count) + 1]);
    int depth = span.lo->depth_current;
    std::uint32_t *pixel = row + span.left_x;
    for (int x = 0; x < span.count; ++x) {
        if ((static_cast<std::uint32_t>(depth) >> 8U) >= pixel[x]) {
            ++counter;
        }
        depth = common::wrappingAdd(depth, step);
    }
}

} // namespace

// nocedit 0x0048c670
void CDemonRenderer::setProjectionScaleSimple(float scale) {
    matrix_.setProjectionScale(
        (common::CExtendedFloat(kUnitScale) / common::CExtendedFloat(scale)).truncateToInt());
}

// deferred: refusing to count in the shadow pass, with setShadowPass's callers
// nocedit 0x0048aa50
int CDemonRenderer::countVisiblePixelsPoly(const platform::SMRGLPrimitiveQuad &poly,
                                           std::span<std::uint32_t *const> depth_rows) {
    if (!isFacing(poly.surface_normal)) {
        return 0;
    }
    std::vector<int> vertex_indices;
    vertex_indices.reserve(poly.vertices.size());
    std::uint32_t outside = 0xffffffffU;
    for (const platform::SMRGLVertex &corner : poly.vertices) {
        vertex_indices.push_back(corner.vertex_index);
        outside &=
            static_cast<std::uint32_t>(vertex_buffer_[static_cast<std::size_t>(corner.vertex_index)]
                                           .projected_vertex.screen_x);
    }
    if ((outside & kClipped) != 0 && (outside & kClipSides) != 0) {
        return 0;
    }
    int counter = 0;
    SPolygonState state;
    state.mode.render_flags = common::kRenderDepthTest | common::kRenderDepthWrite;
    state.mode.vertex_preprocess_mode = kReplaceWWithDepth;
    state.vertex_processing = face_capture_enabled_;
    state.draw_scanline = [&counter, depth_rows, reciprocals = two_d_.getReciprocalLookupTable()](
                              const SSoftwareEdge &left, const SSoftwareEdge &right, int y) {
        countDepthPassingPixels(left, right, depth_rows[static_cast<std::size_t>(y)], reciprocals,
                                counter);
        return false;
    };
    clipAndFillPoly(vertex_indices, state);
    return counter;
}

} // namespace nocturne::engine
