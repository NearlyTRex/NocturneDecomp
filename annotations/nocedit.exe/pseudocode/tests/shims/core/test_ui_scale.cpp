// =============================================================================
// UI SCALE — the HUD drawn for 480 lines, scaled to the window
// =============================================================================
//
// The scale itself; alpha bitmaps and bitmap-font glyphs drawn at it, each
// source pixel a square of the framebuffer, clipped as the engine clips; and a
// small stack of clip rectangles for a box to draw inside.

#include "core/ui_scale.h"
#include "nocturne.h"
#include "nocturne_test.h"
#include "ui_support.h"

#include <cstring>
#include <memory>

namespace {

using ui_support::stand;

// A 2 x 2 alpha bitmap, raw indices 1..4.
struct Bitmap {
    char raw[4] = {1, 2, 3, 4};
    char opa[4] = {9, 9, 9, 9};
    CAlphaBitmap bmp = {};
    Bitmap(int width = 2, int height = 2) {
        bmp.raw = raw;
        bmp.opa = opa;
        bmp.width = width;
        bmp.height = height;
    }
};

// A font whose glyph 'A' is 2 x 2 — index 1 and the transparent 0 on top, 0
// and 2 below — in bitmap 0, two pixels wide, and 'B' has no glyph.
struct Font {
    std::unique_ptr<CBitFont> font{new CBitFont()};
    unsigned char glyph[4] = {1, 0, 0, 2};
    Font() {
        CBitFont &f = *font;
        f.char_positions['A'] = glyph;
        f.char_widths['A'] = 2;
        f.char_heights['A'] = 2;
        f.char_widths['B'] = 3;
        f.char_spacing = 1;
        f.bitmap_widths[0] = 2;
        f.load_flags = 0;
        f.palettes_display[0][1] = 0x111111;
        f.palettes_display[0][2] = 0x222222;
        f.palette_data[1 * 3] = (char)0x80;
        f.palette_data[2 * 3] = 0;
        f.current_line_height = 4;
        f.line_spacing = 1;
    }
    CBitFont *operator->() {
        return font.get();
    }
    CBitFont *get() {
        return font.get();
    }
};

int draw(Font &font, const char *text, int x, int y, int mode, int value, int scale) {
    char copy[64];
    std::strcpy(copy, text);
    return nocturne_ui_draw_text(font.get(), copy, x, y, mode, value, scale);
}

} // namespace

// Rounded to the nearest whole multiple of 480, between one and four; the
// goggles' to 320 x 240, up to eight.
NOCTURNE_TEST(the_scale_is_the_nearest_whole_multiple) {
    ui_support::screen(640, 480, 32);
    CHECK_EQ(nocturne_ui_scale(), 1);
    g_WindowHeight = 720;
    CHECK_EQ(nocturne_ui_scale(), 2);
    g_WindowHeight = 0;
    CHECK_EQ(nocturne_ui_scale(), 1);
    g_WindowHeight = 100;
    CHECK_EQ(nocturne_ui_scale(), 1);
    g_WindowHeight = 5000;
    CHECK_EQ(nocturne_ui_scale(), 4);
    g_WindowWidth = 1920;
    g_WindowHeight = 1080;
    CHECK_EQ(nocturne_ui_goggles_scale_x(), 6);
    CHECK_EQ(nocturne_ui_goggles_scale_y(), 5);
}

// Text scales at 16 and 32 bits only, and the editor's widgets follow it.
NOCTURNE_TEST(the_editor_scales_only_where_its_text_can) {
    ui_support::screen(640, 960, 8);
    stand.reset();
    CHECK_EQ(nocturne_ui_text_scale_supported(), 0);
    CHECK_EQ(nocturne_ui_editor_scale(), 1);
    g_BitsPerPixel = 16;
    CHECK_EQ(nocturne_ui_text_scale_supported(), 1);
    g_BitsPerPixel = 32;
    CHECK_EQ(nocturne_ui_editor_scale(), 2);

    g_EditorFont = nullptr;
    nocturne_ui_editor_metrics();
    Font font;
    font->max_char_width = 6;
    g_EditorFont = font.get();
    nocturne_ui_editor_metrics();
    CHECK_EQ(g_EditorFontMaxCharWidth, 12);
    CHECK_EQ(g_EditorFontLineHeight, 20);
    g_EditorFont = nullptr;
}

// At one, or too wide to build a row for, a bitmap is the engine's own;
// otherwise each pixel is a square, through the engine's row blender.
NOCTURNE_TEST(an_alpha_bitmap_is_drawn_a_square_a_pixel) {
    ui_support::screen(64, 64, 32);
    stand.reset();
    Bitmap bitmap;
    nocturne_ui_blit_alpha(nullptr, 0, 0, 255, 2);
    nocturne_ui_blit_alpha(&bitmap.bmp, 0, 0, 255, 1);
    Bitmap wide(4000, 1);
    nocturne_ui_blit_alpha(&wide.bmp, 0, 0, 255, 2);
    CHECK_EQ(stand.displayed.size(), (size_t)2);

    nocturne_ui_blit_alpha(&bitmap.bmp, 10, 20, 200, 3);
    CHECK_EQ(stand.palettes, 1);
    CHECK_EQ(stand.rows32.size(), (size_t)6);
    CHECK(stand.rows32[0].dest == (unsigned *)g_ScreenBufferArray[20] + 10);
    CHECK_EQ(stand.rows32[0].count, 6);
    CHECK_EQ(stand.rows32[0].alpha, 200);
    CHECK_EQ(stand.rows32[3].first, 3u);

    // At 16 bits through its own blender; a missing line is passed over.
    g_BitsPerPixel = 16;
    g_ScreenBufferArray[21] = nullptr;
    nocturne_ui_blit_alpha(&bitmap.bmp, 10, 20, 200, 2);
    CHECK_EQ(stand.rows16.size(), (size_t)3);
}

// Clipped at the window's edges; wholly outside it, or empty, not drawn.
NOCTURNE_TEST(an_alpha_bitmap_is_clipped_to_the_window) {
    ui_support::screen(64, 64, 32);
    stand.reset();
    Bitmap bitmap;
    nocturne_ui_blit_alpha(&bitmap.bmp, -2, -2, 255, 2);
    CHECK_EQ(stand.rows32.size(), (size_t)2); // rows -2 and -1 are off
    CHECK(stand.rows32[0].dest == g_ScreenBufferArray[0]);
    CHECK_EQ(stand.rows32[0].count, 2);
    stand.rows32.clear();
    nocturne_ui_blit_alpha(&bitmap.bmp, 62, 62, 255, 2);
    CHECK_EQ(stand.rows32.size(), (size_t)2);
    CHECK_EQ(stand.rows32[0].count, 2);

    stand.rows32.clear();
    nocturne_ui_blit_alpha(&bitmap.bmp, -4, 0, 255, 2); // touches the edge only
    nocturne_ui_blit_alpha(&bitmap.bmp, -5, 0, 255, 2);
    nocturne_ui_blit_alpha(&bitmap.bmp, 64, 0, 255, 2);
    nocturne_ui_blit_alpha(&bitmap.bmp, 0, -5, 255, 2);
    nocturne_ui_blit_alpha(&bitmap.bmp, 0, 64, 255, 2);
    Bitmap empty(0, 2);
    nocturne_ui_blit_alpha(&empty.bmp, 0, 0, 255, 2);
    Bitmap flat(2, 0);
    nocturne_ui_blit_alpha(&flat.bmp, 0, 0, 255, 2);
    CHECK(stand.rows32.empty());
}

// A part of a bitmap the same way, kept inside the bitmap at scale.
NOCTURNE_TEST(part_of_an_alpha_bitmap_stays_inside_it) {
    ui_support::screen(64, 64, 32);
    stand.reset();
    Bitmap bitmap;
    nocturne_ui_blit_alpha_rect(nullptr, 0, 0, 0, 0, 1, 1, 255, 2);
    nocturne_ui_blit_alpha_rect(&bitmap.bmp, 0, 0, 0, 0, 1, 1, 255, 1);
    nocturne_ui_blit_alpha_rect(&bitmap.bmp, 0, 0, 0, 0, 3000, 0, 255, 2);
    CHECK_EQ(stand.displayed.size(), (size_t)2);

    nocturne_ui_blit_alpha_rect(&bitmap.bmp, 0, 0, 1, 1, 1, 1, 255, 2);
    CHECK_EQ(stand.rows32.size(), (size_t)2);
    CHECK_EQ(stand.rows32[0].first, 4u);
    nocturne_ui_blit_alpha_rect(&bitmap.bmp, 0, 0, -1, 0, 0, 0, 255, 2);
    nocturne_ui_blit_alpha_rect(&bitmap.bmp, 0, 0, 0, -1, 0, 0, 255, 2);
    nocturne_ui_blit_alpha_rect(&bitmap.bmp, 0, 0, 1, 0, 2, 0, 255, 2);
    nocturne_ui_blit_alpha_rect(&bitmap.bmp, 0, 0, 0, 1, 0, 2, 255, 2);
    CHECK_EQ(stand.rows32.size(), (size_t)2);
}

// Unscaled, at 8 bits, or with an OS font, text is the engine's; otherwise it
// is drawn here a glyph at a time, newlines and all.
NOCTURNE_TEST(text_is_drawn_here_only_when_it_can_be_scaled) {
    ui_support::screen(64, 64, 32);
    stand.reset();
    Font font;
    char text[] = "AB";
    CHECK_EQ(nocturne_ui_draw_text(nullptr, text, 0, 0, 0, -1, 2), 0);
    CHECK_EQ(nocturne_ui_draw_text(font.get(), nullptr, 0, 0, 0, -1, 2), 0);
    draw(font, "AB", 0, 0, 0, -1, 1);
    font->win_font_enabled = 1;
    draw(font, "AB", 0, 0, 0, -1, 2);
    font->win_font_enabled = 0;
    g_BitsPerPixel = 8;
    draw(font, "AB", 0, 0, 0, -1, 2);
    CHECK_EQ(stand.drawn.size(), (size_t)3);

    g_BitsPerPixel = 32;
    CHECK_EQ(draw(font, "A\rB", 0, 0, -1, -1, 2), (3 + 4) * 2);
    CHECK_EQ(draw(font, "B\nB", 5, 0, -1, -1, 2), 8);
}

// The keyed copy, with the font's palette or one colour, a square a pixel; the
// glyph's transparent index is left alone.
NOCTURNE_TEST(an_unblended_glyph_is_copied_keyed) {
    ui_support::screen(64, 64, 32);
    Font font;
    draw(font, "A", 0, 0, -1, -1, 2);
    CHECK_EQ(ui_support::pixel32(0, 0), 0x111111u);
    CHECK_EQ(ui_support::pixel32(1, 1), 0x111111u);
    CHECK_EQ(ui_support::pixel32(2, 0), 0u);
    CHECK_EQ(ui_support::pixel32(2, 2), 0x222222u);

    g_ColorTable32[7] = 0x070707;
    g_ShadowColor32 = 0x0a0a0a;
    g_DefaultTextColor = 0x0b0b0b;
    draw(font, "A", 10, 0, 7, -1, 2);
    CHECK_EQ(ui_support::pixel32(10, 0), 0x070707u);
    draw(font, "A", 20, 0, -2, -1, 2);
    CHECK_EQ(ui_support::pixel32(20, 0), 0x0a0a0au);
    draw(font, "A", 30, 0, -3, -1, 2);
    CHECK_EQ(ui_support::pixel32(30, 0), 0x0b0b0bu);

    // A shadow first, in its own colour, at the font's offset; the glyph lands
    // on top of it.
    font->shadow_offset_x = 1;
    font->shadow_offset_y = 1;
    draw(font, "A", 40, 40, 7, -2, 2);
    CHECK_EQ(ui_support::pixel32(42, 42), 0x070707u);
    CHECK_EQ(ui_support::pixel32(44, 44), 0x0a0a0au);

    ui_support::screen(64, 64, 16);
    g_ColorTable16[7] = 0x0707;
    g_ShadowColor16 = 0x0a0a;
    draw(font, "A", 0, 0, -1, -1, 2);
    CHECK_EQ(ui_support::pixel16(0, 0), 0x1111u);
    CHECK_EQ(ui_support::pixel16(2, 0), 0u);
    draw(font, "A", 10, 0, 7, -1, 2);
    CHECK_EQ(ui_support::pixel16(10, 0), 0x0707u);
    draw(font, "A", 20, 0, -2, -1, 2);
    CHECK_EQ(ui_support::pixel16(20, 0), 0x0a0au);
    draw(font, "A", 30, 0, -3, -1, 2);
}

// With its palette loaded the glyph blends: at 32 bits through the engine's
// row blender, at 16 per pixel by the font's coverage, none where it has none.
NOCTURNE_TEST(a_blended_glyph_mixes_with_the_frame) {
    ui_support::screen(64, 64, 32);
    stand.reset();
    Font font;
    font->is_initialized = 1;
    draw(font, "A", 0, 0, -1, -1, 2);
    CHECK_EQ(stand.blended.size(), (size_t)4);
    CHECK_EQ(stand.blended[0].first, 0x111111u);
    draw(font, "A", 0, 0, 7, -1, 2);
    CHECK_EQ(stand.blended[4].first, g_ColorTable32[7]);

    ui_support::screen(64, 64, 16);
    g_GreenMask16.u32[0] = 0x07e0;
    g_GreenBitPosition.bytes[0] = 5;
    g_GreenDitherShift.bytes[0] = 2;
    g_RedMask16.u32[0] = 0xf800;
    g_RedBitPosition.bytes[0] = 11;
    g_RedDitherShift.bytes[0] = 3;
    g_BlueMask16.u32[0] = 0x001f;
    g_BlueBitPosition.bytes[0] = 0;
    g_BlueDitherShift.bytes[0] = 3;
    g_GreenScaleFactor = 4;
    g_RedScaleFactor = 8;
    g_BlueScaleFactor = 8;
    g_CurrentAlphaValue = 256;
    font->palettes_display[0][1] = 0xffff;
    draw(font, "A", 0, 0, -1, -1, 2);
    CHECK(ui_support::pixel16(0, 0) != 0u);
    CHECK_EQ(ui_support::pixel16(2, 2), 0u); // index 2 has no coverage
    g_ColorTable16[7] = 0xffff;
    draw(font, "A", 10, 0, 7, -1, 2);
    CHECK(ui_support::pixel16(10, 0) != 0u);
}

// A glyph is cut by the clip on each side, and by the window; a row with no
// line behind it, or a glyph with nothing to draw, is passed over.
NOCTURNE_TEST(a_glyph_is_clipped) {
    ui_support::screen(64, 64, 32);
    Font font;
    g_ClipLeft = 1;
    g_ClipTop = 1;
    g_ClipRight = 2;
    g_ClipBottom = 2;
    draw(font, "A", 0, 0, -1, -1, 2);
    CHECK_EQ(ui_support::pixel32(0, 0), 0u);
    CHECK_EQ(ui_support::pixel32(1, 1), 0x111111u);
    CHECK_EQ(ui_support::pixel32(3, 3), 0u);
    draw(font, "A", 10, 1, -1, -1, 2); // right of the clip
    CHECK_EQ(ui_support::pixel32(10, 1), 0u);

    // A clip larger than the window still stops at the window.
    g_ClipLeft = -100;
    g_ClipTop = -100;
    g_ClipRight = 1000;
    g_ClipBottom = 1000;
    draw(font, "A", 0, -2, -1, -1, 2);
    draw(font, "A", 0, 63, -1, -1, 2);
    CHECK_EQ(ui_support::pixel32(0, 63), 0x111111u);
    g_ScreenBufferArray[5] = nullptr;
    draw(font, "A", 20, 5, -1, -1, 2);
    CHECK_EQ(ui_support::pixel32(20, 6), 0x111111u);

    // A glyph with no size, or too wide to build a row for, only advances.
    font->char_heights['A'] = 0;
    CHECK_EQ(draw(font, "A", 0, 0, -1, -1, 2), 6);
    font->char_heights['A'] = 2;
    font->char_widths['A'] = 0;
    CHECK_EQ(draw(font, "A", 0, 0, -1, -1, 2), 2);
    font->char_widths['A'] = 3000;
    CHECK_EQ(draw(font, "A", 0, 0, -1, -1, 2), 6002);
}

// A box's ratio as a whole scale: never a reduction, never past four, one
// where text cannot scale.
NOCTURNE_TEST(a_box_scale_is_a_whole_ratio) {
    ui_support::screen(64, 64, 32);
    CHECK_EQ(nocturne_ui_box_scale(3, 1), 3);
    CHECK_EQ(nocturne_ui_box_scale(1, 3), 1);
    CHECK_EQ(nocturne_ui_box_scale(20, 1), 4);
    CHECK_EQ(nocturne_ui_box_scale(0, 1), 1);
    CHECK_EQ(nocturne_ui_box_scale(1, 0), 1);
    g_BitsPerPixel = 8;
    CHECK_EQ(nocturne_ui_box_scale(3, 1), 1);
}

// Wrapping measures the box in unscaled glyphs, and the line pitch is scaled.
NOCTURNE_TEST(wrapping_measures_the_box_unscaled) {
    ui_support::screen(64, 64, 32);
    stand.reset();
    Font font;
    char text[] = "words";
    char lines[4][32];
    int pitch = 0;
    CHECK_EQ(nocturne_ui_wrap_to_width(font.get(), text, &lines[0][0], 4, 32, 100, 2, &pitch), 2);
    CHECK_EQ(stand.wrap_width, 50);
    CHECK_EQ(pitch, 20);
    nocturne_ui_wrap_to_width(font.get(), text, &lines[0][0], 4, 32, 100, 0, nullptr);
    CHECK_EQ(stand.wrap_width, 100);
}

// Metrics follow the text: scaled where it is.
NOCTURNE_TEST(the_metrics_follow_the_text) {
    ui_support::screen(64, 64, 32);
    stand.reset();
    Font font;
    char text[] = "abc";
    CHECK_EQ(nocturne_ui_text_width(font.get(), text, 2), 48);
    CHECK_EQ(nocturne_ui_text_width(font.get(), text, 1), 24);
    CHECK_EQ(nocturne_ui_text_height(font.get(), text, 3), 30);
    CHECK_EQ(nocturne_ui_text_height(font.get(), text, 1), 10);
    CHECK_EQ(nocturne_ui_char_height(font.get(), 'X', 2), 20);
    CHECK_EQ(nocturne_ui_char_height(font.get(), 'X', 1), 10);
    g_BitsPerPixel = 8;
    CHECK_EQ(nocturne_ui_text_width(font.get(), text, 2), 24);
    CHECK_EQ(nocturne_ui_text_height(font.get(), text, 2), 10);
    CHECK_EQ(nocturne_ui_char_height(font.get(), 'X', 2), 10);
}

// A pushed clip can only narrow; popping puts back what was there; the stack
// holds four, and a pop with nothing pushed does nothing.
NOCTURNE_TEST(clip_rectangles_nest) {
    ui_support::screen(64, 64, 32);
    nocturne_ui_pop_clip();
    CHECK_EQ(g_ClipRight, 63);
    nocturne_ui_push_clip(10, 10, 50, 50);
    nocturne_ui_push_clip(5, 20, 60, 40);
    CHECK_EQ(g_ClipLeft, 10);
    CHECK_EQ(g_ClipTop, 20);
    CHECK_EQ(g_ClipRight, 50);
    CHECK_EQ(g_ClipBottom, 40);
    nocturne_ui_push_screen_clip();
    CHECK_EQ(g_ClipLeft, 0);
    CHECK_EQ(g_ClipBottom, 63);
    nocturne_ui_push_clip(0, 0, 63, 63);
    nocturne_ui_push_clip(30, 30, 31, 31); // full: ignored
    nocturne_ui_push_screen_clip();        // full: ignored
    CHECK_EQ(g_ClipLeft, 0);
    nocturne_ui_pop_clip();
    nocturne_ui_pop_clip();
    CHECK_EQ(g_ClipLeft, 10);
    CHECK_EQ(g_ClipTop, 20);
    nocturne_ui_pop_clip();
    nocturne_ui_pop_clip();
    CHECK_EQ(g_ClipLeft, 0);
    CHECK_EQ(g_ClipRight, 63);
}

NOCTURNE_TEST_MAIN()
