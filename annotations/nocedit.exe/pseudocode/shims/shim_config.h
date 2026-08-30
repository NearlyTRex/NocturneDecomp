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
#include "shim_constants.h"

// The toggles. Authenticity first: NOCTURNE_AUTHENTIC_NETPLAY and
// NOCTURNE_AUTHENTIC_RNG gate features whose own config headers follow.
#include "shim_config_authentic.h"
#include "shim_config_netplay.h"
#include "shim_config_video.h"
#include "shim_config_media.h"
#include "shim_config_debug.h"

// =============================================================================
// SHIM API DECLARATIONS
// =============================================================================
//
// Reached by decompiled TUs through nocturne.h, which includes this file before
// system.h and types.h — so everything below must be forward-declaration only.

// Registry queries (nocturne_builtin_dll_available / _next) — declared here so
// decompiled TUs reach them through nocturne.h like the other shim toggles.
#include "builtin_dll.h"

// Window mode (nocturne_window_mode_*) — declared here so decompiled TUs
// reach it through nocturne.h.
#include "window_mode.h"

// Attract-mode session state (nocturne_attract_*) — declared here so decompiled
// TUs reach it through nocturne.h, same as the registry queries below.
#include "attract.h"

// Console scaling (nocturne_console_*) — declared here so CConsole::render
// reaches it through nocturne.h. Inert under NOCTURNE_AUTHENTIC_CONSOLE.
#include "console_scale.h"

// HUD scaling (nocturne_ui_*) — declared here so the HUD TUs reach it through
// nocturne.h.
#include "ui_scale.h"

// Netplay configuration (nocturne_net_*) — declared here so the netgame TUs
// reach it through nocturne.h.
#include "net_config.h"

// The main menu's MULTIPLAYER submenu (nocturne_net_menu_*), reached from the
// main.c menu loop.
#include "net_menu.h"

// Lobby hero selection (nocturne_net_hero_*), reached the same way from the
// netgame TU. Unlike the netplay additions below, nothing here is compiled out
// under NOCTURNE_AUTHENTIC_NETPLAY — the name table and the cycle step are
// ordinary functions; it is the lobby's call sites that are gated.
#include "net_hero.h"

// Host-scheduled safe respawn (nocturne_net_respawn_*), the desync detector
// (nocturne_net_sync_*) and the sim-state trace (nocturne_sim_trace_*) —
// declared here so the netgame, mission and game TUs reach them through
// nocturne.h. Every entry point in all three is a no-op when
// NOCTURNE_AUTHENTIC_NETPLAY is 1.
#include "net_respawn.h"
#include "net_sync.h"
#include "sim_trace.h"

// Synchronised weapon/item selection (nocturne_net_weapon_*), reached the same
// way from CGame::processKeyboardControls and the netgame TU. Outside a network
// game every entry point applies the selection immediately and locally, exactly
// as the shipped code did.
#include "net_weapon.h"

// Deterministic hero selection for simulation code (nocturne_net_sim_*). Unlike
// the two above this is NOT gated on NOCTURNE_AUTHENTIC_NETPLAY: it returns the
// local hero unchanged outside a network game, so the AI call sites can use it
// unconditionally and single player keeps the shipped behaviour.
#include "net_sim.h"

// The funnel itself (nocturne_rng_*) — declared here so every game TU reaches
// it through nocturne.h. Every entry point collapses to rand() when
// NOCTURNE_AUTHENTIC_RNG is 1.
#include "rng.h"
