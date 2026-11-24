#include "core/dfont/dfont.h"

#include "common/error/error.h"
#include "engine/font/bitfont.h"
#include "engine/package/gamecontent.h"
#include "engine/winfont/winfont.h"
#include "shape/edittool/editortools.h"
#include "support/newmsg/newmsg.h"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstddef>
#include <format>
#include <optional>
#include <string_view>
#include <utility>

namespace nocturne::core {
namespace {

// The roles the game's code asks for its fonts by, in the order they load.
constexpr std::string_view kMediumId = "medium";
constexpr std::string_view kTinyId = "tiny";
constexpr std::string_view kThemeId = "theme";
constexpr std::string_view kSmallEditorId = "small_editor";
constexpr std::string_view kConsoleId = "console";
constexpr std::string_view kMicroId = "micro";
constexpr std::array<std::string_view, 6> kFontIds{kMediumId,      kTinyId,    kThemeId,
                                                   kSmallEditorId, kConsoleId, kMicroId};
// A scale this close to 1 needs no fonts of its own.
constexpr float kUnscaledTolerance = 0.001F;

int scaleLength(int length, float scale) {
    return static_cast<int>(std::lround(static_cast<float>(length) * scale));
}

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
               shape::CEditorTools &editor_tools, const engine::SGameContent &content)
    : dosio_(dosio), screen_(screen), two_d_(two_d), three_d_(three_d), colors_(colors),
      os_fonts_(os_fonts), messages_(messages), editor_tools_(editor_tools), content_(content) {}

CDFont::~CDFont() {
    freeFonts();
}

const engine::SFontSpec &CDFont::getSpec(std::string_view id) const {
    const auto found = std::ranges::find(content_.fonts, id, &engine::SFontSpec::id);
    if (found == content_.fonts.end()) {
        common::displayErrorAndQuit(std::format("No package gives the {} font", id));
    }
    return *found;
}

// A grey-level font takes the text colour; its runs of characters sit as low as the spec says.
std::unique_ptr<engine::CBitFont> CDFont::loadFont(const engine::SFontSpec &spec) const {
    auto font = std::make_unique<engine::CBitFont>(dosio_, screen_, two_d_, three_d_, colors_);
    font->openFontFile(spec.file, spec.width, spec.height, spec.transparent);
    if (!spec.own_colours) {
        font->setInitializedFlag();
    }
    for (const engine::SFontYOffset &offset : spec.y_offsets) {
        font->setCharYOffsetRange(offset.offset, offset.first, offset.last);
    }
    finishFont(*font, spec.space_width, spec.shadow_x);
    return font;
}

std::unique_ptr<engine::CWinFont> CDFont::makeOsFont(std::string_view id, float scale) const {
    const std::optional<engine::SOsFontSize> &size = getSpec(id).os_font;
    if (!size) {
        return nullptr;
    }
    return makeOsFont(scaleLength(size->height, scale), scaleLength(size->y_offset1, scale),
                      scaleLength(size->y_offset2, scale));
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
    // A font no role takes is the game's own, as BW3's menu fonts, drawn by what names it.
    extra_fonts_.clear();
    for (const engine::SFontSpec &spec : content_.fonts) {
        if (!std::ranges::contains(kFontIds, spec.id)) {
            extra_fonts_.insert_or_assign(spec.id, loadFont(spec));
        }
    }

    medium_font_ = loadFont(getSpec(kMediumId));
    tiny_font_ = loadFont(getSpec(kTinyId));
    theme_font_ = loadFont(getSpec(kThemeId));
    small_editor_font_ = loadFont(getSpec(kSmallEditorId));
    editor_tools_.setEditorFont(small_editor_font_.get());
    console_font_ = loadFont(getSpec(kConsoleId));
    micro_font_ = loadFont(getSpec(kMicroId));

    if (!use_os_fonts_) {
        return;
    }
    // The medium, theme, tiny and small editor fonts take OS text, made in that order.
    const auto give = [this](engine::CBitFont &font, std::unique_ptr<engine::CWinFont> &win_font,
                             std::string_view id) {
        win_font = makeOsFont(id, 1.0F);
        if (win_font) {
            font.setWinFont(*win_font);
        }
    };
    give(*medium_font_, medium_win_font_, kMediumId);
    give(*theme_font_, theme_win_font_, kThemeId);
    give(*tiny_font_, tiny_win_font_, kTinyId);
    give(*small_editor_font_, debug_win_font_, kSmallEditorId);
}

void CDFont::setOsFontScale(float scale) {
    const std::array<engine::CBitFont *, 4> fonts{medium_font_.get(), theme_font_.get(),
                                                  tiny_font_.get(), small_editor_font_.get()};
    constexpr std::array<std::string_view, 4> kIds{kMediumId, kThemeId, kTinyId, kSmallEditorId};
    const bool scaled = use_os_fonts_ && std::fabs(scale - 1.0F) >= kUnscaledTolerance;
    for (std::size_t i = 0; i < fonts.size(); ++i) {
        std::unique_ptr<engine::CWinFont> &win_font = scaled_win_fonts_.at(i);
        if (scaled) {
            win_font = makeOsFont(kIds.at(i), scale);
        } else {
            win_font.reset();
        }
        if (fonts.at(i) != nullptr) {
            fonts.at(i)->setScaledWinFont(win_font.get(), scale);
        }
    }
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
    extra_fonts_.clear();
    medium_win_font_.reset();
    tiny_win_font_.reset();
    theme_win_font_.reset();
    debug_win_font_.reset();
    for (std::unique_ptr<engine::CWinFont> &win_font : scaled_win_fonts_) {
        win_font.reset();
    }
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
    if (!content_.menu) {
        common::displayErrorAndQuit("No package gives the menus' layout");
    }
    return &findFont(menu_font_choice_ == EMenuFontChoice::Small ? content_.menu->text_font_small
                                                                 : content_.menu->text_font_large);
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

engine::CBitFont &CDFont::findFont(std::string_view id) const {
    const std::array fonts{std::pair{kMediumId, medium_font_.get()},
                           std::pair{kTinyId, tiny_font_.get()},
                           std::pair{kThemeId, theme_font_.get()},
                           std::pair{kSmallEditorId, small_editor_font_.get()},
                           std::pair{kConsoleId, console_font_.get()},
                           std::pair{kMicroId, micro_font_.get()}};
    for (const auto &[name, font] : fonts) {
        if (id == name && font != nullptr) {
            return *font;
        }
    }
    if (const auto extra = extra_fonts_.find(id); extra != extra_fonts_.end()) {
        return *extra->second;
    }
    common::displayErrorAndQuit(std::format("No font {} is loaded", id));
}

} // namespace nocturne::core
