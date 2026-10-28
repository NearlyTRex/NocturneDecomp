// =============================================================================
// OPTIONS MENU — implementation
// =============================================================================
//
// See options_menu.h, and NOCTURNE_AUTHENTIC_MENU in
// config/shim_config_authentic.h. What each line does is the shipped screen's,
// with every addition its keep carries; the keeps are the reference, and the
// shipped screens are those keeps.

#include "game/options_menu.h"

#include "core/menu_page.h"
#include "nocturne.h"

#include <cstring>

#if !NOCTURNE_AUTHENTIC_MENU

namespace {

using nocturne_menu::Lines;
using nocturne_menu::Outcome;
using nocturne_menu::Page;
using nocturne_menu::STAY;

char *localized(const char *key) {
    return support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)key);
}

// --- Card Options --------------------------------------------------------

// The cards the shipped screen pins to one mode. 3dfx parts before the
// Banshee only run through tri3dfx.dll's blit emulation.
const int kVendor3dfx = 0x121a;
const int k3dfxFirstFullDevice = 6;
const int kVendorIntel = 0x8086;
const int kDeviceI740 = 0x7800;
const int kVendorNvidiaSgs = 0x12d2;
const int kDeviceRiva128 = 0x18;
const int kDeviceRiva128zx = 0x19;

// Above this height a mode needs acceleration through a renderer other than
// trid3d.dll.
const int kSoftwareMaxHeight = 480;

void pin_to_vga16() {
    g_CGamePtr->game_bpp = 16;
    g_CGamePtr->game_pixx = 640;
    g_CGamePtr->game_pixy = kSoftwareMaxHeight;
}

void list_cards() {
    engine_special_cpp_buildCardList_FUN_005b7db0(&g_GraphicsCardCount, g_GraphicsCardDriverNames,
                                                  g_GraphicsCardNames, g_GraphicsCardVendorIDs,
                                                  g_GraphicsCardDeviceIDs);
}

// Loads the renderer again, as `dll` when one is named, and lists its cards:
// none when it would not load, since acceleration went with it.
void reload_renderer(const char *dll) {
    if (dll != nullptr)
        snprintf(g_RendererDllPath, sizeof(g_RendererDllPath), "%s", dll);
    engine_special_cpp_kill_FUN_005b71e0();
    engine_special_cpp_loadExternalRenderer_FUN_005b6750(0);
    if (g_UseDirect3D != 0)
        list_cards();
    else
        g_GraphicsCardCount = 0;
}

int renderer_is(const char *dll) {
    return _stricmp(g_RendererDllPath, (char *)dll) == 0;
}

// Checked every frame, as the shipped screen did, so a card picked on the
// line below takes its mode at once.
void apply_card_rules() {
    if (g_GraphicsCardCount <= 0 || g_UseDirect3D == 0)
        return;
    const int board = g_CurrentGraphicsBoard;
    if (g_GraphicsCardVendorIDs[board] == kVendor3dfx &&
        g_GraphicsCardDeviceIDs[board] < k3dfxFirstFullDevice) {
        pin_to_vga16();
        if (!renderer_is("tri3dfx.dll"))
            reload_renderer("tri3dfx.dll");
    } else if (renderer_is("tri3dfx.dll")) {
        reload_renderer("tridx6.dll");
    }
    // The list may have been built again above.
    const int vendor = g_GraphicsCardVendorIDs[board];
    const int device = g_GraphicsCardDeviceIDs[board];
    if ((vendor == kVendorIntel && device == kDeviceI740) ||
        (vendor == kVendorNvidiaSgs && (device == kDeviceRiva128 || device == kDeviceRiva128zx)))
        pin_to_vga16();
}

int hires_allowed() {
    return g_UseDirect3D != 0 && !renderer_is("trid3d.dll");
}

const char *api_label() {
    if (g_RendererDllPath[0] == '\0')
        return "3D API : None";
    if (renderer_is("trid3d.dll"))
        return "3D API : DirectX 5";
    if (renderer_is("tridx6.dll"))
        return "3D API : DirectX 6";
    if (renderer_is("tridx7.dll"))
        return "3D API : DirectX 7";
    if (renderer_is("tri3dfx.dll"))
        return "3D API : Voodoo Blit Emulation";
    if (renderer_is("trigl.dll"))
        return "3D API : OpenGL";
    return "3D API : Custom";
}

const char *halo_label(int mode) {
    if (mode == 0)
        return "Flashlight halo : Off";
    return mode == 1 ? "Flashlight halo : Simple" : "Flashlight halo : Complex";
}

const int kHaloModes = 3;

// One mode on or back, wrapping; a mode past Complex is taken as Complex.
void step_halo(int step) {
    const int mode = g_CGamePtr->halo_mode;
    const int from = mode < kHaloModes ? mode : kHaloModes - 1;
    g_CGamePtr->halo_mode = (from + kHaloModes + step) % kHaloModes;
}

// --- Graphic Options ------------------------------------------------------------

enum GraphicLine {
    GRAPHIC_RESOLUTION,
    GRAPHIC_WINDOW,
    GRAPHIC_HALO,
    GRAPHIC_ACCELERATION,
    GRAPHIC_API,
    GRAPHIC_CARD,
    GRAPHIC_BITS,
    GRAPHIC_UPSCALER,
    GRAPHIC_SHARPNESS,
    GRAPHIC_CALIBRATION
};

class GraphicOptions : public Page {
public:
    const char *title() override {
        return localized("Graphic Options");
    }

    void build(Lines &lines) override {
        apply_card_rules();
        width_ = g_CGamePtr->game_pixx;
        height_ = g_CGamePtr->game_pixy;

        lines.add_localized(GRAPHIC_RESOLUTION, nocturne_resolution_label(width_, height_));
        // Not where the system owns the display.
        if (g_nocturne_fixed_display == 0)
            lines.add(GRAPHIC_WINDOW, "Window : %s",
                      nocturne_window_mode_name(nocturne_window_mode_get()));
        lines.add_localized(GRAPHIC_HALO, halo_label(g_CGamePtr->halo_mode));
        lines.add_localized(GRAPHIC_ACCELERATION,
                            g_UseDirect3D != 0 ? "Acceleration : On" : "Acceleration : Off");
        if (renderer_is("trigl.dll") && nocturne_gl_version_short()[0] != '\0')
            lines.add(GRAPHIC_API, "3D API : OpenGL %s", nocturne_gl_version_short());
        else
            lines.add_localized(GRAPHIC_API, api_label());
        if (g_GraphicsCardCount == 0)
            lines.add_localized(GRAPHIC_CARD, "No 3D Hardware detected");
        else
            lines.add(GRAPHIC_CARD, "%s%s (%d)", localized("3D Card : "),
                      g_GraphicsCardNames[g_CurrentGraphicsBoard], g_CurrentGraphicsBoard);
        lines.add(GRAPHIC_BITS, "%s%d", localized("Bits per pixel : "), g_CGamePtr->game_bpp);
        lines.add(GRAPHIC_UPSCALER, "Upscaler : %s",
                  nocturne_upscaler_name(nocturne_upscaler_get()));
        if (nocturne_upscaler_sharpens(nocturne_upscaler_get()))
            lines.add(GRAPHIC_SHARPNESS, "Sharpness : %d%%", nocturne_upscaler_sharpness_get());
        lines.add_localized(GRAPHIC_CALIBRATION, "Monitor calibration");
    }

    // Where the shipped screen held a mode the renderer cannot reach.
    void before_swap() override {
        if (!hires_allowed() && g_CGamePtr->game_pixy > kSoftwareMaxHeight) {
            g_CGamePtr->game_pixy = kSoftwareMaxHeight;
            g_CGamePtr->game_pixx = 640;
        }
    }

    Outcome choose(int id, int step) override {
        CGame *game = g_CGamePtr;
        switch (id) {
        case GRAPHIC_RESOLUTION:
            nocturne_resolution_step(game->game_pixx, game->game_pixy, step,
                                     hires_allowed() ? 0 : kSoftwareMaxHeight, &game->game_pixx,
                                     &game->game_pixy);
            break;
        case GRAPHIC_WINDOW:
            nocturne_window_mode_cycle(step);
            break;
        case GRAPHIC_HALO:
            step_halo(step);
            break;
        case GRAPHIC_ACCELERATION:
            if (g_UseDirect3D == 0) {
                nocturne_builtin_dll_snap(g_RendererDllPath);
                g_UseDirect3D = 1;
                reload_renderer(nullptr);
            } else {
                g_UseDirect3D = 0;
                engine_special_cpp_kill_FUN_005b71e0();
                g_GraphicsCardCount = 0;
            }
            break;
        case GRAPHIC_API:
            if (g_GraphicsCardVendorIDs[g_CurrentGraphicsBoard] != kVendor3dfx) {
                nocturne_builtin_dll_step(g_RendererDllPath);
                reload_renderer(nullptr);
            }
            break;
        case GRAPHIC_CARD:
            if (g_GraphicsCardCount == 0) {
                g_CurrentGraphicsBoard = 0;
            } else {
                g_CurrentGraphicsBoard = (g_CurrentGraphicsBoard + 1) % g_GraphicsCardCount;
                engine_special_cpp_selectCard_FUN_005b7d90(g_CurrentGraphicsBoard);
            }
            break;
        case GRAPHIC_BITS:
            game->game_bpp = game->game_bpp == 16 ? 32 : 16;
            break;
        case GRAPHIC_UPSCALER:
            nocturne_upscaler_cycle(step);
            break;
        case GRAPHIC_SHARPNESS:
            nocturne_upscaler_sharpness_cycle(step);
            break;
        default: // GRAPHIC_CALIBRATION
            core_menu_cpp_showCalibrationTest_FUN_00510ba0();
            break;
        }
        return STAY;
    }

    // A size changed by a line, or held above, applies straight away.
    Outcome end_frame() override {
        if (g_CGamePtr->game_pixx != width_ || g_CGamePtr->game_pixy != height_)
            nocturne_window_set_size(g_CGamePtr->game_pixx, g_CGamePtr->game_pixy);
        return Page::end_frame();
    }

private:
    int width_ = 0;
    int height_ = 0;
};

// --- Gameplay Options ------------------------------------------------------------------

enum GameplayLine {
    GAMEPLAY_ALWAYS_RUN,
    GAMEPLAY_AIMING,
    GAMEPLAY_AUTO_HEALTH,
    GAMEPLAY_SUBTITLES,
    GAMEPLAY_FONT,
    GAMEPLAY_MENU_FONT,
    GAMEPLAY_RATING
};

const char *aiming_label(CGame *game) {
    switch (game->aim_mode) {
    case AIM_MODE_AUTO:
        return "Aiming : Auto";
    case AIM_MODE_SEMI_AUTO:
        return "Aiming : Kindof auto";
    case AIM_MODE_MANUAL:
        return "Aiming : Manual";
    default: // read from a bad INI, taken as Auto
        game->aim_mode = AIM_MODE_AUTO;
        return "Aiming : Auto";
    }
}

// Teen and Mature: the three flags move together.
void swap_rating() {
    CGame *game = g_CGamePtr;
    const int mature = (int)(game->nudity_flag == 0);
    game->nudity_flag = mature;
    game->blood_flag = mature;
    game->foul_language_flag = mature;
}

// How the game plays and reads, from the shipped Graphics and Control Options
// screens: the assists, the subtitles, the two fonts and the rating.
class Gameplay : public Page {
public:
    const char *title() override {
        return localized("Gameplay");
    }

    void build(Lines &lines) override {
        CGame *game = g_CGamePtr;
        lines.add_localized(GAMEPLAY_ALWAYS_RUN,
                            game->always_run != 0 ? "Always run : ON" : "Always run : OFF");
        lines.add_localized(GAMEPLAY_AIMING, aiming_label(game));
        lines.add_localized(GAMEPLAY_AUTO_HEALTH, game->auto_use_health != 0
                                                      ? "Auto use health : On"
                                                      : "Auto use health : Off");
        lines.add_localized(GAMEPLAY_SUBTITLES,
                            game->subtitle_mode != 0 ? "Subtitles : On" : "Subtitles : Off");
        lines.add(GAMEPLAY_FONT, "Text font : %s", nocturne_os_font_name(nocturne_os_font_get()));
        lines.add(GAMEPLAY_MENU_FONT, "Menu text : %s",
                  nocturne_menu_font_name(nocturne_menu_font_get()));
        // A build that can never show more has no rating to pick.
        if (game->quimby_flag == 0)
            lines.add_localized(GAMEPLAY_RATING,
                                game->nudity_flag != 0 ? "Rating: Mature" : "Rating: Teen");
    }

    Outcome choose(int id, int step) override {
        CGame *game = g_CGamePtr;
        switch (id) {
        case GAMEPLAY_ALWAYS_RUN:
            game->always_run = (int)(game->always_run == 0);
            break;
        case GAMEPLAY_AIMING:
            game->aim_mode = game->aim_mode == AIM_MODE_AUTO ? AIM_MODE_MANUAL : AIM_MODE_AUTO;
            break;
        case GAMEPLAY_AUTO_HEALTH:
            game->auto_use_health = (int)(game->auto_use_health == 0);
            break;
        case GAMEPLAY_SUBTITLES:
            game->subtitle_mode = (int)(game->subtitle_mode == 0);
            break;
        case GAMEPLAY_FONT:
            nocturne_os_font_cycle(step);
            break;
        case GAMEPLAY_MENU_FONT:
            nocturne_menu_font_cycle(step);
            // The editor and a short window keep the font they have.
            if (g_WindowHeight > 240 &&
                (g_CDemonMissionPtr == nullptr || g_CDemonMissionPtr->is_in_editor == 0))
                g_EditorFont = nocturne_menu_font();
            break;
        default: // GAMEPLAY_RATING
            swap_rating();
            break;
        }
        return STAY;
    }
};

void gameplay_menu() {
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
    Gameplay page;
    nocturne_menu::run(page);
}

// --- Control Options ------------------------------------------------------------------

// Control Options, and a mode left changed goes on to that mode's bindings.
void control_options() {
    const EControlMode before = g_CGamePtr->game_control;
    nocturne_control_options_menu();
    if (before != g_CGamePtr->game_control)
        nocturne_key_bindings_menu();
}

// --- Options ---------------------------------------------------------------------

enum OptionsLine {
    OPTIONS_GAMEPLAY,
    OPTIONS_GRAPHIC,
    OPTIONS_SOUND,
    OPTIONS_CONTROL,
    OPTIONS_CHEATS,
    OPTIONS_DEVELOPER,
    OPTIONS_CREDITS
};

class Options : public Page {
public:
    explicit Options(int initialize_systems) : initialize_systems_(initialize_systems) {}

    const char *title() override {
        return localized("Option Menu");
    }

    void build(Lines &lines) override {
        // The shipped screen's, every frame: whoever is playing, Options
        // shows the Stranger's controls.
        g_CGamePtr->hero_number = HERO_TYPE_STRANGER;
        lines.add_localized(OPTIONS_GAMEPLAY, "Gameplay options");
        lines.add_localized(OPTIONS_GRAPHIC, "Graphic options");
        lines.add_localized(OPTIONS_SOUND, "Sound options");
        lines.add_localized(OPTIONS_CONTROL, "Control options");
        lines.add_localized(OPTIONS_CHEATS, "Cheats");
#if NOCTURNE_EDITOR_BUILD
        // Not from a mission's pause menu, which has the editor's own.
        if (initialize_systems_ == 0)
            lines.add_localized(OPTIONS_DEVELOPER, "Developer tools");
#endif
        lines.add_localized(OPTIONS_CREDITS, "Credits");
    }

    Outcome choose(int id, int) override {
        switch (id) {
        case OPTIONS_GRAPHIC:
            nocturne_graphics_options_menu();
            break;
        case OPTIONS_GAMEPLAY:
            gameplay_menu();
            break;
        case OPTIONS_SOUND:
            nocturne_sound_options_menu();
            break;
        case OPTIONS_CONTROL:
            control_options();
            break;
        case OPTIONS_CHEATS:
            nocturne_cheats_menu();
            engine_2d_c_clearInputAndWait_FUN_00403260();
            break;
#if NOCTURNE_EDITOR_BUILD
        case OPTIONS_DEVELOPER:
            core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
            core_main_c_showDeveloperToolsMenu_FUN_005073a0();
            core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
            engine_2d_c_clearInputAndWait_FUN_00403260();
            break;
#endif
        default: // OPTIONS_CREDITS
            core_game_cpp_CGame_rollCredits_FUN_004e4010(g_CGamePtr);
            core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
            break;
        }
        return STAY;
    }

private:
    int initialize_systems_;
};

} // namespace

extern "C" void nocturne_options_menu(int initialize_systems) {
    if (initialize_systems != 0) {
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
        core_moon_cpp_CMoon_init_FUN_00529ae0(&g_CMoonInstance);
    }
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
    Options page(initialize_systems);
    nocturne_menu::run(page);
    if (initialize_systems != 0) {
        core_moon_cpp_CMoon_free_FUN_00529ce0(&g_CMoonInstance);
        core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
    }
    core_inivar_cpp_writeIniData_FUN_004fc510();
}

extern "C" void nocturne_graphics_options_menu(void) {
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
    list_cards();
    if (g_GraphicsCardCount <= g_CurrentGraphicsBoard)
        g_CurrentGraphicsBoard = 0;
    GraphicOptions page;
    nocturne_menu::run(page);
}

#endif // !NOCTURNE_AUTHENTIC_MENU
