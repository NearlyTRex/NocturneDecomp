// =============================================================================
// PAUSE SOUND SUPPORT — see pause_sound_support.h
// =============================================================================

#include "pause_sound_support.h"

#include "directx/sound_hold.h"
#include "nocturne.h"

#include <cstdint>
#include <cstdio>
#include <cstring>

CSfxSlot g_SfxSlots[64];
CSfxOptions g_SfxOptions[8];
int g_SfxLastSlot = 0;
IDirectSoundBuffer *g_DirectSoundHardwareSfxBuffers[31];

namespace pause_sound_support {

std::vector<std::string> calls;
int muted = 0;
int rate = 22050;
bool start_fails = false;
int start_elsewhere = -1;
double position = 0.0;
int lock_depth = 0;
int next_serial = 100;

namespace {

CSfxSample s_samples[64];

void log(const std::string &call) {
    calls.push_back(call);
}

// Voice `index` is this stand-in, never looked inside.
IDirectSoundBuffer *voice_at(int index) {
    return (IDirectSoundBuffer *)(uintptr_t)(0x1000 + index * 0x10);
}

void name_sample(int index, const char *name) {
    snprintf(s_samples[index].sample_info.name, sizeof(s_samples[index].sample_info.name), "%s",
             name);
    g_SfxSlots[index].sample = &s_samples[index];
}

} // namespace

void reset() {
    calls.clear();
    muted = 0;
    rate = 22050;
    start_fails = false;
    start_elsewhere = -1;
    position = 0.0;
    lock_depth = 0;
    next_serial = 100;
    memset(g_SfxSlots, 0, sizeof(g_SfxSlots));
    memset(g_SfxOptions, 0, sizeof(g_SfxOptions));
    memset(s_samples, 0, sizeof(s_samples));
    g_SfxLastSlot = 0;
    for (int i = 0; i < 31; i++) {
        g_DirectSoundHardwareSfxBuffers[i] = nullptr;
    }
}

CSfxSlot &play(int index, int serial, const char *name, int voice) {
    CSfxSlot &slot = g_SfxSlots[index];
    slot.playback_state = serial;
    name_sample(index, name);
    slot.hardware_buffer_handle = voice;
    if (voice != 0) {
        g_DirectSoundHardwareSfxBuffers[voice] = voice_at(voice);
    }
    return slot;
}

} // namespace pause_sound_support

using namespace pause_sound_support;

void __cdecl core_sound_cpp_CSound_shutdown_FUN_005b2f70(CSound *) {
    log("shutdown");
}

void __cdecl core_sound_cpp_CSound_init_FUN_005b2dd0(CSound *) {
    log("init");
}

void __cdecl sound_sndmain_cpp_lockSound_FUN_005abd30(void) {
    lock_depth++;
}

void __cdecl sound_sndmain_cpp_unlockSound_FUN_005abdc0(void) {
    lock_depth--;
}

void __cdecl sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot *this_ptr) {
    log("kill " + std::to_string(this_ptr - g_SfxSlots));
    this_ptr->playback_state = 0;
    this_ptr->sample = nullptr;
}

double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(uint, uint) {
    return position;
}

void __cdecl sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30(void) {
    g_SfxLastSlot++;
    g_SfxOptions[g_SfxLastSlot] = g_SfxOptions[g_SfxLastSlot - 1];
}

void __cdecl sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0(void) {
    g_SfxLastSlot--;
}

void __cdecl sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(int channel_index) {
    g_SfxOptions[g_SfxLastSlot].channel_index = channel_index;
}

void __cdecl sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(uint flag_mask) {
    g_SfxOptions[g_SfxLastSlot].flags |= flag_mask;
}

int __cdecl sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260(void) {
    return rate;
}

int __cdecl sound_sndmain_cpp_isSoundMuted_FUN_005a96b0(void) {
    return muted;
}

int __cdecl sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0(void) {
    log("enable");
    return 1;
}

uint __cdecl sound_sndmain_cpp_startSfx_FUN_005a8e90(char *filename) {
    const CSfxOptions &options = g_SfxOptions[g_SfxLastSlot];
    log(std::string("start ") + filename + " at " + std::to_string((int)options.playback_position) +
        " ch " + std::to_string(options.channel_index) + " flags " + std::to_string(options.flags));
    if (start_fails) {
        return 0;
    }
    int index = start_elsewhere;
    for (int i = 0; index < 0 && i < 64; i++) {
        if (g_SfxSlots[i].playback_state == 0) {
            index = i;
        }
    }
    CSfxSlot &slot = g_SfxSlots[index];
    slot.options = options;
    slot.playback_state = next_serial++;
    snprintf(s_samples[index].sample_info.name, sizeof(s_samples[index].sample_info.name), "%s",
             filename);
    slot.sample = &s_samples[index];
    return ((uint)slot.playback_state << 6) | (uint)index;
}

extern "C" void nocturne_audio_hold_voice(void *voice, int held) {
    int index = 0;
    while ((void *)g_DirectSoundHardwareSfxBuffers[index] != voice) {
        index++;
    }
    log("voice " + std::to_string(index) + " held " + std::to_string(held));
}
