#include "common/error/fatalerror.h"
#include "common/math/vector3d.h"
#include "common/math/vector3f.h"
#include "core/dcamera/demoncamera.h"
#include "core/dtrace/demonraytrace.h"
#include "core/set/demonset.h"
#include "core/sound/sound.h"
#include "platform/filesystem.h"
#include "sound/sndmain/sampleinfo.h"
#include "sound/sndmain/sndmain.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/setfilefixture.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <format>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// The session's sounds over a set of one camera, shown, with nothing drawn, whose blocks each
// test gives; the sound directory lists a long tone under each name, and the output opens.
class CSoundSceneTest : public CMissionFixture {
protected:
    CSoundSceneTest() {
        ON_CALL(audio_device_, open).WillByDefault(Return(true));
        std::vector<platform::SFileInfo> files;
        for (const std::string_view name :
             {"amb.wav", "rain1.wav", "wind-ctl.wav", "water-2.wav", "gust.wav", "drip.wav"}) {
            givenFile(std::format("sound\\{}", name), sound::makeConstantWav(22050, 8192));
            files.push_back({.name = std::string(name)});
        }
        ON_CALL(file_system_, findFiles(std::string_view("sound\\*.wav")))
            .WillByDefault(Return(files));
        sound_.findAllSoundFiles();
        givenSet("pier.geo", "");
    }

    // The set loaded and its camera shown.
    void givenSet(const std::string &geometry, const std::string &tail) {
        givenFile("models\\one.set", SSetFile{.geometry = geometry,
                                              .cameras = "1\n" + cameraText("a"),
                                              .pvs = "1\n\t0\n",
                                              .tail = tail}
                                         .text());
        givenFile("data\\" + geometry, geoFile(CDemonRaytrace::kGeoFileFormatVersion,
                                               {.x = 1, .y = 1, .z = 1}, {SGeoCube{}}));
        set_.load("one.set");
        camera().init(kHeight);
        set_.setCameraView(0);
    }

    CDemonCamera &camera() {
        return *set_parts_.camera;
    }

    [[nodiscard]] SSoundScene scene(float water_area = 0.0F) {
        return {.camera = camera(), .set = set_, .water_area = water_area};
    }

    // The camera moved a unit along x, so the listener follows it.
    void moveCamera() {
        common::CVector3f position = camera().getPosition();
        position.x += 1.0F;
        camera().setPosition(position);
    }

    // The names of the sounds playing.
    [[nodiscard]] std::vector<std::string> playing() {
        std::vector<std::string> names;
        for (std::uint32_t handle = sound_main_.getFirstActiveSfx(); handle != 0;
             handle = sound_main_.getNextActiveSfx(handle)) {
            names.push_back(
                sound_main_.getSfxSampleInfo(handle).value_or(sound::CSampleInfo{}).name);
        }
        return names;
    }

    [[nodiscard]] bool isPlaying(std::string_view name) {
        const std::vector<std::string> names = playing();
        return std::ranges::find(names, name) != names.end();
    }
};

TEST_F(CSoundSceneTest, InitPlaysTheAmbientSoundOnTheAmbientChannelAtTheEffectsVolume) {
    sound_main_.setSfxChannelVol(CSound::kEffectsChannel, 0.5F);
    sound_.playAmbientSound("amb");
    EXPECT_TRUE(playing().empty());
    sound_.init(scene());
    EXPECT_THAT(playing(), ::testing::ElementsAre("amb.wav"));
    EXPECT_EQ(sound_main_.getSfxChannelVol(CSound::kAmbientChannel), 0.5F);
    sound_main_.enableSfxChannel(CSound::kAmbientChannel, false);
    EXPECT_TRUE(playing().empty());
}

// Once the audio is up, a new ambient sound plays at once, in place of the old.
TEST_F(CSoundSceneTest, AnAmbientSoundPlaysAtOnceWhileTheAudioIsUp) {
    sound_.playAmbientSound("amb");
    sound_.init(scene());
    sound_.playAmbientSound("rain1");
    EXPECT_THAT(playing(), ::testing::ElementsAre("rain1.wav"));
}

TEST_F(CSoundSceneTest, EffectsSwitchedOffLeaveTheAmbientSoundOff) {
    sound_main_.enableSfxChannel(CSound::kEffectsChannel, false);
    sound_.playAmbientSound("amb");
    sound_.init(scene());
    EXPECT_FALSE(sound_main_.isSfxChannelEnabled(CSound::kAmbientChannel));
    EXPECT_TRUE(playing().empty());
}

// Shut down, the output stops, and an ambient sound waits for init again.
TEST_F(CSoundSceneTest, ShuttingDownStopsTheAudioUntilInit) {
    sound_.playAmbientSound("amb");
    sound_.init(scene());
    sound_.shutdown();
    EXPECT_FALSE(sound_main_.isSoundBusy());
    sound_.playAmbientSound("rain1");
    EXPECT_TRUE(playing().empty());
    sound_.init(scene());
    EXPECT_THAT(playing(), ::testing::ElementsAre("rain1.wav"));
}

// Without an output, init starts nothing and the audio isn't up.
TEST_F(CSoundSceneTest, InitWithoutAnOutputStartsNothing) {
    sound_main_.setSoundMuted(true);
    sound_.playAmbientSound("amb");
    sound_.init(scene());
    sound_main_.setSoundMuted(false);
    ASSERT_TRUE(sound_main_.enableSoundSystem());
    sound_.playAmbientSound("amb");
    EXPECT_TRUE(playing().empty());
}

// Each frame the ambient channel follows the effects channel, and the sounds move on.
TEST_F(CSoundSceneTest, AFrameFollowsTheEffectsChannelAndMovesTheSoundsOn) {
    sound_.playAmbientSound("amb");
    sound_.init(scene());
    sound_main_.setSfxChannelVol(CSound::kEffectsChannel, 0.25F);
    const std::uint32_t handle = sound_main_.getFirstActiveSfx();
    ASSERT_TRUE(sound_main_.setSfxFade(handle, 0.0F, 0.25F, true));
    sound_.process(scene(), 0.25F);
    EXPECT_EQ(sound_main_.getSfxChannelVol(CSound::kAmbientChannel), 0.25F);
    sound_.process(scene(), 0.25F);
    EXPECT_FALSE(sound_main_.isSfxPlaying(handle));
    sound_main_.enableSfxChannel(CSound::kEffectsChannel, false);
    sound_.process(scene(), 0.0F);
    EXPECT_FALSE(sound_main_.isSfxChannelEnabled(CSound::kAmbientChannel));
}

// The listener is put on the camera, and stays put until the camera moves.
TEST_F(CSoundSceneTest, TheListenerFollowsTheCameraOnceItMoves) {
    sound_.init(scene());
    const common::CVector3f &position = camera().getPosition();
    EXPECT_EQ(sound_main_.getListenerPosition(),
              (common::CVector3d{.x = position.x, .y = position.y, .z = position.z}));
    sound_main_.set3DListenerPos(9.0, 9.0, 9.0);
    sound_.process(scene(), 0.0F);
    EXPECT_EQ(sound_main_.getListenerPosition(), (common::CVector3d{.x = 9, .y = 9, .z = 9}));
    moveCamera();
    sound_.process(scene(), 0.0F);
    EXPECT_EQ(sound_main_.getListenerPosition().x, camera().getPosition().x);
}

// Where nothing is drawn the view is open sky, and the wind rises to it at half a second.
TEST_F(CSoundSceneTest, ASetsWindRisesWithAnOpenView) {
    givenSet("pier.geo", "\nwind\n\n");
    sound_.init(scene());
    EXPECT_FALSE(isPlaying("wind-ctl.wav"));
    sound_.process(scene(), 1.0F);
    EXPECT_TRUE(isPlaying("wind-ctl.wav"));
    sound_.process(scene(), 1.0F);
    EXPECT_TRUE(isPlaying("wind-ctl.wav"));
}

TEST_F(CSoundSceneTest, ACastleBlowsTheWindAndABlockGivesItsSound) {
    givenSet("castle.geo", "");
    sound_.init(scene());
    sound_.process(scene(), 1.0F);
    EXPECT_TRUE(isPlaying("wind-ctl.wav"));
    sound_.shutdown();
    givenSet("pier.geo", "\nwind\ngust.wav\n");
    sound_.init(scene());
    sound_.process(scene(), 1.0F);
    EXPECT_THAT(playing(), ::testing::ElementsAre("gust.wav"));
}

TEST_F(CSoundSceneTest, ASetWithoutWindIsStill) {
    sound_.init(scene());
    sound_.process(scene(), 1.0F);
    EXPECT_TRUE(playing().empty());
}

// Once the camera moves in a set with no wind, the wind falls at half a second, stopping once
// silent.
TEST_F(CSoundSceneTest, TheWindDiesDownWhereThereIsNone) {
    givenSet("pier.geo", "\nwind\n\n");
    sound_.init(scene());
    sound_.process(scene(), 1.0F);
    givenSet("pier.geo", "");
    moveCamera();
    sound_.process(scene(), 1.0F);
    EXPECT_FALSE(isPlaying("wind-ctl.wav"));
}

// A point where something was drawn asks how high the set's ground is over it. A stored depth of
// 1 is as far as nothing drawn; 2 is half that.
TEST_F(CSoundSceneTest, ADrawnPointsWindIsNotPortedYet) {
    constexpr std::uint32_t kDrawnDepth = 2;
    givenSet("pier.geo", "\nwind\n\n");
    const std::span<std::uint32_t *> rows = screen_.getZBufferRows();
    for (int y = 0; y < screen_.getWindowHeight(); ++y) {
        std::fill_n(rows[static_cast<std::size_t>(y)], screen_.getWindowWidth(), kDrawnDepth);
    }
    EXPECT_THAT([this] { sound_.init(scene()); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CDemonSet::rayVoxelHeightQuery is not ported yet")));
}

// The water laps once any of it shows, in a dungeon or a set whose block gives it.
TEST_F(CSoundSceneTest, TheWaterLapsWhileItShows) {
    givenSet("ndun.geo", "");
    sound_.init(scene());
    sound_.process(scene(), 1.0F);
    EXPECT_TRUE(playing().empty());
    sound_.process(scene(1296.0F), 1.0F);
    EXPECT_THAT(playing(), ::testing::ElementsAre("water-2.wav"));
    sound_.shutdown();
    givenSet("pier.geo", "\nwater\ndrip.wav,0.3\n");
    sound_.init(scene());
    sound_.process(scene(36.0F), 1.0F);
    EXPECT_THAT(playing(), ::testing::ElementsAre("drip.wav"));
    givenSet("pier.geo", "");
    sound_.process(scene(36.0F), 1.0F);
    EXPECT_TRUE(playing().empty());
}

} // namespace
} // namespace nocturne::core
