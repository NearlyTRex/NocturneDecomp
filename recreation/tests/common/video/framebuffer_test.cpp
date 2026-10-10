#include "common/video/framebuffer.h"

#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <stdexcept>
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

// Fails the test by throwing when the converter refused the frame.
SFrameUpload required(const std::optional<SFrameUpload> &upload) {
    if (!upload) {
        throw std::logic_error("frame was refused");
    }
    return *upload;
}

std::array<std::uint8_t, 768> greyPalette() {
    std::array<std::uint8_t, 768> rgb{};
    for (std::size_t i = 0; i < 256; ++i) {
        rgb.at(i * 3) = static_cast<std::uint8_t>(i);
        rgb.at((i * 3) + 1) = static_cast<std::uint8_t>(i);
        rgb.at((i * 3) + 2) = static_cast<std::uint8_t>(i);
    }
    return rgb;
}

TEST(Framebuffer, AcceptsTheDepthsSetScreenResolutionAccepts) {
    EXPECT_EQ(layoutForDepth(8), EPixelLayout::Indexed8);
    EXPECT_EQ(layoutForDepth(16), EPixelLayout::Rgb565);
    EXPECT_EQ(layoutForDepth(32), EPixelLayout::Bgra8888);
}

TEST(Framebuffer, RejectsOtherDepths) {
    EXPECT_FALSE(layoutForDepth(24).has_value());
    EXPECT_FALSE(layoutForDepth(15).has_value());
    EXPECT_FALSE(layoutForDepth(0).has_value());
}

TEST(Framebuffer, ReportsChannelMasksPerLayout) {
    EXPECT_EQ(getPixelFormat(EPixelLayout::Indexed8), SPixelFormat{});
    EXPECT_EQ(getPixelFormat(EPixelLayout::Rgb565),
              (SPixelFormat{.red_mask = 0xf800, .green_mask = 0x07e0, .blue_mask = 0x001f}));
    EXPECT_EQ(getPixelFormat(EPixelLayout::Bgra8888),
              (SPixelFormat{.red_mask = 0xff0000, .green_mask = 0xff00, .blue_mask = 0xff}));
}

TEST(Framebuffer, BytesPerPixelFollowTheDepth) {
    EXPECT_EQ(getBytesPerPixel(EPixelLayout::Indexed8), 1);
    EXPECT_EQ(getBytesPerPixel(EPixelLayout::Rgb565), 2);
    EXPECT_EQ(getBytesPerPixel(EPixelLayout::Bgra8888), 4);
}

TEST(CFrameConverter, PassesDirectColourThroughWithItsPitchInPixels) {
    CFrameConverter converter;
    converter.setMode(EPixelLayout::Rgb565, 2, 2);
    const auto frame = bytes({1, 2, 3, 4, 0, 0, 5, 6, 7, 8});
    const SFrameUpload upload = required(converter.convert(frame, 6));
    EXPECT_EQ(upload.layout, EPixelLayout::Rgb565);
    EXPECT_EQ(upload.pixels.data(), frame.data());
    EXPECT_EQ(upload.row_length, 3);
    EXPECT_EQ(converter.getUploadLayout(), EPixelLayout::Rgb565);
}

TEST(CFrameConverter, ExpandsIndexedPixelsThroughThePalette) {
    CFrameConverter converter;
    converter.setMode(EPixelLayout::Indexed8, 2, 2);
    std::array<std::uint8_t, 768> rgb{};
    rgb.at(3) = 0x10; // entry 1: R
    rgb.at(4) = 0x20; // entry 1: G
    rgb.at(5) = 0x30; // entry 1: B
    converter.setPalette(rgb);
    // A pitch of 3 leaves a padding byte after each two-pixel row.
    const auto frame = bytes({1, 0, 9, 0, 1});
    const SFrameUpload upload = required(converter.convert(frame, 3));
    EXPECT_EQ(upload.layout, EPixelLayout::Bgra8888);
    EXPECT_EQ(upload.row_length, 2);
    EXPECT_EQ(std::vector<std::byte>(upload.pixels.begin(), upload.pixels.end()),
              bytes({0x30, 0x20, 0x10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x30, 0x20, 0x10, 0}));
    EXPECT_EQ(converter.getUploadLayout(), EPixelLayout::Bgra8888);
}

TEST(CFrameConverter, UsesTheWholePalette) {
    CFrameConverter converter;
    converter.setMode(EPixelLayout::Indexed8, 1, 1);
    converter.setPalette(greyPalette());
    const auto frame = bytes({255});
    const SFrameUpload upload = required(converter.convert(frame, 1));
    EXPECT_EQ(std::vector<std::byte>(upload.pixels.begin(), upload.pixels.end()),
              bytes({255, 255, 255, 0}));
}

TEST(CFrameConverter, LastRowNeedsNoPadding) {
    CFrameConverter converter;
    converter.setMode(EPixelLayout::Bgra8888, 1, 2);
    EXPECT_TRUE(converter.convert(bytes({0, 0, 0, 0, 9, 9, 9, 9, 0, 0, 0, 0}), 8).has_value());
    EXPECT_FALSE(converter.convert(bytes({0, 0, 0, 0, 9, 9, 9, 9, 0, 0, 0}), 8).has_value());
}

TEST(CFrameConverter, RejectsAPitchNarrowerThanARow) {
    CFrameConverter converter;
    converter.setMode(EPixelLayout::Rgb565, 2, 1);
    EXPECT_FALSE(converter.convert(bytes({0, 0, 0, 0}), 2).has_value());
}

TEST(CFrameConverter, RejectsAPitchOfPartPixels) {
    CFrameConverter converter;
    converter.setMode(EPixelLayout::Rgb565, 1, 2);
    EXPECT_FALSE(converter.convert(bytes({0, 0, 0, 0, 0, 0}), 3).has_value());
}

TEST(CFrameConverter, RejectsFramesBeforeAModeIsSet) {
    CFrameConverter converter;
    EXPECT_FALSE(converter.convert(bytes({0, 0, 0, 0}), 4).has_value());
    converter.setMode(EPixelLayout::Bgra8888, 1, 0);
    EXPECT_FALSE(converter.convert(bytes({0, 0, 0, 0}), 4).has_value());
}

} // namespace
} // namespace nocturne::common
