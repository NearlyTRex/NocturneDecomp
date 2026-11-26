#include "core/menu/menu.h"

#include "common/error/error.h"
#include "common/random/watcomrandom.h"
#include "core/dfont/dfont.h"
#include "core/frontend.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/font/bitfont.h"
#include "engine/menuinput.h"
#include "engine/package/gamecontent.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/display.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <array>
#include <cmath>
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
// The character whose height spaces the text.
constexpr int kLineHeightChar = 'X';
static_assert(engine::kNoMenuShadow == engine::CBitFont::kNoShadow);
constexpr std::string_view kShortened = "...";

// The text as it fits in width screen pixels: whole, or as much of its start as fits before
// "...", with no space left before the dots.
std::string fitToWidth(const engine::CBitFont &font, std::string_view text, int width,
                       float scale) {
    if (font.getTextWidthScaled(text, scale) <= width) {
        return std::string(text);
    }
    std::string shortened(text);
    while (!shortened.empty()) {
        shortened.pop_back();
        while (shortened.ends_with(' ')) {
            shortened.pop_back();
        }
        std::string candidate = shortened + std::string(kShortened);
        if (font.getTextWidthScaled(candidate, scale) <= width) {
            return candidate;
        }
    }
    return std::string(kShortened);
}

// The calibration image stretched over a screen of width by height.
// Centred on the picture at its row y, at the picture's text scale so the letters keep their
// shape.
void drawCentred(engine::CBitFont &font, std::string_view text, const SPictureArea &picture, int y,
                 int colour) {
    const float scale = picture.getScale();
    font.drawTextScaled(text,
                        picture.getX(kImageWidth / 2) - (font.getTextWidthScaled(text, scale) / 2),
                        picture.getY(y), colour, engine::CBitFont::kNoShadow, scale);
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
                                         .crt_random = owners.crt_random,
                                         .display = owners.display,
                                         .content = owners.content}) {}

CMoon &CMenu::getMoon() {
    return moon_;
}

SFrontEndLayout CMenu::getScreenLayout() const {
    return getFrontEndLayout(owners_.screen.getWindowWidth(), owners_.screen.getWindowHeight());
}

bool CMenu::getMenuInputHappened() const {
    return menu_input_happened_;
}

bool CMenu::getMenuLeftRightPressed() const {
    return menu_left_right_pressed_;
}

// The original built the text in a 256-byte buffer, which a long translation overran. The image
// fills the screen as its fit says, plain enough that the games stretch it; its lines go where
// the picture puts their rows.
// nocedit 0x00510a50
void CMenu::showCalibrationTestPattern(engine::CAlphaBitmap &bitmap,
                                       std::string_view message_text) {
    const engine::SMenuCalibration &calibration = getMenuLayout().calibration;
    engine::CBitFont &font = owners_.fonts.findFont(calibration.font);
    const std::string prompt = std::string(message_text) +
                               std::string(owners_.messages.getLocalizedString(calibration.prompt));
    const int line_height = font.getCharHeight(kLineHeightChar);
    const SPictureArea picture = getPictureArea(owners_.screen.getWindowWidth(),
                                                owners_.screen.getWindowHeight(), calibration.fit);
    owners_.special.clearScreen();
    displayInPicture(bitmap, picture,
                     {.x = 0, .y = 0, .width = kImageWidth, .height = kImageHeight}, kFullAlpha,
                     owners_.display.getUpscaler());
    drawCentred(font, prompt, picture, kImageHeight - (calibration.prompt_lines * line_height),
                calibration.colour);
    drawCentred(font, owners_.messages.getLocalizedString(calibration.title), picture,
                calibration.title_lines * line_height, calibration.colour);
    owners_.screen.swapBuffers();
    owners_.two_d.clearInputAndWait();
    owners_.raw_input.getNextKeypress(owners_.screen);
}

// nocedit 0x00510ba0
void CMenu::showCalibrationTest() {
    const engine::SMenuCalibration &calibration = getMenuLayout().calibration;
    engine::CAlphaBitmap bitmap(owners_.dosio, owners_.screen, owners_.special);
    bitmap.load(calibration.image, kImageWidth, kImageHeight);
    for (const std::string &step : calibration.steps) {
        showCalibrationTestPattern(bitmap, owners_.messages.getLocalizedString(step));
    }
    owners_.two_d.clearInputAndWait();
}

// The original also measured each item, which nothing read, and the editor's drew two lines
// naming its build at the top. The rows are the layout's, drawn where and as large as the screen
// shows them. A row wider than the room to the layout's right edge, as a long device name makes
// one beside a menu on the right, is shortened to end in "..."; its line's list shows it whole.
// A game's menus centred each line and drew a copy under it, as BW2's, or put a title in a font
// of its own and a list without one at points of its own, as BW3's, where its packages say.
// bw3 0x004e7860
// bw2 0x004eb0e0
// nocedit 0x00510000
int CMenu::renderMenuAndGetChoice(std::span<const std::string> items, int &selected_index,
                                  int y_position, std::optional<std::string_view> title) {
    const engine::SMenuLayout &menu = getMenuLayout();
    const engine::SMenuItems &style = menu.item;
    engine::CBitFont &font = owners_.fonts.findFont(
        title || style.untitled_font.empty() ? style.font : style.untitled_font);
    const SFrontEndLayout layout = getScreenLayout();
    const int line_height = font.getCharHeight(kLineHeightChar);
    if (title) {
        engine::CBitFont &title_font =
            menu.title.font.empty() ? font : owners_.fonts.findFont(menu.title.font);
        drawMenuLine(title_font, *title, getLineLeft(title_font, *title), y_position,
                     menu.title.colour, menu.title.shadow, menu.title.drop);
        y_position += title_font.getCharHeight(kLineHeightChar) * menu.title.gap_lines;
    }
    const int spacing = title ? style.spacing_titled : style.spacing_untitled;
    const int room = layout.getX(kFrontEndLayoutWidth) -
                     layout.getX(menu.align == engine::EMenuAlign::Centre ? 0 : menu.left);
    for (std::size_t i = 0; i < items.size(); ++i) {
        const std::string item = fitToWidth(font, items[i], room, layout.scale);
        int left = getLineLeft(font, item);
        if (!title && i < style.untitled_positions.size()) {
            const engine::SMenuPoint &point = style.untitled_positions[i];
            left = point.centred ? point.x - (font.getTextWidth(item) / 2) : point.x;
            y_position = point.y;
        }
        int color = style.colour;
        if (std::cmp_equal(i, selected_index)) {
            // The glow pulses with the title animation, steady in its second half.
            if (style.glow.flicker && moon_.isAnimationFirstHalf() != 0) {
                drawGlowingItem(font, item, left, y_position);
                color = style.glow.item_colour.value_or(style.glow.colour);
            } else {
                color = style.selected_colour;
            }
        }
        owners_.three_d.setRenderAlpha(style.alpha);
        drawMenuLine(font, item, left, y_position, color, style.shadow, style.drop);
        y_position += spacing * line_height;
    }
    owners_.three_d.setRenderAlpha(kFullAlpha);
    drawFooter();
    return readMenuActions(items, selected_index);
}

// The line's left edge on the layout: the menus' own, or the line centred about the middle.
int CMenu::getLineLeft(const engine::CBitFont &font, std::string_view text) const {
    const engine::SMenuLayout &menu = getMenuLayout();
    if (menu.align == engine::EMenuAlign::Centre) {
        return (kFrontEndLayoutWidth - font.getTextWidth(text)) / 2;
    }
    return menu.left;
}

// Its copy first, in the copy's colour and the line's shadow, then the line.
void CMenu::drawMenuLine(engine::CBitFont &font, std::string_view text, int left, int y, int colour,
                         int shadow, const std::optional<engine::SMenuDrop> &drop) {
    const SFrontEndLayout layout = getScreenLayout();
    if (drop) {
        font.drawTextScaled(text, layout.getX(left + drop->x), layout.getY(y + drop->y),
                            drop->colour, shadow, layout.scale);
    }
    font.drawTextScaled(text, layout.getX(left), layout.getY(y), colour, shadow, layout.scale);
}

// Each copy is up to two layout pixels off in x and y, at a random part of the item's alpha.
void CMenu::drawGlowingItem(engine::CBitFont &font, std::string_view item, int left, int y) {
    const SFrontEndLayout layout = getScreenLayout();
    const engine::SMenuItems &style = getMenuLayout().item;
    for (int i = 0; i < style.glow.copies; ++i) {
        const int x_jitter = owners_.crt_random.rand() & 3;
        const int y_jitter = (owners_.crt_random.rand() & 3) - 2;
        const int alpha = (owners_.crt_random.rand() * style.alpha) >> 16;
        owners_.three_d.setRenderAlpha(alpha);
        font.drawTextScaled(item, layout.getX(left - 2 + x_jitter), layout.getY(y + y_jitter),
                            style.glow.colour, style.shadow, layout.scale);
    }
}

const engine::SMenuLayout &CMenu::getMenuLayout() const {
    if (!owners_.content.menu) {
        common::displayErrorAndQuit("No package gives the menus' layout");
    }
    return *owners_.content.menu;
}

bool CMenu::hasDifficultyOptions() const {
    return owners_.content.difficulty.value_or(engine::SDifficulty{}).options;
}

// The OS fonts' copyright when the packages give one, else the bitmap fonts'.
std::string_view CMenu::getCopyright() const {
    const engine::SGameContent &content = owners_.content;
    if (owners_.fonts.getUseOSFonts() && content.copyright_os_font) {
        return *content.copyright_os_font;
    }
    return content.copyright ? std::string_view(*content.copyright) : std::string_view();
}

// The build's line is the enhanced game's, where the game drew its version, or Nocturne's when it
// drew none. Each line is placed from its corner, of the screen or of the layout, as its package
// says; the trademark keeps to the title art.
void CMenu::drawFooter() {
    const engine::SMenuLayout &menu = getMenuLayout();
    const engine::SMenuFooter &footer = menu.footer;
    engine::CBitFont &font = owners_.fonts.findFont(footer.font);
    const SFrontEndLayout layout = getScreenLayout();
    drawFooterLine(font, getCopyright(), footer.copyright);
    if (const std::optional<engine::SMenuTrademark> &trademark = menu.trademark) {
        owners_.three_d.setRenderAlpha(trademark->alpha);
        const std::string glyph(1, static_cast<char>(trademark->glyph));
        font.drawTextScaled(glyph, layout.getX(trademark->x), layout.getY(trademark->y),
                            footer.colour, footer.shadow, layout.scale);
    }
    owners_.three_d.setRenderAlpha(footer.version_alpha);
    drawFooterLine(font, owners_.build_version, footer.version);
    owners_.three_d.setRenderAlpha(kFullAlpha);
}

// The line's outer edges as far in from its corner as the place says, in layout pixels. The
// screen is never narrower or shorter than the layout.
void CMenu::drawFooterLine(engine::CBitFont &font, std::string_view text,
                           const engine::SFooterPlace &place) {
    using engine::EFooterCorner;
    const engine::SMenuFooter &footer = getMenuLayout().footer;
    const SFrontEndLayout layout = getScreenLayout();
    const int width = owners_.screen.getWindowWidth();
    const int height = owners_.screen.getWindowHeight();
    // The corner's area: the layout, the title backdrop's picture, or the screen.
    int left = 0;
    int top = 0;
    int right = std::max(kImageWidth, width);
    int bottom = std::max(kImageHeight, height);
    if (place.edge == engine::EFooterEdge::Layout) {
        left = layout.getX(0);
        top = layout.getY(0);
        right = layout.getX(kImageWidth);
        bottom = layout.getY(kImageHeight);
    } else if (place.edge == engine::EFooterEdge::Backdrop) {
        const SPictureArea picture = getTitleBackdropPicture(owners_.content, width, height);
        left = picture.getX(0);
        top = picture.getY(0);
        right = picture.getX(kImageWidth);
        bottom = picture.getY(kImageHeight);
    }
    const bool from_right =
        place.corner == EFooterCorner::BottomRight || place.corner == EFooterCorner::TopRight;
    const bool from_bottom =
        place.corner == EFooterCorner::BottomLeft || place.corner == EFooterCorner::BottomRight;
    const int x =
        from_right ? right - layout.getLength(place.x) - font.getTextWidthScaled(text, layout.scale)
                   : left + layout.getLength(place.x);
    const int y = from_bottom ? bottom - layout.getLength(place.y) -
                                    layout.getLength(font.getTextHeight(text))
                              : top + layout.getLength(place.y);
    font.drawTextScaled(text, x, y, footer.colour, footer.shadow, layout.scale);
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
