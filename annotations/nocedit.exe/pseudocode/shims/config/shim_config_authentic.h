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
//      the choice — i.e. the working behavior the retail build had. The
//      choice also survives a restart: readIniData reads "useDirect3D" from
//      [Graphics] and writeIniData is the only reader of that section with no
//      matching write, so at 1 the key is never created and acceleration
//      begins off however it was left.
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

// NOCTURNE_AUTHENTIC_ENVMAP_UV
//   Whether a sphere-mapped triangle may take its UVs from two unrelated
//   sources at once. CDemonSet::renderEnvMapTriangles derives each vertex's
//   sphere-map coordinate from the transformed normal, but falls back to the
//   normalised direction from g_LightingReferencePosition to the vertex when
//   skip_normal_normalization is set and every component of that normal is under
//   1.0 — a test for "this vertex has no usable normal". CSvetlana::renderOpaque
//   sets that flag for her whole render, and her blades are drawn again by a
//   second pass over part_indices[0..1].
//   Either way the direction is a unit vector scaled to +/-0xFFFF
//   (normalizeVector3DFloat multiplies by 65535; a live normal measures
//   ~64000-69000), and the code offsets it by 0x8000 without halving it. A
//   sphere map spans 0..0xFFFF, so a unit direction has to map on as
//   dir/2 + 0x8000.
//   1: matches nocedit.exe as-shipped. The coordinates span about twice the
//      texture. Measured on Svetlana's blade pass: u over [-34038..95760],
//      v over [-24285..103392], 97 % of emitted vertices outside 0..0xFFFF.
//      Everything outside wraps into unintended parts of the captured frame —
//      and since captureTexture grabs the framebuffer rather than an authored
//      texture, its unwritten regions are black, which is what appears on the
//      blades.
//   0: dev-friendly default. The direction is halved before the offset, so a
//      unit vector covers the sphere map exactly once. This also makes the seam
//      fixup coherent: its 0x8000 comparisons are midpoint tests, which only
//      hold on the halved range.
//
//   Override with -DNOCTURNE_AUTHENTIC_ENVMAP_UV=1.
#ifndef NOCTURNE_AUTHENTIC_ENVMAP_UV
#define NOCTURNE_AUTHENTIC_ENVMAP_UV 0
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

// NOCTURNE_AUTHENTIC_SHEATHED_FIRE
//   With the weapon sheathed, the melee heroes treat fire as the action button:
//   interact, open a door, talk, pull a lever. When none of those find anything
//   the binary does not stop there - it jumps past the guard that would have
//   suppressed the attack and swings anyway. In CSvetlana::process that is the
//   JMP at 005d90cc landing on 005d9015, one instruction past the TEST/JZ at
//   005d9011 that every successful interaction branches to; CIcePick and
//   CHaystack are assembled the same way. So a hero with her blades put away
//   still attacks with them whenever there is nothing nearby to use.
//   It is deliberate in the original rather than a decompilation artifact, but
//   it was never exercised: the options screen pinned the player to the
//   Stranger, whose fire button is CStranger::handleFireButton and shares none
//   of this.
//   1: shipped behaviour - sheathed fire falls through to an attack.
//   0: sheathed fire is only the action button; the attack needs the weapon
//      drawn. Nothing else about the fire path changes.
//
//   Override with -DNOCTURNE_AUTHENTIC_SHEATHED_FIRE=1.
#ifndef NOCTURNE_AUTHENTIC_SHEATHED_FIRE
#define NOCTURNE_AUTHENTIC_SHEATHED_FIRE 0
#endif

// NOCTURNE_AUTHENTIC_HERO_INTERACT
//   Six of the nine playable classes reach the CHero interaction set from the
//   fire button - tryInteract, a door, a conversation, a lever. CScat and
//   CMoloch reach none of it: CScat::process goes from the button straight to
//   the weapon, and CMoloch::process reads fire only to let him struggle out of
//   a grab. Neither can open a door, pull a lever or talk to anyone, which in a
//   mission built around levers and locked doors is a hero who cannot finish
//   the level. The shipped game never noticed, because the options screen
//   pinned the player to the Stranger.
//   None of it needs animation - CHero::tryOpenDoor calls CDoor::onOpened and
//   CHero::executeLeverPull calls CLever::activate - which is why the other
//   five already work without the opendoor/pulllever motions that only
//   STRANGER.SKL carries.
//   1: shipped behaviour — Scat and Moloch cannot interact with anything.
//   0: both reach the same interaction set the other melee heroes use, through
//      the shared nocturne_hero_interact. Object pickup, item use and box
//      pushing are NOT included; those sit on carry-hand state these classes do
//      not maintain. See hero_interact.h.
//
//   Override with -DNOCTURNE_AUTHENTIC_HERO_INTERACT=1.
#ifndef NOCTURNE_AUTHENTIC_HERO_INTERACT
#define NOCTURNE_AUTHENTIC_HERO_INTERACT 0
#endif

// NOCTURNE_AUTHENTIC_HERO_GRAB
//   Whether a held hero can break out of a grab. Eight of the nine playable
//   classes read grabbed_by only to face the grabber, call its
//   attractActorToward and play a struggle motion while fire is down; not one
//   of them ever calls releaseFromGrab, so the grab ends only when the grabber
//   decides it does. CStranger is the exception - his own grab_timer releases
//   him after 1.5 seconds - and the shipped options screen pinned the player
//   to him, so nobody else's inability to escape was ever reachable.
//   It is not a survivable difference. An enemy releases on a motion event in
//   its own animation, and CSentinel::attractActorToward moves the victim with
//   setPositionAndOrientation, a teleport with no collision test: a sentinel
//   that never reaches its release event drags the hero through walls and off
//   the map, and mashing fire does nothing.
//   Escaping bounds how long the drag lasts; it does not make the drag legal,
//   so this covers the carry too. The other two attractActorToward are
//   harmless - CImp's moves nobody, CCharacter's pulls horizontally only and
//   caps the step at delta_time * 5 - while CSentinel's snaps the victim onto
//   the midpoint of its claw bones on all three axes, uncapped. The claw point
//   is the right destination; writing it into the position is what puts the
//   victim on the far side of the wall, and of whatever trigger was behind it.
//   1: shipped behaviour — only the Stranger can break a grab, and the
//      sentinel's carry ignores the world.
//   0: a hero of any class breaks out on the Stranger's own 1.5 second timer,
//      through the game's own CHero::releaseFromGrab; and the sentinel reaches
//      the same claw point through CCharacter::moveAndCollide, so the carry
//      stops at geometry and keeps area_id right. Scripted grabs still cannot
//      be escaped. Every hero rather than only the player's, because
//      control_type is per-machine and gating on it breaks lockstep — see
//      hero_grab.h.
//
//   Override with -DNOCTURNE_AUTHENTIC_HERO_GRAB=1.
#ifndef NOCTURNE_AUTHENTIC_HERO_GRAB
#define NOCTURNE_AUTHENTIC_HERO_GRAB 0
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
//   Whether the editor's developer-tools menu (showDeveloperToolsMenu) is
//   available: the "Developer tools" entry on the Options screen, and the
//   Ctrl+D / Ctrl+L hotkeys on the main menu.
//   1: available — authentic nocedit.exe editor behavior (default).
//   0: neither the Options entry nor the hotkeys exist; the build looks like a
//      retail player.
//
//   The "NON-RELEASE EDITOR BUILD" / "Press CTRL+D to access the editor menu"
//   banner is controlled separately, by NOCTURNE_AUTHENTIC_EDITOR_BRANDING
//   below - the two are independent, so the developer tools can stay reachable
//   without the build announcing itself as an editor.
//
//   Override with -DNOCTURNE_AUTHENTIC_DEV_TOOLS=0.
#ifndef NOCTURNE_AUTHENTIC_DEV_TOOLS
#define NOCTURNE_AUTHENTIC_DEV_TOOLS 1
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
//      Typing a code still works and is unchanged.
//
//   Independent of NOCTURNE_AUTHENTIC_DEV_TOOLS above: the developer-tools menu
//   and the cheats the editor gates behind developer mode are a different
//   feature, and "Developer mode" is one of the lines this list can arm.
//
//   Override with -DNOCTURNE_AUTHENTIC_CHEAT_MENU=1.
#ifndef NOCTURNE_AUTHENTIC_CHEAT_MENU
#define NOCTURNE_AUTHENTIC_CHEAT_MENU 0
#endif

// NOCTURNE_AUTHENTIC_EDITOR_BRANDING
//   Whether the build presents itself as Terminal Reality's internal editor.
//   nocedit.exe says so in two places: a "NON-RELEASE EDITOR BUILD" line with
//   "Press CTRL+D to access the editor menu" under it, drawn in the top-left
//   corner of every menu screen by renderMenuAndGetChoice, and the window title
//   "Nocturne Editor" that winMain passes to CreateWindowExA.
//   1: authentic — both appear exactly as the editor shipped them.
//   0: neither does; the window is titled "Nocturne" and the menus carry no
//      banner. The banner advertised a keystroke that was once the only route
//      to the developer-tools menu, and that menu is an Options entry now, so
//      it has nothing left to tell anyone.
//
//   Only the window *title* changes. g_ApplicationTitle is separately the
//   window class name and the key FindWindowA uses for the single-instance
//   check, so it keeps its value in both modes.
//
//   Override with -DNOCTURNE_AUTHENTIC_EDITOR_BRANDING=1.
#ifndef NOCTURNE_AUTHENTIC_EDITOR_BRANDING
#define NOCTURNE_AUTHENTIC_EDITOR_BRANDING 0
#endif

// NOCTURNE_AUTHENTIC_EDITOR_BUTTON
//   Whether a dialog is the editor's or retail's. Named for the buttons because
//   they are the loudest part of it, but it covers the whole of what nocedit
//   puts on a dialog that nocturne.exe does not.
//
//     the OK/Cancel pair on a pick list. Retail's ctor sets no button text and
//       its layout and render (00475470, 004759d0) never touch CEdButton, so
//       leaving the two strings empty drops the buttons from the measured size,
//       the layout and the paint at once - every downstream user is already
//       guarded on ok_button_text[0] != '\0'.
//     the strip they sit in: drawWindowSeparator(1) above the row, and the
//       column rule stopped short of it rather than run to g_ClipBottom.
//     CEdButton::paint's own additions over retail's 00476f40, for the dialogs
//       that draw buttons directly - the clip pushed to the button's top, the
//       label offset by button_state, getCharYOffset('A') in the centring, a
//       dashed focus ring, and the underlined shortcut key.
//     the dashed ring around the selected row.
//     drawMousePointer's use_clipping, 0 here against retail's 1, so the
//       crosshair is not confined to the dialog.
//     the confirm prompt's class - a CStrList through showMultiChoiceDialog
//       against retail's CPickList, which gates all ~20 callers at once - and
//       the Y/N row shortcut that comes with it.
//     paintCurrentWindow's chrome, shared by every dialog: paintWindowBackground,
//       the shadow lines down the right and bottom edges, the title-bar fill
//       behind the caption, the "j" measurement holding the rule below a
//       descender, the second line making that rule a 2px bevel, and the caption
//       one pixel higher than retail's.
//
//   1: authentic — the editor's dialogs, buttons and window chrome.
//   0: no buttons on a pick list and no strip around them, a plain highlight, a
//      cursor clipped to the dialog, the confirm prompt a two-row list with
//      working Y/N, retail's flat window chrome, and any button another dialog
//      does draw uses nocturne.exe's paint, instruction for instruction.
//
//   Override with -DNOCTURNE_AUTHENTIC_EDITOR_BUTTON=1.
#ifndef NOCTURNE_AUTHENTIC_EDITOR_BUTTON
#define NOCTURNE_AUTHENTIC_EDITOR_BUTTON 0
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

// NOCTURNE_AUTHENTIC_SHADER_LIGHTING
//   Whether hardware-drawn geometry receives the per-pixel light/fog grid that
//   CDemonCamera::compositeLightmapToFramebuffer applies to the CPU image.
//   1: DEFAULT, and the measured-correct answer — it does not. The grid is the
//      SOFTWARE rasterizer's lighting mechanism; geometry drawn through the
//      renderer DLL carries its own per-vertex lighting and already arrives at
//      final brightness. Applying the grid on top darkens it a second time.
//   0: the grid is published through shims/lighting_bridge.h and the shader
//      renderer applies it per fragment. Kept for A/B work only — see below.
//
//   MEASURED, one static scene, three captures synced to SDL_GL_SwapWindow, the
//   two accelerated ones from the SAME frame via nocturne_gl_lightmap_debug:
//
//                        mean    p50   p70   p90   p95   p99   max
//     software          14.22   14.0  20.0  24.0  24.0  28.0   181
//     accel, grid OFF   14.33   14.0  20.0  24.0  24.0  29.0   182   ratio 1.0076
//     accel, grid ON    12.85   11.0  20.0  23.0  24.0  24.0   144   ratio 0.9035
//
//   Accel without the grid matches software at every percentile. This is not a
//   scene where the grid is a no-op either: its corona grid averages 16 against
//   64-is-unity, so the composite darkens the software image to 0.41x and the
//   two still agree. That independently confirms research/13's earlier character
//   -crop measurement (software 16.083 vs accel 16.471, ratio 1.024).
//
//   So the chapel window that motivated this (research/12, accelerated mean
//   20.53 / max 56 against 19.50 / 28 for software and retail) is a DOUBLE-DRAW
//   bug, not a missing lightmap: CGlass renders once CPU-side into the
//   composite's source and again as hardware geometry. It needs the redundant
//   draw suppressed, which is a fix on the game side, not in the renderer.
//
//   The 0 path is retained because it is the only way to A/B the grid against a
//   live frame, and because a future per-fragment lighting model may want the
//   data — nothing else in the build reads lighting_bridge.h.
//
//   Override with -DNOCTURNE_AUTHENTIC_SHADER_LIGHTING=0 to apply it anyway.
#ifndef NOCTURNE_AUTHENTIC_SHADER_LIGHTING
#define NOCTURNE_AUTHENTIC_SHADER_LIGHTING 1
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
//   The 3D API selector lives on that screen, so comparing two renderers means
//   comparing two different moments. Characters idle, breath drifts, torches
//   flicker; every difference between the two images then mixes the renderer
//   with the animation, and a difference map cannot separate the two. Returning
//   to the pause menu instead holds the simulation where it was, so the second
//   renderer redraws the frame the first one drew.
//
//   Override with -DNOCTURNE_AUTHENTIC_OPTIONS_RESUMES_GAME=1.
#ifndef NOCTURNE_AUTHENTIC_OPTIONS_RESUMES_GAME
#define NOCTURNE_AUTHENTIC_OPTIONS_RESUMES_GAME 0
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
