#pragma once

// =============================================================================
// MISSION WARPS — the pause menu's WARPS entry
// =============================================================================
//
// An addition in presentation only: every warp on this page is an event name
// the shipped scripts already listen for, raised the way the shipped RAISE
// cheat raises it. Nothing new is scripted here.
//
// WHERE THEY COME FROM. Terminal Reality left a developer shortcut in most
// mission scripts — an unguarded test on a name nothing in the shipped data
// ever raises:
//
//     if (cheatpits)
//     {
//         warpto($, CheatPits)
//         wait(1)
//         warpto(Svetlana, CheatPits)
//     }
//
// The only way to reach one was RAISE, which is behind developer mode and wants
// the name typed from memory. Diffing every identifier read by the shipped
// .SCR/.MSN data against every one it raises (see the mission-data note in
// cheats.h) turns up about fifty of these across fourteen missions, and this is
// that list with a readable label on each.
//
// WHY A RAISE AND NOT A FLAG. The Easter eggs line arms persistent events,
// because the scripts read those names behind an `if (Name && !AlreadyDidIt)`
// guard. These have no guard: as a persistent event `if (cheatpits)` would warp
// the player back to the same waypoint every script tick, forever. A raise
// lives for exactly one tick — CEventList::process moves the pending queue into
// current_events and clears it — which is what an unguarded test needs, and it
// is what typing the name into RAISE does.
//
// WHY IT IS ON THE PAUSE MENU. A warp is a one-shot action on the mission that
// is running, which is what everything else on that menu is — save, load, skip
// the cinematic. Options > Cheats is a list of presets armed for the mission
// that is about to start, and a warp cannot be armed: it has no state to hold,
// only a moment to happen at. It also needs a mission underneath it, and the
// Options screen is reached from the main menu as often as from the pause menu.
//
// Whether the entry appears at all is the Gameplay page's "Mission warps" line,
// read here through nocturne_cheat_active — so the pause menu is unchanged for
// a player who has not asked for this.
//
// WHY IT IS SAFE TO RAISE FROM A MENU LOOP. The pause menu does not run
// CGame::process, so nothing drains the pending queue while the list is open;
// the raise sits in CEventList::events until play resumes, and the first
// CGame::process after that hands it to the script. That is also why picking a
// warp closes the pause menu rather than returning to it — leaving is part of
// the action. A script parked in a cutscene (wait/waitfor) will miss it,
// exactly as it would miss a typed RAISE.
//
// WHY THE PAGE IS PER-MISSION. The names are local to one script — `cheatpits`
// means nothing outside forest.scr — so the rows are selected on
// g_CDemonMissionPtr->mission_name, which is the .scr basename. Case in the
// shipped data is inconsistent (castle1, CHICAGO2, Mansion, HQ-ACT1), so the
// match is case-insensitive, as the engine's own event comparisons are.
//
// NOT PERSISTED, NOT SYNCHRONISED. A warp is an action, not a preset: nothing
// is written to the ini and nothing crosses the wire. In a network game it
// would move one machine's hero and not the other's, so the page is closed
// while a session is running.

#ifdef __cplusplus
extern "C" {
#endif

// Nonzero when the pause menu should offer WARPS: the Mission warps line is on,
// a mission with warps of its own is running, and this is not a network game.
// Called as the pause list is built.
int nocturne_warps_available(void);

// Runs the warp list for the running mission as a pick list, in the pause
// menu's own style, and raises whatever the player chose. Returns with nothing
// done if they backed out. The caller should resume play afterwards.
void nocturne_warps_menu(void);

#ifdef __cplusplus
}
#endif
