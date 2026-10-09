#include "sound/sndmain/sndmain.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(SoundSndmainFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(
        std::is_same_v<decltype(&setNextSfxStaticPosition), void (*)(double, double, double)>);
    static_assert(
        std::is_same_v<decltype(&setNextSfxTrackedFloatPosition), void (*)(common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&setNextSfxTrackedVelocity1), void (*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&setNextSfxVolume), void (*)(float)>);
    static_assert(std::is_same_v<decltype(&setNextSfxBaseFrequency), void (*)(float)>);
    static_assert(std::is_same_v<decltype(&setNextSfxUserData), void (*)(int, void *)>);
    static_assert(std::is_same_v<decltype(&setNextSfxChannel), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&setNextSfxDelay), void (*)(double)>);
    static_assert(std::is_same_v<decltype(&setNextSfxFlags), void (*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&setNextSfxFlagBits), void (*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&setNextSfxTriggerTime), void (*)(double, int)>);
    static_assert(std::is_same_v<decltype(&pushSfxOptions), void (*)()>);
    static_assert(std::is_same_v<decltype(&popSfxOptions), void (*)()>);
    static_assert(std::is_same_v<decltype(&startSfx), std::uint32_t (*)(char *)>);
    static_assert(std::is_same_v<decltype(&isSfxPlaying), int (*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&isSoundMuted), int (*)()>);
    static_assert(std::is_same_v<decltype(&setSoundMuted), int (*)(int)>);
    static_assert(
        std::is_same_v<decltype(&getSfxSampleInfo), int (*)(std::uint32_t, CSfxSample *)>);
    static_assert(std::is_same_v<decltype(&getSfxPlaybackPosition),
                                 double (*)(std::uint32_t, std::uint32_t)>);
    static_assert(
        std::is_same_v<decltype(&setSfxPosition), int (*)(std::uint32_t, double, double, double)>);
    static_assert(std::is_same_v<decltype(&setSfxTrackedFloatPosition),
                                 int (*)(std::uint32_t, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&setSfxTrackedFloatVelocity),
                                 int (*)(std::uint32_t, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&setSfxVolume), int (*)(std::uint32_t, float)>);
    static_assert(std::is_same_v<decltype(&setSfxBaseFrequency), int (*)(std::uint32_t, float)>);
    static_assert(std::is_same_v<decltype(&killSfx), int (*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&setSfxFade), int (*)(std::uint32_t, float, float, int)>);
    static_assert(std::is_same_v<decltype(&setSfxChannelVol), void (*)(int, float)>);
    static_assert(std::is_same_v<decltype(&getSfxChannelVol), float (*)(int)>);
    static_assert(std::is_same_v<decltype(&setNumberOfSfxChannels), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&enableSfxChannel), void (*)(int, int)>);
    static_assert(std::is_same_v<decltype(&isSfxChannelEnabled), int (*)(int)>);
    static_assert(std::is_same_v<decltype(&getFirstActiveSfx), std::uint32_t (*)()>);
    static_assert(std::is_same_v<decltype(&getNextActiveSfx), std::uint32_t (*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&countActiveSfx), int (*)()>);
    static_assert(std::is_same_v<decltype(&set3DListenerPos), void (*)(double, double, double)>);
    static_assert(std::is_same_v<decltype(&set3DListenerOrient),
                                 void (*)(double, double, double, double, double, double, double,
                                          double, double)>);
    static_assert(
        std::is_same_v<decltype(&set3DListenerVelocity), void (*)(double, double, double)>);
    static_assert(
        std::is_same_v<decltype(&isWithinListenerRadius), int (*)(double, double, double, double)>);
    static_assert(std::is_same_v<decltype(&getSampleInfo), int (*)(CSfxSample *)>);
    static_assert(std::is_same_v<decltype(&freeAllSamples), void (*)()>);
    static_assert(std::is_same_v<decltype(&getSoundMemoryStats),
                                 void (*)(int *, int *, int *, int *, int *, int *)>);
    static_assert(std::is_same_v<decltype(&resetSoundSystemDefaults), void (*)()>);
    static_assert(std::is_same_v<decltype(&shutdownSoundSystem), void (*)()>);
    static_assert(std::is_same_v<decltype(&enableSoundSystem), int (*)()>);
    static_assert(std::is_same_v<decltype(&resetSoundDevice), int (*)()>);
    static_assert(std::is_same_v<decltype(&setSoundOutputMode), int (*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&getAudioBitDepth), int (*)()>);
    static_assert(std::is_same_v<decltype(&getAudioSampleRate), int (*)()>);
    static_assert(std::is_same_v<decltype(&getAudioChannelCount), int (*)()>);
    static_assert(std::is_same_v<decltype(&setAudioBitDepth), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&setAudioChannelCount), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&setAudioSampleRate), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&getSoundDeviceCount), int (*)()>);
    static_assert(std::is_same_v<decltype(&getSoundDeviceInfo), void (*)(int, SSoundDeviceInfo *)>);
    static_assert(std::is_same_v<decltype(&selectSoundDevice), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&isSoundBusy), int (*)()>);
    static_assert(std::is_same_v<decltype(&enableHwSoundMixing), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&isHardwareMixingEnabled), int (*)()>);
    static_assert(std::is_same_v<decltype(&hasHardware3DSound), std::uint32_t (*)()>);
    static_assert(std::is_same_v<decltype(&initializeSoundDevice), int (*)()>);
    static_assert(std::is_same_v<decltype(&closeSoundDevice), int (*)()>);
    static_assert(std::is_same_v<decltype(&getCurrentSoundDevice), int (*)()>);
    static_assert(
        std::is_same_v<decltype(&set3DListenerOrientRight), void (*)(float, float, float)>);
    static_assert(std::is_same_v<decltype(&audioThreadProc), std::uint32_t (*)(void *)>);
    static_assert(std::is_same_v<decltype(&lockSound), void (*)()>);
    static_assert(std::is_same_v<decltype(&unlockSound), void (*)()>);
    static_assert(std::is_same_v<decltype(&processAudio), void (*)()>);
    static_assert(std::is_same_v<decltype(&readIni), void (*)(engine::CIniFile *)>);
    static_assert(std::is_same_v<decltype(&writeIni), void (*)(engine::CIniFile *)>);
    static_assert(std::is_same_v<decltype(&analyzeFrequencyBand), float (*)(int, float, float)>);
}

} // namespace
} // namespace nocturne::sound
