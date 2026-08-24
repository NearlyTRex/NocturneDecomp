#pragma once

// =============================================================================
// SHIM CONFIG — build-time toggles for shim/keep behavior
// =============================================================================

// Numeric magnitude constants used by keep/shim code (kept separate from the
// behavior toggles below).
#include "shim_constants.h"

// NOCTURNE_AUTHENTIC_FORMAT_STRINGS
//   Controls how pointer values are printed through the NOCTURNE_FMT_PTR /
//   NOCTURNE_ARG_PTR tokens (see below). The original nocedit.exe printed
//   pointers with a "%08X" field — 8 zero-padded hex digits, a 32-bit value.
//   1: authentic — reproduce the original "%08X" field exactly. On the 32-bit
//      matching build this is byte-identical and lossless. On the 64-bit build
//      the argument is narrowed to its low 32 bits so it still matches "%08X"
//      (compiles clean, but the printed address is truncated — authentic-
//      looking, lossy).
//   0: dev-friendly — print pointers at their native width so the full address
//      is visible: still "%08X" on 32-bit, but "%016lX" on 64-bit. Not
//      byte-identical to the original strings on 64-bit.
//
//   Override with -DNOCTURNE_AUTHENTIC_FORMAT_STRINGS=0 for full-width 64-bit
//   pointer diagnostics.
#ifndef NOCTURNE_AUTHENTIC_FORMAT_STRINGS
#define NOCTURNE_AUTHENTIC_FORMAT_STRINGS 1
#endif

// NOCTURNE_FMT_PTR / NOCTURNE_ARG_PTR — build-selected pointer-hex format field
// and its matching argument, resolved together so they always agree.
//
// A "%08X" pointer field baked into a keep's format literal is a hard
// -Werror,-Wformat error at 64-bit (pointer is 8 bytes, "%08X" wants 4). Rather
// than edit the authentic string literal, split the pointer field out of it and
// concatenate this token; pass the pointer through NOCTURNE_ARG_PTR:
//
//   traceMemory("debugFree(" NOCTURNE_FMT_PTR ", %s, %d)",
//               NOCTURNE_ARG_PTR(ptr), filename, line_number);
//
// The authentic text on both sides of the token is preserved verbatim, so in
// authentic mode the 32-bit reconstruction is byte-exact ("debugFree(%08X, ...)").
#include <inttypes.h>
#if NOCTURNE_AUTHENTIC_FORMAT_STRINGS || !(defined(__SIZEOF_POINTER__) && __SIZEOF_POINTER__ == 8)
#define NOCTURNE_FMT_PTR "%08X"
#define NOCTURNE_ARG_PTR(p) ((unsigned int)(uintptr_t)(p))
#else
#define NOCTURNE_FMT_PTR "%016" PRIXPTR
#define NOCTURNE_ARG_PTR(p) ((uintptr_t)(p))
#endif

// NOCTURNE_AUTHENTIC_WINDOWS
//   1: game behaves like the original Windows binary. Main loop pauses while
//      the window is unfocused, the window auto-minimizes on deactivation,
//      thread priority drops to idle, etc. These are quirks of the original
//      DirectDraw engine that depend on Win32 + DirectDraw exclusive mode and
//      don't translate cleanly to SDL/Linux.
//   0: dev-friendly mode. Game keeps running while unfocused and the window
//      stays put. Easier to debug; keeps audio + sim ticking under inspection.
//
// Override with -DNOCTURNE_AUTHENTIC_WINDOWS=1 from CMake when you want to
// exercise the authentic behavior.
#ifndef NOCTURNE_AUTHENTIC_WINDOWS
#define NOCTURNE_AUTHENTIC_WINDOWS 0
#endif

// NOCTURNE_AUTHENTIC_D3D_OPTIONS
//   1: matches nocedit.exe as-shipped — hardware acceleration is permanently
//      off, the Graphics Options menu line shows "Acceleration disabled in
//      editor", and 3D-API cycling has no effect. Two redundant hardcoded
//      kills (in configureGraphicsOptions and on Ctrl+D entry) clobber
//      `g_UseDirect3D = 0` every frame.
//   0: dev-friendly mode. The Graphics Options menu lets the user pick a
//      3D renderer DLL (DirectX 5/6/7 / 3dfx) and `g_UseDirect3D` retains
//      the choice — i.e. the working behavior the retail build had.
//
//   Override with -DNOCTURNE_AUTHENTIC_D3D_OPTIONS=1 to revert to the
//   editor build's permanently-disabled state.
#ifndef NOCTURNE_AUTHENTIC_D3D_OPTIONS
#define NOCTURNE_AUTHENTIC_D3D_OPTIONS 0
#endif

// NOCTURNE_AUTHENTIC_RENDERER_DLL
//   The game loads its 3D renderer as a Win32 DLL — LoadLibraryA on the name in
//   g_RendererDllPath, then GetProcAddress for each "APIDLL*" entry point. We
//   own both shims, so a decompiled renderer can be resolved straight out of
//   the executable instead of a file on disk.
//   1: matches the shipped binary — LoadLibraryA always goes to dlopen, so the
//      renderer must exist as a real loadable module on disk, and the Graphics
//      Options "3D API" selector cycles the original hardcoded
//      trid3d → tridx6 → tridx7 chain regardless of what this build can load.
//   0: dev-friendly default. LoadLibraryA/GetProcAddress consult the built-in
//      module registry first (shims/builtin_dll.{h,cpp}) and fall back to
//      dlopen for anything not registered, so a decompiled renderer links in
//      without shipping a .so. The 3D-API selector cycles over exactly the
//      registered modules, so a build only ever offers renderers it can
//      actually run. Which those are is a table row in builtin_dll.cpp — no
//      call site names a DLL.
//
//   Override with -DNOCTURNE_AUTHENTIC_RENDERER_DLL=1.
#ifndef NOCTURNE_AUTHENTIC_RENDERER_DLL
#define NOCTURNE_AUTHENTIC_RENDERER_DLL 0
#endif

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

// Registry queries (nocturne_builtin_dll_available / _next) — declared here so
// decompiled TUs reach them through nocturne.h like the other shim toggles.
#include "builtin_dll.h"

// NOCTURNE_AUTHENTIC_VOICE
//   1: matches nocedit.exe as-shipped — subtitles render but no voice audio
//      plays. The streaming MP3 entry point (`loadStreamingSoundFile`) is
//      orphan in this build; the call site that would invoke it during
//      cutscenes is missing.
//   0: dev-friendly mode. Cutscene dialogue plays through the streaming MP3
//      path alongside the subtitles — i.e. the working behavior the retail
//      build (presumably) had.
//
//   Override with -DNOCTURNE_AUTHENTIC_VOICE=1 to revert to silent
//   cutscenes.
#ifndef NOCTURNE_AUTHENTIC_VOICE
#define NOCTURNE_AUTHENTIC_VOICE 0
#endif

// NOCTURNE_AUTHENTIC_FMV
//   Controls the opening full-motion video (winvideo.cpp's playMovie).
//   1: matches both shipped binaries — no movie ever plays. The call is there
//      and unconditional (initializeGameSystems does
//      playMovie("video", "opening.avi") with no guard), but it asks for
//      video\opening.avi while the shipped data puts the movies in AVI\, so
//      playMovie's own fopen existence check fails and it returns 0. The
//      failure is silent: the only user-visible error ("Unable to open .AVI!")
//      sits behind the MCI open, which that early return never reaches.
//      The rest of the module is dead too — openMovie, toggleMoviePlayback and
//      positionMovieWindow have no callers in either binary, and NOC1..NOC4.AVI
//      are never referenced at all.
//   0: dev-friendly default. playMovie runs for real, and the MCI shim
//      (shims/mci_video.cpp) decodes the AVI through libav and presents it on
//      the same path the engine's 2D back buffer uses, with audio. Note this
//      only reaches the movie if the file is actually where the game looks for
//      it — the hardcoded "video\" directory, not the shipped AVI\ one. This
//      toggle deliberately does not rewrite that path; staging the file is a
//      data question, not a code one.
//
//   Override with -DNOCTURNE_AUTHENTIC_FMV=1 to restore the shipped
//   never-plays behaviour even with the movie staged correctly.
#ifndef NOCTURNE_AUTHENTIC_FMV
#define NOCTURNE_AUTHENTIC_FMV 0
#endif

// NOCTURNE_ATTRACT_MOVIES
//   An ADDITION, not a reconstruction — unlike the NOCTURNE_AUTHENTIC_* toggles
//   above, there is no "authentic" side to this one. Neither shipped binary ever
//   played NOC1..NOC4.AVI; those files have no call site anywhere in
//   nocedit.exe or nocturne.exe.
//   1: once the opening movie has played, the main menu plays a random
//      NOC1..NOC4 whenever its splash music finishes, then restarts the music
//      (so it cycles). Arcade attract-mode behaviour.
//   0: off — the menu behaves exactly as shipped.
//
//   Session-only: nothing is persisted, so the opening still plays every launch
//   and attract movies only ever follow it within the same run. Requires the
//   movies to be where the game looks (the hardcoded "video\" directory) and
//   is inert when NOCTURNE_AUTHENTIC_FMV is 1, when opening.avi is missing, or
//   while sound is muted (no splash music means no trigger).
//
//   Override with -DNOCTURNE_ATTRACT_MOVIES=0.
#ifndef NOCTURNE_ATTRACT_MOVIES
#define NOCTURNE_ATTRACT_MOVIES 1
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

// Window mode (nocturne_window_mode_*) — declared here so decompiled TUs
// reach it through nocturne.h.
#include "window_mode.h"

// Attract-mode session state (nocturne_attract_*) — declared here so decompiled
// TUs reach it through nocturne.h, same as the registry queries below.
#include "attract.h"

// NOCTURNE_AUTHENTIC_NETPLAY
//   1: matches the shipped binary — netplay is unreachable from any menu.
//      Neither retail Nocturne nor this editor build ever exposed multiplayer
//      UI, so this is the "original behavior" mode.
//   0: dev-friendly mode. Ctrl+H on the main menu hosts a network game;
//      Ctrl+J joins one. Routes through the orphan CNetGame / trisock
//      infrastructure. Useful for exercising the unfinished netplay code.
//
//   Override with -DNOCTURNE_AUTHENTIC_NETPLAY=1 to revert to authentic
//   shipped behavior.
#ifndef NOCTURNE_AUTHENTIC_NETPLAY
#define NOCTURNE_AUTHENTIC_NETPLAY 0
#endif

// NOCTURNE_AUTHENTIC_CONSOLE
//   1: the on-screen debug console is the binary's original 40 cols ×
//      32 rows (280 × 352 px).
//   0: dev-friendly mode — 80 cols × 40 rows (560 × 442 px), the
//      largest size that fits inside a 640 × 480 window. (The buffer
//      could hold up to 50 rows but the bounding-box draw at row 50
//      writes past the framebuffer end.)
//
//   Override with -DNOCTURNE_AUTHENTIC_CONSOLE=1.
#ifndef NOCTURNE_AUTHENTIC_CONSOLE
#define NOCTURNE_AUTHENTIC_CONSOLE 0
#endif

// NOCTURNE_AUTHENTIC_DEV_TOOLS
//   Controls the editor's developer-tools surface: the "NON-RELEASE EDITOR
//   BUILD" / "Press CTRL+D to access the editor menu" banner shown on menu
//   screens, plus the Ctrl+D / Ctrl+L hotkeys that open the developer-tools
//   menu (showDeveloperToolsMenu).
//   1: show the banner and enable the Ctrl+D / Ctrl+L hotkeys — authentic
//      nocedit.exe editor behavior.
//   0: hide them; the build looks like a retail player (default).
//
//   Override with -DNOCTURNE_AUTHENTIC_DEV_TOOLS=1.
#ifndef NOCTURNE_AUTHENTIC_DEV_TOOLS
#define NOCTURNE_AUTHENTIC_DEV_TOOLS 1
#endif

// NOCTURNE_AUTHENTIC_BATTERY
//   Controls the flashlight/goggles battery in CInventory::updateInventory.
//   1: authentic — the battery discharges while the flashlight or goggles are
//      on (and recharges while both are off), exactly like nocedit.exe.
//   0: dev-friendly default — the battery never drains (the discharge is still
//      computed but discarded, so it can't empty). Recharge-while-off is
//      unaffected.
//
//   Override with -DNOCTURNE_AUTHENTIC_BATTERY=1.
#ifndef NOCTURNE_AUTHENTIC_BATTERY
#define NOCTURNE_AUTHENTIC_BATTERY 0
#endif

// NOCTURNE_AUTHENTIC_SAVE
//   Controls the on-disk save-game format written by CGame::saveGame.
//   1: authentic — matches the original retail nocturne.exe. The plain-text
//      save is written to a temp file (save\$$SAVE$$.TMP) and then
//      LZW-compressed into the real .noc with an "EFD" magic header, via the
//      CLZWCompress codec.
//   0: dev-friendly default — write the save uncompressed as plain text
//      directly to the .noc. Human-readable saves, easy to diff/inspect while
//      debugging.
//
//   loadGame reads either format transparently: it sniffs the leading 4 bytes
//   for the "EFD"/"LZW" magic and decompresses, otherwise parses plain text.
//   So a save written in one mode still loads in the other.
//
//   Override with -DNOCTURNE_AUTHENTIC_SAVE=1.
#ifndef NOCTURNE_AUTHENTIC_SAVE
#define NOCTURNE_AUTHENTIC_SAVE 1
#endif

// NOCTURNE_AUTHENTIC_UI_CURSOR_WARP
//   Controls whether the editor UI controls warp the OS cursor. The original
//   Windows build clamps the cursor to a CEdScrollBar during a drag and pins it
//   to the click point while a scroll/repeat button is held (via SetCursorPos).
//   Under DirectDraw exclusive mode on Windows this felt seamless; under SDL on
//   Linux SDL_WarpMouseInWindow physically yanks the visible cursor every frame
//   so it "jumps to a weird place and won't move until you release."
//   1: authentic — the scrollbar warps/clamps the cursor like nocedit.exe.
//   0: dev-friendly default — the scrollbar never warps the cursor; the thumb
//      still tracks the mouse (the scroll position is clamped internally), the
//      cursor just moves freely. Mouse-look cursor recentering is unaffected.
//
//   Override with -DNOCTURNE_AUTHENTIC_UI_CURSOR_WARP=1.
#ifndef NOCTURNE_AUTHENTIC_UI_CURSOR_WARP
#define NOCTURNE_AUTHENTIC_UI_CURSOR_WARP 0
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

// NOCTURNE_FPU_TRAP
//   1: compile in nocturne_fpu_trap_on(mask) / nocturne_fpu_trap_off() helpers
//      that arm SIGFPE on configurable x87/SSE exception bits. The first FP
//      op that raises one of the requested exceptions becomes a fault gdb can
//      catch — useful for localizing the source of a NaN, Inf, or other
//      numerically unstable computation that cascades through later math.
//
//      Mask bits (stable, see fpu_trap.h):
//        0x01 INVALID    — sqrt(neg), 0/0, Inf-Inf, NaN-arith
//        0x02 DIVBYZERO  — x/0 with x != 0 -> Inf
//        0x04 OVERFLOW   — result magnitude > max representable
//        0x08 UNDERFLOW  — result magnitude < min normal
//
//      Usage from gdb, after stopping in the relevant code path:
//        (gdb) call (int)nocturne_fpu_trap_on(1)    — arm INVALID only
//        (gdb) call (int)nocturne_fpu_trap_on(3)    — arm INVALID|DIVBYZERO
//        (gdb) call (int)nocturne_fpu_trap_off()    — disarm + clear sticky
//
//      The helpers do NOT auto-arm at startup. Menu/intro code paths emit
//      benign 0*Inf NaNs every frame (e.g. CMoon::render's getEulerAngles)
//      that would fire the trap immediately and drown out useful catches.
//      Drive the program to where you want, *then* arm.
//
//   0: helpers are no-op stubs (return 0). Symbols stay so gdb `call` doesn't
//      fail; no fenv.h dependency in the binary.
//
//   Linux/glibc only. Override with -DNOCTURNE_FPU_TRAP=0 to omit at compile
//   time.
#ifndef NOCTURNE_FPU_TRAP
#define NOCTURNE_FPU_TRAP 1
#endif

// NOCTURNE_DUMP_TOOLS
//   1: compile in C-callable dump helpers that snapshot pieces of engine
//      state to disk. Intended for use from gdb when you want to capture a
//      wide picture of what the renderer / scene / camera are doing without
//      paying the round-trip cost of many separate `print` commands.
//
//      Available helpers (see shims/dump.h for full docs):
//        nocturne_dump_screenshot(path)    — frame buffer color, PPM + sidecar
//        nocturne_dump_zbuffer(path)       — depth buffer, normalized PPM + sidecar
//        nocturne_dump_display_list(path)  — sorted_render_actors as text table
//
//      Each PPM dumper produces a sidecar `<path>.txt` with engine state,
//      derived statistics (histogram, bounding box, min/max depth), and any
//      relevant cross-references — so a single `call` captures most of what
//      you'd otherwise gather with a dozen `print` commands.
//
//      Usage from gdb at any breakpoint (or after ctrl-C):
//        (gdb) call (int)nocturne_dump_screenshot("/tmp/frame.ppm")
//        (gdb) call (int)nocturne_dump_zbuffer("/tmp/zbuf.ppm")
//        (gdb) call (int)nocturne_dump_display_list("/tmp/actors.txt")
//
//      Each function returns 0 on success, -1 on failure (file open error
//      or unsupported state).
//
//   0: helpers are no-op stubs returning -1. Symbols stay so `call` from
//      gdb still works.
//
//   Override with -DNOCTURNE_DUMP_TOOLS=0 to omit at compile time.
#ifndef NOCTURNE_DUMP_TOOLS
#define NOCTURNE_DUMP_TOOLS 1
#endif
