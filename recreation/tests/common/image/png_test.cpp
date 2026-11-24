#include "common/image/png.h"
#include "tests/mocks/common/pngimage.h"
#include "tests/mocks/common/required.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <optional>
#include <vector>

namespace nocturne::common {
namespace {

using ::testing::ElementsAreArray;

// A 3x2 image: red, green, blue over white, grey, black.
constexpr std::array<std::uint8_t, 18> kPixels{0xff, 0,    0,    0,    0xff, 0,    0, 0, 0xff,
                                               0xff, 0xff, 0xff, 0x80, 0x80, 0x80, 0, 0, 0};

TEST(EncodePng, ReadsBackAsTheSameImage) {
    std::optional<std::vector<std::uint8_t>> png = encodePng(3, 2, kPixels, kPngFastest);
    const std::optional<SPngImage> image = readPng(required(png, "PNG"));
    ASSERT_TRUE(image.has_value());
    EXPECT_EQ(image->width, 3);
    EXPECT_EQ(image->height, 2);
    EXPECT_THAT(image->rgb, ElementsAreArray(kPixels));
    EXPECT_EQ(image->pixel(1, 0), 0x00ff00U);
    EXPECT_EQ(image->pixel(1, 1), 0x808080U);
}

TEST(EncodePng, EveryLevelZlibTakesMakesTheSameImage) {
    for (const int level : {0, 1, 9}) {
        std::optional<std::vector<std::uint8_t>> png = encodePng(3, 2, kPixels, level);
        const std::optional<SPngImage> image = readPng(required(png, "PNG"));
        ASSERT_TRUE(image.has_value()) << level;
        EXPECT_THAT(image->rgb, ElementsAreArray(kPixels)) << level;
    }
}

TEST(EncodePng, PixelsThatAreNotTheImagesAreRefused) {
    EXPECT_FALSE(encodePng(0, 2, {}, kPngFastest).has_value());
    EXPECT_FALSE(encodePng(3, 0, {}, kPngFastest).has_value());
    EXPECT_FALSE(encodePng(2, 2, kPixels, kPngFastest).has_value());
}

TEST(EncodePng, ALevelZlibRefusesMakesNoPng) {
    EXPECT_FALSE(encodePng(3, 2, kPixels, 42).has_value());
}

} // namespace
} // namespace nocturne::common
