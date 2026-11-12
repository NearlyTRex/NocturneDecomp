// =============================================================================
// FRONT SUPPORT — see front_support.h
// =============================================================================

#include "front_support.h"

#include "gl/display_settings.h"

#include <cctype>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <memory>

// --- the globals the pages read -------------------------------------------------

CGame *g_CGamePtr = nullptr;
CDemonMission *g_CDemonMissionPtr = nullptr;
CBitFont *g_EditorFont = nullptr;
CBitFont *g_ThemeFont = nullptr;
CKeys *g_CKeysPtr = nullptr;
int g_InputDisabled = 0;
int g_WindowHeight = 480;
CMoon g_CMoonInstance;
CSound *g_CSoundPtr = nullptr;
CEditorTools *g_CEditorToolsPtr = nullptr;
CDemonFileManager g_CDemonFileManagerInstance;
int g_UseDirect3D = 0;
int g_UseExternalRenderer = 1;
int g_MenuLeftRightPressed = 0;
CAlphaBitmap g_MenuBitmaps[8];
CAlphaBitmap g_MenuBlurLeft;
CAlphaBitmap g_MenuBlurMiddle;
CAlphaBitmap g_MenuBlurRight;
int g_GraphicsCardCount = 0;
char *g_GraphicsCardDriverNames[16];
char *g_GraphicsCardNames[16];
int g_GraphicsCardVendorIDs[16];
int g_GraphicsCardDeviceIDs[17];
int g_CurrentGraphicsBoard = 0;
char g_RendererDllPath[256];
int g_nocturne_fixed_display = 0;
int g_WindowWidth = 640;
int g_AudioVisualizationCounter = 0;
SMRGLTextureBasic g_AudioSpectrumTextures[8];
int g_GlobalDeltaTimeInt = 0;

// The renderer the spectrum draws its bars through, and the frame it took last.
namespace {
SRenderVertex s_vertices[4];
CDemonRenderer s_renderer;
int s_frame = -1;
} // namespace
char g_StringBuffers[10][256];
int g_StringBufferIndex = 0;

namespace front_support {

Stand stand;

namespace {

std::unique_ptr<CGame> s_game(new CGame());
CDemonMission s_mission;
CBitFont *const s_theme_font = (CBitFont *)0x10;
CBitFont *const s_menu_font = (CBitFont *)0x20;
std::vector<std::string> s_card_names;

// A menu that never lets go is a failing test, not a hung one.
const size_t kMaxFrames = 500;

void log(const std::string &call) {
    stand.calls.push_back(call);
}

int key_state(CKeys *, EInputCodeType code) {
    return stand.held.count((int)code) != 0;
}

int key_take(CKeys *, EInputCodeType code) {
    return stand.pressed.erase((int)code) != 0;
}

CKeys_vtable s_keys_vtable = {key_state, key_take, nullptr};
CKeys s_keys = {&s_keys_vtable};

} // namespace

CGame *game = s_game.get();
CDemonMission *mission = &s_mission;

std::vector<std::string> lines_of(const std::string &title) {
    for (size_t i = stand.frames.size(); i > 0; i--) {
        if (stand.frames[i - 1].title == title)
            return stand.frames[i - 1].lines;
    }
    return {};
}

void Stand::reset() {
    *this = Stand();
    std::memset(game, 0, sizeof(*game));
    std::memset(&s_mission, 0, sizeof(s_mission));
    game->game_pixx = 640;
    game->game_pixy = 480;
    game->game_bpp = 16;
    g_CGamePtr = game;
    g_CDemonMissionPtr = nullptr;
    g_EditorFont = nullptr;
    g_ThemeFont = s_theme_font;
    g_CKeysPtr = &s_keys;
    g_InputDisabled = 0;
    g_WindowHeight = 480;
    g_UseDirect3D = 0;
    g_MenuLeftRightPressed = 0;
    g_GraphicsCardCount = 0;
    std::memset(g_GraphicsCardVendorIDs, 0, sizeof(g_GraphicsCardVendorIDs));
    std::memset(g_GraphicsCardDeviceIDs, 0, sizeof(g_GraphicsCardDeviceIDs));
    g_CurrentGraphicsBoard = 0;
    g_RendererDllPath[0] = '\0';
    g_nocturne_fixed_display = 0;
    g_nocturne_no_quit = 0;
    g_WindowWidth = 640;
    g_AudioVisualizationCounter = 0;
    g_GlobalDeltaTimeInt = 0;
    g_StringBufferIndex = 0;
    s_renderer.vertex_buffer_ptr = s_vertices;
    g_CDemonRendererPtr2 = &s_renderer;
    s_frame = -1;
}

int Stand::count(const std::string &call) const {
    int n = 0;
    for (const std::string &c : calls) {
        if (c == call)
            n++;
    }
    return n;
}

bool Stand::in_order(const std::vector<std::string> &sequence) const {
    size_t at = 0;
    for (const std::string &c : calls) {
        if (at < sequence.size() && c == sequence[at])
            at++;
    }
    return at == sequence.size();
}

const Frame &last() {
    return stand.frames.back();
}

} // namespace front_support

using front_support::stand;

// --- the menu routine and the frame ----------------------------------------------

int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(char **menu_text_array,
                                                              int menu_count,
                                                              int *selected_index_ptr,
                                                              int y_position, char *title) {
    front_support::Frame frame;
    frame.title = title != nullptr ? title : "";
    for (int i = 0; i < menu_count; i++)
        frame.lines.push_back(menu_text_array[i]);
    frame.y = y_position;
    frame.selected = *selected_index_ptr;
    stand.frames.push_back(frame);
    if (stand.frames.size() > front_support::kMaxFrames)
        std::abort();

    front_support::Press press;
    if (stand.presses.empty()) {
        press.escape = true;
        press.close = true;
    } else {
        press = stand.presses.front();
        stand.presses.pop_front();
    }
    if (press.escape)
        stand.pressed.insert(DIK_ESCAPE);
    if (press.close)
        g_InputDisabled = 1;
    if (press.line < 0)
        return -1;
    *selected_index_ptr = press.line;
    if (!press.choose)
        return -1;
    g_MenuLeftRightPressed = press.left ? 1 : 0;
    return press.line;
}

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void) {
    front_support::log("swap");
    if (!stand.held_after_swap.empty()) {
        stand.held = stand.held_after_swap.front();
        stand.held_after_swap.pop_front();
    }
}

char *__cdecl support_newmsg_cpp_getLocalizedString_FUN_005441f0(char *key) {
    return key;
}

int __cdecl engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont *, int) {
    return 18;
}

void __cdecl core_game_cpp_CGame_updateDT_FUN_004d7d90(CGame *) {}

void __cdecl core_moon_cpp_CMoon_update_FUN_00529d60(CMoon *, float) {}

void __cdecl core_moon_cpp_CMoon_render_FUN_00529ed0(CMoon *) {
    front_support::log("moon");
}

void __cdecl core_game_cpp_CGame_saveClockTime_FUN_004d7d80(CGame *) {
    front_support::log("saveClockTime");
}

void __cdecl engine_special_cpp_clearScreen_FUN_005b3e70(void) {
    front_support::log("clearScreen");
}

void __cdecl engine_2d_c_clearInputAndWait_FUN_00403260(void) {
    front_support::log("clearInput");
}

void __cdecl engine_texture_cpp_clearTextureCache_FUN_005dd8e0(void) {
    front_support::log("clearTextureCache");
}

int _stricmp(char *s1, char *s2) {
    for (;; s1++, s2++) {
        const int a = std::tolower((unsigned char)*s1);
        const int b = std::tolower((unsigned char)*s2);
        if (a != b || a == 0)
            return a - b;
    }
}

// --- the main menu's -------------------------------------------------------------

void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap *, char *filename,
                                                                int width, int height) {
    char line[96];
    snprintf(line, sizeof(line), "load %s %dx%d", filename, width, height);
    front_support::log(line);
}

void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap *, int x, int y) {
    char line[32];
    snprintf(line, sizeof(line), "scale %dx%d", x, y);
    front_support::log(line);
}

void __cdecl core_moon_cpp_CMoon_init_FUN_00529ae0(CMoon *) {
    front_support::log("moonInit");
}

void __cdecl core_moon_cpp_CMoon_free_FUN_00529ce0(CMoon *) {
    front_support::log("moonFree");
}

void __cdecl core_sound_cpp_CSound_reset_FUN_005b39a0(CSound *) {
    front_support::log("soundReset");
}

void __cdecl core_sound_cpp_CSound_configure_FUN_005b3830(CSound *) {
    front_support::log("soundConfigure");
}

void __cdecl core_game_cpp_CGame_showChapterSelect_FUN_004e1cb0(CGame *, int select_mode) {
    front_support::log("chapterSelect " + std::to_string(select_mode));
}

void __cdecl core_game_cpp_CGame_loadGame_FUN_004e12b0(CGame *, char *save_filename, int) {
    front_support::log(std::string("loadGame ") + (save_filename != nullptr ? save_filename : "-"));
}

void __cdecl shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(CEditorTools *, char *, ...) {
    front_support::log("showError");
}

int __cdecl sound_sndmain_cpp_isSoundMuted_FUN_005a96b0(void) {
    return stand.muted;
}

int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_005a96c0(int muted) {
    stand.muted = muted;
    front_support::log("setMuted " + std::to_string(muted));
    return 0;
}

void __cdecl core_fileman_cpp_CDemonFileManager_showEditorMenu_FUN_004be270(CDemonFileManager *) {
    front_support::log("fileManager");
}

int __cdecl wincore_winvideo_cpp_playMovie_FUN_005f4a00(char *directory_path,
                                                        char *movie_filename) {
    front_support::log(std::string("playMovie ") + directory_path + "\\" + movie_filename);
    return 1;
}

int __cdecl core_actor_cpp_getRandomInt_FUN_0040cc70(int, int max_value) {
    return max_value;
}

void __cdecl core_game_cpp_hostNetworkGame_FUN_004e2f10(void) {
    front_support::log("host");
}

void __cdecl core_game_cpp_joinNetworkGame_FUN_004e2fc0(void) {
    front_support::log("join");
}

int nocturne_single_player_menu(void) {
    front_support::log("spMenu");
    if (stand.sp_choices.empty())
        return NOCTURNE_SP_MENU_CANCEL;
    const int choice = stand.sp_choices.front();
    stand.sp_choices.pop_front();
    return choice;
}

int nocturne_save_continue_target(char *out, int out_size) {
    if (!stand.continue_found)
        return 0;
    snprintf(out, (size_t)out_size, "%s", "auto.noc");
    return 1;
}

int nocturne_net_menu_multiplayer(void) {
    front_support::log("netMenu");
    if (stand.net_choices.empty())
        return NOCTURNE_NET_MENU_CANCEL;
    const int choice = stand.net_choices.front();
    stand.net_choices.pop_front();
    return choice;
}

void nocturne_net_menu_hotkeys(void) {}

void nocturne_gamepad_withdraw_nav(int) {}

int nocturne_attract_tick(void) {
    if (stand.attract.empty())
        return 0;
    const int due = stand.attract.front();
    stand.attract.pop_front();
    return due;
}

void nocturne_attract_pre_movie_pause(void) {
    front_support::log("attractPause");
}

void nocturne_window_set_size(int width, int height) {
    char line[48];
    snprintf(line, sizeof(line), "setSize %dx%d", width, height);
    front_support::log(line);
}

CBitFont *nocturne_menu_font(void) {
    return front_support::s_menu_font;
}

// --- the Options screens' ----------------------------------------------------------

void __cdecl core_game_cpp_CGame_rollCredits_FUN_004e4010(CGame *) {
    front_support::log("credits");
}

void __cdecl core_inivar_cpp_writeIniData_FUN_004fc510(void) {
    front_support::log("writeIni");
}

void __cdecl core_menu_cpp_showCalibrationTest_FUN_00510ba0(void) {
    front_support::log("calibration");
}

void nocturne_cheats_menu(void) {
    front_support::log("cheats");
}

int __cdecl engine_special_cpp_buildCardList_FUN_005b7db0(int *out_card_count, char **,
                                                          char **names, int *vendors,
                                                          int *devices) {
    front_support::log("buildCardList");
    front_support::s_card_names = stand.cards;
    *out_card_count = (int)stand.cards.size();
    for (size_t i = 0; i < stand.cards.size(); i++) {
        names[i] = &front_support::s_card_names[i][0];
        vendors[i] = i < stand.vendors.size() ? stand.vendors[i] : 0;
        devices[i] = i < stand.devices.size() ? stand.devices[i] : 0;
    }
    return 1;
}

int __cdecl engine_special_cpp_kill_FUN_005b71e0(void) {
    front_support::log("kill");
    return 1;
}

int __cdecl engine_special_cpp_loadExternalRenderer_FUN_005b6750(HWND) {
    front_support::log(std::string("load ") + g_RendererDllPath);
    g_UseDirect3D = stand.renderer_loads;
    return 1;
}

int __cdecl engine_special_cpp_selectCard_FUN_005b7d90(int card_index) {
    front_support::log("selectCard " + std::to_string(card_index));
    return 1;
}

const char *nocturne_resolution_label(int width, int height) {
    static char label[48];
    snprintf(label, sizeof(label), "Resolution : %dx%d", width, height);
    return label;
}

// One step along 640x480, 800x600, 1024x768, wrapping, never above `max_height`
// when one is given.
void nocturne_resolution_step(int current_width, int, int step, int max_height, int *out_width,
                              int *out_height) {
    static const int widths[] = {640, 800, 1024};
    static const int heights[] = {480, 600, 768};
    int at = 0;
    while (at < 2 && widths[at] != current_width)
        at++;
    at = (at + 3 + step) % 3;
    if (max_height != 0 && heights[at] > max_height)
        at = 0;
    *out_width = widths[at];
    *out_height = heights[at];
}

void nocturne_builtin_dll_snap(char *path) {
    front_support::log("snap");
    if (path[0] == '\0')
        snprintf(path, 256, "%s", "trigl.dll");
}

void nocturne_builtin_dll_step(char *path) {
    front_support::log("step");
    snprintf(path, 256, "%s",
             _stricmp(path, (char *)"trigl.dll") == 0 ? "tridx7.dll" : "trigl.dll");
}

const char *nocturne_gl_version_short(void) {
    return stand.gl_version;
}

const char *nocturne_window_mode_name(int mode) {
    return mode == 0 ? "Windowed" : "Fullscreen";
}

int nocturne_window_mode_get(void) {
    return stand.window_mode;
}

int nocturne_window_mode_cycle(int step) {
    front_support::log("windowCycle " + std::to_string(step));
    return 0;
}

void nocturne_window_mode_reapply(void) {
    front_support::log("reapply");
}

void nocturne_window_fullscreen_size(int *width, int *height) {
    *width = 1920;
    *height = 1080;
}

// Only handed on, to the step below.
int nocturne_display_offers(int, int) {
    return 1;
}

void nocturne_resolution_step_where(int current_width, int current_height, int step, int max_height,
                                    int (*accept)(int, int), int *out_width, int *out_height) {
    front_support::log(std::string("resolutionStep") + (accept != nullptr ? " filtered" : ""));
    nocturne_resolution_step(current_width, current_height, step, max_height, out_width,
                             out_height);
}

int nocturne_display_index(void) {
    return 0;
}

int nocturne_display_index_cycle(int step) {
    front_support::log("displayCycle " + std::to_string(step));
    return 0;
}

const char *nocturne_display_label(int index) {
    return index == 0 ? "1 (Screen)" : "?";
}

int nocturne_fullscreen_size_get(void) {
    return 0;
}

int nocturne_fullscreen_size_cycle(int step) {
    front_support::log("sizeCycle " + std::to_string(step));
    return 0;
}

const char *nocturne_fullscreen_size_name(int size) {
    return size == 0 ? "Game" : "Desktop";
}

int nocturne_refresh_rate_get(void) {
    return 0;
}

int nocturne_refresh_rate_cycle(int step, int width, int height) {
    front_support::log("refreshCycle " + std::to_string(step) + " " + std::to_string(width) + "x" +
                       std::to_string(height));
    return 0;
}

const char *nocturne_refresh_rate_label(int hz) {
    return hz == 0 ? "Auto" : "?";
}

int nocturne_vsync_get(void) {
    return stand.vsync;
}

int nocturne_vsync_cycle(int step) {
    front_support::log("vsyncCycle " + std::to_string(step));
    return 0;
}

const char *nocturne_upscaler_name(int mode) {
    return mode == NOCTURNE_UPSCALER_FSR ? "FSR" : "Standard";
}

int nocturne_upscaler_sharpens(int mode) {
    return mode == NOCTURNE_UPSCALER_FSR;
}

int nocturne_upscaler_get(void) {
    return stand.upscaler;
}

int nocturne_upscaler_cycle(int step) {
    front_support::log("upscalerCycle " + std::to_string(step));
    stand.upscaler = stand.upscaler == NOCTURNE_UPSCALER_FSR ? NOCTURNE_UPSCALER_STANDARD
                                                             : NOCTURNE_UPSCALER_FSR;
    return stand.upscaler;
}

int nocturne_upscaler_sharpness_get(void) {
    return 50;
}

const char *nocturne_antialias_name(int mode) {
    return mode == NOCTURNE_ANTIALIAS_FXAA ? "FXAA" : "Off";
}

int nocturne_antialias_get(void) {
    return stand.antialias;
}

int nocturne_antialias_cycle(int step) {
    front_support::log("antialiasCycle " + std::to_string(step));
    stand.antialias = stand.antialias == NOCTURNE_ANTIALIAS_FXAA ? NOCTURNE_ANTIALIAS_OFF
                                                                 : NOCTURNE_ANTIALIAS_FXAA;
    return stand.antialias;
}

const char *nocturne_widescreen_name(int mode) {
    return mode == NOCTURNE_WIDESCREEN_PAN ? "Pan & scan" : "Stretch";
}

int nocturne_widescreen_get(void) {
    return NOCTURNE_WIDESCREEN_PAN;
}

int nocturne_widescreen_cycle(int step) {
    front_support::log("widescreenCycle " + std::to_string(step));
    return NOCTURNE_WIDESCREEN_PAN;
}

int nocturne_upscaler_sharpness_cycle(int step) {
    front_support::log("sharpnessCycle " + std::to_string(step));
    return 50;
}

const char *nocturne_os_font_name(int) {
    return "Bitmap";
}

int nocturne_os_font_get(void) {
    return 0;
}

int nocturne_os_font_cycle(int step) {
    front_support::log("osFontCycle " + std::to_string(step));
    return 0;
}

const char *nocturne_menu_font_name(int) {
    return "Dialog";
}

int nocturne_menu_font_get(void) {
    return 0;
}

int nocturne_menu_font_cycle(int step) {
    front_support::log("menuFontCycle " + std::to_string(step));
    return 0;
}

// --- the Sound page's mixer -------------------------------------------------------

int __cdecl sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index) {
    return stand.channel_on[channel_index];
}

float __cdecl sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(int channel_index) {
    return stand.channel_level[channel_index];
}

void __cdecl sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(int channel_index, float volume) {
    stand.channel_level[channel_index] = volume;
}

void __cdecl sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(int channel_index, int enable_state) {
    stand.channel_on[channel_index] = enable_state;
}

void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30(void) {
    front_support::log("pushSfx");
}

void __cdecl sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(uint) {}

uint __cdecl sound_sndmain_cpp_startSfx_FUN_005a8e90(char *filename) {
    front_support::log(std::string("startSfx ") + filename);
    return 0;
}

void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0(void) {
    front_support::log("popSfx");
}

float nocturne_movie_volume_get(void) {
    return stand.movie_level;
}

void nocturne_movie_volume_set(float volume) {
    stand.movie_level = volume;
}

int __cdecl sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260(void) {
    return stand.rate;
}

int __cdecl sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250(void) {
    return stand.bits;
}

int __cdecl sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270(void) {
    return stand.channels;
}

void __cdecl sound_sndmain_cpp_setAudioSampleRate_FUN_005ab2c0(int sample_rate) {
    stand.rate = sample_rate;
}

void __cdecl sound_sndmain_cpp_setAudioBitDepth_FUN_005ab280(int bit_depth) {
    stand.bits = bit_depth;
}

void __cdecl sound_sndmain_cpp_setAudioChannelCount_FUN_005ab2a0(int channel_count) {
    stand.channels = channel_count;
}

uint __cdecl sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0(void) {
    return (uint)stand.hardware_3d;
}

int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005ab130(void) {
    front_support::log("resetDevice");
    return 1;
}

int __cdecl sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0(void) {
    return stand.device;
}

int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(void) {
    return (int)stand.sound_devices.size();
}

void __cdecl sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(int device_id,
                                                               SSoundDeviceInfo *device_info) {
    snprintf(device_info->device_name, sizeof(device_info->device_name), "%s",
             stand.sound_devices[(size_t)device_id].c_str());
    device_info->has_hardware_mixing = (DWORD)stand.device_mixes;
}

int __cdecl sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590(void) {
    return stand.mixing;
}

void __cdecl sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550(int enable) {
    stand.mixing = enable;
}

int __cdecl sound_sndmain_cpp_closeSoundDevice_FUN_005ab660(void) {
    front_support::log("closeDevice");
    return 1;
}

void __cdecl sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(int device_id) {
    stand.device = device_id;
}

int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0(void) {
    front_support::log("initDevice");
    return 1;
}

int __cdecl sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample, int channels,
                                                              int sample_rate) {
    stand.bits = bits_per_sample;
    stand.channels = channels;
    stand.rate = sample_rate;
    front_support::log("outputMode");
    return 1;
}

int __cdecl sound_sndmain_cpp_isSoundBusy_FUN_005ab540(void) {
    return stand.busy;
}

float __cdecl sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400(int, float, float) {
    return stand.level;
}

// --- the spectrum's bars, through the renderer ------------------------------------------

int __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(CDemonRenderer *,
                                                                          int render_alpha) {
    stand.render_alpha = render_alpha;
    return 0;
}

void __cdecl engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(CDemonRenderer *,
                                                                         int blend_mode) {
    stand.blend = blend_mode;
}

void __cdecl engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(
    CDemonRenderer *, SMRGLTextureBasic *texture) {
    s_frame = (int)(texture - g_AudioSpectrumTextures);
}

// The quad's corners as the bar's edges, checked to be the rectangle they draw,
// and only while it is half transparent and added.
void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0048ae10(
    CDemonRenderer *renderer, SMRGLHeaderPrimitive *prim, int render_flags) {
    const SRenderVertex *v = renderer->vertex_buffer_ptr;
    const bool square = v[1].projected_vertex.screen_x == v[2].projected_vertex.screen_x &&
                        v[0].projected_vertex.screen_x == v[3].projected_vertex.screen_x &&
                        v[0].projected_vertex.screen_y == v[1].projected_vertex.screen_y &&
                        v[2].projected_vertex.screen_y == v[3].projected_vertex.screen_y &&
                        v[0].u == 8 << 16 && v[2].u == 0xf8 << 16 && prim->base.count == 4 &&
                        render_flags == 0x23 && stand.render_alpha == 0x8000 && stand.blend == 1;
    char bar[96];
    snprintf(bar, sizeof(bar), "%d %d %d %d %d%s", v[0].projected_vertex.screen_x >> 16,
             v[1].projected_vertex.screen_x >> 16, v[0].projected_vertex.screen_y >> 16,
             v[2].projected_vertex.screen_y >> 16, s_frame, square ? "" : " skewed");
    stand.bars.emplace_back(bar);
}

// --- the pick list ------------------------------------------------------------------

CPickList *__cdecl shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(CPickList *this_ptr) {
    stand.rows.clear();
    return this_ptr;
}

CPickList *__cdecl shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(CPickList *this_ptr, uint) {
    front_support::log("listGone");
    return this_ptr;
}

void __cdecl shape_edittool_cpp_CStrList_add_FUN_004a2b80(CStrList *, char *string_data) {
    stand.rows.push_back(string_data);
}

void __cdecl shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(CPickList *,
                                                                         int result_value) {
    stand.list_selected = result_value;
}

int __cdecl shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(
    CPickList *, char *dialog_title, int initial_selected_index, uint) {
    stand.list_title = dialog_title;
    stand.list_initial = initial_selected_index;
    front_support::log("list");
    if (stand.list_choices.empty())
        return -1;
    const int choice = stand.list_choices.front();
    stand.list_choices.pop_front();
    return choice;
}

// --- the moon's widening, which the pages never reach: the moon is stood in for --

CDemonRenderer *g_CDemonRendererPtr2 = nullptr;

void __cdecl engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer *, int, int,
                                                                         int, int) {}
void __cdecl engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0(CDemonRenderer *) {}
extern "C" int nocturne_trigl_device_begin_overlay(float, float, float, float) {
    return 0;
}
extern "C" void nocturne_trigl_device_end_overlay(void) {}

// --- the Control page's -----------------------------------------------------------

int nocturne_pad_tuning_value(int setting) {
    return setting == NOCTURNE_PAD_SETTING_INVERT ? stand.pad_invert : setting * 10;
}

void nocturne_pad_tuning_step(int setting, int direction) {
    front_support::log("padStep " + std::to_string(setting) + " " + std::to_string(direction));
}

const char *nocturne_movement_name(int mode) {
    return mode == NOCTURNE_MOVEMENT_CAMERA ? "Camera" : "Tank";
}

int nocturne_movement_get(void) {
    return NOCTURNE_MOVEMENT_TANK;
}

int nocturne_movement_cycle(int step) {
    front_support::log("movementCycle " + std::to_string(step));
    return NOCTURNE_MOVEMENT_TANK;
}

void nocturne_gamepad_reseed_for_mode(struct CGame *) {
    front_support::log("reseed");
}

void nocturne_gamepad_suppress_nav(int suppress) {
    front_support::log("suppressNav " + std::to_string(suppress));
}

const char *nocturne_gamepad_code_name(int) {
    return "Pad A";
}

void __cdecl core_game_cpp_CGame_restoreDefaultControls_FUN_004dbbc0(CGame *) {
    front_support::log("restoreDefaults");
}

void __cdecl core_menu_cpp_adjustMouseSensitivity_FUN_005107c0(int *, char *window_title) {
    front_support::log(std::string("sensitivity ") + window_title);
}

int __cdecl core_menu_cpp_calibrateGamepad_FUN_005104d0(void) {
    front_support::log("calibrate");
    return stand.calibrates;
}

int __cdecl core_menu_cpp_isKeyCodeValidForMode_FUN_00513720(EInputCodeType *key_code_ptr, char *) {
    return *key_code_ptr == stand.invalid_code ? 1 : 0;
}

void __cdecl core_game_cpp_CGame_resetKeyState_FUN_004dbe60(CGame *) {
    front_support::log("resetKeys");
}

void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys *, int enable_extended) {
    front_support::log("inputMask " + std::to_string(enable_extended));
}

void __cdecl shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(
    CEditorTools *, char *format, ...) {
    va_list args;
    va_start(args, format);
    char text[512];
    vsnprintf(text, sizeof(text), format, args);
    va_end(args);
    front_support::log(std::string("status ") + text);
}

char *__cdecl core_menu_cpp_getKeyDisplayName_FUN_005134e0(EInputCodeType key_code) {
    static char name[32];
    snprintf(name, sizeof(name), "key%d", key_code);
    return name;
}

char *nocturne_automap_key_label(void) {
    static char label[] = "Map";
    return label;
}

int *nocturne_automap_key_binding(void) {
    return &stand.automap_key;
}

char *__cdecl wincore_winrun_cpp_getKeyName_FUN_005f3980(EInputCodeType keycode) {
    static char name[32];
    snprintf(name, sizeof(name), "Key %d", keycode);
    return name;
}

// The front end's layout as the test sets it, and its fangs, which the pages
// never show.
NocturneLayout nocturne_layout(void) {
    return stand.layout;
}
void nocturne_front_end_mode(int *width, int *height) {
    *width = g_WindowWidth;
    *height = g_WindowHeight;
}
int nocturne_front_end_set_mode(void) {
    return 1;
}
void nocturne_layout_display(struct CAlphaBitmap *, int, int, int) {}
void __cdecl engine_2d_c_reinitializeGraphicsSystem_FUN_00402a80(void) {}
CAlphaBitmap *__cdecl engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap *bitmap) {
    return bitmap;
}
CAlphaBitmap *__cdecl engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap *bitmap,
                                                                         uint) {
    return bitmap;
}
