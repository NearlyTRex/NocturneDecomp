// =============================================================================
// MAIN MENU — implementation
// =============================================================================
//
// See main_menu.h, and NOCTURNE_AUTHENTIC_MENU in
// config/shim_config_authentic.h. enterMainGameMenu's keep is the reference
// for what each line and hotkey does; the shipped menu is that keep.

#include "game/main_menu.h"

#include "core/debug_log.h"
#include "core/menu_page.h"
#include "nocturne.h"

#include <cstdio>

#if !NOCTURNE_AUTHENTIC_MENU

namespace {

using nocturne_menu::LEAVE;
using nocturne_menu::Lines;
using nocturne_menu::Outcome;
using nocturne_menu::Page;
using nocturne_menu::STAY;

enum MainLine { MAIN_PLAY, MAIN_MULTIPLAYER, MAIN_OPTIONS, MAIN_QUIT };

// The front end is laid out for 640x480 and needs all of it.
const int kMenuMinHeight = 480;

// The menu's bitmaps, each loaded at this size and drawn twice as wide.
const int kMenuBitmapCount = 8;
const int kMenuBitmapSize = 64;

// showChapterSelect's modes: the story list, and the two Ctrl opens.
enum { SELECT_STORY = 0, SELECT_CHAPTERS = 1, SELECT_CHAPTERS_SHIFT = 2 };

// NOC1.AVI to NOC4.AVI.
const int kAttractMovieCount = 4;

char *localized(const char *key) {
    return support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)key);
}

bool key_down(EInputCodeType key) {
    return (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr, key) != 0;
}

bool key_taken(EInputCodeType key) {
    return (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, key) != 0;
}

// Ctrl held and `key` pressed, the press taken.
bool ctrl_press(EInputCodeType key) {
    return key_down(DIK_LCONTROL) && key_taken(key);
}

// Into the game and back: the moon and the music stop while it runs.
void leave_menu() {
    core_moon_cpp_CMoon_free_FUN_00529ce0(&g_CMoonInstance);
    core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
}

void back_to_menu() {
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
    core_moon_cpp_CMoon_init_FUN_00529ae0(&g_CMoonInstance);
    core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
}

void start_game() {
    leave_menu();
    int mode = SELECT_STORY;
    if (key_down(DIK_LCONTROL))
        mode = key_down(DIK_LSHIFT) ? SELECT_CHAPTERS_SHIFT : SELECT_CHAPTERS;
    core_game_cpp_CGame_showChapterSelect_FUN_004e1cb0(g_CGamePtr, mode);
    back_to_menu();
}

// The load picker, or with `newest` the save Continue resumes.
void load_game(bool newest) {
    leave_menu();
    if (newest) {
        char filename[260];
        if (nocturne_save_continue_target(filename, sizeof(filename)) == 0)
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr, (char *)"%s",
                                                                   localized("No files found"));
        else
            core_game_cpp_CGame_loadGame_FUN_004e12b0(g_CGamePtr, filename, 1);
    } else {
        core_game_cpp_CGame_loadGame_FUN_004e12b0(g_CGamePtr, nullptr, 1);
    }
    back_to_menu();
}

void play() {
    switch (nocturne_single_player_menu()) {
    case NOCTURNE_SP_MENU_START:
        start_game();
        break;
    case NOCTURNE_SP_MENU_LOAD:
        load_game(false);
        break;
    case NOCTURNE_SP_MENU_CONTINUE:
        load_game(true);
        break;
    default: // backed out
        break;
    }
}

void multiplayer() {
    const int choice = nocturne_net_menu_multiplayer();
    if (choice == NOCTURNE_NET_MENU_HOST) {
        core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
        core_game_cpp_hostNetworkGame_FUN_004e2f10();
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    } else if (choice == NOCTURNE_NET_MENU_JOIN) {
        core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
        core_game_cpp_joinNetworkGame_FUN_004e2fc0();
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    engine_2d_c_clearInputAndWait_FUN_00403260();
}

void play_attract_movie() {
    char movie[16];
    snprintf(movie, sizeof(movie), "noc%d.avi",
             core_actor_cpp_getRandomInt_FUN_0040cc70(1, kAttractMovieCount));
    DLOG("frontend", "playing '%s'", movie);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
    nocturne_attract_pre_movie_pause();
    const int result = wincore_winvideo_cpp_playMovie_FUN_005f4a00((char *)"video", movie);
    DLOG("frontend", "playMovie returned %d", result);
    core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
}

class MainMenu : public Page {
public:
    // A resolution picked under Options applies on the way back.
    void begin_frame() override {
        nocturne_window_set_size(g_CGamePtr->game_pixx, g_CGamePtr->game_pixy);
    }

    void build(Lines &lines) override {
        lines.add_localized(MAIN_PLAY, "P L A Y");
        lines.add_localized(MAIN_MULTIPLAYER, "M U L T I P L A Y E R");
        lines.add_localized(MAIN_OPTIONS, "O P T I O N S");
        // Not where the system ends the app.
        if (g_nocturne_no_quit == 0)
            lines.add_localized(MAIN_QUIT, "Q U I T");
    }

    // The first frame is shown black, as the shipped menu's was.
    void before_swap() override {
        if (first_frame_)
            engine_special_cpp_clearScreen_FUN_005b3e70();
    }

    Outcome choose(int id, int) override {
        switch (id) {
        case MAIN_PLAY:
            play();
            break;
        case MAIN_MULTIPLAYER:
            multiplayer();
            break;
        case MAIN_OPTIONS:
            nocturne_options_menu(0);
            engine_2d_c_clearInputAndWait_FUN_00403260();
            break;
        default: // MAIN_QUIT, left to the end of the frame as the shipped menu did
            quit_ = true;
            break;
        }
        return STAY;
    }

    Outcome end_frame() override {
        nocturne_gamepad_withdraw_nav(DIK_ESCAPE);
        // Where the system ends the app, Escape here backs out of nothing.
        if (key_taken(DIK_ESCAPE) && g_nocturne_no_quit == 0)
            quit_ = true;
        if (g_InputDisabled != 0)
            quit_ = true;
        if (ctrl_press(DIK_M)) {
            sound_sndmain_cpp_setSoundMuted_FUN_005a96c0(
                (int)(sound_sndmain_cpp_isSoundMuted_FUN_005a96b0() == 0));
            core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
        }
#if NOCTURNE_EDITOR_BUILD
        if (key_down(DIK_LCONTROL) && (key_taken(DIK_D) || key_taken(DIK_L))) {
            core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
            core_main_c_showDeveloperToolsMenu_FUN_005073a0();
            core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
        }
#endif
        if (ctrl_press(DIK_F)) {
            core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
            core_fileman_cpp_CDemonFileManager_showEditorMenu_FUN_004be270(
                &g_CDemonFileManagerInstance);
            core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
        }
        nocturne_net_menu_hotkeys();
        // The music starts once the first frame is up.
        if (first_frame_) {
            first_frame_ = false;
            core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
            engine_2d_c_clearInputAndWait_FUN_00403260();
        }
        if (nocturne_attract_tick() != 0)
            play_attract_movie();
        return quit_ ? LEAVE : STAY;
    }

private:
    bool first_frame_ = true;
    bool quit_ = false;
};

} // namespace

extern "C" int nocturne_main_menu(void) {
    if (g_WindowHeight < kMenuMinHeight)
        return NOCTURNE_MAIN_MENU_TOO_SHORT;
    if (g_ThemeFont != nullptr &&
        (g_CDemonMissionPtr == nullptr || g_CDemonMissionPtr->is_in_editor == 0))
        g_EditorFont = nocturne_menu_font();
    // Without acceleration nothing above 640x480 can be shown.
    if (g_UseDirect3D == 0 && g_CGamePtr->game_pixy > kMenuMinHeight) {
        g_CGamePtr->game_pixy = kMenuMinHeight;
        g_CGamePtr->game_pixx = 640;
    }
    for (int i = 0; i < kMenuBitmapCount; i++) {
        engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(
            &g_MenuBitmaps[i], g_MenuBitmapFilenames[i], kMenuBitmapSize, kMenuBitmapSize);
        engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(&g_MenuBitmaps[i], 2, 1);
    }
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&g_MenuBlurLeft, (char *)"fblurl", 0x68,
                                                       0x46);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&g_MenuBlurMiddle, (char *)"fblurm", 0x20,
                                                       0x46);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&g_MenuBlurRight, (char *)"fblurr", 0x68,
                                                       0x46);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
    core_moon_cpp_CMoon_init_FUN_00529ae0(&g_CMoonInstance);
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);

    MainMenu page;
    nocturne_menu::run(page);

    core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
    core_moon_cpp_CMoon_free_FUN_00529ce0(&g_CMoonInstance);
    return NOCTURNE_MAIN_MENU_QUIT;
}

#endif // !NOCTURNE_AUTHENTIC_MENU
