#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"
#include "shape/fwd.h"
#include "support/fwd.h"

#include <array>
#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <string>
#include <string_view>

namespace nocturne::core {

// Which text the fonts draw, as the enhanced game's Graphics Options offers it; the values are
// frozen, as nocturne.ini's osFont. Auto leaves it to the message file, which a localisation
// whose glyphs the sheets lack uses to ask for OS fonts.
enum class EOsFontChoice : std::uint8_t {
    Auto,
    Bitmap,
    System,
};

// Which font the dialogs and pick lists outside the editor draw in, as the enhanced game's
// Gameplay options offer it; the values are frozen, as nocturne.ini's menuFont.
enum class EMenuFontChoice : std::uint8_t {
    Large,
    Small,
};

// The game's fonts: six from glyph sheets, and four OS fonts that draw for them when the game
// uses OS text.
class CDFont {
public:
    CDFont(const engine::CDosIo &dosio, engine::IScreenDevice &screen, const engine::C2d &two_d,
           const engine::C3d &three_d, const engine::CFontColors &colors,
           platform::IOsFontFactory &os_fonts, const support::CNewMsg &messages,
           shape::CEditorTools &editor_tools, const engine::SGameContent &content);
    CDFont(const CDFont &) = delete;
    CDFont &operator=(const CDFont &) = delete;
    CDFont(CDFont &&) = delete;
    CDFont &operator=(CDFont &&) = delete;
    ~CDFont();

    // Loads the sheets for the current depth, and makes the dialogs use the small editor font.
    void initFonts();
    void freeFonts();
    // With OS text, each OS font again at `scale` times its size, for the text the front end's
    // layout scales; none at 1.
    void setOsFontScale(float scale);

    [[nodiscard]] EOsFontChoice getOsFontChoice() const;
    // Takes effect at the next initFonts.
    void setOsFontChoice(EOsFontChoice choice);
    // Whether initFonts gave the fonts OS text.
    [[nodiscard]] bool getUseOSFonts() const;
    [[nodiscard]] EMenuFontChoice getMenuFontChoice() const;
    void setMenuFontChoice(EMenuFontChoice choice);
    // The theme font for Large, the small editor font for Small.
    [[nodiscard]] engine::CBitFont *getMenuFont() const;

    [[nodiscard]] engine::CBitFont *getMediumFont() const;
    [[nodiscard]] engine::CBitFont *getTinyFont() const;
    [[nodiscard]] engine::CBitFont *getThemeFont() const;
    [[nodiscard]] engine::CBitFont *getSmallEditorFont() const;
    [[nodiscard]] engine::CBitFont *getConsoleFont() const;
    [[nodiscard]] engine::CBitFont *getMicroFont() const;
    // The font a manifest names: medium, tiny, theme, small_editor, console or micro, or one of
    // the game's own. Any other name is fatal.
    [[nodiscard]] engine::CBitFont &findFont(std::string_view id) const;

private:
    // The packages' spec for a role; without one, fatal.
    [[nodiscard]] const engine::SFontSpec &getSpec(std::string_view id) const;
    [[nodiscard]] std::unique_ptr<engine::CBitFont> loadFont(const engine::SFontSpec &spec) const;
    // The role's OS font at scale times its size, or none when the role takes no OS text.
    [[nodiscard]] std::unique_ptr<engine::CWinFont> makeOsFont(std::string_view id,
                                                               float scale) const;
    [[nodiscard]] std::unique_ptr<engine::CWinFont> makeOsFont(int font_height, int y_offset1,
                                                               int y_offset2) const;

    const engine::CDosIo &dosio_;
    engine::IScreenDevice &screen_;
    const engine::C2d &two_d_;
    const engine::C3d &three_d_;
    const engine::CFontColors &colors_;
    platform::IOsFontFactory &os_fonts_;
    const support::CNewMsg &messages_;
    shape::CEditorTools &editor_tools_;
    const engine::SGameContent &content_;
    EOsFontChoice os_font_choice_ = EOsFontChoice::Auto;
    EMenuFontChoice menu_font_choice_ = EMenuFontChoice::Large;
    bool use_os_fonts_ = false;
    std::unique_ptr<engine::CBitFont> medium_font_;
    std::unique_ptr<engine::CBitFont> tiny_font_;
    std::unique_ptr<engine::CBitFont> theme_font_;
    std::unique_ptr<engine::CBitFont> small_editor_font_;
    std::unique_ptr<engine::CBitFont> console_font_;
    std::unique_ptr<engine::CBitFont> micro_font_;
    // The game's own fonts, which no role takes, by id; they take no OS text.
    std::map<std::string, std::unique_ptr<engine::CBitFont>, std::less<>> extra_fonts_;
    std::unique_ptr<engine::CWinFont> medium_win_font_;
    std::unique_ptr<engine::CWinFont> theme_win_font_;
    std::unique_ptr<engine::CWinFont> tiny_win_font_;
    std::unique_ptr<engine::CWinFont> debug_win_font_;
    // The same four at setOsFontScale's scale, in that order.
    std::array<std::unique_ptr<engine::CWinFont>, 4> scaled_win_fonts_;
};

} // namespace nocturne::core
