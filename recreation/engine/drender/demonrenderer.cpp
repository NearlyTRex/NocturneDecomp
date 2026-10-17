#include "engine/drender/demonrenderer.h"

#include "engine/3d/3d.h"
#include "engine/texture/texture.h"
#include "platform/rendervertex.h"

#include <span>
#include <utility>

namespace nocturne::engine {

// nocedit 0x0048a6c0
CDemonRenderer::CDemonRenderer(CMatrix &matrix, const C2d &two_d, C3d &three_d,
                               std::span<platform::SRenderVertex> vertex_buffer, CSpecial &special,
                               CPrim &prim, CZRaster &zraster, const SCurrentTexture &texture,
                               CTexture &textures, const IScreenDevice &screen,
                               GeometryClipper clip_geometry)
    : matrix_(matrix), two_d_(two_d), three_d_(three_d), vertex_buffer_(vertex_buffer),
      special_(special), prim_(prim), zraster_(zraster), texture_(texture), textures_(textures),
      screen_(screen), clip_geometry_(std::move(clip_geometry)) {}

std::span<platform::SRenderVertex> CDemonRenderer::getVertexBuffer() const {
    return vertex_buffer_;
}

// nocedit 0x0048c9f0
void CDemonRenderer::setPlaneCullingEnabled(bool enabled) {
    plane_culling_enabled_ = enabled;
}

// deferred: culling mode 2, the mirror pass's opposite winding, with enableAdvancedCulling's
//   callers
// nocedit 0x0048ca00
void CDemonRenderer::setRenderingState(bool culling) {
    three_d_.setCullingMode(culling ? 1 : 0);
    setPlaneCullingEnabled(!culling);
}

// nocedit 0x0048ca50
void CDemonRenderer::setBlendMode(int blend_mode) {
    three_d_.setBlendMode(blend_mode);
}

// nocedit 0x0048ca60
int CDemonRenderer::setRenderAlpha(int render_alpha) {
    return three_d_.setRenderAlpha(render_alpha);
}

// deferred: recording the texture while texture capture is on, with setTextureCaptureMode's
//   callers
// nocedit 0x0048db80
void CDemonRenderer::captureTexture(platform::SMRGLTextureBasic &texture) {
    textures_.ensureTextureLoaded(texture);
}

// deferred: setting the vertex-processing flag, with 3d.c's dispatchMRGLBlockChain and
//   transformAndBufferVertices, which read it
// nocedit 0x0048caa0
void CDemonRenderer::enableFaceCapture(bool enabled) {
    face_capture_enabled_ = enabled;
}

} // namespace nocturne::engine
