#include "common/render/renderstate.h"
#include "engine/3d/3d.h"
#include "engine/clipper/clipper.h"
#include "engine/clipper/clipplane.h"
#include "engine/drender/demonrenderer.h"
#include "engine/drender/drender.h"
#include "engine/polygonstate.h"
#include "engine/screendevice.h"
#include "engine/softwareedge.h"
#include "engine/special/scanlinemode.h"
#include "engine/special/special.h"
#include "engine/zraster/zraster.h"
#include "platform/clipplane.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"

#include <cstddef>
#include <cstdint>
#include <span>
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
// The preprocessing that gives each corner its reciprocal depth as its depth.
constexpr int kReplaceWWithDepth = 6;

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

SPolygonState CDemonRenderer::getPerspectiveState(std::uint32_t render_flags) const {
    SPolygonState state;
    state.mode.render_flags = render_flags;
    state.mode.vertex_preprocess_mode = kReplaceWWithDepth;
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
// deferred: the shadow pass sending an untextured polygon down the depth-only route, with
//   setShadowPass's callers
// nocedit 0x0048a740
void CDemonRenderer::clipAndFillPoly(std::span<const int> vertex_indices,
                                     const SPolygonState &state) {
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

// deferred: the shadow pass's depth-only draw, with setShadowPass's callers
// deferred: the scanline's light level and solid colour, 0 until set, with the scene camera's
//   fog setup
// nocedit 0x0048ae10
void CDemonRenderer::renderTexturedDirect(const platform::SMRGLHeaderPrimitive &prim,
                                          int render_flags) {
    if (!isFacing(prim.surface_normal)) {
        return;
    }
    clipAndFillPoly(prim.vertex_indices,
                    getPerspectiveState(static_cast<std::uint32_t>(
                        render_flags == -1 ? kDefaultTexturedFlags : render_flags)));
}

// deferred: handing the polygon to processQuadPrimitive while texture capture is on, with
//   setTextureCaptureMode's callers
// deferred: the shadow pass's depth-only draw, with setShadowPass's callers
// deferred: keeping the buffer's own texture coordinates while skip_uv_extraction is set, with
//   CCharacter::renderEthereal
// deferred: the scanline's light level and solid colour, 0 until set, with the scene camera's
//   fog setup
// nocedit 0x0048aeb0
void CDemonRenderer::renderTexturedPoly(const SMRGLPrimitiveQuad &poly, int render_flags) {
    if (!isFacing(poly.surface_normal)) {
        return;
    }
    const std::vector<int> vertex_indices = takeCorners(poly);
    clipAndFillPoly(vertex_indices,
                    getPerspectiveState(static_cast<std::uint32_t>(
                        render_flags == -1 ? kDefaultTexturedFlags : render_flags)));
}

// deferred: the shadow pass's depth-only draw, with setShadowPass's callers
// deferred: keeping the buffer's own texture coordinates while skip_uv_extraction is set, with
//   CCharacter::renderEthereal
// deferred: the scanline's light level and solid colour, 0 until set, with the scene camera's
//   fog setup
// nocedit 0x0048b1e0
void CDemonRenderer::renderAlphaBlendedPoly(const SMRGLPrimitiveQuad &poly) {
    if (!isFacing(poly.surface_normal)) {
        return;
    }
    const std::vector<int> vertex_indices = takeCorners(poly);
    clipAndFillPoly(vertex_indices, getPerspectiveState(kAlphaBlendedFlags));
}

// deferred: the shadow pass's textured-alpha depth draw, with setShadowPass's callers
// deferred: keeping the buffer's own texture coordinates while skip_uv_extraction is set, with
//   CCharacter::renderEthereal
// deferred: the scanline's light level and solid colour, 0 until set, with the scene camera's
//   fog setup
// nocedit 0x0048b970
void CDemonRenderer::renderDestReadBlendPoly(const SMRGLPrimitiveQuad &poly) {
    if (!isFacing(poly.surface_normal)) {
        return;
    }
    std::vector<const SRenderVertex *> corners;
    corners.reserve(poly.vertices.size());
    for (const platform::SMRGLVertex &corner : poly.vertices) {
        corners.push_back(&vertex_buffer_[static_cast<std::size_t>(corner.vertex_index)]);
    }
    if (isWhollyPastASide(corners)) {
        return;
    }
    const std::vector<int> vertex_indices = takeCorners(poly);
    clipAndFillPoly(vertex_indices, getPerspectiveState(kDestReadBlendFlags));
}

} // namespace nocturne::engine
