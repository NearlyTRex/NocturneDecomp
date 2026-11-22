#include "common/error/error.h"
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
#include <cstdlib>
#include <format>
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
constexpr int kImageBottom = kImageHeight - 1;
// The character whose height spaces the lines.
constexpr int kLineHeightChar = 'X';

// The credits with their first line at layout row `top`, those on the image and above its foot,
// centred between the column's left and the screen's `right`, as large as the layout shows them.
void drawCredits(engine::CBitFont &font, std::span<const std::string_view> lines, int top,
                 const SFrontEndLayout &layout, int right,
                 const engine::SCreditsColumnScroll &scroll) {
    const int line_height = font.getCharHeight(kLineHeightChar);
    const int left = layout.getX(scroll.column_left);
    int y = top;
    for (std::string_view line : lines) {
        int color = scroll.text_colour;
        if (line.starts_with(scroll.marker)) {
            if (line.size() > 1 && line[1] == scroll.heading) {
                color = scroll.heading_colour;
            }
            line.remove_prefix(std::min<std::size_t>(2, line.size()));
        }
        if (y >= 0 && y < kImageBottom - line_height) {
            const int width = font.getTextWidthScaled(line, layout.scale);
            font.drawTextScaled(line, ((left + right) / 2) - (width / 2), layout.getY(y), color,
                                scroll.shadow_colour, layout.scale);
        }
        y += line_height;
    }
}

// The credits with their first line at layout row `top`, each centred across the layout and as
// opaque as it is near the fade's centre; only those above the image's foot are drawn.
void drawFadeCredits(engine::CBitFont &font, std::span<const std::string_view> lines, int top,
                     const SFrontEndLayout &layout, engine::C3d &three_d,
                     const engine::SCreditsFadeLoop &fade) {
    const int line_height = font.getCharHeight(kLineHeightChar);
    int y = top;
    for (std::string_view line : lines) {
        int color = fade.text_colour;
        if (line.starts_with(fade.marker)) {
            if (line.size() > 1 && line[1] == fade.heading) {
                color = fade.heading_colour;
            }
            line.remove_prefix(std::min<std::size_t>(2, line.size()));
        }
        if (y >= 0 && y < kImageBottom - line_height) {
            const double distance = std::abs(y - fade.fade_centre);
            three_d.setRenderAlpha(std::max(
                0, static_cast<int>(std::lround(
                       (1.0 - (distance / static_cast<double>(fade.fade_reach))) * kFullAlpha))));
            const int width = font.getTextWidthScaled(line, layout.scale);
            font.drawTextScaled(line, layout.getX(kImageWidth / 2) - (width / 2), layout.getY(y),
                                color, fade.shadow_colour, layout.scale);
        }
        y += line_height;
    }
    three_d.setRenderAlpha(kFullAlpha);
}

} // namespace

// The original kept at most 1024 lines of 254 characters, and ended on Escape held rather than
// on Cancel. A column_scroll image is the front end's layout, scaled and centred up and down but
// kept to the left, so on a wider screen its text column, over the image's black right side, runs
// on to the screen's right edge with its strips; the strips also cover the screen's top and foot.
// BW2's fade_loop draws its image at its point on the layout and its lines over the middle,
// starting over once they are far enough up, until the music ends.
// bw2 0x004be430
// nocedit 0x004e4010
void CGame::rollCredits() {
    const std::optional<engine::SGameCredits> &credits = owners_.content.credits;
    // A game whose packages give no credits rolls none.
    if (!credits) {
        return;
    }
    const std::string_view style = requireFrontEndStyle(
        "credits", owners_.content.front_end.credits, {kColumnScrollCredits, kFadeLoopCredits});
    const bool fades = style == kFadeLoopCredits;
    if (fades ? !credits->fade_loop : !credits->column_scroll) {
        common::displayErrorAndQuit(std::format("No package gives the {} credits' look", style));
    }
    const engine::IScreenDevice &screen = owners_.screen;
    SFrontEndLayout layout = getFrontEndLayout(screen.getWindowWidth(), screen.getWindowHeight());
    if (!fades) {
        layout.left = 0;
    }
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
    const std::string &end_line =
        fades ? credits->fade_loop->end_line : credits->column_scroll->end_line;
    lines.erase(std::ranges::find(lines, end_line), lines.end());
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
    engine::CBitFont &font =
        owners_.fonts.findFont(fades ? credits->fade_loop->font : credits->column_scroll->font);
    engine::CFont *const os_font = font.releaseWinFont();
    saveClockTime();
    owners_.three_d.setRenderAlpha(kFullAlpha);
    const int speed =
        fades ? credits->fade_loop->scroll_speed : credits->column_scroll->scroll_speed;
    auto scroll_top =
        static_cast<float>(fades ? credits->fade_loop->start_y : credits->column_scroll->start_y);
    std::optional<int> drawn_top;
    while (true) {
        const auto top = static_cast<int>(std::lround(scroll_top));
        // Redrawn only once the scroll reaches another row.
        if (top != drawn_top) {
            owners_.special.clearScreen();
            if (fades) {
                const engine::SCreditsFadeLoop &fade = *credits->fade_loop;
                displayInLayout(image, layout,
                                {.x = fade.image_x,
                                 .y = fade.image_y,
                                 .width = kImageWidth,
                                 .height = kImageHeight},
                                kFullAlpha, owners_.display.getUpscaler());
                drawFadeCredits(font, lines, top, layout, owners_.three_d, fade);
            } else {
                displayInLayout(image, layout,
                                {.x = 0, .y = 0, .width = kImageWidth, .height = kImageHeight},
                                kFullAlpha, owners_.display.getUpscaler());
                drawCredits(font, lines, top, layout, right, *credits->column_scroll);
            }
            if (music != 0 && !sound_main.isSfxPlaying(music)) {
                break;
            }
            if (!fades) {
                const engine::SCreditsColumnScroll &scroll = *credits->column_scroll;
                const int column_left = layout.getX(scroll.column_left);
                owners_.two_d.fillRectColor(column_left, 0, right,
                                            layout.getY(scroll.top_strip_bottom),
                                            scroll.strip_colour);
                owners_.two_d.fillRectColor(column_left, layout.getY(scroll.bottom_strip_top),
                                            right, bottom, scroll.strip_colour);
            }
            drawn_top = top;
        }
        owners_.screen.swapBuffers();
        if (owners_.menu_input.takeMenuAction(engine::EMenuAction::Cancel)) {
            break;
        }
        updateDT();
        scroll_top -= getDeltaTimeFloat() * static_cast<float>(speed);
        // Once far enough up, the lines come round again from below.
        if (fades && scroll_top < static_cast<float>(credits->fade_loop->loop_below)) {
            scroll_top = static_cast<float>(credits->fade_loop->restart_y);
            drawn_top.reset();
        }
    }
    if (os_font != nullptr) {
        font.setWinFont(*os_font);
    }
    sound_main.resetSoundDevice();
    owners_.two_d.clearInputAndWait();
}

} // namespace nocturne::core
