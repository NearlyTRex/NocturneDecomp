#include "common/image/png.h"

#include <array>
#include <cstddef>
#include <string_view>
#include <zlib.h>

namespace nocturne::common {
namespace {

constexpr std::array<std::uint8_t, 8> kSignature{0x89, 'P', 'N', 'G', '\r', '\n', 0x1a, '\n'};
constexpr std::size_t kChannels = 3;
constexpr std::uint8_t kBitDepth = 8;
constexpr std::uint8_t kTruecolour = 2;
// Each row's first byte names its filter; none leaves the row as it is.
constexpr std::uint8_t kNoFilter = 0;

void appendBigEndian(std::vector<std::uint8_t> &out, std::uint32_t value) {
    for (const unsigned shift : {24U, 16U, 8U, 0U}) {
        out.push_back(static_cast<std::uint8_t>(value >> shift));
    }
}

// Its length, type and data, then the CRC over the type and data.
void appendChunk(std::vector<std::uint8_t> &out, std::string_view type,
                 std::span<const std::uint8_t> data) {
    appendBigEndian(out, static_cast<std::uint32_t>(data.size()));
    const std::size_t type_start = out.size();
    out.insert(out.end(), type.begin(), type.end());
    out.insert(out.end(), data.begin(), data.end());
    const uLong crc = crc32(0, &out[type_start], static_cast<uInt>(out.size() - type_start));
    appendBigEndian(out, static_cast<std::uint32_t>(crc));
}

// Each row behind its filter byte.
std::vector<std::uint8_t> filterRows(std::size_t width, std::size_t height,
                                     std::span<const std::uint8_t> rgb) {
    const std::size_t row_bytes = width * kChannels;
    std::vector<std::uint8_t> rows;
    rows.reserve(height * (row_bytes + 1));
    for (std::size_t y = 0; y < height; ++y) {
        rows.push_back(kNoFilter);
        const std::span<const std::uint8_t> row = rgb.subspan(y * row_bytes, row_bytes);
        rows.insert(rows.end(), row.begin(), row.end());
    }
    return rows;
}

} // namespace

std::optional<std::vector<std::uint8_t>> encodePng(int width, int height,
                                                   std::span<const std::uint8_t> rgb, int level) {
    if (width <= 0 || height <= 0 ||
        rgb.size() !=
            static_cast<std::size_t>(width) * static_cast<std::size_t>(height) * kChannels) {
        return std::nullopt;
    }
    const std::vector<std::uint8_t> rows =
        filterRows(static_cast<std::size_t>(width), static_cast<std::size_t>(height), rgb);
    uLongf compressed_size = compressBound(static_cast<uLong>(rows.size()));
    std::vector<std::uint8_t> compressed(compressed_size);
    if (compress2(compressed.data(), &compressed_size, rows.data(), static_cast<uLong>(rows.size()),
                  level) != Z_OK) {
        return std::nullopt;
    }
    compressed.resize(compressed_size);

    std::vector<std::uint8_t> header;
    appendBigEndian(header, static_cast<std::uint32_t>(width));
    appendBigEndian(header, static_cast<std::uint32_t>(height));
    // Its depth and colour type, then deflate, the adaptive filters and no interlacing.
    header.insert(header.end(), {kBitDepth, kTruecolour, 0, 0, 0});

    std::vector<std::uint8_t> png(kSignature.begin(), kSignature.end());
    appendChunk(png, "IHDR", header);
    appendChunk(png, "IDAT", compressed);
    appendChunk(png, "IEND", {});
    return png;
}

} // namespace nocturne::common
