#include "core/menu/menu.h"

#include "common/random/watcomrandom.h"
#include "core/dfont/dfont.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/font/bitfont.h"
#include "engine/menuinput.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "support/newmsg/newmsg.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <string>
#include <string_view>
#include <utility>

namespace nocturne::core {
namespace {

// The image is 640x480 and the text is laid out on it, whatever the mode.
constexpr int kImageWidth = 640;
constexpr int kImageHeight = 480;
constexpr int kFullAlpha = 0xffff;
constexpr int kTextColor = 0xf8;
// The character whose height spaces the text.
constexpr int kLineHeightChar = 'X';
constexpr int kItemLeft = 160;
constexpr int kTitleColor = 7;
constexpr int kTitleShadow = 0;
constexpr int kGlowColor = 7;
constexpr int kSelectedColor = 0xff;
constexpr int kItemAlpha = 48000;
constexpr int kGlowCopies = 5;
constexpr int kFooterShadow = 0;
constexpr int kTrademarkAlpha = 0x8000;
// The trademark sign, in Windows-1252, beside the title art.
constexpr std::string_view kTrademark = "\x99";
constexpr int kTrademarkX = 518;
constexpr int kTrademarkY = 99;
constexpr int kVersionX = 4;
// Only OS text carries the (c).
constexpr std::string_view kCopyright = "Nocturne 1999 Terminal Reality Inc.  Patent Pending.";
constexpr std::string_view kOsFontCopyright =
    "Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.";

constexpr std::array<std::string_view, 5> kCalibrationSteps{
    "1. Turn off all the lights in your room.",
    "2. Turn your brightness up, so that you see 3 bars on the left side of the screen.",
    "3. Turn down the brightness, so that the left 2 bars become the same color.",
    "4. Turn your contrast all the way up.",
    "You're done with calibration.",
};

void drawCentred(engine::CBitFont &font, std::string_view text, int y) {
    font.drawText(text, (kImageWidth / 2) - (font.getTextWidth(text) / 2), y, kTextColor,
                  engine::CBitFont::kNoShadow);
}

} // namespace

// What staticInit constructed is the members; the menus' bitmaps arrive with the screens that
// load them.
// nocedit 0x0050fdb0
CMenu::CMenu(const SMenuOwners &owners)
    : owners_(owners), moon_(SMoonOwners{.dosio = owners.dosio,
                                         .screen = owners.screen,
                                         .special = owners.special,
                                         .three_d = owners.three_d,
                                         .renderer = owners.renderer,
                                         .set = owners.set,
                                         .game = owners.game,
                                         .actor = owners.actor,
                                         .crt_random = owners.crt_random}) {}

CMoon &CMenu::getMoon() {
    return moon_;
}

bool CMenu::getMenuInputHappened() const {
    return menu_input_happened_;
}

bool CMenu::getMenuLeftRightPressed() const {
    return menu_left_right_pressed_;
}

// The original built the text in a 256-byte buffer, which a long translation overran.
// nocedit 0x00510a50
void CMenu::showCalibrationTestPattern(engine::CAlphaBitmap &bitmap,
                                       std::string_view message_text) {
    engine::CBitFont &font = *owners_.fonts.getSmallEditorFont();
    const std::string prompt =
        std::string(message_text) +
        std::string(owners_.messages.getLocalizedString("  Press any key to continue."));
    const int line_height = font.getCharHeight(kLineHeightChar);
    owners_.special.clearScreen();
    bitmap.display(0, 0, kFullAlpha);
    drawCentred(font, prompt, kImageHeight - (3 * line_height));
    drawCentred(font, owners_.messages.getLocalizedString("Monitor calibration"), 2 * line_height);
    owners_.screen.swapBuffers();
    owners_.two_d.clearInputAndWait();
    owners_.raw_input.getNextKeypress(owners_.screen);
}

// nocedit 0x00510ba0
void CMenu::showCalibrationTest() {
    engine::CAlphaBitmap bitmap(owners_.dosio, owners_.screen, owners_.special);
    bitmap.load("brightness", kImageWidth, kImageHeight);
    for (const std::string_view step : kCalibrationSteps) {
        showCalibrationTestPattern(bitmap, owners_.messages.getLocalizedString(step));
    }
    owners_.two_d.clearInputAndWait();
}

// Without a title the items are double spaced. The original also measured each item, which
// nothing read, and the editor's drew two lines naming its build at the top.
// nocedit 0x00510000
int CMenu::renderMenuAndGetChoice(std::span<const std::string> items, int &selected_index,
                                  int y_position, std::optional<std::string_view> title) {
    engine::CBitFont &font = *owners_.fonts.getThemeFont();
    if (title) {
        font.drawText(*title, kItemLeft, y_position, kTitleColor, kTitleShadow);
        y_position += font.getCharHeight(kLineHeightChar) * 2;
    }
    for (std::size_t i = 0; i < items.size(); ++i) {
        const int line_height = font.getCharHeight(kLineHeightChar);
        int color = kTextColor;
        if (std::cmp_equal(i, selected_index)) {
            // The glow pulses with the title animation, steady in its second half.
            if (moon_.isAnimationFirstHalf() != 0) {
                drawGlowingItem(font, items[i], y_position);
                color = kGlowColor;
            } else {
                color = kSelectedColor;
            }
        }
        owners_.three_d.setRenderAlpha(kItemAlpha);
        font.drawText(items[i], kItemLeft, y_position, color, engine::CBitFont::kNoShadow);
        y_position += title ? line_height : 2 * line_height;
    }
    owners_.three_d.setRenderAlpha(kFullAlpha);
    drawFooter();
    return readMenuActions(items, selected_index);
}

// Each copy is up to two pixels off in x and y, at a random part of the item's alpha.
void CMenu::drawGlowingItem(engine::CBitFont &font, std::string_view item, int y) {
    for (int i = 0; i < kGlowCopies; ++i) {
        const int x_jitter = owners_.crt_random.rand() & 3;
        const int y_jitter = (owners_.crt_random.rand() & 3) - 2;
        const int alpha = (owners_.crt_random.rand() * kItemAlpha) >> 16;
        owners_.three_d.setRenderAlpha(alpha);
        font.drawText(item, kItemLeft - 2 + x_jitter, y + y_jitter, kGlowColor,
                      engine::CBitFont::kNoShadow);
    }
}

// The build's line is the enhanced game's, in the bottom left at the trademark's alpha.
void CMenu::drawFooter() {
    engine::CBitFont &font = *owners_.fonts.getSmallEditorFont();
    const std::string_view copyright =
        owners_.fonts.getUseOSFonts() ? kOsFontCopyright : kCopyright;
    const int bottom = kImageHeight - 1 - font.getTextHeight(copyright);
    font.drawText(copyright, kImageWidth - 1 - font.getTextWidth(copyright), bottom, kTextColor,
                  kFooterShadow);
    owners_.three_d.setRenderAlpha(kTrademarkAlpha);
    font.drawText(kTrademark, kTrademarkX, kTrademarkY, kTextColor, kFooterShadow);
    font.drawText(owners_.build_version, kVersionX, bottom, kTextColor, kFooterShadow);
    owners_.three_d.setRenderAlpha(kFullAlpha);
}

// Up and down wrap at the ends. An item with a colon is a setting, which left and right change;
// the left-right flag is only cleared on one. The setting is the item selected before the
// selection moves.
int CMenu::readMenuActions(std::span<const std::string> items, int &selected_index) {
    using engine::EMenuAction;
    engine::CMenuInput &input = owners_.menu_input;
    const auto count = static_cast<int>(items.size());
    const bool is_setting = items[static_cast<std::size_t>(selected_index)].contains(':');
    menu_input_happened_ = false;
    if (input.takeMenuAction(EMenuAction::Up)) {
        menu_input_happened_ = true;
        selected_index = selected_index - 1 < 0 ? count - 1 : selected_index - 1;
    }
    if (input.takeMenuAction(EMenuAction::Down)) {
        menu_input_happened_ = true;
        selected_index = selected_index + 1 >= count ? 0 : selected_index + 1;
    }
    if (is_setting) {
        menu_left_right_pressed_ = false;
        if (input.takeMenuAction(EMenuAction::Left)) {
            menu_left_right_pressed_ = true;
            return selected_index;
        }
        if (input.takeMenuAction(EMenuAction::Right)) {
            return selected_index;
        }
    }
    return input.takeMenuAction(EMenuAction::Confirm) ? selected_index : -1;
}

} // namespace nocturne::core
