#pragma once

// =============================================================================
// MOVIE AUDIO LEVEL
// =============================================================================
//
// An addition with no authentic side. The shipped game handed movies to MCI,
// which mixed them at the desktop's volume and knew nothing about the game's
// own settings — and in practice never played one at all, since playMovie asks
// for video\opening.avi while the data ships the movies in AVI\ (see
// NOCTURNE_AUTHENTIC_FMV). So an FMV played at whatever level the file was
// mastered at, through a mute the rest of the game respected.
//
// This gives movies a level of their own, on the "Movie Vol" line in Sound
// Options, persisted as [Sound] MovieVolume. It is deliberately not one of the
// engine's SFX channels: a cutscene carries speech, score and effects mixed
// together, so no existing channel is the honest owner of it, and borrowing one
// would mean the Dialog slider silently governing the music in a movie.
//
// The global mute still applies on top — CGame::processHotkeys' F5 / Ctrl-M and
// the "Sound : Muted" line both go through g_SoundEnabled, and a movie that
// kept playing through a mute is the complaint that started this.
//
// Note g_SoundEnabled's polarity: isSoundEnabled() returns NON-ZERO when sound
// is MUTED. playSfxInternal returns early on non-zero and the mute hotkey sets
// it to 1 while calling CSound::shutdown. The name reads the other way round.
//
// Persistence rides on the game's own INI, the same way the window mode does:
// CIni::writeProfileString is a read-modify-write, so a key added from outside
// inivar.cpp survives the game's writeIniData and vice versa. Nothing here may
// be called before readIniData has run, so the value is loaded lazily on first
// use.

#ifdef __cplusplus
extern "C" {
#endif

// The movie level, 0..1, loaded from the INI on first call. Zero means the
// line reads "Off", which is how the engine's own volume lines represent a
// disabled channel — they set the volume to 0 as they disable it.
float nocturne_movie_volume_get(void);

// Set and persist. Clamped to 0..1.
void nocturne_movie_volume_set(float volume);

// The gain to actually apply to movie audio: the level above, or 0 when sound
// is muted. This is what the movie decoder multiplies its samples by; it is
// separate from the level so that muting does not overwrite the player's
// chosen volume.
float nocturne_movie_audio_gain(void);

#ifdef __cplusplus
}
#endif
