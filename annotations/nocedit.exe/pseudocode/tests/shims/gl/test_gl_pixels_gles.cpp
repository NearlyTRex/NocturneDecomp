// =============================================================================
// GL PIXELS UNDER ES — a read as RGBA bytes, converted to the game's format
// =============================================================================

#include "gl/gl_pixels.h"
#include "nocturne_test.h"
#include "shims/renderer/gl_recorder.h"

#include <cstring>
#include <vector>

namespace {

std::vector<int> g_stores;
GLenum g_read_format = 0;
GLenum g_read_type = 0;

void APIENTRY record_store(GLenum name, GLint value) {
    g_stores.push_back((int)name);
    g_stores.push_back((int)value);
}

// Pixel (x, y) is {x, y, x + y, 0xFF}, bottom row first, as GL hands it back.
void APIENTRY read_frame(GLint, GLint, GLsizei width, GLsizei height, GLenum format, GLenum type,
                         void *pixels) {
    g_read_format = format;
    g_read_type = type;
    unsigned char *p = (unsigned char *)pixels;
    for (GLsizei y = 0; y < height; ++y) {
        for (GLsizei x = 0; x < width; ++x, p += 4) {
            p[0] = (unsigned char)x;
            p[1] = (unsigned char)y;
            p[2] = (unsigned char)(x + y);
            p[3] = 0xFF;
        }
    }
}

void install() {
    gl_recorder::install();
    gl.PixelStorei = record_store;
    gl.ReadPixels = read_frame;
    g_stores.clear();
}

} // namespace

// ES is asked for RGBA bytes, with no row length to set; each row is converted
// into the game's format, its pitch apart.
NOCTURNE_TEST(a_read_converts_each_row_to_the_format_asked_for) {
    install();
    unsigned char dst[2 * 16];
    memset(dst, 0xEE, sizeof(dst));
    nocturne_gl_read_pixels(GL_BACK, 3, 2, GL_BGRA, GL_UNSIGNED_BYTE, dst, 16);

    CHECK_EQ(g_read_format, (GLenum)GL_RGBA);
    CHECK_EQ(g_read_type, (GLenum)GL_UNSIGNED_BYTE);
    const std::vector<int> expected = {GL_PACK_ALIGNMENT, 1};
    CHECK(g_stores == expected);
    gl_recorder::State &s = gl_recorder::state();
    CHECK_EQ(s.value_at("ReadBuffer", (int)s.calls.size()), (unsigned)GL_BACK);

    const unsigned char first_row[] = {0, 0, 0, 0xFF, 1, 0, 1, 0xFF, 2, 0, 2, 0xFF, 0xEE};
    CHECK(memcmp(dst, first_row, sizeof(first_row)) == 0);
    const unsigned char second_row[] = {1, 1, 0, 0xFF, 2, 1, 1, 0xFF, 3, 1, 2, 0xFF, 0xEE};
    CHECK(memcmp(dst + 16, second_row, sizeof(second_row)) == 0);
}

// A larger read after a smaller one gets the whole frame, not the first one's.
NOCTURNE_TEST(a_larger_read_reads_all_of_it) {
    install();
    unsigned short small[1];
    nocturne_gl_read_pixels(GL_BACK, 1, 1, GL_RGB, GL_UNSIGNED_SHORT_5_6_5, small, 2);
    CHECK_EQ((unsigned)small[0], 0u);

    unsigned char big[4 * 3 * 4];
    nocturne_gl_read_pixels(GL_BACK, 4, 4, GL_RGB, GL_UNSIGNED_BYTE, big, 12);
    const unsigned char last[] = {3, 3, 6};
    CHECK(memcmp(big + 3 * 12 + 3 * 3, last, sizeof(last)) == 0);
}

NOCTURNE_TEST_MAIN()
