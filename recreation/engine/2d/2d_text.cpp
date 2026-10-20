#include "engine/2d/2d.h"
#include "engine/screendevice.h"

#include <cstddef>
#include <cstdint>
#include <span>
#include <string_view>

namespace nocturne::engine {
namespace {

constexpr int kLineHeight = 11;
constexpr unsigned char kFirstPrintable = 0x20;
constexpr unsigned char kNewline = '\n';
// The palette index of the font's set pixels; the rest are index 0.
constexpr std::uint8_t kFontInk = 0xf8;

// Each row's pixels, then the column after them cleared to 0 when clear_after is set.
template <typename TPixel, typename TColor>
void drawGlyph(std::span<void *> rows, const SFontGlyph &glyph, int x, int y, bool clear_after,
               TColor color_of) {
    for (std::size_t row = 0; row < SFontGlyph::kRows; ++row) {
        auto *pixels = static_cast<TPixel *>(rows[static_cast<std::size_t>(y) + row]) + x;
        const unsigned bits = glyph.rows.at(row);
        for (int column = 0; column < glyph.width; ++column) {
            const bool ink = ((bits >> static_cast<unsigned>(glyph.width - 1 - column)) & 1U) != 0;
            pixels[column] = color_of(ink ? kFontInk : std::uint8_t{0});
        }
        if (clear_after) {
            pixels[glyph.width] = 0;
        }
    }
}

} // namespace

// nocedit 0x00401610
int C2d::drawCharacter(unsigned char char_code, int x_pos, int y_pos) {
    const SFontGlyph &glyph = getFontGlyph(char_code);
    if (x_pos < clip_left_ || y_pos < clip_top_ || x_pos > clip_right_ + 1 - glyph.width ||
        y_pos > clip_bottom_ - (kLineHeight - 1)) {
        return 0;
    }
    // The original also clears that column when it lies just past the clip's right edge.
    const bool clear_after = x_pos + glyph.width <= clip_right_;
    const std::span<void *> rows = screen_.getScreenRows();
    switch (screen_.getBitsPerPixel()) {
    case 8:
        drawGlyph<std::uint8_t>(rows, glyph, x_pos, y_pos, clear_after,
                                [](std::uint8_t index) { return index; });
        break;
    case 16:
        drawGlyph<std::uint16_t>(
            rows, glyph, x_pos, y_pos, clear_after,
            [table = screen_.getColorTable16()](std::uint8_t index) { return table[index]; });
        break;
    case 32:
        drawGlyph<std::uint32_t>(
            rows, glyph, x_pos, y_pos, clear_after,
            [table = screen_.getColorTable32()](std::uint8_t index) { return table[index]; });
        break;
    default:
        return 0;
    }
    return glyph.width + 1;
}

// The original drops a character that would cross x_max instead of breaking the line before it,
// and draws the next one that fits in its place.
// nocedit 0x00401c60
void C2d::drawTextWrapped(std::string_view text, int x_start, int y_start, int x_max, int y_max) {
    int x = x_start;
    int y = y_start;
    const auto breakLine = [&] {
        x = x_start;
        y += kLineHeight;
        return y <= y_max;
    };
    for (const char byte : text) {
        const auto char_code = static_cast<unsigned char>(byte);
        if (char_code == kNewline && !breakLine()) {
            return;
        }
        if (char_code < kFirstPrintable) {
            continue;
        }
        if (x > x_max + 1 - getFontGlyph(char_code).width && x != x_start && !breakLine()) {
            return;
        }
        x += drawCharacter(char_code, x, y);
        if (x > x_max && !breakLine()) {
            return;
        }
    }
}

// nocedit 0x00401cf0
void C2d::drawTextMultiline(std::string_view text, int x_start, int y_start, int y_max) {
    int x = x_start;
    int y = y_start;
    for (const char byte : text) {
        const auto char_code = static_cast<unsigned char>(byte);
        if (char_code == kNewline) {
            x = x_start;
            y += kLineHeight;
            if (y > y_max) {
                return;
            }
        }
        if (char_code < kFirstPrintable) {
            continue;
        }
        drawCharacter(char_code, x, y);
        x += getFontGlyph(char_code).width + 1;
    }
}

// nocedit 0x00401fd0
void C2d::drawText(std::string_view text, int x, int y) {
    if (text_wrap_enabled_) {
        drawTextWrapped(text, x, y, clip_right_, clip_bottom_);
        return;
    }
    drawTextMultiline(text, x, y, clip_bottom_);
}

// nocedit 0x00402800
void C2d::setTextWrapEnabled(bool enabled) {
    text_wrap_enabled_ = enabled;
}

} // namespace nocturne::engine
