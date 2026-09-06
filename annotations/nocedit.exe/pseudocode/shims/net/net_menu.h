#pragma once

// =============================================================================
// NETPLAY — MULTIPLAYER MENU
// =============================================================================
//
// An addition, not a reconstruction. The shipped main menu is START / OPTIONS /
// LOAD / QUIT and has no multiplayer entry of any kind, because neither shipped
// binary exposed multiplayer at all. Hosting and joining were reachable here
// only as Ctrl+H and Ctrl+J, which nothing on screen could tell you about
// except two lines of corner text.
//
// This is the submenu behind a MULTIPLAYER item on the main menu. It is a
// submenu rather than two more main-menu lines so the main menu stays at five
// entries — the list is drawn from a fixed start-y with no scrolling, and the
// untitled main menu double-spaces its lines, so every entry added there costs
// twice the room an entry costs anywhere else.
//
// It draws through renderMenuAndGetChoice against the same moon backdrop the
// main menu uses, so it looks like part of the menu rather than like an editor
// dialog. The caller must therefore have g_CMoonInstance initialised and be
// between CMoon::init and CMoon::free — which the main menu loop is.
//
// The main menu's own MULTIPLAYER line is built in the keep alongside START and
// the rest, not here; only the submenu lives in this file.
//
// Gated by NOCTURNE_AUTHENTIC_NETPLAY in shim_config_authentic.h at the call
// site: with authentic netplay on, the main menu has no MULTIPLAYER item and
// nothing here is reached.

#ifdef __cplusplus
extern "C" {
#endif

#define NOCTURNE_NET_MENU_CANCEL (-1)
#define NOCTURNE_NET_MENU_HOST   0
#define NOCTURNE_NET_MENU_JOIN   1

// Runs the multiplayer submenu until the player picks or backs out. Returns
// NOCTURNE_NET_MENU_HOST, NOCTURNE_NET_MENU_JOIN, or NOCTURNE_NET_MENU_CANCEL
// for Escape or a window close.
int nocturne_net_menu_multiplayer(void);

#ifdef __cplusplus
}
#endif
