#include "core/menu/soundoptionspage.h"

#include "core/menu/menu.h"
#include "core/sound/sound.h"
#include "shape/edittool/picklist.h"
#include "sound/sndmain/sfxoptions.h"
#include "sound/sndmain/sndmain.h"
#include "sound/sndmain/sounddeviceinfo.h"
#include "support/newmsg/newmsg.h"

#include <cmath>
#include <cstdint>
#include <format>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

enum class ESoundLine : std::uint8_t {
    Mute,
    Effects,
    Dialog,
    Music,
    Movie,
    Rate,
    Quality,
    Type,
    Device,
};

// A level steps in fifths of its line's full scale.
constexpr float kVolumeStep = 0.2F;
constexpr float kNearSilent = 0.01F;
constexpr float kNearFull = 0.99F;
constexpr float kPastFull = 1.01F;
constexpr float kPercent = 100.0F;
// So a level a hair under a whole percent shows as it.
constexpr float kPercentRounding = 0.001F;
// The rates the line offers; the lowest is the original's 11050, not 11025.
constexpr int kRateLow = 11050;
constexpr int kRateMid = 22050;
constexpr int kRateHigh = 44100;
constexpr int kHighBitDepth = 16;
constexpr int kLowBitDepth = 8;
constexpr int kStereo = 2;
constexpr int kMono = 1;
constexpr std::string_view kEffectsSample = "colt45-0.wav";

int getNextRate(int rate, EMenuStep step) {
    if (step == EMenuStep::Back) {
        if (rate == kRateMid) {
            return kRateLow;
        }
        return rate == kRateHigh ? kRateMid : kRateHigh;
    }
    if (rate < kRateMid) {
        return kRateMid;
    }
    return rate < kRateHigh ? kRateHigh : kRateLow;
}

void addLine(std::vector<SMenuLine> &lines, ESoundLine line, std::string text) {
    lines.push_back({.id = std::to_underlying(line), .text = std::move(text)});
}

} // namespace

constexpr CSoundOptionsPage::SChannel CSoundOptionsPage::kEffects{.index = CSound::kEffectsChannel,
                                                                  .scale = 0.25F,
                                                                  .on_label = "Sound effects : ",
                                                                  .off_label =
                                                                      "Sound effects : Off"};
constexpr CSoundOptionsPage::SChannel CSoundOptionsPage::kDialog{.index = CSound::kDialogChannel,
                                                                 .scale = 1.0F,
                                                                 .on_label = "Dialog : ",
                                                                 .off_label = "Dialog : Off"};
constexpr CSoundOptionsPage::SChannel CSoundOptionsPage::kMusic{.index = CSound::kMusicChannel,
                                                                .scale = 0.25F,
                                                                .on_label = "Music Vol : ",
                                                                .off_label = "Music Vol : Off"};

CSoundOptionsPage::CSoundOptionsPage(CMenu &menu, const SMenuOwners &owners)
    : CMenuPage(menu), owners_(owners) {}

std::optional<std::string> CSoundOptionsPage::title() {
    return localize("Sound Options");
}

// The Movie Vol line is the enhanced game's. The original also checked the current device against
// the count, which selectSoundDevice keeps it under.
void CSoundOptionsPage::build(std::vector<SMenuLine> &lines) {
    const sound::CSndMain &sound_main = owners_.sound_main;
    addLine(lines, ESoundLine::Mute,
            localize("Sound : ") + localize(sound_main.isSoundMuted() ? "Muted" : "On"));
    addLine(lines, ESoundLine::Effects, getChannelText(kEffects));
    addLine(lines, ESoundLine::Dialog, getChannelText(kDialog));
    addLine(lines, ESoundLine::Music, getChannelText(kMusic));
    addLine(lines, ESoundLine::Movie, getMovieText());
    addLine(lines, ESoundLine::Rate,
            std::format("{}{}{}", localize("Output rate : "), sound_main.getAudioSampleRate(),
                        localize("hz")));
    addLine(lines, ESoundLine::Quality,
            std::format("{}{}{}", localize("Output quality : "), sound_main.getAudioBitDepth(),
                        localize("bit")));
    addLine(lines, ESoundLine::Type,
            localize(sound_main.getAudioChannelCount() == kStereo ? "Output type : STEREO"
                                                                  : "Output type : MONO"));
    const int device = sound_main.getCurrentSoundDevice();
    std::string device_name;
    if (device >= 0) {
        device_name = owners_.sound_main.getSoundDeviceInfo(device).device_name;
    }
    addLine(lines, ESoundLine::Device, localize("Device : ") + device_name);
}

void CSoundOptionsPage::decorate() {
    getMenu().drawAudioSpectrum();
}

// The original also kept a card with 3D sound at 16-bit stereo 44100, leaving the output alone
// when that held the format, and listed its Hardware mixing line; there is no hardware mixing.
EMenuOutcome CSoundOptionsPage::choose(int id, EMenuStep step) {
    sound::CSndMain &sound_main = owners_.sound_main;
    switch (static_cast<ESoundLine>(id)) {
    case ESoundLine::Mute:
        sound_main.setSoundMuted(!sound_main.isSoundMuted());
        if (!sound_main.isSoundMuted()) {
            owners_.sound.configure();
        }
        break;
    case ESoundLine::Effects:
        stepChannel(kEffects, step);
        playEffectsSample();
        break;
    case ESoundLine::Dialog:
        stepChannel(kDialog, step);
        break;
    case ESoundLine::Music:
        stepChannel(kMusic, step);
        break;
    case ESoundLine::Movie:
        stepMovieVolume(step);
        break;
    case ESoundLine::Rate:
        stepSampleRate(step);
        break;
    case ESoundLine::Quality:
        toggleBitDepth();
        break;
    case ESoundLine::Type:
        toggleChannelCount();
        break;
    default:
        pickDevice();
        break;
    }
    return EMenuOutcome::Stay;
}

std::string CSoundOptionsPage::localize(std::string_view key) const {
    return std::string(owners_.messages.getLocalizedString(key));
}

std::string CSoundOptionsPage::getChannelText(const SChannel &channel) const {
    const sound::CSndMain &sound_main = owners_.sound_main;
    if (!sound_main.isSfxChannelEnabled(channel.index)) {
        return localize(channel.off_label);
    }
    const float level = sound_main.getSfxChannelVol(channel.index);
    return std::format("{}{}{}", localize(channel.on_label),
                       std::lround((level * kPercent / channel.scale) + kPercentRounding),
                       localize("%."));
}

// Off is a level of nothing, as a channel's line shows a channel switched off.
std::string CSoundOptionsPage::getMovieText() const {
    const float level = owners_.sound_main.getMovieVolume();
    if (level <= 0.0F) {
        return localize("Movie Vol : Off");
    }
    return std::format("{}{}{}", localize("Movie Vol : "), std::lround(level * kPercent),
                       localize("%."));
}

// The music has to be started again to be heard once its channel is back on.
void CSoundOptionsPage::stepChannel(const SChannel &channel, EMenuStep step) {
    sound::CSndMain &sound_main = owners_.sound_main;
    float level = sound_main.getSfxChannelVol(channel.index) / channel.scale;
    if (!sound_main.isSfxChannelEnabled(channel.index)) {
        sound_main.enableSfxChannel(channel.index, true);
        if (channel.index == CSound::kMusicChannel) {
            owners_.sound.configure();
        }
        level = step == EMenuStep::Back ? 1.0F : kVolumeStep;
    } else if (step == EMenuStep::Back) {
        level -= kVolumeStep;
        if (level < kNearSilent) {
            level = 0.0F;
            sound_main.enableSfxChannel(channel.index, false);
        }
    } else {
        level += kVolumeStep;
        if (level > kPastFull) {
            level = 0.0F;
            sound_main.enableSfxChannel(channel.index, false);
        } else if (level > kNearFull) {
            level = 1.0F;
        }
    }
    sound_main.setSfxChannelVol(channel.index, level * channel.scale);
}

// The same fifths, with no channel to switch off.
void CSoundOptionsPage::stepMovieVolume(EMenuStep step) {
    sound::CSndMain &sound_main = owners_.sound_main;
    float level = sound_main.getMovieVolume();
    if (step == EMenuStep::Back) {
        if (level <= 0.0F) {
            level = 1.0F;
        } else if (level - kVolumeStep < kNearSilent) {
            level = 0.0F;
        } else {
            level -= kVolumeStep;
        }
    } else if (level + kVolumeStep > kPastFull) {
        level = 0.0F;
    } else {
        level += kVolumeStep;
        if (level > kNearFull) {
            level = 1.0F;
        }
    }
    sound_main.setMovieVolume(level);
}

// The device is let go before its format changes; configure opens it again.
void CSoundOptionsPage::stepSampleRate(EMenuStep step) {
    sound::CSndMain &sound_main = owners_.sound_main;
    const int rate = getNextRate(sound_main.getAudioSampleRate(), step);
    sound_main.resetSoundDevice();
    sound_main.setAudioSampleRate(rate);
    owners_.sound.configure();
}

void CSoundOptionsPage::toggleBitDepth() {
    sound::CSndMain &sound_main = owners_.sound_main;
    sound_main.resetSoundDevice();
    sound_main.setAudioBitDepth(sound_main.getAudioBitDepth() == kHighBitDepth ? kLowBitDepth
                                                                               : kHighBitDepth);
    owners_.sound.configure();
}

void CSoundOptionsPage::toggleChannelCount() {
    sound::CSndMain &sound_main = owners_.sound_main;
    sound_main.resetSoundDevice();
    sound_main.setAudioChannelCount(sound_main.getAudioChannelCount() == kMono ? kStereo : kMono);
    owners_.sound.configure();
}

void CSoundOptionsPage::pickDevice() {
    sound::CSndMain &sound_main = owners_.sound_main;
    shape::CPickList list(owners_.pick_list);
    for (int device = 0; device < sound_main.getSoundDeviceCount(); ++device) {
        list.add(sound_main.getSoundDeviceInfo(device).device_name);
    }
    const int chosen = list.displayChoicesAndWaitForInput("Select sound device",
                                                          sound_main.getCurrentSoundDevice());
    if (chosen < 0) {
        return;
    }
    sound_main.closeSoundDevice();
    sound_main.selectSoundDevice(chosen);
    sound_main.initializeSoundDevice();
    owners_.sound.configure();
}

// A shot at the new level.
void CSoundOptionsPage::playEffectsSample() {
    sound::CSndMain &sound_main = owners_.sound_main;
    sound_main.pushSfxOptions();
    sound_main.setNextSfxFlags(sound::kSfxNonPositional);
    static_cast<void>(sound_main.startSfx(kEffectsSample));
    sound_main.popSfxOptions();
}

} // namespace nocturne::core
