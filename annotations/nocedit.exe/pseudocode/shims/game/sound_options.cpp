// =============================================================================
// SOUND OPTIONS — implementation
// =============================================================================
//
// See sound_options.h, and NOCTURNE_AUTHENTIC_MENU in
// config/shim_config_authentic.h. configureSoundOptions' keep is the shipped
// screen this follows.

#include "game/sound_options.h"

#include "core/menu_page.h"
#include "nocturne.h"

#include <cmath>

#if !NOCTURNE_AUTHENTIC_MENU

namespace {

using nocturne_menu::Lines;
using nocturne_menu::Outcome;
using nocturne_menu::Page;
using nocturne_menu::STAY;
using nocturne_menu::STEP_BACK;

enum SoundLine {
    SOUND_MUTE,
    SOUND_EFFECTS,
    SOUND_DIALOG,
    SOUND_MUSIC,
    SOUND_MOVIE,
    SOUND_RATE,
    SOUND_QUALITY,
    SOUND_TYPE,
    SOUND_DEVICE,
    SOUND_MIXING
};

char *localized(const char *key) {
    return support_newmsg_cpp_getLocalizedString_FUN_005441f0((char *)key);
}

// --- the volume lines -------------------------------------------------------------

// A level a line steps through, in fifths of its full scale.
const float kVolumeStep = 0.2f;
const float kNearSilent = 0.01f;
const float kNearFull = 0.99f;
const float kPastFull = 1.01f;

// The three mixer channels a line sets, and the share of the mixer's range
// that line's 100% is.
struct Channel {
    int index;
    float scale;
    const char *on_label;
    const char *off_label;
};

const Channel kEffects = {0, 0.25f, "Sound effects : ", "Sound effects : Off"};
const Channel kDialog = {2, 1.0f, "Dialog : ", "Dialog : Off"};
const Channel kMusic = {1, 0.25f, "Music Vol : ", "Music Vol : Off"};

void add_channel(Lines &lines, int id, const Channel &channel) {
    if (sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(channel.index) == 0) {
        lines.add_localized(id, channel.off_label);
        return;
    }
    const float level = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(channel.index);
    lines.add(id, "%s%d%s", localized(channel.on_label),
              ROUND(level * 100.0f / channel.scale + 0.001f), localized("%."));
}

// Off is below the lowest step: back from it is full, on from it the lowest.
void step_channel(const Channel &channel, int step) {
    float level = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90(channel.index) / channel.scale;
    if (sound_sndmain_cpp_isSfxChannelEnabled_FUN_005a9ea0(channel.index) == 0) {
        sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(channel.index, 1);
        // The music has to be started again to be heard.
        if (channel.index == kMusic.index)
            core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
        level = step == STEP_BACK ? 1.0f : kVolumeStep;
    } else if (step == STEP_BACK) {
        level -= kVolumeStep;
        if (level < kNearSilent) {
            level = 0.0f;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(channel.index, 0);
        }
    } else {
        level += kVolumeStep;
        if (level > kPastFull) {
            level = 0.0f;
            sound_sndmain_cpp_enableSfxChannel_FUN_005a9e20(channel.index, 0);
        } else if (level > kNearFull) {
            level = 1.0f;
        }
    }
    sound_sndmain_cpp_setSfxChannelVol_FUN_005a9cf0(channel.index, level * channel.scale);
}

// A shot at the new level.
void play_effects_sample() {
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    sound_sndmain_cpp_setNextSfxFlags_FUN_005a8b70(1);
    sound_sndmain_cpp_startSfx_FUN_005a8e90((char *)"colt45-0.wav");
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
}

void add_movie(Lines &lines) {
    const float level = nocturne_movie_volume_get();
    if (level <= 0.0f)
        lines.add_localized(SOUND_MOVIE, "Movie Vol : Off");
    else
        lines.add(SOUND_MOVIE, "%s%d%s", localized("Movie Vol : "), (int)lroundf(level * 100.0f),
                  localized("%."));
}

// The same fifths, with no channel to switch off: Off is a level of 0.
void step_movie(int step) {
    float level = nocturne_movie_volume_get();
    if (step == STEP_BACK) {
        if (level <= 0.0f)
            level = 1.0f;
        else if (level - kVolumeStep < kNearSilent)
            level = 0.0f;
        else
            level -= kVolumeStep;
    } else if (level + kVolumeStep > kPastFull) {
        level = 0.0f;
    } else {
        level += kVolumeStep;
        if (level > kNearFull)
            level = 1.0f;
    }
    nocturne_movie_volume_set(level);
}

// --- the output lines ---------------------------------------------------------------

// The rates the line offers; the lowest is the shipped 11050, not 11025.
const int kRateLow = 11050;
const int kRateMid = 22050;
const int kRateHigh = 44100;

// What a card with 3D sound runs at, whatever is asked.
const int kHardwareBits = 16;
const int kHardwareChannels = 2;

int next_rate(int rate, int step) {
    if (step == STEP_BACK) {
        if (rate == kRateMid)
            return kRateLow;
        return rate == kRateHigh ? kRateMid : kRateHigh;
    }
    if (rate < kRateMid)
        return kRateMid;
    return rate < kRateHigh ? kRateHigh : kRateLow;
}

bool hardware_3d() {
    return sound_sndmain_cpp_hasHardware3DSound_FUN_005ab5a0() != 0;
}

// Let go of the device before its format changes; configure opens it again.
void restart_device() {
    sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
}

void step_rate(int step) {
    const int rate = sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260();
    const int wanted = hardware_3d() ? kRateHigh : next_rate(rate, step);
    if (wanted == rate)
        return;
    restart_device();
    sound_sndmain_cpp_setAudioSampleRate_FUN_005ab2c0(wanted);
    core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
}

// 16 bits and 8, which a card with 3D sound keeps at 16.
void toggle_bits() {
    const int bits = sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250();
    const int wanted = hardware_3d() ? kHardwareBits : (bits == 16 ? 8 : 16);
    if (wanted == bits)
        return;
    restart_device();
    sound_sndmain_cpp_setAudioBitDepth_FUN_005ab280(wanted);
    core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
}

// Mono and stereo, which a card with 3D sound keeps at stereo.
void toggle_channels() {
    const int channels = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
    const int wanted = hardware_3d() ? kHardwareChannels : (channels == 1 ? 2 : 1);
    if (wanted == channels)
        return;
    restart_device();
    sound_sndmain_cpp_setAudioChannelCount_FUN_005ab2a0(wanted);
    core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
}

void pick_device() {
    CPickList list;
    SSoundDeviceInfo info;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&list);
    for (int i = 0; i < sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(); i++) {
        sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(i, &info);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&list.base, info.device_name);
    }
    const int choice = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(
        &list, (char *)"Select sound device",
        sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0(), 0);
    if (choice >= 0) {
        sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
        sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(choice);
        sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
        if (hardware_3d())
            sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(kHardwareBits, kHardwareChannels,
                                                              kRateHigh);
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&list, 0);
}

// --- the spectrum ---------------------------------------------------------------------

// Bars 4 pixels apart, from 200Hz up to fifty times that, across each channel's
// share of the width less a twentieth either side.
const int kBarPitch = 4;
const double kLowestBand = 200.0;
const double kBandSpan = 50.0;
const int kCounterStep = 0x18;
const int kCounterWrap = 0x80000;

void draw_spectrum() {
    g_AudioVisualizationCounter += g_GlobalDeltaTimeInt * kCounterStep;
    if (g_AudioVisualizationCounter >= kCounterWrap)
        g_AudioVisualizationCounter -= kCounterWrap;
    if (sound_sndmain_cpp_isSoundBusy_FUN_005ab540() == 0)
        return;
    const int channels = sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270();
    if (channels <= 0)
        return;
    const int margin = g_WindowWidth / 20;
    const int per_channel = g_WindowWidth / channels;
    const int bars = (per_channel - margin * 2) / kBarPitch;
    const double ratio = pow(kBandSpan, 1.0 / bars);
    const int bottom = g_WindowHeight - 1;
    for (int channel = 0; channel < channels; channel++) {
        double band = kLowestBand;
        const int left = per_channel * channel + margin;
        for (int x = left; x < left + bars * kBarPitch; x += kBarPitch) {
            const double next = band * ratio;
            const float level = sound_sndmain_cpp_analyzeFrequencyBand_FUN_005ac400(
                channel, (float)band, (float)next);
            const int top = ROUND((float)g_WindowHeight - level * (float)g_WindowHeight * 0.25f);
            core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70(x, bottom, bottom - top + 1);
            band = next;
        }
    }
}

// --- the page ---------------------------------------------------------------------------

class SoundOptions : public Page {
public:
    const char *title() override {
        return localized("Sound Options");
    }

    void build(Lines &lines) override {
        lines.add(SOUND_MUTE, "%s%s", localized("Sound : "),
                  localized(sound_sndmain_cpp_isSoundMuted_FUN_005a96b0() == 0 ? "On" : "Muted"));
        add_channel(lines, SOUND_EFFECTS, kEffects);
        add_channel(lines, SOUND_DIALOG, kDialog);
        add_channel(lines, SOUND_MUSIC, kMusic);
        add_movie(lines);
        lines.add(SOUND_RATE, "%s%d%s", localized("Output rate : "),
                  sound_sndmain_cpp_getAudioSampleRate_FUN_005ab260(), localized("hz"));
        lines.add(SOUND_QUALITY, "%s%d%s", localized("Output quality : "),
                  sound_sndmain_cpp_getAudioBitDepth_FUN_005ab250(), localized("bit"));
        lines.add_localized(SOUND_TYPE, sound_sndmain_cpp_getAudioChannelCount_FUN_005ab270() == 2
                                            ? "Output type : STEREO"
                                            : "Output type : MONO");

        SSoundDeviceInfo device;
        device.has_hardware_mixing = 0;
        device.device_name[0] = '\0';
        const int current = sound_sndmain_cpp_getCurrentSoundDevice_FUN_005ab6c0();
        if (current >= 0 && current < sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0())
            sound_sndmain_cpp_getSoundDeviceInfo_FUN_005ab370(current, &device);
        lines.add(SOUND_DEVICE, "%s%s", localized("Device : "), device.device_name);
        if (device.has_hardware_mixing != 0)
            lines.add_localized(SOUND_MIXING,
                                sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590() != 0
                                    ? "Hardware mixing: On"
                                    : "Hardware mixing: Off");
    }

    void decorate() override {
        draw_spectrum();
    }

    Outcome choose(int id, int step) override {
        switch (id) {
        case SOUND_MUTE:
            sound_sndmain_cpp_setSoundMuted_FUN_005a96c0(
                (int)(sound_sndmain_cpp_isSoundMuted_FUN_005a96b0() == 0));
            if (sound_sndmain_cpp_isSoundMuted_FUN_005a96b0() == 0)
                core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
            break;
        case SOUND_EFFECTS:
            step_channel(kEffects, step);
            play_effects_sample();
            break;
        case SOUND_DIALOG:
            step_channel(kDialog, step);
            break;
        case SOUND_MUSIC:
            step_channel(kMusic, step);
            break;
        case SOUND_MOVIE:
            step_movie(step);
            break;
        case SOUND_RATE:
            step_rate(step);
            break;
        default:
            choose_output(id);
            break;
        }
        return STAY;
    }

private:
    // The lines below the rate, none of which steps either way.
    static void choose_output(int id) {
        switch (id) {
        case SOUND_QUALITY:
            toggle_bits();
            break;
        case SOUND_TYPE:
            toggle_channels();
            break;
        case SOUND_DEVICE:
            pick_device();
            break;
        default: // SOUND_MIXING
            sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
            sound_sndmain_cpp_enableHwSoundMixing_FUN_005ab550(
                (int)(sound_sndmain_cpp_isHardwareMixingEnabled_FUN_005ab590() == 0));
            sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0();
            core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
            break;
        }
    }
};

} // namespace

extern "C" void nocturne_sound_options_menu(void) {
    core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
    SoundOptions page;
    nocturne_menu::run(page);
}

#endif // !NOCTURNE_AUTHENTIC_MENU
