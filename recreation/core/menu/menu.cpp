#include "core/menu/menu.h"

#include "engine/2d/2d.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/font/bitfont.h"
#include "engine/rawinput.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "support/newmsg/newmsg.h"

#include <array>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

// The image is 640x480 and the text is laid out on it, whatever the mode.
constexpr int kImageWidth = 640;
constexpr int kImageHeight = 480;
constexpr int kFullAlpha = 0xffff;
constexpr int kTextColor = 0xf8;
// The character whose height spaces the text.
constexpr int kLineHeightChar = 'X';

constexpr std::array<std::string_view, 5> kCalibrationSteps{
    "1. Turn off all the lights in your room.",
    "2. Turn your brightness up, so that you see 3 bars on the left side of the screen.",
    "3. Turn down the brightness, so that the left 2 bars become the same color.",
    "4. Turn your contrast all the way up.",
    "You're done with calibration.",
};

void drawCentred(engine::CBitFont &font, std::string_view text, int y) {
    font.drawText(text, (kImageWidth / 2) - (font.getTextWidth(text) / 2), y, kTextColor,
                  engine::CBitFont::kNoShadow);
}

// The original built the text in a 256-byte buffer, which a long translation overran.
// nocedit 0x00510a50
void showCalibrationTestPattern(const SMenuOwners &owners, engine::CAlphaBitmap &bitmap,
                                std::string_view message_text) {
    engine::CBitFont &font = owners.small_editor_font;
    const std::string prompt =
        std::string(message_text) +
        std::string(owners.messages.getLocalizedString("  Press any key to continue."));
    const int line_height = font.getCharHeight(kLineHeightChar);
    owners.special.clearScreen();
    bitmap.display(0, 0, kFullAlpha);
    drawCentred(font, prompt, kImageHeight - (3 * line_height));
    drawCentred(font, owners.messages.getLocalizedString("Monitor calibration"), 2 * line_height);
    owners.screen.swapBuffers();
    owners.two_d.clearInputAndWait();
    owners.raw_input.getNextKeypress(owners.screen);
}

} // namespace

// nocedit 0x00510ba0
void showCalibrationTest(const SMenuOwners &owners) {
    engine::CAlphaBitmap bitmap(owners.dosio, owners.screen, owners.special);
    bitmap.load("brightness", kImageWidth, kImageHeight);
    for (const std::string_view step : kCalibrationSteps) {
        showCalibrationTestPattern(owners, bitmap, owners.messages.getLocalizedString(step));
    }
    owners.two_d.clearInputAndWait();
}

} // namespace nocturne::core
