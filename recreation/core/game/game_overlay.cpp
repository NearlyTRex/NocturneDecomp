#include "common/text/ascii.h"
#include "common/video/presentation.h"
#include "common/video/widescreen.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/inv/inventoryassets.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/font/bitfont.h"
#include "engine/font/uiscale.h"
#include "engine/screendevice.h"
#include "platform/display.h"

#include <algorithm>
#include <cmath>
#include <format>
#include <optional>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

constexpr std::size_t kMaxStatusLines = 5;
constexpr int kFullAlpha = 0xffff;
// Palette indices: the text, and a bar's fill as its character is well, hurt or near death.
constexpr int kTextColor = 0xf8;
constexpr int kShadowColor = 0;
constexpr int kWellColor = 2;
constexpr int kHurtColor = 0xfb;
constexpr int kDyingColor = 1;
constexpr double kHurtBelow = 0.6;
constexpr double kDyingBelow = 0.35;
// CBitFont's line height is measured on this glyph.
constexpr int kMeasureChar = 'X';
constexpr int kMaxMessageLines = 10;
constexpr int kMessageLineWidth = 0x100;
// Below these heights the overlay takes smaller fonts.
constexpr int kShortScreen = 0x1e0;
constexpr int kSmallScreen = 0x180;
// Above these widths the bars take larger fonts.
constexpr int kTinyFontWidth = 0x280;
constexpr int kMediumFontWidth = 800;
// The small editor font sits this much higher under the message.
constexpr float kSmallFontLift = 7.0F;
// The battery gauge's column: its icon 4 in, or the 16-wide gauge where that is wider, and the
// gap the bars keep from it, in HUD pixels.
constexpr int kBatteryIconInset = 4;
constexpr int kBatteryGaugeWidth = 0x10;
constexpr int kBatteryGap = 4;

// The scene's picture: its 4:3 column when pillarboxed, else the whole screen.
common::SViewport getHudFrame(common::EWidescreen widescreen, int width, int height) {
    const std::optional<common::SSceneReframe> reframe =
        common::getSceneReframe(widescreen, {.width = width, .height = height});
    if (reframe) {
        return reframe->destination;
    }
    return {.x = 0, .y = 0, .width = width, .height = height};
}

// Opaque until its last second, fading in it.
int getFadeAlpha(float timer) {
    if (timer < 1.0F) {
        return static_cast<int>(std::lround(timer * static_cast<float>(kFullAlpha)));
    }
    return kFullAlpha;
}

engine::CBitFont &getChapterTitleFont(const CDFont &fonts, int screen_height) {
    if (screen_height < kSmallScreen) {
        return *fonts.getSmallEditorFont();
    }
    if (screen_height < kShortScreen) {
        return *fonts.getTinyFont();
    }
    return *fonts.getMediumFont();
}

engine::CBitFont &getStatusBarFont(const CDFont &fonts, int frame_width) {
    if (frame_width > kMediumFontWidth) {
        return *fonts.getMediumFont();
    }
    if (frame_width > kTinyFontWidth) {
        return *fonts.getTinyFont();
    }
    return *fonts.getSmallEditorFont();
}

int getBarColor(float value) {
    if (static_cast<double>(value) < kDyingBelow) {
        return kDyingColor;
    }
    if (static_cast<double>(value) < kHurtBelow) {
        return kHurtColor;
    }
    return kWellColor;
}

} // namespace

// The original copied the message into 256 bytes unchecked, where the script's display command
// takes up to 1024.
// nocedit 0x004d7f20
void CGame::displayMessage(std::string_view message, float duration) {
    if (message.empty()) {
        message_timer_ = 0.0F;
        return;
    }
    message_timer_ = duration;
    message_text_ = message;
}

// nocedit 0x004d7f80
void CGame::clearOverlay() {
    status_lines_.clear();
    message_timer_ = 0.0F;
}

// A bar whose timer isn't above zero goes, NaN included.
// nocedit 0x004d85a0
void CGame::updateStatusDisplays() {
    message_timer_ = std::max(message_timer_ - delta_time_float_, 0.0F);
    chapter_title_timer_ = std::max(chapter_title_timer_ - delta_time_float_, 0.0F);
    for (SStatusLine &line : status_lines_) {
        line.timer -= delta_time_float_;
    }
    std::erase_if(status_lines_, [](const SStatusLine &line) { return !(line.timer > 0.0F); });
}

// The original copied the name into 256 bytes unchecked.
// nocedit 0x004e0bf0
void CGame::setStatusDisplay(std::string_view name, float value, float duration) {
    if (!(duration > 0.0F) || name.empty()) {
        return;
    }
    const auto line = std::ranges::find_if(status_lines_, [name](const SStatusLine &existing) {
        return common::equalsIgnoringAsciiCase(existing.name, name);
    });
    if (line != status_lines_.end()) {
        line->value = value;
        line->timer = duration;
        return;
    }
    if (status_lines_.size() < kMaxStatusLines) {
        status_lines_.push_back({.name = std::string(name), .value = value, .timer = duration});
    }
}

// Laid out as the decomp's HUD lays it, in the scene's picture with its text at the HUD's scale,
// the bars clear of the battery gauge, which the original drew them over.
// deferred: the message line and chapter title above the bottom letterbox bar, and the status
//   bars hidden while it is up, with CScript::getLetterboxHeight and the script's letterbox
// deferred: a hero's bar as long as its health can go, max_hit_points / 100 of the width and
//   clear of the screen's right edge (the decomp's status_bar.h, STATUS_BAR_WIDTH), with
//   CCharacter::processCharacter and processDamage, which record it
// nocedit 0x004d8040
void CGame::renderOverlay(const SGameSessionOwners &session) {
    const common::SViewport frame =
        getHudFrame(session.display.getWidescreen(), owners_.screen.getWindowWidth(),
                    owners_.screen.getWindowHeight());
    renderMessageLine(session, frame);
    renderChapterTitle(frame);
    renderStatusBars(session, frame);
}

// Centred above the frame's bottom; below 480 camera columns in the small editor font.
void CGame::renderMessageLine(const SGameSessionOwners &session, const common::SViewport &frame) {
    if (message_timer_ == 0.0F) {
        return;
    }
    owners_.three_d.setRenderAlpha(getFadeAlpha(message_timer_));
    const bool small = session.camera.getFramebufferWidth() < kShortScreen;
    engine::CBitFont &font =
        small ? *owners_.fonts.getSmallEditorFont() : *owners_.fonts.getThemeFont();
    const float scale = engine::getUiTextScale(frame.height);
    const engine::CBitFont::SWrappedText wrapped = font.wrapTextScaled(
        message_text_, kMaxMessageLines, kMessageLineWidth, frame.width * 9 / 10, scale);
    const int pitch = wrapped.line_pitch;
    int y = frame.y + frame.height - (static_cast<int>(wrapped.lines.size()) * pitch) - pitch;
    if (small) {
        y -= static_cast<int>(std::lround(kSmallFontLift * scale));
    }
    for (const std::string &line : wrapped.lines) {
        const int x = frame.x + ((frame.width - font.getTextWidthScaled(line, scale)) / 2);
        font.drawTextScaled(line, x, y, kTextColor, kShadowColor, scale);
        y += pitch;
    }
}

// The story's year and title at the frame's bottom left.
void CGame::renderChapterTitle(const common::SViewport &frame) {
    if (!(chapter_title_timer_ > 0.0F)) {
        return;
    }
    engine::CBitFont &font = getChapterTitleFont(owners_.fonts, owners_.screen.getWindowHeight());
    const float scale = engine::getUiTextScale(frame.height);
    const int height = font.getCharHeightScaled(kMeasureChar, scale);
    const auto gap =
        static_cast<int>(std::lround(static_cast<float>(font.getCharWidth(kMeasureChar)) * scale));
    owners_.three_d.setRenderAlpha(kFullAlpha);
    font.drawTextScaled(std::format("{} - {}", chapter_year_, chapter_title_), frame.x + (gap * 2),
                        frame.y + frame.height - height - gap, kTextColor, kShadowColor, scale);
}

// Stacked up from the frame's bottom left, each named over its fill.
void CGame::renderStatusBars(const SGameSessionOwners &session, const common::SViewport &frame) {
    if (status_lines_.empty()) {
        return;
    }
    engine::CBitFont &font = getStatusBarFont(owners_.fonts, frame.width);
    const int bar_height = std::max(frame.height / 40, font.getCharHeight(kMeasureChar));
    const int ui_scale = engine::getUiScale(owners_.screen.getWindowHeight());
    const int battery_icon =
        kBatteryIconInset +
        session.inventory_assets.getBitmap(EInventoryBitmap::kBattery).getWidth();
    const int battery_right = frame.x + (std::max(battery_icon, kBatteryGaugeWidth) * ui_scale);
    const int left =
        std::max(frame.x + (frame.width / 80), battery_right + (kBatteryGap * ui_scale));
    const int right = left + (frame.width / 4);
    int bottom = frame.y + frame.height - (frame.height / 80);
    for (const SStatusLine &line : status_lines_) {
        const int top = bottom - bar_height;
        owners_.two_d.fillRectWithBorder(left, top, right, bottom, 0, 0);
        const auto filled =
            static_cast<int>(std::lround(static_cast<float>(right - left + 1) * line.value));
        if (filled > 0) {
            owners_.two_d.fillRectColor(left, top, left + filled, bottom, getBarColor(line.value));
        }
        font.drawText(line.name, left, top, kTextColor, kShadowColor);
        bottom -= bar_height * 3 / 2;
    }
}

} // namespace nocturne::core
