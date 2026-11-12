#pragma once

// =============================================================================
// CALIBRATION SCREENS — the gamepad and monitor calibration at the game's
// resolution
// =============================================================================
//
// calibrateGamepad, checkAndCalibrateGamepad and showCalibrationTestPattern
// under NOCTURNE_AUTHENTIC_MENU=0, whose keeps call these at their top and
// carry the shipped routines. Each does as that did with the front end's
// layout (core/front_end_layout.h): the prompts scaled and centred on it. The
// test pattern, plain enough to stretch, fills the screen whatever its shape,
// its lines placed with the stretch at the layout's text scale. At 640x480 the
// layout is the screen, and each draws as it shipped. The gamepad's centre is
// where it was when Enter was pressed; the shipped routine took the frame
// before's, which Enter on the first frame left unset.

#ifdef __cplusplus
extern "C" {
#endif

int nocturne_calibrate_gamepad(void);
int nocturne_check_and_calibrate_gamepad(void);
void nocturne_calibration_test_pattern(char *message_text);

#ifdef __cplusplus
}
#endif
