#include "common/math/extendedfloat.h"
#include "common/video/presentation.h"
#include "common/video/widescreen.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/script/script.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/font/uiscale.h"
#include "engine/screendevice.h"
#include "platform/display.h"

#include <algorithm>
#include <cmath>
#include <optional>
#include <string>

namespace nocturne::core {
namespace {

using common::CExtendedFloat;

// The seconds the bars take to slide all the way in or out.
constexpr float kSlideSeconds = 0.35F;
// The shipped bars leave a band of 1.85:1, its width over its height in hundredths.
constexpr int kBandWidthPercent = 185;
constexpr int kPercent = 100;
// The subtitle lines a full bar holds, with half a line of room above and below them.
constexpr int kBarLines = 3;
// Below these heights the subtitles take smaller fonts.
constexpr int kSmallScreen = 0x180;
constexpr int kShortScreen = 0x1e0;
constexpr int kMeasureChar = 'X';
constexpr int kMaxLines = 10;
constexpr int kLineLength = 0x400;
constexpr int kTextColor = 0xf8;
constexpr int kShadowColor = 0;
constexpr int kOpaque = 0xffff;
constexpr int kBlack = 0;

[[nodiscard]] engine::CBitFont &getSubtitleFont(const CDFont &fonts, int height) {
    if (height < kSmallScreen) {
        return fonts.getUseOSFonts() ? *fonts.getSmallEditorFont() : *fonts.getMicroFont();
    }
    return height < kShortScreen ? *fonts.getTinyFont() : *fonts.getMediumFont();
}

// The scene's picture: its 4:3 column when pillarboxed, else the whole screen.
[[nodiscard]] common::SViewport getPicture(const SScriptScreen &screen) {
    const int width = screen.screen.getWindowWidth();
    const int height = screen.screen.getWindowHeight();
    const std::optional<common::SSceneReframe> reframe =
        common::getSceneReframe(screen.display.getWidescreen(), {.width = width, .height = height});
    if (reframe) {
        return reframe->destination;
    }
    return {.x = 0, .y = 0, .width = width, .height = height};
}

// The scene rows a panned and scanned screen shows of the camera's 480; all of them otherwise.
[[nodiscard]] int getShownRows(const SScriptScreen &screen) {
    const int width = screen.screen.getWindowWidth();
    const int height = screen.screen.getWindowHeight();
    if (screen.display.getWidescreen() != common::EWidescreen::PanAndScan ||
        !common::getSceneReframe(common::EWidescreen::PanAndScan,
                                 {.width = width, .height = height})) {
        return common::kSceneSpace.height;
    }
    return static_cast<int>(std::lround(static_cast<float>(common::kSceneSpace.width) *
                                        static_cast<float>(height) / static_cast<float>(width)));
}

} // namespace

// The shipped bar's 1.85:1 band, measured over the scene's 4:3 picture rather than the window, so
// a wider screen doesn't thin the bars to nothing (the decomp's hud.h, HUD). Panned and scanned,
// the crop takes off most of what the bars would cover, so a bar is what is left of the shipped
// one on the screen, and no shorter than three subtitle lines and their room.
int CScript::getFullLetterbox(const SScriptScreen &screen) {
    const int width = screen.screen.getWindowWidth();
    const int height = screen.screen.getWindowHeight();
    const int rows = getShownRows(screen);
    if (rows < common::kSceneSpace.height) {
        const int pitch = getSubtitleFont(screen.fonts, height)
                              .getCharHeightScaled(kMeasureChar, engine::getUiTextScale(height));
        const int least = pitch * (kBarLines + 1);
        const int bar_rows = (common::kSceneSpace.height -
                              ((common::kSceneSpace.width * kPercent) / kBandWidthPercent)) /
                             2;
        // The crop is centred while the letterbox is up, so half of it falls above the bar.
        const int left_rows = bar_rows - ((common::kSceneSpace.height - rows) / 2);
        const int bar = left_rows > 0 ? left_rows * height / rows : 0;
        return std::max(bar, least);
    }
    const int picture = std::min(height * 4 / 3, width);
    return (height - ((picture * kPercent) / kBandWidthPercent)) / 2;
}

// The original measured the band over the whole window.
// nocedit 0x00559ac0
// bw1 0x00543950
// bw2 0x00521840
// bw3 0x00528f60
int CScript::getLetterboxHeight(const SScriptScreen &screen) const {
    return static_cast<int>(
        std::lround(static_cast<float>(getFullLetterbox(screen)) * letterbox_extension_));
}

// The lines are wrapped to the picture's width at the HUD's text scale and centred in it,
// clipped to the bottom bar while they and their room fit a full one; a longer block rises over
// the shot instead, and never nearer the screen's bottom than half a line (the decomp's hud.h,
// HUD). The original drew in the window's middle at the fonts' own size.
// deferred: the bars and the lines kept to the screen while a network dialog is up (the decomp's
//   NETPLAY), with the network dialogs
// nocedit 0x00559b20
// bw1 0x005439b0
// bw2 0x005218a0
// bw3 0x00528fc0
void CScript::renderSubtitles(const SScriptScreen &screen) {
    const CExtendedFloat step = CExtendedFloat(owners_.game.getDeltaTimeFloat()) /
                                CExtendedFloat(static_cast<double>(kSlideSeconds));
    const ELetterbox letterbox = owners_.game.letterbox_mode;
    if (letterbox == ELetterbox::Off) {
        letterbox_extension_ = (CExtendedFloat(letterbox_extension_) - step).toFloat();
    } else {
        previous_letterbox_ = letterbox;
        letterbox_extension_ = (CExtendedFloat(letterbox_extension_) + step).toFloat();
    }
    letterbox_extension_ = std::clamp(letterbox_extension_, 0.0F, 1.0F);
    const int width = screen.screen.getWindowWidth();
    const int height = screen.screen.getWindowHeight();
    const int bar = getLetterboxHeight(screen);
    if (bar > 0) {
        if (previous_letterbox_ != ELetterbox::Bottom) {
            screen.two_d.fillRectColor(0, 0, width - 1, bar - 1, kBlack);
        }
        screen.two_d.fillRectColor(0, height - bar, width - 1, height - 1, kBlack);
    }
    if (current_message_.empty() || owners_.game.subtitle_mode == 0) {
        return;
    }
    engine::CBitFont &font = getSubtitleFont(screen.fonts, height);
    const common::SViewport picture = getPicture(screen);
    const float scale = engine::getUiTextScale(picture.height);
    const engine::CBitFont::SWrappedText wrapped = font.wrapTextScaled(
        current_message_, kMaxLines, kLineLength, picture.width * 9 / 10, scale);
    const int pitch = wrapped.line_pitch;
    const int block = pitch * static_cast<int>(wrapped.lines.size());
    const int room = pitch / 2;
    const engine::SClipRect clip = screen.two_d.getClipRect();
    const bool in_bar = bar > 0 && block + (room * 2) <= getFullLetterbox(screen);
    screen.two_d.setClipRect(
        {.left = 0, .top = in_bar ? height - bar : 0, .right = width - 1, .bottom = height - 1});
    int y = std::min(((height * 2) - bar - block) / 2, height - room - block);
    screen.three_d.setRenderAlpha(kOpaque);
    for (const std::string &line : wrapped.lines) {
        const int line_width = font.getTextWidthScaled(line, scale);
        font.drawTextScaled(line, picture.x + ((picture.width - line_width) / 2), y, kTextColor,
                            kShadowColor, scale);
        y += pitch;
    }
    screen.two_d.setClipRect(clip);
}

} // namespace nocturne::core
