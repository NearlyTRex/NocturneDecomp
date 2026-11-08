#include "common/math/fixed.h"
#include "common/render/renderstate.h"
#include "engine/2d/2d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/polygonstate.h"
#include "engine/scanlinespan.h"
#include "engine/screendevice.h"
#include "engine/softwareedge.h"
#include "engine/special/scanlinemode.h"
#include "platform/mrglheaderprimitive.h"

#include <cstddef>
#include <cstdint>
#include <span>

namespace nocturne::engine {
namespace {

// A 32-bit row's depths from the row's first pixel.
std::uint32_t *getDepthRow(IScreenDevice &screen, int scanline_y, int left_x) {
    return screen.getZBufferRows()[static_cast<std::size_t>(scanline_y)] + left_x;
}

// Whether a depth, shifted down by 8, is at least the one in the buffer, both compared signed.
bool isInFront(int depth, std::uint32_t buffered) {
    return static_cast<std::int32_t>(static_cast<std::uint32_t>(depth) >> 8U) >=
           static_cast<std::int32_t>(buffered);
}

// Every other pixel of every other row, from the further left edge up to the further right,
// until one is in front of the buffer, which stops the polygon. The original counted them
// against a budget, one pixel but for the water's, kept with the stop in globals.
// nocedit 0x00490c37
bool findDepthInterlaced(const SSoftwareEdge &left_edge, const SSoftwareEdge &right_edge,
                         int scanline_y, IScreenDevice &screen,
                         std::span<const std::uint32_t> reciprocals) {
    if ((scanline_y & 1) != 0) {
        return false;
    }
    const SRowSpan span = getRowSpan(left_edge, right_edge);
    if (span.count <= 0) {
        return false;
    }
    const int step = getStep(span.lo->depth_current, span.hi->depth_current,
                             reciprocals[static_cast<std::size_t>(span.count) + 1]);
    const std::uint32_t *row = getDepthRow(screen, scanline_y, span.left_x);
    int depth = span.lo->depth_current;
    for (int x = 0; x < span.count; x += 2) {
        if (isInFront(depth, row[x])) {
            return true;
        }
        depth = common::wrappingAdd(depth, step * 2);
    }
    return false;
}

// The row's pixels from the further left edge up to the further right, each in front of the
// buffer taking the colour and its depth, shifted down by 8. The original unrolled it sixteen
// pixels at a time.
// nocedit 0x00490a58
void fillSolidColorDepth(const SSoftwareEdge &left_edge, const SSoftwareEdge &right_edge,
                         int scanline_y, IScreenDevice &screen,
                         std::span<const std::uint32_t> reciprocals, std::uint32_t color) {
    const SRowSpan span = getRowSpan(left_edge, right_edge);
    if (span.count <= 0) {
        return;
    }
    const int step = getStep(span.lo->depth_current, span.hi->depth_current,
                             reciprocals[static_cast<std::size_t>(span.count) + 1]);
    std::uint32_t *depths = getDepthRow(screen, scanline_y, span.left_x);
    std::uint32_t *pixels =
        static_cast<std::uint32_t *>(screen.getScreenRows()[static_cast<std::size_t>(scanline_y)]) +
        span.left_x;
    int depth = span.lo->depth_current;
    for (int x = 0; x < span.count; ++x) {
        if (isInFront(depth, depths[x])) {
            depths[x] = static_cast<std::uint32_t>(depth) >> 8U;
            pixels[x] = color;
        }
        depth = common::wrappingAdd(depth, step);
    }
}

// Depth tested and written, each corner's reciprocal depth taken as its depth.
SPolygonState getDepthState() {
    SPolygonState state;
    state.mode.render_flags = common::kRenderDepthTest | common::kRenderDepthWrite;
    state.mode.vertex_preprocess_mode = SScanlineMode::kReplaceWithDepth;
    return state;
}

} // namespace

// deferred: the shadow pass's depth-only draw, with setShadowPass's callers
// nocedit 0x0048a820
void CDemonRenderer::renderSolidColorDepthDirect(const platform::SMRGLHeaderPrimitive &prim) {
    if (!isFacing(prim.surface_normal)) {
        return;
    }
    SPolygonState state = getDepthState();
    state.vertex_processing = face_capture_enabled_;
    state.draw_scanline = [this, color = static_cast<std::uint32_t>(two_d_.getActiveRenderColor()),
                           reciprocals = two_d_.getReciprocalLookupTable()](
                              const SSoftwareEdge &left, const SSoftwareEdge &right, int y) {
        fillSolidColorDepth(left, right, y, screen_, reciprocals, color);
        return false;
    };
    clipAndFillPoly(prim.vertex_indices, state);
}

// deferred: leaving the rendered triangle count as it was across the draw, with CGame's frame
//   stats display
// deferred: the shadow pass's screen-depth test, with setShadowPass's callers
// deferred: drawing through the shadow pass while the hardware renderer is on, with
//   setShadowPass's callers
// deferred: a budget other than one pixel, with CWater::calculateVisibleTiles
// nocedit 0x0048ab50
bool CDemonRenderer::renderDepthProfiledDirect(const platform::SMRGLHeaderPrimitive &prim) {
    if (!isFacing(prim.surface_normal)) {
        return false;
    }
    bool visible = false;
    SPolygonState state = getDepthState();
    state.vertex_processing = face_capture_enabled_;
    state.draw_scanline = [this, &visible, reciprocals = two_d_.getReciprocalLookupTable()](
                              const SSoftwareEdge &left, const SSoftwareEdge &right, int y) {
        visible = findDepthInterlaced(left, right, y, screen_, reciprocals);
        return visible;
    };
    clipAndFillPoly(prim.vertex_indices, state);
    return visible;
}

} // namespace nocturne::engine
