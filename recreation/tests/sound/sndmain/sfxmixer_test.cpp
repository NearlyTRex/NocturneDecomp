#include "common/error/fatalerror.h"
#include "sound/sndmain/sfxmixer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <type_traits>
#include <vector>

namespace nocturne::sound {
namespace {

TEST(CSfxMixer, IsNeitherCopiedNorMoved) {
    static_assert(!std::is_copy_constructible_v<CSfxMixer>);
    static_assert(!std::is_move_constructible_v<CSfxMixer>);
}

TEST(CSfxMixer, RunsInTheOutputsFormat) {
    const CSfxMixer mixer(2, 22050);
    EXPECT_EQ(mixer.getChannelCount(), 2);
    EXPECT_EQ(mixer.getSampleRate(), 22050);
}

TEST(CSfxMixer, MixesSilenceWithNothingPlayingAndItsClockStandsStill) {
    CSfxMixer mixer(2, 22050);
    std::vector<float> frames(64, 1.0F);
    mixer.readFrames(frames);
    EXPECT_THAT(frames, ::testing::Each(0.0F));
    EXPECT_EQ(mixer.getTime(), 0U);
}

TEST(CSfxMixer, AFormatTheEngineCantRunIsFatal) {
    EXPECT_THAT([] { const CSfxMixer mixer(0, 22050); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq("Unable to mix 0 channels at 22050 Hz")));
}

} // namespace
} // namespace nocturne::sound
