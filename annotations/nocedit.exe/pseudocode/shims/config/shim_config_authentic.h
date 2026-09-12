#pragma once

// =============================================================================
// SHIM CONFIG — AUTHENTICITY TOGGLES
// =============================================================================
//
// Every NOCTURNE_AUTHENTIC_* flag in the build, whatever subsystem it touches.
// Each one answers the same question: does this build do what nocedit.exe did,
// or the thing we decided was better? 1 is always the shipped answer, so setting
// every flag here to 1 gives maximum fidelity to the binary.
//
// They are gathered by that question rather than by subsystem deliberately, so
// the fidelity of a build can be read and changed as one list. A feature's
// remaining knobs — the ones with no authentic answer, because the feature is an
// addition — live with that feature instead: see shim_config_netplay.h,
// shim_config_video.h, shim_config_media.h, shim_config_input.h and
// shim_config_debug.h.
//
// NOCTURNE_EDITOR_BUILD is the one flag here that is not an AUTHENTIC_ flag. Its
// axis is which binary rather than shipped-versus-improved, so neither of its
// values is less faithful than the other; it lives here because it is read the
// same way and belongs in the same list.
//
// Included from shim_config.h, which is what nocturne.h reaches.
//
// -----------------------------------------------------------------------------
// THE LIST
// -----------------------------------------------------------------------------
//
// Five kinds of deviation, which is what the "why" column names. A flag's kind
// is the honest reason its default is what it is:
//
//   host      the shipped behaviour depends on Win32 + DirectDraw and cannot be
//             reproduced on SDL/Linux at all
//   defect    the shipped binary is wrong, and the flag's doc comment carries
//             the instruction that proves it
//   choice    the shipped binary is not wrong; we prefer something else
//   addition  neither binary did this
//   binary    which of the two binaries this build is
//
// scripts/Python/check_authentic_flags.py checks this table against the
// #defines below, so a row that disagrees with its flag is a failing build
// rather than a stale comment.
//
// | Flag | Default | Why | What 0 does |
// | --- | --- | --- | --- |
// | `NOCTURNE_AUTHENTIC_FORMAT_STRINGS` | 1 | host | prints pointers at their native width on 64-bit |
// | `NOCTURNE_AUTHENTIC_WINDOWS` | 0 | host | keeps running unfocused; the window stays put |
// | `NOCTURNE_AUTHENTIC_UI_CURSOR_WARP` | 0 | host | no SetCursorPos warping; the cursor moves freely |
// | `NOCTURNE_AUTHENTIC_SOUND_DEVICE` | 0 | host | the Device line names the host audio API SDL opened |
// | `NOCTURNE_AUTHENTIC_RENDERER_DLL` | 0 | host | a compiled-in renderer loads without a file on disk |
// | `NOCTURNE_AUTHENTIC_MIRROR_CULL` | 0 | defect | actors appear in mirrors |
// | `NOCTURNE_AUTHENTIC_MIRROR_PROJECTION` | 0 | defect | accelerated geometry lines up with the backdrop |
// | `NOCTURNE_AUTHENTIC_IRIS_FADE` | 0 | defect | an opening iris no longer teleports mid-growth |
// | `NOCTURNE_AUTHENTIC_ENVMAP_OVERLAY` | 0 | defect | a reflection comes out whole rather than speckled |
// | `NOCTURNE_AUTHENTIC_MENU_LIGHTING` | 0 | defect | the menu's moon puts back the lighting it found |
// | `NOCTURNE_AUTHENTIC_CAMERA_SHAKE_TRACE` | 0 | defect | the shake trace prints its value and a newline |
// | `NOCTURNE_AUTHENTIC_HUD_ICON_SPACE` | 0 | defect | inventory icons stay on screen above 640x480 |
// | `NOCTURNE_AUTHENTIC_GOD_MODE_FALL` | 0 | defect | god mode survives a lethal-height fall |
// | `NOCTURNE_AUTHENTIC_STREAM_LENGTH` | 0 | defect | a streamed MP3 ends where the sample actually ends |
// | `NOCTURNE_AUTHENTIC_ACTOR_DELETE` | 0 | defect | references are cleared before the memory is freed |
// | `NOCTURNE_AUTHENTIC_HERO_WEAPON` | 0 | defect | each hero class starts with what it can actually use |
// | `NOCTURNE_AUTHENTIC_HERO_ACTIONS` | 0 | defect | the other eight classes can interact and escape a grab |
// | `NOCTURNE_AUTHENTIC_INPUT_REPEAT` | 0 | defect | a held button starts an action once instead of every frame |
// | `NOCTURNE_AUTHENTIC_CHAPTER_SELECT` | 0 | defect | START offers the chapter lists, pod.ini or no pod.ini |
// | `NOCTURNE_AUTHENTIC_FRIENDLY_FIRE` | 0 | defect | heroes cannot damage each other in a network game |
// | `NOCTURNE_AUTHENTIC_PICKUP_WIELDS` | 0 | choice | a pickup is never drawn without the player asking |
// | `NOCTURNE_AUTHENTIC_OPTIONS_RESUMES_GAME` | 0 | choice | leaving Options returns to the pause menu |
// | `NOCTURNE_AUTHENTIC_MENU_RESOLUTION` | 0 | choice | a picked resolution applies straight away |
// | `NOCTURNE_AUTHENTIC_SAVE` | 1 | choice | saves are written as readable plain text |
// | `NOCTURNE_AUTHENTIC_AUTOMAP` | 0 | addition | a bindable Doom-style map that fills in as you explore |
// | `NOCTURNE_AUTHENTIC_GAMEPAD` | 0 | addition | SDL's game-controller layer instead of joyGetPos |
// | `NOCTURNE_AUTHENTIC_WINDOW_MESSAGES` | 0 | addition | the window proc sees a mouse wheel |
// | `NOCTURNE_AUTHENTIC_CHEAT_MENU` | 0 | addition | a CHEATS entry on Options, and WARPS on pause |
// | `NOCTURNE_AUTHENTIC_RESOLUTION_LIST` | 0 | addition | one ordered table drives label and stepping |
// | `NOCTURNE_AUTHENTIC_HUD_SCALE` | 0 | addition | the HUD scales with the framebuffer |
// | `NOCTURNE_AUTHENTIC_CONSOLE` | 0 | addition | the console fills the window and keeps scrollback |
// | `NOCTURNE_AUTHENTIC_FMV` | 0 | addition | the opening movie actually plays |
// | `NOCTURNE_AUTHENTIC_ATTRACT_MOVIES` | 0 | addition | the menu cycles NOC1..NOC4 after its music |
// | `NOCTURNE_AUTHENTIC_ENVMAP_SHADING` | 0 | addition | reflections are shaded per pixel, not per facet |
// | `NOCTURNE_AUTHENTIC_NETPLAY` | 0 | addition | netplay is reachable, with its fixes |
// | `NOCTURNE_AUTHENTIC_NET_CONFIG` | 0 | addition | network parameters come from system/netplay.ini |
// | `NOCTURNE_AUTHENTIC_RNG` | 0 | addition | every draw goes through the sim/cosmetic funnel |
// | `NOCTURNE_EDITOR_BUILD` | 0 | binary | (default) the build presents as retail nocturne.exe |
// | `NOCTURNE_AUTHENTIC_D3D_OPTIONS` | 0 | binary | hardware acceleration can be turned on |

// =============================================================================
// A. THE HOST IS NOT WIN32 + DIRECTDRAW
// =============================================================================
//
// The shipped behaviour depends on the platform underneath it and cannot be
// reproduced here at all. 0 is not an improvement on the original so much as
// the nearest thing this machine can do.

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

// NOCTURNE_AUTHENTIC_SOUND_DEVICE
//   What the Sound Options "Device : " line calls the API behind the device.
//   The device names themselves are enumerated and are correct either way; this
//   is only the prefix the game sprintfs around them.
//   1: matches the shipped binary — "DirectSound: <device>", which was true on
//      Windows and is not true here. Nothing in this build reaches DirectSound;
//      the dsound shim mixes into an SDL audio device like everything else.
//   0: dev-friendly default. The prefix is the host audio API SDL actually
//      opened ("PulseAudio: <device>", "PipeWire: <device>", ...), from
//      nocturne_audio_backend_name(). Same shape as the shipped label, with
//      content that is true of the machine it is running on.
//
//   The sibling waveOut entry is untouched by this and keeps its "WavOutWrite: "
//   prefix, which comes from the localized string table rather than from code.
//
//   Override with -DNOCTURNE_AUTHENTIC_SOUND_DEVICE=1.
#ifndef NOCTURNE_AUTHENTIC_SOUND_DEVICE
#define NOCTURNE_AUTHENTIC_SOUND_DEVICE 0
#endif

// NOCTURNE_AUTHENTIC_RENDERER_DLL
//   Whether the 3D renderer has to be a file on disk. The game loads it as a
//   Win32 DLL — LoadLibraryA on the name in g_RendererDllPath, then
//   GetProcAddress for each "APIDLL*" entry point — and we own both of those
//   shims, so a renderer compiled into this executable can be resolved without
//   one.
//
//   That matters because the renderer this build actually uses is its own:
//   trigl, in shims/renderer/, which is the single row in the registry's table
//   (shims/renderer/builtin_dll.cpp). The commented-out rows beside it name the
//   original chain — tridx6, trid3d, tri3dfx — and are what a decompiled DX-era
//   renderer would be registered as.
//
//   It also matters for how a load is judged. The engine resolves 60 APIDLL
//   entry points, and the DX7 DLL as shipped exports 37, so "did every symbol
//   resolve" is not a usable test of whether a renderer loaded — see
//   NOCTURNE_AUTHENTIC_D3D_OPTIONS, which gates the site that makes that call.
//
//   1: matches the shipped binary — LoadLibraryA always goes to dlopen, so the
//      renderer must exist as a real loadable module on disk, and the Graphics
//      Options "3D API" selector cycles the original hardcoded
//      trid3d → tridx6 → tridx7 chain regardless of what this build can load.
//   0: LoadLibraryA/GetProcAddress consult the built-in module registry first
//      and fall back to dlopen for anything not registered, so a compiled-in
//      renderer links without shipping a .so. The 3D-API selector cycles over
//      exactly the registered modules, so a build only ever offers renderers it
//      can actually run. Which those are is a table row — no call site names a
//      DLL.
//
//   Override with -DNOCTURNE_AUTHENTIC_RENDERER_DLL=1.
#ifndef NOCTURNE_AUTHENTIC_RENDERER_DLL
#define NOCTURNE_AUTHENTIC_RENDERER_DLL 0
#endif

// =============================================================================
// B. THE SHIPPED BINARY IS WRONG
// =============================================================================
//
// Each of these carries the instruction that proves it. Where a flag says the
// original did something absurd, the address is in the doc comment and can be
// rechecked against the .asm rather than taken on trust.

// NOCTURNE_AUTHENTIC_MIRROR_CULL
//   Which camera an actor's bounding box is tested against, and so whether
//   actors appear in mirrors. CBoundingBox3D::isVisibleWithCamera projects the
//   box's 8 corners with the current camera, un-projects them back to world
//   space through g_InverseMatrix, and hands those world corners to the virtual
//   CDemonCamera::testVisibility, which installs g_BackgroundSavedCameraState
//   before re-projecting and rasterising the 6 box faces. That swap is
//   load-bearing on every actor — the background camera, not the current one,
//   is what the box test is meant to run against — so it is emphatically not a
//   no-op to remove in general. During a mirror pass, though, the renderer is
//   holding the mirrored camera that setupMirrorReflection installed, and the
//   swap throws it away and tests the reflection's virtual position — behind
//   the mirror plane, inside the wall — against the main scene camera. It
//   fails, and CCharacter::renderOpaque culls the model.
//   1: matches nocedit.exe as-shipped — the swap stands, so a mirror reflects
//      the room and a character's corona but never the character's model.
//      Static geometry is unaffected either way: it reflects through CMirror's
//      own polygon clipper and never reaches this gate.
//   0: dev-friendly default, and what retail nocturne.exe does. Retail carries
//      no CDemonCamera::testVisibility at all — it inlines the same face
//      rasterisation into isVisibleWithCamera (0x41d050, 1023 B against the
//      editor's 447 B) with no camera save/swap/restore, testing against
//      whatever camera is current. Reproduced here only while a mirror pass is
//      active (CDemonSet::active_mirror, set by setupMirrorRendering and
//      cleared by restoreCameraAfterMirror — the two only writers), so the
//      background-camera test every other actor depends on is untouched.
//      Installing the state just read back is a no-op:
//      getCameraAndViewportState and setupCameraAndViewport are exact inverses
//      over the same 39 globals, so this leaves the mirror camera in place and
//      the reflected box is tested where it is actually being drawn.
//
//   Override with -DNOCTURNE_AUTHENTIC_MIRROR_CULL=1 for reflection-less
//   mirrors.
#ifndef NOCTURNE_AUTHENTIC_MIRROR_CULL
#define NOCTURNE_AUTHENTIC_MIRROR_CULL 0
#endif

// NOCTURNE_AUTHENTIC_MIRROR_PROJECTION
//   Whether accelerated static geometry is drawn through the same projection as
//   the pre-rendered backdrop it is composited over. CDemonSet::setCameraView
//   builds a camera angle by rendering the room's geometry once into the
//   background buffer, loading the backdrop art over it, and then — only when an
//   external renderer is active — rendering that geometry a second time for the
//   accelerated pipeline. The viewport stack straddles the two passes, and
//   pushViewport resets g_ProjectionScale to 0x10000 while leaving
//   g_TransformMatrix alone (the stack carries the camera scalars, not the
//   derived matrices), so between the push and the next bake the global and the
//   matrix disagree by design. Pass 1's mirror loop then bakes the matrix from
//   that transient value — setupMirrorRendering samples it through
//   calculateProjectionFactor, restoreCameraAfterMirror installs it — and
//   popViewport restores the real scale without re-baking. Pass 2 inherits the
//   matrix built for the default field of view.
//   1: matches nocedit.exe as-shipped, and retail nocturne.exe, which carries
//      the identical second pass (0x5088f0) and the identical
//      pushViewport reset (0x4ce8e1, MOV ECX,0x10000). In a mirror room, at any
//      camera angle where buildMirrorList found a visible mirror, the
//      accelerated geometry is drawn at the default field of view while the
//      backdrop was drawn at the camera's. Measured as a uniform 4/3 on
//      g_TransformMatrix columns 0 and 1 with column 2 byte-identical: doors and
//      walls sit away from the backdrop toward the left and right of the screen,
//      worsening with distance from centre, and never self-correct because
//      setCameraView runs once per camera angle. Collision is unaffected.
//   0: dev-friendly default. Re-establishes the scene camera after
//      endBackgroundScene, before the accelerated pass. popViewport has by then
//      restored g_ProjectionScale, the clip window, the camera origin and the
//      rotation, so the only stale state left is the matrix pair, and one bake
//      from the restored rotation rebuilds both. Software rendering is untouched
//      — it issues no second pass, and its own copy of the transient converges
//      after the first frames.
//
//   Override with -DNOCTURNE_AUTHENTIC_MIRROR_PROJECTION=1.
#ifndef NOCTURNE_AUTHENTIC_MIRROR_PROJECTION
#define NOCTURNE_AUTHENTIC_MIRROR_PROJECTION 0
#endif

// NOCTURNE_AUTHENTIC_IRIS_FADE
//   Whether an opening iris transition can teleport part-way through. The circle
//   that widens as a room loads is centred on the script's focus actor:
//   CGame::beginFadeIn seeds the centre to the middle of the window and calls
//   calculateIrisFadeCenter, and CGame::renderIrisFade calls it again on every
//   frame the iris is open (0x4e0add). That helper only writes the centre when
//   CDemonCamera::worldToScreenWithFrustumCull reports the actor on screen, so
//   while he is still outside the view the centre keeps the window-middle
//   fallback — and snaps onto him the moment he walks in.
//   1: matches nocedit.exe as-shipped. In any mission where the hero enters the
//      shot after the load, the opening circle jumps to him mid-growth and reads
//      as the transition starting over. Measured on the reproducing mission: the
//      centre moved from (320,240) to (451,326) during a single fade.
//   0: dev-friendly default. The opening iris (type 2) keeps the centre chosen
//      when the fade began; the closing iris (type 3) still re-centres every
//      frame, which is what makes it converge on the hero, and by then he is on
//      screen so there is nothing to snap to.
//
//   Override with -DNOCTURNE_AUTHENTIC_IRIS_FADE=1.
#ifndef NOCTURNE_AUTHENTIC_IRIS_FADE
#define NOCTURNE_AUTHENTIC_IRIS_FADE 0
#endif

// NOCTURNE_AUTHENTIC_ENVMAP_OVERLAY
//   Whether a reflection comes out speckled.
//
//   The game reflects an environment map onto a surface that already carries its
//   own texture by drawing that surface twice: the texture first, the map blended
//   over it, both at the same depth. applyRenderState gives such a draw ZENABLE 1,
//   ZWRITEENABLE 1 and ZFUNC LESSEQUAL, which is meant to let the second pass win
//   the tie — and does, only while both passes interpolate the same depth. The
//   overlay covers a different mesh of the one surface, so they do not: the winner
//   alternates per pixel and the overlay comes out hatched. That is the black
//   speckle on Svetlana's blades.
//
//   One symptom, but the two renderers need different answers, which is why this
//   is one flag over two mechanisms:
//
//     accelerated  a blended draw that also tests depth is biased one unit toward
//                  the viewer. That settles the tie against the surface underneath
//                  and changes nothing about how the pass sorts against geometry
//                  genuinely in front or behind. Measured: the map covers the
//                  blades except for hatched patches, the texture beneath comes
//                  through exactly there, and removing the comparison fills every
//                  one (coverage +8.9%, hatching gone). research/16 has the
//                  captures.
//     software     the overlay is not drawn at all. There is no equivalent bias:
//                  its depth comes from the vertices of the surface underneath,
//                  which the overlay shares, so there is no per-pass depth to
//                  offset without reworking how it fills a span. A reflection
//                  that is absent is a surface lit as though nothing reflects in
//                  it; a reflection that is half there is a surface with dirt on
//                  it. Between two wrong pictures this takes the quieter one, and
//                  only where the renderer cannot do better.
//
//   1: as shipped, speckle included. The renderer reproduces the original's
//      flag-to-state table exactly, so this is also what retail draws.
//   0: the reflection comes out whole under acceleration, and is skipped in
//      software.
//
//   Override with -DNOCTURNE_AUTHENTIC_ENVMAP_OVERLAY=1. The accelerated half is
//   additionally settable at runtime through nocturne_trigl_overlay_bias /
//   NOCTURNE_TRIGL_OVERLAY_BIAS, so both can be seen in one run against one held
//   frame.
#ifndef NOCTURNE_AUTHENTIC_ENVMAP_OVERLAY
#define NOCTURNE_AUTHENTIC_ENVMAP_OVERLAY 0
#endif

// NOCTURNE_AUTHENTIC_MENU_LIGHTING
//   Whether the menu's moon leaves its lighting behind in the mission.
//
//   CMoon::render lights the moon and its bats by writing the set's own
//   light_direction, ambient_base_quick, rendering_mode and flat_color, and
//   restores only rendering_mode. The mission's values come from
//   CLevelLoader::update, which runs from the load paths — CDemonSet::load,
//   initScene, prepareAllActors, startMission — and never per frame. So once
//   the Options screen has drawn a single moon frame, the set carries
//   ambient_base_quick 0x2000 and light_direction (-0x4844, -0x4844, 0x4844)
//   for the rest of the mission.
//
//   Static geometry is lit into its lightmap at load and does not show it;
//   anything lit as it is drawn does.
//
//   1: the menu's lighting stays, as shipped.
//   0: the moon puts back what it found, so the menu cannot change how the
//      mission behind it is lit.
//
//   Override with -DNOCTURNE_AUTHENTIC_MENU_LIGHTING=1.
#ifndef NOCTURNE_AUTHENTIC_MENU_LIGHTING
#define NOCTURNE_AUTHENTIC_MENU_LIGHTING 0
#endif

// NOCTURNE_AUTHENTIC_CAMERA_SHAKE_TRACE
//   CDemonCamera::beginScene runs the camera-shake ADSR state machine once per
//   rendered scene and traces the phase to the console on every one of them.
//   The shipped call passes the label and nothing else — the asm pushes one
//   string and g_CConsolePtr, no third argument — so it emits "Attack : ",
//   "Sustain : " or "Decay : " with no value after the colon and no newline,
//   and a shake that decays over a second writes "Decay : Decay : Decay : ..."
//   across one console line. The value the colon was introducing is the current
//   shake intensity, which the statement after the call feeds into
//   g_CameraShakeAccumulator; the developers evidently never finished the line.
//   1: authentic — the bare labels, run together, exactly as shipped.
//   0: the trace is completed rather than removed: same three labels, then the
//      intensity (16.16 converted to the float it stands for) and a newline.
//
//   This is on-screen console output and, with [Debug] logConsoleFlag set, goes
//   to the console log as well — CConsole::printf appends there whenever
//   file_logging_enabled is set, so the authentic form fills the log too.
//
//   Override with -DNOCTURNE_AUTHENTIC_CAMERA_SHAKE_TRACE=1.
#ifndef NOCTURNE_AUTHENTIC_CAMERA_SHAKE_TRACE
#define NOCTURNE_AUTHENTIC_CAMERA_SHAKE_TRACE 0
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

// NOCTURNE_AUTHENTIC_GOD_MODE_FALL
//   Whether a lethal-height fall kills the hero while god mode is on.
//
//   CStranger::processFrame's landing handler decides fatality from fall speed
//   *before* it deals the damage: under 20 units/s is a soft landing, above
//   that costs (speed - 20) * 5, and past 100 it latches "this landing was
//   fatal" and sets the damage to 9999. It then calls processDamage and takes
//   the death branch on `hit_points <= 0 || latch` (asm: the latch is zeroed at
//   005bda98, set at 005bdad5, and read back with CMP [ESP+0x27c],0x0 at
//   005bdb0e). God mode zeroes the damage inside processDamage, so hit_points
//   never moves — but the latch still stands, the death animation plays, and
//   CCharacter::getDeathState reports DEAD because it reads the *animation
//   state name* rather than health. So the hero dies at 100 hit points.
//   1: authentic — that is what both shipped binaries do. God mode makes you
//      immune to every enemy in the game and not to a staircase.
//   0: dev-friendly default — if processDamage zeroed the damage, the landing
//      was prevented rather than survived, so the latch is cleared with it and
//      the hero walks away.
//
//   This keys off the damage actually being zeroed rather than reading
//   god_mode_enabled, so it equally covers the script-driven allow_damage_flag,
//   which suppresses damage the same way and hits the same absurdity: a
//   cutscene that turns damage off cannot currently stop a scripted fall from
//   killing the player.
//
//   Override with -DNOCTURNE_AUTHENTIC_GOD_MODE_FALL=1.
#ifndef NOCTURNE_AUTHENTIC_GOD_MODE_FALL
#define NOCTURNE_AUTHENTIC_GOD_MODE_FALL 0
#endif

// NOCTURNE_AUTHENTIC_STREAM_LENGTH
//   Whether a streamed sample's end marker is corrected once its real length is
//   known. Only MP3s are streamed — a WAV is loaded whole, so its length is
//   exact from the start and none of this is reachable for one.
//
//   An MP3's length is an estimate until the decoder runs short:
//   CSfxSample::pollStream asks for a batch, gets fewer frames back, and that is
//   how the end is discovered. It then corrects the count —
//
//     MOV EAX,[EBX + 0x164]     ; stream_read_position
//     ADD EAX,EDI               ; + frames decoded
//     MOV [EBX + 0x110],EAX     ; sample_info.sample_count       005a6ba3
//
//   — and stops there. The function contains no store to 0x128 at all, so
//   loop_endpoints[0] keeps the estimate it was given at load.
//
//   That matters because the count is not what ends a voice. CSfxSlot::mix takes
//   loop_endpoints[loop_marker_index], subtracts the trigger time and divides by
//   the resample delta to decide the last frame it will mix. So the two disagree
//   from the moment the correction lands, and the voice is cut off early or run
//   past its end depending on which way the estimate was wrong.
//
//   1: shipped behaviour — the count is corrected, the end marker is not.
//   0: the end marker is corrected with it, so the mixer ends the voice where
//      the sample actually ends.
//
//   Override with -DNOCTURNE_AUTHENTIC_STREAM_LENGTH=1.
#ifndef NOCTURNE_AUTHENTIC_STREAM_LENGTH
#define NOCTURNE_AUTHENTIC_STREAM_LENGTH 0
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
//   The sound mixer holds them too, and reads them from its own thread: a
//   positional sound keeps a pointer to the emitter's position rather than a
//   copy of it, so deleting a light gun in mid-charge left the audio thread
//   re-reading &actor->location.position every mix.
//   1: shipped behaviour — deleting an actor leaves every reference to it
//      dangling and relies on the freed memory still being intact.
//   0: deleteActor first clears the references the heroes hold to that actor
//      (weapon in hand, both carry hands, the selected weapon/item) and unbinds
//      any sfx slot that tracks it, so the pointer is gone before the memory is.
//      The sound is not cut short: the slot keeps the last position it sampled
//      and finishes there, which is what the original produced by reading the
//      freed bytes. See shims/game/actor_delete.h.
//
//   Override with -DNOCTURNE_AUTHENTIC_ACTOR_DELETE=1.
#ifndef NOCTURNE_AUTHENTIC_ACTOR_DELETE
#define NOCTURNE_AUTHENTIC_ACTOR_DELETE 0
#endif

// NOCTURNE_AUTHENTIC_HERO_WEAPON
//   CHero::ctor ends with a direct (not virtual — it is a constructor) call to
//   CHero::createDefaultWeapon, so every hero class is built holding a CGun
//   named "Your_weapon" with a hundred rounds. Only CScat corrects it, from its
//   own constructor. For the rest the pistol is wrong: Svetlana, IcePick and
//   Haystack attack from melee motion states and never read
//   inventory.selected_weapon at all, and Colonel and Moloch have no attack
//   whatsoever, so the weapon slot names a weapon none of them can fire. The
//   shipped game never showed it because the options screen pinned the player
//   to the Stranger, for whom a CGun is right.
//   1: shipped behaviour — every hero starts with the pistol.
//   0: CDemonMission::createOneHero gives each newly built player hero what its
//      class actually attacks with, or nothing when it attacks bare-handed.
//      Inventory contents only; no fire path and no damage changes. NPCs of the
//      same classes are untouched, and a hero carried over from a previous
//      mission keeps the inventory it earned. See hero_weapon.h for the models
//      chosen, where the slot's text comes from, and why this is not done from
//      the constructors. Also covers how a weapon with no ammunition is
//      presented: CInventory::renderAllItems suppresses the HUD ammo readout
//      for the two such weapons the shipped game could reach (a CLightGun by
//      class, a CMelee by category 3) but not for CBaronWeapon, which is
//      neither - so Scat's summon printed the 20 rounds of type 0 that
//      CWeapon::ctor left on it and that nothing reads or decrements.
//      In a network game Scat also gains a pistol as a second weapon, with the
//      Baron keeping the starting selection. Its reserve is restored after each
//      shot: collecting ammunition runs through the pickup machinery, which is
//      CStranger's alone, so a finite magazine would be spent permanently the
//      first time it emptied.
//
//   Override with -DNOCTURNE_AUTHENTIC_HERO_WEAPON=1.
#ifndef NOCTURNE_AUTHENTIC_HERO_WEAPON
#define NOCTURNE_AUTHENTIC_HERO_WEAPON 0
#endif

// NOCTURNE_AUTHENTIC_HERO_ACTIONS
//   What the fire button does for the eight playable classes that are not the
//   Stranger, and whether any of them can break a grab.
//
//   All three parts below have one cause and one excuse. The shipped options
//   screen pinned the player to the Stranger, so no other class's fire path was
//   ever exercised, and each was left in a different unfinished state. They are
//   one flag because they are one question — is a class other than the Stranger
//   actually playable — and because a build that wants any of them wants all of
//   them.
//
//     interaction   Six of the nine classes reach the CHero interaction set from
//                   fire: tryInteract, a door, a conversation, a lever. CScat and
//                   CMoloch reach none of it — CScat::process goes from the button
//                   straight to the weapon, CMoloch::process reads fire only to
//                   struggle out of a grab. In a mission built around levers and
//                   locked doors that is a hero who cannot finish the level. None
//                   of it needs animation: CHero::tryOpenDoor calls
//                   CDoor::onOpened and CHero::executeLeverPull calls
//                   CLever::activate, which is why the other five work without
//                   the opendoor/pulllever motions only STRANGER.SKL carries.
//     sheathed fire With the weapon put away the melee heroes treat fire as the
//                   action button, and when nothing is found they do not stop:
//                   the binary jumps past the guard that would have suppressed
//                   the attack and swings anyway. In CSvetlana::process that is
//                   the JMP at 005d90cc landing on 005d9015, one instruction past
//                   the TEST/JZ at 005d9011 every successful interaction branches
//                   to; CIcePick and CHaystack are assembled the same way. It is
//                   deliberate in the original, not a decompilation artifact.
//     grab escape   Eight classes read grabbed_by only to face the grabber, call
//                   its attractActorToward and play a struggle motion; not one
//                   calls releaseFromGrab, so the grab ends when the grabber says
//                   so. Only CStranger's own grab_timer releases him, after 1.5
//                   seconds. Not survivable: CSentinel::attractActorToward moves
//                   the victim with setPositionAndOrientation, a teleport with no
//                   collision test, so a sentinel that never reaches its release
//                   event drags the hero through walls and off the map while
//                   mashing fire does nothing. The other two are harmless —
//                   CImp's moves nobody, CCharacter's pulls horizontally and caps
//                   the step at delta_time * 5 — but CSentinel's snaps the victim
//                   onto the midpoint of its claw bones on all three axes,
//                   uncapped.
//
//   1: shipped behaviour — Scat and Moloch can interact with nothing, sheathed
//      fire falls through to an attack, and only the Stranger can break a grab
//      while the sentinel's carry ignores the world.
//   0: Scat and Moloch reach the same interaction set the other melee heroes
//      use, through the shared nocturne_hero_interact; sheathed fire is only the
//      action button, and the attack needs the weapon drawn; a hero of any class
//      breaks out on the Stranger's own 1.5 second timer through the game's own
//      CHero::releaseFromGrab, and the sentinel reaches the same claw point
//      through CCharacter::moveAndCollide, so the carry stops at geometry and
//      keeps area_id right.
//
//      Not included: object pickup, item use and box pushing, which sit on
//      carry-hand state these classes do not maintain; and scripted grabs, which
//      still cannot be escaped. The grab escape is given to every hero rather
//      than only the player's, because control_type is per-machine and gating on
//      it breaks lockstep. See hero_interact.h and hero_grab.h.
//
//   Override with -DNOCTURNE_AUTHENTIC_HERO_ACTIONS=1.
#ifndef NOCTURNE_AUTHENTIC_HERO_ACTIONS
#define NOCTURNE_AUTHENTIC_HERO_ACTIONS 0
#endif

// NOCTURNE_AUTHENTIC_INPUT_REPEAT
//   Two places where holding a button restarts an action every frame instead of
//   starting it once. Both are the Stranger's own button handlers, so unlike
//   NOCTURNE_AUTHENTIC_HERO_ACTIONS above these are reached in ordinary play,
//   and both get worse the higher the frame rate goes: the repeat rate IS the
//   frame rate, so what was rough on period hardware is a buzz at 60fps and
//   above.
//
//   PUSHING A BOX. CStranger::handleActionButton dispatches the action button
//   through a chain of attempts, and every branch that succeeds ends by clearing
//   player_input.action_state.fire — consuming the press so a held button does
//   not re-enter. The push-box branch is the one that does not:
//
//       if (tryPushNearbyBox(hero)) { setDesiredState(mc, 6, 1); return; }
//
//   Confirmed missing in the binary, not dropped by the decompiler: the asm at
//   LAB_005c5db0 has no `MOV [EBX + 0xbe38], 0` where its siblings do.
//
//   It is self-sustaining rather than merely noisy. setDesiredState calls
//   findAndStartTransition unconditionally when force_immediate is set, so
//   re-entering with the same state index restarts the transition and the push
//   state's blend weight never climbs off zero -- and CStranger::processFrame
//   ends the push on exactly that test:
//
//       if (getStateBlendWeight(mc, 6) <= 0.0) stopPushingBox(hero);
//
//   stopPushingBox calls killSfx and clears pushed_object, so the next frame
//   acquires the box again and replays its push sound from the top. The visible
//   result is a shove animation and a scraping sound both restarting every
//   frame for as long as the button is held, and a box that never moves.
//
//   FIRING AN EMPTY WEAPON. Holding fire with no ammunition retriggers the
//   dry-fire click every frame. CWeapon::fire is the single ammunition test for
//   all six weapon classes and returns 0 when empty; each subclass then plays
//   its own click ("45-dry-!.wav", "shotgun-noammo.wav") and returns. Nothing
//   on that path advances any timer, and the gates in
//   CStranger::handleFireButton -- kickback, recoil, isReadyToFire -- are all
//   still satisfied next frame because a shot that did not happen moved none of
//   them. Holding the trigger is meant to keep firing, so the handler
//   deliberately does not consume the press; it is the failure path that is
//   missing a rate limit rather than the input handling.
//
//   1: shipped behaviour — both actions restart at the frame rate.
//   0: the push-box branch consumes the press like its siblings, and a failed
//      fire arms CWeapon::fire_cooldown_timer so the click cannot retrigger
//      until it expires. That timer is the engine's own: CWeapon::ctor zeroes
//      it, CWeapon::process counts it down, CWeapon::isReadyToFire is the gate
//      that reads it, and nothing in the shipped binary ever sets it, so this
//      uses the mechanism as built rather than adding state.
//
//   Override with -DNOCTURNE_AUTHENTIC_INPUT_REPEAT=1.
#ifndef NOCTURNE_AUTHENTIC_INPUT_REPEAT
#define NOCTURNE_AUTHENTIC_INPUT_REPEAT 0
#endif

// NOCTURNE_AUTHENTIC_CHAPTER_SELECT
//   What START on the main menu offers. CGame::showChapterSelect decides by
//   probing for pod.ini:
//
//       p_Var3 = openFile("pod.ini", ...);
//       if (bVar8 || p_Var3 != (_FILE *)0x0)  -> "*.msn" file browser
//       else                                  -> Volume / Chapter pick lists
//
//   so a build with a pod.ini beside it gets the editor's mission browser and
//   one without it gets the retail storyline. That is a sensible test for
//   "am I sitting in a content tree", and a poor one for "does this player want
//   to pick a chapter" - a working copy has a pod.ini in it, so the chapter
//   lists the retail game shows are unreachable here however the game is built.
//   The multiplayer host had no version of this at all: hostNetworkGame calls
//   showFileSelectionDialog("*.msn") straight into g_CNetGamePtr->mission_name,
//   so hosting means picking out of a raw listing of world\ and knowing which
//   file is which chapter. This covers that call site too.
//   1: shipped behaviour — the presence of pod.ini decides for START, and the
//      host always gets the file browser.
//   0: START always offers the chapter lists, and so does hosting. The mission
//      browser is still one keystroke away in both: holding CTRL on START
//      passes select_mode 1, which takes the browser branch on its own, and
//      holding CTRL while hosting asks for it explicitly.
//
//   Override with -DNOCTURNE_AUTHENTIC_CHAPTER_SELECT=1.
#ifndef NOCTURNE_AUTHENTIC_CHAPTER_SELECT
#define NOCTURNE_AUTHENTIC_CHAPTER_SELECT 0
#endif

// NOCTURNE_AUTHENTIC_FRIENDLY_FIRE
//   Whether a hero's damage lands on another hero in a network game. The
//   shipped damage path has no notion of sides - SDamageInfo carries an
//   attacker and a wielder and nothing asks which team either is on, because
//   the game as shipped only ever had one hero in the world. With two, every
//   weapon works on both, and a guest can end the host's run with one shot.
//   1: shipped behaviour — heroes damage each other normally.
//   0: a hit whose attacker or wielder is a hero does nothing to another hero,
//      in a network game only. Single player is untouched, and so is anything
//      an enemy does. See net_friendly.h.
//
//   Symmetric: it also stops the host killing a guest. Making it one-way is a
//   single test in nocturne_net_friendly_fire_block if that is wanted.
//
//   Override with -DNOCTURNE_AUTHENTIC_FRIENDLY_FIRE=1.
#ifndef NOCTURNE_AUTHENTIC_FRIENDLY_FIRE
#define NOCTURNE_AUTHENTIC_FRIENDLY_FIRE 0
#endif

// =============================================================================
// C. THE SHIPPED BINARY IS NOT WRONG, WE PREFER OTHERWISE
// =============================================================================
//
// No defect to point at. These change something the original did on purpose,
// because the alternative is nicer to use or to work on, so the case for 0 is
// an argument rather than an address.

// NOCTURNE_AUTHENTIC_PICKUP_WIELDS
//   Whether picking a weapon up off the ground draws it.
//
//   CInventory::addItem ends with
//
//     if (weapon != NULL && this->selected_weapon == NULL)
//         selectWeapon(this, weapon, 5, 1);
//
//   so a weapon collected with the slot empty is selected on the spot, and one
//   collected while something is already held goes quietly into the pack. The
//   binary is not consistent about it: a CMelee takes an earlier return, several
//   lines above that block, and is never selected however empty the slot is. So
//   the shipped game already has two rules for the same action, and which one
//   applies depends on the class of what you walked over.
//   1: shipped behaviour — a gun taken into an empty slot is drawn at once, a
//      shovel or an axe is not.
//   0: every weapon behaves the way a melee weapon already does. A pickup is
//      collected and nothing is drawn; what the hero holds changes only when the
//      player asks for it. One rule for the whole action rather than one per
//      class, and the draw it removes is one the player then has to undo:
//      collecting an item needs the guns put away, so a weapon that arrives
//      drawn costs a holster press before the next thing on the floor can be
//      taken. In a room with several weapons lying about that is one per weapon.
//      Note that the guard above means this only ever fires into an empty slot —
//      the shipped code never swapped a held weapon out, so that is not what is
//      being avoided here.
//
//   The selection above is only half of it, and the quieter half. A weapon being
//   picked up sits in carry_hands[1] for the length of the animation, and
//   CStranger::updateWeaponLayerActions reads that hand ahead of the inventory:
//   with the guns out it casts whatever is held to CWeapon and wields it on the
//   spot, several frames before addItem is ever reached. That path never touches
//   selected_weapon, so the guard above cannot see it, and it fires whatever the
//   slot already holds — including over a weapon the player is carrying. It is
//   the one that is actually visible, and the one a report of "it drew the gun I
//   just picked up" is almost always about.
//
//   0 gates both: the hand is ignored while action_pending is 1, the state whose
//   terminal action is addCarriedItemToInventory, so a pickup changes nothing
//   about what is held. A carry hand reached any other way — an item taken out
//   to place, or dynamite drawn to throw, which arrives through
//   CHero::findItemUseTarget with target_actor set — still selects normally.
//
//   The starting weapon is not affected either way. CHero::createDefaultWeapon
//   and CScat::createDefaultWeapon call selectWeapon themselves after adding it,
//   as does the hero_weapon.h replacement, so a hero still begins a mission
//   holding something.
//
//   Override with -DNOCTURNE_AUTHENTIC_PICKUP_WIELDS=1.
#ifndef NOCTURNE_AUTHENTIC_PICKUP_WIELDS
#define NOCTURNE_AUTHENTIC_PICKUP_WIELDS 0
#endif

// NOCTURNE_AUTHENTIC_OPTIONS_RESUMES_GAME
//   Whether leaving the Options screen from the pause menu returns to the game
//   or back to the pause menu.
//
//   The shipped behaviour is to resume: the pause menu offers Options, Options
//   returns, and the game is running again. That makes it impossible to change
//   something on that screen and then look at the SAME frame, because the
//   simulation has advanced by the time the screen is gone.
//
//   Two reasons to prefer the pause menu. It is the ordinary expectation of a
//   settings screen — a player who opens Options to change one thing and then
//   wants to change a second should not have to pause again between them, and
//   one who opened it by accident should not be returned to a running game with
//   an enemy mid-swing.
//
//   It is also what makes a same-frame comparison possible. The 3D API selector
//   lives on that screen, so comparing two renderers otherwise means comparing
//   two different moments: characters idle, breath drifts, torches flicker, and
//   every difference between the two images mixes the renderer with the
//   animation past the point where a difference map can separate them. Holding
//   the simulation where it was lets the second renderer redraw the frame the
//   first one drew.
//
//   1: shipped behaviour — leaving Options resumes the game.
//   0: leaving Options returns to the pause menu, with the simulation still
//      held where it was.
//
//   Override with -DNOCTURNE_AUTHENTIC_OPTIONS_RESUMES_GAME=1.
#ifndef NOCTURNE_AUTHENTIC_OPTIONS_RESUMES_GAME
#define NOCTURNE_AUTHENTIC_OPTIONS_RESUMES_GAME 0
#endif

// NOCTURNE_AUTHENTIC_MENU_RESOLUTION
//   When a resolution picked on the Graphics Options screen takes effect. In
//   both shipped binaries the selector only edits CGame::game_pixx/game_pixy;
//   the sole thing that applies them is CGame::setGameRes, called from
//   runGameSession and the editor screens and never from the menu. So picking a
//   resolution appears to do nothing until a mission starts.
//   1: shipped behaviour — the selector changes nothing until a mission loads.
//   0: changing the resolution resizes the window straight away. The menu keeps
//      RENDERING at 640x480 (its layout is hardcoded for that — fixed drawText
//      coordinates; only the mouse-sensitivity slider reads g_WindowWidth) and
//      the presenter scales it to fit, so nothing is mispositioned. Missions
//      still get a real framebuffer at the selected resolution via setGameRes.
//      Also stops the selector offering resolutions above 640x480 while
//      hardware acceleration is off, since the menu clamps those back and the
//      choice would silently revert.
//
//   Override with -DNOCTURNE_AUTHENTIC_MENU_RESOLUTION=1.
#ifndef NOCTURNE_AUTHENTIC_MENU_RESOLUTION
#define NOCTURNE_AUTHENTIC_MENU_RESOLUTION 0
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

// =============================================================================
// D. NEITHER BINARY DID THIS
// =============================================================================
//
// Additions. 1 is the absence of the feature rather than a behaviour the
// original had, so these are the flags whose 1 side costs nothing to keep
// faithful -- there is nothing to be faithful to.

// NOCTURNE_AUTHENTIC_AUTOMAP
//   Whether the game has a map. Neither shipped binary did — there is no map
//   item, no map screen, and nothing in any script refers to one.
//   1: shipped behaviour — no map.
//   0: a bindable action opens a Doom-style line map of the level, drawn from
//      the collision mesh and filling in as the player explores. Walls at his
//      own storey are bright and everything else he has seen is dimmed, so
//      changing floor does not erase what he learned. Panning, zooming and
//      re-centring reuse his existing movement bindings, which is what makes
//      the whole thing work on a gamepad without a second set of controls.
//      Past a share of the level explored the fog lifts and the rest is shown.
//
//   What has been explored is saved, as a block appended after the save's last
//   section. Older builds never reach it — CGame::loadGame parses sequentially
//   against counts it already holds, its final section is one fixed-length
//   line, and its version gate is a minimum with no upper bound — so no save
//   version changes and saves stay loadable both ways.
//
//   See research/20-automap/ for the extraction rules, which are less obvious
//   than they look, and automap.h for the API.
//
//   Override with -DNOCTURNE_AUTHENTIC_AUTOMAP=1.
#ifndef NOCTURNE_AUTHENTIC_AUTOMAP
#define NOCTURNE_AUTHENTIC_AUTOMAP 0
#endif

// NOCTURNE_AUTHENTIC_GAMEPAD
//   Which controller the game can be played with.
//
//   nocedit.exe reaches a pad through winmm's joyGetPos/joyGetPosEx: two axes,
//   ten buttons, one hat, and a calibration screen to learn where the stick's
//   centre and extents are. CGame::resetKeyState turns that into fourteen
//   input codes — DIJ_BUTTON1..10 and DIJ_LEFT/RIGHT/UP/DOWN — and hands them
//   to the ordinary key-binding path. It is a 1999 analogue joystick, and a
//   controller made since then reports through it as an arbitrary subset: the
//   face buttons usually land somewhere in the first ten, the triggers arrive
//   as axes nothing reads, and the right stick does not exist.
//
//   1: authentic — the joyGetPos path, the ten buttons, the calibration
//      screen, and the shipped gamepad defaults (fire, draw, use item and the
//      four stick directions; everything else stays on the keyboard).
//   0: SDL's game-controller layer instead. Every pad SDL knows, named by its
//      own labels, with the full button set bindable, both sticks and both
//      triggers live, no calibration step, and a default map that reaches
//      every action. See shim_config_input.h for the knobs and gamepad.h for
//      how the codes are laid out.
//
//   Override with -DNOCTURNE_AUTHENTIC_GAMEPAD=1.
#ifndef NOCTURNE_AUTHENTIC_GAMEPAD
#define NOCTURNE_AUTHENTIC_GAMEPAD 0
#endif

// NOCTURNE_AUTHENTIC_WINDOW_MESSAGES
//   1: mainWindowProc handles exactly the message set the shipped binary
//      handled. Anything else falls through to DefWindowProc, as it did in
//      1999.
//   0: dev-friendly mode. The window proc first offers each message to
//      nocturne_window_message (shims/win32/window_message.h), which is where
//      input the original had no concept of gets handled — currently the mouse
//      wheel, which DirectInput of that era did not report and which the
//      shipped proc therefore has no case for. The SDL event pump only emits
//      those extra messages when this is 0, so with it set nothing reaches the
//      hook and the vocabulary is unchanged.
//
//   Deliberately separate from NOCTURNE_AUTHENTIC_WINDOWS: that one governs
//   focus, minimize and thread-priority behaviour, and wanting the shipped
//   focus quirks is unrelated to wanting a scroll wheel.
//
//   Override with -DNOCTURNE_AUTHENTIC_WINDOW_MESSAGES=1.
#ifndef NOCTURNE_AUTHENTIC_WINDOW_MESSAGES
#define NOCTURNE_AUTHENTIC_WINDOW_MESSAGES 0
#endif

// NOCTURNE_AUTHENTIC_CHEAT_MENU
//   Whether the game's forty-six cheats can only be reached the way the shipped
//   binary offered them: typed letter by letter into CGame::processCheatCodes'
//   rolling g_InputHistory, from codes stored encrypted so they could not be
//   read out of the executable, with nothing on any screen saying they exist.
//   1: authentic — that is the only route, and no cheat is ever applied by
//      itself.
//   0: the Options screen carries a CHEATS entry (see shims/cheats.h), an
//      On/Off list of eight of them. An armed line is applied when a mission
//      starts, so a cheat can be set once rather than re-entered every reload.
//      Typing a code still works and is unchanged. One of its lines, Mission
//      warps, puts a WARPS entry on the in-mission pause menu (shims/warps.h),
//      which reaches the scripts' own developer warps the way RAISE reaches
//      them; this flag gates that entry too.
//
//   Independent of NOCTURNE_EDITOR_BUILD: the developer-tools menu and the
//   cheats the editor gates behind developer mode are a different feature, and
//   "Developer mode" is one of the lines this list can arm. The Options screen
//   builds its entry list from both, so the two appear together in one #if
//   there, but neither decides the other.
//
//   Override with -DNOCTURNE_AUTHENTIC_CHEAT_MENU=1.
#ifndef NOCTURNE_AUTHENTIC_CHEAT_MENU
#define NOCTURNE_AUTHENTIC_CHEAT_MENU 0
#endif

// NOCTURNE_AUTHENTIC_RESOLUTION_LIST
//   Which resolutions the Graphics Options selector offers, and whether the
//   software renderer is allowed any of the larger ones.
//   The shipped selector is a hardcoded chain of game_pixy comparisons that can
//   reach six modes (320x240, 512x384, 640x480, 800x600, 1024x768, 1280x1024).
//   It is not driven by g_ResolutionTable[9] — that table's only reader is
//   engine/2d.c initGraphicsSystem, for the 8bpp mode the external SETUP
//   program picked — so 1600x1200 sits in the table unreachable, and 400x300
//   has a label and a step case in both directions while nothing ever assigns
//   it. Everything above 640x480 is additionally gated on hardware
//   acceleration, and the menu clamps back to 640x480 whenever acceleration is
//   off.
//   The acceleration gate stays, and is NOT part of this flag: software really
//   cannot go above 480 lines. The rasteriser itself is fine — it writes
//   scanlines straight into g_ScreenBufferArray at the native resolution — but
//   CDemonCamera::lockAndRenderToBuffer routes the lightmap composite through
//   the renderer's hold buffer past 480 lines, and lockHoldBuffer returns 0
//   with no renderer DLL loaded, which is fatal. Even with that fixed,
//   compositeLightmapToFramebuffer maps the 640x480 lighting grid onto
//   g_ScreenBufferArray row-for-row, so the per-pixel lighting would cover only
//   a 640x480 corner of a larger screen.
//   The chain is also incomplete going left. Stepping DOWN runs
//   1024x768 -> 800x600 -> 640x480 -> 512x384 -> 320x240 and then wraps to the
//   largest mode the card's memory allows, but there is no case for 1280x1024
//   (pixy 0x400), so from there left falls through to the chain's default and
//   snaps straight to 320x240. Since the wrap at 320x240 returns to 1280x1024,
//   the top of the list is a two-entry loop with 1024x768 and 800x600
//   unreachable going left. The step-UP chain is complete; only left is
//   affected. Both shipped binaries do this (nocedit.exe: the CMP EDI,0x300 /
//   JNZ default at 0051151b).
//   1: shipped behaviour — the six-mode chain, left-step gap included.
//   0: dev-friendly default. One ordered table in shims/game/resolution.cpp
//      drives both the label and the stepping, so the two cannot disagree; it
//      adds 1600x1200, makes 400x300 reachable, and steps left from 1280x1024
//      to 1024x768 like every other entry. Accelerated only, as before.
//
//   Override with -DNOCTURNE_AUTHENTIC_RESOLUTION_LIST=1.
#ifndef NOCTURNE_AUTHENTIC_RESOLUTION_LIST
#define NOCTURNE_AUTHENTIC_RESOLUTION_LIST 0
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

// NOCTURNE_AUTHENTIC_CONSOLE
//   1: the on-screen debug console is the binary's original 40 cols ×
//      32 rows (280 × 352 px), drawn 1x out of CConsole::console_buffer
//      and framed by its border box.
//   0: dev-friendly mode. The console fills the window: glyphs scale up
//      with the framebuffer and the grid is sized to fit, so 1920 × 1080
//      gives 137 × 49 at 2x where the shipped code gave 40 × 32 in a
//      corner. Three departures, all in shims/game/console.{h,cpp}:
//        - The grid belongs to the shim (256 × 200) instead of the
//          struct's 4000-byte buffer, whose 80-byte row stride is baked
//          into writeChar's addressing and caps the console at 80 × 50.
//        - The write cursor is bounded by that grid rather than by the
//          visible row count, so lines scrolling off the top are kept
//          rather than destroyed. PageUp/PageDown page through them and
//          End returns to the newest.
//        - The border box is not drawn. It is laid out from the grid
//          extent, so at any scale that does not divide the framebuffer
//          evenly it frames the glyph cells rather than the screen.
//
//   Override with -DNOCTURNE_AUTHENTIC_CONSOLE=1.
#ifndef NOCTURNE_AUTHENTIC_CONSOLE
#define NOCTURNE_AUTHENTIC_CONSOLE 0
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

// NOCTURNE_AUTHENTIC_ATTRACT_MOVIES
//   Whether the main menu ever plays a movie by itself. Neither shipped binary
//   does: NOC1..NOC4.AVI have no call site anywhere in nocedit.exe or
//   nocturne.exe, so the four files sit in the data unreferenced.
//   1: shipped behaviour — the menu plays nothing.
//   0: once the opening movie has played, the menu plays a random NOC1..NOC4
//      whenever its splash music finishes, then restarts the music, so it
//      cycles. Arcade attract-mode behaviour.
//
//   Session-only: nothing is persisted, so the opening still plays every launch
//   and attract movies only ever follow it within the same run. Needs the movies
//   to be where the game looks (the hardcoded "video\" directory), and is inert
//   under NOCTURNE_AUTHENTIC_FMV, when opening.avi is missing, or while sound is
//   muted, since no splash music means no trigger.
//
//   Override with -DNOCTURNE_AUTHENTIC_ATTRACT_MOVIES=1.
#ifndef NOCTURNE_AUTHENTIC_ATTRACT_MOVIES
#define NOCTURNE_AUTHENTIC_ATTRACT_MOVIES 0
#endif

// NOCTURNE_AUTHENTIC_ENVMAP_SHADING
//   Whether a reflection is only what the captured image holds.
//
//   The pass sphere-maps a captured backdrop onto a surface, and what it captures
//   at night is a sky: dark, and flat enough that where a facet samples it barely
//   matters. The surface is some thirty-eight triangles, and the engine computes
//   one coordinate per vertex for the hardware to interpolate flat across each of
//   them, so the reflection arrives as panels of nearly one colour with steps
//   between them. It reads as cut crystal rather than as metal.
//
//   0 lets the renderer treat those draws as the reflections they are: the
//   direction interpolated and put back on the sphere per pixel rather than the
//   coordinate interpolated flat, a coarser level sampled so a flat patch becomes
//   a gradient, and a highlight where the surface turns away. An invented
//   environment — sky, ground, horizon and a moving highlight, all from the
//   direction — is available too and off by default, since it shows something the
//   game's own data does not contain.
//
//   Which terms are on is nocturne_trigl_envmap, live-settable, so a look can be
//   judged on a frame rather than argued about. Software mode has none of this;
//   see NOCTURNE_AUTHENTIC_ENVMAP_OVERLAY, which is where software's answer to
//   the same pass lives.
//
//   1: only the captured image, as shipped.
//   0: the terms above, on the draws the pass marks as reflections.
//
//   Override with -DNOCTURNE_AUTHENTIC_ENVMAP_SHADING=1.
#ifndef NOCTURNE_AUTHENTIC_ENVMAP_SHADING
#define NOCTURNE_AUTHENTIC_ENVMAP_SHADING 0
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
//            CMimic              is built from the leader's model, skeleton
//                                and cloth, and mirrors that same hero, so
//                                every machine shows the same mimic. It
//                                chases through the nearest-hero rule every
//                                other enemy uses. See net_sim.h.
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

// NOCTURNE_AUTHENTIC_NET_CONFIG
//   Where the network parameters come from. Every one of them is a compile-time
//   constant in the shipped game: UDP port 0x1ddf appears as a literal in four
//   places, the socket binds INADDR_ANY, and the Ctrl+J prompt is pre-filled
//   from g_IpAddress, which is baked in as an original developer's LAN address.
//   Nothing in any menu changes them.
//   1: shipped behaviour — the built-in constants always apply, the join prompt
//      included, and no file is read.
//   0: they are read from system/netplay.ini when it exists; see net_config.h
//      for the format. bindAddress and port fall back to the shipped constant.
//      serverAddress falls back to 127.0.0.1 instead, since the baked-in address
//      is a developer's old LAN machine and could only ever be a wrong answer.
//
//   Override with -DNOCTURNE_AUTHENTIC_NET_CONFIG=1.
#ifndef NOCTURNE_AUTHENTIC_NET_CONFIG
#define NOCTURNE_AUTHENTIC_NET_CONFIG 0
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

// =============================================================================
// E. WHICH BINARY THIS BUILD IS
// =============================================================================
//
// The other axis. 1 is nocedit.exe and 0 is nocturne.exe, and neither is less
// faithful than the other -- which is why the first of these does not wear the
// AUTHENTIC_ prefix.

// NOCTURNE_EDITOR_BUILD
//   Which binary this build presents itself as. The only flag here on that axis
//   rather than the shipped-versus-improved one, which is why it does not carry
//   the AUTHENTIC_ prefix: 1 is nocedit.exe, 0 is nocturne.exe, and neither is
//   less faithful than the other.
//
//   It covers the whole editor surface, in three parts:
//
//     developer tools   The "Developer tools" entry on the Options screen and
//                       the Ctrl+D / Ctrl+L hotkeys on the main menu, which
//                       reach showDeveloperToolsMenu.
//     branding          A "NON-RELEASE EDITOR BUILD" line with "Press CTRL+D to
//                       access the editor menu" under it, drawn top-left on
//                       every menu screen by renderMenuAndGetChoice, and the
//                       window title "Nocturne Editor" that winMain passes to
//                       CreateWindowExA. Only the window *title* changes:
//                       g_ApplicationTitle is separately the window class name
//                       and the key FindWindowA uses for the single-instance
//                       check, so it keeps its value either way.
//     dialogs           Everything nocedit puts on a dialog that nocturne.exe
//                       does not. The OK/Cancel pair on a pick list — retail's
//                       ctor sets no button text and its layout and render
//                       (00475470, 004759d0) never touch CEdButton, so leaving
//                       the two strings empty drops the buttons from the
//                       measured size, the layout and the paint at once, and
//                       every downstream user is already guarded on
//                       ok_button_text[0] != '\0'. The strip they sit in:
//                       drawWindowSeparator(1) above the row, and the column
//                       rule stopped short of it rather than run to
//                       g_ClipBottom. CEdButton::paint's additions over
//                       retail's 00476f40 — the clip pushed to the button's
//                       top, the label offset by button_state,
//                       getCharYOffset('A') in the centring, a dashed focus
//                       ring, the underlined shortcut key. The dashed ring
//                       around the selected row. drawMousePointer's
//                       use_clipping, 0 here against retail's 1, so the
//                       crosshair is not confined to the dialog. The confirm
//                       prompt's class — a CStrList through
//                       showMultiChoiceDialog against retail's CPickList, which
//                       gates all ~20 callers at once — and the Y/N row
//                       shortcut that comes with it. And paintCurrentWindow's
//                       chrome, shared by every dialog: paintWindowBackground,
//                       the shadow lines down the right and bottom edges, the
//                       title-bar fill behind the caption, the "j" measurement
//                       holding the rule below a descender, the second line
//                       making that rule a 2px bevel, and the caption one pixel
//                       higher than retail's.
//
//   1: the editor, as nocedit.exe shipped it — tools reachable, banner drawn,
//      the editor's dialogs, buttons and window chrome.
//   0: retail. No banner, the window titled "Nocturne", no Options entry and no
//      hotkeys, no buttons on a pick list and no strip around them, a plain
//      highlight, a cursor clipped to the dialog, the confirm prompt a two-row
//      list with working Y/N, retail's flat window chrome, and any button
//      another dialog does draw uses nocturne.exe's paint, instruction for
//      instruction.
//
//   NOT part of this: whether hardware acceleration is available. The editor
//   kills it outright, so folding that in would make an editor build unable to
//   accelerate — it lives on its own as NOCTURNE_AUTHENTIC_D3D_OPTIONS, which
//   this flag gates three of the sites of but does not decide. Nor the cheats
//   menu: NOCTURNE_AUTHENTIC_CHEAT_MENU is its own feature, and "Developer mode"
//   is one of the lines it can arm.
//
//   Override with -DNOCTURNE_EDITOR_BUILD=1.
#ifndef NOCTURNE_EDITOR_BUILD
#define NOCTURNE_EDITOR_BUILD 0
#endif

// NOCTURNE_AUTHENTIC_D3D_OPTIONS
//   Whether hardware acceleration can be turned on at all. The editor does not
//   merely default it off — it holds it off from four places, so no sequence of
//   menu actions can reach an accelerated frame:
//
//     initializeGameSystems       g_UseDirect3D = 0 at startup, unconditional.
//     configureGraphicsOptions    g_UseDirect3D = 0 every time the Graphics
//                                 Options screen is drawn, with the line
//                                 relabelled "Acceleration disabled in editor".
//     configureGraphicsOptions    the Acceleration selector itself sets
//                                 g_GraphicsCardCount = 0 and g_UseDirect3D = 0,
//                                 so the toggle can only ever turn it off.
//     loadExternalRenderer        the load is judged by g_DLLFunctionsMissing
//                                 rather than by whether the entry points it
//                                 needs actually resolved — see
//                                 NOCTURNE_AUTHENTIC_RENDERER_DLL, which is
//                                 where the 60-against-37 entry-point mismatch
//                                 that makes this matter is described.
//
//   Three "3D acceleration has been turned off!" notices on menu entry go with
//   it, and those are additionally gated on NOCTURNE_EDITOR_BUILD: a build not
//   presenting as the editor has no such screen to draw. That is the only
//   coupling between the two — this flag decides the behaviour, that one the
//   surface. It is deliberately NOT folded into NOCTURNE_EDITOR_BUILD, because
//   an editor build that cannot accelerate cannot exercise the renderer.
//
//   1: as the editor shipped — acceleration permanently off, 3D-API cycling
//      inert.
//   0: the Graphics Options menu picks a renderer and g_UseDirect3D keeps the
//      choice, which is what retail did. It also survives a restart: readIniData
//      reads "useDirect3D" from [Graphics], and writeIniData is the only reader
//      of that section with no matching write, so at 1 the key is never created
//      and acceleration begins off however it was left.
//
//   Override with -DNOCTURNE_AUTHENTIC_D3D_OPTIONS=1 to revert to the editor
//   build's permanently-disabled state.
#ifndef NOCTURNE_AUTHENTIC_D3D_OPTIONS
#define NOCTURNE_AUTHENTIC_D3D_OPTIONS 0
#endif
