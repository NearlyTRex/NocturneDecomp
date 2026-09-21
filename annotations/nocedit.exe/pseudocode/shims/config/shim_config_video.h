#pragma once

// =============================================================================
// SHIM CONFIG — VIDEO AND WINDOWING
// =============================================================================
//
// How the window and its pixels are produced, where the choice has no authentic
// answer: who owns the framebuffer, the window-mode option, and the window scale
// factor.
//
// The display flags that DO have an authentic answer are in
// shim_config_authentic.h: AUTHENTIC_D3D_OPTIONS, AUTHENTIC_RENDERER_DLL,
// AUTHENTIC_RESOLUTION_LIST, AUTHENTIC_MENU_RESOLUTION, AUTHENTIC_HUD_SCALE,
// AUTHENTIC_HUD_ICON_SPACE, AUTHENTIC_CONSOLE and AUTHENTIC_UI_CURSOR_WARP.
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

// NOCTURNE_OS_FONT_OPTION
//   An ADDITION, with no authentic side to be on the wrong side of: the choice
//   exists in the shipped binary already, it simply has no way to be made.
//
//   The engine can draw text two ways. Normally it blits glyphs out of the
//   bitmap sheets (fnte_pfd.RAW and friends); when one global is non-zero,
//   CGame::initFonts instead builds CWinFont objects over the OS font named by
//   g_OSFontName, and CBitFont::drawText dispatches to those. Nothing in either
//   shipped binary ever writes that global — every reference is a read — so the
//   second path is unreachable and always has been. It is presumably what a
//   localisation needing glyphs outside the sheets would have used.
//   1: a "Text : Auto/Bitmap/System" line on the Graphics Options screen,
//      persisted to the INI as [Graphics] osFont and read back by initFonts at
//      startup.
//   0: off — nothing writes the global from here and the message file's answer
//      is the only one, which is what both shipped binaries do.
//
//   AUTO IS THE DEFAULT AND WRITES NOTHING. The global does have a writer:
//   CSupport::readMessageFile parses it out of msglist.txt, field two, with the
//   OS font's name in field three. That is how a localisation whose glyphs are
//   not in the bitmap sheets asks for system text. readMessageFile runs before
//   initFonts, so an unconditional override here would defeat exactly the
//   mechanism this switch is exposing. Bitmap and System are overrides; Auto
//   leaves the message file's answer alone.
//
//   The shipped POD carries no msglist.txt, so readMessageFile returns before
//   reading anything and Auto means bitmap sheets in practice.
//
//   APPLIED AT STARTUP, NOT ON SELECTION. The global is read once, by
//   initFonts, which is where the CWinFont objects are allocated; setting it
//   later changes a variable nothing re-reads. Switching live would mean
//   freeFonts() + initFonts() from inside the Options screen, which is drawing
//   through g_EditorFont and g_ThemeFont at the time, so the menu line says the
//   choice takes effect next launch.
//
//   The system path degrades safely: CBitFont::drawText checks CFont::drawText's
//   return and, on -1, clears win_font_enabled and redraws through the bitmap
//   sheet. A system font that cannot be opened therefore looks like today
//   rather than like missing text.
//
//   The extra menu line is carried in the same local pointer array the window
//   mode option uses, for the same reason: the engine's
//   g_GraphicsMenuTextPointers is exactly 9 entries.
//
//   Override with -DNOCTURNE_OS_FONT_OPTION=0.
#ifndef NOCTURNE_OS_FONT_OPTION
#define NOCTURNE_OS_FONT_OPTION 1
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
