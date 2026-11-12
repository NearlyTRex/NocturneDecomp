#pragma once

// =============================================================================
// THE PAUSE MENU HOLDS THE SOUND WHERE IT IS
// =============================================================================
//
// CGame::runGameSession opened the pause menu with CSound::shutdown, which
// kills every sound, and closed it with CSound::init, which starts only the
// ambient loop and the event list's sounds again, each from its beginning. A
// line of dialogue is in neither, so a cutscene went quiet until its next line,
// and the music began again from the top.
//
// The menu holds the engine's sound slots instead. A held slot is neither
// computed nor mixed, and its hardware voice is held too (directx/sound_hold.h),
// so it keeps its place in either mixing mode while the menu's own sounds play.
// Each held sound is also written down: its sample, its options with its
// position, and the serial its handle carries. Return, Save or a visit to
// Options lets the held slots go; a held sound the menu lost meanwhile, to a
// change that reopens the output (mixing, rate, quality, channels, device), to
// muting or to its channel being switched off and on, is started again where
// it was, in its own slot under its own serial, so the game's handle for it
// still answers. A channel left off keeps its sounds off.
//
// Options plays the menu music over a hold without the reset CSound::configure
// starts with, and leaving it silences only the menu's own sounds.
//
// Load, Warps, Skip cinematic and Quit move the game on, so they shut the
// sound down first, as shipped, and the menu closes with CSound::init.
//
// Gated by NOCTURNE_AUTHENTIC_PAUSE_SOUND at the runGameSession call sites;
// the rest asks nocturne_pause_sound_held(), which is 0 unless a hold is on.

struct CGame;
struct CSound;
struct CSfxSlot;

#ifdef __cplusplus
extern "C" {
#endif

// In place of CSound::shutdown as the menu opens.
void nocturne_pause_sound_hold(struct CSound *sound);

// With each choice the menu returns: any but Escape (-1), Return (0), Options
// (1) and Save (3) shuts the held sound down.
void nocturne_pause_sound_choice(struct CSound *sound, int choice);

// 1 while the pause menu holds the sound.
int nocturne_pause_sound_held(void);

// 1 for a slot the hold keeps still: CSfxSlot::compute and mix leave it be.
int nocturne_pause_sound_slot_held(const struct CSfxSlot *slot);

// The menu music CSound::configure plays, without its reset. Nothing when
// muted.
void nocturne_pause_sound_menu_music(void);

// Every sound but the held ones stopped: the menu's own, as it closes.
void nocturne_pause_sound_quiet(void);

// In place of CSound::init as the menu closes. The held sound carries on, and
// sound shut down comes back as shipped. While a cinematic is being skipped
// neither happens, as shipped: a held sound is shut down instead.
void nocturne_pause_sound_resume(struct CGame *game, struct CSound *sound);

#ifdef __cplusplus
}
#endif
