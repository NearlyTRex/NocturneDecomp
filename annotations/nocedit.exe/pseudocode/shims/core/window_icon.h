#pragma once

// =============================================================================
// WINDOW ICON
// =============================================================================
//
// An addition, not a reconstruction: the Win32 build got its icon from the
// window class it registered, and we lost that along with the rest of user32.
//
// The default icon is a public-domain lunar photograph, committed as RGBA
// pixels in window_icon_moon.h. It is generated -- see the Regenerate line at
// the top of that file -- but the generated result is what lives in the
// repository, so an ordinary build runs nothing and a clean clone still gets
// an icon.
//
// The shipped game has an icon of its own, and it is also a moon: one 32x32
// 4bpp image in nocturne.exe's and nocedit.exe's PE resource directory. It
// cannot be committed alongside the other build inputs, since the game
// binaries stay out of the repository, so choosing it means extracting it at
// build time from whichever exe the developer happens to have:
//
//     cmake --preset <preset> -DNOCTURNE_ICON_FROM_EXE=ON
//
// With that on and no exe present, CMake warns and keeps the committed icon.
// If a header ever does come out empty -- NOCTURNE_ICON_WIDTH of 0 -- the call
// below does nothing and the window keeps the platform default. A missing icon
// never fails a build and never blocks a run.

#ifdef __cplusplus
extern "C" {
#endif

// Push the icon onto `window`. Safe with a null window, and safe to call on
// every window the shims create -- the surface is rebuilt per call and freed
// immediately, since SDL copies the pixels it needs.
void nocturne_apply_window_icon(struct SDL_Window *window);

#ifdef __cplusplus
}
#endif
