#include "support/codec/lzwdecompress.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace nocturne::support {
namespace {

using ::testing::Each;
using ::testing::ElementsAre;
using ::testing::SizeIs;

// Streams the original's compressor writes, decoded as here by nocedit's own code. The first
// fills a table of six codes, which starts again.
constexpr std::byte kRepeats[] = {std::byte{0x38}, std::byte{0x94}, std::byte{0xdf},
                                  std::byte{0x30}};
constexpr std::byte kZeroRun[] = {std::byte{0x00}, std::byte{0xf0}, std::byte{0xfe},
                                  std::byte{0xfd}, std::byte{0xfb}, std::byte{0x7f},
                                  std::byte{0xff}, std::byte{0xfb}, std::byte{0xdf},
                                  std::byte{0x7f}, std::byte{0xff}, std::byte{0x57}};
constexpr std::size_t kZeroRunLength = 130;
constexpr int kSixCodes = 6;
constexpr int kTwoBits = 2;
constexpr int kRoom = 300;
constexpr int kFogBits = 6;

TEST(CLZWDecompress, DecodesWhatTheOriginalCompressed) {
    CLZWDecompress decompress(kSixCodes, kTwoBits);
    decompress.init();
    std::vector<std::uint8_t> output;
    decompress.processBuffer(kRepeats, output);
    EXPECT_THAT(output, ElementsAre(0, 1, 0, 1, 0, 1, 0, 1, 2, 3, 3, 3, 3, 0, 1, 2));
}

TEST(CLZWDecompress, SixBitValuesAsTheFogsAre) {
    CLZWDecompress decompress(kRoom, kFogBits);
    decompress.init();
    std::vector<std::uint8_t> output;
    decompress.processBuffer(kZeroRun, output);
    EXPECT_THAT(output, SizeIs(kZeroRunLength));
    EXPECT_THAT(output, Each(0));
}

TEST(CLZWDecompress, EachStreamStartsAfreshAndAddsToTheOutput) {
    CLZWDecompress decompress(kRoom, kFogBits);
    decompress.init();
    std::vector<std::uint8_t> output;
    decompress.processBuffer(kZeroRun, output);
    decompress.init();
    decompress.processBuffer(kZeroRun, output);
    EXPECT_THAT(output, SizeIs(2 * kZeroRunLength));
}

} // namespace
} // namespace nocturne::support
