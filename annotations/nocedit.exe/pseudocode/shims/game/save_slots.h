#pragma once

// =============================================================================
// SAVE SLOTS — a save and load UI that needs no keyboard
// =============================================================================
//
// Gated by NOCTURNE_AUTHENTIC_SAVE_SLOTS. At 1 the game saves the way it
// shipped: CGame::saveGame opens showFilenameInputDialog, a CInputString field
// the player types a name into, and CGame::loadGame opens
// showFileSelectionDialog over save\*.noc, a list of bare filenames. Typing is
// the only way to name a save, so on a machine with no keyboard the game can be
// loaded but never saved.
//
// At 0 both go through a CPickList of slots. A pick list is the right shape for
// this because it already works on a pad: shims/game/gamepad.cpp writes the
// same g_KeyboardState codes the list reads, so the list needs no input work of
// its own. See gamepad.h.
//
// WHAT A SLOT IS. A file in save\ named SLOTnn.NOC, plus the one autosave named
// AUTO.NOC. The names are the whole slot model — there is no index file to keep
// in step with the directory, so a save deleted or copied in from elsewhere is
// simply there or not there the next time the list is built.
//
// A save this build did not write is still listed. The row falls back to its
// filename, which is what the shipped list showed for everything.
//
// WHERE THE ROW TEXT COMES FROM. Out of the save itself. A .NOC written with
// NOCTURNE_AUTHENTIC_SAVE=1 is LZW over a plain-text stream behind an "EFD"
// magic, and the mission root name sits near the front of that stream, behind
// two comments and a version line (CDemonMission::writeFile's "// Root name of
// mission"). The alternative would be a sidecar index written beside the saves,
// which is cheaper and can disagree with the directory. This cannot disagree
// with anything.
//
// Only the head of each save is decompressed — see SAVE_HEAD_BYTES — and the
// result is cached against the file's size and timestamp. The scan itself runs
// at startup behind the loading screen; see nocturne_save_slots_prewarm.
//
// THE MANUAL PATH IS STILL THERE. Holding CTRL while choosing Save or Load
// opens the shipped dialog instead — the typed filename field, and the raw
// save\*.noc browser. This is the same gesture CGame::showChapterSelect is
// reached past with: holding CTRL on the main menu's START turns the curated
// volume list into showFileSelectionDialog over world\*.msn.

struct CGame;

#ifdef __cplusplus
extern "C" {
#endif

// ---------------------------------------------------------------------------
// The single-player submenu
// ---------------------------------------------------------------------------

#define NOCTURNE_SP_MENU_CANCEL   (-1)
#define NOCTURNE_SP_MENU_CONTINUE 0
#define NOCTURNE_SP_MENU_START    1
#define NOCTURNE_SP_MENU_LOAD     2

// Runs the submenu behind the main menu's PLAY entry until the player picks or
// backs out. Returns one of the three above, or
// NOCTURNE_SP_MENU_CANCEL for Escape or a window close.
//
// Gated by NOCTURNE_AUTHENTIC_SINGLE_PLAYER_MENU, not by the save-slot flag:
// where the main menu puts Load and what the picker then looks like are
// separate choices.
//
// Continue is listed only when NOCTURNE_AUTHENTIC_AUTOSAVE is 0. It resumes the
// most recent save, which is a promise worth making to a game that saves by
// itself and a trap in one that does not — with no autosave the newest save is
// wherever the player last chose to write, which Load already says out loud.
// The three return values do not shift when it is absent; the rows carry their
// own indices.
//
// A submenu rather than three more main-menu lines, for the reason net_menu.h
// gives: the untitled main menu double-spaces its entries and draws from a
// fixed start-y with no scrolling, so every line added there costs twice the
// room a line costs anywhere else.
//
// It draws through renderMenuAndGetChoice against the same moon backdrop the
// main menu uses, so it reads as part of the menu rather than as an editor
// dialog. The caller must be between CMoon::init and CMoon::free, which the
// main menu loop is.
//
// The main menu's own PLAY line is built in the keep alongside the rest; only
// the submenu is here.
int nocturne_single_player_menu(void);

// ---------------------------------------------------------------------------
// Picking a slot
// ---------------------------------------------------------------------------

// Reads save\ and every save's mission name, so the pickers below have nothing
// left to do when they are opened.
//
// Called from CGame::initializeGameSystems, beside CSound::findAllSoundFiles —
// the other startup pass over the data directory — while the fangs bitmap and
// "Loading..." are on screen. Doing it there rather than at the first list open
// puts the work on a screen that is already a wait, instead of in front of
// someone who has just asked to save.
//
// Safe to call more than once and safe not to call at all: a picker rebuilds
// the list either way, and re-reads only saves whose size or timestamp has
// changed since.
void nocturne_save_slots_prewarm(void);

// Runs the save pick list and writes the chosen slot's filename ("SLOT03.NOC")
// into `out`. Returns 1 on a choice, 0 if the player backed out.
//
// A row is the slot, the place the save is set in, and when it was written.
// Not the play time: CGame::total_play_time sits at the far end of the save,
// past the whole actor list, so carrying it would mean decompressing every save
// whole rather than the first few kilobytes.
//
// The list opens with a NEW SAVE row that takes the lowest unused SLOTnn, so
// saving never overwrites without the player having pointed at what it
// overwrites. Choosing a slot that holds a save confirms first, through the
// same showDestructiveActionConfirmDialog the pause menu's Quit uses.
//
// AUTO is listed but not selectable here: it is the autosave's, and a manual
// save into it would be gone at the next cutscene.
int nocturne_save_pick_slot(char *out, int out_size);

// Runs the load pick list and writes the chosen save's filename into `out`.
// Returns 1 on a choice, 0 if the player backed out or save\ holds nothing.
//
// Lists every save\*.noc, not only SLOTnn.NOC — a save named by the shipped
// typed-filename dialog is a save, and hiding it would make CTRL a trapdoor.
int nocturne_load_pick_slot(char *out, int out_size);

// The filename the main menu's Continue should load: the most recently written
// save in save\, autosave included. Returns 1 when there is one, 0 when save\
// is empty.
//
// Continue is listed whether or not there is a save, and reports an empty save\
// the way the load list does. renderMenuAndGetChoice draws every entry in one
// colour and has no notion of a disabled one, so the alternative is an entry
// that comes and goes between visits, which is worse to aim at than one that
// answers.
//
// Names and timestamps only — the main menu is redrawn every frame, so this
// must not decompress anything.
int nocturne_save_continue_target(char *out, int out_size);

// ---------------------------------------------------------------------------
// Autosave
// ---------------------------------------------------------------------------

// Called once per frame of the mission loop. Writes AUTO.NOC when the game has
// just left a cutscene, and when a mission has just started that was not
// reached by loading a save.
//
// Gated separately, by NOCTURNE_AUTHENTIC_AUTOSAVE — slots and autosaving are
// each worth wanting without the other. A no-op at 1.
//
// WHY IT POLLS RATHER THAN BEING CALLED AT THE EVENT. Both edges are already
// visible in CGame: a cutscene is CGame::letterbox_mode, which CScript::step
// raises and drops, and a mission start is CDemonMission::mission_name
// changing. Watching those two from the frame loop keeps the whole feature at
// one call site, and puts the write at the same point in the frame as the
// player's own Ctrl+S, rather than part-way through CScript::step with the
// actor list mid-update.
//
// A network session never autosaves. CGame::saveGame writes one machine's
// world; restoring it on one peer of a lockstep session would desync it.
void nocturne_autosave_poll(struct CGame *game);

// Forgets which mission the poll last saw, at the start of a mission session.
//
// The poll's mission-start edge is the mission name changing, and the name it
// remembers outlives the session — so without this, quitting to the menu and
// starting the same chapter again would look like no change at all and pass
// the start by. A no-op under NOCTURNE_AUTHENTIC_AUTOSAVE.
void nocturne_autosave_session_start(void);

#ifdef __cplusplus
}
#endif
