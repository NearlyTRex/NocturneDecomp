#include "engine/font/bitfont.h"

#include "cockpit/ckptutil/ckptutil.h"
#include "common/error/error.h"
#include "common/math/bits.h"
#include "common/text/ascii.h"
#include "common/text/path.h"
#include "common/video/framebuffer.h"
#include "engine/2d/2d.h"
#include "engine/dosio/dosio.h"
#include "engine/screendevice.h"

#include <algorithm>
#include <format>
#include <utility>

namespace nocturne::engine {
namespace {

// openFontFile's sheets start at '!': a space is only an advance.
constexpr int kFirstSheetChar = 0x21;
constexpr int kLastChar = 0xff;
// What a short .act reads as past its end: fgetc's EOF, stored as a byte.
constexpr std::uint8_t kPastEndOfFile = 0xff;

} // namespace

// nocedit 0x004cce90
CBitFont::CBitFont(const CDosIo &dosio, IScreenDevice &screen, const C2d &two_d, const C3d &three_d,
                   const CFontColors &colors)
    : dosio_(dosio), screen_(screen), two_d_(two_d), three_d_(three_d), colors_(colors) {
    reset();
}

// The 3D path the original also kept a flag for is gone: nothing ever set it.
// nocedit 0x004cced0
void CBitFont::reset() {
    sheets_.clear();
    char_positions_.fill(std::nullopt);
    char_bitmap_index_.fill(0);
    char_widths_.fill(0);
    char_heights_.fill(0);
    char_y_offsets_.fill(0);
    max_char_height_ = 0;
    current_line_height_ = 0;
    char_spacing_ = 1;
    line_spacing_ = 2;
    char_widths_[' '] = 8;
    shadow_offset_x_ = 2;
    shadow_offset_y_ = 1;
    rendering_ready_ = false;
    is_initialized_ = false;
    win_font_helper_ = nullptr;
    max_char_width_ = 0;
}

// The destructor only called this; the sheets go with the font.
// nocedit 0x004cceb0
// nocedit 0x004cd4e0
void CBitFont::free() {
    reset();
}

// nocedit 0x004ccfc0
void CBitFont::openFontFile(std::string_view filename, int width, int height, int load_flags) {
    loadNewBitmap(filename, width, height, kFirstSheetChar, kLastChar, load_flags);
}

// nocedit 0x004cd280
void CBitFont::loadNewBitmap(std::string_view filename, int width, int height, int first_char,
                             int /*last_char*/, int load_flags) {
    free();
    load_flags_ = load_flags;
    loadBitmap(filename, width, height, first_char);
}

// nocedit 0x004ccff0
void CBitFont::loadBitmap(std::string_view filename, int width, int height, int first_char) {
    if (sheets_.size() >= kMaxBitmaps) {
        common::displayErrorAndQuit("Too many bitmaps");
    }
    const std::int64_t size = static_cast<std::int64_t>(width) * height;
    if (dosio_.getFileSize("art", filename) < size) {
        common::displayErrorAndQuit(std::format("Invalid font file size ({}).", filename));
    }
    SSheet &sheet = sheets_.emplace_back();
    sheet.name = common::toUpperAscii(filename);
    sheet.width = width;
    sheet.pixels = cockpit::readBitmapFile(dosio_, filename, static_cast<std::size_t>(size));
    const std::string act_name =
        std::string(filename.substr(0, filename.size() - common::pathExtension(filename).size())) +
        ".act";
    if (const std::optional<std::string> act = dosio_.readFile("art", act_name)) {
        sheet.palette.fill(kPastEndOfFile);
        std::copy_n(act->begin(), std::min(act->size(), sheet.palette.size()),
                    sheet.palette.begin());
    }
    parseCharacterMetrics(sheets_.size() - 1, width, height, first_char);
    remapPalette();
}

// The lowest row with anything but the transparent index in it, counted from 1.
// nocedit 0x004cda20
int CBitFont::calculateCharacterHeight(std::span<const std::uint8_t> char_bitmap, int char_width,
                                       int char_height, int bitmap_stride) const {
    int height = 0;
    for (int row = 0; row < char_height; ++row) {
        const std::span<const std::uint8_t> pixels = char_bitmap.subspan(
            static_cast<std::size_t>(row) * static_cast<std::size_t>(bitmap_stride),
            static_cast<std::size_t>(char_width));
        if (std::ranges::any_of(pixels, [this](std::uint8_t pixel) {
                return std::cmp_not_equal(pixel, load_flags_);
            })) {
            height = row + 1;
        }
    }
    return height;
}

// The first pixel that isn't transparent is the marker colour. A row with a marker in it heads
// a band of glyphs that runs to the next such row, and each run of markers along it spans one
// glyph, next character after next.
// nocedit 0x004cd550
void CBitFont::parseCharacterMetrics(std::size_t bitmap, int bitmap_width, int bitmap_height,
                                     int first_char) {
    const SSheet &sheet = sheets_[bitmap];
    const auto marker_at = std::ranges::find_if(sheet.pixels, [this](std::uint8_t pixel) {
        return std::cmp_not_equal(pixel, load_flags_);
    });
    if (marker_at == sheet.pixels.end()) {
        common::displayErrorAndQuit(
            std::format("No character markers found in font file ({}).", sheet.name));
    }
    const std::uint8_t marker = *marker_at;
    const auto width = static_cast<std::size_t>(bitmap_width);
    std::vector<int> marker_rows;
    for (int row = 0; row < bitmap_height; ++row) {
        const auto start = sheet.pixels.begin() + (static_cast<std::ptrdiff_t>(row) * bitmap_width);
        if (std::find(start, start + bitmap_width, marker) != start + bitmap_width) {
            marker_rows.push_back(row);
        }
    }
    int next_char = first_char;
    for (std::size_t band = 0; band + 1 < marker_rows.size(); ++band) {
        const int row = marker_rows[band];
        const int band_height = marker_rows[band + 1] - (row + 1);
        const std::size_t markers = static_cast<std::size_t>(row) * width;
        int glyph_start = -1;
        for (int x = 0; x <= bitmap_width; ++x) {
            const bool is_marker =
                x < bitmap_width && sheet.pixels[markers + static_cast<std::size_t>(x)] == marker;
            if (glyph_start >= 0 && !is_marker) {
                const std::size_t position =
                    markers + width + static_cast<std::size_t>(glyph_start);
                char_positions_[static_cast<std::size_t>(next_char)] = position;
                measureGlyph(bitmap, static_cast<std::size_t>(next_char), position, x - glyph_start,
                             band_height);
                ++next_char;
                glyph_start = -1;
            } else if (glyph_start < 0 && is_marker) {
                if (next_char > kLastChar) {
                    common::displayErrorAndQuit(std::format("Too many chars: fontfile {}, chars {}",
                                                            sheet.name, next_char));
                }
                glyph_start = x;
            }
        }
    }
    for (int c = first_char; c < next_char; ++c) {
        char_bitmap_index_[static_cast<std::size_t>(c)] = bitmap;
    }
    current_line_height_ = max_char_height_;
}

void CBitFont::measureGlyph(std::size_t bitmap, std::size_t char_code, std::size_t position,
                            int width, int band_height) {
    char_widths_[char_code] = width;
    max_char_width_ = std::max(max_char_width_, width);
    const std::span<const std::uint8_t> pixels(sheets_[bitmap].pixels);
    const int height = calculateCharacterHeight(pixels.subspan(position), width, band_height,
                                                sheets_[bitmap].width);
    char_heights_[char_code] = height;
    max_char_height_ = std::max(max_char_height_, height);
}

// The 8-bit table is the colour cube's nearest entry, five bits a channel.
// nocedit 0x004d02a0
void CBitFont::remapPalette() {
    const int bits_per_pixel = screen_.getBitsPerPixel();
    const SColorChannels &channels = screen_.getColorChannels();
    const std::span<const std::uint8_t, C2d::kColorCubeSize> cube = two_d_.getColorCubeLookup();
    for (SSheet &sheet : sheets_) {
        for (std::size_t i = 0; i < sheet.display.size(); ++i) {
            const std::uint32_t red = sheet.palette[i * 3];
            const std::uint32_t green = sheet.palette[(i * 3) + 1];
            const std::uint32_t blue = sheet.palette[(i * 3) + 2];
            switch (bits_per_pixel) {
            case 8:
                sheet.display[i] =
                    cube[((red >> 3U) << 10U) | ((green >> 3U) << 5U) | (blue >> 3U)];
                break;
            case 16:
                sheet.display[i] = (common::packLevel(red, channels.red) |
                                    common::packLevel(green, channels.green) |
                                    common::packLevel(blue, channels.blue)) &
                                   0xffffU;
                break;
            case 32:
                sheet.display[i] = common::shiftLeft(red, channels.red.bit_position) |
                                   common::shiftLeft(green, channels.green.bit_position) |
                                   common::shiftLeft(blue, channels.blue.bit_position);
                break;
            default:
                common::displayErrorAndQuit("CBitFont::remapPalette - Invalid bitsPerPixel");
            }
        }
    }
}

// nocedit 0x004d0290
void CBitFont::setFontReady(int value) {
    rendering_ready_ = value != 0;
}

// nocedit 0x004cd540
void CBitFont::setInitializedFlag() {
    is_initialized_ = true;
}

// nocedit 0x004d0230
void CBitFont::setCharYOffsetRange(int offset_value, int start_char, int end_char) {
    if (end_char == kSingleChar) {
        end_char = start_char;
    }
    start_char = std::max(start_char, 0);
    end_char = std::min(end_char, kLastChar);
    for (int c = start_char; c <= end_char; ++c) {
        char_y_offsets_[static_cast<std::size_t>(c)] = offset_value;
    }
}

void CBitFont::setCharWidth(int char_code, int width) {
    char_widths_.at(static_cast<std::size_t>(char_code)) = width;
}

void CBitFont::setShadowOffset(int x, int y) {
    shadow_offset_x_ = x;
    shadow_offset_y_ = y;
}

void CBitFont::setWinFont(CFont &font) {
    win_font_helper_ = &font;
}

} // namespace nocturne::engine
