#include "common/math/fixed.h"
#include "common/render/renderstate.h"
#include "engine/2d/2d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/drender/drender.h"
#include "engine/polygonstate.h"
#include "engine/scanlinespan.h"
#include "engine/screendevice.h"
#include "engine/softwareedge.h"
#include "engine/special/scanlinemode.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
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

// A 16-bit row of the screen's from the row's first pixel: in the shadow pass, the light's map.
std::uint16_t *getShadowRow(IScreenDevice &screen, int scanline_y, int left_x) {
    return static_cast<std::uint16_t *>(
               screen.getScreenRows()[static_cast<std::size_t>(scanline_y)]) +
           left_x;
}

// Every other pixel of every other row, from the further left edge up to the further right,
// until one's depth, shifted down by 8, is nearer than the light's map, which stops the polygon.
// A depth below zero compares as unsigned, so it is never nearer. The original counted them
// against a budget, one pixel but for the water's, kept with the stop in globals.
// nocedit 0x00490cb5
bool testShadowDepthRow(const SSoftwareEdge &left_edge, const SSoftwareEdge &right_edge,
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
    const std::uint16_t *row = getShadowRow(screen, scanline_y, span.left_x);
    int depth = span.lo->depth_current;
    for (int x = 0; x < span.count; x += 2) {
        if ((static_cast<std::uint32_t>(depth) >> 8U) < row[x]) {
            return true;
        }
        depth = common::wrappingAdd(depth, step * 2);
    }
    return false;
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
bool testDepthRow(const SSoftwareEdge &left_edge, const SSoftwareEdge &right_edge, int scanline_y,
                  IScreenDevice &screen, std::span<const std::uint32_t> reciprocals) {
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
void drawSolidColorRow(const SSoftwareEdge &left_edge, const SSoftwareEdge &right_edge,
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

// nocedit 0x0049072f
void drawShadowDepthRow(const SSoftwareEdge &left_edge, const SSoftwareEdge &right_edge,
                        int scanline_y, IScreenDevice &screen, const C2d &two_d) {
    const SRowSpan span = getRowSpan(left_edge, right_edge);
    if (span.count <= 0) {
        return;
    }
    std::uint16_t *row = getShadowRow(screen, scanline_y, span.left_x);
    const int step =
        getStep(span.lo->depth_current, span.hi->depth_current,
                two_d.getReciprocalLookupTable()[static_cast<std::size_t>(span.count) + 1]);
    int depth = span.lo->depth_current;
    for (int x = 0; x < span.count; ++x) {
        // A depth below zero compares as unsigned, so it is never nearer.
        const auto level = static_cast<std::uint32_t>(depth >> 8);
        if (level < row[x]) {
            row[x] = static_cast<std::uint16_t>(level);
        }
        depth = common::wrappingAdd(depth, step);
    }
}

// The original's loop ran while its byte offset was at most twice the count, one pixel past the
// row's end.
// nocedit 0x004907e7
void drawShadowCutoutRow(const SSoftwareEdge &left_edge, const SSoftwareEdge &right_edge,
                         int scanline_y, IScreenDevice &screen, const C2d &two_d,
                         const SCurrentTexture &texture) {
    const SRowSpan span = getRowSpan(left_edge, right_edge);
    if (span.count <= 0) {
        return;
    }
    std::uint16_t *row = getShadowRow(screen, scanline_y, span.left_x);
    const std::uint32_t reciprocal =
        two_d.getReciprocalLookupTable()[static_cast<std::size_t>(span.count) + 1];
    const SSoftwareEdge &lo = *span.lo;
    const SSoftwareEdge &hi = *span.hi;
    const int u_step = getStep(lo.u_current, hi.u_current, reciprocal);
    const int v_step = getStep(lo.v_current, hi.v_current, reciprocal);
    const int depth_step = getStep(lo.depth_current, hi.depth_current, reciprocal);
    const std::span<const std::uint8_t> coverage =
        texture.opacity.empty() ? texture.data : texture.opacity;
    int u = lo.u_current;
    int v = lo.v_current;
    int depth = lo.depth_current;
    for (int x = 0; x <= span.count; ++x) {
        // Unsigned, so a depth stepped below zero is behind everything.
        if (std::bit_cast<std::uint32_t>(depth) < row[x] &&
            coverage[getTexelIndex(static_cast<std::uint32_t>(u), static_cast<std::uint32_t>(v),
                                   texture)] != 0) {
            row[x] = static_cast<std::uint16_t>(depth);
        }
        u = common::wrappingAdd(u, u_step);
        v = common::wrappingAdd(v, v_step);
        depth = common::wrappingAdd(depth, depth_step);
    }
}

SPolygonState CDemonRenderer::getShadowState() const {
    return {.mode = {.render_flags = 0, .vertex_preprocess_mode = SScanlineMode::kNoPreprocess},
            .vertex_processing = face_capture_enabled_,
            .draw_scanline = [this](const SSoftwareEdge &left, const SSoftwareEdge &right, int y) {
                drawShadowDepthRow(left, right, y, screen_, two_d_);
                return false;
            }};
}

// In the shadow pass only the depth is drawn, untested, into the light's map.
// nocedit 0x0048a820
void CDemonRenderer::renderSolidColorDepthDirect(const platform::SMRGLHeaderPrimitive &prim) {
    if (!isFacing(prim.surface_normal)) {
        return;
    }
    if (shadow_pass_) {
        clipAndFillPoly(prim.vertex_indices, getShadowState());
        return;
    }
    SPolygonState state = getDepthState();
    state.vertex_processing = face_capture_enabled_;
    state.draw_scanline = [this, color = static_cast<std::uint32_t>(two_d_.getActiveRenderColor()),
                           reciprocals = two_d_.getReciprocalLookupTable()](
                              const SSoftwareEdge &left, const SSoftwareEdge &right, int y) {
        drawSolidColorRow(left, right, y, screen_, reciprocals, color);
        return false;
    };
    clipAndFillPoly(prim.vertex_indices, state);
}

// The textures go off with it: nothing in the shadow pass is textured.
// nocedit 0x0048cac0
void CDemonRenderer::setShadowPass(int value) {
    texture_.textures_disabled = value != 0;
    shadow_pass_ = value != 0;
}

// nocedit 0x0048cae0
int CDemonRenderer::isShadowPass() const {
    return shadow_pass_ ? 1 : 0;
}

// A visibility test, not a draw: the rendered-triangle count is left as it was. In the shadow
// pass it tests the light's map, untextured and with the corners' depths as they are. While the
// hardware renderer is on, the test runs in the shadow pass, so in software.
// deferred: a budget other than one pixel, with CWater::calculateVisibleTiles
// nocedit 0x0048ab50
bool CDemonRenderer::renderDepthProfiledDirect(const platform::SMRGLHeaderPrimitive &prim) {
    if (!isFacing(prim.surface_normal)) {
        return false;
    }
    bool visible = false;
    SPolygonState state = getDepthState();
    state.vertex_processing = face_capture_enabled_;
    const std::span<const std::uint32_t> reciprocals = two_d_.getReciprocalLookupTable();
    if (shadow_pass_) {
        state.mode.render_flags = 0;
        state.mode.vertex_preprocess_mode = SScanlineMode::kNoPreprocess;
        state.draw_scanline = [this, &visible, reciprocals](const SSoftwareEdge &left,
                                                            const SSoftwareEdge &right, int y) {
            visible = testShadowDepthRow(left, right, y, screen_, reciprocals);
            return visible;
        };
    } else {
        state.draw_scanline = [this, &visible, reciprocals](const SSoftwareEdge &left,
                                                            const SSoftwareEdge &right, int y) {
            visible = testDepthRow(left, right, y, screen_, reciprocals);
            return visible;
        };
    }
    const int rendered_triangles = special_.getRenderedTriangleCount();
    const int shadow_pass = isShadowPass();
    const bool hardware = special_.getUseExternalRenderer();
    if (hardware) {
        setShadowPass(1);
    }
    clipAndFillPoly(prim.vertex_indices, state);
    if (hardware) {
        setShadowPass(shadow_pass);
    }
    special_.setRenderedTriangleCount(rendered_triangles);
    return visible;
}

} // namespace nocturne::engine
