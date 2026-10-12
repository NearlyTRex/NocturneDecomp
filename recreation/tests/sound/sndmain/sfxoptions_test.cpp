#include "common/math/vector3f.h"
#include "sound/sndmain/sfxoptions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::sound {
namespace {

TEST(CSfxOptions, PublicInterface) {
    static_assert(std::is_default_constructible_v<CSfxOptions>);
    static_assert(std::is_copy_assignable_v<CSfxOptions>);
    static_assert(std::is_same_v<decltype(&CSfxOptions::reset), void (CSfxOptions::*)()>);
}

TEST(CSfxOptions, StartsAsAFullVolumeSoundAtTheOriginWithAnAutomaticDelay) {
    const CSfxOptions options;
    EXPECT_EQ(options.channel_index, 0);
    EXPECT_EQ(options.position, common::CVector3d{});
    EXPECT_EQ(options.position_source_ptr, nullptr);
    EXPECT_EQ(options.velocity, common::CVector3d{});
    EXPECT_EQ(options.velocity_source_ptr, nullptr);
    EXPECT_EQ(options.current_volume, 1.0F);
    EXPECT_EQ(options.base_frequency, 1.0F);
    EXPECT_EQ(options.delay_remaining, CSfxOptions::kAutoDelay);
    EXPECT_EQ(options.flags, 0U);
    EXPECT_EQ(options.trigger_time, 0.0);
    EXPECT_EQ(options.trigger_id, EPlaybackPosType::Samples);
}

TEST(CSfxOptions, ResetPutsEverythingBack) {
    const common::CVector3f tracked;
    CSfxOptions options;
    options.channel_index = 2;
    options.position = {.x = 1.0, .y = 2.0, .z = 3.0};
    options.position_source_ptr = &tracked;
    options.velocity_source_ptr = &tracked;
    options.current_volume = 0.5F;
    options.delay_remaining = 0.17;
    options.flags = kSfxNonPositional;
    options.trigger_time = 0.5;
    options.trigger_id = EPlaybackPosType::Relative;
    options.reset();
    EXPECT_EQ(options.channel_index, 0);
    EXPECT_EQ(options.position, common::CVector3d{});
    EXPECT_EQ(options.position_source_ptr, nullptr);
    EXPECT_EQ(options.velocity_source_ptr, nullptr);
    EXPECT_EQ(options.current_volume, 1.0F);
    EXPECT_EQ(options.delay_remaining, CSfxOptions::kAutoDelay);
    EXPECT_EQ(options.flags, 0U);
    EXPECT_EQ(options.trigger_time, 0.0);
    EXPECT_EQ(options.trigger_id, EPlaybackPosType::Samples);
}

} // namespace
} // namespace nocturne::sound
