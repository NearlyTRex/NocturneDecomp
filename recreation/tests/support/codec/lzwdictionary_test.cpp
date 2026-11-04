#include "support/codec/bitbuffer.h"
#include "support/codec/lzwdictionary.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::support {
namespace {

using ::testing::ElementsAre;

constexpr int kTwoBits = 2;
constexpr int kRoom = 8;

TEST(CLZWDictionary, TheFirstCodesAreTheSingleValues) {
    CLZWDictionary dictionary;
    dictionary.init(kRoom, kTwoBits);
    std::vector<std::uint8_t> output;
    EXPECT_EQ(dictionary.decodeCodeToBuffer(3, output), 3);
    EXPECT_THAT(output, ElementsAre(3));
}

TEST(CLZWDictionary, ANewCodeIsItsParentsStringAndItsValue) {
    CLZWDictionary dictionary;
    dictionary.init(kRoom, kTwoBits);
    EXPECT_FALSE(dictionary.addNode(3, 1));
    EXPECT_FALSE(dictionary.addNode(2, 4));
    std::vector<std::uint8_t> output{0};
    EXPECT_EQ(dictionary.decodeCodeToBuffer(5, output), 1);
    EXPECT_THAT(output, ElementsAre(0, 1, 3, 2));
}

// Code 4 is the highest: it takes one bit, 3 takes three and 2 three, and the last bit can't
// begin another.
TEST(CLZWDictionary, ACodeIsSentInTheBitsItCanHave) {
    CLZWDictionary dictionary;
    dictionary.init(kRoom, kTwoBits);
    EXPECT_FALSE(dictionary.addNode(0, 0));
    const std::byte data[] = {std::byte{0b0010'1101}};
    std::span<const std::byte> input(data);
    SBitBuffer bits;
    EXPECT_EQ(dictionary.readCodeFromBuffer(bits, input), 4);
    EXPECT_EQ(dictionary.readCodeFromBuffer(bits, input), 3);
    EXPECT_EQ(dictionary.readCodeFromBuffer(bits, input), 2);
    EXPECT_EQ(dictionary.readCodeFromBuffer(bits, input), -1);
}

// Once full, the single values take two bits again.
TEST(CLZWDictionary, AFullTableStartsAgain) {
    CLZWDictionary dictionary;
    dictionary.init(5, kTwoBits);
    EXPECT_FALSE(dictionary.addNode(0, 0));
    EXPECT_TRUE(dictionary.addNode(1, 0));
    const std::byte data[] = {std::byte{0b11}};
    std::span<const std::byte> input(data);
    SBitBuffer bits;
    EXPECT_EQ(dictionary.readCodeFromBuffer(bits, input), 3);
    EXPECT_EQ(bits.bits_available, 6);
}

} // namespace
} // namespace nocturne::support
