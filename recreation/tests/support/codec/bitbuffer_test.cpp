#include "support/codec/bitbuffer.h"

#include <gtest/gtest.h>

#include <cstddef>
#include <span>

namespace nocturne::support {
namespace {

constexpr std::byte kPattern{0b1011'0110};

TEST(SBitBuffer, BitsComeLowestFirstAndTheRestOfTheByteIsKept) {
    const std::byte data[] = {kPattern};
    std::span<const std::byte> input(data);
    SBitBuffer bits;
    EXPECT_EQ(extractBitsFromBuffer(bits, 1, input), 0);
    EXPECT_TRUE(input.empty());
    EXPECT_EQ(extractBitsFromBuffer(bits, 3, input), 0b011);
    EXPECT_EQ(bits.bits_available, 4);
    EXPECT_EQ(extractBitsFromBuffer(bits, 4, input), 0b1011);
    EXPECT_EQ(bits.bits_available, 0);
}

TEST(SBitBuffer, KeptBitsComeBeforeTheNextBytes) {
    const std::byte data[] = {kPattern, std::byte{0x34}, std::byte{0x12}};
    std::span<const std::byte> input(data);
    SBitBuffer bits;
    EXPECT_EQ(extractBitsFromBuffer(bits, 4, input), 0b0110);
    EXPECT_EQ(extractBitsFromBuffer(bits, 20, input), 0x1234B);
    EXPECT_TRUE(input.empty());
}

TEST(SBitBuffer, PartOfAByteIsKeptForLater) {
    const std::byte data[] = {std::byte{0x34}, std::byte{0x12}};
    std::span<const std::byte> input(data);
    SBitBuffer bits;
    EXPECT_EQ(extractBitsFromBuffer(bits, 12, input), 0x234);
    EXPECT_EQ(bits.accumulated_bits, 0x1U);
    EXPECT_EQ(bits.bits_available, 4);
}

TEST(SBitBuffer, RunningOutKeepsWhatWasTaken) {
    const std::byte data[] = {std::byte{0x01}};
    std::span<const std::byte> input(data);
    SBitBuffer bits;
    EXPECT_EQ(extractBitsFromBuffer(bits, 16, input), -1);
    EXPECT_EQ(bits.bits_available, 8);
    EXPECT_EQ(extractBitsFromBuffer(bits, 8, input), 1);
    EXPECT_EQ(extractBitsFromBuffer(bits, 4, input), -1);
    EXPECT_EQ(bits.bits_available, 0);
}

TEST(SBitBuffer, ResettingForgetsTheKeptBits) {
    SBitBuffer bits{.accumulated_bits = 0x5, .bits_available = 3};
    resetBitBuffer(bits);
    EXPECT_EQ(bits.accumulated_bits, 0U);
    EXPECT_EQ(bits.bits_available, 0);
}

} // namespace
} // namespace nocturne::support
