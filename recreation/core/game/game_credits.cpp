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

    SScrollRows(float scroll_top, const SPictureArea &picture)
        : top(static_cast<int>(std::lround(scroll_top))),
          screen_top(picture.top + static_cast<int>(std::lround(scroll_top * picture.scale_y))) {}

    // The screen row of the line at picture row y.
    [[nodiscard]] int getScreenY(int y, const SPictureArea &picture) const {
        return screen_top +
               static_cast<int>(std::lround(static_cast<float>(y - top) * picture.scale_y));
    }
};

// The credits from `rows`, those on the image and above its foot, centred between the column's
// left and `right`, as large as the picture's height shows them.
void drawCredits(engine::CBitFont &font, std::span<const std::string_view> lines,
                 const SScrollRows &rows, const SPictureArea &picture, int right,
                 const engine::SCreditsColumnScroll &scroll) {
    const int line_height = font.getCharHeight(kLineHeightChar);
    const int left = picture.getX(scroll.column_left);
    const float scale = picture.getScale();
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
            const int width = font.getTextWidthScaled(line, scale);
            font.drawTextScaled(line, ((left + right) / 2) - (width / 2),
                                rows.getScreenY(y, picture), color, scroll.shadow_colour, scale);
        }
        y += line_height;
    }
}

// The credits from `rows`, each centred across the picture and as opaque as it is near the fade's
// centre; only those above the image's foot are drawn.
void drawFadeCredits(engine::CBitFont &font, std::span<const std::string_view> lines,
                     const SScrollRows &rows, const SPictureArea &picture, engine::C3d &three_d,
                     const engine::SCreditsFadeLoop &fade) {
    const int line_height = font.getCharHeight(kLineHeightChar);
    const float scale = picture.getScale();
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
            const int width = font.getTextWidthScaled(line, scale);
            font.drawTextScaled(line, picture.getX(kImageWidth / 2) - (width / 2),
                                rows.getScreenY(y, picture), color, fade.shadow_colour, scale);
        }
        y += line_height;
    }
    three_d.setRenderAlpha(kFullAlpha);
}

// BW3's, from `rows`: a line marked so in two columns, split where
// the second's mark is (one without it, or with nothing before it, drawing nothing), else
// centred between the bounds. True when any was on the screen.
bool drawTwoColumnCredits(engine::CBitFont &font, std::span<const std::string_view> lines,
                          const SScrollRows &rows, const SPictureArea &picture,
                          const engine::SCreditsTwoColumn &two) {
    const int line_height = font.getCharHeight(kLineHeightChar);
    const float scale = picture.getScale();
    const std::string heading{two.marker, two.heading};
    const std::string left_mark{two.marker, two.left_column};
    const std::string right_mark{two.marker, two.right_column};
    const auto draw = [&](std::string_view text, int x, int y, int color) {
        font.drawTextScaled(text, x, rows.getScreenY(y, picture), color, two.shadow_colour, scale);
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
                    draw(line.substr(0, split), picture.getX(two.left_x), y, color);
                    draw(line.substr(split + right_mark.size()), picture.getX(two.right_x), y,
                         color);
                }
            } else {
                // As drawTextCenterInBounds centres it.
                draw(line,
                     (picture.getX(two.centre_left) + picture.getX(two.centre_right) + 1 -
                      font.getTextWidthScaled(line, scale)) /
                         2,
                     y, color);
            }
        }
        y += line_height;
    }
    return drawn;
}

// The style's own look, one of the three, and what every style has.
struct SCreditsLook {
    const engine::SCreditsColumnScroll *column_scroll = nullptr;
    const engine::SCreditsTwoColumn *two_column = nullptr;
    const engine::SCreditsFadeLoop *fade_loop = nullptr;
    std::string font;
    std::string end_line;
    int speed = 0;
    int start_y = 0;
};

template <typename Look>
void takeRoll(SCreditsLook &credits_look, const Look &look) {
    credits_look.font = look.font;
    credits_look.end_line = look.end_line;
    credits_look.speed = look.scroll_speed;
    credits_look.start_y = look.start_y;
}

[[noreturn]] void quitWithoutLook(std::string_view style) {
    common::displayErrorAndQuit(std::format("No package gives the {} credits' look", style));
}

// The style's look; a style whose look no package gives is fatal.
[[nodiscard]] SCreditsLook getCreditsLook(const engine::SGameCredits &credits,
                                          std::string_view style) {
    SCreditsLook look;
    if (style == kFadeLoopCredits) {
        if (!credits.fade_loop) {
            quitWithoutLook(style);
        }
        look.fade_loop = &*credits.fade_loop;
        takeRoll(look, *look.fade_loop);
    } else if (style == kTwoColumnCredits) {
        if (!credits.two_column) {
            quitWithoutLook(style);
        }
        look.two_column = &*credits.two_column;
        takeRoll(look, *look.two_column);
    } else {
        if (!credits.column_scroll) {
            quitWithoutLook(style);
        }
        look.column_scroll = &*credits.column_scroll;
        takeRoll(look, *look.column_scroll);
    }
    return look;
}

// What a drawing of the credits draws with and on.
struct SCreditsFrame {
    engine::CBitFont &font;
    std::span<const std::string_view> lines;
    SPictureArea picture;
    // The last column and row the strips reach.
    int right = 0;
    int bottom = 0;
    engine::CAlphaBitmap &image;
    platform::EUpscaler upscaler;
    engine::C2d &two_d;
    engine::C3d &three_d;
};

// The style's image and lines from `top`; true when any line was on the screen.
bool drawCreditsLines(const SCreditsLook &look, const SCreditsFrame &frame,
                      const SScrollRows &top) {
    if (look.two_column != nullptr) {
        const engine::SCreditsTwoColumn &two = *look.two_column;
        const bool drawn = drawTwoColumnCredits(frame.font, frame.lines, top, frame.picture, two);
        const SPictureArea &picture = frame.picture;
        frame.two_d.fillRectColor(picture.getX(0), picture.getY(0), frame.right,
                                  picture.getY(two.top_strip_bottom), two.strip_colour);
        frame.two_d.fillRectColor(picture.getX(0), picture.getY(two.bottom_strip_top), frame.right,
                                  frame.bottom, two.strip_colour);
        return drawn;
    }
    if (look.fade_loop != nullptr) {
        const engine::SCreditsFadeLoop &fade = *look.fade_loop;
        displayInPicture(
            frame.image, frame.picture,
            {.x = fade.image_x, .y = fade.image_y, .width = kImageWidth, .height = kImageHeight},
            kFullAlpha, frame.upscaler);
        drawFadeCredits(frame.font, frame.lines, top, frame.picture, frame.three_d, fade);
        return true;
    }
    displayInPicture(frame.image, frame.picture,
                     {.x = 0, .y = 0, .width = kImageWidth, .height = kImageHeight}, kFullAlpha,
                     frame.upscaler);
    drawCredits(frame.font, frame.lines, top, frame.picture, frame.right, *look.column_scroll);
    return true;
}

// Where the scroll starts again, if it does: a fade loop far enough up comes round from below,
// and BW3's, once a drawing had none on the screen and the top is above it, from the start.
std::optional<float> getScrollRestart(const SCreditsLook &look, float scroll_top, bool any_drawn) {
    if (look.fade_loop != nullptr && scroll_top < static_cast<float>(look.fade_loop->loop_below)) {
        return static_cast<float>(look.fade_loop->restart_y);
    }
    if (look.two_column != nullptr && !any_drawn && scroll_top < 0.0F) {
        return static_cast<float>(look.start_y);
    }
    return std::nullopt;
}

// The credits' music on the music channel, unpositioned; 0 when it has none or the channel is
// off.
std::uint32_t startCreditsMusic(sound::CSndMain &sound_main, const std::string &music) {
    if (music.empty() || !sound_main.isSfxChannelEnabled(CSound::kMusicChannel)) {
        return 0;
    }
    sound_main.pushSfxOptions();
    sound_main.setNextSfxChannel(CSound::kMusicChannel);
    sound_main.setNextSfxFlags(sound::kSfxNonPositional);
    const std::uint32_t handle = sound_main.startSfx(music);
    sound_main.popSfxOptions();
    return handle;
}

// column_scroll's strips over its column's top and foot.
void drawColumnStrips(const engine::SCreditsColumnScroll &scroll, const SCreditsFrame &frame) {
    const int column_left = frame.picture.getX(scroll.column_left);
    frame.two_d.fillRectColor(column_left, 0, frame.right,
                              frame.picture.getY(scroll.top_strip_bottom), scroll.strip_colour);
    frame.two_d.fillRectColor(column_left, frame.picture.getY(scroll.bottom_strip_top), frame.right,
                              frame.bottom, scroll.strip_colour);
}

} // namespace

// The original kept at most 1024 lines of 254 characters, and ended on Escape held rather than
// on Cancel. The image, and the lines over it, are where the credits' fit puts the picture. A
// column_scroll's column may run on past a picture that keeps its shape to the screen's right
// edge, with its strips, over the image's black right side, as Nocturne's and BW1's kept to the
// left do; the strips also cover the screen's top and foot. BW2's fade_loop draws its image at
// its point on the picture and its lines over the middle, starting over once they are far enough
// up, until the music ends. BW3's two_column draws no image, letterboxes the picture, leaves the
// menu's music playing, and starts over once its lines are all gone.
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
    const SCreditsLook look = getCreditsLook(*credits, style);
    const bool columns = look.two_column != nullptr;
    const engine::IScreenDevice &screen = owners_.screen;
    const SPictureArea picture =
        getPictureArea(screen.getWindowWidth(), screen.getWindowHeight(), credits->fit);
    const bool to_screen_edge =
        look.column_scroll != nullptr && look.column_scroll->column_to_screen_edge;
    const int right = (to_screen_edge ? std::max(picture.getX(kImageWidth), screen.getWindowWidth())
                                      : picture.getX(kImageWidth)) -
                      1;
    const int bottom = std::max(picture.getY(kImageHeight), screen.getWindowHeight()) - 1;
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
    lines.erase(std::ranges::find(lines, look.end_line), lines.end());
    sound::CSndMain &sound_main = owners_.sound_main;
    if (!columns) {
        sound_main.resetSoundDevice();
    }
    static_cast<void>(sound_main.enableSoundSystem());
    const std::uint32_t music = startCreditsMusic(sound_main, credits->music);
    owners_.two_d.clearInputAndWait();
    engine::CBitFont &font = owners_.fonts.findFont(look.font);
    engine::CFont *const os_font = font.releaseWinFont();
    saveClockTime();
    owners_.three_d.setRenderAlpha(kFullAlpha);
    const SCreditsFrame frame{.font = font,
                              .lines = lines,
                              .picture = picture,
                              .right = right,
                              .bottom = bottom,
                              .image = image,
                              .upscaler = owners_.display.getUpscaler(),
                              .two_d = owners_.two_d,
                              .three_d = owners_.three_d};
    auto scroll_top = static_cast<float>(look.start_y);
    std::optional<int> drawn_top;
    // Whether the last drawing had a line on the screen.
    bool any_drawn = false;
    while (true) {
        const SScrollRows top(scroll_top, picture);
        // Redrawn only once the scroll reaches another screen row.
        if (top.screen_top != drawn_top) {
            owners_.special.clearScreen();
            any_drawn = drawCreditsLines(look, frame, top);
            if (music != 0 && !sound_main.isSfxPlaying(music)) {
                break;
            }
            if (look.column_scroll != nullptr) {
                drawColumnStrips(*look.column_scroll, frame);
            }
            drawn_top = top.screen_top;
        }
        owners_.screen.swapBuffers();
        if (owners_.menu_input.takeMenuAction(engine::EMenuAction::Cancel)) {
            break;
        }
        updateDT();
        scroll_top -= getDeltaTimeFloat() * static_cast<float>(look.speed);
        if (const std::optional<float> restart = getScrollRestart(look, scroll_top, any_drawn)) {
            scroll_top = *restart;
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
