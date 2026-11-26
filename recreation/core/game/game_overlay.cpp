#include "common/text/ascii.h"
#include "common/video/presentation.h"
#include "common/video/widescreen.h"
#include "core/charactr/deathstate.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/hero/hero.h"
#include "core/hudlayout.h"
#include "core/inv/inventory.h"
#include "core/inv/inventoryassets.h"
#include "core/mission/demonmission.h"
#include "core/script/script.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/font/bitfont.h"
#include "engine/font/uiscale.h"
#include "engine/package/gamecontent.h"
#include "engine/screendevice.h"
#include "platform/display.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <format>
#include <optional>
#include <string>
#include <string_view>
#include <utility>

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
// Below this framebuffer width the messages take a smaller font.
constexpr int kShortScreen = 0x1e0;
// Above these widths the bars take larger fonts.
constexpr int kTinyFontWidth = 0x280;
constexpr int kMediumFontWidth = 800;
// The small editor font sits this much higher under the message.
constexpr float kSmallFontLift = 7.0F;
// The gap the bars keep from the battery gauge, in HUD pixels.
constexpr int kBatteryGap = 4;
// The layout the status bars' and the death banner's places are shares of.
constexpr int kLayoutWidth = 640;
constexpr int kLayoutHeight = 480;

// What an element keeps clear of at the frame's start and end along an axis.
struct SClearance {
    int start = 0;
    int end = 0;
};

// Where an element length long starts on an axis of the frame: inset in from the anchored edge
// and clear of what is there, or inset along from the middle.
int alignOnAxis(EHudAlign align, int frame_start, int frame_length, int length, int inset,
                SClearance clear = {}) {
    switch (align) {
    case EHudAlign::Start:
        return frame_start + clear.start + inset;
    case EHudAlign::End:
        return frame_start + frame_length - clear.end - inset - length;
    default:
        return frame_start + ((frame_length - length) / 2) + inset;
    }
}

int scaleInset(int inset, float scale) {
    return static_cast<int>(std::lround(static_cast<float>(inset) * scale));
}

// The letterbox bars down the frame, each widened by extra: the bottom one is up in either mode,
// the top one unless the script asked for the bottom alone.
SClearance getLetterboxClearance(ELetterbox mode, int letterbox, int extra = 0) {
    return {.start = (mode == ELetterbox::Bottom ? 0 : letterbox) + extra,
            .end = letterbox + extra};
}
// The death banner's red, in 5-5-5, which the colour cube maps to the palette's nearest.
constexpr std::size_t kBannerColor555 = 0x7c00;

// The first of the title's fonts whose height the screen is under, or the last.
engine::CBitFont &getChapterTitleFont(const CDFont &fonts, const engine::SChapterTitle &title,
                                      int screen_height) {
    for (const engine::SChapterTitleFont &font : title.fonts) {
        if (font.below_height == 0 || screen_height < font.below_height) {
            return fonts.findFont(font.font);
        }
    }
    return fonts.findFont(title.fonts.back().font);
}

// The title's format with the story's year and title in it; without a year, the title alone.
std::string formatChapterTitle(std::string_view format, int year, std::string_view title) {
    if (year == 0) {
        return std::string(title);
    }
    std::string text(format);
    for (const auto &[placeholder, value] :
         {std::pair{std::string_view("{year}"), std::to_string(year)},
          std::pair{std::string_view("{title}"), std::string(title)}}) {
        for (std::size_t at = text.find(placeholder); at != std::string::npos;
             at = text.find(placeholder, at + value.size())) {
            text.replace(at, placeholder.size(), value);
        }
    }
    return text;
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
// bw1 0x004cc190
// bw2 0x004b31a0
// bw3 0x004b46b0
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
// the message line and chapter title above the bottom letterbox bar, and the bars clear of the
// battery gauge in a game that has one, which the original drew them over. The bars hide while
// the letterbox is up.
// deferred: a hero's bar as long as its health can go, max_hit_points / 100 of the width and
//   clear of the screen's right edge (the decomp's status_bar.h, STATUS_BAR_WIDTH), with
//   CCharacter::processCharacter and processDamage, which record it
// nocedit 0x004d8040
// bw1 0x004cc2b0
// bw2 0x004b32c0
void CGame::renderOverlay(const SGameSessionOwners &session) {
    const common::SViewport frame =
        getHudFrame(session.display.getWidescreen(), owners_.screen.getWindowWidth(),
                    owners_.screen.getWindowHeight());
    const int letterbox = session.script.getLetterboxHeight(getScriptScreen(session));
    renderMessageLine(session, frame, letterbox);
    renderChapterTitle(frame, letterbox);
    if (letterbox_mode == ELetterbox::Off) {
        renderStatusBars(session, frame);
    }
}

SInventoryHud CGame::getInventoryHud(const SGameSessionOwners &session) const {
    return {.assets = session.inventory_assets,
            .fonts = owners_.fonts,
            .messages = session.messages,
            .screen = owners_.screen,
            .two_d = owners_.two_d,
            .special = owners_.special,
            .content = owners_.content,
            .camera = session.camera,
            .hero = *session.mission.getLocalHero(),
            .frame = getHudFrame(session.display.getWidescreen(), owners_.screen.getWindowWidth(),
                                 owners_.screen.getWindowHeight()),
            .letterbox_up = letterbox_mode != ELetterbox::Off};
}

SScriptScreen CGame::getScriptScreen(const SGameSessionOwners &session) const {
    return {.screen = owners_.screen,
            .two_d = owners_.two_d,
            .three_d = owners_.three_d,
            .fonts = owners_.fonts,
            .display = session.display};
}

// Where the game's [hud.message] places it: by default centred above the frame's bottom; below
// 480 camera columns in the small editor font.
void CGame::renderMessageLine(const SGameSessionOwners &session, const common::SViewport &frame,
                              int letterbox) {
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
    const engine::SHudPlace place =
        owners_.content.message_line.value_or(engine::SMessageLine{}).place;
    const EHudAlign down = getDown(place.anchor);
    int y = alignOnAxis(down, frame.y, frame.height, static_cast<int>(wrapped.lines.size()) * pitch,
                        scaleInset(place.y, scale),
                        getLetterboxClearance(letterbox_mode, letterbox, pitch));
    if (small) {
        y -= static_cast<int>(std::lround(kSmallFontLift * scale));
    }
    for (const std::string &line : wrapped.lines) {
        const int x = alignOnAxis(getAcross(place.anchor), frame.x, frame.width,
                                  font.getTextWidthScaled(line, scale), scaleInset(place.x, scale));
        font.drawTextScaled(line, x, y, kTextColor, kShadowColor, scale);
        y += pitch;
    }
}

// The story's year and title, as the packages' chapter title gives them, by default at the
// frame's bottom left; a game without one shows none.
void CGame::renderChapterTitle(const common::SViewport &frame, int letterbox) {
    const std::optional<engine::SChapterTitle> &title = owners_.content.chapter_title;
    if (!(chapter_title_timer_ > 0.0F) || !title) {
        return;
    }
    engine::CBitFont &font =
        getChapterTitleFont(owners_.fonts, *title, owners_.screen.getWindowHeight());
    const float scale = engine::getUiTextScale(frame.height);
    const int height = font.getCharHeightScaled(kMeasureChar, scale);
    const auto gap =
        static_cast<int>(std::lround(static_cast<float>(font.getCharWidth(kMeasureChar)) * scale));
    const std::string text = formatChapterTitle(title->format, chapter_year_, chapter_title_);
    owners_.three_d.setRenderAlpha(title->alpha);
    font.drawTextScaled(text,
                        alignOnAxis(getAcross(title->place.anchor), frame.x, frame.width,
                                    font.getTextWidthScaled(text, scale), gap * title->place.x),
                        alignOnAxis(getDown(title->place.anchor), frame.y, frame.height, height,
                                    gap * title->place.y,
                                    getLetterboxClearance(letterbox_mode, letterbox)),
                        title->colour, title->shadow, scale);
}

// Where the game's [hud.status_bars] places them, by default stacked up from the frame's bottom
// left, each named over its fill, and clear of a battery gauge placed from the same anchor.
void CGame::renderStatusBars(const SGameSessionOwners &session, const common::SViewport &frame) {
    if (status_lines_.empty()) {
        return;
    }
    engine::CBitFont &font = getStatusBarFont(owners_.fonts, frame.width);
    const int bar_height = std::max(frame.height / 40, font.getCharHeight(kMeasureChar));
    const int bar_width = frame.width / 4;
    const engine::SHudPlace place =
        owners_.content.status_bars.value_or(engine::SStatusBars{}).place;
    const EHudAlign across = getAcross(place.anchor);
    int left =
        alignOnAxis(across, frame.x, frame.width, bar_width, place.x * frame.width / kLayoutWidth);
    const bool has_gauge = owners_.content.battery.value_or(engine::SBattery{}).gauge;
    const engine::SHudPlace gauge_place =
        owners_.content.battery_gauge.value_or(engine::SBatteryGauge{}).place;
    if (has_gauge && gauge_place.anchor == place.anchor && across != EHudAlign::Middle) {
        const int ui_scale = engine::getUiScale(owners_.screen.getWindowHeight());
        const engine::CAlphaBitmap &picture =
            session.inventory_assets.getBitmap(EInventoryBitmap::kBattery);
        const common::SViewport gauge = getBatteryGaugeBox(frame, gauge_place, picture.getWidth(),
                                                           picture.getHeight(), ui_scale);
        const int gap = kBatteryGap * ui_scale;
        left = across == EHudAlign::Start ? std::max(left, gauge.x + gauge.width + gap)
                                          : std::min(left, gauge.x - gap - bar_width);
    }
    const int right = left + bar_width;
    const EHudAlign down = getDown(place.anchor);
    int top = alignOnAxis(down, frame.y, frame.height, bar_height,
                          place.y * frame.height / kLayoutHeight);
    const int step = (bar_height * 3 / 2) * (down == EHudAlign::End ? -1 : 1);
    for (const SStatusLine &line : status_lines_) {
        const int bottom = top + bar_height;
        owners_.two_d.fillRectWithBorder(left, top, right, bottom, 0, 0);
        const auto filled =
            static_cast<int>(std::lround(static_cast<float>(right - left + 1) * line.value));
        if (filled > 0) {
            owners_.two_d.fillRectColor(left, top, left + filled, bottom, getBarColor(line.value));
        }
        font.drawText(line.name, left, top, kTextColor, kShadowColor);
        top += step;
    }
}

// The game's banner while the local hero is dead, where its place puts it: by default high in the
// scene's picture, clear of the message line and the Game Over dialog, as the decomp's HUD places
// it; the original drew it two lines up from the screen's bottom. The Blair Witch games give none.
void CGame::renderDeathBanner(const SGameSessionOwners &session) {
    const std::optional<engine::SDeathBanner> &banner = owners_.content.death_banner;
    if (!banner ||
        session.mission.getLocalHero()->getDeathState() != EDeathState::DEATH_STATE_DEAD) {
        return;
    }
    const common::SViewport frame =
        getHudFrame(session.display.getWidescreen(), owners_.screen.getWindowWidth(),
                    owners_.screen.getWindowHeight());
    engine::CBitFont &font = *owners_.fonts.getMediumFont();
    const float scale = engine::getUiTextScale(frame.height);
    const auto height =
        static_cast<int>(std::lround(static_cast<float>(font.getMaxCharHeight()) * scale));
    const std::string_view text = session.messages.getLocalizedString(banner->text);
    const int width = font.getTextWidthScaled(text, scale);
    const engine::SHudPlace &place = banner->place;
    const int x = alignOnAxis(getAcross(place.anchor), frame.x, frame.width, width,
                              place.x * frame.width / kLayoutWidth);
    const int y = alignOnAxis(getDown(place.anchor), frame.y, frame.height, height,
                              place.y * frame.height / kLayoutHeight);
    owners_.three_d.setRenderAlpha(kFullAlpha);
    font.drawTextScaled(text, x, y, owners_.two_d.getColorCubeLookup()[kBannerColor555],
                        kShadowColor, scale);
}

} // namespace nocturne::core
