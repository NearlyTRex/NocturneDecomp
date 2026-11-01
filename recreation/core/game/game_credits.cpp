#include "common/text/textlines.h"
#include "core/dfont/dfont.h"
#include "core/game/game.h"
#include "core/sound/sound.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/dosio/dosio.h"
#include "engine/font/bitfont.h"
#include "engine/menuinput.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "sound/sndmain/sfxoptions.h"
#include "sound/sndmain/sndmain.h"

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

constexpr int kImageWidth = 640;
constexpr int kImageHeight = 480;
constexpr int kFullAlpha = 0xffff;
// The credits roll up the right of the image, between black strips over its top and bottom.
constexpr int kColumnLeft = 414;
constexpr int kColumnRight = kImageWidth - 1;
constexpr int kTopStripBottom = 30;
constexpr int kBottomStripTop = 439;
constexpr int kImageBottom = kImageHeight - 1;
constexpr int kStripColor = 0;
constexpr int kTextColor = 0xf8;
constexpr int kHeadingColor = 2;
constexpr int kShadowColor = 0;
// The character whose height spaces the lines.
constexpr int kLineHeightChar = 'X';
// In pixels a second, from the foot of the image.
constexpr float kScrollSpeed = 32.0F;
constexpr float kStartTop = static_cast<float>(kImageHeight);
constexpr std::string_view kEndLine = "end";
constexpr std::string_view kMusic = "faded-remix.mp3";
// A line starting with a backslash drops it and the character after; "\b" is a heading.
constexpr char kMarker = '\\';
constexpr char kHeadingMarker = 'b';

// The credits with their first line at `top`, those on the image and above its foot.
void drawCredits(engine::CBitFont &font, std::span<const std::string_view> lines, int top) {
    const int line_height = font.getCharHeight(kLineHeightChar);
    int y = top;
    for (std::string_view line : lines) {
        int color = kTextColor;
        if (line.starts_with(kMarker)) {
            if (line.size() > 1 && line[1] == kHeadingMarker) {
                color = kHeadingColor;
            }
            line.remove_prefix(std::min<std::size_t>(2, line.size()));
        }
        if (y >= 0 && y < kImageBottom - line_height) {
            font.drawTextCenterInBounds(kColumnLeft, kColumnRight, y, color, kShadowColor, line);
        }
        y += line_height;
    }
}

} // namespace

// The original kept at most 1024 lines of 254 characters, and ended on Escape held rather than
// on Cancel.
// nocedit 0x004e4010
void CGame::rollCredits() {
    owners_.two_d.clearInputAndWait();
    engine::CAlphaBitmap image(owners_.dosio, owners_.screen, owners_.special);
    image.load("stats", kImageWidth, kImageHeight);
    const std::optional<std::string> text = owners_.dosio.readFile("data", "credits.txt");
    if (!text) {
        return;
    }
    std::vector<std::string_view> lines = common::splitTextLines(*text);
    lines.erase(std::ranges::find(lines, kEndLine), lines.end());
    sound::CSndMain &sound_main = owners_.sound_main;
    sound_main.resetSoundDevice();
    static_cast<void>(sound_main.enableSoundSystem());
    std::uint32_t music = 0;
    if (sound_main.isSfxChannelEnabled(CSound::kMusicChannel)) {
        sound_main.pushSfxOptions();
        sound_main.setNextSfxChannel(CSound::kMusicChannel);
        sound_main.setNextSfxFlags(sound::kSfxNonPositional);
        music = sound_main.startSfx(kMusic);
        sound_main.popSfxOptions();
    }
    owners_.two_d.clearInputAndWait();
    engine::CBitFont &font = *owners_.fonts.getThemeFont();
    engine::CFont *const os_font = font.releaseWinFont();
    saveClockTime();
    owners_.three_d.setRenderAlpha(kFullAlpha);
    float scroll_top = kStartTop;
    std::optional<int> drawn_top;
    while (true) {
        const auto top = static_cast<int>(std::lround(scroll_top));
        // Redrawn only once the scroll reaches another row.
        if (top != drawn_top) {
            owners_.special.clearScreen();
            image.display(0, 0, kFullAlpha);
            drawCredits(font, lines, top);
            if (music != 0 && !sound_main.isSfxPlaying(music)) {
                break;
            }
            owners_.two_d.fillRectColor(kColumnLeft, 0, kColumnRight, kTopStripBottom, kStripColor);
            owners_.two_d.fillRectColor(kColumnLeft, kBottomStripTop, kColumnRight, kImageBottom,
                                        kStripColor);
            drawn_top = top;
        }
        owners_.screen.swapBuffers();
        if (owners_.menu_input.takeMenuAction(engine::EMenuAction::Cancel)) {
            break;
        }
        updateDT();
        scroll_top -= getDeltaTimeFloat() * kScrollSpeed;
    }
    if (os_font != nullptr) {
        font.setWinFont(*os_font);
    }
    sound_main.resetSoundDevice();
    owners_.two_d.clearInputAndWait();
}

} // namespace nocturne::core
