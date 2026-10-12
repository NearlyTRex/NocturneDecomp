#include "core/sound/sound.h"

#include "sound/sndmain/sndmain.h"

namespace nocturne::core {
namespace {

// The channels whose volume and switch the INI keeps.
constexpr int kSoundChannelCount = 3;

} // namespace

// The original also set a tag word nothing read.
// nocedit 0x005b2ce0
CSound::CSound(sound::CSndMain &sound_main) : sound_main_(sound_main) {
    sound_main_.setNumberOfSfxChannels(kSoundChannelCount);
    sound_main_.resetSoundSystemDefaults();
}

// nocedit 0x005b2d60
CSound::~CSound() {
    sound_main_.shutdownSoundSystem();
}

} // namespace nocturne::core
