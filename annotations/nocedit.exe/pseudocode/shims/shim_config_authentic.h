#pragma once

// =============================================================================
// SHIM CONFIG — AUTHENTICITY TOGGLES
// =============================================================================
//
// Every NOCTURNE_AUTHENTIC_* flag in the build, whatever subsystem it touches.
// Each one answers the same question: does this build do what nocedit.exe did,
// or the dev-friendly thing? Set every flag here to 1 for maximum fidelity to
// the shipped binary.
//
// They are gathered by that question rather than by subsystem deliberately, so
// the fidelity of a build can be read and changed as one list. A feature's
// remaining knobs — the ones with no authentic answer, because the feature is
// an addition — live with that feature instead: see shim_config_netplay.h,
// shim_config_video.h, shim_config_media.h and shim_config_debug.h.
//
// Included from shim_config.h, which is what nocturne.h reaches.

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

// NOCTURNE_AUTHENTIC_RESOLUTION_STEP
//   The Graphics Options resolution selector steps DOWN through a chain of
//   game_pixy comparisons: 1024x768 -> 800x600 -> 640x480 -> 512x384 ->
//   320x240, then wraps to the largest mode the card's video memory allows.
//   That chain has no case for 1280x1024 (pixy 0x400), so from there left
//   falls through to the chain's default and snaps straight to 320x240 — and
//   since the wrap at 320x240 goes back to 1280x1024, the top of the list is a
//   two-entry loop with 1024x768 and 800x600 unreachable going left. The
//   step-UP chain is complete; only left is affected. Both shipped binaries do
//   this (nocedit.exe: the CMP EDI,0x300 / JNZ default at 0051151b).
//   1: shipped behaviour — left at 1280x1024 jumps to 320x240.
//   0: left at 1280x1024 steps to 1024x768, like every other entry.
//
//   Override with -DNOCTURNE_AUTHENTIC_RESOLUTION_STEP=1.
#ifndef NOCTURNE_AUTHENTIC_RESOLUTION_STEP
#define NOCTURNE_AUTHENTIC_RESOLUTION_STEP 0
#endif

// NOCTURNE_AUTHENTIC_HUD_SCALE
//   The in-game HUD is fixed-size 640x480 pixel art — the battery and health
//   bitmaps, the ammo icons, and every string, since CBitFont draws glyph
//   bitmaps and the scalable OS-font path only exists when msglist.txt is
//   present (it is not in the shipped POD). The engine scales the HUD DOWN
//   below 384 lines and does nothing above 480, so at 1024x768 and up it
//   shrinks into the corner.
//   1: shipped behaviour — HUD elements are always one screen pixel per art
//      pixel, however large the framebuffer is.
//   0: HUD bitmaps and text are blitted at an integer scale chosen from the
//      framebuffer height (1 at 480 and 600, 2 at 768 through 1080, ...), so
//      they keep the size relative to the screen that they had at 640x480.
//      Exact at scale 1, so 640x480 is unchanged.
//
//   Override with -DNOCTURNE_AUTHENTIC_HUD_SCALE=1.
#ifndef NOCTURNE_AUTHENTIC_HUD_SCALE
#define NOCTURNE_AUTHENTIC_HUD_SCALE 0
#endif

// NOCTURNE_AUTHENTIC_HUD_ICON_SPACE
//   The inventory's weapon/item icons are 3D geometry, and above 480 lines the
//   renderer runs in a 640x480 virtual space: CDemonCamera::init clamps the
//   camera framebuffer to 640x480, tridx7 draws into a hardcoded 640x480 hold
//   buffer (SYSTEM/RENDER.INI [Graphics] useHoldBuffer=1, read only when the
//   screen is taller than 480) and stretch-Blts it to the back buffer, while
//   buildTLVertex multiplies every submitted vertex by screenW/640 x
//   screenH/480 to match. CInventory::renderSelectedItems positions the icon
//   panel and the model viewport in NATIVE window pixels, so at 1280x1024 the
//   panel is submitted at x=1088..1279, doubled to 2176..2558, and lands off
//   the screen entirely. Fine at 640x480, where the two spaces coincide.
//   1: shipped behaviour — the weapon/item icons are invisible above 640x480.
//   0: the icons are positioned against the camera framebuffer, i.e. the same
//      virtual space the renderer expects. The stretch then scales them with
//      the screen, so they need no HUD scale of their own.
//
//   Override with -DNOCTURNE_AUTHENTIC_HUD_ICON_SPACE=1.
#ifndef NOCTURNE_AUTHENTIC_HUD_ICON_SPACE
#define NOCTURNE_AUTHENTIC_HUD_ICON_SPACE 0
#endif

// NOCTURNE_AUTHENTIC_ACTOR_DELETE
//   Nothing in the engine tells a holder that an actor is going away.
//   CDemonActor::dtor poisons validation_magic and swaps the vtable pointer
//   back to the base class *in place*, then frees the block — a design that
//   only works while the freed bytes stay readable, as they did under Watcom's
//   allocator: a stale pointer still found a valid vtable and dispatched
//   harmlessly to the base-class method. Under a real allocator (and certainly
//   under ASan) that same read is a use-after-free. Seen as CStranger::weapon
//   still pointing at a CCrossbow that the mission delete queue destroyed
//   earlier in the same frame, crashing in CStranger::renderOpaque.
//   1: shipped behaviour — deleting an actor leaves every reference to it
//      dangling and relies on the freed memory still being intact.
//   0: deleteActor first clears the references the heroes hold to that actor
//      (weapon in hand, both carry hands, the selected weapon/item), so the
//      pointer is gone before the memory is.
//
//   Override with -DNOCTURNE_AUTHENTIC_ACTOR_DELETE=1.
#ifndef NOCTURNE_AUTHENTIC_ACTOR_DELETE
#define NOCTURNE_AUTHENTIC_ACTOR_DELETE 0
#endif

// NOCTURNE_AUTHENTIC_NETPLAY
//   1: matches the shipped binary — netplay is unreachable from any menu.
//      Neither retail Nocturne nor this editor build ever exposed multiplayer
//      UI, so this is the "original behavior" mode.
//   0: dev-friendly mode. Ctrl+H on the main menu hosts a network game;
//      Ctrl+J joins one. Routes through the orphan CNetGame / trisock
//      infrastructure. Useful for exercising the unfinished netplay code.
//      This mode also patches the netplay bugs that mode 1 preserves:
//        - PACKET_PLAYER_ANNOUNCE made the host overwrite its own address
//          slot with the announcing client's, so it advertised itself as
//          0.0.0.0 and no client could ever match the server index.
//        - CDemonMission::createOneHero requires a CHeroPlaceholder whose
//          index equals the hero number, but every mission the game shipped
//          contains exactly one placeholder, always at index 0. Any session
//          with two or more players died on hero 1 before the mission
//          started. Extra heroes are no longer placed there at all - there is
//          no safe spot to choose that early, since createHeros runs before
//          loadSet - but are held out of the world until the host brings them
//          in from the pause menu. See net_respawn.h.
//        - Seven engine features assume a single hero and bail out in a
//          network game - two of them (CMimic::setup, CTVBat::process) by
//          quitting the process outright, which killed any mission that
//          contained either actor. They now resolve as follows:
//            CMimic (setup and  apes the local machine's own hero
//              process, which
//              carries a second
//              copy of the same
//              guard)
//            CTVBat::process     follows hero 0
//            '$' actor specifier resolves to hero 0 (both the event and the
//                                script parser)
//            killHero()          kills every hero
//            hasItem()           true if any hero holds the item
//            hasKeyMask()        true if any hero holds the key
//            removeKeys()        takes the key from every hero
//          Hero 0 rather than the local hero wherever the choice would
//          otherwise make two machines disagree about what a script did.
//        - A PACKET_PLAYER_ANNOUNCE arriving after the lobby had closed was
//          answered with a half-written refusal (the status byte the client
//          reads was never assigned) and then admitted anyway. The joiner
//          landed in a running session with sim_frame_index 0, which pinned
//          the sim-frame history's trim watermark at 0 until the host quit
//          with "allocSimFrame - sim history list full". Such a join is now
//          refused properly, with the status the client already knows how to
//          report ("Connection refused - already in the game").
//      Mode 0 also adds two things the shipped game never had:
//        - A host-only pause-menu item that respawns the other players
//          somewhere safe and on camera. See net_respawn.h.
//        - A lobby hero selector for guests, since hero_number was seeded once
//          from the ini and never written again, so two machines sharing an
//          ini both arrived as the same character. The lobby also names the
//          hero instead of printing its number. See net_hero.h.
//
//   Override with -DNOCTURNE_AUTHENTIC_NETPLAY=1 to revert to authentic
//   shipped behavior.
#ifndef NOCTURNE_AUTHENTIC_NETPLAY
#define NOCTURNE_AUTHENTIC_NETPLAY 0
#endif

// NOCTURNE_AUTHENTIC_RNG
//   1: matches the shipped binary — every random draw in the game is the
//      verbatim rand() the binary made, from whichever stream the original
//      author happened to reach for.
//   0: dev-friendly mode. Every rand() call site is routed through one of the
//      three doors in rng.h, which record at the call site whether the draw
//      reaches simulation state:
//        nocturne_rng_sim()      the result reaches simulation state, so every
//                                machine must draw the same number. In a network
//                                game this comes off the sim stream
//                                (g_RandomSeedValue, re-seeded every frame from
//                                the host's broadcast seed); outside one it is
//                                rand() unchanged.
//        nocturne_rng_fx()       cosmetic only — a texture flip, a corona
//                                flicker. Always rand(), free to differ.
//        nocturne_rng_offframe() the is_processing == 0 fallback inside the
//                                game's own RNG primitives. Always rand().
//      Modes are behaviour-identical outside a network game: every door is
//      rand() there, so single player keeps the shipped sequence exactly.
//
//   This is deliberately its own switch rather than part of
//   NOCTURNE_AUTHENTIC_NETPLAY. The partition is a determinism property, not a
//   netplay feature — replay and reproducible-repro debugging want the same
//   split — and keeping it separate means one toggle governs every draw site in
//   the game instead of entangling them with the netplay UI.
//
//   Override with -DNOCTURNE_AUTHENTIC_RNG=1 to revert to the shipped draws.
#ifndef NOCTURNE_AUTHENTIC_RNG
#define NOCTURNE_AUTHENTIC_RNG 0
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
//   The same thing happens to the network pause dialog, by a different route.
//   Its pick list is polled from inside the running game loop rather than
//   blocking in displayChoicesAndWaitForInput the way the single-player pause
//   menu does, so CGame::playerControls still runs, sees g_ModalDialogActive
//   and calls CGame::resetInputAndCenterCursor — which recentres the cursor —
//   on every frame the dialog is up. The dialog reads g_MouseX/g_MouseY, so
//   nothing in it can be clicked.
//   1: authentic — the scrollbar warps/clamps the cursor like nocedit.exe, and
//      the modal recentre runs every frame.
//   0: dev-friendly default — the scrollbar never warps the cursor; the thumb
//      still tracks the mouse (the scroll position is clamped internally), the
//      cursor just moves freely. The per-frame modal recentre is skipped, and
//      the cursor is recentred once when the dialog closes so mouse-look still
//      resumes from a known baseline. Mouse-look recentring during play is
//      unaffected.
//
//   Override with -DNOCTURNE_AUTHENTIC_UI_CURSOR_WARP=1.
#ifndef NOCTURNE_AUTHENTIC_UI_CURSOR_WARP
#define NOCTURNE_AUTHENTIC_UI_CURSOR_WARP 0
#endif
