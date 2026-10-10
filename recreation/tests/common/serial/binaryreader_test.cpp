#include "common/serial/binaryreader.h"

#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <initializer_list>
#include <vector>

namespace nocturne::common {
namespace {

std::vector<std::byte> bytes(std::initializer_list<int> values) {
    std::vector<std::byte> out;
    for (const int value : values) {
        out.push_back(static_cast<std::byte>(value));
    }
    return out;
}

TEST(CBinaryReader, ReadsIntegersLittleEndian) {
    const auto data = bytes(
        {0x01, 0x34, 0x12, 0x78, 0x56, 0x34, 0x12, 0xf0, 0xde, 0xbc, 0x9a, 0x78, 0x56, 0x34, 0x12});
    CBinaryReader reader(data);
    EXPECT_EQ(reader.read<std::uint8_t>(), 0x01);
    EXPECT_EQ(reader.read<std::uint16_t>(), 0x1234);
    EXPECT_EQ(reader.read<std::uint32_t>(), 0x12345678U);
    EXPECT_EQ(reader.read<std::uint64_t>(), 0x123456789abcdef0ULL);
    EXPECT_FALSE(reader.hasFailed());
    EXPECT_EQ(reader.getRemaining(), 0U);
}

TEST(CBinaryReader, ReadsSignedValuesInTwosComplement) {
    const auto data = bytes({0xff, 0xfe, 0xff, 0xfd, 0xff, 0xff, 0xff});
    CBinaryReader reader(data);
    EXPECT_EQ(reader.read<std::int8_t>(), -1);
    EXPECT_EQ(reader.read<std::int16_t>(), -2);
    EXPECT_EQ(reader.read<std::int32_t>(), -3);
}

TEST(CBinaryReader, ReadsIeeeFloats) {
    // 1.5f and -2.0 as IEEE 754 single and double.
    const auto data =
        bytes({0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0});
    CBinaryReader reader(data);
    EXPECT_EQ(reader.read<float>(), 1.5F);
    EXPECT_EQ(reader.read<double>(), -2.0);
}

TEST(CBinaryReader, ReadPastTheEndFailsAndYieldsZero) {
    const auto data = bytes({0x01, 0x02});
    CBinaryReader reader(data);
    EXPECT_EQ(reader.read<std::uint32_t>(), 0U);
    EXPECT_TRUE(reader.hasFailed());
    EXPECT_EQ(reader.getPosition(), 0U);
}

TEST(CBinaryReader, FailureIsSticky) {
    const auto data = bytes({0x01, 0x02, 0x03});
    CBinaryReader reader(data);
    static_cast<void>(reader.read<std::uint32_t>());
    EXPECT_EQ(reader.read<std::uint8_t>(), 0);
    EXPECT_TRUE(reader.hasFailed());
}

TEST(CBinaryReader, ReadBytesCopiesInOrder) {
    const auto data = bytes({0x0a, 0x0b, 0x0c});
    CBinaryReader reader(data);
    std::array<std::byte, 3> out{};
    reader.readBytes(out);
    EXPECT_EQ(out, (std::array{std::byte{0x0a}, std::byte{0x0b}, std::byte{0x0c}}));
}

TEST(CBinaryReader, ReadBytesPastTheEndZeroesTheOutput) {
    const auto data = bytes({0x0a});
    CBinaryReader reader(data);
    std::array<std::byte, 2> out{std::byte{0xff}, std::byte{0xff}};
    reader.readBytes(out);
    EXPECT_EQ(out, (std::array{std::byte{0}, std::byte{0}}));
    EXPECT_TRUE(reader.hasFailed());
}

TEST(CBinaryReader, ReadStringStopsAtTheNulAndConsumesTheField) {
    const auto data = bytes({'a', 'b', 0, 'x', 0x07});
    CBinaryReader reader(data);
    EXPECT_EQ(reader.readString(4), "ab");
    EXPECT_EQ(reader.read<std::uint8_t>(), 0x07);
}

TEST(CBinaryReader, ReadStringWithoutNulTakesTheWholeField) {
    const auto data = bytes({'a', 'b', 'c'});
    CBinaryReader reader(data);
    EXPECT_EQ(reader.readString(3), "abc");
}

TEST(CBinaryReader, ReadStringPastTheEndFailsAndYieldsEmpty) {
    const auto data = bytes({'a'});
    CBinaryReader reader(data);
    EXPECT_EQ(reader.readString(2), "");
    EXPECT_TRUE(reader.hasFailed());
}

TEST(CBinaryReader, SkipAdvancesAndFailsPastTheEnd) {
    const auto data = bytes({0x01, 0x02, 0x03});
    CBinaryReader reader(data);
    reader.skip(2);
    EXPECT_EQ(reader.read<std::uint8_t>(), 0x03);
    reader.skip(1);
    EXPECT_TRUE(reader.hasFailed());
}

TEST(CBinaryReader, SeekMovesWithinTheBufferIncludingItsEnd) {
    const auto data = bytes({0x01, 0x02, 0x03});
    CBinaryReader reader(data);
    reader.seek(2);
    EXPECT_EQ(reader.read<std::uint8_t>(), 0x03);
    reader.seek(0);
    EXPECT_EQ(reader.read<std::uint8_t>(), 0x01);
    reader.seek(3);
    EXPECT_EQ(reader.getRemaining(), 0U);
    EXPECT_FALSE(reader.hasFailed());
}

TEST(CBinaryReader, SeekPastTheEndFailsWithoutMoving) {
    const auto data = bytes({0x01, 0x02});
    CBinaryReader reader(data);
    reader.seek(1);
    reader.seek(3);
    EXPECT_TRUE(reader.hasFailed());
    EXPECT_EQ(reader.getPosition(), 1U);
}

} // namespace
} // namespace nocturne::common
