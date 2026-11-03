#include "engine/drender/demonrenderer.h"

#include "common/math/vector3i.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/light/light.h"
#include "engine/screendevice.h"
#include "engine/texture/texture.h"
#include "platform/rendervertex.h"

#include <cstdint>
#include <span>
#include <utility>

namespace nocturne::engine {
namespace {

constexpr int kTrueColorDepth = 32;
// Below 32 bits the colour is 8-8-8, red highest.
constexpr std::uint32_t kRedShift = 16;
constexpr std::uint32_t kGreenShift = 8;
constexpr std::uint32_t kShiftMask = 0x1f;

} // namespace

// nocedit 0x0048a6c0
CDemonRenderer::CDemonRenderer(CMatrix &matrix, CLight &light, C2d &two_d, C3d &three_d,
                               std::span<platform::SRenderVertex> vertex_buffer, CSpecial &special,
                               CPrim &prim, CZRaster &zraster, const SCurrentTexture &texture,
                               CTexture &textures, IScreenDevice &screen,
                               GeometryClipper clip_geometry)
    : matrix_(matrix), light_(light), two_d_(two_d), three_d_(three_d),
      vertex_buffer_(vertex_buffer), special_(special), prim_(prim), zraster_(zraster),
      texture_(texture), textures_(textures), screen_(screen),
      clip_geometry_(std::move(clip_geometry)) {}

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

// deferred: the mirror pass's alpha mask in the colour's top byte while drawing in software,
//   with setupMirrorRendering
// nocedit 0x0048c970
void CDemonRenderer::setRGBAColor(int red_component, int green_component, int blue_component) {
    const auto red = static_cast<std::uint32_t>(red_component);
    const auto green = static_cast<std::uint32_t>(green_component);
    const auto blue = static_cast<std::uint32_t>(blue_component);
    if (screen_.getBitsPerPixel() != kTrueColorDepth) {
        two_d_.setActiveRenderColor(
            static_cast<int>(blue | (red << kRedShift) | (green << kGreenShift)));
        return;
    }
    // SHL takes the low five bits of its count.
    const auto shift = [](int bit_position) {
        return static_cast<std::uint32_t>(bit_position) & kShiftMask;
    };
    const SColorChannels &channels = screen_.getColorChannels();
    two_d_.setActiveRenderColor(static_cast<int>((blue << shift(channels.blue.bit_position)) |
                                                 (red << shift(channels.red.bit_position)) |
                                                 (green << shift(channels.green.bit_position))));
}

// nocedit 0x0048c6c0
void CDemonRenderer::setLightDirection(const common::CVector3i &direction) {
    light_.setDirectionalLightVector(direction.x, direction.y, direction.z);
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
