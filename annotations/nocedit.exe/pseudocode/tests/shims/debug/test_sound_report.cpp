// =============================================================================
// SOUND REPORT — what was in the way when a sound found no buffer free
// =============================================================================
//
// allocateSfx's "no free buffers" line names the sound that could not play,
// then each sound holding one of the hardware buffers, with how many: the
// same sound however its name is cased, and a buffer no playing slot claims
// as "(no slot)".

#include "debug/sound_report.h"
#include "debug_support.h"
#include "nocturne.h"
#include "nocturne_test.h"

#include <cstring>
#include <string>

namespace {

using debug_support::stand;

void name(CSfxSample &sample, const char *text) {
    strcpy(sample.sample_info.name, text);
}

// Slot `slot` playing `sample` on hardware buffer `handle`.
void playing(int slot, int handle, CSfxSample *sample) {
    g_SfxSlots[slot].playback_state = 1;
    g_SfxSlots[slot].hardware_buffer_handle = handle;
    g_SfxSlots[slot].sample = sample;
}

IDirectSoundBuffer *a_buffer() {
    static int marker = 0;
    return (IDirectSoundBuffer *)&marker;
}

} // namespace

NOCTURNE_TEST(the_report_names_the_sound_and_what_holds_each_buffer) {
    stand.reset();
    g_SfxSamples[0].buffer_id = 5; // no name: not this one
    g_SfxSamples[1].buffer_id = 5;
    name(g_SfxSamples[1], "door");
    name(g_SfxSamples[2], "rain");
    name(g_SfxSamples[3], "RAIN");
    for (int h = 1; h <= 3; ++h)
        g_DirectSoundHardwareSfxBuffers[h] = a_buffer();
    playing(0, 1, &g_SfxSamples[2]);
    playing(1, 2, &g_SfxSamples[3]);          // the same sound, cased otherwise
    g_SfxSlots[2].hardware_buffer_handle = 3; // stopped: claims nothing
    playing(3, 3, nullptr);                   // playing nothing: claims nothing
    g_SfxSlots[4].playback_state = 1;         // playing, on another buffer
    g_SfxSlots[4].hardware_buffer_handle = 9;

    nocturne_sound_report_no_free_buffers(5);
    CHECK_EQ((int)stand.console.size(), 3);
    CHECK_EQ(stand.console[0],
             std::string("DirectSoundDevice::allocateSfx - no free buffers for door\n"));
    CHECK_EQ(stand.console[1], std::string("   2 x rain\n"));
    CHECK_EQ(stand.console[2], std::string("   1 x (no slot)\n"));
}

// A sound no sample is loaded for is "?".
NOCTURNE_TEST(an_unknown_sound_is_a_question_mark) {
    stand.reset();
    nocturne_sound_report_no_free_buffers(77);
    CHECK_EQ(stand.console[0],
             std::string("DirectSoundDevice::allocateSfx - no free buffers for ?\n"));
}

NOCTURNE_TEST_MAIN()
