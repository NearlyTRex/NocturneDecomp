// =============================================================================
// FRONT-END LAYOUT — implementation
// =============================================================================
//
// See front_end_layout.h.

#include "core/front_end_layout.h"

#include "gl/upscaler.h"
#include "nocturne.h"

#include <cmath>
#include <vector>

namespace {

const int kFrontEndBits = 0x20;
const int kHighColourBits = 0x10;
// What the front end's width is a multiple of. clearScreen fills a row 32 bytes
// at a time, which is 16 pixels at 16 bits, and the front end clears in
// software; a row that is not a multiple overruns into the next and, on the
// last, off the buffer. The display scales the frame to the window, so a pick
// such as 1366 runs the front end at 1360.
const int kWidthStep = 16;
// The engine's row blend: at least this much of a pixel covers it, at most
// this little leaves it alone (renderAlphaRow32).
const int kSolidCoverage = 64999;
const int kClearCoverage = 0xff;
const int kAdditiveBlend = 1;

int round_to_int(float value) {
    return (int)std::lround(value);
}

// Where a screen pixel's centre falls in the picture, in picture pixels from
// its first centre.
float source_position(int offset, int screen_length, int picture_length) {
    return ((float)offset + 0.5f) * (float)picture_length / (float)screen_length - 0.5f;
}

// The picture pixel under a screen pixel `offset` into the drawn length.
int nearest(int offset, int screen_length, int picture_length) {
    return offset * picture_length / screen_length;
}

// A pixel centre's position falls short of the picture's last centre, so only
// the first edge needs holding.
int first_sample(float position) {
    const int at = (int)std::floor(position);
    return at > 0 ? at : 0;
}

float share_past(float position, int sample) {
    const float share = position - (float)sample;
    return share > 0.0f ? share : 0.0f;
}

// One picture pixel's share of a mix.
struct Sample {
    uint colour;
    float weight;
};

// The colours mixed by weight and opacity, so a clear pixel lends none of its
// colour; and the opacity they come to.
void mix(const Sample *samples, int count, uint *colour, uchar *opacity) {
    float channels[3] = {0.0f, 0.0f, 0.0f};
    float total = 0.0f;
    for (int i = 0; i < count; i++) {
        total += samples[i].weight;
        for (int c = 0; c < 3; c++)
            channels[c] += samples[i].weight * (float)((samples[i].colour >> (c * 8)) & 0xff);
    }
    *colour = 0;
    *opacity = (uchar)round_to_int((total < 1.0f ? total : 1.0f) * 255.0f);
    if (total <= 0.0f)
        return;
    for (int c = 0; c < 3; c++) {
        const int level = round_to_int(channels[c] / total);
        *colour |= (uint)(level < 0xff ? level : 0xff) << (c * 8);
    }
}

// renderAlphaRow32's blend of one pixel, from a colour rather than a palette
// index.
void blend_pixel32(uint *dest, uint source, uint opacity, int alpha) {
    const uint coverage = opacity * ((uint)alpha >> 8);
    if (g_BlendMode != kAdditiveBlend) {
        if ((int)coverage >= kSolidCoverage) {
            *dest = source;
            return;
        }
        if ((int)coverage <= kClearCoverage)
            return;
    }
    const uint destination = *dest;
    const SAlphaEntry &entry = g_AlphaTable[coverage >> 8];
    const SAlphaEntry &full = g_AlphaTable[0xff];
    const ushort weights[4] = {entry.red, entry.green, entry.blue, entry.alignment};
    const ushort inverse[4] = {(ushort)(entry.red ^ full.red), (ushort)(entry.green ^ full.green),
                               (ushort)(entry.blue ^ full.blue),
                               (ushort)(entry.alignment ^ full.alignment)};
    uint result = 0;
    for (int c = 0; c < 4; c++) {
        const ushort from = (ushort)((source >> (c * 8)) & 0xff);
        const ushort onto = (ushort)((destination >> (c * 8)) & 0xff);
        const ushort lit = (ushort)(from * weights[c]);
        ushort level;
        if (g_BlendMode == kAdditiveBlend) {
            uint sum = (uint)lit + ((uint)onto << 8);
            if (sum > 0xffff)
                sum = 0xffff;
            level = (ushort)(sum >> 8);
        } else {
            level = (ushort)((ushort)(lit + (ushort)(onto * inverse[c])) >> 8);
        }
        result |= (uint)(uchar)level << (c * 8);
    }
    *dest = result;
}

// The picture pixels a screen column (or row) reads: the nearest, and the two
// a smooth mix takes, with the second's share.
struct Span {
    int nearest;
    int first;
    int second;
    float share;
};

Span span_at(int offset, int screen_length, int picture_length) {
    const float position = source_position(offset, screen_length, picture_length);
    Span span;
    span.nearest = nearest(offset, screen_length, picture_length);
    span.first = first_sample(position);
    span.second = span.first + 1 < picture_length ? span.first + 1 : picture_length - 1;
    span.share = share_past(position, span.first);
    return span;
}

// One screen row of a smooth draw: four picture pixels mixed for each and
// blended on. Where all four are clear the mix is no colour at no opacity,
// which leaves the pixel as it was, so it is passed over.
void smooth_row(uint *dest, const CAlphaBitmap *picture, const Span &row,
                const std::vector<Span> &columns, int alpha) {
    const int stride = picture->width;
    const uchar *raw = (const uchar *)picture->raw;
    const uchar *opa = (const uchar *)picture->opa;
    const int upper = row.first * stride;
    const int lower = row.second * stride;
    const float fy = row.share;
    for (size_t i = 0; i < columns.size(); i++) {
        const Span &column = columns[i];
        const int at[4] = {upper + column.first, upper + column.second, lower + column.first,
                           lower + column.second};
        if ((opa[at[0]] | opa[at[1]] | opa[at[2]] | opa[at[3]]) == 0)
            continue;
        const float fx = column.share;
        const float shares[4] = {(1.0f - fx) * (1.0f - fy), fx * (1.0f - fy), (1.0f - fx) * fy,
                                 fx * fy};
        Sample samples[4];
        for (int s = 0; s < 4; s++) {
            samples[s].colour = g_Hardware32BitPalette[raw[at[s]]];
            samples[s].weight = shares[s] * (float)opa[at[s]] / 255.0f;
        }
        uint colour = 0;
        uchar opacity = 0;
        mix(samples, 4, &colour, &opacity);
        blend_pixel32(dest + i, colour, opacity, alpha);
    }
}

} // namespace

#if !NOCTURNE_AUTHENTIC_MENU

extern "C" NocturneLayout nocturne_layout(void) {
    NocturneLayout layout = {1.0f, 0, 0};
    const float wide = (float)g_WindowWidth / (float)NOCTURNE_LAYOUT_WIDTH;
    const float tall = (float)g_WindowHeight / (float)NOCTURNE_LAYOUT_HEIGHT;
    const float scale = wide < tall ? wide : tall;
    if (scale > 1.0f)
        layout.scale = scale;
    const int left = (g_WindowWidth - nocturne_layout_length(layout, NOCTURNE_LAYOUT_WIDTH)) / 2;
    const int top = (g_WindowHeight - nocturne_layout_length(layout, NOCTURNE_LAYOUT_HEIGHT)) / 2;
    layout.left = left > 0 ? left : 0;
    layout.top = top > 0 ? top : 0;
    return layout;
}

extern "C" void nocturne_front_end_mode(int *width, int *height) {
    const CGame *game = g_CGamePtr;
    *width = NOCTURNE_LAYOUT_WIDTH;
    *height = NOCTURNE_LAYOUT_HEIGHT;
    if (g_UseDirect3D == 0 || game->game_pixx < NOCTURNE_LAYOUT_WIDTH ||
        game->game_pixy < NOCTURNE_LAYOUT_HEIGHT)
        return;
    *width = game->game_pixx / kWidthStep * kWidthStep;
    *height = game->game_pixy;
}

#else

extern "C" NocturneLayout nocturne_layout(void) {
    const NocturneLayout layout = {1.0f, 0, 0};
    return layout;
}

extern "C" void nocturne_front_end_mode(int *width, int *height) {
    (void)kWidthStep;
    *width = NOCTURNE_LAYOUT_WIDTH;
    *height = NOCTURNE_LAYOUT_HEIGHT;
}

#endif // !NOCTURNE_AUTHENTIC_MENU

extern "C" int nocturne_front_end_set_mode(void) {
    int width = 0;
    int height = 0;
    nocturne_front_end_mode(&width, &height);
    if (wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(width, height, kFrontEndBits) != 0)
        return 1;
    return wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(
        NOCTURNE_LAYOUT_WIDTH, NOCTURNE_LAYOUT_HEIGHT, kFrontEndBits);
}

extern "C" int nocturne_layout_filter(float scale) {
    switch (nocturne_upscaler_get()) {
    case NOCTURNE_UPSCALER_NEAREST:
    case NOCTURNE_UPSCALER_XBR:
        return NOCTURNE_LAYOUT_FILTER_NEAREST;
    case NOCTURNE_UPSCALER_STANDARD:
        return std::floor(scale) == scale ? NOCTURNE_LAYOUT_FILTER_NEAREST
                                          : NOCTURNE_LAYOUT_FILTER_SMOOTH;
    default:
        return NOCTURNE_LAYOUT_FILTER_SMOOTH;
    }
}

// A row at a time: the picture's indices picked through the engine's own row
// blend for NEAREST, its colours mixed and blended as that does for SMOOTH.
extern "C" void nocturne_alpha_display_scaled(struct CAlphaBitmap *bitmap, int x, int y, int width,
                                              int height, int alpha, int filter) {
    CAlphaBitmap *picture = (CAlphaBitmap *)bitmap;
    if (width == picture->width && height == picture->height) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(picture, x, y, alpha);
        return;
    }
    if (width <= 0 || height <= 0 || picture->width <= 0 || picture->height <= 0 || x + width < 0 ||
        x >= g_WindowWidth || y + height < 0 || y >= g_WindowHeight)
        return;
    if (g_BitsPerPixel != kFrontEndBits)
        filter = NOCTURNE_LAYOUT_FILTER_NEAREST;
    engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(picture);
    const int left = x > 0 ? x : 0;
    const int top = y > 0 ? y : 0;
    const int right = x + width < g_WindowWidth ? x + width : g_WindowWidth;
    const int bottom = y + height < g_WindowHeight ? y + height : g_WindowHeight;
    const int count = right - left;
    const uchar *raw = (const uchar *)picture->raw;
    const uchar *opa = (const uchar *)picture->opa;
    const int picture_width = picture->width;
    // Where each drawn column reads the picture, the same on every row.
    std::vector<Span> columns((size_t)count);
    for (int i = 0; i < count; i++)
        columns[(size_t)i] = span_at(left + i - x, width, picture_width);
    std::vector<uchar> indices((size_t)count);
    std::vector<uchar> opacity((size_t)count);
    for (int row = top; row < bottom; row++) {
        const Span source_row = span_at(row - y, height, picture->height);
        void *line = g_ScreenBufferArray[row];
        if (filter == NOCTURNE_LAYOUT_FILTER_SMOOTH) {
            smooth_row((uint *)line + left, picture, source_row, columns, alpha);
            continue;
        }
        const int at = source_row.nearest * picture_width;
        for (int i = 0; i < count; i++) {
            indices[(size_t)i] = raw[at + columns[(size_t)i].nearest];
            opacity[(size_t)i] = opa[at + columns[(size_t)i].nearest];
        }
        if (g_BitsPerPixel == kFrontEndBits) {
            engine_special_cpp_renderAlphaRow32_FUN_005b555c((uint *)line + left, indices.data(),
                                                             opacity.data(), alpha, count);
        } else if (g_BitsPerPixel == kHighColourBits) {
            engine_special_cpp_renderAlphaRow16_FUN_005b55f7((ushort *)line + left, indices.data(),
                                                             opacity.data(), alpha, count);
        }
    }
}

extern "C" void nocturne_layout_display(struct CAlphaBitmap *bitmap, int x, int y, int alpha) {
    const NocturneLayout layout = nocturne_layout();
    const CAlphaBitmap *picture = (const CAlphaBitmap *)bitmap;
    nocturne_alpha_display_scaled(bitmap, nocturne_layout_x(layout, x),
                                  nocturne_layout_y(layout, y),
                                  nocturne_layout_length(layout, picture->width),
                                  nocturne_layout_length(layout, picture->height), alpha,
                                  nocturne_layout_filter(layout.scale));
}
