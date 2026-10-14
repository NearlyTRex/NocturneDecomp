#pragma once

#include "engine/fwd.h"
#include "platform/fwd.h"
#include "shape/fwd.h"
#include "support/fwd.h"

#include <cstdint>
#include <memory>

namespace nocturne::core {

// Which text the fonts draw, as the enhanced game's Graphics Options offers it; the values are
// frozen, as nocturne.ini's osFont. Auto leaves it to the message file, which a localisation
// whose glyphs the sheets lack uses to ask for OS fonts.
enum class EOsFontChoice : std::uint8_t {
    Auto,
    Bitmap,
    System,
};

// The game's fonts: six from glyph sheets, and four OS fonts that draw for them when the game
// uses OS text.
class CDFont {
public:
    CDFont(const engine::CDosIo &dosio, engine::IScreenDevice &screen, const engine::C2d &two_d,
           const engine::C3d &three_d, const engine::CFontColors &colors,
           platform::IOsFontFactory &os_fonts, const support::CNewMsg &messages,
           shape::CEditorTools &editor_tools);
    CDFont(const CDFont &) = delete;
    CDFont &operator=(const CDFont &) = delete;
    CDFont(CDFont &&) = delete;
    CDFont &operator=(CDFont &&) = delete;
    ~CDFont();

    // Loads the sheets for the current depth, and makes the dialogs use the small editor font.
    void initFonts();
    void freeFonts();

    [[nodiscard]] EOsFontChoice getOsFontChoice() const;
    // Takes effect at the next initFonts.
    void setOsFontChoice(EOsFontChoice choice);
    // Whether initFonts gave the fonts OS text.
    [[nodiscard]] bool getUseOSFonts() const;

    [[nodiscard]] engine::CBitFont *getMediumFont() const;
    [[nodiscard]] engine::CBitFont *getTinyFont() const;
    [[nodiscard]] engine::CBitFont *getThemeFont() const;
    [[nodiscard]] engine::CBitFont *getSmallEditorFont() const;
    [[nodiscard]] engine::CBitFont *getConsoleFont() const;
    [[nodiscard]] engine::CBitFont *getMicroFont() const;

private:
    [[nodiscard]] std::unique_ptr<engine::CBitFont> loadFont(const char *filename, int width,
                                                             int height, int load_flags) const;
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
    EOsFontChoice os_font_choice_ = EOsFontChoice::Auto;
    bool use_os_fonts_ = false;
    std::unique_ptr<engine::CBitFont> medium_font_;
    std::unique_ptr<engine::CBitFont> tiny_font_;
    std::unique_ptr<engine::CBitFont> theme_font_;
    std::unique_ptr<engine::CBitFont> small_editor_font_;
    std::unique_ptr<engine::CBitFont> console_font_;
    std::unique_ptr<engine::CBitFont> micro_font_;
    std::unique_ptr<engine::CWinFont> medium_win_font_;
    std::unique_ptr<engine::CWinFont> theme_win_font_;
    std::unique_ptr<engine::CWinFont> tiny_win_font_;
    std::unique_ptr<engine::CWinFont> debug_win_font_;
};

} // namespace nocturne::core
