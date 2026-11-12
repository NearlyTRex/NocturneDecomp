// =============================================================================
// OS FONT SCALE — the OS fonts made again at the text's scale
// =============================================================================
//
// Which fonts are made, at what height, and when they are made again; and the
// text routines drawing and measuring through them.

#include "core/os_font_scale.h"
#include "core/ui_scale.h"
#include "nocturne.h"
#include "nocturne_test.h"
#include "ui_support.h"

#include <memory>
#include <string>

namespace {

using ui_support::stand;

// A bit font drawing through `os_font`, its lines 10 and 2 apart.
std::unique_ptr<CBitFont> os_font_user(CWinFont *os_font) {
    std::unique_ptr<CBitFont> font(new CBitFont());
    font->win_font_enabled = 1;
    font->win_font_helper = os_font;
    font->current_line_height = 10;
    font->line_spacing = 2;
    return font;
}

} // namespace

// Only one of the four initFonts makes, asked for at a scale other than 1, is
// made again; at its height and offsets times the scale, once for each scale
// and OS font it is asked for.
NOCTURNE_TEST(an_os_font_is_made_again_at_the_scale) {
    stand.reset();
    CWinFont medium = {};
    CWinFont theme = {};
    CWinFont other = {};
    g_MediumWinFont = &medium;
    g_ThemeWinFont = &theme;
    std::unique_ptr<CBitFont> font = os_font_user(&theme);
    CHECK(nocturne_os_font_scaled(nullptr, 2.0f) == nullptr);
    font->win_font_enabled = 0;
    CHECK(nocturne_os_font_scaled(font.get(), 2.0f) == nullptr);
    font->win_font_enabled = 1;
    font->win_font_helper = nullptr;
    CHECK(nocturne_os_font_scaled(font.get(), 2.0f) == nullptr);
    font->win_font_helper = &theme;
    CHECK(nocturne_os_font_scaled(font.get(), 1.0005f) == nullptr);
    font->win_font_helper = &other;
    CHECK(nocturne_os_font_scaled(font.get(), 2.0f) == nullptr);
    CHECK_EQ(stand.os_fonts.size(), (size_t)0);

    font->win_font_helper = &theme;
    CWinFont *made = nocturne_os_font_scaled(font.get(), 2.0f);
    CHECK(made != nullptr);
    CHECK(nocturne_os_font_scaled(font.get(), 2.0f) == made);
    CHECK_EQ(stand.os_fonts.size(), (size_t)1);
    CHECK_EQ(stand.os_fonts[0], std::string("36 0 0"));

    CHECK(nocturne_os_font_scaled(font.get(), 1.5f) == made);
    CHECK_EQ(stand.os_fonts.back(), std::string("27 0 0"));
    CHECK_EQ(stand.os_fonts_freed, 1);

    // initFonts again: another theme font, and the scaled one made from it.
    g_ThemeWinFont = &other;
    font->win_font_helper = &other;
    nocturne_os_font_scaled(font.get(), 1.5f);
    CHECK_EQ(stand.os_fonts.size(), (size_t)3);
    CHECK_EQ(stand.os_fonts_freed, 2);

    font->win_font_helper = &medium;
    nocturne_os_font_scaled(font.get(), 2.25f);
    CHECK_EQ(stand.os_fonts.back(), std::string("32 5 5"));
    g_MediumWinFont = nullptr;
    g_ThemeWinFont = nullptr;
}

// Text drawn at a scale goes through the font made at it a line at a time,
// the lines the bit font's apart at that scale, and is measured through it;
// the bit font's own OS font is put back after. At 1 it is drawn whole
// through its own.
NOCTURNE_TEST(text_is_drawn_and_measured_through_the_scaled_font) {
    ui_support::screen(64, 64, 32);
    stand.reset();
    CWinFont medium = {};
    medium.cached_string_height = 14;
    g_MediumWinFont = &medium;
    std::unique_ptr<CBitFont> font = os_font_user(&medium);
    char text[] = "ab\ncd";

    nocturne_ui_draw_text_f(font.get(), text, 10, 20, 7, 0, 2.0f);
    CHECK_EQ(stand.os_drawn.size(), (size_t)2);
    CHECK_EQ(stand.os_drawn[0], std::string("ab 10 20 28"));
    CHECK_EQ(stand.os_drawn[1], std::string("cd 10 44 28"));
    CHECK(font->win_font_helper == &medium);
    CHECK_EQ(std::string(text), std::string("ab\ncd"));
    char abc[] = "abc";
    CHECK_EQ(nocturne_ui_text_width_f(font.get(), abc, 2.0f), 84);
    CHECK_EQ(nocturne_ui_char_height_f(font.get(), 'X', 2.0f), 20);

    stand.os_drawn.clear();
    nocturne_ui_draw_text_f(font.get(), text, 10, 20, 7, 0, 1.0f);
    CHECK_EQ(stand.os_drawn.size(), (size_t)1);
    CHECK_EQ(stand.os_drawn[0], std::string("ab\ncd 10 20 14"));
    CHECK_EQ(nocturne_ui_char_height_f(font.get(), 'X', 1.0f), 10);

    // The whole-number routines, at 2 and unscaled.
    char ab[] = "ab";
    stand.os_drawn.clear();
    nocturne_ui_draw_text(font.get(), ab, 0, 0, 7, 0, 2);
    CHECK_EQ(stand.os_drawn[0], std::string("ab 0 0 28"));
    CHECK_EQ(nocturne_ui_text_width(font.get(), abc, 2), 84);
    CHECK_EQ(nocturne_ui_text_width(font.get(), abc, 1), 42);
    CHECK_EQ(nocturne_ui_text_height(font.get(), abc, 2), 20);
    CHECK_EQ(nocturne_ui_text_height(font.get(), abc, 1), 10);
    CHECK_EQ(nocturne_ui_char_height(font.get(), 'X', 2), 20);

    // Wrapped, it is measured as drawn, so the box is not shrunk to the scale.
    char lines[4][32];
    int pitch = 0;
    nocturne_ui_wrap_to_width_f(font.get(), text, &lines[0][0], 4, 32, 99, 2.0f, &pitch);
    CHECK_EQ(stand.wrap_width, 99);
    CHECK_EQ(pitch, 20);
    CHECK(font->win_font_helper == &medium);
    g_MediumWinFont = nullptr;
}

NOCTURNE_TEST_MAIN()
