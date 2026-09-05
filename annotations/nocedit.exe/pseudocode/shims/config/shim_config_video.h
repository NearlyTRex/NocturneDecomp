#pragma once

// =============================================================================
// SHIM CONFIG — VIDEO AND WINDOWING
// =============================================================================
//
// How the window and its pixels are produced, where the choice has no authentic
// answer: who owns the framebuffer, the window-mode option, whether the menu's
// resolution selector applies immediately, and the window scale factor.
//
// The display flags that DO have an authentic answer are in
// shim_config_authentic.h: AUTHENTIC_D3D_OPTIONS, AUTHENTIC_RENDERER_DLL,
// AUTHENTIC_RESOLUTION_STEP, AUTHENTIC_HUD_SCALE, AUTHENTIC_HUD_ICON_SPACE,
// AUTHENTIC_CONSOLE and AUTHENTIC_UI_CURSOR_WARP.
//
// Included from shim_config.h, which is what nocturne.h reaches.

// NOCTURNE_GL_PRESENT
//   Who owns the window's pixels.
//   1: the shim layer creates an OpenGL context on the game window and presents
//      the 2D back buffer as a textured fullscreen quad (shims/gl_present.cpp).
//      Required for hooking a decompiled 3D renderer DLL up to real GL — its
//      output composites into the same default framebuffer. Compatibility
//      profile, because the DX6-era render states those DLLs drive map straight
//      onto fixed-function GL.
//   0: legacy path — no GL context; the back buffer is presented through an
//      SDL_Renderer streaming texture. 3D acceleration is unavailable, so the
//      software renderer is the only thing that draws.
//
//   Note this is an implementation choice, not an authenticity one: the
//   original ran on DirectDraw, which neither path reproduces literally.
//
//   Override with -DNOCTURNE_GL_PRESENT=0.
#ifndef NOCTURNE_GL_PRESENT
#define NOCTURNE_GL_PRESENT 1
#endif

// NOCTURNE_WINDOW_MODE_OPTION
//   An ADDITION, not a reconstruction — there is no "authentic" side. The
//   original is DirectDraw exclusive fullscreen only: it asks for
//   DDSCL_FULLSCREEN and has no concept of a window mode.
//   1: a "Window : Windowed/Fullscreen/Borderless" line on the Graphics Options
//      screen, applied immediately and persisted to the INI as
//      [Graphics] windowMode. The ddraw shim pushes the choice onto the SDL
//      window instead of the old hardcoded "always windowed" strip.
//   0: off — the shim forces windowed, as it did before this existed.
//
//   The extra menu line is carried in a local pointer array inside the keep,
//   because the engine's g_GraphicsMenuTextPointers/Buffers globals are exactly
//   9 entries and resizing them would be a generator change.
//
//   Override with -DNOCTURNE_WINDOW_MODE_OPTION=0.
#ifndef NOCTURNE_WINDOW_MODE_OPTION
#define NOCTURNE_WINDOW_MODE_OPTION 1
#endif

// NOCTURNE_MENU_APPLIES_RESOLUTION
//   Another addition. In both shipped binaries the Graphics Options resolution
//   selector only edits CGame::game_pixx/game_pixy; the sole thing that applies
//   them is CGame::setGameRes, called from runGameSession and the editor
//   screens — never from the menu. So picking a resolution appears to do
//   nothing until a mission starts. That is original behaviour, not a bug.
//   1: changing the resolution resizes the window straight away. The menu keeps
//      RENDERING at 640x480 (its layout is hardcoded for that — fixed drawText
//      coordinates; only the mouse-sensitivity slider reads g_WindowWidth) and
//      the presenter scales it to fit, so nothing is mispositioned. Missions
//      still get a real framebuffer at the selected resolution via setGameRes.
//      Also stops the selector offering resolutions above 640x480 while
//      hardware acceleration is off, since the menu clamps those back and the
//      choice would silently revert.
//   0: shipped behaviour — the selector changes nothing until a mission loads.
//
//   Override with -DNOCTURNE_MENU_APPLIES_RESOLUTION=0.
#ifndef NOCTURNE_MENU_APPLIES_RESOLUTION
#define NOCTURNE_MENU_APPLIES_RESOLUTION 1
#endif

// NOCTURNE_WINDOW_SCALE
//   Integer scale factor applied to the SDL window only. The game still
//   renders internally at its native resolution (640x480) and SDL stretches
//   the framebuffer texture to fill the larger window. Integer-scale mode is
//   enabled so the result is crisp pixel-doubling (no blurry filtering).
//
//   1 = native (640x480), 2 = 1280x960, 3 = 1920x1440, etc.
//   Override with -DNOCTURNE_WINDOW_SCALE=N from CMake.
#ifndef NOCTURNE_WINDOW_SCALE
#define NOCTURNE_WINDOW_SCALE 1
#endif
