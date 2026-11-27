#include "engine/3d/3d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/drender/drender.h"
#include "engine/polygonstate.h"
#include "engine/prim/prim.h"
#include "engine/special/special.h"
#include "platform/mrglprimitivequad.h"
#include "platform/rendervertex.h"

#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::engine {

using platform::SMRGLPrimitiveQuad;

// The original drew only a polygon's first four corners on the straight path, reading past them
// for one of more, and quit past 1999 polygons facing the camera. In the shadow pass the straight
// path draws only the depth, into the light's map, the corners keeping their texture coordinates.
// deferred: keeping the buffer's own texture coordinates while skip_uv_extraction is set, with
//   CCharacter::renderEthereal
// deferred: the scanline's light level and solid colour, 0 until set, with the scene camera's
//   fog setup
// nocedit 0x0048cf00
void CDemonRenderer::renderFacetList(std::span<const SMRGLPrimitiveQuad> primitives,
                                     int render_flags) {
    const int culling_mode = three_d_.getCullingMode();
    if (face_capture_enabled_ || plane_culling_enabled_ || culling_mode == 0) {
        for (const SMRGLPrimitiveQuad &poly : primitives) {
            renderTexturedPoly(poly, render_flags);
        }
        return;
    }
    if (shadow_pass_) {
        SPolygonState state = getShadowState();
        state.depth_bias = rasterizer_depth_bias_;
        for (const SMRGLPrimitiveQuad &poly : primitives) {
            renderTriangleSimple(vertex_buffer_, takeIndices(poly), state, special_, three_d_,
                                 texture_);
        }
        return;
    }
    if (!special_.getUseExternalRenderer()) {
        const SPolygonState state = getPerspectiveState(static_cast<std::uint32_t>(render_flags));
        for (const SMRGLPrimitiveQuad &poly : primitives) {
            const std::vector<int> vertex_indices = takeCorners(poly);
            renderTriangleTextured(vertex_buffer_, vertex_indices, state, special_, three_d_,
                                   texture_);
        }
        return;
    }
    std::vector<const SMRGLPrimitiveQuad *> facing;
    for (const SMRGLPrimitiveQuad &poly : primitives) {
        if (calculateTriangleWindingOrderFromIndices(vertex_buffer_, poly, culling_mode)) {
            facing.push_back(&poly);
        }
    }
    if (!facing.empty()) {
        special_.drawPolyList(vertex_buffer_.data(), facing, render_flags);
    }
}

// While capturing each polygon is kept instead.
// nocedit 0x0048ce90
void CDemonRenderer::renderQuadBatch(std::span<const SMRGLPrimitiveQuad> primitives,
                                     int render_flags) {
    const int flags = render_flags == -1 ? kDefaultTexturedFlags : render_flags;
    if (texture_capture_ == ETextureCapture::Off) {
        renderFacetList(primitives, flags);
        return;
    }
    for (const SMRGLPrimitiveQuad &poly : primitives) {
        processQuadPrimitive(poly, flags);
    }
}

} // namespace nocturne::engine
