#pragma once

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string>
#include <vector>
#include <zlib.h>

namespace nocturne::common {

// An RGB image read back from a PNG.
struct SPngImage {
    int width = 0;
    int height = 0;
    std::vector<std::uint8_t> rgb;

    // The pixel's channels, as 0xRRGGBB.
    [[nodiscard]] std::uint32_t pixel(int x, int y) const {
        const auto at = ((static_cast<std::size_t>(y) * static_cast<std::size_t>(width)) +
                         static_cast<std::size_t>(x)) *
                        3;
        return (static_cast<std::uint32_t>(rgb[at]) << 16U) |
               (static_cast<std::uint32_t>(rgb[at + 1]) << 8U) | rgb[at + 2];
    }
};

namespace png_detail {

inline std::uint32_t readBigEndian(std::span<const std::uint8_t> bytes, std::size_t at) {
    return (static_cast<std::uint32_t>(bytes[at]) << 24U) |
           (static_cast<std::uint32_t>(bytes[at + 1]) << 16U) |
           (static_cast<std::uint32_t>(bytes[at + 2]) << 8U) | bytes[at + 3];
}

} // namespace png_detail

// The image in a PNG as encodePng writes one: 8-bit truecolour, unfiltered rows, one IDAT. None
// when the signature, a chunk's CRC, the header or the data are not that.
inline std::optional<SPngImage> readPng(std::span<const std::uint8_t> png) {
    using png_detail::readBigEndian;
    constexpr std::array<std::uint8_t, 8> kSignature{0x89, 'P', 'N', 'G', '\r', '\n', 0x1a, '\n'};
    if (png.size() < kSignature.size() ||
        !std::equal(kSignature.begin(), kSignature.end(), png.begin())) {
        return std::nullopt;
    }
    SPngImage image;
    std::vector<std::uint8_t> data;
    bool ended = false;
    for (std::size_t at = kSignature.size(); !ended;) {
        if (at + 12 > png.size()) {
            return std::nullopt;
        }
        const std::uint32_t length = readBigEndian(png, at);
        if (at + 12 + length > png.size()) {
            return std::nullopt;
        }
        const std::string type(png.begin() + static_cast<std::ptrdiff_t>(at + 4),
                               png.begin() + static_cast<std::ptrdiff_t>(at + 8));
        const std::span<const std::uint8_t> body = png.subspan(at + 8, length);
        const uLong crc = crc32(0, &png[at + 4], length + 4);
        if (crc != readBigEndian(png, at + 8 + length)) {
            return std::nullopt;
        }
        if (type == "IHDR") {
            const std::array<std::uint8_t, 5> kTruecolour8{8, 2, 0, 0, 0};
            if (length != 13 ||
                !std::equal(kTruecolour8.begin(), kTruecolour8.end(), body.begin() + 8)) {
                return std::nullopt;
            }
            image.width = static_cast<int>(readBigEndian(body, 0));
            image.height = static_cast<int>(readBigEndian(body, 4));
        } else if (type == "IDAT") {
            data.insert(data.end(), body.begin(), body.end());
        }
        ended = type == "IEND";
        at += 12 + length;
    }
    const std::size_t row_bytes = static_cast<std::size_t>(image.width) * 3;
    std::vector<std::uint8_t> rows((row_bytes + 1) * static_cast<std::size_t>(image.height));
    uLongf size = rows.size();
    if (uncompress(rows.data(), &size, data.data(), data.size()) != Z_OK || size != rows.size()) {
        return std::nullopt;
    }
    for (std::size_t y = 0; y < static_cast<std::size_t>(image.height); ++y) {
        const std::size_t start = y * (row_bytes + 1);
        if (rows[start] != 0) {
            return std::nullopt;
        }
        image.rgb.insert(image.rgb.end(), rows.begin() + static_cast<std::ptrdiff_t>(start + 1),
                         rows.begin() + static_cast<std::ptrdiff_t>(start + 1 + row_bytes));
    }
    return image;
}

} // namespace nocturne::common
