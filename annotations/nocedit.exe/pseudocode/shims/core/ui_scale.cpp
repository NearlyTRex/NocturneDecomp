// =============================================================================
// UI SCALING — implementation
// =============================================================================
//
// See ui_scale.h for why the HUD needs this at all.

#include "core/ui_scale.h"

#include "nocturne.h"
#include "shim_config.h"

#include <cmath>

// Everything on the HUD is drawn for a 480-tall framebuffer.
#define UI_BASE_HEIGHT 480
#define UI_MAX_SCALE 4

// The smallest text scale drawn filtered rather than whole. At 1.25 (800x600)
// the area filter softens the 1-bit fonts more than the extra size is worth.
static const float kUiSmallestFilteredScale = 1.5f;

// Widest scaled row either blitter will build. A HUD bitmap is at most ~208px
// and a glyph a few dozen, so this covers UI_MAX_SCALE with room to spare.
#define UI_ROW_MAX 4096

// How many times `base` fits `extent`, rounded to nearest rather than
// truncated — so 768 and 720 lines step up to 2 instead of sitting at 1 with
// the HUD half the size it should be — and held to [1, max].
static int round_scale(int extent, int base, int max) {
    int scale;
    if (extent < 1) {
        return 1;
    }
    scale = (extent + base / 2) / base;
    if (scale < 1) {
        scale = 1;
    }
    if (scale > max) {
        scale = max;
    }
    return scale;
}

int nocturne_ui_scale(void) {
#if NOCTURNE_AUTHENTIC_HUD_SCALE
    return 1;
#else
    return round_scale(g_WindowHeight, UI_BASE_HEIGHT, UI_MAX_SCALE);
#endif
}

// The goggles' own authoring size, which is not the HUD's — see ui_scale.h.
#define GOGGLES_BASE_WIDTH 320
#define GOGGLES_BASE_HEIGHT 240

int nocturne_ui_goggles_scale_x(void) {
    return round_scale(g_WindowWidth, GOGGLES_BASE_WIDTH, NOCTURNE_GOGGLES_MAX_SCALE);
}

int nocturne_ui_goggles_scale_y(void) {
    return round_scale(g_WindowHeight, GOGGLES_BASE_HEIGHT, NOCTURNE_GOGGLES_MAX_SCALE);
}

int nocturne_ui_text_scale_supported(void) {
    // 16 and 32bpp glyph paths are both mirrored below. 8bpp is not: it is a
    // palette-index write with no blended form, and the engine never selects it
    // for this build (setScreenResolution asks for 32, the menu offers 16/32).
    return (g_BitsPerPixel == 0x10 || g_BitsPerPixel == 0x20) ? 1 : 0;
}

// =============================================================================
// The editor/dialog widget layer
// =============================================================================

int nocturne_ui_editor_scale(void) {
    // Never claim a scale the glyphs cannot follow: an unscaled box around
    // unscaled text is the shipped look, whereas a scaled box around unscaled
    // text is just broken.
    if (!nocturne_ui_text_scale_supported()) {
        return 1;
    }
    return nocturne_ui_scale();
}

void nocturne_ui_editor_metrics(void) {
    int scale = nocturne_ui_editor_scale();

    if (g_EditorFont == 0) {
        return;
    }
    // The widest glyph, and the height of 'j' as the line height: a scale of
    // the shipped values.
    g_EditorFontMaxCharWidth = g_EditorFont->max_char_width * scale;
    g_EditorFontLineHeight = nocturne_ui_char_height(g_EditorFont, 0x6a, scale);
}

// =============================================================================
// Alpha bitmaps (battery, health bars, ammo icons)
// =============================================================================

// A source rectangle of an alpha bitmap, each pixel expanded to scale x scale
// and blitted through the engine's own row blender. Both public entry points
// below funnel through here; only their source rectangle differs. Both have
// already held src_w * scale within UI_ROW_MAX.
static void ui_blit_alpha_region(CAlphaBitmap *bmp, int dst_x, int dst_y, int src_x, int src_y,
                                 int src_w, int src_h, int alpha, int scale) {
    static uchar row_raw[UI_ROW_MAX];
    static uchar row_opa[UI_ROW_MAX];
    int dst_w;
    int src_row;
    int rep;
    int col;

    if (src_w < 1 || src_h < 1) {
        return;
    }
    dst_w = src_w * scale;
    if (dst_x + dst_w < 0 || g_WindowWidth <= dst_x) {
        return;
    }
    if (dst_y + src_h * scale < 0 || g_WindowHeight <= dst_y) {
        return;
    }

    engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(bmp);

    for (src_row = 0; src_row < src_h; src_row++) {
        const ptrdiff_t at = (ptrdiff_t)(src_y + src_row) * bmp->width + src_x;
        const uchar *raw = (const uchar *)bmp->raw + at;
        const uchar *opa = (const uchar *)bmp->opa + at;

        // Expand the source row once, then emit it `scale` times.
        for (col = 0; col < src_w; col++) {
            for (rep = 0; rep < scale; rep++) {
                row_raw[col * scale + rep] = raw[col];
                row_opa[col * scale + rep] = opa[col];
            }
        }

        for (rep = 0; rep < scale; rep++) {
            int y = dst_y + src_row * scale + rep;
            int left = dst_x;
            int count = dst_w;
            int skip = 0;
            void *line;

            if (y < 0 || g_WindowHeight <= y) {
                continue;
            }
            line = g_ScreenBufferArray[y];
            if (line == 0) {
                continue;
            }

            // Horizontal clip, matching display()'s left/right handling.
            if (left < 0) {
                skip = -left;
                count = count - skip;
                left = 0;
            }
            if (g_WindowWidth < left + count) {
                count = g_WindowWidth - left;
            }
            if (count < 1) {
                continue;
            }

            if (g_BitsPerPixel == 0x20) {
                engine_special_cpp_renderAlphaRow32_FUN_005b555c(
                    (uint *)line + left, row_raw + skip, row_opa + skip, alpha, count);
            } else {
                engine_special_cpp_renderAlphaRow16_FUN_005b55f7(
                    (ushort *)line + left, row_raw + skip, row_opa + skip, alpha, count);
            }
        }
    }
}

void nocturne_ui_blit_alpha(struct CAlphaBitmap *bitmap, int x, int y, int alpha, int scale) {
    CAlphaBitmap *bmp = (CAlphaBitmap *)bitmap;

    if (bmp == 0) {
        return;
    }
    if (scale < 2 || bmp->width * scale > UI_ROW_MAX) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(bmp, x, y, alpha);
        return;
    }
    ui_blit_alpha_region(bmp, x, y, 0, 0, bmp->width, bmp->height, alpha, scale);
}

void nocturne_ui_blit_alpha_rect(struct CAlphaBitmap *bitmap, int dest_x, int dest_y, int left_x,
                                 int top_y, int right_x, int bottom_y, int alpha, int scale) {
    CAlphaBitmap *bmp = (CAlphaBitmap *)bitmap;
    int src_w;
    int src_h;

    if (bmp == 0) {
        return;
    }
    src_w = (right_x - left_x) + 1;
    src_h = (bottom_y - top_y) + 1;
    if (scale < 2 || src_w * scale > UI_ROW_MAX) {
        engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00(bmp, dest_x, dest_y, left_x, top_y,
                                                             right_x, bottom_y, alpha);
        return;
    }
    // The engine reads rows straight off the end when the rect exceeds the
    // bitmap; keep the scaled version inside it.
    if (left_x < 0 || top_y < 0) {
        return;
    }
    if (bmp->width < left_x + src_w || bmp->height < top_y + src_h) {
        return;
    }
    ui_blit_alpha_region(bmp, dest_x, dest_y, left_x, top_y, src_w, src_h, alpha, scale);
}

// =============================================================================
// Bitmap font text
// =============================================================================

// One blended 16bpp pixel, transcribed field-for-field from the RGB565 blend
// CBitFont::drawCharacter open-codes per pixel (there is no row helper for it
// the way 32bpp has drawAlphaBlendedPixels). Each channel is masked out of both
// colours, shifted down to 8 bits, mixed by `alpha`, divided by the channel's
// scale factor and shifted back into place.
static ushort ui_blend16(uint src_color, uint dst_color, int alpha) {
    const int inv = 0xff - alpha;
    uint out;

    out = ((((((g_GreenMask16.u32[0] & src_color) >> (g_GreenBitPosition.bytes[0] & 0x1f))
                  << (g_GreenDitherShift.bytes[0] & 0x1f) &
              0xff) *
                 alpha +
             (((g_GreenMask16.u32[0] & dst_color) >> (g_GreenBitPosition.bytes[0] & 0x1f))
                  << (g_GreenDitherShift.bytes[0] & 0x1f) &
              0xff) *
                 inv) >>
            8) /
           (uint)g_GreenScaleFactor)
          << (g_GreenBitPosition.bytes[0] & 0x1f);
    out |= ((((((g_RedMask16.u32[0] & src_color) >> (g_RedBitPosition.bytes[0] & 0x1f))
                   << (g_RedDitherShift.bytes[0] & 0x1f) &
               0xff) *
                  alpha +
              (((g_RedMask16.u32[0] & dst_color) >> (g_RedBitPosition.bytes[0] & 0x1f))
                   << (g_RedDitherShift.bytes[0] & 0x1f) &
               0xff) *
                  inv) >>
             8) /
            (uint)g_RedScaleFactor)
           << (g_RedBitPosition.bytes[0] & 0x1f);
    out |= ((((((g_BlueMask16.u32[0] & src_color) >> (g_BlueBitPosition.bytes[0] & 0x1f))
                   << (g_BlueDitherShift.bytes[0] & 0x1f) &
               0xff) *
                  alpha +
              inv * (((g_BlueMask16.u32[0] & dst_color) >> (g_BlueBitPosition.bytes[0] & 0x1f))
                         << (g_BlueDitherShift.bytes[0] & 0x1f) &
                     0xff)) >>
             8) /
            (uint)g_BlueScaleFactor)
           << (g_BlueBitPosition.bytes[0] & 0x1f);
    return (ushort)out;
}

// The colour a glyph is drawn in when it is not taking its own palette's:
// the shadow, the default text colour, or an entry of the bit depth's table.
// 0 for -1, which takes the palette's per pixel.
static uint ui_solid_color(int color_mode) {
    if (g_BitsPerPixel == 0x10) {
        if (color_mode == -2) {
            return (uint)g_ShadowColor16;
        }
        if (color_mode == -3) {
            return (uint)g_DefaultTextColor;
        }
        if (color_mode == -1) {
            return 0;
        }
        return (uint)g_ColorTable16[color_mode];
    }
    if (color_mode == -2) {
        return (uint)g_ShadowColor32;
    }
    if (color_mode == -3) {
        return (uint)g_DefaultTextColor;
    }
    if (color_mode == -1) {
        return 0;
    }
    return g_ColorTable32[color_mode];
}

// One glyph, scale x scale per source pixel. Mirrors CBitFont::drawCharacter:
// the keyed copy when the font has no display palette loaded, and the blended
// form when it has — the 32bpp row helper, or ui_blend16 per pixel. Returns the
// advance. `character_code` is a byte.
static int ui_draw_char(CBitFont *font, int character_code, int x, int y, int color_mode,
                        int color_value, int scale) {
    static uchar row_src[UI_ROW_MAX];
    const uchar *glyph;
    int advance;
    int glyph_w;
    int glyph_h;
    int bitmap_index;
    int stride;
    int dst_w;
    int src_row;
    int rep;
    int col;
    uint solid_color;

    advance = (font->char_widths[character_code] + font->char_spacing) * scale;
    glyph = font->char_positions[character_code];
    if (glyph == 0) {
        return advance;
    }

    // The engine draws the shadow first, as the same glyph in the shadow
    // colour offset by the font's shadow deltas — scaled along with it.
    if (color_value != -1) {
        ui_draw_char(font, character_code, x + font->shadow_offset_x * scale,
                     y + font->shadow_offset_y * scale, color_value, -1, scale);
    }

    y = y + font->char_y_offsets[character_code] * scale;
    glyph_w = font->char_widths[character_code];
    glyph_h = font->char_heights[character_code];
    bitmap_index = font->char_bitmap_index[character_code];
    stride = font->bitmap_widths[bitmap_index];
    dst_w = glyph_w * scale;
    if (glyph_w < 1 || glyph_h < 1 || dst_w > UI_ROW_MAX) {
        return advance;
    }

    solid_color = ui_solid_color(color_mode);

    for (src_row = 0; src_row < glyph_h; src_row++) {
        const uchar *src = glyph + (ptrdiff_t)src_row * stride;

        for (col = 0; col < glyph_w; col++) {
            for (rep = 0; rep < scale; rep++) {
                row_src[col * scale + rep] = src[col];
            }
        }

        for (rep = 0; rep < scale; rep++) {
            int dst_y = y + src_row * scale + rep;
            int left = x;
            int count = dst_w;
            int skip = 0;
            uint *line;

            if (dst_y < g_ClipTop || g_ClipBottom < dst_y) {
                continue;
            }
            if (dst_y < 0 || g_WindowHeight <= dst_y) {
                continue;
            }
            line = (uint *)g_ScreenBufferArray[dst_y];
            if (line == 0) {
                continue;
            }

            if (left < g_ClipLeft) {
                skip = g_ClipLeft - left;
                count = count - skip;
                left = g_ClipLeft;
            }
            if (g_ClipRight < left + count - 1) {
                count = (g_ClipRight - left) + 1;
            }
            if (count < 1) {
                continue;
            }

            if (g_BitsPerPixel == 0x10) {
                ushort *dst16 = (ushort *)line + left;
                if (font->is_initialized == 0) {
                    for (col = 0; col < count; col++) {
                        if ((uint)row_src[skip + col] != (uint)font->load_flags) {
                            dst16[col] =
                                (color_mode == -1)
                                    ? (ushort)
                                          font->palettes_display[bitmap_index][row_src[skip + col]]
                                    : (ushort)solid_color;
                        }
                    }
                } else {
                    for (col = 0; col < count; col++) {
                        // Per-pixel coverage comes from the font's palette_data,
                        // scaled by the current global alpha.
                        int cover =
                            (int)((g_CurrentAlphaValue *
                                   (uint)(byte)font->palette_data[(uint)row_src[skip + col] * 3 +
                                                                  bitmap_index * 0x300]) /
                                  256);
                        if (cover != 0) {
                            uint src_color =
                                (color_mode == -1)
                                    ? font->palettes_display[bitmap_index][row_src[skip + col]]
                                    : solid_color;
                            dst16[col] = ui_blend16(src_color, (uint)dst16[col], cover);
                        }
                    }
                }
                continue;
            }

            if (font->is_initialized == 0) {
                // Keyed copy: load_flags is the glyph bitmap's transparent index.
                for (col = 0; col < count; col++) {
                    if ((uint)row_src[skip + col] != (uint)font->load_flags) {
                        line[left + col] =
                            (color_mode == -1)
                                ? font->palettes_display[bitmap_index][row_src[skip + col]]
                                : solid_color;
                    }
                }
            } else {
                engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240(
                    line + left, row_src + skip, font->palettes_display[bitmap_index], count,
                    (color_mode == -1) ? font->palettes_display[bitmap_index][row_src[skip]]
                                       : solid_color);
            }
        }
    }
    return advance;
}

int nocturne_ui_draw_text(struct CBitFont *bit_font, char *text, int x, int y, int color_mode,
                          int color_value, int scale) {
    CBitFont *font = (CBitFont *)bit_font;
    int start_x = x;

    if (font == 0 || text == 0) {
        return 0;
    }
    if (scale < 2 || !nocturne_ui_text_scale_supported() || font->win_font_enabled != 0) {
        return engine_font_cpp_CBitFont_drawText_FUN_004cda80(font, text, x, y, color_mode,
                                                              color_value);
    }

    for (; *text != '\0'; text++) {
        uint character_code = (uint)(uchar)*text;
        if (character_code == 0xd) {
            continue;
        }
        if (character_code == 0xa) {
            y = y + (font->current_line_height + font->line_spacing) * scale;
            x = start_x;
            continue;
        }
        x = x + ui_draw_char(font, (int)character_code, x, y, color_mode, color_value, scale);
    }
    return x - start_x;
}

int nocturne_ui_text_width(struct CBitFont *font, char *text, int scale) {
    int width = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)font, text);
    if (scale < 2 || !nocturne_ui_text_scale_supported()) {
        return width;
    }
    return width * scale;
}

int nocturne_ui_text_height(struct CBitFont *font, char *text, int scale) {
    int height = engine_font_cpp_CBitFont_getTextHeight_FUN_004cff40((CBitFont *)font, text);
    if (scale < 2 || !nocturne_ui_text_scale_supported()) {
        return height;
    }
    return height * scale;
}

int nocturne_ui_char_height(struct CBitFont *font, int character_code, int scale) {
    int height =
        engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0((CBitFont *)font, character_code);
    if (scale < 2 || !nocturne_ui_text_scale_supported()) {
        return height;
    }
    return height * scale;
}

// =============================================================================
// Text at a fractional scale
// =============================================================================
//
// The whole-number path repeats each glyph pixel. A ratio between whole numbers
// cannot do that without some glyph pixels landing on one screen pixel and
// their neighbours on two, which on the 1-bit fonts reads as stems of uneven
// thickness. Here each screen pixel instead takes the glyph pixels under it,
// weighted by how much of it each covers — an area filter — and is blended by
// that coverage the way the blended path blends a glyph's own. At a whole
// number every screen pixel lies over exactly one glyph pixel, and those
// scales go to the whole-number path, so 640x480 and its multiples draw as
// they always have.

namespace {

// What the glyph pixels under one screen pixel come to.
struct UiCoverage {
    float channel[4] = {0.0f, 0.0f, 0.0f, 0.0f}; // a blended font's palette, per byte
    float amount = 0.0f; // a keyed font's share covered; a blended one's palette_data
    uint color = 0;      // the palette colour of the glyph pixel covering most of it
};

float ui_minf(float a, float b) {
    return a < b ? a : b;
}

float ui_maxf(float a, float b) {
    return a > b ? a : b;
}

// The glyph's coverage of [x0, x1) x [y0, y1), in glyph pixels.
UiCoverage ui_cover(const CBitFont *font, const uchar *glyph, int stride, int bitmap_index,
                    int glyph_w, int glyph_h, float x0, float x1, float y0, float y1) {
    UiCoverage c;
    const float area = (x1 - x0) * (y1 - y0);
    float most = 0.0f;
    for (int j = (int)y0; j < glyph_h && (float)j < y1; j++) {
        const float share_y = ui_minf(y1, (float)(j + 1)) - ui_maxf(y0, (float)j);
        for (int i = (int)x0; i < glyph_w && (float)i < x1; i++) {
            const float share =
                (ui_minf(x1, (float)(i + 1)) - ui_maxf(x0, (float)i)) * share_y / area;
            const uchar index = glyph[(ptrdiff_t)j * stride + i];
            const uint color = font->palettes_display[bitmap_index][index];
            if (font->is_initialized == 0) {
                if (index == (uchar)font->load_flags)
                    continue;
                c.amount += share;
            } else {
                c.amount +=
                    share * (float)(uchar)font->palette_data[index * 3 + bitmap_index * 0x300];
                if (index == 0)
                    continue;
                for (int k = 0; k < 4; k++)
                    c.channel[k] += share * (float)((color >> (k * 8)) & 0xff);
            }
            if (share > most) {
                most = share;
                c.color = color;
            }
        }
    }
    return c;
}

// A 32bpp colour mixed toward `color` by `amount`, 0 to 1.
uint ui_mix32(uint color, uint dst, float amount) {
    uint out = 0;
    for (int k = 0; k < 4; k++) {
        const float a = (float)((color >> (k * 8)) & 0xff);
        const float b = (float)((dst >> (k * 8)) & 0xff);
        out |= (uint)std::lround(a * amount + b * (1.0f - amount)) << (k * 8);
    }
    return out;
}

// One screen pixel of a glyph, by what covers it.
void ui_plot(void *line, int x, const UiCoverage &c, const CBitFont *font, int color_mode,
             uint solid_color) {
    const uint color = (color_mode == -1) ? c.color : solid_color;
    const bool keyed = font->is_initialized == 0;
    if (g_BitsPerPixel == 0x10) {
        ushort *dst = (ushort *)line + x;
        if (keyed) {
            if (c.amount >= 0.999f)
                *dst = (ushort)color;
            else if (c.amount > 0.0f)
                *dst = ui_blend16(color, *dst, (int)std::lround(c.amount * 255.0f));
            return;
        }
        const int cover = (int)((float)g_CurrentAlphaValue * c.amount / 256.0f);
        if (cover != 0)
            *dst = ui_blend16(color, *dst, cover);
        return;
    }
    uint *dst = (uint *)line + x;
    if (keyed) {
        if (c.amount >= 0.999f)
            *dst = color;
        else if (c.amount > 0.0f)
            *dst = ui_mix32(color, *dst, c.amount);
        return;
    }
    // drawAlphaBlendedPixels' mix, with the glyph's coverage averaged.
    if (c.channel[0] == 0.0f && c.channel[1] == 0.0f && c.channel[2] == 0.0f &&
        c.channel[3] == 0.0f)
        return;
    const uint render = (uint)g_CurrentRenderColor;
    uint out = 0;
    for (int k = 0; k < 4; k++) {
        const uint alpha = (uint)c.channel[k] * ((render >> (k * 8)) & 0xff) >> 8;
        // Both weights sum to 0xff, so the mix stays inside a byte.
        const uint mixed =
            (((color >> (k * 8)) & 0xff) * alpha + ((*dst >> (k * 8)) & 0xff) * (0xff - alpha)) >>
            8;
        out |= mixed << (k * 8);
    }
    *dst = out;
}

// One glyph at `scale`, its top-left at (x, y). Returns the advance.
float ui_draw_char_f(CBitFont *font, int character_code, float x, float y, int color_mode,
                     int color_value, float scale) {
    const float advance = (float)(font->char_widths[character_code] + font->char_spacing) * scale;
    const uchar *glyph = font->char_positions[character_code];
    if (glyph == 0)
        return advance;
    if (color_value != -1)
        ui_draw_char_f(font, character_code, x + (float)font->shadow_offset_x * scale,
                       y + (float)font->shadow_offset_y * scale, color_value, -1, scale);
    const int glyph_w = font->char_widths[character_code];
    const int glyph_h = font->char_heights[character_code];
    if (glyph_w < 1 || glyph_h < 1)
        return advance;
    const int bitmap_index = font->char_bitmap_index[character_code];
    const int stride = font->bitmap_widths[bitmap_index];
    const int left = (int)std::lround(x);
    const int top = (int)std::lround(y + (float)font->char_y_offsets[character_code] * scale);
    const int width = (int)std::ceil((float)glyph_w * scale);
    const int height = (int)std::ceil((float)glyph_h * scale);
    const uint solid_color = ui_solid_color(color_mode);
    for (int dy = 0; dy < height; dy++) {
        const int dst_y = top + dy;
        if (dst_y < g_ClipTop || g_ClipBottom < dst_y || dst_y < 0 || g_WindowHeight <= dst_y)
            continue;
        void *line = g_ScreenBufferArray[dst_y];
        if (line == 0)
            continue;
        const float y0 = (float)dy / scale;
        const float y1 = ui_minf((float)(dy + 1) / scale, (float)glyph_h);
        for (int dx = 0; dx < width; dx++) {
            const int dst_x = left + dx;
            if (dst_x < g_ClipLeft || g_ClipRight < dst_x)
                continue;
            const float x0 = (float)dx / scale;
            const float x1 = ui_minf((float)(dx + 1) / scale, (float)glyph_w);
            ui_plot(line, dst_x,
                    ui_cover(font, glyph, stride, bitmap_index, glyph_w, glyph_h, x0, x1, y0, y1),
                    font, color_mode, solid_color);
        }
    }
    return advance;
}

// `scale` as a whole number when it is one, else 0.
int ui_whole(float scale) {
    const long whole = std::lround(scale);
    if (whole >= 1 && std::fabs(scale - (float)whole) < 0.001f)
        return (int)whole;
    return 0;
}

// A scale the fractional path can draw at: positive, and 1 where no scaled
// glyph path exists.
float ui_usable(float scale) {
    if (scale <= 0.0f || !nocturne_ui_text_scale_supported())
        return 1.0f;
    return scale;
}

} // namespace

int nocturne_ui_draw_text_f(struct CBitFont *bit_font, char *text, int x, int y, int color_mode,
                            int color_value, float scale) {
    CBitFont *font = (CBitFont *)bit_font;
    if (font == 0 || text == 0)
        return 0;
    scale = ui_usable(scale);
    const int whole = ui_whole(scale);
    if (whole != 0 || font->win_font_enabled != 0)
        return nocturne_ui_draw_text(bit_font, text, x, y, color_mode, color_value,
                                     whole != 0 ? whole : 1);
    float pen = (float)x;
    float line_y = (float)y;
    for (; *text != '\0'; text++) {
        const uint character_code = (uint)(uchar)*text;
        if (character_code == 0xd)
            continue;
        if (character_code == 0xa) {
            line_y += (float)(font->current_line_height + font->line_spacing) * scale;
            pen = (float)x;
            continue;
        }
        pen +=
            ui_draw_char_f(font, (int)character_code, pen, line_y, color_mode, color_value, scale);
    }
    return (int)std::lround(pen - (float)x);
}

// An OS font draws at its own size (nocturne_ui_draw_text_f), so it measures
// at it too.
static bool ui_win_font(struct CBitFont *font) {
    return font != 0 && ((CBitFont *)font)->win_font_enabled != 0;
}

int nocturne_ui_text_width_f(struct CBitFont *font, char *text, float scale) {
    scale = ui_win_font(font) ? 1.0f : ui_usable(scale);
    const int width = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)font, text);
    return (int)std::lround((float)width * scale);
}

int nocturne_ui_char_height_f(struct CBitFont *font, int character_code, float scale) {
    scale = ui_win_font(font) ? 1.0f : ui_usable(scale);
    const int height =
        engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0((CBitFont *)font, character_code);
    return (int)std::lround((float)height * scale);
}

int nocturne_ui_wrap_to_width_f(struct CBitFont *font, char *text, char *lines, int max_lines,
                                int line_stride, int box_width, float scale, int *line_pitch) {
    scale = ui_usable(scale);
    if (line_pitch != 0)
        *line_pitch = nocturne_ui_char_height_f(font, 0x58, scale);
    // wrapText measures unscaled glyphs, so the box is put in the same units.
    return engine_font_cpp_CBitFont_wrapText_FUN_004d0010(
        (CBitFont *)font, text, lines, max_lines, line_stride, (int)((float)box_width / scale));
}

float nocturne_ui_text_scale(int height) {
#if NOCTURNE_AUTHENTIC_HUD_SCALE
    (void)height;
    return 1.0f;
#else
    // Below 480 lines the game takes smaller fonts instead; under 1.5 the
    // glyphs stay whole.
    const float scale = (float)height / (float)UI_BASE_HEIGHT;
    return scale < kUiSmallestFilteredScale ? 1.0f : scale;
#endif
}

// =============================================================================
// Clip rectangle
// =============================================================================

#define UI_CLIP_STACK_MAX 4

static int ui_clip_saved[UI_CLIP_STACK_MAX][4];
static int ui_clip_depth = 0;

void nocturne_ui_push_clip(int left, int top, int right, int bottom) {
    if (ui_clip_depth >= UI_CLIP_STACK_MAX) {
        return;
    }
    ui_clip_saved[ui_clip_depth][0] = g_ClipLeft;
    ui_clip_saved[ui_clip_depth][1] = g_ClipTop;
    ui_clip_saved[ui_clip_depth][2] = g_ClipRight;
    ui_clip_saved[ui_clip_depth][3] = g_ClipBottom;
    ui_clip_depth = ui_clip_depth + 1;

    // Intersect: a push can only ever narrow what is already in force.
    if (left > g_ClipLeft) {
        g_ClipLeft = left;
    }
    if (top > g_ClipTop) {
        g_ClipTop = top;
    }
    if (right < g_ClipRight) {
        g_ClipRight = right;
    }
    if (bottom < g_ClipBottom) {
        g_ClipBottom = bottom;
    }
}

void nocturne_ui_pop_clip(void) {
    if (ui_clip_depth < 1) {
        return;
    }
    ui_clip_depth = ui_clip_depth - 1;
    g_ClipLeft = ui_clip_saved[ui_clip_depth][0];
    g_ClipTop = ui_clip_saved[ui_clip_depth][1];
    g_ClipRight = ui_clip_saved[ui_clip_depth][2];
    g_ClipBottom = ui_clip_saved[ui_clip_depth][3];
}

void nocturne_ui_push_screen_clip(void) {
    if (ui_clip_depth >= UI_CLIP_STACK_MAX) {
        return;
    }
    ui_clip_saved[ui_clip_depth][0] = g_ClipLeft;
    ui_clip_saved[ui_clip_depth][1] = g_ClipTop;
    ui_clip_saved[ui_clip_depth][2] = g_ClipRight;
    ui_clip_saved[ui_clip_depth][3] = g_ClipBottom;
    ui_clip_depth = ui_clip_depth + 1;

    g_ClipLeft = 0;
    g_ClipTop = 0;
    g_ClipRight = g_WindowWidth - 1;
    g_ClipBottom = g_WindowHeight - 1;
}
