// =============================================================================
// AUDIO BACKEND QUERY
// =============================================================================
// See audio_backend.h for what this is for.

#include "core/audio_backend.h"
#include <SDL.h>
#include <cstring>

namespace {

// SDL's driver ids are lowercase and terse; these are the same backends spelled
// the way their projects spell them. Anything not listed is passed through as
// SDL reported it, which is still more informative than a wrong label.
struct BackendName { const char *sdl_id; const char *display; };

const BackendName kBackendNames[] = {
    { "pulseaudio", "PulseAudio" },
    { "pipewire",   "PipeWire"   },
    { "alsa",       "ALSA"       },
    { "jack",       "JACK"       },
    { "sndio",      "sndio"      },
    { "dsp",        "OSS"        },
    { "coreaudio",  "CoreAudio"  },
    { "wasapi",     "WASAPI"     },
    // Windows falls back through these two when WASAPI is unavailable. On that
    // platform "DirectSound: <device>" is the truth rather than a stale label,
    // and this reproduces the shipped line exactly.
    { "directsound","DirectSound"},
    { "winmm",      "Windows Waveform Audio" },
    { "disk",       "Disk Writer"},
    { "dummy",      "No Audio"   },
};

} // namespace

extern "C" const char *nocturne_audio_backend_name(void) {
    // A name query has no business bringing up a subsystem, and by the time the
    // Options screen asks, the sound device has long since opened one. Before
    // that there is no honest answer, so say which layer will be doing it.
    if (!SDL_WasInit(SDL_INIT_AUDIO)) return "SDL Audio";

    const char *driver = SDL_GetCurrentAudioDriver();
    if (!driver || !*driver) return "SDL Audio";

    for (size_t i = 0; i < sizeof(kBackendNames) / sizeof(kBackendNames[0]); ++i) {
        if (std::strcmp(driver, kBackendNames[i].sdl_id) == 0) {
            return kBackendNames[i].display;
        }
    }
    return driver;
}
