// =============================================================================
// OPTIONS MENU — Options, and the Graphic Options and Gameplay pages under it
// =============================================================================
//
// The shipped Graphics Options screen's display lines, and a Gameplay page
// for what is neither display nor device: what each line reads, what a press
// on it changes, and the cards and renderers the shipped screen pinned to a
// mode, checked every frame.

#include "front_support.h"
#include "game/options_menu.h"
#include "nocturne_test.h"

#include <string>
#include <vector>

namespace {

using front_support::game;
using front_support::last;
using front_support::lines_of;
using front_support::Press;
using front_support::stand;

enum { OPT_GAMEPLAY, OPT_GRAPHIC, OPT_SOUND, OPT_CONTROL, OPT_CHEATS, OPT_CREDITS };
enum { G_RESOLUTION, G_WINDOW, G_HALO, G_ACCEL, G_API, G_CARD, G_BITS, G_UPSCALER, G_NEXT };
enum { P_ALWAYS_RUN, P_AIMING, P_AUTO_HEALTH, P_SUBTITLES, P_FONT, P_MENU_FONT, P_RATING };

const char kGraphic[] = "Graphic Options";
const char kGameplay[] = "Gameplay";

Press pick(int line, bool left = false) {
    Press press;
    press.line = line;
    press.left = left;
    return press;
}

// Runs Graphic Options over `presses`, then lets it go.
void graphics(std::initializer_list<Press> presses) {
    stand.presses = presses;
    nocturne_graphics_options_menu();
}

// Runs Gameplay, from Options, over `presses`.
void gameplay(std::initializer_list<Press> presses) {
    stand.presses = presses;
    stand.presses.push_front(pick(OPT_GAMEPLAY));
    nocturne_options_menu(0);
}

// The Graphic Options line at `index` on its last frame.
std::string graphic_line(int index) {
    return lines_of(kGraphic).at((size_t)index);
}

void accelerate(const char *dll) {
    g_UseDirect3D = 1;
    snprintf(g_RendererDllPath, sizeof(g_RendererDllPath), "%s", dll);
}

void cards(std::vector<std::string> names, std::vector<int> vendors, std::vector<int> devices) {
    stand.cards = names;
    stand.vendors = vendors;
    stand.devices = devices;
}

} // namespace

// --- Options -------------------------------------------------------------------

// From a mission's pause, the music and the moon start and stop with the
// screen; from the main menu they are already up. Either way the settings
// are written as it closes.
NOCTURNE_TEST(options_starts_what_it_needs_and_saves) {
    stand.reset();
    nocturne_options_menu(1);
    CHECK(stand.in_order({"soundConfigure", "moonInit", "saveClockTime", "swap", "moonFree",
                          "soundReset", "writeIni"}));

    stand.reset();
    game->hero_number = HERO_TYPE_GABRIELLA;
    nocturne_options_menu(0);
    CHECK_EQ(stand.count("moonInit") + stand.count("moonFree"), 0);
    CHECK_EQ(stand.count("writeIni"), 1);
    CHECK(game->hero_number == HERO_TYPE_STRANGER);
    CHECK_EQ(last().title, std::string("Option Menu"));
    CHECK_EQ(last().y, NOCTURNE_MENU_TITLE_Y);
    const std::vector<std::string> lines = {"Gameplay options", "Graphic options", "Sound options",
                                            "Control options",  "Cheats",          "Credits"};
    CHECK(last().lines == lines);
}

NOCTURNE_TEST(each_options_line_opens_its_screen) {
    const struct {
        int line;
        std::vector<std::string> calls;
    } cases[] = {
        {OPT_CREDITS, {"credits", "soundConfigure"}},
        {OPT_CHEATS, {"cheats", "clearInput"}},
    };
    for (const auto &c : cases) {
        stand.reset();
        stand.presses = {pick(c.line)};
        nocturne_options_menu(0);
        CHECK_AT(stand.in_order(c.calls), c.calls[0]);
    }

    stand.reset();
    stand.presses = {pick(OPT_GRAPHIC)};
    nocturne_options_menu(0);
    CHECK_EQ(stand.frames[1].title, std::string(kGraphic));

    stand.reset();
    stand.presses = {pick(OPT_GAMEPLAY)};
    nocturne_options_menu(0);
    CHECK_EQ(stand.frames[1].title, std::string(kGameplay));
    CHECK_EQ(stand.count("saveClockTime"), 2);

    stand.reset();
    stand.presses = {pick(OPT_SOUND)};
    nocturne_options_menu(0);
    CHECK_EQ(stand.frames[1].title, std::string("Sound Options"));

    stand.reset();
    stand.presses = {pick(OPT_CONTROL)};
    nocturne_options_menu(0);
    CHECK_EQ(stand.frames[1].title, std::string("Control Options"));
}

// Leaving Control Options in another mode goes on to that mode's bindings.
NOCTURNE_TEST(a_new_control_mode_goes_on_to_its_keys) {
    Press escape;
    escape.escape = true;
    stand.reset();
    stand.presses = {pick(OPT_CONTROL), escape};
    nocturne_options_menu(0);
    CHECK_EQ(stand.count("list"), 0);

    // Keyboard to mouse, then out.
    stand.reset();
    stand.presses = {pick(OPT_CONTROL), pick(0), escape};
    nocturne_options_menu(0);
    CHECK_EQ(stand.count("list"), 1);
    CHECK_EQ(stand.list_title, std::string("Edit key settings"));
}

// --- Graphic Options ---------------------------------------------------------------

NOCTURNE_TEST(graphic_options_reads_the_display) {
    stand.reset();
    g_CurrentGraphicsBoard = 3;
    graphics({});
    CHECK_EQ(g_CurrentGraphicsBoard, 0); // past the cards listed
    CHECK(stand.in_order({"saveClockTime", "buildCardList", "swap"}));
    const std::vector<std::string> lines = {
        "Resolution : 640x480", "Window : Windowed",   "Flashlight halo : Off",
        "Acceleration : Off",   "3D API : None",       "No 3D Hardware detected",
        "Bits per pixel : 16",  "Upscaler : Standard", "Monitor calibration"};
    CHECK(lines_of(kGraphic) == lines);
    CHECK_EQ(last().y, NOCTURNE_MENU_TITLE_Y);

    // A display the system owns has no Window line; FSR has its sharpness.
    stand.reset();
    g_nocturne_fixed_display = 1;
    stand.upscaler = NOCTURNE_UPSCALER_FSR;
    game->halo_mode = 1;
    game->game_bpp = 32;
    cards({"Riva"}, {0x10de}, {0x20});
    graphics({});
    CHECK_EQ(graphic_line(1), std::string("Flashlight halo : Simple"));
    CHECK_EQ(graphic_line(4), std::string("3D Card : Riva (0)"));
    CHECK_EQ(graphic_line(5), std::string("Bits per pixel : 32"));
    CHECK_EQ(graphic_line(6), std::string("Upscaler : FSR"));
    CHECK_EQ(graphic_line(7), std::string("Sharpness : 50%"));
    CHECK_EQ(lines_of(kGraphic).size(), (size_t)9);

    stand.reset();
    game->halo_mode = 2;
    graphics({});
    CHECK_EQ(graphic_line(G_HALO), std::string("Flashlight halo : Complex"));
}

// The halo cycles through its three modes either way; one past them is taken
// as the last.
NOCTURNE_TEST(the_halo_cycles) {
    const struct {
        int from;
        bool left;
        int to;
    } cases[] = {{0, false, 1}, {1, false, 2}, {2, false, 0}, {0, true, 2},
                 {1, true, 0},  {7, false, 0}, {7, true, 1}};
    for (const auto &c : cases) {
        stand.reset();
        game->halo_mode = c.from;
        graphics({pick(G_HALO, c.left)});
        CHECK_EQ_AT(game->halo_mode, c.to, std::to_string(c.from) + (c.left ? " back" : " on"));
    }
}

// Each renderer by name, OpenGL with its version when it has one.
NOCTURNE_TEST(the_api_line_names_the_renderer) {
    const struct {
        const char *dll;
        const char *version;
        const char *line;
    } cases[] = {
        {"trid3d.dll", "", "3D API : DirectX 5"},
        {"TRIDX6.DLL", "", "3D API : DirectX 6"},
        {"tridx7.dll", "", "3D API : DirectX 7"},
        {"tri3dfx.dll", "", "3D API : Voodoo Blit Emulation"},
        {"trigl.dll", "", "3D API : OpenGL"},
        {"trigl.dll", "3.3", "3D API : OpenGL 3.3"},
        {"mine.dll", "", "3D API : Custom"},
        {"mine.dll", "3.3", "3D API : Custom"},
    };
    for (const auto &c : cases) {
        stand.reset();
        snprintf(g_RendererDllPath, sizeof(g_RendererDllPath), "%s", c.dll);
        stand.gl_version = c.version;
        graphics({});
        CHECK_EQ_AT(graphic_line(G_API), std::string(c.line), c.dll);
    }
}

// The resolution steps through the table, held to 640x480 where the renderer
// cannot go higher; a size that changes applies at once.
NOCTURNE_TEST(the_resolution_steps_and_applies) {
    stand.reset();
    accelerate("trigl.dll");
    graphics({pick(G_RESOLUTION)});
    CHECK_EQ(game->game_pixx, 800);
    CHECK_EQ(stand.count("setSize 800x600"), 1);

    stand.reset();
    accelerate("trigl.dll");
    graphics({pick(G_RESOLUTION, true)});
    CHECK_EQ(game->game_pixx, 1024);

    // trid3d.dll, or no acceleration, stops at 640x480.
    stand.reset();
    accelerate("trid3d.dll");
    graphics({pick(G_RESOLUTION)});
    CHECK_EQ(game->game_pixx, 640);
    CHECK_EQ(stand.count("setSize 640x480"), 0);

    // And holds a larger mode there, the window following.
    stand.reset();
    game->game_pixx = 800;
    game->game_pixy = 600;
    graphics({});
    CHECK_EQ(game->game_pixy, 480);
    CHECK_EQ(stand.count("setSize 640x480"), 1);

    // A height alone is a change of size too.
    stand.reset();
    game->game_pixy = 600;
    graphics({});
    CHECK_EQ(stand.count("setSize 640x480"), 1);

    stand.reset();
    accelerate("trigl.dll");
    game->game_pixx = 800;
    game->game_pixy = 600;
    graphics({});
    CHECK_EQ(game->game_pixy, 600);
}

// Acceleration on loads the renderer, the built-in one where none is named,
// and lists its cards; off lets it go with them.
NOCTURNE_TEST(acceleration_loads_and_lets_go) {
    stand.reset();
    cards({"Card"}, {0x10de}, {0x20});
    graphics({pick(G_ACCEL)});
    CHECK_EQ(g_UseDirect3D, 1);
    CHECK(stand.in_order({"snap", "kill", "load trigl.dll", "buildCardList"}));
    CHECK_EQ(g_GraphicsCardCount, 1);
    CHECK_EQ(graphic_line(G_ACCEL), std::string("Acceleration : On"));

    // A renderer that will not load takes acceleration and the cards with it.
    stand.reset();
    stand.renderer_loads = 0;
    cards({"Card"}, {0x10de}, {0x20});
    graphics({pick(G_ACCEL)});
    CHECK_EQ(g_UseDirect3D, 0);
    CHECK_EQ(g_GraphicsCardCount, 0);

    stand.reset();
    accelerate("trigl.dll");
    cards({"Card"}, {0x10de}, {0x20});
    graphics({pick(G_ACCEL)});
    CHECK_EQ(g_UseDirect3D, 0);
    CHECK_EQ(g_GraphicsCardCount, 0);
    CHECK_EQ(stand.count("kill"), 1);
}

// The API line steps to the next built-in renderer and loads it, except on a
// card only tri3dfx.dll can drive.
NOCTURNE_TEST(the_api_steps_the_renderer) {
    stand.reset();
    accelerate("trigl.dll");
    graphics({pick(G_API)});
    CHECK(stand.in_order({"step", "kill", "load tridx7.dll"}));

    stand.reset();
    cards({"Voodoo"}, {0x121a}, {6});
    graphics({pick(G_API)});
    CHECK_EQ(stand.count("step"), 0);
}

// The card line moves to the next card and selects it, wrapping; with none
// there is no card but the first.
NOCTURNE_TEST(the_card_line_steps_the_card) {
    stand.reset();
    cards({"One", "Two"}, {0x10de, 0x10de}, {0x20, 0x20});
    graphics({pick(G_CARD), pick(G_CARD)});
    CHECK(stand.in_order({"selectCard 1", "selectCard 0"}));
    CHECK_EQ(g_CurrentGraphicsBoard, 0);

    stand.reset();
    g_CurrentGraphicsBoard = 2;
    g_GraphicsCardCount = 0;
    graphics({pick(G_CARD)});
    CHECK_EQ(g_CurrentGraphicsBoard, 0);
    CHECK_EQ(stand.count("selectCard 0"), 0);
}

NOCTURNE_TEST(the_other_graphic_lines) {
    stand.reset();
    graphics({pick(G_BITS), pick(G_WINDOW, true), pick(G_UPSCALER)});
    CHECK_EQ(game->game_bpp, 32);
    CHECK_EQ(stand.count("windowCycle -1"), 1);
    CHECK_EQ(stand.count("upscalerCycle 1"), 1);

    stand.reset();
    game->game_bpp = 32;
    stand.upscaler = NOCTURNE_UPSCALER_FSR;
    graphics({pick(G_BITS), pick(G_NEXT, true), pick(G_NEXT + 1)});
    CHECK_EQ(game->game_bpp, 16);
    CHECK_EQ(stand.count("sharpnessCycle -1"), 1);
    CHECK_EQ(stand.count("calibration"), 1);

    stand.reset();
    graphics({pick(G_NEXT)});
    CHECK_EQ(stand.count("calibration"), 1);
}

// The cards the shipped screen pinned: early 3dfx parts to tri3dfx.dll at
// 640x480x16, any other card away from it, and the i740 and the Riva 128s to
// 640x480x16.
NOCTURNE_TEST(the_pinned_cards) {
    stand.reset();
    accelerate("trigl.dll");
    cards({"Voodoo2"}, {0x121a}, {2});
    game->game_pixx = 800;
    game->game_pixy = 600;
    game->game_bpp = 32;
    graphics({});
    CHECK_EQ(std::string(g_RendererDllPath), std::string("tri3dfx.dll"));
    CHECK(stand.in_order({"kill", "load tri3dfx.dll", "buildCardList"}));
    CHECK_EQ(game->game_bpp, 16);
    CHECK_EQ(game->game_pixy, 480);

    // Already there, it stays.
    stand.reset();
    accelerate("tri3dfx.dll");
    cards({"Voodoo2"}, {0x121a}, {2});
    graphics({});
    CHECK_EQ(stand.count("kill"), 0);

    // A Banshee, or any other card, is taken off it.
    stand.reset();
    accelerate("tri3dfx.dll");
    cards({"Banshee"}, {0x121a}, {6});
    graphics({});
    CHECK_EQ(std::string(g_RendererDllPath), std::string("tridx6.dll"));

    const struct {
        int vendor;
        int device;
        bool pinned;
    } others[] = {{0x8086, 0x7800, true}, {0x8086, 0x7801, false}, {0x12d2, 0x18, true},
                  {0x12d2, 0x19, true},   {0x12d2, 0x20, false},   {0x10de, 0x18, false}};
    for (const auto &c : others) {
        stand.reset();
        accelerate("trigl.dll");
        cards({"Card"}, {c.vendor}, {c.device});
        game->game_bpp = 32;
        graphics({});
        CHECK_EQ_AT(game->game_bpp == 16, c.pinned, std::to_string(c.vendor));
    }

    // Without acceleration, or a card, nothing is pinned.
    stand.reset();
    cards({"Voodoo2"}, {0x121a}, {2});
    game->game_bpp = 32;
    graphics({});
    CHECK_EQ(game->game_bpp, 32);
}

// --- Gameplay ------------------------------------------------------------------------

NOCTURNE_TEST(gameplay_reads_and_changes_its_settings) {
    stand.reset();
    gameplay({pick(P_ALWAYS_RUN), pick(P_AIMING), pick(P_AUTO_HEALTH), pick(P_SUBTITLES),
              pick(P_FONT, true), pick(P_RATING)});
    const std::vector<std::string> lines = {
        "Always run : ON",    "Aiming : Manual",    "Auto use health : On", "Subtitles : On",
        "Text font : Bitmap", "Menu text : Dialog", "Rating: Mature"};
    CHECK(lines_of(kGameplay) == lines);
    CHECK_EQ(last().title, std::string(kGameplay));
    CHECK_EQ(last().y, NOCTURNE_MENU_TITLE_Y);
    CHECK_EQ(game->always_run, 1);
    CHECK_EQ((int)game->aim_mode, (int)AIM_MODE_MANUAL);
    CHECK_EQ(game->auto_use_health, 1);
    CHECK_EQ(game->subtitle_mode, 1);
    CHECK_EQ(stand.count("osFontCycle -1"), 1);
    CHECK_EQ(game->nudity_flag, 1);
    CHECK_EQ(game->blood_flag, 1);
    CHECK_EQ(game->foul_language_flag, 1);

    // And back; a build that can show no more has no rating line.
    stand.reset();
    game->always_run = 1;
    game->aim_mode = AIM_MODE_MANUAL;
    game->auto_use_health = 1;
    game->quimby_flag = 1;
    game->subtitle_mode = 1;
    game->nudity_flag = 1;
    gameplay({pick(P_ALWAYS_RUN), pick(P_AIMING), pick(P_AUTO_HEALTH), pick(P_SUBTITLES),
              pick(P_RATING - 1)});
    CHECK_EQ(lines_of(kGameplay).size(), (size_t)6);
    CHECK_EQ(lines_of(kGameplay)[0], std::string("Always run : OFF"));
    CHECK_EQ(lines_of(kGameplay)[2], std::string("Auto use health : Off"));
    CHECK_EQ(game->always_run, 0);
    CHECK_EQ((int)game->aim_mode, (int)AIM_MODE_AUTO);
    CHECK_EQ(game->auto_use_health, 0);
    CHECK_EQ(game->subtitle_mode, 0);
    CHECK_EQ(game->nudity_flag, 1);
}

// Aiming reads its three modes and steps between Auto and Manual; Kindof auto,
// or a mode from a bad INI, goes to Auto.
NOCTURNE_TEST(aiming_reads_three_and_steps_two) {
    stand.reset();
    game->aim_mode = AIM_MODE_SEMI_AUTO;
    gameplay({});
    CHECK_EQ(lines_of(kGameplay)[P_AIMING], std::string("Aiming : Kindof auto"));
    gameplay({pick(P_AIMING)});
    CHECK_EQ((int)game->aim_mode, (int)AIM_MODE_AUTO);

    stand.reset();
    game->aim_mode = (EAimMode)7;
    gameplay({});
    CHECK_EQ((int)game->aim_mode, (int)AIM_MODE_AUTO);
    CHECK_EQ(lines_of(kGameplay)[P_AIMING], std::string("Aiming : Auto"));
}

// The menu font applies at once, but not to the editor or a short window.
NOCTURNE_TEST(the_menu_font_applies_where_it_can) {
    stand.reset();
    gameplay({pick(P_MENU_FONT)});
    CHECK_EQ(stand.count("menuFontCycle 1"), 1);
    CHECK(g_EditorFont != nullptr);

    stand.reset();
    g_CDemonMissionPtr = front_support::mission;
    front_support::mission->is_in_editor = 0;
    gameplay({pick(P_MENU_FONT)});
    CHECK(g_EditorFont != nullptr);

    stand.reset();
    g_CDemonMissionPtr = front_support::mission;
    front_support::mission->is_in_editor = 1;
    gameplay({pick(P_MENU_FONT)});
    CHECK(g_EditorFont == nullptr);

    stand.reset();
    g_WindowHeight = 240;
    gameplay({pick(P_MENU_FONT)});
    CHECK(g_EditorFont == nullptr);
}

NOCTURNE_TEST_MAIN()
