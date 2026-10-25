// =============================================================================
// GL PIXELS — the game's bit depths as GL formats, and its rows the other way up
// =============================================================================

#include "gl/gl_pixels.h"
#include "nocturne_test.h"
#include "shims/renderer/gl_recorder.h"

#include <cstring>
#include <vector>

NOCTURNE_TEST(each_depth_the_game_draws_at_has_a_format) {
    GLenum format = 0, type = 0;
    CHECK(nocturne_gl_format_for_bpp(16, &format, &type));
    CHECK_EQ(format, (GLenum)GL_RGB);
    CHECK_EQ(type, (GLenum)GL_UNSIGNED_SHORT_5_6_5);
    CHECK_EQ(nocturne_gl_pixel_bytes(format, type), 2);

    CHECK(nocturne_gl_format_for_bpp(24, &format, &type));
    CHECK_EQ(format, (GLenum)GL_RGB);
    CHECK_EQ(type, (GLenum)GL_UNSIGNED_BYTE);
    CHECK_EQ(nocturne_gl_pixel_bytes(format, type), 3);

    // ARGB8888 in memory on little-endian is B, G, R, A.
    CHECK(nocturne_gl_format_for_bpp(32, &format, &type));
    CHECK_EQ(format, (GLenum)GL_BGRA);
    CHECK_EQ(type, (GLenum)GL_UNSIGNED_BYTE);
    CHECK_EQ(nocturne_gl_pixel_bytes(format, type), 4);

    CHECK(!nocturne_gl_format_for_bpp(8, &format, &type));
}

// Each pixel of a row, in its format, and nothing past the row's end.
NOCTURNE_TEST(a_row_is_packed_as_its_format_says) {
    const unsigned char rgba[8] = {0x10, 0x80, 0xF0, 0x55, 0x01, 0x02, 0x03, 0x04};
    unsigned char out[12];

    memset(out, 0xEE, sizeof(out));
    nocturne_gl_pack_rgba_row(rgba, 2, GL_BGRA, GL_UNSIGNED_BYTE, out);
    const unsigned char bgra[] = {0xF0, 0x80, 0x10, 0x55, 0x03, 0x02, 0x01, 0x04, 0xEE};
    CHECK(memcmp(out, bgra, sizeof(bgra)) == 0);

    memset(out, 0xEE, sizeof(out));
    nocturne_gl_pack_rgba_row(rgba, 2, GL_RGB, GL_UNSIGNED_BYTE, out);
    const unsigned char rgb[] = {0x10, 0x80, 0xF0, 0x01, 0x02, 0x03, 0xEE};
    CHECK(memcmp(out, rgb, sizeof(rgb)) == 0);

    // To the nearest level: 0x10 is 1.94 of 31, 0x80 31.6 of 63, 0xF0 29.2 of 31.
    unsigned short packed[3] = {0, 0, 0xEEEE};
    nocturne_gl_pack_rgba_row(rgba, 2, GL_RGB, GL_UNSIGNED_SHORT_5_6_5, (unsigned char *)packed);
    CHECK_EQ((unsigned)packed[0], (2u << 11) | (32u << 5) | 29u);
    CHECK_EQ((unsigned)packed[1], (0u << 11) | (0u << 5) | 0u);
    CHECK_EQ((unsigned)packed[2], 0xEEEEu);

    memset(out, 0xEE, sizeof(out));
    nocturne_gl_pack_rgba_row(rgba, 0, GL_BGRA, GL_UNSIGNED_BYTE, out);
    CHECK_EQ((int)out[0], 0xEE);
}

// Every byte value rounds to its nearest level.
NOCTURNE_TEST(the_levels_are_the_nearest) {
    const NocturneGlLevels &levels = nocturne_gl_levels();
    for (unsigned i = 0; i < 256; ++i) {
        CHECK_EQ((unsigned)levels.to5[i], (unsigned)(i * 31.0 / 255.0 + 0.5));
        CHECK_EQ((unsigned)levels.to6[i], (unsigned)(i * 63.0 / 255.0 + 0.5));
    }
    CHECK(&nocturne_gl_levels() == &levels);
}

namespace {

std::vector<int> g_stores;

void APIENTRY record_store(GLenum name, GLint value) {
    g_stores.push_back((int)name);
    g_stores.push_back((int)value);
}

} // namespace

// Desktop GL converts as it reads; the row length is the pitch in pixels, and it
// is put back afterwards for whoever reads next.
NOCTURNE_TEST(a_read_asks_for_the_rows_the_pitch_apart) {
    gl_recorder::install();
    gl.PixelStorei = record_store;
    g_stores.clear();
    unsigned char dst[64 * 4];
    nocturne_gl_read_pixels(GL_BACK, 10, 4, GL_RGB, GL_UNSIGNED_SHORT_5_6_5, dst, 64);

    const std::vector<int> expected = {GL_PACK_ALIGNMENT,  1, GL_PACK_ROW_LENGTH, 32,
                                       GL_PACK_ROW_LENGTH, 0};
    CHECK(g_stores == expected);
    gl_recorder::State &s = gl_recorder::state();
    CHECK(s.index_of_last("ReadBuffer") >= 0);
    CHECK(s.index_of_last("ReadBuffer") < s.index_of_last("ReadPixels"));
    CHECK_EQ(s.value_at("ReadBuffer", s.index_of_last("ReadPixels")), (unsigned)GL_BACK);
}

NOCTURNE_TEST(rows_are_flipped_end_for_end_in_place) {
    unsigned char odd[3 * 2] = {1, 1, 2, 2, 3, 3};
    nocturne_gl_flip_rows(odd, 2, 3);
    const unsigned char odd_flipped[] = {3, 3, 2, 2, 1, 1};
    CHECK(memcmp(odd, odd_flipped, sizeof(odd)) == 0);

    unsigned char even[2 * 2] = {1, 2, 3, 4};
    nocturne_gl_flip_rows(even, 2, 2);
    const unsigned char even_flipped[] = {3, 4, 1, 2};
    CHECK(memcmp(even, even_flipped, sizeof(even)) == 0);
}

NOCTURNE_TEST_MAIN()
