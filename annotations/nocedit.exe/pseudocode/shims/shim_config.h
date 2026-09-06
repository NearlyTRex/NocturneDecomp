#pragma once

// =============================================================================
// SHIM CONFIG — build-time toggles for shim/keep behavior
// =============================================================================
//
// This file is the entry point: nocturne.h includes it, and it pulls in every
// toggle and every shim API declaration that decompiled TUs reach through
// nocturne.h. Nothing else needs to include it directly, and nothing else does.
//
// The toggles themselves live in four files beside this one:
//
//   shim_config_authentic.h  every NOCTURNE_AUTHENTIC_* flag, whatever
//                            subsystem it touches — the fidelity dial board.
//                            Set them all to 1 for maximum fidelity to
//                            nocedit.exe.
//   shim_config_netplay.h    the netplay ini, drop timeout and diagnostics.
//   shim_config_video.h      window ownership, window mode, resolution and
//                            window scale.
//   shim_config_media.h      attract-mode movies.
//   shim_config_debug.h      the FPU trap and the gdb dump helpers.
//
// A flag with an authentic answer is in the first file; a flag that tunes an
// addition is with its feature. Where that split separates the two halves of
// one subsystem, each side names the other.

// Numeric magnitude constants used by keep/shim code (kept separate from the
// behavior toggles below).
#include "config/shim_constants.h"

// The toggles. Authenticity first: NOCTURNE_AUTHENTIC_NETPLAY and
// NOCTURNE_AUTHENTIC_RNG gate features whose own config headers follow.
#include "config/shim_config_authentic.h"
#include "config/shim_config_netplay.h"
#include "config/shim_config_video.h"
#include "config/shim_config_media.h"
#include "config/shim_config_debug.h"

// =============================================================================
// SHIM API DECLARATIONS
// =============================================================================
//
// Reached by decompiled TUs through nocturne.h, which includes this file before
// system.h and types.h — so everything below must be forward-declaration only.

// Registry queries (nocturne_builtin_dll_available / _next) — declared here so
// decompiled TUs reach them through nocturne.h like the other shim toggles.
#include "renderer/builtin_dll.h"

// GL version query (nocturne_gl_version_short) — declared here so the Graphics
// Options 3D API line can name the shader renderer by the version actually
// running. Separate from gl_present.h, which names SDL types.
#include "gl/gl_version.h"

// The per-pixel light/fog grid (nocturne_lighting_bridge*) — declared here so
// CDemonCamera::compositeLightmapToFramebuffer reaches it through nocturne.h.
// Its one call site is gated on NOCTURNE_AUTHENTIC_SHADER_LIGHTING; the shim
// itself is not, so the symbols resolve either way.
#include "renderer/lighting_bridge.h"

// Window mode (nocturne_window_mode_*) — declared here so decompiled TUs
// reach it through nocturne.h.
#include "gl/window_mode.h"

// Holding the screen across a video mode change, for a caller that changes mode
// with the simulation standing still and so has nothing that would draw the
// picture again. Save copies the frame buffer aside; restore puts it back and
// pushes it to the target, and declines if the mode is no longer the one it was
// saved from. No caller today — the pause menu draws the scene again instead,
// so that the graphics settings it just changed are visible in it.
//
// Declared rather than included: renderer/trigl_device.h carries the batch
// types with it, and no decompiled TU needs those.
#ifdef __cplusplus
extern "C" {
#endif
int nocturne_trigl_device_save_screen(void);
int nocturne_trigl_device_restore_screen(void);

#ifdef __cplusplus
}
#endif

// Attract-mode session state (nocturne_attract_*) — declared here so decompiled
// TUs reach it through nocturne.h, same as the registry queries below.
#include "game/attract.h"

// Console scaling (nocturne_console_*) — declared here so CConsole::render
// reaches it through nocturne.h. Inert under NOCTURNE_AUTHENTIC_CONSOLE.
#include "game/console_scale.h"

// HUD scaling (nocturne_ui_*) — declared here so the HUD TUs reach it through
// nocturne.h.
#include "game/ui_scale.h"

// Netplay configuration (nocturne_net_*) — declared here so the netgame TUs
// reach it through nocturne.h.
#include "net/net_config.h"

// The main menu's MULTIPLAYER submenu (nocturne_net_menu_*), reached from the
// main.c menu loop.
#include "net/net_menu.h"

// The Options screen's CHEATS submenu (nocturne_cheats_menu) and the mission-
// start application of whatever it armed (nocturne_cheats_apply), reached from
// the menu and mission TUs. Both are no-ops under NOCTURNE_AUTHENTIC_CHEAT_MENU.
#include "game/cheats.h"

// Host-authoritative cheats (nocturne_net_cheats_*), reached from the netgame
// TU. A lockstep session cannot carry two cheat lists, so the host's stands in
// for a guest's for the length of it. Inert outside a network game.
#include "net/net_cheats.h"

// Lobby hero selection (nocturne_net_hero_*), reached the same way from the
// netgame TU. Unlike the netplay additions below, nothing here is compiled out
// under NOCTURNE_AUTHENTIC_NETPLAY — the name table and the cycle step are
// ordinary functions; it is the lobby's call sites that are gated.
#include "net/net_hero.h"

// The weapon each hero class starts holding (nocturne_hero_default_weapon),
// reached from CDemonMission::createOneHero — the one place a player hero is
// built, and the only one whose inventory is not immediately overwritten by
// CInventory::load. Gated there on NOCTURNE_AUTHENTIC_HERO_WEAPON, not on the
// netplay flag: the CGun that CHero::ctor hands every class is wrong for that
// class whoever is driving it, so the correction belongs to the hero rather
// than to the lobby.
#include "game/hero_weapon.h"

// The CHero interaction set (nocturne_hero_interact), reached from the two
// hero classes whose fire button never had it. Gated at those call sites on
// NOCTURNE_AUTHENTIC_HERO_INTERACT.
#include "game/hero_interact.h"

// Breaking out of a grab (nocturne_hero_grab_escape), reached from the eight
// hero classes that never had it. Gated at those call sites on
// NOCTURNE_AUTHENTIC_HERO_GRAB.
#include "game/hero_grab.h"

// The retail Volume/Chapter picker (nocturne_chapter_pick_mission), lifted out
// of CGame::showChapterSelect so the multiplayer host can offer the same choice
// its START menu does. Reached from the game TU; gated at that call site on
// NOCTURNE_AUTHENTIC_CHAPTER_SELECT.
#include "game/chapter_select.h"

// Host-scheduled safe respawn (nocturne_net_respawn_*), the desync detector
// (nocturne_net_sync_*) and the sim-state trace (nocturne_sim_trace_*) —
// declared here so the netgame, mission and game TUs reach them through
// nocturne.h. Every entry point in all three is a no-op when
// NOCTURNE_AUTHENTIC_NETPLAY is 1.
#include "net/net_respawn.h"
#include "net/net_sync.h"
#include "net/sim_trace.h"

// Mission-to-mission transitions (nocturne_net_mission_*), which the shipped
// game moves through with no rendezvous and no packet at all. Reached from the
// mission, game and netgame TUs. Every entry point is inert outside a network
// game, and when NOCTURNE_AUTHENTIC_NETPLAY is 1.
#include "net/net_mission.h"

// Socket servicing for screens inside a mission that run their own loop and do
// not return to CGame::processFrame (nocturne_net_keepalive) — declared here so
// the game TU reaches it through nocturne.h. A no-op outside a network game.
#include "net/net_keepalive.h"

// Friendly fire (nocturne_net_friendly_fire_block), reached from each hero's
// processDamage. Gated there on NOCTURNE_AUTHENTIC_FRIENDLY_FIRE, and inert
// outside a network game.
#include "net/net_friendly.h"

// Synchronised weapon/item selection (nocturne_net_weapon_*), reached the same
// way from CGame::processKeyboardControls and the netgame TU. Outside a network
// game every entry point applies the selection immediately and locally, exactly
// as the shipped code did.
#include "net/net_weapon.h"

// Deterministic hero selection for simulation code (nocturne_net_sim_*). Unlike
// the two above this is NOT gated on NOCTURNE_AUTHENTIC_NETPLAY: it returns the
// local hero unchanged outside a network game, so the AI call sites can use it
// unconditionally and single player keeps the shipped behaviour.
#include "net/net_sim.h"

// The funnel itself (nocturne_rng_*) — declared here so every game TU reaches
// it through nocturne.h. Every entry point collapses to rand() when
// NOCTURNE_AUTHENTIC_RNG is 1.
#include "net/rng.h"

// One saved camera state (g_MirrorCullCameraState) shared by
// CDemonSet::setupMirrorRendering and CDemonCamera::testVisibility, so a
// reflected actor's bounding box is tested against the mirror camera rather
// than through the actor transform its caller pushed. Declares nothing when
// NOCTURNE_AUTHENTIC_MIRROR_CULL is 1.
#include "game/mirror_cull.h"
