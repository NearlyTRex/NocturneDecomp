#include "core/sound/sound.h"

#include "sound/sndmain/sfxoptions.h"
#include "sound/sndmain/sndmain.h"

#include <string_view>

namespace nocturne::core {
namespace {

// The channels whose volume and switch the INI keeps.
constexpr int kSoundChannelCount = 3;

// The loudest the menu lets each channel be.
constexpr float kMenuEffectsVolume = 0.25F;
constexpr float kMenuMusicVolume = 0.25F;
constexpr float kMenuDialogVolume = 1.0F;

// Above this the output takes the 44 kHz music.
constexpr int kLowestHighSampleRate = 30001;
constexpr std::string_view kLowRateMusic = "splash-music-22.wav";
constexpr std::string_view kHighRateMusic = "splash-music-44.wav";

void capChannelVolume(sound::CSndMain &sound_main, int channel_index, float volume) {
    if (sound_main.getSfxChannelVol(channel_index) > volume) {
        sound_main.setSfxChannelVol(channel_index, volume);
    }
}

} // namespace

// The original also set a tag word nothing read.
// nocedit 0x005b2ce0
CSound::CSound(sound::CSndMain &sound_main, engine::CPod &pod, platform::IFileSystem &file_system)
    : sound_main_(sound_main), pod_(pod), file_system_(file_system) {
    sound_main_.setNumberOfSfxChannels(kSoundChannelCount);
    sound_main_.resetSoundSystemDefaults();
}

// nocedit 0x005b2d60
CSound::~CSound() {
    sound_main_.shutdownSoundSystem();
}

// The original then set 16-bit stereo at 44.1 kHz for hardware 3D mixing, which the enhanced
// game doesn't have.
// nocedit 0x005b2d00
void CSound::findAllSoundFiles() {
    if (sound_file_list_.getItemCount() == 0) {
        sound_file_list_.populateFromFilesNoDuplicates(&pod_, file_system_, "sound", "*.wav");
        sound_file_list_.populateFromFilesNoDuplicates(&pod_, file_system_, "sound", "*.mp3");
    }
    sound_main_.initializeSoundDevice();
}

// nocedit 0x005b39a0
void CSound::reset() {
    sound_main_.resetSoundDevice();
    sound_main_.freeAllSamples();
}

// The original also pointed the listener's right at the origin, which only the DirectSound
// device read. The music plays without a position.
// deferred: giving the attract movies the splash music's length from getSoundDuration, a length
//   of 0 or less disarming them (the decomp's attract.h nocturne_attract_set_music_duration),
//   with the attract movies and CSound::getSoundDuration
// nocedit 0x005b3830
void CSound::configure() {
    capChannelVolume(sound_main_, kMusicChannel, kMenuMusicVolume);
    capChannelVolume(sound_main_, kEffectsChannel, kMenuEffectsVolume);
    capChannelVolume(sound_main_, kDialogChannel, kMenuDialogVolume);
    if (sound_main_.isSoundMuted()) {
        return;
    }
    reset();
    sound_main_.set3DListenerPos(0.0, 0.0, 0.0);
    sound_main_.set3DListenerOrient(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0);
    sound_main_.set3DListenerVelocity(0.0, 0.0, 0.0);
    sound_main_.enableSoundSystem();
    sound_main_.pushSfxOptions();
    sound_main_.setNextSfxChannel(kMusicChannel);
    sound_main_.setNextSfxFlagBits(sound::kSfxNonPositional);
    sound_main_.startSfx(sound_main_.getAudioSampleRate() < kLowestHighSampleRate ? kLowRateMusic
                                                                                  : kHighRateMusic);
    sound_main_.popSfxOptions();
}

const shape::CStrList &CSound::getSoundFileList() const {
    return sound_file_list_;
}

} // namespace nocturne::core
