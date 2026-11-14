// =============================================================================
// THE PAUSE MENU HOLDS THE SOUND WHERE IT IS — implementation
// =============================================================================

#include "game/pause_sound.h"

#include "directx/sound_hold.h"
#include "nocturne.h"

#include <cstring>
#include <vector>

namespace {

const int kSlots = sizeof(g_SfxSlots) / sizeof(g_SfxSlots[0]);
const int kVoices =
    sizeof(g_DirectSoundHardwareSfxBuffers) / sizeof(g_DirectSoundHardwareSfxBuffers[0]);

// The music CSound::configure plays: on the music channel, and its 22kHz copy
// below 30001Hz.
const int kMusicChannel = 1;
const uint kMusicFlags = 1;
const int kHighRate = 0x7531;

// A slot's handle: its serial over its index.
const int kSlotBits = 6;

// A free slot passed over while a held sound goes back into its own.
const int kPassedOver = -1;

// A held sound, as written down when the menu opened.
struct HeldSound {
    int slot;
    int serial;
    char name[sizeof(CSampleInfo::name)];
    CSfxOptions options; // its position in frames
    float fade_target_volume;
    float fade_time_remaining;
    float stop_after_fade;
};

bool s_held = false;
// The serial each held slot's sound had, or 0: a sound the menu starts in a
// slot the hold lost is not held.
int s_held_serial[kSlots];
std::vector<HeldSound> s_sounds;

bool active(const CSfxSlot &slot) {
    return slot.playback_state != 0 && slot.sample != nullptr;
}

// Slot `index` still has the sound the hold wrote down.
bool still_held(int index) {
    return s_held_serial[index] != 0 && g_SfxSlots[index].playback_state == s_held_serial[index];
}

// A kill clears the slot's serial with its sample.
bool alive(const HeldSound &sound) {
    return still_held(sound.slot);
}

void hold_voice(int index, int held) {
    const int voice = g_SfxSlots[index].hardware_buffer_handle;
    if (voice > 0 && voice < kVoices && g_DirectSoundHardwareSfxBuffers[voice] != nullptr) {
        nocturne_audio_hold_voice(g_DirectSoundHardwareSfxBuffers[voice], held);
    }
}

// Every held slot that is still its sound let go; the hold over.
void let_go() {
    for (const HeldSound &sound : s_sounds) {
        if (alive(sound)) {
            hold_voice(sound.slot, 0);
        }
    }
    memset(s_held_serial, 0, sizeof(s_held_serial));
    s_held = false;
}

// A lost sound started again where it was held: in its own slot, every free
// slot before it passed over for the while, and under its own serial.
void restore(const HeldSound &sound) {
    std::vector<int> passed_over;
    for (int i = 0; i < sound.slot; i++) {
        if (g_SfxSlots[i].playback_state == 0) {
            g_SfxSlots[i].playback_state = kPassedOver;
            passed_over.push_back(i);
        }
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    memcpy(&g_SfxOptions[g_SfxLastSlot], &sound.options, sizeof(CSfxOptions));
    char name[sizeof(sound.name)];
    memcpy(name, sound.name, sizeof(name));
    const uint handle = sound_sndmain_cpp_startSfx_FUN_005a8e90(name);
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    for (int i : passed_over) {
        g_SfxSlots[i].playback_state = 0;
    }
    // Not started (its channel is off, or the sound is), or somewhere the
    // game's handle would not find it: then it is a new sound and stays one.
    if (handle == 0 || (int)(handle & ((1u << kSlotBits) - 1)) != sound.slot) {
        return;
    }
    CSfxSlot &slot = g_SfxSlots[sound.slot];
    slot.playback_state = sound.serial;
    slot.fade_target_volume = sound.fade_target_volume;
    slot.fade_time_remaining = sound.fade_time_remaining;
    slot.stop_after_fade = sound.stop_after_fade;
}

// What the menu opening did as shipped, now that something needs it.
void shut_down(CSound *sound) {
    if (!s_held) {
        return;
    }
    let_go();
    s_sounds.clear();
    core_sound_cpp_CSound_shutdown_FUN_005b2f70(sound);
}

} // namespace

extern "C" void nocturne_pause_sound_hold(CSound *sound) {
    (void)sound;
    s_sounds.clear();
    sound_sndmain_cpp_lockSound_FUN_005abd30();
    for (int i = 0; i < kSlots; i++) {
        const CSfxSlot &slot = g_SfxSlots[i];
        if (!active(slot)) {
            continue;
        }
        s_held_serial[i] = slot.playback_state;
        hold_voice(i, 1);
        HeldSound held;
        held.slot = i;
        held.serial = slot.playback_state;
        memcpy(held.name, slot.sample->sample_info.name, sizeof(held.name));
        held.name[sizeof(held.name) - 1] = '\0';
        held.options = slot.options;
        held.fade_target_volume = slot.fade_target_volume;
        held.fade_time_remaining = slot.fade_time_remaining;
        held.stop_after_fade = slot.stop_after_fade;
        s_sounds.push_back(held);
    }
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
    // Where each stands, now that none can move: a hardware voice's from its
    // cursor.
    for (HeldSound &held : s_sounds) {
        const uint handle = ((uint)held.serial << kSlotBits) | (uint)held.slot;
        const double position = sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(handle, 0);
        if (position >= 0.0) {
            held.options.playback_position = position;
            held.options.playback_position_type = 0;
        }
    }
    s_held = true;
}

extern "C" void nocturne_pause_sound_choice(CSound *sound, int choice) {
    if (choice == 2 || choice > 3) {
        shut_down(sound);
    }
}

extern "C" int nocturne_pause_sound_held(void) {
    return (int)s_held;
}

extern "C" int nocturne_pause_sound_slot_held(const CSfxSlot *slot) {
    return (int)(s_held && still_held((int)(slot - g_SfxSlots)));
}

extern "C" void nocturne_pause_sound_menu_music(void) {
    if (sound_sndmain_cpp_isSoundMuted_FUN_005a96b0() != 0) {
        return;
    }
    sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxChannel_FUN_005a8af0(kMusicChannel);
    sound_sndmain_cpp_setNextSfxFlagBits_FUN_005a8b90(kMusicFlags);
    if (sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260() < kHighRate) {
        sound_sndmain_cpp_startSfx_FUN_005a8e90((char *)"splash-music-22.wav");
    } else {
        sound_sndmain_cpp_startSfx_FUN_005a8e90((char *)"splash-music-44.wav");
    }
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
}

extern "C" void nocturne_pause_sound_quiet(void) {
    sound_sndmain_cpp_lockSound_FUN_005abd30();
    for (int i = 0; i < kSlots; i++) {
        if (active(g_SfxSlots[i]) && !still_held(i)) {
            sound_sndmain_cpp_CSfxSlot_kill_FUN_005a7e60(&g_SfxSlots[i]);
        }
    }
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
}

extern "C" void nocturne_pause_sound_resume(CGame *game, CSound *sound) {
    if (game->cinematic_skip_in_progress != 0) {
        shut_down(sound);
        return;
    }
    if (!s_held) {
        core_sound_cpp_CSound_init_FUN_005b2dd0(sound);
        return;
    }
    sound_sndmain_cpp_lockSound_FUN_005abd30();
    nocturne_pause_sound_quiet();
    std::vector<const HeldSound *> lost;
    for (const HeldSound &held : s_sounds) {
        if (!alive(held)) {
            lost.push_back(&held);
        }
    }
    let_go();
    for (const HeldSound *held : lost) {
        restore(*held);
    }
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
    s_sounds.clear();
}
