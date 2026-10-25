#pragma once

// =============================================================================
// GL — PIXEL LAYOUT HELPERS
// =============================================================================
//
// The two facts about the game's frame images that every upload to and read
// back from GL needs: what GL format a bit depth is, and that GL addresses an
// image bottom-up where the engine addresses it top-down. Used by the window
// presentation (gl_present.cpp) and the renderer's target (renderer/
// trigl_device.cpp).
//
// Header-only, so the renderer's recorded-call tests need no extra source.

#include "gl/gl_api.h"

#include <algorithm>
#include <cstring>
#include <vector>

// The game's back-buffer bit depth as a GL upload format. The 32bpp case is
// SDL_PIXELFORMAT_ARGB8888, which on little-endian is B,G,R,A in memory —
// GL_BGRA, not GL_RGBA. False for a depth with no GL equivalent.
inline bool nocturne_gl_format_for_bpp(int bpp, GLenum *format, GLenum *type) {
    switch (bpp) {
    case 16:
        *format = GL_RGB;
        *type = GL_UNSIGNED_SHORT_5_6_5;
        return true;
    case 24:
        *format = GL_RGB;
        *type = GL_UNSIGNED_BYTE;
        return true;
    case 32:
        *format = GL_BGRA;
        *type = GL_UNSIGNED_BYTE;
        return true;
    default:
        return false;
    }
}

// Bytes per pixel of a pair from nocturne_gl_format_for_bpp.
inline int nocturne_gl_pixel_bytes(GLenum format, GLenum type) {
    if (format == GL_BGRA)
        return 4;
    return type == GL_UNSIGNED_SHORT_5_6_5 ? 2 : 3;
}

// The nearest 5- and 6-bit level of each byte value, as a desktop driver's
// conversion rounds.
struct NocturneGlLevels {
    unsigned char to5[256];
    unsigned char to6[256];

    NocturneGlLevels() {
        for (unsigned i = 0; i < 256; ++i) {
            to5[i] = (unsigned char)((i * 31u + 127u) / 255u);
            to6[i] = (unsigned char)((i * 63u + 127u) / 255u);
        }
    }
};

inline const NocturneGlLevels &nocturne_gl_levels() {
    static const NocturneGlLevels levels;
    return levels;
}

// `count` RGBA byte pixels written as `format`/`type`, a pair from
// nocturne_gl_format_for_bpp. A whole frame goes through here once a frame, so
// the format is decided once a row rather than once a pixel.
inline void nocturne_gl_pack_rgba_row(const unsigned char *rgba, int count, GLenum format,
                                      GLenum type, unsigned char *out) {
    if (format == GL_BGRA) {
        for (int x = 0; x < count; ++x, rgba += 4, out += 4) {
            out[0] = rgba[2];
            out[1] = rgba[1];
            out[2] = rgba[0];
            out[3] = rgba[3];
        }
    } else if (type == GL_UNSIGNED_SHORT_5_6_5) {
        const NocturneGlLevels &levels = nocturne_gl_levels();
        for (int x = 0; x < count; ++x, rgba += 4, out += 2) {
            const unsigned short packed =
                (unsigned short)((levels.to5[rgba[0]] << 11) | (levels.to6[rgba[1]] << 5) |
                                 levels.to5[rgba[2]]);
            memcpy(out, &packed, sizeof(packed));
        }
    } else {
        for (int x = 0; x < count; ++x, rgba += 4, out += 3) {
            out[0] = rgba[0];
            out[1] = rgba[1];
            out[2] = rgba[2];
        }
    }
}

// The bottom-left `width` x `height` of `read_buffer` in the bound framebuffer
// into `dst`, rows `pitch` bytes apart, as `format`/`type`. Desktop GL converts
// as it reads. ES promises only RGBA bytes, so there those are read and
// converted here.
inline void nocturne_gl_read_pixels(GLenum read_buffer, GLsizei width, GLsizei height,
                                    GLenum format, GLenum type, void *dst, int pitch) {
    gl.PixelStorei(GL_PACK_ALIGNMENT, 1);
#if NOCTURNE_GLES
    static std::vector<unsigned char> rgba;
    rgba.resize((size_t)width * (size_t)height * 4u);
    gl.ReadBuffer(read_buffer);
    gl.ReadPixels(0, 0, width, height, GL_RGBA, GL_UNSIGNED_BYTE, rgba.data());
    for (GLsizei y = 0; y < height; ++y) {
        nocturne_gl_pack_rgba_row(rgba.data() + (size_t)y * (size_t)width * 4u, width, format, type,
                                  (unsigned char *)dst + (size_t)y * (size_t)pitch);
    }
#else
    const int bytes = nocturne_gl_pixel_bytes(format, type);
    gl.PixelStorei(GL_PACK_ROW_LENGTH, pitch / bytes);
    gl.ReadBuffer(read_buffer);
    gl.ReadPixels(0, 0, width, height, format, type, dst);
    gl.PixelStorei(GL_PACK_ROW_LENGTH, 0);
#endif
}

// Reverses the order of `rows` rows of `pitch` bytes, in place: a GL read is
// bottom-up and the engine's image is top-down.
inline void nocturne_gl_flip_rows(unsigned char *base, int pitch, int rows) {
    for (int y = 0; y < rows / 2; ++y) {
        unsigned char *top = base + (size_t)y * (size_t)pitch;
        unsigned char *bottom = base + (size_t)(rows - 1 - y) * (size_t)pitch;
        std::swap_ranges(top, top + pitch, bottom);
    }
}
