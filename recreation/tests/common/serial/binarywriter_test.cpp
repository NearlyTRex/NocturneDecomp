#include "common/serial/binaryreader.h"
#include "common/serial/binarywriter.h"

#include <gtest/gtest.h>

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

std::vector<std::byte> contents(const CBinaryWriter &writer) {
    const std::span<const std::byte> data = writer.getData();
    return {data.begin(), data.end()};
}

TEST(CBinaryWriter, StartsEmpty) {
    const CBinaryWriter writer;
    EXPECT_TRUE(writer.getData().empty());
}

TEST(CBinaryWriter, WritesIntegersLittleEndian) {
    CBinaryWriter writer;
    writer.write<std::uint8_t>(0x01);
    writer.write<std::uint16_t>(0x1234);
    writer.write<std::int32_t>(-2);
    EXPECT_EQ(contents(writer), bytes({0x01, 0x34, 0x12, 0xfe, 0xff, 0xff, 0xff}));
}

TEST(CBinaryWriter, RoundTripsEveryValueTypeThroughTheReader) {
    CBinaryWriter writer;
    writer.write<std::int8_t>(-5);
    writer.write<std::int16_t>(-300);
    writer.write<std::uint32_t>(0xdeadbeefU);
    writer.write<std::int64_t>(-1234567890123LL);
    writer.write<std::uint64_t>(0xfedcba9876543210ULL);
    writer.write<float>(-0.25F);
    writer.write<double>(3.5);

    CBinaryReader reader(writer.getData());
    EXPECT_EQ(reader.read<std::int8_t>(), -5);
    EXPECT_EQ(reader.read<std::int16_t>(), -300);
    EXPECT_EQ(reader.read<std::uint32_t>(), 0xdeadbeefU);
    EXPECT_EQ(reader.read<std::int64_t>(), -1234567890123LL);
    EXPECT_EQ(reader.read<std::uint64_t>(), 0xfedcba9876543210ULL);
    EXPECT_EQ(reader.read<float>(), -0.25F);
    EXPECT_EQ(reader.read<double>(), 3.5);
    EXPECT_EQ(reader.getRemaining(), 0U);
    EXPECT_FALSE(reader.hasFailed());
}

TEST(CBinaryWriter, WriteBytesAppendsVerbatim) {
    CBinaryWriter writer;
    writer.writeBytes(bytes({0x0a, 0x0b}));
    writer.writeBytes(bytes({0x0c}));
    EXPECT_EQ(contents(writer), bytes({0x0a, 0x0b, 0x0c}));
}

TEST(CBinaryWriter, WriteStringPadsTheFieldWithNuls) {
    CBinaryWriter writer;
    writer.writeString("ab", 4);
    EXPECT_EQ(contents(writer), bytes({'a', 'b', 0, 0}));
}

TEST(CBinaryWriter, WriteStringTruncatesToLeaveRoomForTheNul) {
    CBinaryWriter writer;
    writer.writeString("abcdef", 4);
    EXPECT_EQ(contents(writer), bytes({'a', 'b', 'c', 0}));
}

TEST(CBinaryWriter, WriteStringIntoAnEmptyFieldWritesNothing) {
    CBinaryWriter writer;
    writer.writeString("abc", 0);
    EXPECT_TRUE(writer.getData().empty());
}

} // namespace
} // namespace nocturne::common
