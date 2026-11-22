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
#include "engine/package/gamecontent.h"
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

// The light turns half way round the moon over the frames, from a half turn to none.
constexpr int kHalfTurn = 0x8000;
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
// The status box's layout, which the screen's size scales.
constexpr int kStatusLayoutWidth = 640;
constexpr int kStatusLayoutHeight = 480;

struct SGlowCorner {
    common::CVector3i position;
    int u = 0;
    int v = 0;
};

// A square of half_size either side of the moon's centre.
std::array<SGlowCorner, 4> getGlowCorners(int half_size) {
    return {{
        {.position = {.x = half_size, .y = half_size}, .u = kTexelEdge, .v = 0},
        {.position = {.x = -half_size, .y = half_size}, .u = 0, .v = 0},
        {.position = {.x = -half_size, .y = -half_size}, .u = 0, .v = kTexelEdge},
        {.position = {.x = half_size, .y = -half_size}, .u = kTexelEdge, .v = kTexelEdge},
    }};
}
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
    const engine::SMoonIndicator &look = getMoonIndicator();
    engine::CDemonRenderer &renderer = owners_.renderer;
    renderer.setCameraOriginFromScaledPoint({});
    renderer.setProjectionScale(
        static_cast<float>(use_custom_viewport_ ? look.window_projection : look.full_projection));
    renderer.setupSceneRendering({});
    renderer.processCameraRelativeVertex(
        {.x = 0.0F, .y = 0.0F, .z = static_cast<float>(look.depth)});
    const int angle = kHalfTurn - ((current_frame_ << 15) / total_frames_);
    CDemonSet &set = owners_.set;
    set.setLightDirection(
        {.x = common::fixedMultiply(owners_.matrix.interpolatedSin(angle), look.light_reach),
         .y = -look.light_reach,
         .z = common::fixedMultiply(owners_.matrix.interpolatedCos(angle), look.light_reach)});
    set.setAmbientBaseQuick(look.ambient);
    set.setFlatColor(color_.r, color_.g, color_.b);
    renderGlow();
    moon_.prepareForRender(0, kMoonFlags, renderer, set);
}

// A square of the glow texture in front of the moon, faded in by one corner's alpha.
void CLevelLoader::renderGlow() {
    engine::CDemonRenderer &renderer = owners_.renderer;
    const std::span<platform::SRenderVertex> buffer = renderer.getVertexBuffer();
    const int fade = std::min((current_frame_ * kOpaqueAlpha) / total_frames_, kOpaqueAlpha);
    const std::array<SGlowCorner, 4> corners = getGlowCorners(getMoonIndicator().glow_half_size);
    for (std::size_t i = 0; i < corners.size(); ++i) {
        platform::SRenderVertex &vertex = buffer[i];
        owners_.special.transformAndProjectPoint(vertex.projected_vertex, corners[i].position);
        vertex.u = corners[i].u;
        vertex.v = corners[i].v;
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

// The look's box, the text centred in it, both placed in proportion to a 640x480 screen.
void CLevelLoader::drawStatus(std::string_view text, int window_width, int window_height) {
    const engine::SMoonIndicator &look = getMoonIndicator();
    const int left = (window_width * look.status_box[0]) / kStatusLayoutWidth;
    const int top = (window_height * look.status_box[1]) / kStatusLayoutHeight;
    const int width = (window_width * look.status_box[2]) / kStatusLayoutWidth;
    const int height = (window_height * look.status_box[3]) / kStatusLayoutHeight;
    owners_.two_d.fillRectColor(left - 1, top - 1, width + 1 + left, top + height + 1,
                                look.status_box_colour);
    if (text.empty()) {
        return;
    }
    engine::CBitFont &font = owners_.fonts.findFont(look.status_font);
    font.drawText(text, (left + (width / 2)) - (font.getTextWidth(text) / 2),
                  (top + (height / 2)) - (font.getMaxCharHeight() / 2), look.status_colour,
                  engine::CBitFont::kNoShadow);
}

} // namespace nocturne::core
