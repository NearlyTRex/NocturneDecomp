#pragma once

// =============================================================================
// SOUND OPTIONS — the sound settings, as a page
// =============================================================================
//
// Gated by NOCTURNE_AUTHENTIC_MENU, which carries the reasoning. The shipped
// configureSoundOptions' lines and the spectrum it draws behind them, with a
// Movie Vol line for the cutscenes' own level (persisted as [Sound]
// MovieVolume by game/movie_audio). core/menu_page runs it.

#ifdef __cplusplus
extern "C" {
#endif

// configureSoundOptions.
void nocturne_sound_options_menu(void);

#ifdef __cplusplus
}
#endif
