// =============================================================================
// MENU RENDER — how a front-end list is drawn, and what a key does to it
// =============================================================================
//
// The shipped routine's look — the title, the lines a row apart or two, the
// chosen line flat or shimmering with the moon, the copyright and trademark —
// with the version in the corner and the shimmer off the cosmetic stream; and
// its keys: up and down wrapping, left and right only on a line with a value.

#include "core/menu_render.h"
#include "menu_render_support.h"
#include "nocturne_test.h"

#include <string>

namespace {

using menu_render_support::stand;

char kResolution[] = "Resolution : 640x480";
char kCredits[] = "Credits";
char kQuit[] = "Quit";
char kTitle[] = "Options";
char *kLines[] = {kResolution, kCredits, kQuit};

int render(int *selected, int y, char *title) {
    return nocturne_menu_render(kLines, 3, selected, y, title);
}

} // namespace

// A title, then the lines a row apart; the chosen one lit, in the moon's second
// half flat.
NOCTURNE_TEST(a_titled_list_is_single_spaced) {
    stand.reset();
    int selected = 1;
    CHECK_EQ(render(&selected, 100, kTitle), -1);
    CHECK_EQ(stand.drawn[0].text, std::string(kTitle));
    CHECK_EQ(stand.drawn[0].x, 0xa0);
    CHECK_EQ(stand.drawn[0].y, 100);
    CHECK_EQ(stand.drawn[0].colour, 7);
    CHECK_EQ(stand.of(kResolution)[0].y, 120);
    CHECK_EQ(stand.of(kResolution)[0].colour, 0xf8);
    CHECK_EQ(stand.of(kResolution)[0].alpha, 48000);
    CHECK_EQ(stand.of(kCredits).size(), (size_t)1);
    CHECK_EQ(stand.of(kCredits)[0].y, 130);
    CHECK_EQ(stand.of(kCredits)[0].colour, 0xff);
    CHECK_EQ(stand.of(kQuit)[0].y, 140);
}

NOCTURNE_TEST(an_untitled_list_is_double_spaced) {
    stand.reset();
    int selected = 0;
    render(&selected, 250, nullptr);
    CHECK_EQ(stand.of(kResolution)[0].y, 250);
    CHECK_EQ(stand.of(kCredits)[0].y, 270);
    CHECK_EQ(stand.of(kQuit)[0].y, 290);
}

// In the moon's first half the chosen line shimmers: five copies a pixel or
// two off, each at an alpha off the cosmetic stream, under the line itself.
NOCTURNE_TEST(the_chosen_line_shimmers_off_the_cosmetic_stream) {
    stand.reset();
    stand.first_half = 1;
    stand.rng = {3, 0, 0x8000};
    int selected = 2;
    render(&selected, 250, nullptr);
    const auto quit = stand.of(kQuit);
    CHECK_EQ(quit.size(), (size_t)6);
    CHECK_EQ(quit[0].x, 0x9e + 3);
    CHECK_EQ(quit[0].y, 290 - 2);
    CHECK_EQ(quit[0].alpha, (0x8000 * 48000) >> 16);
    CHECK_EQ(quit[0].colour, 7);
    CHECK_EQ(quit[1].x, 0x9e);
    CHECK_EQ(quit[1].alpha, 0);
    CHECK_EQ(quit[5].x, 0xa0);
    CHECK_EQ(quit[5].y, 290);
    CHECK_EQ(quit[5].colour, 7);
}

// The copyright in the bottom right, its system-text form where that is on;
// the trademark by the logo and the version in the bottom left, both faint.
NOCTURNE_TEST(the_corners) {
    const std::string plain = "Nocturne 1999 Terminal Reality Inc.  Patent Pending.";
    const std::string os = "Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.";
    stand.reset();
    int selected = 0;
    render(&selected, 250, nullptr);
    CHECK_EQ(stand.of(plain).size(), (size_t)1);
    CHECK_EQ(stand.of(plain)[0].x, 0x27f - (int)plain.size() * 8);
    CHECK_EQ(stand.of(plain)[0].y, 0x1df - 10);
    CHECK_EQ(stand.of(plain)[0].alpha, 0xffff);
    CHECK_EQ(stand.of(g_MenuTrademarkGlyph)[0].x, 0x206);
    CHECK_EQ(stand.of(g_MenuTrademarkGlyph)[0].y, 99);
    CHECK_EQ(stand.of(g_MenuTrademarkGlyph)[0].alpha, 0x8000);
    CHECK_EQ(stand.of("v1.2.3")[0].x, 4);
    CHECK_EQ(stand.of("v1.2.3")[0].y, 0x1df - 10);
    CHECK_EQ(stand.alpha, 0xffff);

    stand.reset();
    g_UseOSFonts = 1;
    render(&selected, 250, nullptr);
    CHECK_EQ(stand.of(plain).size(), (size_t)0);
    CHECK_EQ(stand.of(os).size(), (size_t)1);
}

// Up and down move the cursor, wrapping, and say input happened.
NOCTURNE_TEST(up_and_down_wrap) {
    stand.reset();
    int selected = 0;
    stand.pressed = {DIK_NUMPAD8};
    CHECK_EQ(render(&selected, 250, nullptr), -1);
    CHECK_EQ(selected, 2);
    CHECK_EQ(g_MenuInputHappened, 1);

    stand.pressed = {DIK_NUMPAD2};
    render(&selected, 250, nullptr);
    CHECK_EQ(selected, 0);
    stand.pressed = {DIK_NUMPAD2};
    render(&selected, 250, nullptr);
    CHECK_EQ(selected, 1);

    render(&selected, 250, nullptr);
    CHECK_EQ(g_MenuInputHappened, 0);
}

// On a line with a value, left answers it as left and right as right; Return
// answers any line.
NOCTURNE_TEST(left_and_right_on_a_value_return_on_any) {
    stand.reset();
    int selected = 0;
    stand.pressed = {DIK_NUMPAD4};
    CHECK_EQ(render(&selected, 250, nullptr), 0);
    CHECK_EQ(g_MenuLeftRightPressed, 1);
    stand.pressed = {DIK_NUMPAD6};
    CHECK_EQ(render(&selected, 250, nullptr), 0);
    CHECK_EQ(g_MenuLeftRightPressed, 0);
    stand.pressed = {DIK_RETURN};
    CHECK_EQ(render(&selected, 250, nullptr), 0);

    // Credits has no value: left and right are left where they are.
    selected = 1;
    g_MenuLeftRightPressed = 1;
    stand.pressed = {DIK_NUMPAD4, DIK_NUMPAD6};
    CHECK_EQ(render(&selected, 250, nullptr), -1);
    CHECK_EQ(stand.pressed.size(), (size_t)2);
    CHECK_EQ(g_MenuLeftRightPressed, 1);
    stand.pressed = {DIK_RETURN};
    CHECK_EQ(render(&selected, 250, nullptr), 1);

    // The line the cursor was on decides, not the one it moved to.
    selected = 1;
    stand.pressed = {DIK_NUMPAD8, DIK_NUMPAD4};
    CHECK_EQ(render(&selected, 250, nullptr), -1);
    CHECK_EQ(selected, 0);
}

NOCTURNE_TEST_MAIN()
