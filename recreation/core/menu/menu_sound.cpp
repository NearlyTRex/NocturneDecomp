#include "common/render/renderstate.h"
#include "core/frontend.h"
#include "core/game/game.h"
#include "core/menu/menu.h"
#include "core/menu/soundoptionspage.h"
#include "engine/drender/demonrenderer.h"
#include "engine/package/gamecontent.h"
#include "engine/screendevice.h"
#include "platform/mrglheaderprimitive.h"
#include "platform/mrgltexturebasic.h"
#include "platform/rendervertex.h"
#include "sound/sndmain/sndmain.h"

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

// The counter is in 16.16 frames.
constexpr int kVisualizationFrameShift = 16;
// From 200Hz up to fifty times that, across each channel's share of the width.
constexpr double kLowestBandHz = 200.0;
constexpr double kBandSpan = 50.0;
constexpr float kPercent = 100.0F;
// Texels 8 and 248 of a 256-texel frame, in 8.24.
constexpr int kTexelShift = 16;
constexpr int kTextureInsetLow = 8 << kTexelShift;
constexpr int kTextureInsetHigh = 248 << kTexelShift;
constexpr int kFullAlpha = 0xffff;
constexpr int kAddBlend = 1;
constexpr int kNoBlend = 0;
constexpr int kBarFlags =
    static_cast<int>(common::kRenderTextured | common::kRenderBlend | common::kRenderSourceAlpha);
constexpr int kFixedShift = 16;

} // namespace

// deferred: over the sound the pause menu holds, the music started again (channel back on,
//   unmuted) without configure's reset; a change that reopens the output still loses the held
//   sounds, which the pause menu starts again where they were (the decomp's PAUSE_SOUND), with
//   the pause menu
// nocedit 0x00511e50
void CMenu::configureSoundOptions() {
    owners_.game.saveClockTime();
    CSoundOptionsPage page(*this, owners_);
    runPage(page);
}

// The frame counter advances even while nothing plays; the original sized the bars from
// g_WindowWidth and g_WindowHeight, the screen's. It drew them left to right, each in another
// flame frame from the last; drawn a frame at a time, which adds up the same, the hardware
// renderer takes them in a handful of batches instead of one each. The enhanced front end runs
// at the game's resolution, so the bars' pitch and width grow with its layout, and each picks
// its frame by the column it would have had at 640x480.
void CMenu::drawAudioSpectrum() {
    const std::optional<engine::SMenuSpectrum> &spectrum = getMenuLayout().spectrum;
    if (!spectrum) {
        return;
    }
    if (audio_spectrum_textures_.size() != spectrum->frames.size()) {
        audio_spectrum_textures_.clear();
        for (const std::string &frame : spectrum->frames) {
            audio_spectrum_textures_.push_back({.texture_name = frame});
        }
    }
    const int wrap = static_cast<int>(spectrum->frames.size()) << kVisualizationFrameShift;
    audio_visualization_counter_ += owners_.game.getDeltaTimeInt() * spectrum->fps;
    if (audio_visualization_counter_ >= wrap) {
        audio_visualization_counter_ -= wrap;
    }
    sound::CSndMain &sound_main = owners_.sound_main;
    if (!sound_main.isSoundBusy()) {
        return;
    }
    const float scale = getScreenLayout().scale;
    const int pitch =
        std::max(1, static_cast<int>(std::lround(static_cast<float>(spectrum->pitch) * scale)));
    const int half_width = std::max(
        1, static_cast<int>(std::lround(static_cast<float>(spectrum->half_width) * scale)));
    const float full_level_share = static_cast<float>(spectrum->height_percent) / kPercent;
    const int channels = sound_main.getAudioChannelCount();
    const int width = owners_.screen.getWindowWidth();
    const int height = owners_.screen.getWindowHeight();
    const int margin = width / spectrum->margin_divisor;
    const int per_channel = width / channels;
    const int bar_count = (per_channel - (2 * margin)) / pitch;
    const double band_ratio = std::pow(kBandSpan, 1.0 / bar_count);
    const int bottom = height - 1;
    std::vector<SAudioSpectrumBar> bars;
    for (int channel = 0; channel < channels; ++channel) {
        double band_hz = kLowestBandHz;
        const int left = (per_channel * channel) + margin;
        for (int x = left; x < left + (bar_count * pitch); x += pitch) {
            const double next_hz = band_hz * band_ratio;
            const float level = sound_main.analyzeFrequencyBand(
                channel, static_cast<float>(band_hz), static_cast<float>(next_hz));
            const auto top = static_cast<int>(
                std::lround(static_cast<float>(height) -
                            (level * static_cast<float>(height) * full_level_share)));
            const auto column = static_cast<int>(std::lround(static_cast<float>(x) / scale));
            bars.push_back({.x_center = x,
                            .half_width = half_width,
                            .height_half = bottom - top + 1,
                            .frame = getAudioSpectrumFrame(column)});
            band_hz = next_hz;
        }
    }
    for (int frame = 0; std::cmp_less(frame, spectrum->frames.size()); ++frame) {
        for (const SAudioSpectrumBar &bar : bars) {
            if (bar.frame == frame) {
                renderAudioSpectrumBar(bar, bottom, spectrum->alpha);
            }
        }
    }
}

int CMenu::getAudioSpectrumFrame(int column) const {
    return ((audio_visualization_counter_ >> kVisualizationFrameShift) + column) %
           static_cast<int>(audio_spectrum_textures_.size());
}

// Half transparent and added to what is under it.
// nocedit 0x0050fe70
void CMenu::renderAudioSpectrumBar(const SAudioSpectrumBar &bar, int y_top, int alpha) {
    const int height_half = bar.height_half;
    if (height_half <= 0) {
        return;
    }
    engine::CDemonRenderer &renderer = owners_.renderer;
    const std::span<platform::SRenderVertex> buffer = renderer.getVertexBuffer();
    const int left = (bar.x_center - bar.half_width) << kFixedShift;
    const int right = (bar.x_center + bar.half_width) << kFixedShift;
    const int bottom = y_top << kFixedShift;
    const int top = (y_top - (2 * height_half)) << kFixedShift;
    buffer[0].projected_vertex.screen_x = left;
    buffer[0].projected_vertex.screen_y = bottom;
    buffer[0].u = kTextureInsetLow;
    buffer[0].v = kTextureInsetHigh;
    buffer[1].projected_vertex.screen_x = right;
    buffer[1].projected_vertex.screen_y = bottom;
    buffer[1].u = kTextureInsetHigh;
    buffer[1].v = kTextureInsetHigh;
    buffer[2].projected_vertex.screen_x = right;
    buffer[2].projected_vertex.screen_y = top;
    buffer[2].u = kTextureInsetHigh;
    buffer[2].v = kTextureInsetLow;
    buffer[3].projected_vertex.screen_x = left;
    buffer[3].projected_vertex.screen_y = top;
    buffer[3].u = kTextureInsetLow;
    buffer[3].v = kTextureInsetLow;
    renderer.setRenderAlpha(alpha);
    renderer.setBlendMode(kAddBlend);
    renderer.captureTexture(audio_spectrum_textures_.at(static_cast<std::size_t>(bar.frame)));
    renderer.renderTexturedDirect({.surface_normal = {}, .vertex_indices = {0, 1, 2, 3}},
                                  kBarFlags);
    renderer.setBlendMode(kNoBlend);
    renderer.setRenderAlpha(kFullAlpha);
}

} // namespace nocturne::core
