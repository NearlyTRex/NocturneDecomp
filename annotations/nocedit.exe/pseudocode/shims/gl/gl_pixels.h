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

#include <cstdlib>
#include <cstring>

// The game's back-buffer bit depth as a GL upload format. The 32bpp case is
// SDL_PIXELFORMAT_ARGB8888, which on little-endian is B,G,R,A in memory —
// GL_BGRA, not GL_RGBA. False for a depth with no GL equivalent.
inline bool nocturne_gl_format_for_bpp(int bpp, GLenum *format, GLenum *type) {
    switch (bpp) {
        case 16: *format = GL_RGB;  *type = GL_UNSIGNED_SHORT_5_6_5; return true;
        case 24: *format = GL_RGB;  *type = GL_UNSIGNED_BYTE;        return true;
        case 32: *format = GL_BGRA; *type = GL_UNSIGNED_BYTE;        return true;
        default: return false;
    }
}

// Reverses the order of `rows` rows of `pitch` bytes, in place: a GL read is
// bottom-up and the engine's image is top-down.
inline void nocturne_gl_flip_rows(unsigned char *base, int pitch, int rows) {
    unsigned char *scratch = (unsigned char *)malloc((size_t)pitch);
    if (scratch == nullptr) return;
    for (int y = 0; y < rows / 2; ++y) {
        unsigned char *top    = base + (size_t)y * (size_t)pitch;
        unsigned char *bottom = base + (size_t)(rows - 1 - y) * (size_t)pitch;
        memcpy(scratch, top, (size_t)pitch);
        memcpy(top, bottom, (size_t)pitch);
        memcpy(bottom, scratch, (size_t)pitch);
    }
    free(scratch);
}
