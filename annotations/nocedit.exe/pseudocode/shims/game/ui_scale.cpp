// =============================================================================
// UI SCALING — implementation
// =============================================================================
//
// See ui_scale.h for why the HUD needs this at all.

#include "game/ui_scale.h"
#include "shim_config.h"

#include "nocturne.h"

// Everything on the HUD is drawn for a 480-tall framebuffer.
#define UI_BASE_HEIGHT 480
#define UI_MAX_SCALE   4

// Widest scaled row either blitter will build. A HUD bitmap is at most ~208px
// and a glyph a few dozen, so this covers UI_MAX_SCALE with room to spare.
#define UI_ROW_MAX 4096

int nocturne_ui_scale(void) {
#if NOCTURNE_AUTHENTIC_HUD_SCALE
    return 1;
#else
    int scale;
    if (g_WindowHeight < 1) { return 1; }
    // Round to nearest rather than truncating, so 768 and 720 step up to 2
    // instead of sitting at 1 with the HUD half the size it should be.
    scale = (g_WindowHeight + UI_BASE_HEIGHT / 2) / UI_BASE_HEIGHT;
    if (scale < 1) { scale = 1; }
    if (scale > UI_MAX_SCALE) { scale = UI_MAX_SCALE; }
    return scale;
#endif
}

int nocturne_ui_text_scale_supported(void) {
    // 16 and 32bpp glyph paths are both mirrored below. 8bpp is not: it is a
    // palette-index write with no blended form, and the engine never selects it
    // for this build (setScreenResolution asks for 32, the menu offers 16/32).
    return (g_BitsPerPixel == 0x10 || g_BitsPerPixel == 0x20) ? 1 : 0;
}

// =============================================================================
// Alpha bitmaps (battery, health bars, ammo icons)
// =============================================================================

// A source rectangle of an alpha bitmap, each pixel expanded to scale x scale
// and blitted through the engine's own row blender. Both public entry points
// below funnel through here; only their source rectangle differs.
static void ui_blit_alpha_region(CAlphaBitmap *bmp, int dst_x, int dst_y,
                                 int src_x, int src_y, int src_w, int src_h,
                                 int alpha, int scale) {
    static uchar row_raw[UI_ROW_MAX];
    static uchar row_opa[UI_ROW_MAX];
    int dst_w;
    int src_row;
    int rep;
    int col;

    if (src_w < 1 || src_h < 1) { return; }
    dst_w = src_w * scale;
    if (dst_w > UI_ROW_MAX) { return; }
    if (dst_x + dst_w < 0 || g_WindowWidth <= dst_x) { return; }
    if (dst_y + src_h * scale < 0 || g_WindowHeight <= dst_y) { return; }

    engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(bmp);

    for (src_row = 0; src_row < src_h; src_row++) {
        const uchar *raw = (const uchar *)bmp->raw + (src_y + src_row) * bmp->width + src_x;
        const uchar *opa = (const uchar *)bmp->opa + (src_y + src_row) * bmp->width + src_x;

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

            if (y < 0 || g_WindowHeight <= y) { continue; }
            line = g_ScreenBufferArray[y];
            if (line == 0) { continue; }

            // Horizontal clip, matching display()'s left/right handling.
            if (left < 0) {
                skip = -left;
                count = count - skip;
                left = 0;
            }
            if (g_WindowWidth < left + count) { count = g_WindowWidth - left; }
            if (count < 1) { continue; }

            if (g_BitsPerPixel == 0x20) {
                engine_special_cpp_renderAlphaRow32_FUN_005b555c(
                    (uint *)line + left, row_raw + skip, row_opa + skip, alpha, count);
            }
            else {
                engine_special_cpp_renderAlphaRow16_FUN_005b55f7(
                    (ushort *)line + left, row_raw + skip, row_opa + skip, alpha, count);
            }
        }
    }
}

void nocturne_ui_blit_alpha(struct CAlphaBitmap *bitmap, int x, int y, int alpha, int scale) {
    CAlphaBitmap *bmp = (CAlphaBitmap *)bitmap;

    if (bmp == 0) { return; }
    if (scale < 2 || bmp->width * scale > UI_ROW_MAX) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(bmp, x, y, alpha);
        return;
    }
    ui_blit_alpha_region(bmp, x, y, 0, 0, bmp->width, bmp->height, alpha, scale);
}

void nocturne_ui_blit_alpha_rect(struct CAlphaBitmap *bitmap, int dest_x, int dest_y,
                                 int left_x, int top_y, int right_x, int bottom_y,
                                 int alpha, int scale) {
    CAlphaBitmap *bmp = (CAlphaBitmap *)bitmap;
    int src_w;
    int src_h;

    if (bmp == 0) { return; }
    src_w = (right_x - left_x) + 1;
    src_h = (bottom_y - top_y) + 1;
    if (scale < 2 || src_w * scale > UI_ROW_MAX) {
        engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00(bmp, dest_x, dest_y, left_x, top_y,
                                                             right_x, bottom_y, alpha);
        return;
    }
    // The engine reads rows straight off the end when the rect exceeds the
    // bitmap; keep the scaled version inside it.
    if (left_x < 0 || top_y < 0) { return; }
    if (bmp->width < left_x + src_w || bmp->height < top_y + src_h) { return; }
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
              << (g_GreenDitherShift.bytes[0] & 0x1f) & 0xff) * alpha
             + (((g_GreenMask16.u32[0] & dst_color) >> (g_GreenBitPosition.bytes[0] & 0x1f))
                << (g_GreenDitherShift.bytes[0] & 0x1f) & 0xff) * inv) >> 8)
           / (uint)g_GreenScaleFactor) << (g_GreenBitPosition.bytes[0] & 0x1f);
    out |= ((((((g_RedMask16.u32[0] & src_color) >> (g_RedBitPosition.bytes[0] & 0x1f))
               << (g_RedDitherShift.bytes[0] & 0x1f) & 0xff) * alpha
              + (((g_RedMask16.u32[0] & dst_color) >> (g_RedBitPosition.bytes[0] & 0x1f))
                 << (g_RedDitherShift.bytes[0] & 0x1f) & 0xff) * inv) >> 8)
            / (uint)g_RedScaleFactor) << (g_RedBitPosition.bytes[0] & 0x1f);
    out |= ((((((g_BlueMask16.u32[0] & src_color) >> (g_BlueBitPosition.bytes[0] & 0x1f))
               << (g_BlueDitherShift.bytes[0] & 0x1f) & 0xff) * alpha
              + inv * (((g_BlueMask16.u32[0] & dst_color) >> (g_BlueBitPosition.bytes[0] & 0x1f))
                       << (g_BlueDitherShift.bytes[0] & 0x1f) & 0xff)) >> 8)
            / (uint)g_BlueScaleFactor) << (g_BlueBitPosition.bytes[0] & 0x1f);
    return (ushort)out;
}

// One glyph, scale x scale per source pixel. Mirrors CBitFont::drawCharacter:
// the keyed copy when the font has no display palette loaded, and the blended
// form when it has — the 32bpp row helper, or ui_blend16 per pixel. Returns the
// advance.
static int ui_draw_char(CBitFont *font, int character_code, int x, int y,
                        int color_mode, int color_value, int scale) {
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

    if (character_code < 0 || 0xff < character_code) { return 0; }
    advance = (font->char_widths[character_code] + font->char_spacing) * scale;
    glyph = font->char_positions[character_code];
    if (glyph == 0) { return advance; }

    // The engine draws the shadow first, as the same glyph in the shadow
    // colour offset by the font's shadow deltas — scaled along with it.
    if (color_value != -1) {
        ui_draw_char(font, character_code,
                     x + font->shadow_offset_x * scale,
                     y + font->shadow_offset_y * scale,
                     color_value, -1, scale);
    }

    y = y + font->char_y_offsets[character_code] * scale;
    glyph_w = font->char_widths[character_code];
    glyph_h = font->char_heights[character_code];
    bitmap_index = font->char_bitmap_index[character_code];
    stride = font->bitmap_widths[bitmap_index];
    dst_w = glyph_w * scale;
    if (glyph_w < 1 || glyph_h < 1 || dst_w > UI_ROW_MAX) { return advance; }

    if (g_BitsPerPixel == 0x10) {
        if (color_mode == -2)      { solid_color = (uint)g_ShadowColor16; }
        else if (color_mode == -3) { solid_color = (uint)g_DefaultTextColor; }
        else if (color_mode == -1) { solid_color = 0; }
        else                       { solid_color = (uint)g_ColorTable16[color_mode]; }
    }
    else {
        if (color_mode == -2)      { solid_color = (uint)g_ShadowColor32; }
        else if (color_mode == -3) { solid_color = (uint)g_DefaultTextColor; }
        else if (color_mode == -1) { solid_color = 0; }
        else                       { solid_color = g_ColorTable32[color_mode]; }
    }

    for (src_row = 0; src_row < glyph_h; src_row++) {
        const uchar *src = glyph + src_row * stride;

        for (col = 0; col < glyph_w; col++) {
            for (rep = 0; rep < scale; rep++) { row_src[col * scale + rep] = src[col]; }
        }

        for (rep = 0; rep < scale; rep++) {
            int dst_y = y + src_row * scale + rep;
            int left = x;
            int count = dst_w;
            int skip = 0;
            uint *line;

            if (dst_y < g_ClipTop || g_ClipBottom < dst_y) { continue; }
            if (dst_y < 0 || g_WindowHeight <= dst_y) { continue; }
            line = (uint *)g_ScreenBufferArray[dst_y];
            if (line == 0) { continue; }

            if (left < g_ClipLeft) {
                skip = g_ClipLeft - left;
                count = count - skip;
                left = g_ClipLeft;
            }
            if (g_ClipRight < left + count - 1) { count = (g_ClipRight - left) + 1; }
            if (count < 1) { continue; }

            if (g_BitsPerPixel == 0x10) {
                ushort *dst16 = (ushort *)line + left;
                if (font->is_initialized == 0) {
                    for (col = 0; col < count; col++) {
                        if ((uint)row_src[skip + col] != (uint)font->load_flags) {
                            dst16[col] =
                                (color_mode == -1)
                                    ? (ushort)font->palettes_display[bitmap_index]
                                                                    [row_src[skip + col]]
                                    : (ushort)solid_color;
                        }
                    }
                }
                else {
                    for (col = 0; col < count; col++) {
                        // Per-pixel coverage comes from the font's palette_data,
                        // scaled by the current global alpha.
                        int cover = (g_CurrentAlphaValue *
                                     (uint)(byte)font->palette_data[(uint)row_src[skip + col] * 3 +
                                                                    bitmap_index * 0x300]) / 256;
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
            }
            else {
                engine_font_cpp_drawAlphaBlendedPixels_FUN_004ce240(
                    line + left, row_src + skip, font->palettes_display[bitmap_index], count,
                    (color_mode == -1)
                        ? font->palettes_display[bitmap_index][row_src[skip]]
                        : solid_color);
            }
        }
    }
    return advance;
}

int nocturne_ui_draw_text(struct CBitFont *bit_font, char *text, int x, int y,
                          int color_mode, int color_value, int scale) {
    CBitFont *font = (CBitFont *)bit_font;
    int start_x = x;

    if (font == 0 || text == 0) { return 0; }
    if (scale < 2 || !nocturne_ui_text_scale_supported() || font->win_font_enabled != 0) {
        return engine_font_cpp_CBitFont_drawText_FUN_004cda80(font, text, x, y, color_mode,
                                                              color_value);
    }

    for (; *text != '\0'; text++) {
        uint character_code = (uint)(uchar)*text;
        if (character_code == 0xd) { continue; }
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
    if (scale < 2 || !nocturne_ui_text_scale_supported()) { return width; }
    return width * scale;
}

int nocturne_ui_char_height(struct CBitFont *font, int character_code, int scale) {
    int height = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0((CBitFont *)font,
                                                                     character_code);
    if (scale < 2 || !nocturne_ui_text_scale_supported()) { return height; }
    return height * scale;
}
