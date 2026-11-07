#pragma once

#include "core/dfont/dfont.h"
#include "engine/2d/2d.h"
#include "engine/screendevice.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/core/menufontfiles.h"
#include "tests/mocks/core/moonfiles.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/engine/mockscreendevice.h"

#include <gmock/gmock.h>

namespace nocturne::core {

// The medium and tiny fonts' block glyphs: 2 wide and 4 tall, and 1 wide and 3 tall, beside the
// theme and small editor fonts' 1 by 2.
inline constexpr int kMediumGlyphWidth = 2;
inline constexpr int kMediumGlyphHeight = 4;
inline constexpr int kTinyGlyphWidth = 1;
inline constexpr int kTinyGlyphHeight = 3;

// The game's drawing put on screen: its screen device answers with screen's size, rows, depth and
// colours, its fonts are block fonts, and its 2D is clipped to the screen.
inline void drawGameOnto(CGameParts &parts, engine::CMemoryScreen &screen,
                         const GivenFile &given_file) {
    ::testing::NiceMock<engine::MockScreenDevice> &device = parts.getScreen();
    ON_CALL(device, getWindowWidth()).WillByDefault([&screen] { return screen.getWindowWidth(); });
    ON_CALL(device, getWindowHeight()).WillByDefault([&screen] {
        return screen.getWindowHeight();
    });
    ON_CALL(device, getBitsPerPixel()).WillByDefault([&screen] {
        return screen.getBitsPerPixel();
    });
    ON_CALL(device, getScreenRows()).WillByDefault([&screen] { return screen.getScreenRows(); });
    ON_CALL(device, getColorTable16()).WillByDefault([&screen] {
        return screen.getColorTable16();
    });
    ON_CALL(device, getColorTable32()).WillByDefault([&screen] {
        return screen.getColorTable32();
    });
    ON_CALL(device, getColorChannels()).WillByDefault([&screen]() -> engine::SColorChannels & {
        return screen.getColorChannels();
    });
    ON_CALL(device, getColorMasks()).WillByDefault([&screen]() -> const engine::SColorMasks & {
        return screen.getColorMasks();
    });
    givenMenuFontFiles(given_file);
    given_file("art\\nocfont.raw", engine::makeBlockFontSheet(0x136, 0x1ae, 0x99, kMediumGlyphWidth,
                                                              kMediumGlyphHeight));
    given_file("art\\nocsmall.raw",
               engine::makeBlockFontSheet(0xf8, 0x158, 0x99, kTinyGlyphWidth, kTinyGlyphHeight));
    parts.getFonts().initFonts();
    parts.getTwoD().setupViewportAndClipping(0, 0, screen.getWindowWidth() - 1,
                                             screen.getWindowHeight() - 1);
}

} // namespace nocturne::core
