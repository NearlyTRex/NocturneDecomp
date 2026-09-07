#pragma once

// =============================================================================
// AUDIO BACKEND QUERY — what is actually playing the sound, for display
// =============================================================================
//
// Forward-declaration only, reached by decompiled TUs through shim_config.h
// like nocturne_gl_version_short(). Deliberately names no SDL types, so a
// decompiled TU that knows nothing about SDL can include it.
//
// Exists so the Sound Options "Device : " line can say what is really playing.
// The shipped enumerator hardcodes "DirectSound: %s" around the enumerated
// description, which was true on Windows and is not true here -- every sound
// this build makes goes out through SDL, whatever host API SDL picked.
//
// The name is the host API, not the shim: the interesting fact for someone
// reading that line is whether they are on PipeWire or PulseAudio or bare
// ALSA, not that a shim exists.

#ifdef __cplusplus
extern "C" {
#endif

// "PulseAudio", "PipeWire", "ALSA", ... from the driver SDL actually opened,
// title-cased for display. Falls back to SDL's own lowercase driver id for a
// backend this doesn't have a spelling for, and to "SDL Audio" before the
// audio subsystem is up. Never null and never empty, so callers can print it
// unconditionally. Points at static storage.
const char *nocturne_audio_backend_name(void);

#ifdef __cplusplus
}
#endif
