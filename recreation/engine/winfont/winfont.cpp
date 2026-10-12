#include "engine/winfont/winfont.h"

#include "engine/2d/2d.h"
#include "engine/font/font.h"
#include "engine/screendevice.h"
#include "platform/osfont.h"
#include "platform/osfontfactory.h"

#include <algorithm>
#include <cstddef>

namespace nocturne::engine {
namespace {

// What a string reaches below the top when nothing asks for more.
constexpr int kDefaultImageHeight = 100;
// Magenta in the image's two layouts.
constexpr std::uint32_t kKey16 = 0x7c1f;
constexpr std::uint32_t kKey32 = 0xff00ff;
// What GetTextExtentPoint32A measured with no font: 8 pixels a character, 16 tall.
constexpr int kNoFontCharWidth = 8;
constexpr int kNoFontHeight = 16;
constexpr std::uint32_t kFiveBits = 0x1f;

// Where (x, y) is in an image stride pixels wide.
std::size_t pixelIndex(int x, int y, int stride) {
    return (static_cast<std::size_t>(y) * static_cast<std::size_t>(stride)) +
           static_cast<std::size_t>(x);
}

std::uint32_t shiftLeft(std::uint32_t value, int count) {
    return value << (static_cast<unsigned>(count) & 31U);
}

std::uint32_t shiftRight(std::uint32_t value, int count) {
    return value >> (static_cast<unsigned>(count) & 31U);
}

// A COLORREF, red in the low byte, as an image pixel.
std::uint32_t toImagePixel(std::uint32_t color_ref, int bits_per_pixel) {
    const std::uint32_t red = color_ref & 0xffU;
    const std::uint32_t green = (color_ref >> 8U) & 0xffU;
    const std::uint32_t blue = (color_ref >> 16U) & 0xffU;
    if (bits_per_pixel == 16) {
        return ((red >> 3U) << 10U) | ((green >> 3U) << 5U) | (blue >> 3U);
    }
    return (red << 16U) | (green << 8U) | blue;
}

// A 5-bit image channel as the screen packs it.
std::uint32_t packChannel(std::uint32_t five_bits, const common::SChannelLayout &channel) {
    return shiftLeft(shiftRight(five_bits << 3U, channel.dither_shift), channel.bit_position);
}

} // namespace

// CreateFontA took the height negated, as the em height in pixels.
// nocedit 0x005f22e0
CWinFont::CWinFont(platform::IOsFontFactory &factory, IScreenDevice &screen, const C2d &two_d,
                   const CFontColors &colors, std::string_view font_name, int font_height,
                   int y_offset1, int y_offset2)
    : screen_(screen), two_d_(two_d), colors_(colors),
      font_(factory.createOsFont(font_name, font_height)), y_offset1_(y_offset1),
      y_offset2_(y_offset2) {}

// The destructor reset, which released the GDI objects the members own here.
// nocedit 0x005f2390
CWinFont::~CWinFont() = default;

// nocedit 0x005f2a30
void CWinFont::reset() {
    text_image_.clear();
    bpp_ = 0;
    top_ = 0;
    right_ = 0;
}

// Every caller asked for the default size: the screen's width by 100 rows. A new image starts as
// key, as the decomp's GDI makes it: the original's magenta fill drew an empty rectangle,
// leaving the image black, so whatever no string covered was copied as black. The text it held
// is forgotten, so the next string is drawn again rather than copied from a blank image.
// nocedit 0x005f2860
void CWinFont::createTextBackground() {
    const int width = screen_.getWindowWidth();
    if (!text_image_.empty() && right_ >= width && bpp_ == screen_.getBitsPerPixel()) {
        return;
    }
    reset();
    bpp_ = screen_.getBitsPerPixel();
    right_ = width;
    top_ = kDefaultImageHeight;
    text_image_.assign(static_cast<std::size_t>(right_) * static_cast<std::size_t>(top_),
                       getKeyColor());
    text_cache_.clear();
}

std::uint32_t CWinFont::getKeyColor() const {
    return bpp_ == 16 ? kKey16 : kKey32;
}

// TextOutA in OPAQUE mode with a magenta background: the string's cell becomes key, then its
// glyphs the colour.
void CWinFont::textOut(int x, int y, std::string_view text, std::uint32_t color) {
    if (!font_ || text.empty()) {
        return;
    }
    const platform::STextMask mask = font_->renderText(text);
    const std::uint32_t ink = toImagePixel(color, bpp_);
    for (int row = 0; row < mask.size.height; ++row) {
        for (int column = 0; column < mask.size.width; ++column) {
            const int image_x = x + column;
            const int image_y = y + row;
            if (image_x < right_ && image_y < top_) {
                text_image_[pixelIndex(image_x, image_y, right_)] =
                    mask.coverage[pixelIndex(column, row, mask.size.width)] != 0 ? ink
                                                                                 : getKeyColor();
            }
        }
    }
}

common::SExtent CWinFont::measureText(std::string_view text) {
    if (!font_) {
        return {.width = static_cast<int>(text.size()) * kNoFontCharWidth, .height = kNoFontHeight};
    }
    return font_->measureText(text);
}

std::uint32_t CWinFont::getColorRef(int color) const {
    const C2d::Palette &palette = two_d_.getSourcePaletteData();
    const auto entry = static_cast<std::size_t>(color) * 3;
    return static_cast<std::uint32_t>(palette[entry]) |
           (static_cast<std::uint32_t>(palette[entry + 1]) << 8U) |
           (static_cast<std::uint32_t>(palette[entry + 2]) << 16U);
}

// A string is drawn into the image only when it or its colours change. The background colour
// is a shadow a pixel down and right, which the string's own cell then covers but for its
// last row and column. A negative foreground is the default text colour, taken as a COLORREF
// as the original did, so red and blue trade places in 32 bits.
// nocedit 0x005f2440
void CWinFont::setColorAndDrawText(std::string_view text_string, int x, int y, int foreground_color,
                                   int background_color) {
    if (foreground_color != cached_foreground_color_ ||
        background_color != cached_background_color_ || text_string != text_cache_) {
        cached_foreground_color_ = foreground_color;
        cached_background_color_ = background_color;
        const std::uint32_t foreground =
            foreground_color < 0 ? static_cast<std::uint32_t>(colors_.getDefaultTextColor())
                                 : getColorRef(foreground_color);
        text_cache_ = text_string;
        cached_string_width_ = getStringWidth(text_string);
        cached_string_height_ = getStringHeight(text_string);
        if (background_color != -1) {
            textOut(1, 1, text_string, getColorRef(background_color));
        }
        textOut(0, 0, text_string, foreground);
    }
    const int width = std::min({right_, screen_.getWindowWidth() - x, cached_string_width_});
    const int height = std::min({top_, screen_.getWindowHeight() - y, cached_string_height_});
    copyToScreen(x, y, width, height);
}

// Everything but key is copied, down by the first offset; a 16-bit image is repacked for the
// screen. Rows off the screen are skipped, and so are columns left of it.
void CWinFont::copyToScreen(int x, int y, int width, int height) {
    const int bits_per_pixel = screen_.getBitsPerPixel();
    if (bits_per_pixel != 16 && bits_per_pixel != 32) {
        return;
    }
    const SColorChannels &channels = screen_.getColorChannels();
    const std::span<void *> rows = screen_.getScreenRows();
    const std::uint32_t key = getKeyColor();
    for (int row = 0; row < height; ++row) {
        const int screen_y = y + row + y_offset1_;
        if (screen_y < 0 || screen_y >= screen_.getWindowHeight()) {
            continue;
        }
        void *line = rows[static_cast<std::size_t>(screen_y)];
        for (int column = std::max(0, -x); column < width; ++column) {
            const std::uint32_t pixel = text_image_[pixelIndex(column, row, right_)];
            if (pixel == key) {
                continue;
            }
            const int screen_column = x + column;
            const auto screen_x = static_cast<std::size_t>(screen_column);
            if (bits_per_pixel == 16) {
                static_cast<std::uint16_t *>(line)[screen_x] = static_cast<std::uint16_t>(
                    packChannel((pixel >> 10U) & kFiveBits, channels.red) |
                    packChannel((pixel >> 5U) & kFiveBits, channels.green) |
                    packChannel(pixel & kFiveBits, channels.blue));
            } else {
                static_cast<std::uint32_t *>(line)[screen_x] = pixel;
            }
        }
    }
}

// CFont's non-virtual drawText only made this call.
// nocedit 0x00544ed0
// nocedit 0x005f23f0
int CWinFont::drawText(std::string_view text_string, int x, int y, int foreground_color,
                       int background_color) {
    createTextBackground();
    setColorAndDrawText(text_string, x, y, foreground_color, background_color);
    return 0;
}

// nocedit 0x005f2aa0
int CWinFont::getStringWidth(std::string_view text_string) {
    createTextBackground();
    return measureText(text_string).width;
}

// nocedit 0x005f2b00
int CWinFont::getStringHeight(std::string_view text_string) {
    createTextBackground();
    return measureText(text_string).height + y_offset1_ + y_offset2_;
}

// nocedit 0x005f2b70
int CWinFont::getLineSpacing() {
    return 0;
}

} // namespace nocturne::engine
