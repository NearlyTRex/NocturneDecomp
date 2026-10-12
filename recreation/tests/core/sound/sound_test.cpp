#include "core/sound/sound.h"
#include "tests/mocks/sound/sndmainfixture.h"
#include "tests/mocks/sound/wavfile.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CSound, IsNeitherCopiedNorMoved) {
    static_assert(!std::is_copy_constructible_v<CSound>);
    static_assert(!std::is_move_constructible_v<CSound>);
    static_assert(std::is_constructible_v<CSound, sound::CSndMain &>);
}

TEST(CSound, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CSound::findRandomSoundFile), void (CSound::*)(char *, char *)>);
    static_assert(std::is_same_v<decltype(&CSound::findAllSoundFiles), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::init), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::shutdown), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::process), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::configure), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::reset), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::playAmbientSound), void (CSound::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CSound::playSound), std::uint32_t (CSound::*)(void *, char *)>);
    static_assert(
        std::is_same_v<decltype(&CSound::playActorSound),
                       std::uint32_t (CSound::*)(CDemonActor *, char *, common::CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(&CSound::playTrackedActorSound),
                       std::uint32_t (CSound::*)(CDemonActor *, char *, common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CSound::playActorPositionalSoundWithDelay),
                                 std::uint32_t (CSound::*)(CDemonActor *, char *,
                                                           common::CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CSound::playTrackedActorSoundWithDelay),
                                 std::uint32_t (CSound::*)(CDemonActor *, char *,
                                                           common::CVector3f *, float)>);
    static_assert(
        std::is_same_v<decltype(&CSound::isSoundPlaying), int (CSound::*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CSound::killSound), void (CSound::*)(std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CSound::getSoundDuration), float (CSound::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CSound::setReverbPreset), void (CSound::*)(int)>);
    static_assert(std::is_same_v<decltype(&CSound::setVolumeFade), void (CSound::*)(float, float)>);
}

class CSoundTest : public sound::CSndMainFixture {};

TEST_F(CSoundTest, KeepsThreeChannelsAtFullVolumeAndTheListenerAtTheOrigin) {
    sound_.set3DListenerPos(5.0, 5.0, 5.0);
    const CSound game_sound(sound_);
    EXPECT_EQ(sound_.getSfxChannelVol(2), 1.0F);
    EXPECT_TRUE(sound_.isSfxChannelEnabled(31));
    EXPECT_EQ(sound_.getListenerPosition(), common::CVector3d{});
}

TEST_F(CSoundTest, GoingShutsTheSoundSystemDown) {
    givenSound("tone.wav", sound::makeConstantWav(100, 0));
    std::uint32_t handle = 0;
    {
        const CSound game_sound(sound_);
        sound_.initializeSoundDevice();
        ASSERT_TRUE(sound_.enableSoundSystem());
        handle = sound_.startSfx("tone.wav");
        ASSERT_NE(handle, 0U);
    }
    EXPECT_FALSE(sound_.isSoundBusy());
    EXPECT_FALSE(sound_.isSfxPlaying(handle));
    EXPECT_EQ(sound_.getSoundMemoryStats().free_slots, 64);
}

} // namespace
} // namespace nocturne::core
