#include "core/dfont/dfont.h"

#include "engine/font/bitfont.h"
#include "engine/winfont/winfont.h"
#include "shape/edittool/editortools.h"
#include "support/newmsg/newmsg.h"

namespace nocturne::core {
namespace {

// The small sheets share one size.
constexpr int kSmallSheetWidth = 0x94;
constexpr int kSmallSheetHeight = 0xec;
// The console sheet's transparent index; the others' is 0.
constexpr int kConsoleTransparent = 0xff;

// The rest of a font's set-up: how wide a space is and how far its shadow falls.
void finishFont(engine::CBitFont &font, int space_width, int shadow_offset_x) {
    font.setCharWidth(' ', space_width);
    font.setShadowOffset(shadow_offset_x, 1);
    font.setFontReady(1);
}

} // namespace

CDFont::CDFont(const engine::CDosIo &dosio, engine::IScreenDevice &screen, const engine::C2d &two_d,
               const engine::C3d &three_d, const engine::CFontColors &colors,
               platform::IOsFontFactory &os_fonts, const support::CNewMsg &messages,
               shape::CEditorTools &editor_tools)
    : dosio_(dosio), screen_(screen), two_d_(two_d), three_d_(three_d), colors_(colors),
      os_fonts_(os_fonts), messages_(messages), editor_tools_(editor_tools) {}

CDFont::~CDFont() {
    freeFonts();
}

std::unique_ptr<engine::CBitFont> CDFont::loadFont(const char *filename, int width, int height,
                                                   int load_flags) const {
    auto font = std::make_unique<engine::CBitFont>(dosio_, screen_, two_d_, three_d_, colors_);
    font->openFontFile(filename, width, height, load_flags);
    return font;
}

std::unique_ptr<engine::CWinFont> CDFont::makeOsFont(int font_height, int y_offset1,
                                                     int y_offset2) const {
    return std::make_unique<engine::CWinFont>(os_fonts_, screen_, two_d_, colors_,
                                              messages_.getOSFontName(), font_height, y_offset1,
                                              y_offset2);
}

// The console font is the one drawn from its sheet's own colours; the rest are grey levels the
// text colour covers. The enhanced game lets the player choose OS text over the message file.
// nocedit 0x004709a0
void CDFont::initFonts() {
    use_os_fonts_ = os_font_choice_ == EOsFontChoice::Auto
                        ? messages_.getUseOSFonts()
                        : os_font_choice_ == EOsFontChoice::System;

    medium_font_ = loadFont("nocfont.raw", 0x136, 0x1ae, 0);
    medium_font_->setInitializedFlag();
    medium_font_->setCharYOffsetRange(3, 0x20, 0x7e);
    medium_font_->setCharYOffsetRange(1, 0xc0, 0xdf);
    finishFont(*medium_font_, 8, 2);

    tiny_font_ = loadFont("nocsmall.raw", 0xf8, 0x158, 0);
    tiny_font_->setInitializedFlag();
    tiny_font_->setCharYOffsetRange(2, 0x20, 0x7e);
    finishFont(*tiny_font_, 5, 2);

    theme_font_ = loadFont("menufont.raw", 0xfa, 0x23f, 0);
    theme_font_->setInitializedFlag();
    theme_font_->setCharYOffsetRange(3, 0x20, 0x7e);
    theme_font_->setCharYOffsetRange(0, 0xc0, 0xdf);
    theme_font_->setCharYOffsetRange(1, 0xe0, 0xff);
    finishFont(*theme_font_, 8, 2);

    small_editor_font_ = loadFont("fnte_pfd.RAW", kSmallSheetWidth, kSmallSheetHeight, 0);
    small_editor_font_->setInitializedFlag();
    small_editor_font_->setCharYOffsetRange(3, 0x20, 0x7e);
    finishFont(*small_editor_font_, 4, 1);
    editor_tools_.setEditorFont(small_editor_font_.get());

    console_font_ =
        loadFont("fnte_f.RAW", kSmallSheetWidth, kSmallSheetHeight, kConsoleTransparent);
    console_font_->setCharYOffsetRange(3, 0x20, 0x7e);
    finishFont(*console_font_, 4, 1);

    micro_font_ = loadFont("micro.raw", kSmallSheetWidth, kSmallSheetHeight, 0);
    micro_font_->setInitializedFlag();
    micro_font_->setCharYOffsetRange(1, 0x20, 0x7e);
    finishFont(*micro_font_, 4, 1);

    if (!use_os_fonts_) {
        return;
    }
    medium_win_font_ = makeOsFont(14, 2, 2);
    medium_font_->setWinFont(*medium_win_font_);
    theme_win_font_ = makeOsFont(18, 0, 0);
    theme_font_->setWinFont(*theme_win_font_);
    tiny_win_font_ = makeOsFont(12, 0, 0);
    tiny_font_->setWinFont(*tiny_win_font_);
    debug_win_font_ = makeOsFont(10, 0, 0);
    small_editor_font_->setWinFont(*debug_win_font_);
}

// The dialogs lose their font with the rest.
// nocedit 0x004710a0
void CDFont::freeFonts() {
    medium_font_.reset();
    tiny_font_.reset();
    theme_font_.reset();
    small_editor_font_.reset();
    console_font_.reset();
    editor_tools_.setEditorFont(nullptr);
    micro_font_.reset();
    medium_win_font_.reset();
    tiny_win_font_.reset();
    theme_win_font_.reset();
    debug_win_font_.reset();
}

EOsFontChoice CDFont::getOsFontChoice() const {
    return os_font_choice_;
}

void CDFont::setOsFontChoice(EOsFontChoice choice) {
    os_font_choice_ = choice;
}

bool CDFont::getUseOSFonts() const {
    return use_os_fonts_;
}

EMenuFontChoice CDFont::getMenuFontChoice() const {
    return menu_font_choice_;
}

void CDFont::setMenuFontChoice(EMenuFontChoice choice) {
    menu_font_choice_ = choice;
}

engine::CBitFont *CDFont::getMenuFont() const {
    return menu_font_choice_ == EMenuFontChoice::Small ? small_editor_font_.get()
                                                       : theme_font_.get();
}

engine::CBitFont *CDFont::getMediumFont() const {
    return medium_font_.get();
}

engine::CBitFont *CDFont::getTinyFont() const {
    return tiny_font_.get();
}

engine::CBitFont *CDFont::getThemeFont() const {
    return theme_font_.get();
}

engine::CBitFont *CDFont::getSmallEditorFont() const {
    return small_editor_font_.get();
}

engine::CBitFont *CDFont::getConsoleFont() const {
    return console_font_.get();
}

engine::CBitFont *CDFont::getMicroFont() const {
    return micro_font_.get();
}

} // namespace nocturne::core
