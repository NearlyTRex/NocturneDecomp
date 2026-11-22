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

// Where the scrolling lines are. Which are drawn, and how faded, goes by their layout rows, as
// the originals'; where on the screen by the first line's screen row, rounded once from the
// scroll, and each line's fixed distance below it, so all the lines move together a screen
// pixel at a time. Rounding each line's row on its own moved some a pixel more than others.
struct SScrollRows {
    // The first line's layout row.
    int top = 0;
    int screen_top = 0;

    SScrollRows(float scroll_top, const SFrontEndLayout &layout)
        : top(static_cast<int>(std::lround(scroll_top))),
          screen_top(layout.top + static_cast<int>(std::lround(scroll_top * layout.scale))) {}

    // The screen row of the line at layout row y.
    [[nodiscard]] int getScreenY(int y, const SFrontEndLayout &layout) const {
        return screen_top +
               static_cast<int>(std::lround(static_cast<float>(y - top) * layout.scale));
    }
};

// The credits from `rows`, those on the image and above its foot, centred between the column's
// left and the screen's `right`, as large as the layout shows them.
void drawCredits(engine::CBitFont &font, std::span<const std::string_view> lines,
                 const SScrollRows &rows, const SFrontEndLayout &layout, int right,
                 const engine::SCreditsColumnScroll &scroll) {
    const int line_height = font.getCharHeight(kLineHeightChar);
    const int left = layout.getX(scroll.column_left);
    int y = rows.top;
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
            font.drawTextScaled(line, ((left + right) / 2) - (width / 2),
                                rows.getScreenY(y, layout), color, scroll.shadow_colour,
                                layout.scale);
        }
        y += line_height;
    }
}

// The credits from `rows`, each centred across the layout and as opaque as it is near the fade's
// centre; only those above the image's foot are drawn.
void drawFadeCredits(engine::CBitFont &font, std::span<const std::string_view> lines,
                     const SScrollRows &rows, const SFrontEndLayout &layout, engine::C3d &three_d,
                     const engine::SCreditsFadeLoop &fade) {
    const int line_height = font.getCharHeight(kLineHeightChar);
    int y = rows.top;
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
            font.drawTextScaled(line, layout.getX(kImageWidth / 2) - (width / 2),
                                rows.getScreenY(y, layout), color, fade.shadow_colour,
                                layout.scale);
        }
        y += line_height;
    }
    three_d.setRenderAlpha(kFullAlpha);
}

// BW3's, from `rows`: a line marked so in two columns, split where
// the second's mark is (one without it, or with nothing before it, drawing nothing), else
// centred between the bounds. True when any was on the screen.
bool drawTwoColumnCredits(engine::CBitFont &font, std::span<const std::string_view> lines,
                          const SScrollRows &rows, const SFrontEndLayout &layout,
                          const engine::SCreditsTwoColumn &two) {
    const int line_height = font.getCharHeight(kLineHeightChar);
    const std::string heading{two.marker, two.heading};
    const std::string left_mark{two.marker, two.left_column};
    const std::string right_mark{two.marker, two.right_column};
    const auto draw = [&](std::string_view text, int x, int y, int color) {
        font.drawTextScaled(text, x, rows.getScreenY(y, layout), color, two.shadow_colour,
                            layout.scale);
    };
    bool drawn = false;
    int y = rows.top;
    for (std::string_view line : lines) {
        int color = two.text_colour;
        if (line.starts_with(heading)) {
            color = two.heading_colour;
            line.remove_prefix(heading.size());
        }
        if (y >= 0 && y < kImageBottom - line_height) {
            drawn = true;
            if (line.starts_with(left_mark)) {
                line.remove_prefix(left_mark.size());
                const std::size_t split = line.find(right_mark);
                if (split != std::string_view::npos && split > 0) {
                    draw(line.substr(0, split), layout.getX(two.left_x), y, color);
                    draw(line.substr(split + right_mark.size()), layout.getX(two.right_x), y,
                         color);
                }
            } else {
                // As drawTextCenterInBounds centres it.
                draw(line,
                     (layout.getX(two.centre_left) + layout.getX(two.centre_right) + 1 -
                      font.getTextWidthScaled(line, layout.scale)) /
                         2,
                     y, color);
            }
        }
        y += line_height;
    }
    return drawn;
}

} // namespace

// The original kept at most 1024 lines of 254 characters, and ended on Escape held rather than
// on Cancel. A column_scroll image is the front end's layout, scaled and centred up and down but
// kept to the left, so on a wider screen its text column, over the image's black right side, runs
// on to the screen's right edge with its strips; the strips also cover the screen's top and foot.
// BW2's fade_loop draws its image at its point on the layout and its lines over the middle,
// starting over once they are far enough up, until the music ends. BW3's two_column draws no
// image, leaves the menu's music playing, and starts over once its lines are all gone.
// bw3 0x004c02a0
// bw2 0x004be430
// nocedit 0x004e4010
void CGame::rollCredits() {
    const std::optional<engine::SGameCredits> &credits = owners_.content.credits;
    // A game whose packages give no credits rolls none.
    if (!credits) {
        return;
    }
    const std::string_view style =
        requireFrontEndStyle("credits", owners_.content.front_end.credits,
                             {kColumnScrollCredits, kFadeLoopCredits, kTwoColumnCredits});
    const bool fades = style == kFadeLoopCredits;
    const bool columns = style == kTwoColumnCredits;
    if (fades ? !credits->fade_loop : columns ? !credits->two_column : !credits->column_scroll) {
        common::displayErrorAndQuit(std::format("No package gives the {} credits' look", style));
    }
    // What every style has.
    const std::string font_id = fades     ? credits->fade_loop->font
                                : columns ? credits->two_column->font
                                          : credits->column_scroll->font;
    const std::string end_line = fades     ? credits->fade_loop->end_line
                                 : columns ? credits->two_column->end_line
                                           : credits->column_scroll->end_line;
    const int speed = fades     ? credits->fade_loop->scroll_speed
                      : columns ? credits->two_column->scroll_speed
                                : credits->column_scroll->scroll_speed;
    const int start_y = fades     ? credits->fade_loop->start_y
                        : columns ? credits->two_column->start_y
                                  : credits->column_scroll->start_y;
    const engine::IScreenDevice &screen = owners_.screen;
    SFrontEndLayout layout = getFrontEndLayout(screen.getWindowWidth(), screen.getWindowHeight());
    if (!fades && !columns) {
        layout.left = 0;
    }
    const int right = std::max(layout.getX(kImageWidth), screen.getWindowWidth()) - 1;
    const int bottom = std::max(layout.getY(kImageHeight), screen.getWindowHeight()) - 1;
    owners_.two_d.clearInputAndWait();
    engine::CAlphaBitmap image(owners_.dosio, owners_.screen, owners_.special);
    if (!credits->image.empty()) {
        image.load(credits->image, kImageWidth, kImageHeight);
    }
    const std::optional<std::string> text = owners_.dosio.readFile("data", credits->text);
    if (!text) {
        return;
    }
    std::vector<std::string_view> lines = common::splitTextLines(*text);
    lines.erase(std::ranges::find(lines, end_line), lines.end());
    sound::CSndMain &sound_main = owners_.sound_main;
    if (!columns) {
        sound_main.resetSoundDevice();
    }
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
    engine::CBitFont &font = owners_.fonts.findFont(font_id);
    engine::CFont *const os_font = font.releaseWinFont();
    saveClockTime();
    owners_.three_d.setRenderAlpha(kFullAlpha);
    auto scroll_top = static_cast<float>(start_y);
    std::optional<int> drawn_top;
    // Whether the last drawing had a line on the screen.
    bool any_drawn = false;
    while (true) {
        const SScrollRows top(scroll_top, layout);
        // Redrawn only once the scroll reaches another screen row.
        if (top.screen_top != drawn_top) {
            owners_.special.clearScreen();
            if (columns) {
                const engine::SCreditsTwoColumn &two = *credits->two_column;
                any_drawn = drawTwoColumnCredits(font, lines, top, layout, two);
                owners_.two_d.fillRectColor(layout.getX(0), layout.getY(0), right,
                                            layout.getY(two.top_strip_bottom), two.strip_colour);
                owners_.two_d.fillRectColor(layout.getX(0), layout.getY(two.bottom_strip_top),
                                            right, bottom, two.strip_colour);
            } else if (fades) {
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
            if (!fades && !columns) {
                const engine::SCreditsColumnScroll &scroll = *credits->column_scroll;
                const int column_left = layout.getX(scroll.column_left);
                owners_.two_d.fillRectColor(column_left, 0, right,
                                            layout.getY(scroll.top_strip_bottom),
                                            scroll.strip_colour);
                owners_.two_d.fillRectColor(column_left, layout.getY(scroll.bottom_strip_top),
                                            right, bottom, scroll.strip_colour);
            }
            drawn_top = top.screen_top;
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
        // BW3's: once a drawing had none on the screen and the top is above it, from the start.
        if (columns && !any_drawn && scroll_top < 0.0F) {
            scroll_top = static_cast<float>(start_y);
            drawn_top.reset();
        }
    }
    if (os_font != nullptr) {
        font.setWinFont(*os_font);
    }
    if (!columns) {
        sound_main.resetSoundDevice();
    }
    owners_.two_d.clearInputAndWait();
}

} // namespace nocturne::core
