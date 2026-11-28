#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "common/random/watcomrandom.h"
#include "core/sound/sound.h"
#include "engine/console/console.h"
#include "engine/package/gamecontent.h"
#include "engine/pod/pod.h"
#include "platform/filesystem.h"
#include "tests/mocks/common/required.h"
#include "tests/mocks/engine/podimage.h"
#include "tests/mocks/engine/shippedgamecontent.h"
#include "tests/mocks/shape/strlistitems.h"
#include "tests/mocks/sound/sndmainfixture.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <format>
#include <functional>
#include <initializer_list>
#include <string>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CSound, IsNeitherCopiedNorMoved) {
    static_assert(!std::is_copy_constructible_v<CSound>);
    static_assert(!std::is_move_constructible_v<CSound>);
    static_assert(std::is_constructible_v<CSound, SSoundOwners>);
}

TEST(CSound, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSound::findRandomSoundFile),
                                 std::string (CSound::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CSound::findAllSoundFiles), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::init), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::shutdown), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::process), void (CSound::*)(float)>);
    static_assert(std::is_same_v<decltype(&CSound::configure), void (CSound::*)()>);
    static_assert(std::is_same_v<decltype(&CSound::reset), void (CSound::*)()>);
    static_assert(
        std::is_same_v<decltype(&CSound::playAmbientSound), void (CSound::*)(std::string_view)>);
    static_assert(
        std::is_same_v<decltype(&CSound::playSound), std::uint32_t (CSound::*)(std::string_view)>);
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
    static_assert(
        std::is_same_v<decltype(&CSound::getSoundDuration), float (CSound::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CSound::setMusicHandler),
                                 void (CSound::*)(std::function<void(float)>)>);
    static_assert(std::is_same_v<decltype(&CSound::setReverbPreset), void (CSound::*)(int)>);
    static_assert(std::is_same_v<decltype(&CSound::setVolumeFade), void (CSound::*)(float, float)>);
}

class CSoundTest : public sound::CSndMainFixture {
protected:
    // Every point in a room of the size room_size_ says.
    SSoundOwners owners() {
        return {.sound_main = sound_,
                .pod = pod_,
                .file_system = file_system_,
                .content = content_,
                .crt_random = crt_random_,
                .console = console_,
                .room_size_at = [this](const common::CVector3f &) { return room_size_; }};
    }

    engine::CPod pod_{file_system_, dosio_};
    // Nocturne's, with its splash music, unless a test changes it.
    engine::SGameContent content_ = engine::getShippedGameContent();
    common::CWatcomRandom crt_random_;
    int room_size_ = 0;
};

TEST_F(CSoundTest, KeepsThreeChannelsAtFullVolumeAndTheListenerAtTheOrigin) {
    sound_.set3DListenerPos(5.0, 5.0, 5.0);
    const CSound game_sound(owners());
    EXPECT_EQ(sound_.getSfxChannelVol(2), 1.0F);
    EXPECT_TRUE(sound_.isSfxChannelEnabled(31));
    EXPECT_EQ(sound_.getListenerPosition(), common::CVector3d{});
}

TEST_F(CSoundTest, GoingShutsTheSoundSystemDown) {
    givenSound("tone.wav", sound::makeConstantWav(100, 0));
    std::uint32_t handle = 0;
    {
        const CSound game_sound(owners());
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
    CSound game_sound(owners());
    game_sound.findAllSoundFiles();
    EXPECT_TRUE(sound_.isSoundSystemActive());
    EXPECT_CALL(file_system_, findFiles).Times(0);
    game_sound.findAllSoundFiles();
    EXPECT_THAT(shape::getItems(game_sound.getSoundFileList()),
                ElementsAre("door.wav", "theme.mp3"));
}

TEST_F(CSoundTest, ResettingStopsTheSoundsAndFreesTheSamples) {
    givenSound("tone.wav", sound::makeConstantWav(100, 0));
    CSound game_sound(owners());
    sound_.initializeSoundDevice();
    ASSERT_TRUE(sound_.enableSoundSystem());
    const std::uint32_t handle = sound_.startSfx("tone.wav");
    ASSERT_NE(handle, 0U);
    game_sound.reset();
    EXPECT_FALSE(sound_.isSoundBusy());
    EXPECT_FALSE(sound_.isSfxPlaying(handle));
    EXPECT_EQ(sound_.getSoundMemoryStats().free_slots, 64);
}

TEST_F(CSoundTest, ConfiguringTurnsTheChannelsDownToTheMenusLevel) {
    CSound game_sound(owners());
    sound_.setSfxChannelVol(CSound::kEffectsChannel, 1.0F);
    sound_.setSfxChannelVol(CSound::kMusicChannel, 0.1F);
    sound_.setSfxChannelVol(CSound::kDialogChannel, 1.0F);
    game_sound.configure();
    EXPECT_EQ(sound_.getSfxChannelVol(CSound::kEffectsChannel), 0.25F);
    EXPECT_EQ(sound_.getSfxChannelVol(CSound::kMusicChannel), 0.1F);
    EXPECT_EQ(sound_.getSfxChannelVol(CSound::kDialogChannel), 1.0F);
}

// Both rates' music is on disk, so its name says which was picked.
class CSoundMusicTest : public CSoundTest {
protected:
    CSoundMusicTest() {
        givenSound("splash-music-22.wav", sound::makeConstantWav(100, 0));
        givenSound("splash-music-44.wav", sound::makeConstantWav(100, 0));
    }

    // The one sound playing, which fails the test when there isn't exactly one.
    [[nodiscard]] std::string playing() {
        EXPECT_EQ(sound_.countActiveSfx(), 1);
        return expectInfo(sound_.getSfxSampleInfo(sound_.getFirstActiveSfx())).name;
    }

    CSound game_sound_{owners()};
};

TEST_F(CSoundMusicTest, ConfiguringStopsTheSoundsAndPlaysTheMenuMusicFromTheOrigin) {
    givenSound("tone.wav", sound::makeConstantWav(100, 0));
    startOutput();
    sound_.set3DListenerPos(5.0, 5.0, 5.0);
    const std::uint32_t tone = sound_.startSfx("tone.wav");
    ASSERT_NE(tone, 0U);
    game_sound_.configure();
    EXPECT_FALSE(sound_.isSfxPlaying(tone));
    EXPECT_EQ(playing(), "splash-music-22.wav");
    EXPECT_EQ(sound_.getListenerPosition(), common::CVector3d{});
}

TEST_F(CSoundMusicTest, TheMusicPlaysOnTheMusicChannel) {
    startOutput();
    sound_.enableSfxChannel(CSound::kMusicChannel, false);
    game_sound_.configure();
    EXPECT_EQ(sound_.countActiveSfx(), 0);
}

TEST_F(CSoundMusicTest, AboveThirtyThousandTheMusicIsTheFortyFourKilohertzOne) {
    sound_.setAudioSampleRate(30001);
    startOutput();
    game_sound_.configure();
    EXPECT_EQ(playing(), "splash-music-44.wav");
}

// BW2's, the one sample at either rate; read as configure starts it.
TEST_F(CSoundMusicTest, TheMusicIsTheGames) {
    givenSound("XBLAIRMENU.wav", sound::makeConstantWav(100, 0));
    common::required(content_.menu).music = {.low_rate = "XBLAIRMENU.wav",
                                             .high_rate = "XBLAIRMENU.wav"};
    startOutput();
    game_sound_.configure();
    EXPECT_EQ(playing(), "XBLAIRMENU.wav");
}

TEST_F(CSoundMusicTest, WithoutMenusNoMusicPlays) {
    content_.menu.reset();
    startOutput();
    game_sound_.configure();
    EXPECT_EQ(sound_.countActiveSfx(), 0);
}

TEST_F(CSoundMusicTest, AtThirtyThousandTheMusicIsTheTwentyTwoKilohertzOne) {
    sound_.setAudioSampleRate(30000);
    startOutput();
    game_sound_.configure();
    EXPECT_EQ(playing(), "splash-music-22.wav");
}

TEST_F(CSoundMusicTest, MutedConfiguringOnlyTurnsTheChannelsDown) {
    startOutput();
    sound_.setSoundMuted(true);
    sound_.setSfxChannelVol(CSound::kEffectsChannel, 1.0F);
    game_sound_.configure();
    EXPECT_EQ(sound_.getSfxChannelVol(CSound::kEffectsChannel), 0.25F);
    EXPECT_EQ(sound_.countActiveSfx(), 0);
}

// The music is 22050 frames at 22050 Hz: a second.
class CSoundMusicHandlerTest : public CSoundTest {
protected:
    CSoundMusicHandlerTest() {
        givenSound("splash-music-22.wav", sound::makeConstantWav(22050, 0));
        game_sound_.setMusicHandler([this](float seconds) { lengths_.push_back(seconds); });
        startOutput();
    }

    std::vector<float> lengths_;
    CSound game_sound_{owners()};
};

// Stopping every sound first is a stop of the music too.
TEST_F(CSoundMusicHandlerTest, ConfiguringGivesTheMusicsLength) {
    game_sound_.configure();
    EXPECT_THAT(lengths_, ElementsAre(0.0F, 1.0F));
}

TEST_F(CSoundMusicHandlerTest, MutedThereIsNoMusic) {
    sound_.setSoundMuted(true);
    game_sound_.configure();
    EXPECT_THAT(lengths_, ElementsAre(0.0F));
}

TEST_F(CSoundMusicHandlerTest, ResettingStopsTheMusic) {
    game_sound_.reset();
    EXPECT_THAT(lengths_, ElementsAre(0.0F));
}

TEST_F(CSoundTest, MusicThatIsntThereHasNoLength) {
    startOutput();
    CSound game_sound(owners());
    std::vector<float> lengths;
    game_sound.setMusicHandler([&](float seconds) { lengths.push_back(seconds); });
    game_sound.configure();
    EXPECT_THAT(lengths, ElementsAre(0.0F, -1.0F));
}

TEST_F(CSoundTest, WithoutAHandlerConfiguringAndResettingStillRun) {
    givenSound("splash-music-22.wav", sound::makeConstantWav(100, 0));
    startOutput();
    CSound game_sound(owners());
    game_sound.configure();
    EXPECT_EQ(sound_.countActiveSfx(), 1);
    game_sound.reset();
    EXPECT_EQ(sound_.countActiveSfx(), 0);
    sound_.setSoundMuted(true);
    game_sound.configure();
}

TEST_F(CSoundTest, ASoundsDurationIsItsLengthInSeconds) {
    givenSound("tone.wav", sound::makeConstantWav(11025, 0));
    CSound game_sound(owners());
    EXPECT_FLOAT_EQ(game_sound.getSoundDuration("tone.wav"), 0.5F);
}

// What follows those in a name is for playing the sound, not finding it.
TEST_F(CSoundTest, ADurationsNameEndsAtAnAtAStarOrWhitespace) {
    givenSound("tone.wav", sound::makeConstantWav(11025, 0));
    CSound game_sound(owners());
    for (const std::string_view name : {"tone.wav@2", "tone.wav*", "tone.wav 1", "tone.wav\t"}) {
        EXPECT_FLOAT_EQ(game_sound.getSoundDuration(name), 0.5F) << name;
    }
}

TEST_F(CSoundTest, AMissingSoundHasADurationOfMinusOne) {
    CSound game_sound(owners());
    EXPECT_EQ(game_sound.getSoundDuration("missing.wav"), -1.0F);
}

// The sound directory lists these, each a long constant tone, and the output runs.
class CSoundPlayTest : public CSoundTest {
protected:
    static constexpr std::int16_t kTone = 8192;

    CSoundPlayTest() {
        givenSoundFiles({"amb.wav", "rain1.wav", "rain2.wav", "drip10.wav", "hall2.wav",
                         "hall4.wav", "cave5.wav"});
        game_sound_.findAllSoundFiles();
        startOutput();
    }

    void givenSoundFiles(std::initializer_list<std::string_view> names) {
        std::vector<platform::SFileInfo> files;
        for (const std::string_view name : names) {
            givenSound(std::string(name), sound::makeConstantWav(22050, kTone));
            files.push_back({.name = std::string(name)});
        }
        ON_CALL(file_system_, findFiles(std::string_view("sound\\*.wav")))
            .WillByDefault(Return(files));
    }

    [[nodiscard]] std::string nameOf(std::uint32_t handle) {
        return expectInfo(sound_.getSfxSampleInfo(handle)).name;
    }

    // The loudest sample of the next few frames mixed.
    [[nodiscard]] float level() {
        const std::vector<float> frames = mix(16);
        return std::ranges::max(frames, {}, [](float frame) { return std::abs(frame); });
    }

    [[nodiscard]] bool consoleSays(std::string_view text) const {
        for (int row = 0; row < engine::CConsole::kMaxRows; ++row) {
            if (console_.getRow(row) == text) {
                return true;
            }
        }
        return false;
    }

    void expectInvalid(std::string_view name) {
        EXPECT_THAT(
            [&] { static_cast<void>(game_sound_.playSound(name)); },
            ThrowsMessage<common::CFatalError>(StrEq(std::format("Invalid sfx string: {}", name))));
    }

    CSound game_sound_{owners()};
};

TEST_F(CSoundPlayTest, ANameWithoutAnExtensionIsAWave) {
    EXPECT_EQ(nameOf(game_sound_.playSound("amb")), "amb.wav");
    EXPECT_EQ(nameOf(game_sound_.playSound("AMB.WAV")), "amb.wav");
}

// A tab ends the name as a space does; a control character before it is part of the name.
TEST_F(CSoundPlayTest, WhitespaceEndsTheName) {
    EXPECT_EQ(nameOf(game_sound_.playSound("amb\t@1")), "amb.wav");
    EXPECT_EQ(game_sound_.playSound("amb\x01"), 0U);
}

TEST_F(CSoundPlayTest, NothingPlaysMutedOrUnnamed) {
    EXPECT_EQ(game_sound_.playSound(""), 0U);
    sound_.setSoundMuted(true);
    EXPECT_EQ(game_sound_.playSound("amb"), 0U);
}

// A range is a digit, or two past 9.
TEST_F(CSoundPlayTest, ARangeStandsForItsNumbers) {
    const std::string rain = nameOf(game_sound_.playSound("rain[1,2]"));
    EXPECT_TRUE(rain == "rain1.wav" || rain == "rain2.wav") << rain;
    EXPECT_EQ(nameOf(game_sound_.playSound("drip[ 1, 12]")), "drip10.wav");
    EXPECT_EQ(game_sound_.playSound("rain[1,12]"), 0U);
}

TEST_F(CSoundPlayTest, ABackwardOrUnfinishedRangeIsFatal) {
    expectInvalid("rain[2,1]");
    expectInvalid("rain[1,2");
    expectInvalid("rain[x]");
}

TEST_F(CSoundPlayTest, AMissingSoundIsReportedOnTheConsole) {
    EXPECT_EQ(game_sound_.playSound("nothing[1,3]"), 0U);
    EXPECT_TRUE(consoleSays("Can't find wav: nothing?.wav"));
}

// A missing sound's modifiers are never read.
TEST_F(CSoundPlayTest, AMissingSoundsModifiersArentChecked) {
    EXPECT_EQ(game_sound_.playSound("nothing @-1"), 0U);
}

TEST_F(CSoundPlayTest, AtSetsTheVolume) {
    const std::uint32_t full = game_sound_.playSound("amb");
    const float full_level = level();
    sound_.killSfx(full);
    static_cast<void>(game_sound_.playSound("amb @ 0.5"));
    EXPECT_NEAR(level() / full_level, 0.5F, 0.01F);
}

TEST_F(CSoundPlayTest, StarSetsThePitch) {
    const std::uint32_t handle = game_sound_.playSound("amb*2@1");
    static_cast<void>(mix(100));
    const double played = sound_.getSfxPlaybackPosition(handle, sound::EPlaybackPosType::Samples);
    EXPECT_GT(played, 150.0);
}

TEST_F(CSoundPlayTest, ABadModifierIsFatal) {
    for (const std::string_view name : {"amb@-1", "amb*0", "amb@x", "amb #2", "amb*"}) {
        expectInvalid(name);
    }
}

// The room's own size first, then one more and one less, out to four away.
TEST_F(CSoundPlayTest, AnExclamationMarkIsTheRoomsSize) {
    room_size_ = 2;
    EXPECT_EQ(nameOf(game_sound_.playSound("hall!")), "hall2.wav");
    room_size_ = 3;
    EXPECT_EQ(nameOf(game_sound_.playSound("hall!")), "hall4.wav");
    room_size_ = 9;
    EXPECT_EQ(nameOf(game_sound_.playSound("cave!")), "cave5.wav");
    room_size_ = 0;
    EXPECT_EQ(game_sound_.playSound("cave!"), 0U);
}

// The CRT's draw picks, among the first 40 matches only.
TEST_F(CSoundTest, TheFileIsPickedAtRandomFromTheFirstFortyMatches) {
    constexpr int kFileCount = 41;
    std::vector<platform::SFileInfo> files;
    files.reserve(kFileCount);
    for (int i = 0; i < kFileCount; ++i) {
        files.push_back({.name = std::format("n{:02}.wav", i)});
    }
    ON_CALL(file_system_, findFiles(std::string_view("sound\\*.wav"))).WillByDefault(Return(files));
    CSound listing(owners());
    listing.findAllSoundFiles();
    common::CWatcomRandom expected;
    const int draw = expected.rand();
    EXPECT_EQ(listing.findRandomSoundFile("N*"), std::format("n{:02}.wav", draw % 40));
    EXPECT_EQ(crt_random_.rand(), expected.rand());
    EXPECT_EQ(listing.findRandomSoundFile("x*"), "");
}

TEST_F(CSoundPlayTest, InitPlaysTheAmbientSoundOnTheAmbientChannelAtTheEffectsVolume) {
    sound_.setSfxChannelVol(CSound::kEffectsChannel, 0.5F);
    game_sound_.playAmbientSound("amb");
    EXPECT_EQ(sound_.countActiveSfx(), 0);
    game_sound_.init();
    EXPECT_EQ(sound_.countActiveSfx(), 1);
    EXPECT_EQ(sound_.getSfxChannelVol(CSound::kAmbientChannel), 0.5F);
    sound_.enableSfxChannel(CSound::kAmbientChannel, false);
    EXPECT_EQ(sound_.countActiveSfx(), 0);
}

// Once the audio is up, a new ambient sound plays at once, in place of the old.
TEST_F(CSoundPlayTest, AnAmbientSoundPlaysAtOnceWhileTheAudioIsUp) {
    game_sound_.playAmbientSound("amb");
    game_sound_.init();
    game_sound_.playAmbientSound("rain1");
    EXPECT_EQ(nameOf(sound_.getFirstActiveSfx()), "rain1.wav");
    EXPECT_EQ(sound_.countActiveSfx(), 1);
}

TEST_F(CSoundPlayTest, EffectsSwitchedOffLeaveTheAmbientSoundOff) {
    sound_.enableSfxChannel(CSound::kEffectsChannel, false);
    game_sound_.playAmbientSound("amb");
    game_sound_.init();
    EXPECT_FALSE(sound_.isSfxChannelEnabled(CSound::kAmbientChannel));
    EXPECT_EQ(sound_.countActiveSfx(), 0);
}

// Shut down, the output stops, and an ambient sound waits for init again.
TEST_F(CSoundPlayTest, ShuttingDownStopsTheAudioUntilInit) {
    game_sound_.playAmbientSound("amb");
    game_sound_.init();
    game_sound_.shutdown();
    EXPECT_FALSE(sound_.isSoundBusy());
    game_sound_.playAmbientSound("rain1");
    EXPECT_EQ(sound_.countActiveSfx(), 0);
    game_sound_.init();
    EXPECT_EQ(nameOf(sound_.getFirstActiveSfx()), "rain1.wav");
}

// Without an output, init starts nothing and the audio isn't up.
TEST_F(CSoundPlayTest, InitWithoutAnOutputStartsNothing) {
    sound_.setSoundMuted(true);
    game_sound_.playAmbientSound("amb");
    game_sound_.init();
    sound_.setSoundMuted(false);
    ASSERT_TRUE(sound_.enableSoundSystem());
    game_sound_.playAmbientSound("amb");
    EXPECT_EQ(sound_.countActiveSfx(), 0);
}

// Each frame the ambient channel follows the effects channel, and the sounds move on.
TEST_F(CSoundPlayTest, AFrameFollowsTheEffectsChannelAndMovesTheSoundsOn) {
    game_sound_.playAmbientSound("amb");
    game_sound_.init();
    sound_.setSfxChannelVol(CSound::kEffectsChannel, 0.25F);
    const std::uint32_t handle = sound_.getFirstActiveSfx();
    ASSERT_TRUE(sound_.setSfxFade(handle, 0.0F, 0.25F, true));
    game_sound_.process(0.25F);
    EXPECT_EQ(sound_.getSfxChannelVol(CSound::kAmbientChannel), 0.25F);
    game_sound_.process(0.25F);
    EXPECT_FALSE(sound_.isSfxPlaying(handle));
    sound_.enableSfxChannel(CSound::kEffectsChannel, false);
    game_sound_.process(0.0F);
    EXPECT_FALSE(sound_.isSfxChannelEnabled(CSound::kAmbientChannel));
}

TEST_F(CSoundTest, WithNoSoundFilesTheSearchRunsEachTime) {
    CSound game_sound(owners());
    EXPECT_CALL(file_system_, findFiles).Times(4);
    game_sound.findAllSoundFiles();
    game_sound.findAllSoundFiles();
}

} // namespace
} // namespace nocturne::core
