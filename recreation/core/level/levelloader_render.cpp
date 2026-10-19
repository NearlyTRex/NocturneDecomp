#include "common/math/fixed.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "common/render/renderstate.h"
#include "core/dfont/dfont.h"
#include "core/level/levelloader.h"
#include "core/set/demonset.h"
#include "engine/2d/2d.h"
#include "engine/drender/demonrenderer.h"
#include "engine/font/bitfont.h"
#include "engine/matrix/matrix.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/rendervertex.h"

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <string_view>

namespace nocturne::core {
namespace {

constexpr float kFullScreenProjectionScale = 56.0F;
constexpr float kWindowProjectionScale = 84.0F;
constexpr float kMoonDepth = 36.0F;
// The light turns half way round the moon over the frames, from a half turn to none.
constexpr int kHalfTurn = 0x8000;
constexpr int kLightReach = 37000;
constexpr int kAmbient = 0x280;
// 7.25 world units either side of the moon's centre, 256 to a unit.
constexpr int kGlowHalfSize = 1856;
constexpr int kTexelEdge = 0x1000000;
constexpr int kOpaqueAlpha = 0xffff;
// Blended by the corners' alpha, over the moon's depth without testing or writing it.
constexpr std::uint32_t kGlowFlags = common::kRenderTextured | common::kRenderBlend |
                                     common::kRenderSmooth | common::kRenderSourceAlpha |
                                     common::kRenderVertexAlpha | common::kRenderVertexColor;
constexpr int kMoonFlags = 0x205;
constexpr int kAddBlend = 1;
constexpr int kNoBlend = 0;
constexpr int kBlack = 0;
constexpr int kTextColor = 0xf8;

struct SGlowCorner {
    common::CVector3i position;
    int u = 0;
    int v = 0;
};

constexpr std::array<SGlowCorner, 4> kGlowCorners = {{
    {.position = {.x = kGlowHalfSize, .y = kGlowHalfSize}, .u = kTexelEdge, .v = 0},
    {.position = {.x = -kGlowHalfSize, .y = kGlowHalfSize}, .u = 0, .v = 0},
    {.position = {.x = -kGlowHalfSize, .y = -kGlowHalfSize}, .u = 0, .v = kTexelEdge},
    {.position = {.x = kGlowHalfSize, .y = -kGlowHalfSize}, .u = kTexelEdge, .v = kTexelEdge},
}};
// The corner whose alpha fades in; the others stay clear.
constexpr std::size_t kFadingCorner = 1;

} // namespace

// deferred: switching the set to quick lighting while the moon is drawn and back after, with
//   setRenderingMode
// nocedit 0x00504160
void CLevelLoader::update(std::string_view text, bool clear_screen) {
    if (!enabled_) {
        return;
    }
    const int window_width = owners_.screen.getWindowWidth();
    const int window_height = owners_.screen.getWindowHeight();
    if (clear_screen) {
        owners_.two_d.fillRectColor(0, 0, window_width - 1, window_height - 1, kBlack);
    }
    if (use_custom_viewport_) {
        owners_.renderer.pushViewport(viewport_x_, viewport_y_, viewport_width_, viewport_height_);
    }
    renderMoon();
    if (use_custom_viewport_) {
        owners_.renderer.popViewport();
    }
    current_frame_ = std::min(current_frame_ + 1, total_frames_);
    if (!use_custom_viewport_) {
        drawStatus(text, window_width, window_height);
    }
    owners_.screen.swapBuffers();
}

void CLevelLoader::renderMoon() {
    engine::CDemonRenderer &renderer = owners_.renderer;
    renderer.setCameraOriginFromScaledPoint({});
    renderer.setProjectionScale(use_custom_viewport_ ? kWindowProjectionScale
                                                     : kFullScreenProjectionScale);
    renderer.setupSceneRendering({});
    renderer.processCameraRelativeVertex({.x = 0.0F, .y = 0.0F, .z = kMoonDepth});
    const int angle = kHalfTurn - ((current_frame_ << 15) / total_frames_);
    CDemonSet &set = owners_.set;
    set.setLightDirection(
        {.x = common::fixedMultiply(owners_.matrix.interpolatedSin(angle), kLightReach),
         .y = -kLightReach,
         .z = common::fixedMultiply(owners_.matrix.interpolatedCos(angle), kLightReach)});
    set.setAmbientBaseQuick(kAmbient);
    set.setFlatColor(color_.r, color_.g, color_.b);
    renderGlow();
    moon_.prepareForRender(0, kMoonFlags, renderer, set);
}

// A square of the glow texture in front of the moon, faded in by one corner's alpha.
void CLevelLoader::renderGlow() {
    engine::CDemonRenderer &renderer = owners_.renderer;
    const std::span<platform::SRenderVertex> buffer = renderer.getVertexBuffer();
    const int fade = std::min((current_frame_ * kOpaqueAlpha) / total_frames_, kOpaqueAlpha);
    for (std::size_t i = 0; i < kGlowCorners.size(); ++i) {
        platform::SRenderVertex &vertex = buffer[i];
        owners_.special.transformAndProjectPoint(vertex.projected_vertex, kGlowCorners[i].position);
        vertex.u = kGlowCorners[i].u;
        vertex.v = kGlowCorners[i].v;
        vertex.a = i == kFadingCorner ? fade : 0;
        vertex.r = color_.r;
        vertex.g = color_.g;
        vertex.b = color_.b;
    }
    renderer.setBlendMode(kAddBlend);
    renderer.captureTexture(glow_texture_);
    renderer.renderTexturedDirect({.surface_normal = {}, .vertex_indices = {0, 1, 2, 3}},
                                  static_cast<int>(kGlowFlags));
    renderer.setBlendMode(kNoBlend);
}

// A black box across nine tenths of the screen near its bottom, the text centred in it, both
// placed in proportion to a 640x480 screen.
void CLevelLoader::drawStatus(std::string_view text, int window_width, int window_height) {
    const int width = (window_width * 576) / 640;
    const int height = (window_height * 24) / 480;
    const int left = (window_width * 32) / 640;
    const int top = (window_height * 448) / 480;
    owners_.two_d.fillRectColor(left - 1, top - 1, width + 1 + left, top + height + 1, kBlack);
    if (text.empty()) {
        return;
    }
    engine::CBitFont &font = *owners_.fonts.getThemeFont();
    font.drawText(text, (left + (width / 2)) - (font.getTextWidth(text) / 2),
                  (top + (height / 2)) - (font.getMaxCharHeight() / 2), kTextColor,
                  engine::CBitFont::kNoShadow);
}

} // namespace nocturne::core
