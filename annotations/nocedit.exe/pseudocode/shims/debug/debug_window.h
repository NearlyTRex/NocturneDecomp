#pragma once

// =============================================================================
// DEBUG WINDOW — the script and light debug views in a window of their own
// =============================================================================
//
// The shipped game draws both views into the game's own frame: the SCRIPT
// cheat, the typed "script" cheat and F5 turn on subtitle_system_enabled and
// screen_clear_enabled, Ctrl+W screen_clear_enabled alone, and each reinits
// the camera at 240 lines so CScript::renderEditor has the rows below it and
// CDemonSet::renderLightDebugView the columns beside it. That layout is 640x480's.
// At any other size only the 3D layer shrinks into the top-left corner, while
// the static backgrounds keep the whole screen.
//
// Here the camera keeps the screen, and the views go to a second, resizable
// window with OS decorations and the game's icon: the script on the left while
// subtitle_system_enabled is set, and the shadow map of every spot and dynamic
// light, in a grid, with the light counts below, while screen_clear_enabled
// is. Beside the script the lights take two columns, so its long lines fit.
// With the script, it opens wide enough for the script's widest line, within
// the screen; resized, the script pane takes what the lights leave. The window opens with the first view and closes with the last; closing
// it turns both off and lets a paused script run again.
//
// Both views are the shipped renderers, drawn through engine 2D's own
// mapFrameBuffer into a buffer of this window's size and depth, and copied to
// the window's surface. Nothing here touches the game window's GL context. The
// shadow maps are drawn only at 32 bits per pixel:
// CDemonLight::renderShadowMapDebugView writes 32-bit pixels whatever the depth.
//
// Machine-local: what this window shows reads simulation state and changes
// none, except closing it, which is the same as switching the views off.
//
// Gated at the call sites on NOCTURNE_AUTHENTIC_DEBUG_WINDOW.

#ifdef __cplusplus
extern "C" {
#endif

// From CGame::processFrame, once per rendered frame, where the shipped game
// drew the script view. Opens, draws or closes the window.
void nocturne_debug_window_frame(void);

// The SDL window ID of the debug window, or 0 when none is open. The user32
// shim's event pump keeps that window's mouse and window events from the game.
unsigned int nocturne_debug_window_id(void);

// The debug window's close button: both views off, the window gone.
void nocturne_debug_window_close(void);

#ifdef __cplusplus
}
#endif
