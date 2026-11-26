#include "common/math/fixed.h"
#include "common/render/renderstate.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/clipper/clipper.h"
#include "engine/clipper/clipplane.h"
#include "engine/drender/demonrenderer.h"
#include "engine/drender/drender.h"
#include "engine/polygonstate.h"
#include "engine/scanlinespan.h"
#include "engine/screendevice.h"
#include "engine/softwareedge.h"
#include "engine/special/scanlinemode.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "engine/zraster/zraster.h"
#include "platform/clipplane.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"

#include <bit>
#include <cstddef>
#include <cstdint>
#include <span>
#include <utility>
#include <vector>

namespace nocturne::engine {
namespace {

using platform::SMRGLPrimitiveQuad;
using platform::SRenderVertex;

constexpr std::uint32_t kAlphaBlendedFlags = common::kRenderTextured | common::kRenderSmooth |
                                             common::kRenderSolidAlpha | common::kRenderDepthTest |
                                             common::kRenderDepthWrite | common::kRenderVertexColor;
constexpr std::uint32_t kDestReadBlendFlags = common::kRenderTextured | common::kRenderBlend |
                                              common::kRenderSmooth | common::kRenderSourceAlpha |
                                              common::kRenderDepthTest | common::kRenderDepthWrite |
                                              common::kRenderVertexColor;
// The blended polygon's are the dest-read blend's, but for writing the depth.
constexpr std::uint32_t kBlendedFlags = kDestReadBlendFlags & ~common::kRenderDepthWrite;
constexpr std::uint32_t kDecalFlags = common::kRenderTextured | common::kRenderDepthTest;

// Whether every corner of the polygon is past one same side of the view.
bool isPolyWhollyPastASide(std::span<const SRenderVertex> vertex_buffer,
                           const SMRGLPrimitiveQuad &poly) {
    std::vector<const SRenderVertex *> corners;
    corners.reserve(poly.vertices.size());
    for (const platform::SMRGLVertex &corner : poly.vertices) {
        corners.push_back(&vertex_buffer[static_cast<std::size_t>(corner.vertex_index)]);
    }
    return isWhollyPastASide(corners);
}

// The row's pixels from the further left edge through the further right, each texel straight
// through the 32-bit palette where the depth, compared signed, is at least the buffer's; the
// depth is left as it was.
// nocedit 0x0049169d
void drawDecalRow(const SSoftwareEdge &left_edge, const SSoftwareEdge &right_edge, int scanline_y,
                  IScreenDevice &screen, std::span<const std::uint32_t> reciprocals,
                  const SCurrentTexture &texture) {
    const SRowSpan span = getRowSpan(left_edge, right_edge);
    if (span.count <= 0) {
        return;
    }
    const auto row = static_cast<std::size_t>(scanline_y);
    std::uint32_t *pixels = static_cast<std::uint32_t *>(screen.getScreenRows()[row]) + span.left_x;
    const std::uint32_t *depths = screen.getZBufferRows()[row] + span.left_x;
    const std::span<const std::uint32_t, 256> palette = screen.getHardwarePalette32();
    const std::uint32_t reciprocal = reciprocals[static_cast<std::size_t>(span.count) + 1];
    const SSoftwareEdge &lo = *span.lo;
    const SSoftwareEdge &hi = *span.hi;
    const int u_step = getStep(lo.u_current, hi.u_current, reciprocal);
    const int v_step = getStep(lo.v_current, hi.v_current, reciprocal);
    const int depth_step = getStep(lo.depth_current, hi.depth_current, reciprocal);
    int u = lo.u_current;
    int v = lo.v_current;
    int depth = lo.depth_current;
    for (int x = 0; x <= span.count; ++x) {
        if (std::bit_cast<std::int32_t>(depths[x]) <= depth) {
            pixels[x] = palette[texture.data[getTexelIndex(
                static_cast<std::uint32_t>(u), static_cast<std::uint32_t>(v), texture)]];
        }
        u = common::wrappingAdd(u, u_step);
        v = common::wrappingAdd(v, v_step);
        depth = common::wrappingAdd(depth, depth_step);
    }
}

} // namespace

bool CDemonRenderer::isFacing(const platform::SClipPlane &surface_normal) const {
    return !plane_culling_enabled_ || three_d_.isVisiblePlane(surface_normal);
}

std::vector<int> CDemonRenderer::takeCorners(const SMRGLPrimitiveQuad &poly) {
    std::vector<int> vertex_indices;
    vertex_indices.reserve(poly.vertices.size());
    for (const platform::SMRGLVertex &corner : poly.vertices) {
        SRenderVertex &vertex = vertex_buffer_[static_cast<std::size_t>(corner.vertex_index)];
        vertex.u = corner.texture_u;
        vertex.v = corner.texture_v;
        vertex_indices.push_back(corner.vertex_index);
    }
    return vertex_indices;
}

std::vector<int> CDemonRenderer::takeIndices(const SMRGLPrimitiveQuad &poly) {
    std::vector<int> vertex_indices;
    vertex_indices.reserve(poly.vertices.size());
    for (const platform::SMRGLVertex &corner : poly.vertices) {
        vertex_indices.push_back(corner.vertex_index);
    }
    return vertex_indices;
}

SPolygonState CDemonRenderer::getPerspectiveState(std::uint32_t render_flags) const {
    SPolygonState state;
    state.mode.render_flags = render_flags;
    state.mode.vertex_preprocess_mode = SScanlineMode::kReplaceWithDepth;
    state.vertex_processing = face_capture_enabled_;
    const bool thirty_two_bit = screen_.getBitsPerPixel() == 32;
    state.draw_scanline = [this, mode = state.mode, thirty_two_bit](
                              const SSoftwareEdge &left, const SSoftwareEdge &right, int y) {
        if (thirty_two_bit) {
            special_.renderMMXPerspectiveScanline32(left, right, y, mode);
        } else {
            special_.renderMMXPerspectiveScanline16(left, right, y, mode);
        }
        return false;
    };
    return state;
}

// Both builds also quit on a projection mode other than perspective, which nothing sets.
// deferred: the shadow pass sending a polygon fogged but untextured down the depth-only route,
//   with a shadow-pass draw that keeps the fog's flag without the texture's
// nocedit 0x0048a740
void CDemonRenderer::clipAndFillPoly(std::span<const int> vertex_indices, SPolygonState state) {
    state.depth_bias = rasterizer_depth_bias_;
    const std::uint32_t flags = state.mode.render_flags;
    const bool textured = (flags & (common::kRenderTextured | common::kRenderSmooth)) != 0;
    if (!face_capture_enabled_) {
        if (textured) {
            renderTriangleTextured(vertex_buffer_, vertex_indices, state, special_, three_d_,
                                   texture_);
        } else {
            renderTriangleSimple(vertex_buffer_, vertex_indices, state, special_, three_d_,
                                 texture_);
        }
        return;
    }
    if (textured) {
        if ((flags & common::kRenderVertexColor) == 0) {
            clipAndRasterize(vertex_buffer_, vertex_indices, state, prim_, special_, three_d_,
                             texture_);
        } else {
            clipPolygonToViewport(vertex_buffer_, vertex_indices, state, prim_, special_, three_d_,
                                  texture_);
        }
        return;
    }
    std::vector<SRenderVertex> clipped;
    clip_geometry_(vertex_buffer_, vertex_indices, flags, clipped);
    if (clipped.size() >= 3) {
        zraster_.rasterizeTriangle(clipped, state);
    }
}

// In the shadow pass only the depth is drawn, into the light's map.
// deferred: the scanline's light level and solid colour, 0 until set, with the scene camera's
//   fog setup
// nocedit 0x0048ae10
void CDemonRenderer::renderTexturedDirect(const platform::SMRGLHeaderPrimitive &prim,
                                          int render_flags) {
    if (!isFacing(prim.surface_normal)) {
        return;
    }
    clipAndFillPoly(prim.vertex_indices,
                    shadow_pass_ ? getShadowState()
                                 : getPerspectiveState(static_cast<std::uint32_t>(
                                       render_flags == -1 ? kDefaultTexturedFlags : render_flags)));
}

// In the shadow pass only the depth is drawn, into the light's map, and the corners keep their
// texture coordinates.
// deferred: handing the polygon to processQuadPrimitive while texture capture is on, with
//   setTextureCaptureMode's callers
// deferred: keeping the buffer's own texture coordinates while skip_uv_extraction is set, with
//   CCharacter::renderEthereal
// deferred: the scanline's light level and solid colour, 0 until set, with the scene camera's
//   fog setup
// nocedit 0x0048aeb0
void CDemonRenderer::renderTexturedPoly(const SMRGLPrimitiveQuad &poly, int render_flags) {
    if (!isFacing(poly.surface_normal)) {
        return;
    }
    if (shadow_pass_) {
        clipAndFillPoly(takeIndices(poly), getShadowState());
        return;
    }
    const std::vector<int> vertex_indices = takeCorners(poly);
    clipAndFillPoly(vertex_indices,
                    getPerspectiveState(static_cast<std::uint32_t>(
                        render_flags == -1 ? kDefaultTexturedFlags : render_flags)));
}

// In the shadow pass only the depth is drawn, into the light's map, and the corners keep their
// texture coordinates.
// deferred: keeping the buffer's own texture coordinates while skip_uv_extraction is set, with
//   CCharacter::renderEthereal
// deferred: the scanline's light level and solid colour, 0 until set, with the scene camera's
//   fog setup
// nocedit 0x0048b1e0
void CDemonRenderer::renderAlphaBlendedPoly(const SMRGLPrimitiveQuad &poly) {
    if (!isFacing(poly.surface_normal)) {
        return;
    }
    if (shadow_pass_) {
        clipAndFillPoly(takeIndices(poly), getShadowState());
        return;
    }
    const std::vector<int> vertex_indices = takeCorners(poly);
    clipAndFillPoly(vertex_indices, getPerspectiveState(kAlphaBlendedFlags));
}

// In the shadow pass only the depth of the texture's solid texels is drawn, into the light's map,
// with the corners' texture coordinates left as the buffer has them.
// deferred: keeping the buffer's own texture coordinates while skip_uv_extraction is set, with
//   CCharacter::renderEthereal
// deferred: the scanline's light level and solid colour, 0 until set, with the scene camera's
//   fog setup
// nocedit 0x0048b970
void CDemonRenderer::renderDestReadBlendPoly(const SMRGLPrimitiveQuad &poly) {
    if (!isFacing(poly.surface_normal) || isPolyWhollyPastASide(vertex_buffer_, poly)) {
        return;
    }
    if (shadow_pass_) {
        SPolygonState state;
        state.mode.render_flags = common::kRenderTextured;
        state.mode.vertex_preprocess_mode = SScanlineMode::kNoPreprocess;
        state.vertex_processing = face_capture_enabled_;
        state.draw_scanline = [this](const SSoftwareEdge &left, const SSoftwareEdge &right, int y) {
            drawShadowCutoutRow(left, right, y, screen_, two_d_, texture_);
            return false;
        };
        clipAndFillPoly(takeIndices(poly), std::move(state));
        return;
    }
    const std::vector<int> vertex_indices = takeCorners(poly);
    clipAndFillPoly(vertex_indices, getPerspectiveState(kDestReadBlendFlags));
}

// In the shadow pass only the depth is drawn, into the light's map, and the corners keep their
// texture coordinates.
// deferred: keeping the buffer's own texture coordinates while skip_uv_extraction is set, with
//   CCharacter::renderEthereal
// nocedit 0x0048b420
void CDemonRenderer::renderDecalPoly(const SMRGLPrimitiveQuad &poly) {
    if (!isFacing(poly.surface_normal)) {
        return;
    }
    if (shadow_pass_) {
        clipAndFillPoly(takeIndices(poly), getShadowState());
        return;
    }
    SPolygonState state;
    state.mode.render_flags = kDecalFlags;
    state.mode.vertex_preprocess_mode = SScanlineMode::kReplaceWithDepth;
    state.vertex_processing = face_capture_enabled_;
    state.draw_scanline = [this, reciprocals = two_d_.getReciprocalLookupTable()](
                              const SSoftwareEdge &left, const SSoftwareEdge &right, int y) {
        drawDecalRow(left, right, y, screen_, reciprocals, texture_);
        return false;
    };
    clipAndFillPoly(takeCorners(poly), std::move(state));
}

// In the shadow pass only the depth is drawn, into the light's map, and the corners keep their
// texture coordinates.
// deferred: keeping the buffer's own texture coordinates while skip_uv_extraction is set, with
//   CCharacter::renderEthereal
// deferred: the scanline's light level and solid colour, 0 until set, with the scene camera's
//   fog setup
// nocedit 0x0048bdc0
void CDemonRenderer::renderBlendedPoly(const SMRGLPrimitiveQuad &poly) {
    if (!isFacing(poly.surface_normal) || isPolyWhollyPastASide(vertex_buffer_, poly)) {
        return;
    }
    if (shadow_pass_) {
        clipAndFillPoly(takeIndices(poly), getShadowState());
        return;
    }
    clipAndFillPoly(takeCorners(poly), getPerspectiveState(kBlendedFlags));
}

} // namespace nocturne::engine
