#include "common/error/fatalerror.h"
#include "sound/sndmain/sampleinfo.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

using enum EPlaybackPosType;

CSampleInfo makeInfo(int sample_count) {
    CSampleInfo info;
    info.name = "a-wood1.wav";
    info.sample_rate = 22050;
    info.sample_count = sample_count;
    return info;
}

TEST(CSampleInfo, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CSampleInfo::getSampleDuration), double (CSampleInfo::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CSampleInfo::cvtPlaybackPos),
                       double (CSampleInfo::*)(double, EPlaybackPosType, EPlaybackPosType) const>);
}

// CSfxSample::init's defaults, at the unit distance factor.
TEST(CSampleInfo, CarriesTwentyFeetAtFullVolume) {
    const CSampleInfo info;
    EXPECT_EQ(info.reference_distance, 20.0F);
    EXPECT_EQ(info.reference_volume_distance, 5.0F);
    EXPECT_EQ(info.max_distance, 10000.0F);
}

TEST(CSampleInfo, TheDurationIsTheLengthOverTheRate) {
    EXPECT_EQ(makeInfo(44100).getSampleDuration(), 2.0);
    EXPECT_EQ(CSampleInfo().getSampleDuration(), 0.0);
}

TEST(CSampleInfo, ConvertsBetweenSamplesSecondsAndFractions) {
    const CSampleInfo info = makeInfo(44100);
    EXPECT_EQ(info.cvtPlaybackPos(0.5, Seconds, Samples), 11025.0);
    EXPECT_EQ(info.cvtPlaybackPos(11025.0, Samples, Relative), 0.25);
    EXPECT_EQ(info.cvtPlaybackPos(0.25, Relative, Seconds), 0.5);
    EXPECT_EQ(info.cvtPlaybackPos(0.5, Seconds, Relative), 0.25);
    EXPECT_EQ(info.cvtPlaybackPos(0.25, Relative, Samples), 11025.0);
}

TEST(CSampleInfo, TheSameUnitsComeBackUntouched) {
    const CSampleInfo info = makeInfo(-1);
    EXPECT_EQ(info.cvtPlaybackPos(3.0, Relative, Relative), 3.0);
}

TEST(CSampleInfo, ARelativePositionNeedsTheLength) {
    const CSampleInfo info = makeInfo(-1);
    const auto fatal = ::testing::ThrowsMessage<common::CFatalError>(
        ::testing::StrEq("SampleInfo::cvtPlaybackPos - can't use relative sample position when "
                         "length of a-wood1.wav is not known."));
    EXPECT_THAT([&info] { (void)info.cvtPlaybackPos(0.5, Relative, Samples); }, fatal);
    EXPECT_THAT([&info] { (void)info.cvtPlaybackPos(1.0, Seconds, Relative); }, fatal);
}

} // namespace
} // namespace nocturne::sound
