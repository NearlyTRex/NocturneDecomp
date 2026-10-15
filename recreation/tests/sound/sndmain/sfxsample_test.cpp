#include "common/error/fatalerror.h"
#include "sound/sndmain/sfxsample.h"
#include "sound/sndmain/sfxstream.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <string>
#include <type_traits>

namespace nocturne::sound {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

class CSfxSampleTest : public engine::CPodFixture {
protected:
    CSfxSampleTest() {
        sample_.sample_info.name = "pier59.wav";
        sample_.sample_info.sample_count = 1000;
    }

    void givenConfig(const std::string &text) {
        givenFile("sound\\pier59.sfx", text);
    }

    void parse() {
        sample_.parseConfigFile(dosio_);
    }

    void expectFatal(const std::string &text, const char *message) {
        givenConfig(text);
        EXPECT_THAT([this] { parse(); }, ThrowsMessage<common::CFatalError>(StrEq(message)));
    }

    CSfxSample sample_;
};

TEST_F(CSfxSampleTest, PublicInterface) {
    static_assert(!std::is_copy_constructible_v<CSfxSample>);
    static_assert(std::is_same_v<decltype(&CSfxSample::parseConfigFile),
                                 void (CSfxSample::*)(const engine::CDosIo &)>);
    static_assert(
        std::is_same_v<decltype(&CSfxSample::getBytesPerFrame), int (CSfxSample::*)() const>);
    static_assert(std::is_same_v<decltype(&CSfxSample::getStreamBufferSize),
                                 std::size_t (CSfxSample::*)() const>);
}

TEST_F(CSfxSampleTest, StartsEmptyAndUnreferenced) {
    const CSfxSample sample;
    EXPECT_TRUE(sample.sample_info.name.empty());
    EXPECT_FALSE(sample.loop_marker_count);
    EXPECT_EQ(sample.ref_count, 0);
    EXPECT_EQ(sample.streaming_slot_index, -1);
    EXPECT_EQ(sample.getMemorySize(), 0U);
}

TEST_F(CSfxSampleTest, AFrameIsEveryChannelsSample) {
    sample_.sample_info.bit_depth = 16;
    sample_.sample_info.num_channels = 2;
    EXPECT_EQ(sample_.getBytesPerFrame(), 4);
    sample_.sample_info.bit_depth = 8;
    sample_.sample_info.num_channels = 1;
    EXPECT_EQ(sample_.getBytesPerFrame(), 1);
}

TEST_F(CSfxSampleTest, TheBudgetCountsTheDataAtTheSizeTheFileStoresIt) {
    sample_.sample_data.resize(64);
    sample_.sample_info.bit_depth = 16;
    EXPECT_EQ(sample_.getMemorySize(), 128U);
    sample_.sample_info.bit_depth = 8;
    EXPECT_EQ(sample_.getMemorySize(), 64U);
}

TEST_F(CSfxSampleTest, FreeingLetsGoOfTheDataTheStreamAndTheName) {
    sample_.sample_data.resize(64);
    sample_.sample_info.bit_depth = 16;
    sample_.sample_info.num_channels = 1;
    sample_.sample_info.sample_rate = 100;
    sample_.stream = std::make_unique<CSfxStream>("not audio");
    sample_.streaming_slot_index = 3;
    // A streamed sample holds two seconds against the budget.
    EXPECT_EQ(sample_.getMemorySize(), 400U);
    sample_.freeMemory();
    EXPECT_EQ(sample_.getMemorySize(), 0U);
    EXPECT_EQ(sample_.stream, nullptr);
    EXPECT_EQ(sample_.streaming_slot_index, -1);
    EXPECT_TRUE(sample_.sample_info.name.empty());
}

TEST_F(CSfxSampleTest, FreeingOneInUseIsFatal) {
    sample_.ref_count = 1;
    EXPECT_THAT([this] { sample_.freeMemory(); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("SfxSample::freeMemory - freeing sample in use!")));
}

TEST_F(CSfxSampleTest, WithoutConfigFilesTheDefaultsApplyAndItDoesNotLoop) {
    sample_.sample_info.reference_distance = 1.0F;
    sample_.loop_marker_count = true;
    parse();
    EXPECT_EQ(sample_.sample_info.reference_distance, 20.0F);
    EXPECT_EQ(sample_.sample_info.reference_volume_distance, 5.0F);
    EXPECT_EQ(sample_.sample_info.max_distance, 10000.0F);
    EXPECT_FALSE(sample_.loop_marker_count);
}

TEST_F(CSfxSampleTest, AKlpFileBesideTheSampleMakesItLoop) {
    givenFile("sound\\pier59.klp", "x");
    parse();
    EXPECT_TRUE(sample_.loop_marker_count);
}

TEST_F(CSfxSampleTest, AnEmptyKlpFileDoesNot) {
    givenFile("sound\\pier59.klp", "");
    parse();
    EXPECT_FALSE(sample_.loop_marker_count);
}

TEST_F(CSfxSampleTest, ReadsTheDistancesAndALoopLine) {
    givenConfig("// pier loop\r\n"
                "refDist = 40   // feet\r\n"
                "\r\n"
                "minDist=66.67\r\n"
                "  maxDist =200\r\n"
                "LOOP\r\n");
    parse();
    EXPECT_EQ(sample_.sample_info.reference_distance, 40.0F);
    EXPECT_EQ(sample_.sample_info.reference_volume_distance, 66.67F);
    EXPECT_EQ(sample_.sample_info.max_distance, 200.0F);
    EXPECT_TRUE(sample_.loop_marker_count);
}

TEST_F(CSfxSampleTest, AReferenceDistanceAloneSetsTheMinimumToAQuarterOfIt) {
    givenConfig("refDist = 40");
    parse();
    EXPECT_EQ(sample_.sample_info.reference_volume_distance, 10.0F);
}

TEST_F(CSfxSampleTest, AMinimumGivenFirstSurvivesTheReferenceDistance) {
    givenConfig("minDist = 2\nrefDist = 40\n");
    parse();
    EXPECT_EQ(sample_.sample_info.reference_volume_distance, 2.0F);
}

TEST_F(CSfxSampleTest, AMaximumVolumeSetsTheMinimumFromTheReferenceDistance) {
    givenConfig("refDist = 40\nmaxVol = 8\n");
    parse();
    EXPECT_EQ(sample_.sample_info.reference_volume_distance, 5.0F);
}

TEST_F(CSfxSampleTest, AStreamedSampleTakesItsLength) {
    sample_.sample_info.sample_count = -1;
    givenConfig("length = 44100\n");
    parse();
    EXPECT_EQ(sample_.sample_info.sample_count, 44100);
}

TEST_F(CSfxSampleTest, TheConfigsMistakesAreFatal) {
    expectFatal("refDist = 40\nrefDist = 50\n",
                "Reference distance specified in pier59.sfx on line 1, then again on line 2");
    expectFatal("refDist = 0.05\n", "Reference volume distance 0.05 is too small in pier59.sfx "
                                    "line 1!");
    expectFatal("minDist = 1\n\nminDist = 2\n",
                "Minimum distance specified in pier59.sfx on line 1, then again on line 3");
    expectFatal("minDist = 0.01\n",
                "Reference volume distance 0.01 is too small in pier59.sfx line 1!");
    expectFatal("maxVol = 2\n", "pier59.sfx specified maxVol on line 1 without first specifying "
                                "reference distance");
    expectFatal("refDist = 40\nminDist = 2\nmaxVol = 2\n",
                "Minimum distance specified in pier59.sfx on line 2, then again on line 3");
    expectFatal("refDist = 40\nmaxVol = 0.0001\n",
                "maxVol 0.0001 is too small in pier59.sfx line 2!");
    expectFatal("length = 10\n",
                "Length for pier59.wav already known, then specified again in pier59.sfx line 1");
    expectFatal("refDist 40\n", "Error parsing pier59.sfx line 1: refDist 40");
    expectFatal("refDist = far\n", "Error parsing pier59.sfx line 1: refDist = far");
}

TEST_F(CSfxSampleTest, AStreamedSamplesLengthMustBePositive) {
    sample_.sample_info.sample_count = -1;
    expectFatal("length = 0\n", "Invalid length 0 in pier59.sfx line 1");
}

TEST_F(CSfxSampleTest, APositionInAOneShotSampleStopsAtItsEnds) {
    EXPECT_EQ(sample_.normalizePlaybackPos(250.0, EPlaybackPosType::Samples), 250.0);
    EXPECT_EQ(sample_.normalizePlaybackPos(1250.0, EPlaybackPosType::Samples), 1000.0);
    EXPECT_EQ(sample_.normalizePlaybackPos(-0.5, EPlaybackPosType::Relative), 0.0);
}

TEST_F(CSfxSampleTest, APositionInALoopingSampleWrapsIntoIt) {
    sample_.loop_marker_count = true;
    EXPECT_EQ(sample_.normalizePlaybackPos(1250.0, EPlaybackPosType::Samples), 250.0);
    EXPECT_EQ(sample_.normalizePlaybackPos(-0.25, EPlaybackPosType::Relative), 0.75);
}

} // namespace
} // namespace nocturne::sound
