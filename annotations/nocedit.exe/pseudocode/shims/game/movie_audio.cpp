// =============================================================================
// MOVIE AUDIO LEVEL — implementation
// =============================================================================
//
// See movie_audio.h for what this is and why movies get a level of their own
// rather than borrowing one of the engine's SFX channels.

#include "game/movie_audio.h"
#include "shim_config.h"
#include "core/debug_log.h"
#include "core/ini_setting.h"

// Reaches the mute state.
#include "nocturne.h"

namespace {

const char kIniSection[] = "Sound";
const char kIniKey[] = "MovieVolume";

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
        if (nocturne_ini_exists() == 0) {
            DLOG("frontend", "no %s yet; movie volume defaults to %d%%",
                 NOCTURNE_INI_PATH, NOCTURNE_MOVIE_VOLUME_DEFAULT);
        }
        s_percent = clamp_percent(nocturne_ini_get_int(kIniSection, kIniKey,
                                                       NOCTURNE_MOVIE_VOLUME_DEFAULT));
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

    nocturne_ini_set_int(kIniSection, kIniKey, percent);

    DLOG("frontend", "set MovieVolume=%d%%", percent);
}

extern "C" float nocturne_movie_audio_gain(void) {
#if NOCTURNE_AUTHENTIC_FMV
    return 1.0f;
#else
    if (sound_sndmain_cpp_isSoundMuted_FUN_005a96b0() != 0) {
        return 0.0f;
    }
    return nocturne_movie_volume_get();
#endif
}
