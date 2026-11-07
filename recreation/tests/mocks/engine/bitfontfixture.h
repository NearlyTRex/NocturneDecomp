#pragma once

#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/font/bitfont.h"
#include "engine/font/font.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "tests/mocks/engine/fontsheet.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockrawinput.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace nocturne::engine {

// A two-glyph font in art/font.raw with its palette: '!' is 2x2 with a blank third row, '"' is
// 3x1. In the sheet '#' and '+' are their own bytes; the palette makes '#' red and '+' half grey.
class CBitFontFixture : public CPodFixture {
protected:
    static constexpr int kScreenWidth = 16;
    static constexpr int kScreenHeight = 10;
    static constexpr std::uint8_t kInk = '#';
    static constexpr std::uint8_t kFaint = '+';

    // A font over its own screen at one depth.
    struct SRig {
        SRig(CBitFontFixture &test, int bits_per_pixel)
            : screen(kScreenWidth, kScreenHeight, bits_per_pixel),
              two_d(test.dosio_, screen, test.raw_input_),
              font(test.dosio_, screen, two_d, three_d, colors) {
            two_d.setupViewportAndClipping(0, 0, kScreenWidth - 1, kScreenHeight - 1);
        }

        // Rows of the top left of the screen, '#' where a pixel is value and '.' elsewhere.
        [[nodiscard]] std::string picture(std::uint32_t value, int width, int height) const {
            std::string rows;
            for (int y = 0; y < height; ++y) {
                for (int x = 0; x < width; ++x) {
                    rows += screen.pixel(x, y) == value ? '#' : '.';
                }
                rows += '\n';
            }
            return rows;
        }

        CMemoryScreen screen;
        C2d two_d;
        CLight light;
        CMatrix matrix{two_d, light};
        C3d three_d{matrix};
        CFontColors colors;
        CBitFont font;
    };

    static SFontSheet twoGlyphSheet() {
        return makeFontSheet({{"#.", "##", ".."}, {"#+#", "...", "..."}}, 3);
    }

    static std::string twoGlyphPalette() {
        std::vector<std::uint8_t> levels(768, 0);
        const std::size_t ink = static_cast<std::size_t>(kInk) * 3;
        const std::size_t faint = static_cast<std::size_t>(kFaint) * 3;
        levels[ink] = 0xff;
        levels[faint] = 0x80;
        levels[faint + 1] = 0x80;
        levels[faint + 2] = 0x80;
        return makePalette(levels);
    }

    CBitFontFixture() {
        const SFontSheet sheet = twoGlyphSheet();
        givenFile("art\\font.raw", sheet.pixels);
        givenFile("art\\font.act", twoGlyphPalette());
    }

    static void open(SRig &rig) {
        const SFontSheet sheet = twoGlyphSheet();
        rig.font.openFontFile("font.raw", sheet.width, sheet.height, 0);
    }

    ::testing::NiceMock<MockRawInput> raw_input_;
};

} // namespace nocturne::engine
