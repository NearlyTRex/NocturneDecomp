#pragma once

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace nocturne::engine {

// A glyph sheet as the art tools laid one out: a row of marker pixels over each glyph, a gap
// between glyphs, and a marker row under the band to close it.
struct SFontSheet {
    int width = 0;
    int height = 0;
    std::string pixels;
};

// Glyphs drawn as rows of characters: '.' is the transparent index and any other character its
// own byte value, so '#' is 0x23. The band is band_height rows tall.
inline SFontSheet makeFontSheet(const std::vector<std::vector<std::string>> &glyphs,
                                int band_height, char transparent = '\0', char marker = '\x7f') {
    int width = 0;
    for (const std::vector<std::string> &glyph : glyphs) {
        width += static_cast<int>(glyph.front().size()) + 1;
    }
    SFontSheet sheet{.width = width, .height = band_height + 2, .pixels = {}};
    sheet.pixels.assign(static_cast<std::size_t>(sheet.width * sheet.height), transparent);
    const auto at = [&sheet](int x, int y) -> char & {
        return sheet.pixels[static_cast<std::size_t>((y * sheet.width) + x)];
    };
    int left = 0;
    for (const std::vector<std::string> &glyph : glyphs) {
        const auto glyph_width = static_cast<int>(glyph.front().size());
        for (int x = 0; x < glyph_width; ++x) {
            at(left + x, 0) = marker;
        }
        for (std::size_t row = 0; row < glyph.size(); ++row) {
            for (int x = 0; x < glyph_width; ++x) {
                const char pixel = glyph[row][static_cast<std::size_t>(x)];
                at(left + x, static_cast<int>(row) + 1) = pixel == '.' ? transparent : pixel;
            }
        }
        left += glyph_width + 1;
    }
    at(0, sheet.height - 1) = marker;
    return sheet;
}

// A sheet of the given size holding one glyph, '!', on the given transparent index.
inline std::string makeSheetOfSize(int width, int height, char transparent) {
    const auto row = static_cast<std::size_t>(width);
    std::string sheet(row * static_cast<std::size_t>(height), transparent);
    sheet[0] = '\x7f';
    sheet[1] = '\x7f';
    sheet[row] = '#';
    sheet[row * 2] = '\x7f';
    return sheet;
}

// An .act palette: entry i is (red, green, blue) from levels.
inline std::string makePalette(const std::vector<std::uint8_t> &levels) {
    std::string palette(768, '\0');
    std::copy(levels.begin(), levels.end(), palette.begin());
    return palette;
}

} // namespace nocturne::engine
