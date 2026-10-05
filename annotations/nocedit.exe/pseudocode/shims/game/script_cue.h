#pragma once

// =============================================================================
// SCRIPT MUSIC CUES THAT RESTART EVERY PASS
// =============================================================================
//
// The fix side of NOCTURNE_AUTHENTIC_CUE_RETRIGGER, called from the playSfx
// command's "cue" branch in CEventList::executeCommand.
//
// The last handle each cue string was started with is remembered, and
// isSfxPlaying answers whether it is still going. A handle carries the slot's
// playback counter, so one whose sound has finished or been killed (a level
// load runs killAllSfx) reads as not playing without any reset here.
//
// Which copy plays is cosmetic and machine-local, so skipping the start - and
// the libc rand() draw findRandomSoundFile makes inside it - cannot reach
// simulation state in a network game.

#ifdef __cplusplus
extern "C" {
#endif

// The handle of a still-playing earlier start of `cue_name` (the script's text,
// compared without case), or 0 when it should be started.
unsigned int nocturne_script_cue_playing(const char *cue_name);

// Records `handle` as the latest start of `cue_name`. A zero handle is ignored.
void nocturne_script_cue_started(const char *cue_name, unsigned int handle);

#ifdef __cplusplus
}
#endif
