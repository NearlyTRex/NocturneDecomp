// =============================================================================
// MOON RENDER — the front end's backdrop at the game's resolution
// =============================================================================
//
// The moon and its bats in 3D through the front end's scene, two layers of
// cloud over the whole screen at the layout's scale, and the logo's animation
// over the layout; the lighting it found put back.

#include "core/moon_render.h"
#include "moon_render_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <string>
#include <vector>

namespace {

using moon_render_support::stand;

CMoon s_moon = {};

// The cloud texels: index 4 (palette entry 1, which adds 1) at the texture's
// first texel, index 8 (entry 2, which adds 0x100) everywhere else.
void mark_first_cloud_texel() {
    for (int i = 0; i < 256 * 256; i++)
        g_MoonCloudTexture.raw[i] = 8;
    g_MoonCloudTexture.raw[0] = 4;
    g_Hardware32BitPalette[1] = 0x1;
    g_Hardware32BitPalette[2] = 0x100;
}

int index_of(const std::string &call) {
    for (size_t i = 0; i < stand.calls.size(); i++) {
        if (stand.calls[i] == call)
            return (int)i;
    }
    return -1;
}

} // namespace

// The frame cleared, the moon drawn through the widened scene and lit as the
// shipped routine lights it, the scene closed before the clouds, and the logo
// added over them all.
NOCTURNE_TEST(the_moon_is_drawn_through_the_front_ends_scene) {
    moon_render_support::screen(4, 4, 32, 0);
    stand.reset();
    stand.widened = 1.5f;
    s_moon.rotation_phase = 0.75f;
    nocturne_moon_render(&s_moon);
    CHECK_EQ(stand.calls[0], std::string("audio"));
    CHECK_EQ(stand.calls[1], std::string("clear"));
    CHECK_EQ(stand.calls[2], std::string("clear depth"));
    CHECK_EQ(stand.calls[3], std::string("widen"));
    CHECK(index_of("narrow") < index_of("palette"));
    CHECK(index_of("palette") < index_of("logo"));
    CHECK_EQ(stand.fields_of_view[0], 168.0f);
    CHECK_EQ(stand.vertices[0].x, 12.0f);
    CHECK_EQ(stand.vertices[0].y, 12.0f);
    CHECK_EQ(stand.vertices[0].z, 72.0f);
    CHECK_EQ(stand.models.size(), (size_t)1);
    CHECK(stand.models[0].model == &s_moon.moon);
    CHECK_EQ(stand.models[0].flags, 0x205);
    CHECK_EQ(stand.models[0].light.x, -37000);
    CHECK_EQ(stand.models[0].light.z, 37000);
    CHECK_EQ(stand.models[0].ambient, 0x280);
    CHECK_EQ(stand.models[0].rendering_mode, 1);
    CHECK_EQ(stand.flat_colours[0], 0x10000);
}

// The logo's frame comes from the animation timer, past the last frame the
// first, added over the layout at its top left.
NOCTURNE_TEST(the_logo_is_added_over_the_layout) {
    moon_render_support::screen(4, 4, 32, 0);
    stand.reset();
    g_MoonAnimationTimer = 12.0f;
    nocturne_moon_render(&s_moon);
    CHECK_EQ(stand.logos.size(), (size_t)4);
    CHECK_EQ(stand.logos[0], 12);
    CHECK_EQ(stand.logos[1], 0);
    CHECK_EQ(stand.logos[2], 0);
    CHECK_EQ(stand.logos[3], 48000);
    CHECK_EQ(stand.blend_modes.size(), (size_t)2);
    CHECK_EQ(stand.blend_modes[0], 1);
    CHECK_EQ(stand.blend_modes[1], 0);

    stand.reset();
    g_MoonAnimationTimer = 45.0f;
    nocturne_moon_render(&s_moon);
    CHECK_EQ(stand.logos[0], 0);
}

// The set is left lit as it was found.
NOCTURNE_TEST(the_lighting_is_put_back) {
    moon_render_support::screen(4, 4, 32, 0);
    stand.reset();
    nocturne_moon_render(&s_moon);
    CHECK_EQ(g_CDemonSetPtr->rendering_mode, 7);
    CHECK_EQ(g_CDemonSetPtr->light_direction.y, 2);
    CHECK_EQ(g_CDemonSetPtr->ambient_base_quick, 4);
    CHECK_EQ(g_CDemonSetPtr->flat_color.r, 5);
    CHECK_EQ(g_CDemonSetPtr->flat_color.b, 7);
}

// Each bat on its course is drawn at its place and a quarter turn round, lit
// at the level the bat before it left; one not yet started is skipped, and one
// past its course's last frame only sets the level.
NOCTURNE_TEST(the_bats_fly_their_courses) {
    moon_render_support::screen(4, 4, 32, 0);
    stand.reset();
    g_MoonBatsEnabled = 1;
    g_MoonBatCourses[0].len = 10;
    g_MoonBats[1] = SBat{0, 2.0f, 3.0f, {1.0f, 2.0f, 3.0f}};
    g_MoonBats[2] = SBat{0, 9.5f, 0.0f, {0.0f, 0.0f, 0.0f}};
    g_MoonBats[3] = SBat{0, 7.5f, 0.0f, {0.0f, 0.0f, 0.0f}};
    nocturne_moon_render(&s_moon);
    CHECK_EQ(stand.models.size(), (size_t)3);
    const moon_render_support::Model &first = stand.models[1];
    CHECK(first.model == &g_MoonBatModel);
    CHECK_EQ(first.frame, 3);
    CHECK_EQ(first.flags, -1);
    CHECK_EQ(first.light.x, -0x4844);
    CHECK_EQ(first.ambient, 0x2000);
    CHECK_EQ(stand.vertices[1].x, 11.0f);
    CHECK_EQ(stand.vertices[1].z, 33.0f);
    CHECK_EQ(stand.bat_yaws[0], 1.0f + 1.570796f);
    // The second bat, past its last frame, is not drawn but sets the level
    // the third is lit at: 0.95 of the way, (0.95 - 0.5) * 8192.
    CHECK_EQ(stand.models[2].ambient, 3686);

    // Without the bats only the moon is drawn, and the bats' light is set.
    stand.reset();
    nocturne_moon_render(&s_moon);
    CHECK_EQ(stand.models.size(), (size_t)1);
}

// The clouds cover the whole screen: each pixel adds the nearer layer at twice
// the farther's scale, held at 0xff a byte, each scrolled.
NOCTURNE_TEST(the_clouds_are_added_over_the_screen) {
    moon_render_support::screen(8, 8, 32, 0);
    stand.reset();
    mark_first_cloud_texel();
    nocturne_moon_render(&s_moon);
    CHECK_EQ(moon_render_support::pixel(1, 1), 0x2u);   // both layers' first texel
    CHECK_EQ(moon_render_support::pixel(2, 2), 0x101u); // the farther's only
    CHECK_EQ(moon_render_support::pixel(4, 4), 0x200u); // neither's
    CHECK_EQ(moon_render_support::pixel(7, 7), 0x200u);

    moon_render_support::screen(8, 8, 32, 0xff);
    stand.reset();
    mark_first_cloud_texel();
    nocturne_moon_render(&s_moon);
    CHECK_EQ(moon_render_support::pixel(0, 0), 0xffu);

    moon_render_support::screen(8, 8, 32, 0);
    stand.reset();
    mark_first_cloud_texel();
    g_MoonCloudScrollX = 1 << 16;
    nocturne_moon_render(&s_moon);
    CHECK_EQ(moon_render_support::pixel(0, 0), 0x200u); // both layers a texel on
}

// At twice the layout each layout pixel covers two screen pixels a side.
NOCTURNE_TEST(the_clouds_keep_the_layouts_scale) {
    moon_render_support::screen(16, 16, 32, 0);
    stand.reset();
    stand.layout = {2.0f, 0, 0};
    mark_first_cloud_texel();
    nocturne_moon_render(&s_moon);
    CHECK_EQ(moon_render_support::pixel(3, 3), 0x2u);
    CHECK_EQ(moon_render_support::pixel(4, 4), 0x101u);
    CHECK_EQ(moon_render_support::pixel(8, 8), 0x200u);
}

// The clouds are 32-bit pixels; at 16 bits the screen is left as it is.
NOCTURNE_TEST(sixteen_bits_has_no_clouds) {
    moon_render_support::screen(4, 4, 16, 0);
    stand.reset();
    mark_first_cloud_texel();
    nocturne_moon_render(&s_moon);
    CHECK_EQ(moon_render_support::pixel(0, 0), 0u);
    CHECK(index_of("palette") >= 0);
}

NOCTURNE_TEST_MAIN()
