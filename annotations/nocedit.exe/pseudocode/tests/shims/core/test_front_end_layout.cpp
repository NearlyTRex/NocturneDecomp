// =============================================================================
// FRONT-END LAYOUT — the 640x480 screens drawn at the game's resolution
// =============================================================================
//
// Where the layout sits and how large; the mode the front end runs at; how its
// pictures are enlarged, and drawn.

#include "core/front_end_layout.h"
#include "gl/upscaler.h"
#include "nocturne.h"
#include "nocturne_test.h"
#include "ui_support.h"

#include <vector>

namespace {

using ui_support::stand;

CGame s_game = {};

void pick(int width, int height, int accelerated) {
    s_game = CGame();
    s_game.game_pixx = width;
    s_game.game_pixy = height;
    g_CGamePtr = &s_game;
    g_UseDirect3D = accelerated;
}

// The alpha table the engine builds: each entry's four weights its index.
void ramp_alpha_table() {
    for (int i = 0; i < 256; i++)
        g_AlphaTable[i] = {(ushort)i, (ushort)i, (ushort)i, (ushort)i};
}

// A picture `width` x `height` whose pixel i has palette index i + 1 and the
// opacity given, all opaque when none is.
struct Picture {
    std::vector<char> raw;
    std::vector<char> opa;
    CAlphaBitmap bitmap = {};

    Picture(int width, int height, std::vector<int> opacity = {}) {
        for (int i = 0; i < width * height; i++) {
            raw.push_back((char)(i + 1));
            opa.push_back((char)(opacity.empty() ? 0xff : opacity[(size_t)i]));
        }
        bitmap.raw = raw.data();
        bitmap.opa = opa.data();
        bitmap.width = width;
        bitmap.height = height;
    }
};

} // namespace

// The layout is as large as fits and centred; at 640x480 it is the screen.
NOCTURNE_TEST(the_layout_fits_and_is_centred) {
    ui_support::screen(640, 480, 32);
    NocturneLayout layout = nocturne_layout();
    CHECK_EQ(layout.scale, 1.0f);
    CHECK_EQ(layout.left, 0);
    CHECK_EQ(layout.top, 0);

    ui_support::screen(1920, 1080, 32);
    layout = nocturne_layout();
    CHECK_EQ(layout.scale, 2.25f);
    CHECK_EQ(layout.left, 240);
    CHECK_EQ(layout.top, 0);
    CHECK_EQ(nocturne_layout_x(layout, 640), 1680);
    CHECK_EQ(nocturne_layout_y(layout, 479), 1078);
    CHECK_EQ(nocturne_layout_length(layout, 4), 9);

    ui_support::screen(1280, 1024, 32);
    layout = nocturne_layout();
    CHECK_EQ(layout.scale, 2.0f);
    CHECK_EQ(layout.left, 0);
    CHECK_EQ(layout.top, 32);
}

// A screen smaller than the layout keeps it at its own size, at the top left.
NOCTURNE_TEST(a_small_screen_keeps_the_layout_whole) {
    ui_support::screen(320, 200, 32);
    const NocturneLayout layout = nocturne_layout();
    CHECK_EQ(layout.scale, 1.0f);
    CHECK_EQ(layout.left, 0);
    CHECK_EQ(layout.top, 0);
}

// A length of a pixel or more never shrinks to nothing, and nothing stays
// nothing.
NOCTURNE_TEST(a_length_is_at_least_a_pixel) {
    const NocturneLayout layout = {0.25f, 0, 0};
    CHECK_EQ(nocturne_layout_length(layout, 1), 1);
    CHECK_EQ(nocturne_layout_length(layout, 0), 0);
}

// The front end runs at the picked resolution with acceleration, its width
// down to a multiple of 16; else, or for a pick smaller than the layout,
// 640x480.
NOCTURNE_TEST(the_front_end_runs_at_the_picked_resolution) {
    int width = 0;
    int height = 0;
    pick(1920, 1080, 1);
    nocturne_front_end_mode(&width, &height);
    CHECK_EQ(width, 1920);
    CHECK_EQ(height, 1080);
    pick(1366, 768, 1);
    nocturne_front_end_mode(&width, &height);
    CHECK_EQ(width, 1360);
    CHECK_EQ(height, 768);
    pick(1920, 1080, 0);
    nocturne_front_end_mode(&width, &height);
    CHECK_EQ(width, 640);
    CHECK_EQ(height, 480);
    pick(512, 384, 1);
    nocturne_front_end_mode(&width, &height);
    CHECK_EQ(width, 640);
    pick(800, 400, 1);
    nocturne_front_end_mode(&width, &height);
    CHECK_EQ(height, 480);
    g_UseDirect3D = 0;
}

// A mode the renderer refuses falls back to 640x480; neither taken is 0.
NOCTURNE_TEST(a_refused_mode_falls_back_to_the_layouts) {
    stand.reset();
    pick(1920, 1080, 1);
    CHECK_EQ(nocturne_front_end_set_mode(), 1);
    CHECK_EQ(stand.modes.size(), (size_t)1);
    CHECK_EQ(stand.modes[0], std::string("1920x1080x32"));

    stand.reset();
    stand.refused = {1920};
    CHECK_EQ(nocturne_front_end_set_mode(), 1);
    CHECK_EQ(stand.modes.size(), (size_t)2);
    CHECK_EQ(stand.modes[1], std::string("640x480x32"));
    CHECK_EQ(g_WindowWidth, 640);

    stand.reset();
    stand.refused = {1920, 640};
    CHECK_EQ(nocturne_front_end_set_mode(), 0);
    g_UseDirect3D = 0;
}

// Pixel-art upscalers keep the pictures' pixels, Standard does at a whole
// scale, and the rest blend.
NOCTURNE_TEST(the_upscaler_picks_how_pictures_are_enlarged) {
    stand.reset();
    stand.upscaler = NOCTURNE_UPSCALER_NEAREST;
    CHECK_EQ(nocturne_layout_filter(2.25f), NOCTURNE_LAYOUT_FILTER_NEAREST);
    stand.upscaler = NOCTURNE_UPSCALER_XBR;
    CHECK_EQ(nocturne_layout_filter(2.25f), NOCTURNE_LAYOUT_FILTER_NEAREST);
    stand.upscaler = NOCTURNE_UPSCALER_STANDARD;
    CHECK_EQ(nocturne_layout_filter(2.0f), NOCTURNE_LAYOUT_FILTER_NEAREST);
    CHECK_EQ(nocturne_layout_filter(2.25f), NOCTURNE_LAYOUT_FILTER_SMOOTH);
    stand.upscaler = NOCTURNE_UPSCALER_SMOOTH;
    CHECK_EQ(nocturne_layout_filter(2.0f), NOCTURNE_LAYOUT_FILTER_SMOOTH);
    stand.upscaler = NOCTURNE_UPSCALER_FSR;
    CHECK_EQ(nocturne_layout_filter(2.0f), NOCTURNE_LAYOUT_FILTER_SMOOTH);
}

// At its own size a picture is the engine's display.
NOCTURNE_TEST(a_picture_at_its_own_size_is_displayed) {
    ui_support::screen(64, 48, 32);
    stand.reset();
    Picture picture(2, 2);
    nocturne_alpha_display_scaled(&picture.bitmap, 3, 4, 2, 2, 0xffff,
                                  NOCTURNE_LAYOUT_FILTER_SMOOTH);
    CHECK_EQ(stand.displayed.size(), (size_t)1);
    CHECK_EQ(stand.displayed_at[0], 3);
    CHECK_EQ(stand.displayed_at[1], 4);

    // Its own width but not its height is scaled.
    nocturne_alpha_display_scaled(&picture.bitmap, 0, 0, 2, 4, 0xffff,
                                  NOCTURNE_LAYOUT_FILTER_NEAREST);
    CHECK_EQ(stand.displayed.size(), (size_t)1);
    CHECK_EQ(stand.rows32.size(), (size_t)4);
}

// NEAREST hands each row's repeated indices to the engine's row blend, cut to
// the screen.
NOCTURNE_TEST(nearest_repeats_each_pixel_through_the_engine_blend) {
    ui_support::screen(8, 8, 32);
    stand.reset();
    Picture picture(2, 2);
    nocturne_alpha_display_scaled(&picture.bitmap, -1, 0, 4, 4, 0x8000,
                                  NOCTURNE_LAYOUT_FILTER_NEAREST);
    CHECK_EQ(stand.palettes, 1);
    CHECK_EQ(stand.rows32.size(), (size_t)4);
    CHECK_EQ(stand.rows32[0].count, 3);
    CHECK_EQ(stand.rows32[0].alpha, 0x8000);
    CHECK_EQ(stand.rows32[0].first, 1u); // column 1 of 4 is still the first pixel
    CHECK_EQ(stand.rows32[2].first, 3u);
    CHECK(stand.rows32[0].dest == g_ScreenBufferArray[0]);
}

// At 16 bits the rows go to the 16-bit blend, and SMOOTH is NEAREST; at 8,
// nothing is drawn.
NOCTURNE_TEST(sixteen_bits_takes_its_own_blend_and_eight_draws_nothing) {
    ui_support::screen(8, 8, 16);
    stand.reset();
    Picture picture(2, 2);
    nocturne_alpha_display_scaled(&picture.bitmap, 0, 0, 4, 4, 0xffff,
                                  NOCTURNE_LAYOUT_FILTER_SMOOTH);
    CHECK_EQ(stand.rows16.size(), (size_t)4);
    CHECK(stand.rows32.empty());

    ui_support::screen(8, 8, 8);
    stand.reset();
    nocturne_alpha_display_scaled(&picture.bitmap, 0, 0, 4, 4, 0xffff,
                                  NOCTURNE_LAYOUT_FILTER_NEAREST);
    CHECK(stand.rows16.empty());
    CHECK(stand.rows32.empty());
}

// A picture off the screen, or of nothing, draws nothing.
NOCTURNE_TEST(nothing_on_the_screen_draws_nothing) {
    ui_support::screen(8, 8, 32);
    stand.reset();
    Picture picture(2, 2);
    nocturne_alpha_display_scaled(&picture.bitmap, 8, 0, 4, 4, 0xffff, 0);
    nocturne_alpha_display_scaled(&picture.bitmap, -5, 0, 4, 4, 0xffff, 0);
    nocturne_alpha_display_scaled(&picture.bitmap, 0, 8, 4, 4, 0xffff, 0);
    nocturne_alpha_display_scaled(&picture.bitmap, 0, -5, 4, 4, 0xffff, 0);
    nocturne_alpha_display_scaled(&picture.bitmap, 0, 0, 0, 4, 0xffff, 0);
    nocturne_alpha_display_scaled(&picture.bitmap, 0, 0, 4, 0, 0xffff, 0);
    Picture empty(0, 0);
    nocturne_alpha_display_scaled(&empty.bitmap, 0, 0, 4, 4, 0xffff, 0);
    Picture flat(2, 0);
    nocturne_alpha_display_scaled(&flat.bitmap, 0, 0, 4, 4, 0xffff, 0);
    CHECK_EQ(stand.palettes, 0);
    CHECK(stand.rows32.empty());
}

// SMOOTH mixes neighbouring colours by distance, the edges holding, and a
// wholly covered pixel is written as it is.
NOCTURNE_TEST(smooth_mixes_neighbours) {
    ui_support::screen(4, 1, 32);
    stand.reset();
    ramp_alpha_table();
    g_Hardware32BitPalette[1] = 0x00ff0000;
    g_Hardware32BitPalette[2] = 0x000000ff;
    Picture picture(2, 1);
    nocturne_alpha_display_scaled(&picture.bitmap, 0, 0, 4, 1, 0xffff,
                                  NOCTURNE_LAYOUT_FILTER_SMOOTH);
    CHECK_EQ(ui_support::pixel32(0, 0), 0x00ff0000u);
    CHECK_EQ(ui_support::pixel32(1, 0), 0x00bf0040u); // three quarters red
    CHECK_EQ(ui_support::pixel32(3, 0), 0x000000ffu);
    CHECK(stand.rows32.empty());
}

// A clear pixel lends none of its colour, and one wholly clear is left alone.
NOCTURNE_TEST(smooth_takes_no_colour_from_clear_pixels) {
    ui_support::screen(4, 1, 32);
    stand.reset();
    ramp_alpha_table();
    g_Hardware32BitPalette[1] = 0x00ff0000;
    g_Hardware32BitPalette[2] = 0x000000ff;
    ((unsigned *)g_ScreenBufferArray[0])[3] = 0x00123456;
    Picture picture(2, 1, {0xff, 0});
    nocturne_alpha_display_scaled(&picture.bitmap, 0, 0, 4, 1, 0xffff,
                                  NOCTURNE_LAYOUT_FILTER_SMOOTH);
    // A quarter of the way to the clear pixel: three quarters covered, red.
    const unsigned mixed = ui_support::pixel32(1, 0);
    CHECK_EQ(mixed & 0xffffu, 0u);
    CHECK_EQ(ui_support::pixel32(3, 0), 0x00123456u);
}

// At the edge a pixel reads the clear first pixel wholly and its opaque
// neighbour not at all: no cover, so it is left alone too.
NOCTURNE_TEST(smooth_leaves_a_pixel_its_opaque_neighbour_has_no_share_in) {
    ui_support::screen(4, 1, 32);
    stand.reset();
    ramp_alpha_table();
    g_Hardware32BitPalette[2] = 0x000000ff;
    ((unsigned *)g_ScreenBufferArray[0])[0] = 0x00123456;
    Picture picture(2, 1, {0, 0xff});
    nocturne_alpha_display_scaled(&picture.bitmap, 0, 0, 4, 1, 0xffff,
                                  NOCTURNE_LAYOUT_FILTER_SMOOTH);
    CHECK_EQ(ui_support::pixel32(0, 0), 0x00123456u);
    CHECK_EQ(ui_support::pixel32(3, 0), 0x000000ffu);
}

// A partly covered pixel blends as renderAlphaRow32 does: over what is there,
// or added to it in the additive blend mode; one barely covered is left alone.
NOCTURNE_TEST(smooth_blends_as_the_engine_row_does) {
    ui_support::screen(2, 1, 32);
    stand.reset();
    ramp_alpha_table();
    g_Hardware32BitPalette[1] = 0x000000ff;
    Picture picture(1, 1);
    ((unsigned *)g_ScreenBufferArray[0])[0] = 0x10;
    g_BlendMode = 0;
    nocturne_alpha_display_scaled(&picture.bitmap, 0, 0, 2, 1, 0x8000,
                                  NOCTURNE_LAYOUT_FILTER_SMOOTH);
    CHECK_EQ(ui_support::pixel32(0, 0), 134u);

    ((unsigned *)g_ScreenBufferArray[0])[0] = 0x10;
    g_BlendMode = 1;
    nocturne_alpha_display_scaled(&picture.bitmap, 0, 0, 2, 1, 0x8000,
                                  NOCTURNE_LAYOUT_FILTER_SMOOTH);
    CHECK_EQ(ui_support::pixel32(0, 0), 142u);

    // Added, a channel is held at 0xff.
    ((unsigned *)g_ScreenBufferArray[0])[0] = 0xff;
    nocturne_alpha_display_scaled(&picture.bitmap, 0, 0, 2, 1, 0x8000,
                                  NOCTURNE_LAYOUT_FILTER_SMOOTH);
    CHECK_EQ(ui_support::pixel32(0, 0), 0xffu);

    ((unsigned *)g_ScreenBufferArray[0])[0] = 0x10;
    g_BlendMode = 0;
    nocturne_alpha_display_scaled(&picture.bitmap, 0, 0, 2, 1, 0x100,
                                  NOCTURNE_LAYOUT_FILTER_SMOOTH);
    CHECK_EQ(ui_support::pixel32(0, 0), 0x10u);
}

// A layout picture is drawn where and as large as the layout shows it.
NOCTURNE_TEST(a_layout_picture_follows_the_layout) {
    ui_support::screen(640, 480, 32);
    stand.reset();
    Picture picture(4, 2);
    nocturne_layout_display(&picture.bitmap, 10, 20, 0xffff);
    CHECK_EQ(stand.displayed_at[0], 10);
    CHECK_EQ(stand.displayed_at[1], 20);

    ui_support::screen(1280, 960, 32);
    stand.reset();
    stand.upscaler = NOCTURNE_UPSCALER_STANDARD;
    nocturne_layout_display(&picture.bitmap, 10, 20, 0xffff);
    CHECK_EQ(stand.rows32.size(), (size_t)4);
    CHECK_EQ(stand.rows32[0].count, 8);
    CHECK(stand.rows32[0].dest == (unsigned *)g_ScreenBufferArray[40] + 20);
}

NOCTURNE_TEST_MAIN()
