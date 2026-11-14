#pragma once

// =============================================================================
// SOUND HOLD — one DirectSound voice stopped in place
// =============================================================================
//
// A held voice is silent and does not move: it keeps its cursor, so a sample
// or a stream carries on from the same frame once let go. The engine still
// sees it playing with nothing used up, so nothing it polls finishes or
// refills. Every other voice plays as usual.
//
// Implemented by dsound.cpp; game/pause_sound.cpp holds the voices of the
// sound slots it holds. Names no SDL or DirectSound types.

#ifdef __cplusplus
extern "C" {
#endif

// Holds (1) or lets go (0) `voice`, an IDirectSoundBuffer the shim made.
// Safe while the mixer runs.
void nocturne_audio_hold_voice(void *voice, int held);

#ifdef __cplusplus
}
#endif
