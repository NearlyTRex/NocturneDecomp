// =============================================================================
// CALIBRATION SCREENS — implementation
// =============================================================================
//
// See calibration_screens.h. The keeps of calibrateGamepad,
// checkAndCalibrateGamepad and showCalibrationTestPattern are the shipped
// routines these follow.

#include "core/calibration_screens.h"

#include "core/front_end_layout.h"
#include "core/ui_scale.h"
#include "nocturne.h"

#include <cmath>
#include <cstdio>
#include <string>

#if !NOCTURNE_AUTHENTIC_MENU

namespace {

const int kOpaque = 0xffff;
const int kCentre = 0x140;
const int kHeightCharacter = 0x58;
// The gamepad's prompts, centred on the picture's middle row.
const int kPromptRow = 0xf0;
const int kPromptColour = 7;
const int kNoShadow = 0;
const DWORD kNoLow = 0x7fffffff;
// The test pattern's lines, three rows above its foot and two below its top.
const int kPictureWidth = 0x280;
const int kPictureHeight = 0x1e0;
const int kPatternColour = 0xf8;
const int kPatternShadow = -1;

// `text` centred on screen column `centre`, its top at screen row `y`.
void draw_centred(CBitFont *font, char *text, int centre, int y, int colour, int shadow,
                  float scale) {
    const int width = nocturne_ui_text_width_f(font, text, scale);
    nocturne_ui_draw_text_f(font, text, centre - width / 2, y, colour, shadow, scale);
}

// The pattern is plain enough to stretch, so unlike the rest of the front end
// it fills a wide screen rather than keeping its shape: kept pixels where
// both stretches keep them, else mixed.
void display_stretched(CAlphaBitmap *picture, float stretch_x, float stretch_y) {
    const int filter = nocturne_layout_filter(stretch_x) == NOCTURNE_LAYOUT_FILTER_NEAREST &&
                               nocturne_layout_filter(stretch_y) == NOCTURNE_LAYOUT_FILTER_NEAREST
                           ? NOCTURNE_LAYOUT_FILTER_NEAREST
                           : NOCTURNE_LAYOUT_FILTER_SMOOTH;
    nocturne_alpha_display_scaled(picture, 0, 0, g_WindowWidth, g_WindowHeight, kOpaque, filter);
}

// A frame of the gamepad's screen: the moon lit from the stick, the prompt
// and the stick's readout.
void show_prompt(const char *key, const NocturneLayout &layout) {
    core_moon_cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0(&g_CMoonInstance);
    char *text = support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)key);
    CBitFont *font = g_MediumFont;
    const int height = nocturne_ui_char_height_f(font, kHeightCharacter, layout.scale);
    engine_3d_c_setRenderAlpha_FUN_00406d80(kOpaque);
    draw_centred(font, text, nocturne_layout_x(layout, kCentre),
                 nocturne_layout_y(layout, kPromptRow) - height / 2, kPromptColour, kNoShadow,
                 layout.scale);
    char readout[64];
    std::snprintf(readout, sizeof(readout), "%d,%d,%x", (int)g_JoyXPos, (int)g_JoyYPos,
                  (uint)g_JoyButtons);
    engine_2d_c_drawText_FUN_00401fd0(readout, 0, 0);
    core_game_cpp_CGame_resetKeyState_FUN_004dbe60(g_CGamePtr);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
}

bool pressed(EInputCodeType code) {
    return (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr, code) != 0;
}

// Escape: the gamepad uncalibrated, and the keyboard in its place.
int cancel() {
    g_CGamePtr->x_center = 0;
    g_CGamePtr->game_control = CONTROL_MODE_KEYBOARD;
    return 0;
}

} // namespace

extern "C" int nocturne_calibrate_gamepad(void) {
    const NocturneLayout layout = nocturne_layout();
    DWORD centre_x = 0;
    DWORD centre_y = 0;
    for (;;) {
        show_prompt("Center gamepad, press ENTER", layout);
        centre_x = g_JoyXPos;
        centre_y = g_JoyYPos;
        if (pressed(DIK_RETURN))
            break;
        if (pressed(DIK_ESCAPE))
            return cancel();
    }
    DWORD x_min = kNoLow;
    DWORD x_max = 0;
    DWORD y_min = kNoLow;
    DWORD y_max = 0;
    for (;;) {
        show_prompt("Move gamepad in all directions, press ENTER", layout);
        if (pressed(DIK_RETURN)) {
            CGame *game = g_CGamePtr;
            game->x_center = (int)centre_x;
            game->y_center = (int)centre_y;
            game->x_stick_min = (int)x_min;
            game->x_stick_max = (int)x_max;
            game->y_stick_min = (int)y_min;
            game->y_stick_max = (int)y_max;
            return 1;
        }
        if (pressed(DIK_ESCAPE))
            return cancel();
        if ((int)g_JoyXPos < (int)x_min)
            x_min = g_JoyXPos;
        if ((int)x_max < (int)g_JoyXPos)
            x_max = g_JoyXPos;
        if ((int)g_JoyYPos < (int)y_min)
            y_min = g_JoyYPos;
        if ((int)y_max < (int)g_JoyYPos)
            y_max = g_JoyYPos;
    }
}

extern "C" int nocturne_check_and_calibrate_gamepad(void) {
    if (g_CGamePtr->game_control != CONTROL_MODE_GAMEPAD || g_CGamePtr->x_center != 0)
        return 1;
    return nocturne_calibrate_gamepad();
}

extern "C" void nocturne_calibration_test_pattern(char *message_text) {
    const NocturneLayout layout = nocturne_layout();
    CBitFont *font = g_SmallEditorFont;
    std::string prompt = message_text;
    prompt +=
        support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"  Press any key to continue.");
    // The rows are counted in the picture's pixels, then placed where the
    // stretch puts them; the text keeps the layout's scale, so it keeps its
    // shape.
    const int rows = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(font, kHeightCharacter);
    const float stretch_x = (float)g_WindowWidth / (float)kPictureWidth;
    const float stretch_y = (float)g_WindowHeight / (float)kPictureHeight;
    const int centre = g_WindowWidth / 2;
    engine_special_cpp_clearScreen_FUN_005b3e70();
    display_stretched(&g_CalibrationBitmap, stretch_x, stretch_y);
    draw_centred(font, &prompt[0], centre,
                 (int)std::lround((float)(kPictureHeight - rows * 3) * stretch_y), kPatternColour,
                 kPatternShadow, layout.scale);
    char *title = support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)"Monitor calibration");
    draw_centred(font, title, centre, (int)std::lround((float)(rows * 2) * stretch_y),
                 kPatternColour, kPatternShadow, layout.scale);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
}

#endif
