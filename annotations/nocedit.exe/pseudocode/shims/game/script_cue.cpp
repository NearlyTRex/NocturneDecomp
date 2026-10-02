// =============================================================================
// SCRIPT MUSIC CUES THAT RESTART EVERY PASS — implementation
// =============================================================================

#include "game/script_cue.h"
#include "core/ascii_case.h"
#include "shim_config.h"

#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_CUE_RETRIGGER

namespace {

// Distinct cue strings live at once. A full table overwrites round-robin; the
// worst a lost entry does is let that cue stack once more.
#define SCRIPT_CUE_COUNT    16
// playSfx's own sound-name buffer is this wide.
#define SCRIPT_CUE_NAME_LEN 200

struct ScriptCue {
    char         name[SCRIPT_CUE_NAME_LEN];
    unsigned int handle;
};

ScriptCue g_ScriptCues[SCRIPT_CUE_COUNT];
int       g_ScriptCueNext;

ScriptCue *find_cue(const char *cue_name)
{
    for (int i = 0; i < SCRIPT_CUE_COUNT; i++) {
        if (g_ScriptCues[i].name[0] != '\0' &&
            nocturne_ascii_iequals(g_ScriptCues[i].name, cue_name)) {
            return &g_ScriptCues[i];
        }
    }
    return (ScriptCue *)0;
}

} // namespace

extern "C" unsigned int nocturne_script_cue_playing(const char *cue_name)
{
    ScriptCue *cue;

    if (cue_name == (const char *)0 || *cue_name == '\0') {
        return 0;
    }
    cue = find_cue(cue_name);
    if (cue == (ScriptCue *)0 ||
        sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(cue->handle) == 0) {
        return 0;
    }
    return cue->handle;
}

extern "C" void nocturne_script_cue_started(const char *cue_name, unsigned int handle)
{
    ScriptCue *cue;

    if (cue_name == (const char *)0 || *cue_name == '\0' || handle == 0) {
        return;
    }
    cue = find_cue(cue_name);
    if (cue == (ScriptCue *)0) {
        cue = &g_ScriptCues[g_ScriptCueNext];
        g_ScriptCueNext = (g_ScriptCueNext + 1) % SCRIPT_CUE_COUNT;
        strncpy(cue->name, cue_name, SCRIPT_CUE_NAME_LEN - 1);
        cue->name[SCRIPT_CUE_NAME_LEN - 1] = '\0';
    }
    cue->handle = handle;
}

#else

extern "C" unsigned int nocturne_script_cue_playing(const char *cue_name) { (void)cue_name; return 0; }
extern "C" void nocturne_script_cue_started(const char *cue_name, unsigned int handle)
{
    (void)cue_name; (void)handle;
}

#endif // !NOCTURNE_AUTHENTIC_CUE_RETRIGGER
