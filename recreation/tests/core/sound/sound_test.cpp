#include "core/sound/sound.h"
#include "engine/pod/pod.h"
#include "platform/filesystem.h"
#include "tests/mocks/engine/podimage.h"
#include "tests/mocks/shape/strlistitems.h"
#include "tests/mocks/sound/sndmainfixture.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::Return;

TEST(CSound, IsNeitherCopiedNorMoved) {
    static_assert(!std::is_copy_constructible_v<CSound>);
    static_assert(!std::is_move_constructible_v<CSound>);
    static_assert(std::is_constructible_v<CSound, sound::CSndMain &, engine::CPod &,
                                          platform::IFileSystem &>);
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

class CSoundTest : public sound::CSndMainFixture {
protected:
    engine::CPod pod_{file_system_, dosio_};
};

TEST_F(CSoundTest, KeepsThreeChannelsAtFullVolumeAndTheListenerAtTheOrigin) {
    sound_.set3DListenerPos(5.0, 5.0, 5.0);
    const CSound game_sound(sound_, pod_, file_system_);
    EXPECT_EQ(sound_.getSfxChannelVol(2), 1.0F);
    EXPECT_TRUE(sound_.isSfxChannelEnabled(31));
    EXPECT_EQ(sound_.getListenerPosition(), common::CVector3d{});
}

TEST_F(CSoundTest, GoingShutsTheSoundSystemDown) {
    givenSound("tone.wav", sound::makeConstantWav(100, 0));
    std::uint32_t handle = 0;
    {
        const CSound game_sound(sound_, pod_, file_system_);
        sound_.initializeSoundDevice();
        ASSERT_TRUE(sound_.enableSoundSystem());
        handle = sound_.startSfx("tone.wav");
        ASSERT_NE(handle, 0U);
    }
    EXPECT_FALSE(sound_.isSoundBusy());
    EXPECT_FALSE(sound_.isSfxPlaying(handle));
    EXPECT_EQ(sound_.getSoundMemoryStats().free_slots, 64);
}

TEST_F(CSoundTest, FindingTheSoundFilesListsTheWavesThenTheMp3sOnceAndTakesUpTheDevice) {
    givenFile("ACT1.POD", engine::makePod2("", {{.name = "sound\\door.wav", .data = "D"}}));
    pod_.mount("ACT1.POD");
    ON_CALL(file_system_, findFiles(std::string_view("sound\\*.mp3")))
        .WillByDefault(Return(std::vector<platform::SFileInfo>{{.name = "theme.mp3"}}));
    CSound game_sound(sound_, pod_, file_system_);
    game_sound.findAllSoundFiles();
    EXPECT_TRUE(sound_.isSoundSystemActive());
    EXPECT_CALL(file_system_, findFiles).Times(0);
    game_sound.findAllSoundFiles();
    EXPECT_THAT(shape::getItems(game_sound.getSoundFileList()),
                ElementsAre("door.wav", "theme.mp3"));
}

TEST_F(CSoundTest, ResettingStopsTheSoundsAndFreesTheSamples) {
    givenSound("tone.wav", sound::makeConstantWav(100, 0));
    CSound game_sound(sound_, pod_, file_system_);
    sound_.initializeSoundDevice();
    ASSERT_TRUE(sound_.enableSoundSystem());
    const std::uint32_t handle = sound_.startSfx("tone.wav");
    ASSERT_NE(handle, 0U);
    game_sound.reset();
    EXPECT_FALSE(sound_.isSoundBusy());
    EXPECT_FALSE(sound_.isSfxPlaying(handle));
    EXPECT_EQ(sound_.getSoundMemoryStats().free_slots, 64);
}

TEST_F(CSoundTest, WithNoSoundFilesTheSearchRunsEachTime) {
    CSound game_sound(sound_, pod_, file_system_);
    EXPECT_CALL(file_system_, findFiles).Times(4);
    game_sound.findAllSoundFiles();
    game_sound.findAllSoundFiles();
}

} // namespace
} // namespace nocturne::core
