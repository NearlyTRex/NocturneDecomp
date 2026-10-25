#include "common/math/bits.h"
#include "common/video/framebuffer.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/font/font.h"
#include "engine/palette/font.h"
#include "engine/pixelblend.h"
#include "engine/screendevice.h"

#include <algorithm>
#include <cstddef>
#include <utility>

namespace nocturne::engine {
namespace {

constexpr std::uint32_t kLevelMask = 0xff;

// isspace in the C locale.
bool isSpace(char c) {
    return std::string_view(" \t\n\v\f\r").contains(c);
}

// One channel of a 16-bit pixel as the 8-bit level the font blends.
std::uint32_t channelLevel(std::uint32_t pixel, std::uint32_t mask,
                           const common::SChannelLayout &channel) {
    return common::shiftLeft(common::shiftRight(pixel & mask, channel.bit_position),
                             channel.dither_shift) &
           kLevelMask;
}

std::uint32_t blendChannel(std::uint32_t source, std::uint32_t screen, std::uint32_t mask,
                           const common::SChannelLayout &channel, std::uint32_t alpha) {
    const std::uint32_t mixed =
        blendLevel(channelLevel(source, mask, channel), channelLevel(screen, mask, channel), alpha);
    return common::packLevel(mixed, channel);
}

// The widest line, newlines ending lines.
template <typename TMeasure>
int widestLine(std::string_view text, TMeasure measure) {
    int widest = 0;
    std::size_t start = 0;
    while (start < text.size()) {
        const std::size_t end = std::min(text.find('\n', start), text.size());
        widest = std::max(widest, measure(text.substr(start, end - start)));
        start = end + 1;
    }
    return widest;
}

// True when the rectangle is wholly outside the clip; otherwise cuts it to the clip. The original
// moved the glyph's first sheet pixel with the edges it cut; here every screen pixel finds its
// sheet pixel from the glyph's corner.
// nocedit 0x004ccdd0
bool clipCharacter(int &left, int &top, int &right, int &bottom, const SClipRect &clip) {
    if (right < clip.left || left > clip.right || bottom < clip.top || top > clip.bottom) {
        return true;
    }
    left = std::max(left, clip.left);
    right = std::min(right, clip.right);
    top = std::max(top, clip.top);
    bottom = std::min(bottom, clip.bottom);
    return false;
}

// The MMX blend: each byte of a pixel's table colour, scaled by the render colour's, is how
// much of the blend colour's byte goes over the screen's. Index 0 is left alone.
// nocedit 0x004ce240
void drawAlphaBlendedPixels(std::uint32_t *dest_buffer, std::span<const std::uint8_t> src_indices,
                            std::span<const std::uint32_t, 256> color_table,
                            std::uint32_t blend_color, std::uint32_t render_color) {
    for (const std::uint8_t index : src_indices) {
        if (index != 0) {
            const std::uint32_t color = color_table[index];
            std::uint32_t out = 0;
            for (unsigned shift = 0; shift < 32U; shift += 8U) {
                const std::uint32_t alpha =
                    (((color >> shift) & kLevelMask) * ((render_color >> shift) & kLevelMask)) >>
                    8U;
                const std::uint32_t mixed = blendLevel((blend_color >> shift) & kLevelMask,
                                                       (*dest_buffer >> shift) & kLevelMask, alpha);
                out |= mixed << shift;
            }
            *dest_buffer = out;
        }
        ++dest_buffer;
    }
}

} // namespace

// nocedit 0x004d01a0
int CBitFont::getCharWidth(int char_code) const {
    if (char_code < 0 || char_code > 0xff) {
        return 0;
    }
    return char_widths_[static_cast<std::size_t>(char_code)];
}

// nocedit 0x004d01d0
int CBitFont::getCharHeight(int char_code, int scale) const {
    if (char_code < 0 || char_code > 0xff) {
        return 0;
    }
    const auto code = static_cast<std::size_t>(char_code);
    return (char_heights_[code] + char_y_offsets_[code]) * scale;
}

// nocedit 0x004d0200
int CBitFont::getCharYOffset(int char_code) const {
    if (char_code < 0 || char_code > 0xff) {
        return 0;
    }
    return char_y_offsets_[static_cast<std::size_t>(char_code)];
}

int CBitFont::getMaxCharWidth() const {
    return max_char_width_;
}

int CBitFont::getMaxCharHeight() const {
    return max_char_height_;
}

// Text an OS font draws isn't scaled.
// nocedit 0x004cfe80
int CBitFont::getTextWidth(std::string_view text, int scale) const {
    if (win_font_helper_ != nullptr) {
        return widestLine(
            text, [this](std::string_view line) { return win_font_helper_->getStringWidth(line); });
    }
    return scale * widestLine(text, [this](std::string_view line) {
               int width = 0;
               for (const char c : line) {
                   width += getCharWidth(static_cast<unsigned char>(c)) + char_spacing_;
               }
               return width > 0 ? width - char_spacing_ : width;
           });
}

// One line is as tall as its tallest character; more are each a line height and spacing apart.
// nocedit 0x004cff40
int CBitFont::getTextHeight(std::string_view text, int scale) const {
    const bool one_line = !text.contains('\n');
    if (win_font_helper_ != nullptr) {
        if (one_line) {
            return win_font_helper_->getStringHeight(text);
        }
        scale = 1;
    }
    if (one_line) {
        int tallest = 0;
        for (const char c : text) {
            tallest = std::max(tallest, getCharHeight(static_cast<unsigned char>(c)));
        }
        return tallest * scale;
    }
    const auto breaks = static_cast<int>(std::ranges::count(text, '\n'));
    return (current_line_height_ + (breaks * (line_spacing_ + current_line_height_))) * scale;
}

// Up to a newline, or the last space before a character that starts past the width; a line
// without a space breaks where it runs out. Each character is let in while the text before it
// fits, so the last one may run over.
std::size_t CBitFont::measureLine(std::string_view text, int line_width,
                                  int max_pixel_width) const {
    std::size_t length = 0;
    std::size_t break_at = std::string_view::npos;
    while (length < text.size() && text[length] != '\n') {
        if (isSpace(text[length])) {
            break_at = length;
        }
        if (static_cast<int>(length) >= line_width - 1 ||
            getTextWidth(text.substr(0, length)) > max_pixel_width) {
            return break_at == std::string_view::npos ? length : break_at;
        }
        ++length;
    }
    return length;
}

// nocedit 0x004d0010
std::vector<std::string> CBitFont::wrapText(std::string_view source_text, int max_lines,
                                            int line_width, int max_pixel_width) const {
    std::vector<std::string> lines;
    while (std::cmp_less(lines.size(), max_lines)) {
        while (!source_text.empty() && source_text.front() != '\n' &&
               isSpace(source_text.front())) {
            source_text.remove_prefix(1);
        }
        if (source_text.empty()) {
            break;
        }
        std::size_t length = measureLine(source_text, line_width, max_pixel_width);
        std::size_t kept = length;
        while (kept > 0 && isSpace(source_text[kept - 1])) {
            --kept;
        }
        lines.emplace_back(source_text.substr(0, kept));
        if (length < source_text.size() && source_text[length] == '\n') {
            ++length;
        }
        source_text.remove_prefix(length);
    }
    return lines;
}

// nocedit 0x004cda80
int CBitFont::drawText(std::string_view text, int x, int y, int color_mode, int color_value,
                       int scale) {
    if (win_font_helper_ != nullptr) {
        return drawWithWinFont(text, x, y, color_mode, color_value);
    }
    int pen_x = x;
    for (const char c : text) {
        if (c == '\r') {
            continue;
        }
        if (c == '\n') {
            y += (current_line_height_ + line_spacing_) * scale;
            pen_x = x;
            continue;
        }
        pen_x +=
            drawCharacter(static_cast<unsigned char>(c), pen_x, y, color_mode, color_value, scale);
    }
    return pen_x - x;
}

// nocedit 0x004cdbf0
int CBitFont::drawTextWrapper(int x, int y, int color_mode, int color_value,
                              std::string_view text) {
    return drawText(text, x, y, color_mode, color_value);
}

// nocedit 0x004cdee0
int CBitFont::drawTextCenterInBounds(int left_x, int right_x, int y, int color_mode,
                                     int color_value, std::string_view text) {
    const int x = (left_x + right_x + 1 - getTextWidth(text)) / 2;
    return drawTextWrapper(x, y, color_mode, color_value, text);
}

// The original formatted into a 4096-byte buffer without a bound.
// nocedit 0x004cdf80
int CBitFont::drawTextCenterInBoundsFV(int left_x, int right_x, int y, int color_mode,
                                       int color_value, std::string_view format,
                                       std::format_args args) {
    return drawTextCenterInBounds(left_x, right_x, y, color_mode, color_value,
                                  std::vformat(format, args));
}

// A line by line, each one the bitmap font draws itself when the OS font turns it down.
int CBitFont::drawWithWinFont(std::string_view text, int x, int y, int color_mode,
                              int color_value) {
    CFont &helper = *win_font_helper_;
    int drawn = 0;
    std::size_t start = 0;
    while (true) {
        const std::size_t end = std::min(text.find('\n', start), text.size());
        const std::string_view line = text.substr(start, end - start);
        drawn = helper.drawText(line, x, y, color_mode, color_value);
        if (drawn == -1) {
            win_font_helper_ = nullptr;
            drawn = drawText(line, x, y, color_mode, color_value);
            win_font_helper_ = &helper;
        }
        if (end == text.size()) {
            return drawn;
        }
        start = end + 1;
        y += current_line_height_ + line_spacing_;
    }
}

// The glyph's screen rectangle, or nothing when it isn't drawn: a font that isn't ready draws
// only glyphs wholly inside the clip.
std::optional<CBitFont::SGlyphBox> CBitFont::placeGlyph(std::size_t char_code, int x, int y,
                                                        int scale) const {
    SGlyphBox box{.left = x,
                  .top = y,
                  .right = x + (char_widths_[char_code] * scale) - 1,
                  .bottom = y + (char_heights_[char_code] * scale) - 1};
    const SClipRect clip = two_d_.getClipRect();
    if (!rendering_ready_) {
        if (box.left < clip.left || box.top < clip.top || box.right > clip.right ||
            box.bottom > clip.bottom) {
            return std::nullopt;
        }
        return box;
    }
    if (clipCharacter(box.left, box.top, box.right, box.bottom, clip)) {
        return std::nullopt;
    }
    return box;
}

// nocedit 0x004ce7a0
int CBitFont::drawCharacter(int char_code, int x, int y, int color_mode, int color_value,
                            int scale) {
    if (char_code < 0 || char_code > 0xff) {
        return 0;
    }
    const auto code = static_cast<std::size_t>(char_code);
    const int advance = (char_widths_[code] + char_spacing_) * scale;
    const std::optional<std::size_t> &position = char_positions_[code];
    if (!position) {
        return advance;
    }
    if (color_value != kNoShadow) {
        drawCharacter(char_code, x + (shadow_offset_x_ * scale), y + (shadow_offset_y_ * scale),
                      color_value, kNoShadow, scale);
    }
    const int top = y + (char_y_offsets_[code] * scale);
    const std::optional<SGlyphBox> box = placeGlyph(code, x, top, scale);
    if (!box) {
        return advance;
    }
    const std::size_t bitmap = char_bitmap_index_[code];
    const SSheet &sheet = sheets_[bitmap];
    const std::span<void *> rows = screen_.getScreenRows();
    std::vector<std::uint8_t> indices(static_cast<std::size_t>(box->right - box->left + 1));
    for (int row_y = box->top; row_y <= box->bottom; ++row_y) {
        const std::size_t source_row =
            *position + (static_cast<std::size_t>((row_y - top) / scale) *
                         static_cast<std::size_t>(sheet.width));
        for (std::size_t i = 0; i < indices.size(); ++i) {
            const auto column =
                static_cast<std::size_t>((box->left + static_cast<int>(i) - x) / scale);
            indices[i] = sheet.pixels[source_row + column];
        }
        drawGlyphRow(rows[static_cast<std::size_t>(row_y)], box->left, indices, bitmap, color_mode);
    }
    return advance;
}

// Nothing is drawn at a depth without a glyph writer.
void CBitFont::drawGlyphRow(void *row, int left, std::span<const std::uint8_t> indices,
                            std::size_t bitmap, int color_mode) {
    switch (screen_.getBitsPerPixel()) {
    case 8:
        drawRow8(static_cast<std::uint8_t *>(row) + left, indices, color_mode);
        return;
    case 16:
        drawRow16(static_cast<std::uint16_t *>(row) + left, indices, bitmap, color_mode);
        return;
    case 32:
        drawRow32(static_cast<std::uint32_t *>(row) + left, indices, bitmap, color_mode);
        return;
    default:
        return;
    }
}

// Eight bits draw the sheet's indices, or one index, and never blend.
void CBitFont::drawRow8(std::uint8_t *row, std::span<const std::uint8_t> indices,
                        int color_mode) const {
    std::uint8_t solid = 0;
    if (color_mode == kDefaultTextColor) {
        solid = static_cast<std::uint8_t>(colors_.getDefaultTextColor());
    } else if (color_mode >= 0) {
        solid = static_cast<std::uint8_t>(color_mode);
    }
    for (const std::uint8_t index : indices) {
        if (std::cmp_not_equal(index, load_flags_)) {
            *row = color_mode == kSheetColors ? index : solid;
        }
        ++row;
    }
}

std::uint32_t CBitFont::getSolidColor16(int color_mode) {
    if (color_mode == kDefaultTextColor) {
        return static_cast<std::uint16_t>(colors_.getDefaultTextColor());
    }
    if (color_mode >= 0) {
        return screen_.getColorTable16()[static_cast<std::size_t>(color_mode)];
    }
    return 0;
}

std::uint32_t CBitFont::getSolidColor32(int color_mode) const {
    if (color_mode == kDefaultTextColor) {
        return static_cast<std::uint32_t>(colors_.getDefaultTextColor());
    }
    if (color_mode >= 0) {
        return screen_.getColorTable32()[static_cast<std::size_t>(color_mode)];
    }
    return 0;
}

// A blended pixel's coverage is the red of its sheet colour, scaled by the render alpha.
void CBitFont::drawRow16(std::uint16_t *row, std::span<const std::uint8_t> indices,
                         std::size_t bitmap, int color_mode) {
    const SSheet &sheet = sheets_[bitmap];
    const std::uint32_t solid = getSolidColor16(color_mode);
    const SColorChannels &channels = screen_.getColorChannels();
    const SColorMasks &masks = screen_.getColorMasks();
    const auto alpha_value = static_cast<std::uint32_t>(three_d_.getCurrentAlphaValue());
    for (const std::uint8_t index : indices) {
        const std::uint32_t color = color_mode == kSheetColors ? sheet.display[index] : solid;
        if (!is_initialized_) {
            if (std::cmp_not_equal(index, load_flags_)) {
                *row = static_cast<std::uint16_t>(color);
            }
        } else if (const std::uint32_t alpha =
                       (alpha_value * sheet.palette[static_cast<std::size_t>(index) * 3]) / 256U;
                   alpha != 0) {
            *row = static_cast<std::uint16_t>(
                blendChannel(color, *row, masks.red_mask16, channels.red, alpha) |
                blendChannel(color, *row, masks.green_mask16, channels.green, alpha) |
                blendChannel(color, *row, masks.blue_mask16, channels.blue, alpha));
        }
        ++row;
    }
}

// A blended row blends toward one colour: the solid colour, or the sheet colour of its first
// pixel.
void CBitFont::drawRow32(std::uint32_t *row, std::span<const std::uint8_t> indices,
                         std::size_t bitmap, int color_mode) {
    const SSheet &sheet = sheets_[bitmap];
    const std::uint32_t solid = getSolidColor32(color_mode);
    if (is_initialized_) {
        const std::uint32_t blend = color_mode == kSheetColors ? sheet.display[indices[0]] : solid;
        drawAlphaBlendedPixels(row, indices, sheet.display, blend,
                               three_d_.getCurrentRenderColor());
        return;
    }
    for (const std::uint8_t index : indices) {
        if (std::cmp_not_equal(index, load_flags_)) {
            *row = color_mode == kSheetColors ? sheet.display[index] : solid;
        }
        ++row;
    }
}

} // namespace nocturne::engine
