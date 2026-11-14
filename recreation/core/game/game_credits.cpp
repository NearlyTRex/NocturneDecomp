#include "common/text/textlines.h"
#include "core/dfont/dfont.h"
#include "core/frontend.h"
#include "core/game/game.h"
#include "core/sound/sound.h"
#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/alphabit/alphabitmap.h"
#include "engine/dosio/dosio.h"
#include "engine/font/bitfont.h"
#include "engine/menuinput.h"
#include "engine/package/gamecontent.h"
#include "engine/screendevice.h"
#include "engine/special/special.h"
#include "platform/display.h"
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
// A line starting with a backslash drops it and the character after; "\b" is a heading.
constexpr char kMarker = '\\';
constexpr char kHeadingMarker = 'b';

// The credits with their first line at layout row `top`, those on the image and above its foot,
// centred between the column's left and the screen's `right`, as large as the layout shows them.
void drawCredits(engine::CBitFont &font, std::span<const std::string_view> lines, int top,
                 const SFrontEndLayout &layout, int right) {
    const int line_height = font.getCharHeight(kLineHeightChar);
    const int left = layout.getX(kColumnLeft);
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
            const int width = font.getTextWidthScaled(line, layout.scale);
            font.drawTextScaled(line, ((left + right) / 2) - (width / 2), layout.getY(y), color,
                                kShadowColor, layout.scale);
        }
        y += line_height;
    }
}

} // namespace

// The original kept at most 1024 lines of 254 characters, and ended on Escape held rather than
// on Cancel. The image is the front end's layout, scaled and centred up and down but kept to the
// left, so on a wider screen its text column, over the image's black right side, runs on to the
// screen's right edge with its strips; the strips also cover the screen's top and foot.
// nocedit 0x004e4010
void CGame::rollCredits() {
    const std::optional<engine::SGameCredits> &credits = owners_.content.credits;
    // A game whose packages give no credits rolls none.
    if (!credits) {
        return;
    }
    const engine::IScreenDevice &screen = owners_.screen;
    SFrontEndLayout layout = getFrontEndLayout(screen.getWindowWidth(), screen.getWindowHeight());
    layout.left = 0;
    const int right = std::max(layout.getX(kImageWidth), screen.getWindowWidth()) - 1;
    const int bottom = std::max(layout.getY(kImageHeight), screen.getWindowHeight()) - 1;
    owners_.two_d.clearInputAndWait();
    engine::CAlphaBitmap image(owners_.dosio, owners_.screen, owners_.special);
    image.load(credits->image, kImageWidth, kImageHeight);
    const std::optional<std::string> text = owners_.dosio.readFile("data", credits->text);
    if (!text) {
        return;
    }
    std::vector<std::string_view> lines = common::splitTextLines(*text);
    lines.erase(std::ranges::find(lines, kEndLine), lines.end());
    sound::CSndMain &sound_main = owners_.sound_main;
    sound_main.resetSoundDevice();
    static_cast<void>(sound_main.enableSoundSystem());
    std::uint32_t music = 0;
    if (!credits->music.empty() && sound_main.isSfxChannelEnabled(CSound::kMusicChannel)) {
        sound_main.pushSfxOptions();
        sound_main.setNextSfxChannel(CSound::kMusicChannel);
        sound_main.setNextSfxFlags(sound::kSfxNonPositional);
        music = sound_main.startSfx(credits->music);
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
            displayInLayout(image, layout,
                            {.x = 0, .y = 0, .width = kImageWidth, .height = kImageHeight},
                            kFullAlpha, owners_.display.getUpscaler());
            drawCredits(font, lines, top, layout, right);
            if (music != 0 && !sound_main.isSfxPlaying(music)) {
                break;
            }
            const int column_left = layout.getX(kColumnLeft);
            owners_.two_d.fillRectColor(column_left, 0, right, layout.getY(kTopStripBottom),
                                        kStripColor);
            owners_.two_d.fillRectColor(column_left, layout.getY(kBottomStripTop), right, bottom,
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
