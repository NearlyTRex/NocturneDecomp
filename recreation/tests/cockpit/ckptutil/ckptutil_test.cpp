#include "cockpit/ckptutil/ckptutil.h"
#include "common/error/fatalerror.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <string_view>
#include <type_traits>
#include <vector>

namespace nocturne::cockpit {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CockpitCkptutilFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&expandIndexedToRGB), void (*)(void *, void *, int)>);
    static_assert(std::is_same_v<decltype(&optimizedMemcpy), void (*)(void *, void *, int)>);
    static_assert(std::is_same_v<decltype(&mmxOptimizedMemcpy), void (*)(void *, void *, int)>);
    static_assert(std::is_same_v<decltype(&basicIndexedTo16Bit), void (*)(void *, void *, int)>);
    static_assert(
        std::is_same_v<decltype(&getColorConversionFunction), ColorConversionFunc *(*)()>);
    static_assert(
        std::is_same_v<decltype(&getOptimizedMemcpyFunction), OptimizedMemcpyFunc *(*)()>);
    static_assert(
        std::is_same_v<decltype(&get16BitConversionFunction), ColorConversionFunc *(*)()>);
    static_assert(std::is_same_v<decltype(&readBitmapFile),
                                 std::vector<std::uint8_t> (*)(const engine::CDosIo &,
                                                               std::string_view, std::size_t)>);
    static_assert(
        std::is_same_v<decltype(&loadACTToIndexedPalette), void (*)(char *, std::uint8_t *)>);
    static_assert(std::is_same_v<decltype(&drawLineAA), void (*)(int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&isLineClippingDisabled), int (*)()>);
    static_assert(std::is_same_v<decltype(&setLineClippingDisabled), void (*)(int)>);
}

using CReadBitmapFileTest = engine::CPodFixture;

TEST_F(CReadBitmapFileTest, ReadsTheFirstBytesOfTheFile) {
    givenFile("art\\sheet.raw", "abcdef");
    EXPECT_EQ(readBitmapFile(dosio_, "sheet.raw", 4),
              (std::vector<std::uint8_t>{'a', 'b', 'c', 'd'}));
}

TEST_F(CReadBitmapFileTest, AMissingFileIsFatal) {
    EXPECT_THAT(
        [this] { (void)readBitmapFile(dosio_, "gone.raw", 4); },
        ThrowsMessage<common::CFatalError>(StrEq("Unable to open bitmap file (gone.raw).")));
}

TEST_F(CReadBitmapFileTest, AShortFileIsFatal) {
    givenFile("art\\short.raw", "ab");
    EXPECT_THAT(
        [this] { (void)readBitmapFile(dosio_, "short.raw", 4); },
        ThrowsMessage<common::CFatalError>(StrEq("Unable to read bitmap file (short.raw).")));
}

} // namespace
} // namespace nocturne::cockpit
