#include "core/sound/sound.h"

#include "sound/sndmain/sndmain.h"

namespace nocturne::core {
namespace {

// The channels whose volume and switch the INI keeps.
constexpr int kSoundChannelCount = 3;

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

const shape::CStrList &CSound::getSoundFileList() const {
    return sound_file_list_;
}

} // namespace nocturne::core
