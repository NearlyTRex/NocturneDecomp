#include "engine/pod/pod.h"
#include "engine/pod/pod_functions.h"
#include "tests/mocks/engine/podfixture.h"
#include "tests/mocks/engine/podimage.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <ios>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::ElementsAre;
using ::testing::IsEmpty;

std::vector<std::byte> bytesOf(std::string_view text) {
    std::vector<std::byte> bytes;
    for (const char c : text) {
        bytes.push_back(static_cast<std::byte>(c));
    }
    return bytes;
}

std::vector<std::byte> bytesOfHex(std::string_view hex) {
    constexpr int kHexBase = 16;
    std::vector<std::byte> bytes;
    for (std::size_t at = 0; at + 1 < hex.size(); at += 2) {
        const std::string digits(hex.substr(at, 2));
        bytes.push_back(static_cast<std::byte>(std::stoul(digits, nullptr, kHexBase)));
    }
    return bytes;
}

// nocedit's crc32UpdateByte, instruction for instruction from its .asm: the byte goes into the
// top of the CRC, then eight rounds of LEA EAX,[EDX*2] / TEST EDX,0x80000000 / XOR 0x04C11DB7.
std::uint32_t asmCrc32UpdateByte(std::uint32_t current_crc, std::uint8_t data_byte) {
    std::uint32_t edx = current_crc ^ (static_cast<std::uint32_t>(data_byte) << 24U);
    for (int round = 0; round < 8; ++round) {
        const std::uint32_t doubled = edx << 1U;
        edx = (edx & 0x80000000U) != 0 ? doubled ^ 0x04C11DB7U : doubled;
    }
    return edx;
}

struct SByteCase {
    std::uint32_t crc;
    std::uint8_t byte;
    std::uint32_t result;
};

struct SBufferCase {
    std::string_view hex;
    std::uint32_t initial;
    std::uint32_t result;
};

// Captured by calling nocedit.exe's own code at 0x0054f2e0 and 0x0054f3a0 in a 32-bit harness.
constexpr std::array kNoceditByteCases = {
    SByteCase{.crc = 0x87985aa5U, .byte = 0xa3U, .result = 0x137d653cU},
    SByteCase{.crc = 0x4820f4c4U, .byte = 0x98U, .result = 0x316f8fe9U},
    SByteCase{.crc = 0x703a0788U, .byte = 0x4dU, .result = 0xdff86343U},
    SByteCase{.crc = 0x89ca4f1dU, .byte = 0x29U, .result = 0x3b604b0eU},
    SByteCase{.crc = 0xd37862a7U, .byte = 0x11U, .result = 0x2c6a0cf7U},
    SByteCase{.crc = 0x69bf3df8U, .byte = 0xf8U, .result = 0x9ee1de29U},
    SByteCase{.crc = 0xfcbe64a0U, .byte = 0x15U, .result = 0x59047676U},
    SByteCase{.crc = 0x8cc6cec6U, .byte = 0x69U, .result = 0x14a28b12U},
    SByteCase{.crc = 0xcd8c4692U, .byte = 0x9dU, .result = 0xf4d13907U},
    SByteCase{.crc = 0xe7c283c9U, .byte = 0x94U, .result = 0x2f74f23eU},
    SByteCase{.crc = 0x2d54bebfU, .byte = 0x3eU, .result = 0x15ec42a9U},
    SByteCase{.crc = 0x29fb2f0cU, .byte = 0x21U, .result = 0xdd27e1b8U},
};

constexpr std::array kNoceditBufferCases = {
    SBufferCase{.hex = "", .initial = 0xdeadbeefU, .result = 0xdeadbeefU},
    SBufferCase{.hex = "52c0", .initial = 0xb8333bb0U, .result = 0x7698847fU},
    SBufferCase{
        .hex = "06e72c26045bd888ba4f1e2d600e", .initial = 0xffffffffU, .result = 0x055e5c02U},
    SBufferCase{.hex = "86f76f3475661d", .initial = 0xffffffffU, .result = 0x903fd405U},
    SBufferCase{.hex = "ce156ba378549552", .initial = 0x36586a8aU, .result = 0x4d25e922U},
    SBufferCase{.hex = "3e0f5416", .initial = 0xffffffffU, .result = 0xaa962966U},
    SBufferCase{.hex = "b7a6a7f549", .initial = 0x75620c24U, .result = 0x5e660707U},
};

// The catalogued CRC-32/MPEG-2 check value; nocedit's own code gives the same.
TEST(Crc32, ChecksTheStandardStringToTheMpeg2CheckValue) {
    EXPECT_EQ(crc32UpdateBuffer(bytesOf("123456789"), kCrc32Initial), 0x0376E6E7U);
}

TEST(Crc32, UpdateByteAgreesWithNoceditsCode) {
    for (const SByteCase &c : kNoceditByteCases) {
        EXPECT_EQ(crc32UpdateByte(c.crc, c.byte), c.result) << std::hex << c.crc << " " << +c.byte;
    }
}

TEST(Crc32, UpdateBufferAgreesWithNoceditsCode) {
    for (const SBufferCase &c : kNoceditBufferCases) {
        EXPECT_EQ(crc32UpdateBuffer(bytesOfHex(c.hex), c.initial), c.result) << c.hex;
    }
}

// Every byte, from the initial value and from values with each top bit pattern, as the asm does it.
TEST(Crc32, UpdateByteAgreesWithTheAsmForEveryByte) {
    constexpr std::array kCrcs = {kCrc32Initial, 0x00000000U, 0x80000000U, 0x7FFFFFFFU,
                                  0x12345678U,   0xDEADBEEFU, 0x00FF00FFU};
    for (const std::uint32_t crc : kCrcs) {
        for (unsigned value = 0; value <= 0xFFU; ++value) {
            const auto byte = static_cast<std::uint8_t>(value);
            EXPECT_EQ(crc32UpdateByte(crc, byte), asmCrc32UpdateByte(crc, byte))
                << std::hex << crc << " " << value;
        }
    }
}

// Front to back: the same bytes reversed are a different checksum.
TEST(Crc32, UpdateBufferTakesTheBytesInOrder) {
    const std::vector<std::byte> forward = bytesOf("123456789");
    const std::vector<std::byte> reversed = bytesOf("987654321");
    std::uint32_t by_byte = kCrc32Initial;
    for (const std::byte value : forward) {
        by_byte = crc32UpdateByte(by_byte, std::to_integer<std::uint8_t>(value));
    }
    EXPECT_EQ(crc32UpdateBuffer(forward, kCrc32Initial), by_byte);
    EXPECT_NE(crc32UpdateBuffer(reversed, kCrc32Initial), by_byte);
}

// A file is checksummed a block at a time, each block carrying on from the last.
TEST(Crc32, UpdateBufferCarriesOnAcrossBlocks) {
    const std::vector<std::byte> whole = bytesOf("123456789");
    const std::span<const std::byte> all(whole);
    const std::uint32_t first = crc32UpdateBuffer(all.first(4), kCrc32Initial);
    EXPECT_EQ(crc32UpdateBuffer(all.subspan(4), first), 0x0376E6E7U);
}

class FindFilesByExtensionTest : public CPodFixture {
protected:
    FindFilesByExtensionTest() {
        givenFile("ACT1.POD", makePod2("", {{.name = "B.MSN"},
                                            {.name = "A.MSN"},
                                            {.name = "c.msn"},
                                            {.name = "SET.SET"}}));
        givenFile("ACT2.POD", makePod2("", {{.name = "A.MSN"}, {.name = "D.MSN"}}));
        pod_.mount("ACT1.POD");
        pod_.mount("ACT2.POD");
    }

    CPod pod_{file_system_, dosio_};
};

// The extension is matched in upper case and the names compared exactly, so "c.msn" isn't one.
TEST_F(FindFilesByExtensionTest, ListsUpperCaseMatchesPodByPodInNameOrder) {
    EXPECT_THAT(findFilesByExtension(pod_, "msn", 10, 32), ElementsAre("A.MSN", "B.MSN", "D.MSN"));
}

TEST_F(FindFilesByExtensionTest, StopsAtMaxResults) {
    EXPECT_THAT(findFilesByExtension(pod_, ".MSN", 2, 32), ElementsAre("A.MSN", "B.MSN"));
}

TEST_F(FindFilesByExtensionTest, CutsNamesToTheResultLength) {
    EXPECT_THAT(findFilesByExtension(pod_, "SET", 10, 4), ElementsAre("SET"));
}

TEST_F(FindFilesByExtensionTest, NoMatchesIsEmpty) {
    EXPECT_THAT(findFilesByExtension(pod_, "WAV", 10, 32), IsEmpty());
}

// Only 'a' to 'z' are raised, so "s{t" can't match "S{T" through a case change it doesn't have.
TEST_F(FindFilesByExtensionTest, OnlyAsciiLettersAreRaised) {
    givenFile("ODD.POD", makePod2("", {{.name = "X.S{T"}}));
    pod_.mount("ODD.POD");
    EXPECT_THAT(findFilesByExtension(pod_, "s{t", 10, 32), ElementsAre("X.S{T"));
}

} // namespace
} // namespace nocturne::engine
