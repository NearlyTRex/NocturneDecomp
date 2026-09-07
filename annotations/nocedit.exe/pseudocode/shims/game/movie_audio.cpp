// =============================================================================
// MOVIE AUDIO LEVEL — implementation
// =============================================================================
//
// See movie_audio.h for what this is and why movies get a level of their own
// rather than borrowing one of the engine's SFX channels.

#include "game/movie_audio.h"
#include "shim_config.h"
#include "core/debug_log.h"

// Reaches engine_ini_cpp_getProfileInteger / _writeProfileString, which operate
// on the engine's g_CIniInstance, and the mute state.
#include "nocturne.h"

#include <cstdio>
#include <string>

// Defined in shims/watcom/crt.cpp — the same '\\'->'/' + case-insensitive
// resolution the CRT _fopen shim applies, so the probe below looks at the file
// the engine will actually open.
std::string watcom_resolve_fs_path(const char *path);

namespace {

// Same path inivar.cpp uses. Kept as non-const buffers because the engine's INI
// accessors take char* rather than const char*.
char kIniPath[] = ".\\system\\nocturne.ini";
char kIniSection[] = "Sound";
char kIniKey[] = "MovieVolume";

// Stored as a percentage, matching how the Sound Options lines are shown and
// keeping the INI value readable.
int  s_percent = NOCTURNE_MOVIE_VOLUME_DEFAULT;
bool s_loaded = false;

int clamp_percent(int percent) {
    if (percent < 0)   return 0;
    if (percent > 100) return 100;
    return percent;
}

} // namespace

extern "C" float nocturne_movie_volume_get(void) {
    if (!s_loaded) {
        // CIni::getProfileString has NO initialised-guard: if it cannot open
        // the file it calls displayErrorAndQuit("Unable to open input") and
        // takes the process with it. Check the file is really there rather
        // than trusting init order.
        std::string resolved = watcom_resolve_fs_path(kIniPath);
        FILE *probe = fopen(resolved.c_str(), "rb");
        if (probe != nullptr) {
            fclose(probe);
            s_percent = clamp_percent(engine_ini_cpp_getProfileInteger_FUN_004fb9a0(
                kIniSection, kIniKey, NOCTURNE_MOVIE_VOLUME_DEFAULT, kIniPath));
        } else {
            s_percent = NOCTURNE_MOVIE_VOLUME_DEFAULT;
            DLOG("frontend", "no %s yet; movie volume defaults to %d%%",
                 kIniPath, s_percent);
        }
        s_loaded = true;
        DLOG("frontend", "loaded MovieVolume=%d%%", s_percent);
    }
    return (float)s_percent / 100.0f;
}

extern "C" void nocturne_movie_volume_set(float volume) {
    // Round rather than truncate: the menu steps in fifths, and 0.2f * 5 lands
    // a hair under 100 in float.
    int percent = clamp_percent((int)(volume * 100.0f + 0.5f));

    s_percent = percent;
    s_loaded = true;

    char value[16];
    snprintf(value, sizeof(value), "%d", percent);
    engine_ini_cpp_writeProfileString_FUN_004fba40(kIniSection, kIniKey, value, kIniPath);

    DLOG("frontend", "set MovieVolume=%d%%", percent);
}

extern "C" float nocturne_movie_audio_gain(void) {
    // Non-zero means MUTED — see the note in movie_audio.h.
    if (sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0() != 0) {
        return 0.0f;
    }
    return nocturne_movie_volume_get();
}
