#pragma once

#include "tests/mocks/core/moonfiles.h"
#include "tests/mocks/engine/fontsheet.h"

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace nocturne::core {

// Every glyph in the theme and small editor fonts is a block a pixel wide and this tall.
inline constexpr int kMenuFontLineHeight = 2;

// A palette that makes the block glyphs, '#', full grey: full cover of the text colour.
inline std::string makeSolidGlyphPalette() {
    std::vector<std::uint8_t> levels(std::size_t{'#'} * 3, 0);
    levels.insert(levels.end(), {0xff, 0xff, 0xff});
    return engine::makePalette(levels);
}

// The fonts initFonts reads, the menus' from sheets of block glyphs '!' to 0x99.
inline void givenMenuFontFiles(const GivenFile &given_file) {
    const std::string solid_glyphs = makeSolidGlyphPalette();
    given_file("art\\nocfont.raw", engine::makeSheetOfSize(0x136, 0x1ae, '\0'));
    given_file("art\\nocsmall.raw", engine::makeSheetOfSize(0xf8, 0x158, '\0'));
    given_file("art\\menufont.raw",
               engine::makeBlockFontSheet(0xfa, 0x23f, 0x99, 1, kMenuFontLineHeight));
    given_file("art\\menufont.act", solid_glyphs);
    given_file("art\\fnte_pfd.RAW",
               engine::makeBlockFontSheet(0x94, 0xec, 0x99, 1, kMenuFontLineHeight));
    given_file("art\\fnte_pfd.act", solid_glyphs);
    given_file("art\\fnte_f.RAW", engine::makeSheetOfSize(0x94, 0xec, '\xff'));
    given_file("art\\micro.raw", engine::makeSheetOfSize(0x94, 0xec, '\0'));
}

} // namespace nocturne::core
