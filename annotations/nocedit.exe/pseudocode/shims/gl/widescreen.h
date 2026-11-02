#pragma once

// =============================================================================
// WIDESCREEN — how a 4:3 scene fills a wider screen
// =============================================================================
//
// An addition, not a reconstruction. Gated by NOCTURNE_AUTHENTIC_MENU, whose
// Graphic Options page sets it. The shipped game never offered a mode wider than
// 4:3; above 480 lines the camera renders into a fixed 640x480 scene space and
// the renderer stretches that across the screen, so a 16:9 mode draws every
// shot squashed. The backdrops are 640x480 rasters with nothing outside the
// frame (research/18-resolution_and_aspect_ratio), so a wider screen can show
// the shot at its own proportions in two ways:
//
//   Pillarbox    the whole shot, in a 4:3 column with black either side.
//   Pan & scan   the shot scaled to the screen's width, its top and bottom
//                cropped, and the crop moved to follow the script's focus
//                actor: snapped on a cut, eased with a dead band while the
//                camera holds, and centred while the letterbox is up, where
//                the bars then cover the band the shot was composed for.
//
// Stretch is the renderer's own fill. Only the scene is reframed: everything
// the engine draws after the frame lock — HUD, text, menus — is in screen
// pixels and stays where it was. Nothing changes at 480 lines or fewer, where
// the scene and the screen are one space, or at 4:3 and narrower.
//
// The mode lives in [Graphics] widescreen of system\nocturne.ini, is read on
// first use and cached, and takes effect on the next frame.

#ifdef __cplusplus
extern "C" {
#endif

// The values are what [Graphics] widescreen stores, so a new one goes on the
// end.
enum {
    NOCTURNE_WIDESCREEN_STRETCH = 0,
    NOCTURNE_WIDESCREEN_PILLARBOX = 1,
    NOCTURNE_WIDESCREEN_PAN = 2,
    NOCTURNE_WIDESCREEN_COUNT = 3
};

// The scene space above 480 lines, which CDemonCamera::init clamps the camera's
// framebuffer to.
enum { NOCTURNE_SCENE_WIDTH = 640, NOCTURNE_SCENE_HEIGHT = 480 };

// The stored mode; Pan & scan when the INI does not name one. Always Stretch
// under NOCTURNE_AUTHENTIC_MENU=1.
int nocturne_widescreen_get(void);

// Steps the mode by `step`, wrapping, and saves it. Returns the new mode.
int nocturne_widescreen_cycle(int step);

// "Stretch", "Pillarbox" or "Pan & scan".
const char *nocturne_widescreen_name(int mode);

// Moves the crop for one rendered scene on a `width` x `height` screen.
// `camera` is the shot's camera, whose change is a cut; `focus_y` the focus
// actor's height in scene space when `focus_visible`; `cinematic` whether the
// letterbox is up; `look` the player's look, -1 (down) to 1 (up), which at full
// tilt shows that edge of the shot wherever the crop is and eases back when
// let go, and is ignored, easing back, while `cinematic`; `seconds` the time
// since the last scene.
void nocturne_widescreen_track(int width, int height, int camera, int focus_visible, float focus_y,
                               int cinematic, float look, float seconds);

// The part of the scene target to show and where, in the target's pixels
// counted from its top-left. 0 when the scene is shown as drawn.
struct NocturneReframe {
    int src_x, src_y, src_w, src_h;
    int dst_x, dst_y, dst_w, dst_h;
};
int nocturne_widescreen_reframe(int width, int height, struct NocturneReframe *out);

// How many of the scene's 480 rows the screen shows: fewer when panning and
// scanning, all of them otherwise.
int nocturne_widescreen_shown_rows(int width, int height);

// The screen columns the scene's picture spans, left inclusive and right
// exclusive: the 4:3 column when pillarboxed, the whole width otherwise.
void nocturne_widescreen_picture(int width, int height, int *left, int *right);

// A point in scene space as the screen shows it. Above 480 lines only, where
// the scene space is 640x480.
void nocturne_widescreen_scene_to_screen(int width, int height, int scene_x, int scene_y,
                                         int *out_x, int *out_y);

#ifdef __cplusplus
}
#endif
