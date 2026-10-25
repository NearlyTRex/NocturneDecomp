// =============================================================================
// WINGDI — the GDI CWinFont draws its text with, on SDL_ttf
// =============================================================================
//
// CWinFont renders each string into a DIB section and copies every pixel that is
// not magenta onto the screen. So what matters is what lands in the section: it
// starts magenta, text is drawn hard-edged in the text colour, and an opaque
// background paints the cell first. Each case draws through the game's function
// pointers and reads the section's pixels back.

#include "globals/globals_610000.h"
#include "nocturne_test.h"
#include "system/wingdi.h"
#include "win32/shim_init.h"

// The test's own main(), which SDL would otherwise rename on Windows.
#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <cstdlib>
#include <cstring>
#include <string>

namespace {

const unsigned kMagenta32 = 0x00ff00ffu;
const int kOpaque = 2;
const int kTransparent = 1;

void set_env(const char *name, const char *value) {
#if defined(_WIN32)
    _putenv_s(name, value);
#else
    setenv(name, value, 1);
#endif
}

// The test font: an absolute path, or one beside the test executable.
std::string test_font() {
    std::string font = NOCTURNE_TEST_FONT;
    if (font.find('/') == std::string::npos && font.find('\\') == std::string::npos) {
        char *base = SDL_GetBasePath();
        if (base != nullptr) {
            font = std::string(base) + font;
            SDL_free(base);
        }
    }
    return font;
}

HFONT make_font(int height) {
    return g_CreateFontAFunc(height, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, "Courier New");
}

BITMAPINFO info(int width, int height, int bpp) {
    BITMAPINFO bmi;
    memset(&bmi, 0, sizeof(bmi));
    bmi.bmiHeader.biWidth = width;
    bmi.bmiHeader.biHeight = height;
    bmi.bmiHeader.biBitCount = (WORD)bpp;
    return bmi;
}

// A DC with a 32bpp section selected, its pixels, and the font if asked for.
struct Canvas {
    HDC dc;
    HBITMAP bitmap;
    unsigned *pixels = nullptr;
    int width;
    int height;

    Canvas(int w = 64, int h = 32) : width(w), height(h) {
        shims_init_wingdi();
        dc = g_CreateCompatibleDCFunc(nullptr);
        BITMAPINFO bmi = info(w, -h, 32);
        void *bits = nullptr;
        bitmap = g_CreateDIBSectionFunc(dc, &bmi, 0, &bits, nullptr, 0);
        pixels = (unsigned *)bits;
        g_SelectObjectFunc(dc, (HGDIOBJ)bitmap);
    }
    ~Canvas() {
        g_DeleteObjectFunc((HGDIOBJ)bitmap);
        g_DeleteDCFunc(dc);
    }

    unsigned at(int x, int y) const {
        return pixels[y * width + x] & 0x00ffffffu;
    }

    int count_not(unsigned colour) const {
        int n = 0;
        for (int i = 0; i < width * height; ++i)
            n += ((pixels[i] & 0x00ffffffu) != colour);
        return n;
    }
};

} // namespace

// -----------------------------------------------------------------------------
// Sections, brushes and rectangles
// -----------------------------------------------------------------------------

// A section starts as the key CWinFont skips, in whichever depth it is made at.
NOCTURNE_TEST(a_section_starts_as_the_transparency_key) {
    shims_init_wingdi();
    void *bits = nullptr;
    BITMAPINFO bmi = info(4, -2, 32);
    HBITMAP b32 = g_CreateDIBSectionFunc(nullptr, &bmi, 0, &bits, nullptr, 0);
    CHECK(b32 != nullptr);
    CHECK_EQ(((unsigned *)bits)[7] & 0x00ffffffu, kMagenta32);
    g_DeleteObjectFunc((HGDIOBJ)b32);

    bmi = info(4, 2, 16); // bottom-up is the same size
    HBITMAP b16 = g_CreateDIBSectionFunc(nullptr, &bmi, 0, &bits, nullptr, 0);
    CHECK_EQ((unsigned)((unsigned short *)bits)[0], 0x7c1fu);
    g_DeleteObjectFunc((HGDIOBJ)b16);

    bmi = info(4, 2, 24);
    HBITMAP b24 = g_CreateDIBSectionFunc(nullptr, &bmi, 0, &bits, nullptr, 0);
    const unsigned char *rgb = (const unsigned char *)bits;
    CHECK_EQ((int)rgb[0] + (int)rgb[1] + (int)rgb[2], 255 + 255);
    g_DeleteObjectFunc((HGDIOBJ)b24);

    // A depth the shim does not keep is made at 32.
    bmi = info(4, 2, 8);
    HBITMAP b8 = g_CreateDIBSectionFunc(nullptr, &bmi, 0, &bits, nullptr, 0);
    CHECK_EQ(((unsigned *)bits)[0] & 0x00ffffffu, kMagenta32);
    g_DeleteObjectFunc((HGDIOBJ)b8);

    // Asking for no pointer to the bits still makes the section.
    bmi = info(4, 2, 32);
    HBITMAP quiet = g_CreateDIBSectionFunc(nullptr, &bmi, 0, nullptr, nullptr, 0);
    CHECK(quiet != nullptr);
    g_DeleteObjectFunc((HGDIOBJ)quiet);
}

// No header, no area, or more than can be held is no section, and no bits.
NOCTURNE_TEST(a_section_that_cannot_be_made_is_none) {
    shims_init_wingdi();
    void *bits = (void *)&bits;
    CHECK(g_CreateDIBSectionFunc(nullptr, nullptr, 0, &bits, nullptr, 0) == nullptr);
    CHECK(bits == nullptr);
    CHECK(g_CreateDIBSectionFunc(nullptr, nullptr, 0, nullptr, nullptr, 0) == nullptr);

    BITMAPINFO bmi = info(0, 4, 32);
    bits = (void *)&bits;
    CHECK(g_CreateDIBSectionFunc(nullptr, &bmi, 0, &bits, nullptr, 0) == nullptr);
    CHECK(bits == nullptr);
    bmi = info(4, 0, 32);
    CHECK(g_CreateDIBSectionFunc(nullptr, &bmi, 0, nullptr, nullptr, 0) == nullptr);

    // A row wider than SDL can address.
    bmi = info(1 << 29, 1, 32);
    bits = (void *)&bits;
    CHECK(g_CreateDIBSectionFunc(nullptr, &bmi, 0, &bits, nullptr, 0) == nullptr);
    CHECK(bits == nullptr);
    CHECK(g_CreateDIBSectionFunc(nullptr, &bmi, 0, nullptr, nullptr, 0) == nullptr);
}

// A rectangle is filled with the selected brush, or the background colour
// without one; given corners in either order, it covers the same pixels, and the
// top-negative form CWinFont issues spans from the top.
NOCTURNE_TEST(a_rectangle_fills_with_the_brush_or_the_background) {
    Canvas canvas(8, 8);
    LOGBRUSH red;
    memset(&red, 0, sizeof(red));
    red.lbColor = 0x000000ff; // COLORREF is 0x00BBGGRR
    HBRUSH brush = g_CreateBrushIndirectFunc(&red);
    CHECK(g_SelectObjectFunc(canvas.dc, (HGDIOBJ)brush) == nullptr);
    CHECK_EQ(g_RectangleFunc(canvas.dc, 0, 0, 2, 2), 1);
    CHECK_EQ(canvas.at(1, 1), 0x00ff0000u);
    CHECK_EQ(canvas.at(2, 2), kMagenta32);

    g_RectangleFunc(canvas.dc, 6, 6, 4, 4); // corners swapped
    CHECK_EQ(canvas.at(4, 4), 0x00ff0000u);
    CHECK_EQ(canvas.at(6, 6), kMagenta32);

    // A brush made from no description is black.
    HBRUSH black = g_CreateBrushIndirectFunc(nullptr);
    CHECK(g_SelectObjectFunc(canvas.dc, (HGDIOBJ)black) == (HGDIOBJ)brush);
    g_RectangleFunc(canvas.dc, 7, 0, 8, 1);
    CHECK_EQ(canvas.at(7, 0), 0u);
    g_SelectObjectFunc(canvas.dc, (HGDIOBJ)brush);
    g_DeleteObjectFunc((HGDIOBJ)black);

    // The game's (0, -top, right, 0): rows from the top down to `bottom`.
    g_RectangleFunc(canvas.dc, 0, -3, 1, 3);
    CHECK_EQ(canvas.at(0, 2), 0x00ff0000u);
    CHECK_EQ(canvas.at(0, 3), kMagenta32);

    g_DeleteObjectFunc((HGDIOBJ)brush);
}

NOCTURNE_TEST(a_rectangle_needs_a_dc_with_a_section) {
    shims_init_wingdi();
    CHECK_EQ(g_RectangleFunc(nullptr, 0, 0, 1, 1), 1);
    HDC dc = g_CreateCompatibleDCFunc(nullptr);
    CHECK_EQ(g_RectangleFunc(dc, 0, 0, 1, 1), 1);
    HBRUSH brush = g_CreateBrushIndirectFunc(nullptr);
    CHECK_EQ(g_RectangleFunc((HDC)brush, 0, 0, 1, 1), 1);
    // The background colour is the DC's own, white to start.
    CHECK_EQ(g_SetBkColorFunc(dc, 0x00123456), (COLORREF)0x00ffffff);
    Canvas canvas(2, 2);
    g_SetBkColorFunc(canvas.dc, 0x00000000);
    g_RectangleFunc(canvas.dc, 0, 0, 1, 1);
    CHECK_EQ(canvas.at(0, 0), 0u);
    g_DeleteObjectFunc((HGDIOBJ)brush);
    g_DeleteDCFunc(dc);
}

// -----------------------------------------------------------------------------
// DC state and objects
// -----------------------------------------------------------------------------

// Each setter answers with what was set before; anything that is not a DC is
// answered with nothing.
NOCTURNE_TEST(dc_state_answers_with_what_it_was) {
    shims_init_wingdi();
    HDC dc = g_CreateCompatibleDCFunc(nullptr);
    CHECK_EQ(g_SetBkModeFunc(dc, kTransparent), kOpaque);
    CHECK_EQ(g_SetBkModeFunc(dc, kOpaque), kTransparent);
    CHECK_EQ(g_SetTextColorFunc(dc, 0x00ffffff), (COLORREF)0);
    CHECK_EQ(g_SetTextColorFunc(dc, 0), (COLORREF)0x00ffffff);
    CHECK_EQ(g_SetBkColorFunc(dc, 0), (COLORREF)0x00ffffff);

    HBRUSH not_a_dc = g_CreateBrushIndirectFunc(nullptr);
    CHECK_EQ(g_SetBkModeFunc(nullptr, 1), 0);
    CHECK_EQ(g_SetBkModeFunc((HDC)not_a_dc, 1), 0);
    CHECK_EQ(g_SetTextColorFunc(nullptr, 1), (COLORREF)0);
    CHECK_EQ(g_SetTextColorFunc((HDC)not_a_dc, 1), (COLORREF)0);
    CHECK_EQ(g_SetBkColorFunc(nullptr, 1), (COLORREF)0);
    CHECK_EQ(g_SetBkColorFunc((HDC)not_a_dc, 1), (COLORREF)0);
    CHECK(g_GetStockObjectFunc(0) == nullptr);
    g_DeleteObjectFunc((HGDIOBJ)not_a_dc);
    g_DeleteDCFunc(dc);
}

// Selecting an object answers with the last of its kind; nothing, or something
// that is not a GDI object of a kind a DC holds, changes nothing.
NOCTURNE_TEST(selecting_answers_with_the_last_of_the_same_kind) {
    Canvas canvas(4, 4);
    HFONT first = make_font(12);
    HFONT second = make_font(12);
    CHECK(g_SelectObjectFunc(canvas.dc, (HGDIOBJ)first) == nullptr);
    CHECK(g_SelectObjectFunc(canvas.dc, (HGDIOBJ)second) == (HGDIOBJ)first);
    HDC other = g_CreateCompatibleDCFunc(nullptr);
    CHECK(g_SelectObjectFunc(canvas.dc, (HGDIOBJ)other) == nullptr);
    CHECK(g_SelectObjectFunc(canvas.dc, nullptr) == nullptr);
    CHECK(g_SelectObjectFunc(nullptr, (HGDIOBJ)first) == nullptr);
    CHECK(g_SelectObjectFunc((HDC)first, (HGDIOBJ)second) == nullptr);

    BITMAPINFO bmi = info(2, 2, 32);
    HBITMAP fresh = g_CreateDIBSectionFunc(nullptr, &bmi, 0, nullptr, nullptr, 0);
    CHECK(g_SelectObjectFunc(canvas.dc, (HGDIOBJ)fresh) == (HGDIOBJ)canvas.bitmap);
    g_SelectObjectFunc(canvas.dc, (HGDIOBJ)canvas.bitmap);
    g_DeleteObjectFunc((HGDIOBJ)fresh);

    // Deleting is by kind; a DC is not deleted as an object, and nothing is
    // nothing to delete.
    CHECK_EQ(g_DeleteObjectFunc((HGDIOBJ)other), 1);
    CHECK_EQ(g_DeleteObjectFunc(nullptr), 1);
    CHECK_EQ(g_DeleteDCFunc(other), 1);
    CHECK_EQ(g_DeleteDCFunc(nullptr), 1);
    CHECK_EQ(g_DeleteDCFunc((HDC)first), 1);
    g_DeleteObjectFunc((HGDIOBJ)first);
    g_DeleteObjectFunc((HGDIOBJ)second);
}

// -----------------------------------------------------------------------------
// Fonts and text
// -----------------------------------------------------------------------------

// The font is the first on the path that opens. Empty entries are skipped and
// a path with none that opens is a font with no glyphs, which draws nothing.
NOCTURNE_TEST(the_font_is_the_first_on_the_path_that_opens) {
    const std::string font = test_font();
#if defined(_WIN32)
    const std::string separator = ";";
#else
    const std::string separator = ":";
#endif
    set_env("NOCTURNE_OS_FONT_PATH",
            (separator + "missing.ttf" + separator + separator + font).c_str());
    Canvas canvas;
    HFONT found = make_font(-14);
    g_SelectObjectFunc(canvas.dc, (HGDIOBJ)found);
    g_SetBkModeFunc(canvas.dc, kTransparent);
    CHECK_EQ(g_TextOutAFunc(canvas.dc, 0, 0, "Hi", 2), 1);
    CHECK(canvas.count_not(kMagenta32) > 0);

    set_env("NOCTURNE_OS_FONT_PATH", "missing.ttf");
    Canvas blank;
    HFONT none = make_font(0);
    g_SelectObjectFunc(blank.dc, (HGDIOBJ)none);
    CHECK_EQ(g_TextOutAFunc(blank.dc, 0, 0, "Hi", 2), 1);
    CHECK_EQ(blank.count_not(kMagenta32), 0);
    tagSIZE size;
    CHECK(g_GetTextExtentPoint32A(blank.dc, "Hi", 2, &size));
    CHECK_EQ(size.cx, 16L);
    CHECK_EQ(size.cy, 16L);

    // Unset, the host's own list is searched; whatever it finds, a font comes back.
    set_env("NOCTURNE_OS_FONT_PATH", "");
    HFONT host = g_CreateFontAFunc(12, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, nullptr);
    CHECK(host != nullptr);
    g_DeleteObjectFunc((HGDIOBJ)host);
    g_DeleteObjectFunc((HGDIOBJ)found);
    g_DeleteObjectFunc((HGDIOBJ)none);
}

// Opaque, each string clears its cell to the background first, so strings drawn
// in one place do not pile up; transparent, they do.
NOCTURNE_TEST(an_opaque_string_paints_its_cell_and_a_transparent_one_does_not) {
    set_env("NOCTURNE_OS_FONT_PATH", test_font().c_str());
    Canvas canvas;
    HFONT font = make_font(16);
    g_SelectObjectFunc(canvas.dc, (HGDIOBJ)font);
    g_SetTextColorFunc(canvas.dc, 0x00ffffff);
    g_SetBkColorFunc(canvas.dc, 0x00000000);
    CHECK_EQ(g_TextOutAFunc(canvas.dc, 0, 0, "W", 1), 1);
    CHECK_EQ(canvas.at(0, 0), 0u);           // the cell, black
    CHECK_EQ(canvas.at(60, 30), kMagenta32); // outside it, the key

    g_SetBkModeFunc(canvas.dc, kTransparent);
    for (int i = 0; i < canvas.width * canvas.height; ++i)
        canvas.pixels[i] = kMagenta32;
    g_TextOutAFunc(canvas.dc, 0, 0, "W", 1);
    CHECK_EQ(canvas.at(0, 0), kMagenta32);
    // Hard-edged: every pixel is the key or the text colour, nothing between.
    int other = 0;
    for (int i = 0; i < canvas.width * canvas.height; ++i) {
        const unsigned p = canvas.pixels[i] & 0x00ffffffu;
        other += (p != kMagenta32 && p != 0x00ffffffu);
    }
    CHECK_EQ(other, 0);
    g_DeleteObjectFunc((HGDIOBJ)font);
}

// CP1252, not Latin-1: the menu's trademark sign is 0x99, which Latin-1 leaves a
// control code.
NOCTURNE_TEST(text_is_measured_and_drawn_as_cp1252) {
    set_env("NOCTURNE_OS_FONT_PATH", test_font().c_str());
    Canvas canvas;
    HFONT font = make_font(16);
    g_SelectObjectFunc(canvas.dc, (HGDIOBJ)font);
    tagSIZE trademark;
    CHECK(g_GetTextExtentPoint32A(canvas.dc, "\x99", 1, &trademark));
    CHECK(trademark.cx > 0);
    tagSIZE accented, plain;
    g_GetTextExtentPoint32A(canvas.dc, "\xE9", 1, &accented);
    g_GetTextExtentPoint32A(canvas.dc, "e", 1, &plain);
    CHECK(accented.cx > 0);
    CHECK(plain.cx > 0);
    // Only the count given, up to a terminator.
    tagSIZE one, two;
    g_GetTextExtentPoint32A(canvas.dc, "ee", 1, &one);
    g_GetTextExtentPoint32A(canvas.dc, "ee", 2, &two);
    CHECK(two.cx > one.cx);
    CHECK(g_TextOutAFunc(canvas.dc, 0, 0, "\x99\xE9", 2));
    g_DeleteObjectFunc((HGDIOBJ)font);
}

// Nothing to draw, nowhere to draw it, or no font: success, and nothing drawn.
NOCTURNE_TEST(text_with_nothing_to_draw_draws_nothing) {
    set_env("NOCTURNE_OS_FONT_PATH", test_font().c_str());
    Canvas canvas;
    CHECK_EQ(g_TextOutAFunc(canvas.dc, 0, 0, "x", 1), 1); // no font yet
    tagSIZE unfonted;
    CHECK(g_GetTextExtentPoint32A(canvas.dc, "xy", 2, &unfonted));
    CHECK_EQ(unfonted.cx, 16L);
    HFONT font = make_font(16);
    g_SelectObjectFunc(canvas.dc, (HGDIOBJ)font);
    CHECK_EQ(g_TextOutAFunc(canvas.dc, 0, 0, nullptr, 1), 1);
    CHECK_EQ(g_TextOutAFunc(canvas.dc, 0, 0, "x", 0), 1);
    CHECK_EQ(g_TextOutAFunc(canvas.dc, 0, 0, "\0x", 2), 1);
    CHECK_EQ(canvas.count_not(kMagenta32), 0);
    CHECK_EQ(g_TextOutAFunc(nullptr, 0, 0, "x", 1), 0);
    CHECK_EQ(g_TextOutAFunc((HDC)font, 0, 0, "x", 1), 0);

    HDC bare = g_CreateCompatibleDCFunc(nullptr);
    g_SelectObjectFunc(bare, (HGDIOBJ)font);
    CHECK_EQ(g_TextOutAFunc(bare, 0, 0, "x", 1), 1); // no section

    tagSIZE size;
    CHECK(!g_GetTextExtentPoint32A(canvas.dc, "x", 1, nullptr));
    CHECK(g_GetTextExtentPoint32A(nullptr, "x", 1, &size));
    CHECK_EQ(size.cx, 8L);
    CHECK(g_GetTextExtentPoint32A((HDC)font, "x", 1, &size));
    CHECK(g_GetTextExtentPoint32A(canvas.dc, nullptr, 1, &size));
    CHECK_EQ(size.cx, 8L);
    g_DeleteDCFunc(bare);
    g_DeleteObjectFunc((HGDIOBJ)font);
}

NOCTURNE_TEST_MAIN()
