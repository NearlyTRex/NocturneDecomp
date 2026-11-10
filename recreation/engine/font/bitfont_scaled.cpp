#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/pixelblend.h"
#include "engine/screendevice.h"

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string_view>
#include <utility>

namespace nocturne::engine {
namespace {

// A scale this close to a whole number is drawn as one.
constexpr float kWholeTolerance = 0.001F;
// A keyed font's pixel this nearly covered is drawn solid.
constexpr float kSolidCoverage = 0.999F;
// CBitFont's line height is measured on this glyph.
constexpr int kMeasureChar = 'X';
constexpr std::size_t kChannelCount = 4;
constexpr float kMaxLevelF = static_cast<float>(kMaxLevel);

// The scale as a whole number when it is one, else 0.
int getWholeScale(float scale) {
    const long whole = std::lround(scale);
    return std::fabs(scale - static_cast<float>(whole)) < kWholeTolerance ? static_cast<int>(whole)
                                                                          : 0;
}

std::uint32_t getChannel(std::uint32_t color, std::size_t channel) {
    return (color >> (channel * 8U)) & kMaxLevel;
}

// A 32-bit colour mixed toward color by amount, 0 to 1, each byte rounded to nearest.
std::uint32_t mixPixel32(std::uint32_t color, std::uint32_t dest, float amount) {
    std::uint32_t out = 0;
    for (std::size_t channel = 0; channel < kChannelCount; ++channel) {
        const float mixed = (static_cast<float>(getChannel(color, channel)) * amount) +
                            (static_cast<float>(getChannel(dest, channel)) * (1.0F - amount));
        out |= static_cast<std::uint32_t>(std::lround(mixed)) << (channel * 8U);
    }
    return out;
}

} // namespace

// A depth without a blended glyph writer has no scaled form, nor an OS font without one made at
// that scale.
float CBitFont::getUsableScale(float scale) const {
    const int bits = screen_.getBitsPerPixel();
    if (scale <= 0.0F || (bits != 16 && bits != 32)) {
        return 1.0F;
    }
    if (win_font_helper_ != nullptr && getScaledWinFont(scale) == nullptr) {
        return 1.0F;
    }
    return scale;
}

void CBitFont::setScaledWinFont(CFont *font, float scale) {
    scaled_win_font_ = font;
    scaled_win_scale_ = scale;
}

CFont *CBitFont::getScaledWinFont(float scale) const {
    if (win_font_helper_ == nullptr || scaled_win_font_ == nullptr ||
        std::fabs(scale - scaled_win_scale_) >= kWholeTolerance) {
        return nullptr;
    }
    return scaled_win_font_;
}

int CBitFont::drawTextScaled(std::string_view text, int x, int y, int color_mode, int color_value,
                             float scale) {
    if (CFont *scaled = getScaledWinFont(scale)) {
        CFont *const normal = std::exchange(win_font_helper_, scaled);
        const int drawn = drawText(text, x, y, color_mode, color_value);
        win_font_helper_ = normal;
        return drawn;
    }
    scale = getUsableScale(scale);
    if (const int whole = getWholeScale(scale); whole != 0) {
        return drawText(text, x, y, color_mode, color_value, whole);
    }
    const auto left = static_cast<float>(x);
    float pen_x = left;
    auto pen_y = static_cast<float>(y);
    for (const char c : text) {
        if (c == '\r') {
            continue;
        }
        if (c == '\n') {
            pen_y += static_cast<float>(current_line_height_ + line_spacing_) * scale;
            pen_x = left;
            continue;
        }
        pen_x += drawCharacterScaled(static_cast<unsigned char>(c), pen_x, pen_y, color_mode,
                                     color_value, scale);
    }
    return static_cast<int>(std::lround(pen_x - left));
}

int CBitFont::getTextWidthScaled(std::string_view text, float scale) const {
    if (CFont *scaled = getScaledWinFont(scale)) {
        return getWinFontTextWidth(*scaled, text);
    }
    return static_cast<int>(
        std::lround(static_cast<float>(getTextWidth(text)) * getUsableScale(scale)));
}

int CBitFont::getCharHeightScaled(int char_code, float scale) const {
    return static_cast<int>(
        std::lround(static_cast<float>(getCharHeight(char_code)) * getUsableScale(scale)));
}

CBitFont::SWrappedText CBitFont::wrapTextScaled(std::string_view source_text, int max_lines,
                                                int line_width, int box_width, float scale) const {
    scale = getUsableScale(scale);
    return {.lines = wrapText(source_text, max_lines, line_width,
                              static_cast<int>(static_cast<float>(box_width) / scale)),
            .line_pitch = getCharHeightScaled(kMeasureChar, scale)};
}

// The shadow first, as drawCharacter draws it. The glyph is cut to the clip.
float CBitFont::drawCharacterScaled(std::size_t char_code, float x, float y, int color_mode,
                                    int color_value, float scale) {
    const float advance = static_cast<float>(char_widths_[char_code] + char_spacing_) * scale;
    const std::optional<std::size_t> &position = char_positions_[char_code];
    if (!position) {
        return advance;
    }
    if (color_value != kNoShadow) {
        drawCharacterScaled(char_code, x + (static_cast<float>(shadow_offset_x_) * scale),
                            y + (static_cast<float>(shadow_offset_y_) * scale), color_value,
                            kNoShadow, scale);
    }
    const auto glyph_width = static_cast<float>(char_widths_[char_code]);
    const auto glyph_height = static_cast<float>(char_heights_[char_code]);
    const auto left = static_cast<int>(std::lround(x));
    const auto top =
        static_cast<int>(std::lround(y + (static_cast<float>(char_y_offsets_[char_code]) * scale)));
    const auto width = static_cast<int>(std::ceil(glyph_width * scale));
    const auto height = static_cast<int>(std::ceil(glyph_height * scale));
    const SClipRect clip = two_d_.getClipRect();
    const std::span<void *> rows = screen_.getScreenRows();
    const SGlyphSource glyph{.sheet = &sheets_[char_bitmap_index_[char_code]],
                             .position = *position};
    const std::uint32_t solid =
        screen_.getBitsPerPixel() == 16 ? getSolidColor16(color_mode) : getSolidColor32(color_mode);
    const int last_row = std::min(height, clip.bottom - top + 1);
    const int last_column = std::min(width, clip.right - left + 1);
    for (int dy = std::max(0, clip.top - top); dy < last_row; ++dy) {
        const int screen_y = top + dy;
        void *row = rows[static_cast<std::size_t>(screen_y)];
        for (int dx = std::max(0, clip.left - left); dx < last_column; ++dx) {
            const SSheetArea area{
                .left = static_cast<float>(dx) / scale,
                .top = static_cast<float>(dy) / scale,
                .right = std::min(static_cast<float>(dx + 1) / scale, glyph_width),
                .bottom = std::min(static_cast<float>(dy + 1) / scale, glyph_height)};
            const SCoverage coverage = measureCoverage(glyph, area);
            plotCoverage(row, left + dx, coverage,
                         color_mode == kSheetColors ? coverage.color : solid);
        }
    }
    return advance;
}

CBitFont::SCoverage CBitFont::measureCoverage(const SGlyphSource &glyph,
                                              const SSheetArea &area) const {
    const SSheet &sheet = *glyph.sheet;
    const float size = (area.right - area.left) * (area.bottom - area.top);
    SCoverage coverage;
    for (auto row = static_cast<int>(area.top); static_cast<float>(row) < area.bottom; ++row) {
        const float share_y = std::min(area.bottom, static_cast<float>(row + 1)) -
                              std::max(area.top, static_cast<float>(row));
        const std::size_t row_start = glyph.position + (static_cast<std::size_t>(row) *
                                                        static_cast<std::size_t>(sheet.width));
        for (auto column = static_cast<int>(area.left); static_cast<float>(column) < area.right;
             ++column) {
            const float share = (std::min(area.right, static_cast<float>(column + 1)) -
                                 std::max(area.left, static_cast<float>(column))) *
                                share_y / size;
            addCoverage(coverage, sheet, sheet.pixels[row_start + static_cast<std::size_t>(column)],
                        share);
        }
    }
    return coverage;
}

// A keyed font's transparent pixels and a blended one's index 0 add no colour; the first pixel
// with the largest share gives the colour.
void CBitFont::addCoverage(SCoverage &coverage, const SSheet &sheet, std::uint8_t index,
                           float share) const {
    const std::uint32_t color = sheet.display[index];
    if (!is_initialized_) {
        if (std::cmp_equal(index, load_flags_)) {
            return;
        }
        coverage.amount += share;
    } else {
        coverage.amount +=
            share * static_cast<float>(sheet.palette[static_cast<std::size_t>(index) * 3]);
        if (index == 0) {
            return;
        }
        for (std::size_t channel = 0; channel < kChannelCount; ++channel) {
            coverage.channel[channel] += share * static_cast<float>(getChannel(color, channel));
        }
    }
    if (share > coverage.largest_share) {
        coverage.largest_share = share;
        coverage.color = color;
    }
}

// A keyed font's partly covered pixel blends by its share; a blended font's as drawText's
// blenders do, with the coverage averaged.
void CBitFont::plotCoverage(void *row, int x, const SCoverage &coverage, std::uint32_t color) {
    const auto column = static_cast<std::size_t>(x);
    if (screen_.getBitsPerPixel() == 16) {
        std::uint16_t &pixel = static_cast<std::uint16_t *>(row)[column];
        if (!is_initialized_) {
            if (coverage.amount >= kSolidCoverage) {
                pixel = static_cast<std::uint16_t>(color);
            } else if (coverage.amount > 0.0F) {
                pixel = blendPixel16(
                    color, pixel,
                    static_cast<std::uint32_t>(std::lround(coverage.amount * kMaxLevelF)));
            }
            return;
        }
        const auto alpha = static_cast<std::uint32_t>(
            static_cast<float>(three_d_.getCurrentAlphaValue()) * coverage.amount / 256.0F);
        if (alpha != 0) {
            pixel = blendPixel16(color, pixel, alpha);
        }
        return;
    }
    std::uint32_t &pixel = static_cast<std::uint32_t *>(row)[column];
    if (!is_initialized_) {
        if (coverage.amount >= kSolidCoverage) {
            pixel = color;
        } else if (coverage.amount > 0.0F) {
            pixel = mixPixel32(color, pixel, coverage.amount);
        }
        return;
    }
    if (std::ranges::all_of(coverage.channel, [](float level) { return level == 0.0F; })) {
        return;
    }
    std::uint32_t level = 0;
    for (std::size_t channel = 0; channel < kChannelCount; ++channel) {
        level |= static_cast<std::uint32_t>(coverage.channel[channel]) << (channel * 8U);
    }
    pixel = blendCoverage32(level, color, pixel, three_d_.getCurrentRenderColor());
}

} // namespace nocturne::engine
