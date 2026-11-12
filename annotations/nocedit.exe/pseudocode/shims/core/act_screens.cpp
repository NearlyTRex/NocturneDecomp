// =============================================================================
// ACT SCREENS — implementation
// =============================================================================
//
// See act_screens.h. The keeps of CGame::displayActStats, CGame::finishAct and
// CGame::rollCredits are the shipped routines these follow.

#include "core/act_screens.h"

#include "core/front_end_layout.h"
#include "core/ui_scale.h"
#include "nocturne.h"

#include <string>
#include <vector>

#if !NOCTURNE_AUTHENTIC_MENU

namespace {

const int kOpaque = 0xffff;
const int kPictureWidth = 0x280;
const int kPictureHeight = 0x1e0;
const int kTextColour = 0xf8;
const int kHeadingColour = 2;
const int kHeightCharacter = 0x58;
char kStatsPicture[] = "stats";

// The stats' text: wrapped into a column 0xc0 wide, at most 20 lines of 0x100,
// centred between the picture's columns 0x1c0 and 0x27f from row 0xf0.
const int kStatsLines = 0x14;
const int kStatsStride = 0x100;
const int kStatsWrap = 0xc0;
const int kStatsLeft = 0x1c0;
const int kStatsRight = 0x27f;
const int kStatsTop = 0xf0;

// "To be continued..." for five seconds; below 480 lines in a smaller font.
const float kContinuedTime = 5.0f;
const int kSmallScreenHeight = 0x1e0;
const int kFinished = 2;

// The credits: at most 1024 lines read, each line 254 characters, rolling up
// the picture's column from its column 0x19e between black strips over its
// top 30 rows and from row 0x1b7, at 32 rows a second from its foot.
const int kCreditLines = 0x400;
const int kCreditLength = 0xff;
const int kEofFlag = 0x10;
const int kColumnLeft = 0x19e;
const int kTopStripBottom = 0x1e;
const int kBottomStripTop = 0x1b7;
const int kPictureFoot = 0x1df;
const float kScrollSpeed = 32.0f;
const int kMusicChannel = 1;
const int kNonPositional = 1;
const int kCloseLine = 4670;

// `text` centred between screen columns `left` and `right` as the engine
// centres it, its top at screen row `y`, at the layout's scale.
void draw_centred(CBitFont *font, char *text, int left, int right, int y, int colour, float scale) {
    const int width = nocturne_ui_text_width_f(font, text, scale);
    nocturne_ui_draw_text_f(font, text, (left + right + 1 - width) / 2, y, colour, 0, scale);
}

// The time as "hh:mm:ss.cc", spaces made zeros, and a blank line after.
void append_time(std::string *text, float seconds_in) {
    const int hours = (int)ROUND(ROUND(seconds_in * (float)0.00027777777777777799));
    const float past_hours = seconds_in - (float)hours * (float)3600;
    const float per_minute = (float)0.016666666666666701;
    const float past_minutes =
        past_hours - (float)(int)ROUND(ROUND(past_hours * per_minute)) * (float)60;
    const int seconds = (int)ROUND(ROUND(past_minutes));
    const float fraction = past_minutes - (float)seconds;
    char line[256];
    _sprintf(line, "%2d:%2d:%2d.%2d\n\n", hours, (int)ROUND(ROUND(past_hours * per_minute)),
             seconds, (int)ROUND(ROUND(fraction * (float)100)));
    for (char *c = line; *c != '\0'; c++) {
        if (*c == ' ')
            *c = '0';
    }
    *text += line;
}

// The stats picture, and `text` wrapped into `lines` and drawn in its column.
void show_stats(std::string text, char *lines) {
    const NocturneLayout layout = nocturne_layout();
    CAlphaBitmap picture;
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&picture);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&picture, kStatsPicture, kPictureWidth,
                                                       kPictureHeight);
    engine_special_cpp_clearScreen_FUN_005b3e70();
    nocturne_layout_display(&picture, 0, 0, kOpaque);
    CBitFont *font = g_ThemeFont;
    engine_3d_c_setRenderAlpha_FUN_00406d80(kOpaque);
    const int count = engine_font_cpp_CBitFont_wrapText_FUN_004d0010(
        font, &text[0], lines, kStatsLines, kStatsStride, kStatsWrap);
    const int pitch = nocturne_ui_char_height_f(font, kHeightCharacter, layout.scale);
    const int left = nocturne_layout_x(layout, kStatsLeft);
    const int right = nocturne_layout_x(layout, kStatsRight);
    int y = nocturne_layout_y(layout, kStatsTop);
    char *line = lines;
    for (int i = 0; i < count; i++) {
        draw_centred(font, line, left, right, y, kTextColour, layout.scale);
        line += kStatsStride;
        y += pitch;
    }
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&picture, 0);
}

// A string looked up, and a blank line after.
void append_localized(std::string *text, const char *key) {
    *text += support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)key);
    *text += "\n\n";
}

void append_count(std::string *text, int count) {
    char line[256];
    _sprintf(line, "%d\n\n", count);
    *text += line;
}

// The credits' lines up to "end", as read; false with no file to read.
bool read_credits(std::vector<std::string> *lines) {
    _FILE *stream =
        engine_dosio_cpp_getFile_FUN_00481a50((char *)"data", (char *)"credits.txt", (char *)"rt");
    if (stream == nullptr)
        return false;
    // A read that finds nothing leaves the line before, as the shipped
    // routine's buffer does.
    char line[256] = {};
    while ((stream->_flag & kEofFlag) == 0 && (int)lines->size() < kCreditLines) {
        _fgets(line, kCreditLength, stream);
        if (_strcmp(line, (char *)"end\n") == 0)
            break;
        lines->emplace_back(line);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream, (char *)"..\\core\\game.cpp", kCloseLine);
    return true;
}

// The credits with their first line at layout row `top`: those on the picture
// and above its foot, centred between the column and the screen's `right`.
void draw_credits(CBitFont *font, std::vector<std::string> &lines, int top,
                  const NocturneLayout &layout, int right) {
    const int line_height =
        engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(font, kHeightCharacter);
    const int left = nocturne_layout_x(layout, kColumnLeft);
    int y = top;
    for (std::string &stored : lines) {
        char *line = &stored[0];
        int colour = kTextColour;
        // A backslash and the character after it are dropped; "\b" is a
        // heading.
        if (*line == '\\') {
            if (line[1] == 'b')
                colour = kHeadingColour;
            line += line[1] != '\0' ? 2 : 1;
        }
        if (y > -1 && y < kPictureFoot - line_height)
            draw_centred(font, line, left, right, nocturne_layout_y(layout, y), colour,
                         layout.scale);
        y += line_height;
    }
}

uint start_music() {
    if (sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(kMusicChannel) == 0)
        return 0;
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(kMusicChannel);
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(kNonPositional);
    const uint music = sound_sndmain_cpp_startSfx_FUN_005a8e90((char *)"faded-remix.mp3");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    return music;
}

} // namespace

extern "C" void nocturne_act_stats(struct CGame *game) {
    std::string text;
    game->total_game_time = game->total_play_time + game->total_game_time;
    game->total_kill_count = game->total_kill_count + game->damageable_enemy_count;
    append_localized(&text, "Level time");
    append_time(&text, game->total_play_time);
    append_localized(&text, "Body count");
    append_count(&text, game->damageable_enemy_count);
    show_stats(text, g_ActStatsTextBuffer1);
    game->total_play_time = 0.0f;
}

extern "C" void nocturne_finish_act(struct CGame *game) {
    const NocturneLayout layout = nocturne_layout();
    if (game->act_completion_state == kFinished) {
        CBitFont *font = g_ThemeFont;
        if (g_CDemonCameraInstance.framebuffer_width < kSmallScreenHeight)
            font = g_SmallEditorFont;
        const int height = nocturne_ui_char_height_f(font, kHeightCharacter, layout.scale);
        core_game_cpp_CGame_saveClockTime_FUN_004d7d80(game);
        float left = kContinuedTime;
        while (left > 0.0f) {
            engine_special_cpp_clearScreen_FUN_005b3e70();
            char *text =
                support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"To be continued...");
            draw_centred(font, text, 0, g_WindowWidth - 1, (g_WindowHeight - height) / 2,
                         kTextColour, layout.scale);
            wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
            core_game_cpp_CGame_updateDT_FUN_004d7d90(game);
            left -= game->delta_time_float;
        }
        engine_2d_c_clearInputAndWait_FUN_00403260();
        core_game_cpp_CGame_rollCredits_FUN_004e4010(game);
        return;
    }
    std::string text;
    game->total_game_time = game->total_play_time + game->total_game_time;
    game->total_kill_count = game->total_kill_count + game->damageable_enemy_count;
    append_localized(&text, "Mission time");
    // The whole time stays; the shipped routine left only its part of a second.
    append_time(&text, game->total_game_time);
    append_localized(&text, "Total body count");
    append_count(&text, game->total_kill_count);
    show_stats(text, g_ActStatsTextBuffer2);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    engine_2d_c_clearInputAndWait_FUN_00403260();
}

extern "C" void nocturne_roll_credits(struct CGame *game) {
    NocturneLayout layout = nocturne_layout();
    layout.left = 0;
    const int screen_right = nocturne_layout_x(layout, kPictureWidth);
    const int screen_foot = nocturne_layout_y(layout, kPictureHeight);
    const int right = (screen_right > g_WindowWidth ? screen_right : g_WindowWidth) - 1;
    const int bottom = (screen_foot > g_WindowHeight ? screen_foot : g_WindowHeight) - 1;
    engine_2d_c_clearInputAndWait_FUN_00403260();
    CAlphaBitmap picture;
    engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520(&picture);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&picture, kStatsPicture, kPictureWidth,
                                                       kPictureHeight);
    std::vector<std::string> lines;
    if (!read_credits(&lines)) {
        engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&picture, 0);
        return;
    }
    sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
    const uint music = start_music();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    CBitFont *font = g_ThemeFont;
    font->win_font_enabled = 0;
    int drawn_top = -1;
    float scroll_top = (float)kPictureHeight;
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(game);
    engine_3d_c_setRenderAlpha_FUN_00406d80(kOpaque);
    while (true) {
        const int top = (int)ROUND(ROUND(scroll_top));
        if (top != drawn_top) {
            engine_special_cpp_clearScreen_FUN_005b3e70();
            nocturne_alpha_display_scaled(&picture, nocturne_layout_x(layout, 0),
                                          nocturne_layout_y(layout, 0),
                                          nocturne_layout_length(layout, kPictureWidth),
                                          nocturne_layout_length(layout, kPictureHeight), kOpaque,
                                          nocturne_layout_filter(layout.scale));
            draw_credits(font, lines, top, layout, right);
            if (music != 0 && sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(music) == 0)
                break;
            const int column_left = nocturne_layout_x(layout, kColumnLeft);
            engine_2d_c_fillRectColor_FUN_00403170(column_left, 0, right,
                                                   nocturne_layout_y(layout, kTopStripBottom), 0);
            engine_2d_c_fillRectColor_FUN_00403170(
                column_left, nocturne_layout_y(layout, kBottomStripTop), right, bottom, 0);
            drawn_top = top;
        }
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        if ((*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr, DIK_ESCAPE) != 0)
            break;
        core_game_cpp_CGame_updateDT_FUN_004d7d90(game);
        scroll_top -= game->delta_time_float * kScrollSpeed;
    }
    if (g_UseOSFonts != 0)
        font->win_font_enabled = 1;
    sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540(&picture, 0);
}

#endif // !NOCTURNE_AUTHENTIC_MENU
