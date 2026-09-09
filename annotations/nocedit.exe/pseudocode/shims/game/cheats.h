#pragma once

// =============================================================================
// CHEAT PRESETS — the Options > Cheats submenu
// =============================================================================
//
// An addition, not a reconstruction. The shipped game has forty-five typed
// cheats and exactly one way to reach any of them: type the code, letter by
// letter, into CGame::processCheatCodes' rolling nineteen-character
// g_InputHistory while a mission is running. The codes are stored encrypted
// (g_CheatStr_*, decoded through decryptMessage) precisely so a player could
// not read them out of the binary, and nothing on any screen mentions that they
// exist. There is a F10 "Enter cheat code" dialog, but it is behind the
// editor's subtitle flag and still wants the code typed.
//
// This is a list of On/Off lines behind a CHEATS item on the Options screen.
// A line that is On is applied when a mission starts, so a cheat can be armed
// once from the menu instead of re-entered every time the game is reloaded.
//
// The catalogue of codes and what each does is
// research/08-developer_mode_and_cheats/cheats.md.
//
// WHY MISSION START, AND WHY THIS PARTICULAR POINT IN IT. Nocturne's storyline
// is a chain of missions, and nothing a cheat sets survives the join between
// two of them. CDemonMission::removeAllActors drops every actor and zeroes
// g_HeroCount, and CDemonMission::createHeros builds fresh ones, so the grants
// (weapons, the skeleton key, the gas mask) and the big-head bone scaling have
// to be re-applied against the new set. The flags do not survive either, and
// that is the part worth reading twice, because it is not obvious and it moved
// this call:
//
//   CDemonMission::run's loop is  loadSet -> runGameSession -> (mission plays,
//   returns) -> teardown -> load -> createHeros -> startMission -> loop.
//
// startMission therefore prepares the *next* mission and the loop then re-enters
// CGame::runGameSession, whose prologue clears god_mode_enabled,
// freeze_enemies_enabled, gratuitous_dismemberment, developer_mode_enabled,
// event_processing_enabled, subtitle_system_enabled, screen_clear_enabled,
// editor_tools_enabled, geometry_debug_enabled, collision_render_enabled,
// render_mode and scripted_sequence_active — every flag on this list. Applying
// them at the end of startMission, which is where a mission first looks ready,
// gets them wiped before a frame draws. (This is also why typing GODGAMES and
// then walking into the next chapter loses god mode in the shipped game: the
// engine clears the flag itself, and nothing puts it back.)
//
// So the call sits in runGameSession — but at the *end* of that prologue, not
// straight after the flag-clearing block. CDemonSet::initScene, which runs in
// between, finishes with setWeatherType(g_CWeatherPtr, set->weather_type), so
// an armed Weather line applied before it is overwritten by whatever the set
// asks for. The call goes after initScene, the gamma clamp and the overlay and
// pick-list clears, where nothing left in the function writes anything on this
// list. The hero and the set are ready by then — run() asserts the hero and
// calls loadSet just before — so the grants work from there too, and one call
// site covers the first mission and every transition.
//
// big_hat_cheat is the one flag the prologue does *not* clear, which is why
// apply zeroes it by hand; see the big-head note below.
//
// WHY THREE PAGES. renderMenuAndGetChoice draws from one fixed start-y and does
// not scroll, so a list has a hard ceiling of about thirteen lines at 640x480.
// Thirty presets do not fit on one screen, so CHEATS is a picker over Gameplay,
// Weapons & ammo and Debug, each of which does.
//
// WHICH FIFTEEN ARE MISSING, AND WHY. A preset has to be a piece of state that
// can be *held*. The rest of the catalogue cannot be armed in advance:
//
//   TIME, MOVIE, RAISE          each opens a dialog asking for a value
//   BIGBOOM, DARK, HEALME,      one-shot actions with nothing to hold; at
//   RECHARGE, BLANK             mission start health and battery are full
//   NOLOCK                      a stopwatch — press once to start, again to
//                               read the elapsed FPS
//   PROFILE                     cycles a readout style rather than toggling
//   MANUAL, AUTO                aim mode, already a Control option
//   STEP                        toggles wait_for_keypress, which would freeze
//                               the world the instant the mission loaded
//   headOfHorror                event-raised rather than typed, and already
//                               persisted as [Debug] headOfHorrorCheat
//
// TOGGLES AND GRANTS BEHAVE DIFFERENTLY WHEN SWITCHED OFF. A cheat backed by a
// CGame flag follows the line in both directions, in the running mission and in
// every later one. A cheat that hands the hero an item cannot be un-given, so
// switching one off only stops it being handed out again. Both halves apply
// immediately when toggled inside a mission, exactly as typing the code would.
//
// EVERY GRANT IS GUARDED. The shipped cheats are not idempotent —
// giveHeroWeapon builds a new actor each time it is called, so typing the code
// twice puts two shotguns in the inventory. Applying at every mission start
// would compound that across a playthrough, because CInventory::load carries
// the inventory between missions. Each grant here first asks the inventory
// whether it already holds one (CInventory::hasItemOfClass; ammo matches on the
// weapon-class and type pair, since every round in there is a CAmmo).
//
// BIG HEAD IS A DELTA, NOT A STATE. The shipped BIGHEAD code multiplies the
// head/chest bones of every character in the current set by 4, and by 0.25 to
// undo it — it reads no flag, it just scales by whichever factor the toggle
// picked. So the flag can be right while the world is wrong, which is exactly
// what a freshly loaded set is: g_CGamePtr->big_hat_cheat may still be 1 from
// the last mission while none of the new characters have been scaled. Apply
// clears the flag first, because a set that has just been built is not scaled.
//
// THREE PLACES WHERE THE SHIPPED CODE HAD NO ANSWER TO GIVE:
//
//   Flaming ammo  BURNINGSTAKE sets ammo_type on inventory.selected_weapon and
//                 refuses unless that weapon is the crossbow — which at mission
//                 start it almost never is, so the preset would be a no-op
//                 announcing itself. This looks the crossbow up in the
//                 inventory instead. Same intent, reachable as a preset.
//   Weather       THUNDERSTORM and SNOWSTORM both call setWeatherType and are
//                 mutually exclusive, so two On/Off lines could contradict each
//                 other. They are one line cycled with left/right, the way
//                 "Flashlight halo : Off/Simple/Complex" already works. Off
//                 means "leave the mission's own weather alone", not "force
//                 clear" — nothing here overrides a script. At mission start
//                 that is the apply loop skipping the unarmed line; cycled to
//                 Off in the menu it is setWeatherType back to the set's own
//                 weather_type, so the storm the cheat started stops and one a
//                 script started does not.
//   Old hat       OLDHAT and BIGHEAD both swap the Stranger's head model, so
//                 arming both would mean whichever ran last won silently.
//                 Turning one on turns the other off.
//
// EASTER EGGS IS NOT A FLAG BUT A LIST OF EVENT NAMES. Every other line writes
// a CGame field or hands the hero an item. This one raises script events, which
// is the fourth thing a shipped cheat could do and the one with no engine state
// behind it: RAISE (developer mode only) opens a text box, runs the typed
// string through CEventList::validateCommands and then executeCommands, so a
// bare name is raised as an event and flagOn(x) / gameFlagOn(x) set a flag. The
// scripts read all three the same way — CEventList::resolveVariable answers
// true for a name in current_events, persistent_events, game_flags or timers,
// case-insensitively.
//
// The line arms names from kEasterEggEvents in cheats.cpp as PERSISTENT events
// (flagOn), not one-frame raises. A raise lives for exactly one tick:
// CEventList::process moves the pending queue into current_events and clears
// it, and CGame::process steps the script BEFORE that, so a raise issued from
// here would have to land on the one script tick that reads it. A persistent
// event stays true, and every name on the list is read by a script guarded as
// `if (Name && !AlreadyDidIt)`, so it fires exactly once anyway. THAT GUARD IS
// THE ENTRY REQUIREMENT: FOREST.SCR's developer warps are `if (cheatpits)
// warpto(...)` with nothing to stop them, and arming one of those as a
// persistent event would re-warp the player every tick, forever. Check the
// script before adding a name.
//
// Off does not retract them, for the same reason the grants do not: the flag
// may equally have been raised by the mission itself (a door the player really
// opened), and removing it would undo the player's own progress. Turning the
// line off only stops it being armed at the next mission start.
//
// Nothing here bypasses a content setting. The one shipped easter egg the list
// arms goes through the script's own `if (isNudityEnabled())`, which reads
// g_CGamePtr->nudity_flag — the Graphics option, forced off by quimbyFlag — so
// with nudity off the flag is armed and the script declines it.
//
// MISSION WARPS IS A VISIBILITY SWITCH, NOT A CHEAT. The scripts' developer
// warps are one-shot actions on the mission that is running, so they belong on
// the pause menu, next to the other things that act on it, and not on a page of
// presets armed for the mission that is about to start. This line only decides
// whether that pause entry appears — nocturne_warps_available reads it through
// nocturne_cheat_active, the same way Infinite battery is read. The warps
// themselves live in warps.h.
//
// The ALLWEAPONS cheat's own side effects are dropped: it forces god mode on
// and refills health, and a line reading "God mode : Off" must not be
// contradicted by the line below it. The Debug page likewise applies its
// toggles whether or not Developer mode is armed — in the shipped binary most
// of those codes are unreachable without GOLDMODE first, but a player who has
// opened a page called Debug and switched one on has already said what they
// meant.
//
// NOT A NETWORK GAME. Netplay is lockstep — only the seed, the frame delta and
// the inputs cross the wire, so any divergence in what the two simulations do
// with them is permanent. Arming god mode on one machine and not the other puts
// them in different worlds within a few frames. That is equally true of typing
// the code at runtime, and this does not add a guard the shipped cheats never
// had; it is worth knowing before turning one on in a session.
//
// The settings live in the game's own .\system\nocturne.ini under [Cheats], the
// way window_mode.cpp keeps windowMode under [Graphics], so an armed cheat
// survives a restart. Missing keys read as off, so a build that has never
// opened this menu behaves exactly as the shipped one does.
//
// Gated by NOCTURNE_AUTHENTIC_CHEAT_MENU in shim_config_authentic.h at the call
// site: with that flag on, the Options screen has no CHEATS item and
// nocturne_cheats_apply is a no-op.

#ifdef __cplusplus
extern "C" {
#endif

// Menu order, which is also ini order and apply order. The first thirty are
// grouped by page in index order; anything appended later carries its page in
// the table instead, since cheatsPage() selects on that rather than on a range.
//
// Gameplay.
#define NOCTURNE_CHEAT_GOD_MODE          0
#define NOCTURNE_CHEAT_FREEZE            1
#define NOCTURNE_CHEAT_DISMEMBER         2
#define NOCTURNE_CHEAT_FLAMING_AMMO      3
#define NOCTURNE_CHEAT_WEATHER           4   // three states, see below
#define NOCTURNE_CHEAT_BIG_HEAD          5
#define NOCTURNE_CHEAT_OLD_HAT           6
#define NOCTURNE_CHEAT_SKELETON_KEY      7
#define NOCTURNE_CHEAT_GAS_MASK          8
// Weapons & ammo.
#define NOCTURNE_CHEAT_ALL_WEAPONS       9
#define NOCTURNE_CHEAT_SHOTGUN          10
#define NOCTURNE_CHEAT_CROSSBOW         11
#define NOCTURNE_CHEAT_DYNAMITE         12
#define NOCTURNE_CHEAT_FLAME_THROWER    13
#define NOCTURNE_CHEAT_TOMMY_GUN        14
#define NOCTURNE_CHEAT_ELEPHANT_GUN     15
#define NOCTURNE_CHEAT_LIGHT_GUN        16
#define NOCTURNE_CHEAT_BARON            17
#define NOCTURNE_CHEAT_SILVER_AMMO      18
#define NOCTURNE_CHEAT_LITHIUM_AMMO     19
#define NOCTURNE_CHEAT_MERCURY_AMMO     20
// Debug. Developer mode leads, so the flat apply loop sets it before the codes
// the shipped binary gates behind it.
#define NOCTURNE_CHEAT_DEV_MODE         21
#define NOCTURNE_CHEAT_GEOMETRY_DEBUG   22
#define NOCTURNE_CHEAT_COLLISION_DEBUG  23
#define NOCTURNE_CHEAT_EVENT_DEBUG      24
#define NOCTURNE_CHEAT_SCRIPT_DEBUG     25
#define NOCTURNE_CHEAT_MEMORY_DEBUG     26
#define NOCTURNE_CHEAT_SOUND_DEBUG      27
#define NOCTURNE_CHEAT_RENDER_MODE      28
#define NOCTURNE_CHEAT_SCRIPT_SEQUENCE  29
// Appended rather than slotted into the Gameplay run above, so adding it does
// not renumber every cheat after it — the ini is keyed by name but the netplay
// packet is positional. cheatsPage() collects by page rather than by range, so
// it still appears at the end of the Gameplay page.
#define NOCTURNE_CHEAT_INF_BATTERY      30
// Also appended, for the same reason. Raises a list of event names rather than
// writing an engine field — see the easter-egg note above.
#define NOCTURNE_CHEAT_EASTER_EGGS      31
// Appended too, and the second line with nothing to apply: it decides whether
// the pause menu offers WARPS, so it is read where that menu is built rather
// than written into engine state at mission start. See shims/game/warps.h.
#define NOCTURNE_CHEAT_WARPS            32
#define NOCTURNE_CHEAT_COUNT            33

// The weather line's states, in cycle order.
#define NOCTURNE_CHEAT_WEATHER_OFF  0
#define NOCTURNE_CHEAT_WEATHER_RAIN 1
#define NOCTURNE_CHEAT_WEATHER_SNOW 2

// Runs the CHEATS picker and its pages until the player backs out with Escape,
// as the Options screens it sits among do. Draws against the same moon backdrop
// the Options screen uses, so the caller must be between CMoon::init and
// CMoon::free — which showOptionsScreen is.
void nocturne_cheats_menu(void);

// -----------------------------------------------------------------------------
// Host override — see shims/net_cheats.h
// -----------------------------------------------------------------------------
//
// Netplay is lockstep, so two machines running different cheats are two
// different simulations. The host's set wins for the length of a session: a
// guest applies the host's states instead of its own, its ini is never written,
// and its own choices come back the moment the override is dropped.

// Copies this machine's armed states into `out`, one byte per cheat, for the
// wire. Returns the number of bytes written, or 0 if `out_size` is too small.
int nocturne_cheats_pack(unsigned char *out, int out_size);

// Adopts `state` (as produced by nocturne_cheats_pack) for this session in
// place of the local settings. Nothing is written to the ini. A guest calls
// this when the host announces; calling it with a set identical to the local
// one still marks the override active, so the menu tells the truth about who
// is deciding.
void nocturne_cheats_set_override(const unsigned char *state, int size);

// Drops the override so the local settings apply again. Called when a session
// ends.
void nocturne_cheats_clear_override(void);

// Nonzero while a host's set is standing in for the local one.
int nocturne_cheats_override_active(void);

// The state of one line, as a cheat's own code should read it: the host's
// answer during a network session, this machine's otherwise. Most cheats are
// applied once into engine state at mission start and never ask again, but a
// few have no field to be applied *into* and must be consulted where they take
// effect — NOCTURNE_CHEAT_INF_BATTERY is polled every frame by
// CInventory::updateInventory, which computes the discharge inline. Cheap
// enough for a per-frame call: a bounds check and an array read.
int nocturne_cheat_active(int index);

// Applies every armed cheat to the mission that is about to run. Called from
// CGame::runGameSession, just after the prologue that clears the flags — see
// the note above on why not from CDemonMission::startMission. Does nothing if
// no hero was built.
void nocturne_cheats_apply(void);

#ifdef __cplusplus
}
#endif
