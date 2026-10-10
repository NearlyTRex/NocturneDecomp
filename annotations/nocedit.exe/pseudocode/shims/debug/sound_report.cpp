// =============================================================================
// SOUND ERROR REPORTS — implementation
// =============================================================================

#include "debug/sound_report.h"
#include "core/ascii_case.h"
#include "shim_config.h"

#include "nocturne.h"

#if !NOCTURNE_AUTHENTIC_SOUND_ERROR_LOG

namespace {

#define SFX_SLOT_COUNT   ((int)(sizeof(g_SfxSlots) / sizeof(g_SfxSlots[0])))
#define SFX_SAMPLE_COUNT ((int)(sizeof(g_SfxSamples) / sizeof(g_SfxSamples[0])))
// Index 0 of the buffer table is unused; handles run 1..30.
#define HW_SFX_BUFFER_COUNT \
    ((int)(sizeof(g_DirectSoundHardwareSfxBuffers) / sizeof(g_DirectSoundHardwareSfxBuffers[0])))

const char *sample_name_for_buffer(int sample_buffer_id)
{
    for (int i = 0; i < SFX_SAMPLE_COUNT; i++) {
        if (g_SfxSamples[i].buffer_id == sample_buffer_id &&
            g_SfxSamples[i].sample_info.name[0] != '\0') {
            return g_SfxSamples[i].sample_info.name;
        }
    }
    return "?";
}

const char *holder_of_buffer(int handle)
{
    for (int i = 0; i < SFX_SLOT_COUNT; i++) {
        if (g_SfxSlots[i].playback_state != 0 &&
            g_SfxSlots[i].hardware_buffer_handle == handle &&
            g_SfxSlots[i].sample != (CSfxSample *)0) {
            return g_SfxSlots[i].sample->sample_info.name;
        }
    }
    return "(no slot)";
}

} // namespace

extern "C" void nocturne_sound_report_no_free_buffers(int sample_buffer_id)
{
    const char *names[HW_SFX_BUFFER_COUNT];
    int         counts[HW_SFX_BUFFER_COUNT];
    int         distinct = 0;

    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"DirectSoundDevice::allocateSfx - no free buffers for %s\n",
               sample_name_for_buffer(sample_buffer_id));

    for (int h = 1; h < HW_SFX_BUFFER_COUNT; h++) {
        if (g_DirectSoundHardwareSfxBuffers[h] == (IDirectSoundBuffer *)0) {
            continue;
        }
        const char *name = holder_of_buffer(h);
        int j = 0;
        while (j < distinct && !nocturne_ascii_iequals(names[j], name)) {
            j++;
        }
        if (j == distinct) {
            names[distinct]  = name;
            counts[distinct] = 0;
            distinct++;
        }
        counts[j]++;
    }
    for (int j = 0; j < distinct; j++) {
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"  %2d x %s\n",counts[j],names[j]);
    }
}

#else

extern "C" void nocturne_sound_report_no_free_buffers(int sample_buffer_id)
{
    (void)sample_buffer_id;
}

#endif // !NOCTURNE_AUTHENTIC_SOUND_ERROR_LOG
