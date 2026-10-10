#include "platform/externalrendererbridge.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::platform {
namespace {

TEST(CExternalRendererBridge, EveryMemberAddressesAnInt) {
    static_assert(std::is_same_v<decltype(CExternalRendererBridge::red_bit_position), int *>);
    static_assert(std::is_same_v<decltype(CExternalRendererBridge::blue_dither_shift), int *>);
    static_assert(std::is_same_v<decltype(CExternalRendererBridge::rendering_quality), int *>);
}

TEST(CExternalRendererBridge, ShareNothingUntilTheEngineFillsItIn) {
    const CExternalRendererBridge bridge;
    EXPECT_EQ(bridge.red_bit_position, nullptr);
    EXPECT_EQ(bridge.red_scale_factor, nullptr);
    EXPECT_EQ(bridge.red_dither_shift, nullptr);
    EXPECT_EQ(bridge.green_bit_position, nullptr);
    EXPECT_EQ(bridge.green_scale_factor, nullptr);
    EXPECT_EQ(bridge.green_dither_shift, nullptr);
    EXPECT_EQ(bridge.blue_bit_position, nullptr);
    EXPECT_EQ(bridge.blue_scale_factor, nullptr);
    EXPECT_EQ(bridge.blue_dither_shift, nullptr);
    EXPECT_EQ(bridge.blend_mode, nullptr);
    EXPECT_EQ(bridge.current_lighting, nullptr);
    EXPECT_EQ(bridge.current_alpha, nullptr);
    EXPECT_EQ(bridge.console_text_color, nullptr);
    EXPECT_EQ(bridge.texture_dimension, nullptr);
    EXPECT_EQ(bridge.full_screen_quad_depth, nullptr);
    EXPECT_EQ(bridge.system_initialized, nullptr);
    EXPECT_EQ(bridge.processor_type, nullptr);
    EXPECT_EQ(bridge.rendering_quality, nullptr);
}

} // namespace
} // namespace nocturne::platform
