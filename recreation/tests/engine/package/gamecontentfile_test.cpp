#include "engine/package/gamecontent.h"
#include "engine/package/gamecontentfile.h"
#include "engine/package/packagedata.h"
#include "tests/mocks/common/required.h"
#include "tests/mocks/engine/shippedgamecontent.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <expected>
#include <format>
#include <string>
#include <string_view>

namespace nocturne::engine {
namespace {

using ::testing::HasSubstr;

// A story with one chapter, then whatever the case adds to it.
constexpr std::string_view kStory = "[[stories.story]]\nid = \"s\"\nname = \"S\"\ntitle = \"T\"\n";
constexpr std::string_view kChapter =
    "[[stories.story.chapter]]\nname = \"C\"\nmission = \"c.msn\"\n";

std::string storyWith(std::string_view keys) {
    return std::format("{}{}\n{}", kStory, keys, kChapter);
}

std::string errorOf(std::string_view text) {
    const std::expected<SGameContent, std::string> content = parseGameContent(text);
    EXPECT_FALSE(content.has_value()) << text;
    return content ? std::string() : content.error();
}

SGameContent fullContent() {
    SGameContent content;
    content.title = "Game 2.0_final-cut";
    content.front_end = getShippedGameContent().front_end;
    content.moon_indicator = getShippedGameContent().moon_indicator;
    content.startup = getShippedGameContent().startup;
    content.sky_scene = getShippedGameContent().sky_scene;
    content.fonts = getShippedGameContent().fonts;
    content.controls = getShippedGameContent().controls;
    content.story_select = getShippedGameContent().story_select;
    common::required(content.story_select).difficulties = {
        {.label = "Easy", .puzzle = 0, .combat = 0},
        {.label = "Hard \"puzzles\"", .puzzle = 1, .combat = 0}};
    content.chapter_title = getShippedGameContent().chapter_title;
    common::required(content.chapter_title).place = {.anchor = EHudAnchor::Top, .x = 3, .y = -2};
    content.copyright = "Game \"1999\"";
    content.copyright_os_font = "Game (c) 1999";
    content.death_banner =
        SDeathBanner{.text = "You're \"dead\".",
                     .place = SHudPlace{.anchor = EHudAnchor::Centre, .x = -640, .y = 640}};
    content.iris = SIris{.opens_session = false, .black_frames = 3};
    content.battery = SBattery{.gauge = false};
    content.battery_gauge =
        SBatteryGauge{.place = {.anchor = EHudAnchor::TopRight, .x = 9, .y = 12}};
    content.flashlight = SFlashlight{.options = false};
    content.difficulty = SDifficulty{.options = true};
    content.health_bar = SHealthBar{.place = {.anchor = EHudAnchor::Left, .x = 639, .y = 479}};
    content.inventory_panel =
        SInventoryPanel{.place = {.anchor = EHudAnchor::TopLeft, .x = 1, .y = 2}};
    content.status_bars = SStatusBars{.place = {.anchor = EHudAnchor::Right, .x = 3, .y = -4}};
    content.message_line = SMessageLine{.place = {.anchor = EHudAnchor::BottomLeft, .x = 5}};
    content.credits = getShippedGameContent().credits;
    common::required(content.credits).music = "m.mp3";
    content.menu = getShippedGameContent().menu;
    content.list = getShippedGameContent().list;
    content.dialog = getShippedGameContent().dialog;
    content.loading = {{.id = "load1",
                        .fit = {.fit = EPictureFit::KeepAspect, .anchor = EPictureAnchor::Right},
                        .moon = SMoonWindow{.x = 120, .y = 130, .tint = {0x8200, 0xc800, 0xf400}},
                        .random = true,
                        .icon = "L_demon"},
                       {.id = "plain",
                        .fit = {.fit = EPictureFit::Stretch, .anchor = EPictureAnchor::Centre},
                        .moon = {},
                        .random = false,
                        .icon = {}}};
    content.stories = {
        {.id = "volume1",
         .name = "Volume 1",
         .title = "'One'",
         .year = 1927,
         .loading = "load1",
         .unlock = SStoryUnlock{.key = "Act1Code", .code = 0x331},
         .required_stories = {},
         .chapters = {{.name = "Chapter 1", .mission = "a.msn", .needs_full_install = false},
                      {.name = "Chapter X", .mission = "b.msn", .needs_full_install = true}}},
        {.id = "epilogue",
         .name = "Volume 5",
         .title = "'Five'",
         .year = 0,
         .loading = {},
         .unlock = {},
         .required_stories = {"volume1"},
         .chapters = {{.name = "Chapter 1", .mission = "c.msn", .needs_full_install = false}}}};
    content.labels = {{"S T A R T", "START"}, {"Quote \"", "Quoted \""}};
    content.translations["de"] = {{"Volume 1", "Band 1"}, {"Quote \"", "Zitat \""}};
    content.translations["pt.br"] = {{"Volume 1", "Volume 1"}};
    return content;
}

std::string format(const SGameContent &content) {
    return formatGameContentKeys(content) + formatGameContentTables(content);
}

TEST(GameContentFile, WritesWhatItReadsBack) {
    const SGameContent content = fullContent();
    EXPECT_EQ(parseGameContent(format(content)), content);
}

// A HUD element without a place goes where Nocturne's does.
TEST(GameContentFile, AnElementWithoutAPlaceTakesNocturnes) {
    const auto content =
        parseGameContent("[hud.battery_gauge]\n[hud.health_bar]\n[hud.inventory]\n"
                         "[hud.status_bars]\n[hud.message]\n[hud.death_banner]\ntext = 'Dead'\n"
                         "[hud.chapter_title]\nseconds = 8\nformat = 'f'\ncolour = 0\nshadow = 0\n"
                         "alpha = 0\n[[hud.chapter_title.font]]\n"
                         "font = 'medium'\n");
    ASSERT_TRUE(content.has_value()) << content.error();
    EXPECT_EQ(common::required(content->battery_gauge).place,
              (SHudPlace{.anchor = EHudAnchor::BottomLeft, .x = 4, .y = 4}));
    EXPECT_EQ(common::required(content->health_bar).place,
              (SHudPlace{.anchor = EHudAnchor::TopRight, .x = 4, .y = 4}));
    EXPECT_EQ(common::required(content->inventory_panel).place,
              (SHudPlace{.anchor = EHudAnchor::BottomRight, .x = 0, .y = 0}));
    EXPECT_EQ(common::required(content->status_bars).place,
              (SHudPlace{.anchor = EHudAnchor::BottomLeft, .x = 8, .y = 6}));
    EXPECT_EQ(common::required(content->message_line).place,
              (SHudPlace{.anchor = EHudAnchor::Bottom, .x = 0, .y = 0}));
    EXPECT_EQ(
        content->death_banner,
        (SDeathBanner{.text = "Dead", .place = {.anchor = EHudAnchor::Top, .x = 0, .y = 112}}));
    EXPECT_EQ(common::required(content->chapter_title).place,
              (SHudPlace{.anchor = EHudAnchor::BottomLeft, .x = 0, .y = 0}));
}

TEST(GameContentFile, NoContentWritesNothing) {
    EXPECT_EQ(format({}), "");
    EXPECT_EQ(parseGameContent(""), SGameContent{});
}

TEST(GameContentFile, WritesOnlyWhatAStoryAndPictureHave) {
    SGameContent content;
    content.credits = SGameCredits{.text = "c.txt",
                                   .image = "i",
                                   .fit = {},
                                   .music = {},
                                   .column_scroll = {},
                                   .fade_loop = {},
                                   .two_column = {}};
    content.menu = getShippedGameContent().menu;
    common::required(content.menu).trademark.reset();
    EXPECT_THAT(formatGameContentTables(content),
                ::testing::StartsWith("\n[menu.credits]\ntext = 'c.txt'\nfit = 'keep_aspect'\n"
                                      "image = 'i'\n\n[menu]\n"
                                      "left = 160\ntop = 250\ntitled_top = 225\n"
                                      "animate_titled_backdrop = true\n"
                                      "text_fonts = { large = 'theme', small = 'small_editor' }"
                                      "\n\n[menu.title]\n"));
    EXPECT_EQ(parseGameContent(formatGameContentTables(content)), content);
}

// A mod changing one part writes only that one; the rest come from the packages before it.
TEST(GameContentFile, WritesOnlyTheFrontEndPartsSet) {
    SGameContent content;
    content.front_end.loading_indicator = "progress_bar";
    EXPECT_EQ(formatGameContentTables(content),
              "\n[menu.styles]\nloading_indicator = 'progress_bar'\n");
    EXPECT_EQ(parseGameContent(formatGameContentTables(content)), content);
}

TEST(GameContentFile, EveryShippedGamesFileReadsAndNamesEveryFrontEndPart) {
    const auto games = getEmbeddedGames();
    ASSERT_THAT(games, ::testing::Contains(::testing::Field(&SEmbeddedGame::id, "nocturne")));
    for (const SEmbeddedGame &game : games) {
        const std::expected<SGameContent, std::string> content = parseGameContent(game.text);
        ASSERT_TRUE(content.has_value()) << game.id << ": " << content.error();
        EXPECT_TRUE(content->front_end.title_backdrop.has_value()) << game.id;
        EXPECT_TRUE(content->front_end.loading_indicator.has_value()) << game.id;
        EXPECT_TRUE(content->front_end.credits.has_value()) << game.id;
        EXPECT_TRUE(content->front_end.story_select.has_value()) << game.id;
        if (game.id == "nocturne") {
            EXPECT_EQ(content->stories.size(), 5U);
        }
    }
}

struct SBadCase {
    std::string text;
    std::string error;
};

class CGameContentErrorTest : public ::testing::TestWithParam<SBadCase> {};

TEST_P(CGameContentErrorTest, NamesWhatIsWrong) {
    EXPECT_EQ(errorOf(GetParam().text), GetParam().error);
}

INSTANTIATE_TEST_SUITE_P(
    TopLevel, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"id = \"a\"", "id: not a key this file takes"},
        SBadCase{"menu.styles = 1", "menu: styles: not a [styles] table"},
        SBadCase{"menu.styles.backdrop = 1", "menu: styles: backdrop: not a string"},
        SBadCase{"menu.styles.backdrop = \"\"", "menu: styles: backdrop: missing"},
        SBadCase{"menu.styles.loading_indicator = \"\"",
                 "menu: styles: loading_indicator: missing"},
        SBadCase{"menu.styles.menus = \"nocturne\"",
                 "menu: styles: menus: not a key this file takes"},
        SBadCase{"hud = 1", "hud: not a [hud] table"}, SBadCase{"title = 1", "title: not a string"},
        SBadCase{"title = \"\"", "title: not a name a folder can have"},
        SBadCase{"title = \".game\"", "title: not a name a folder can have"},
        SBadCase{"title = \"game.\"", "title: not a name a folder can have"},
        SBadCase{"title = \"game \"", "title: not a name a folder can have"},
        SBadCase{"title = \"a/b\"", "title: not a name a folder can have"},
        SBadCase{"title = \"a:b\"", "title: not a name a folder can have"},
        SBadCase{"menu.credits = 1", "menu: credits: not a [credits] table"},
        SBadCase{"menu = 1", "menu: not a [menu] table"},
        SBadCase{"stories.loading = 1", "stories: loading: not a list of [[loading]] tables"},
        SBadCase{"stories.story = 1", "stories: story: not a list of [[story]] tables"},
        SBadCase{"text.translation = 1", "text: translation: not a [translation] table"},
        SBadCase{"controls = 1", "controls: not a [controls] table"}));

// Each credits style's keys before its markers, all in range.
constexpr std::string_view kColumnScrollKeys =
    "[menu.credits]\ntext = 't'\nimage = 'i'\n[menu.credits.column_scroll]\nfont = 'theme'\n"
    "end_line = 'end'\ncolumn_left = 1\ntop_strip_bottom = 1\nbottom_strip_top = 1\n"
    "strip_colour = 0\ntext_colour = 0\nheading_colour = 0\nshadow_colour = 0\nscroll_speed = 1\n"
    "start_y = 1\n";
constexpr std::string_view kFadeLoopKeys =
    "[menu.credits]\ntext = 't'\n[menu.credits.fade_loop]\nfont = 'theme'\nend_line = "
    "'end'\nimage_x = 10\n"
    "image_y = 7\ntext_colour = 0\nheading_colour = 0\nshadow_colour = 0\nscroll_speed = 32\n"
    "start_y = 480\nloop_below = -2500\nrestart_y = 500\nfade_centre = 240\nfade_reach = 240\n";
constexpr std::string_view kTwoColumnKeys =
    "[menu.credits]\ntext = 't'\n[menu.credits.two_column]\nfont = 'theme'\nend_line = 'end'\n"
    "centre_left = 100\ncentre_right = 400\nleft_x = 100\nright_x = 300\ntop_strip_bottom = 30\n"
    "bottom_strip_top = 439\nstrip_colour = 0\ntext_colour = 0\nheading_colour = 0\n"
    "shadow_colour = 0\nscroll_speed = 32\nstart_y = 480\n";

INSTANTIATE_TEST_SUITE_P(
    Credits, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"[menu.credits]\nfont = 1", "menu: credits: font: not a key this file takes"},
        SBadCase{"[menu.credits]\nimage = \"i\"", "menu: credits: text: missing"},
        SBadCase{"[menu.credits]\ntext = \"t\"\nimage = 1", "menu: credits: image: not a string"},
        SBadCase{"[menu.credits]\ntext = 't'\n[menu.credits.two_column]\nfont = 'f'",
                 "menu: credits: two_column: end_line: missing"},
        SBadCase{"[menu.credits]\ntext = 't'\n[menu.credits.two_column]\nwidth = 1",
                 "menu: credits: two_column: width: not a key this file takes"},
        SBadCase{"[menu.credits]\ntext = \"t\"\nimage = \"i\"\nmusic = 1",
                 "menu: credits: music: not a string"},
        SBadCase{"[menu.credits]\ntext = 't'\nimage = 'i'\ncolumn_scroll = 1",
                 "menu: credits: column_scroll: not a [column_scroll] table"},
        SBadCase{"[menu.credits]\ntext = 't'\nimage = 'i'\n[menu.credits.column_scroll]\n"
                 "speed = 1",
                 "menu: credits: column_scroll: speed: not a key this file takes"},
        SBadCase{"[menu.credits]\ntext = 't'\nimage = 'i'\n[menu.credits.column_scroll]\n"
                 "end_line = 'end'",
                 "menu: credits: column_scroll: font: missing"},
        SBadCase{"[menu.credits]\ntext = 't'\nimage = 'i'\n[menu.credits.column_scroll]\n"
                 "font = 'theme'\nend_line = 'end'\ncolumn_left = 640",
                 "menu: credits: column_scroll: column_left: not from 0 to 639"},
        SBadCase{"[menu.credits]\ntext = 't'\nimage = 'i'\n[menu.credits.column_scroll]\n"
                 "font = 'theme'\nend_line = 'end'\ncolumn_left = 1\n"
                 "top_strip_bottom = 1\nbottom_strip_top = 1\nstrip_colour = 0\n"
                 "text_colour = 0\nheading_colour = 0\nshadow_colour = 0\n"
                 "scroll_speed = 1\nstart_y = 1\nmarker = 'ab'\nheading = 'b'",
                 "menu: credits: column_scroll: marker: not one character"},
        SBadCase{std::string(kColumnScrollKeys), "menu: credits: column_scroll: marker: missing"},
        SBadCase{std::format("{}marker = 'a'\nheading = 'b'\n", kColumnScrollKeys),
                 "menu: credits: column_scroll: column_to_screen_edge: missing"},
        SBadCase{"[menu.credits]\ntext = 't'\nfade_loop = 1",
                 "menu: credits: fade_loop: not a [fade_loop] table"},
        SBadCase{"[menu.credits]\ntext = 't'\n[menu.credits.fade_loop]\nsize = 1",
                 "menu: credits: fade_loop: size: not a key this file takes"},
        SBadCase{"[menu.credits]\ntext = 't'\n[menu.credits.fade_loop]\nimage_x = 1",
                 "menu: credits: fade_loop: font: missing"},
        SBadCase{"[menu.credits]\ntext = 't'\n[menu.credits.fade_loop]\nfont = 'theme'\n"
                 "end_line = 'end'\nimage_x = 640",
                 "menu: credits: fade_loop: image_x: not from 0 to 639"},
        SBadCase{std::string(kFadeLoopKeys), "menu: credits: fade_loop: marker: missing"},
        SBadCase{"[menu.credits]\ntext = 't'\ntwo_column = 1",
                 "menu: credits: two_column: not a [two_column] table"},
        SBadCase{"[menu.credits]\ntext = 't'\n[menu.credits.two_column]\nfont = 'theme'\n"
                 "end_line = 'end'\ncentre_left = 640",
                 "menu: credits: two_column: centre_left: not from 0 to 639"},
        SBadCase{std::string(kTwoColumnKeys), "menu: credits: two_column: marker: missing"},
        SBadCase{"[menu.credits]\ntext = 't'", "menu: credits: fit: missing"},
        SBadCase{"menu.styles.credits = ''", "menu: styles: credits: missing"}));

INSTANTIATE_TEST_SUITE_P(
    StorySelectAndChapterTitle, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"stories.select = 1", "stories: select: not a [select] table"},
        SBadCase{"[stories.select]\nprobe = 1",
                 "stories: select: probe: not a key this file takes"},
        SBadCase{"[stories.select]", "stories: select: missing a style's table"},
        SBadCase{"[stories.select.direct_start]\nframes = 1",
                 "stories: select: direct_start: frames: not a key this file takes"},
        SBadCase{"[stories.select.direct_start]",
                 "stories: select: direct_start: loading_frames: missing"},
        SBadCase{"[stories.select.story_list]\nprobe = 1",
                 "stories: select: story_list: probe: not a key this file takes"},
        SBadCase{"[stories.select.story_list]\nloading_frames = 10",
                 "stories: select: story_list: full_install_probe: missing"},
        SBadCase{"[stories.select.story_list]\nfull_install_probe = 'a.pod'\nloading_frames = 0",
                 "stories: select: story_list: loading_frames: not from 1 to 1000"},
        SBadCase{"features.battery = 1", "features: battery: not a [battery] table"},
        SBadCase{"[features.battery]\ndrain = 1",
                 "features: battery: drain: not a key this file takes"},
        SBadCase{"[features.battery]", "features: battery: gauge: missing"},
        SBadCase{"[hud.battery_gauge]\nplace = 1",
                 "hud: battery_gauge: place: not a [place] table"},
        SBadCase{"[hud.battery_gauge]\nplace = { x = 1, y = 1 }",
                 "hud: battery_gauge: place: anchor: missing"},
        SBadCase{"[hud.battery_gauge]\nplace = { anchor = 'middle', x = 1, y = 1 }",
                 "hud: battery_gauge: place: anchor: not one of top_left, top, top_right, left, "
                 "centre, right, bottom_left, bottom, bottom_right"},
        SBadCase{"[hud.battery_gauge]\nplace = { anchor = 'top_left', y = 1 }",
                 "hud: battery_gauge: place: x: missing"},
        SBadCase{"[hud.battery_gauge]\nplace = { anchor = 'top_left', x = 1, y = 641 }",
                 "hud: battery_gauge: place: y: not from -640 to 640"},
        SBadCase{"[hud.battery_gauge]\nplace = { anchor = 'top_left', x = 1, y = 1, z = 1 }",
                 "hud: battery_gauge: place: z: not a key this file takes"},
        SBadCase{"hud.health_bar = 1", "hud: health_bar: not a [health_bar] table"},
        SBadCase{"[hud.health_bar]\nsize = 1", "hud: health_bar: size: not a key this file takes"},
        SBadCase{"[hud.health_bar]\nplace = { anchor = 'top_left', x = -641, y = 1 }",
                 "hud: health_bar: place: x: not from -640 to 640"},
        SBadCase{"[hud.inventory]\nsize = 1", "hud: inventory: size: not a key this file takes"},
        SBadCase{"[hud.status_bars]\nplace = 1", "hud: status_bars: place: not a [place] table"},
        SBadCase{"[hud.message]\nplace = { y = 1 }", "hud: message: place: anchor: missing"},
        SBadCase{"hud.death_banner = 'Dead'", "hud: death_banner: not a [death_banner] table"},
        SBadCase{"[hud.death_banner]", "hud: death_banner: text: missing"},
        SBadCase{"[hud.death_banner]\ntext = 'a'\nfont = 1",
                 "hud: death_banner: font: not a key this file takes"},
        SBadCase{"[hud.death_banner]\ntext = 'a'\nplace = { anchor = 'top' }",
                 "hud: death_banner: place: x: missing"},
        SBadCase{"[hud.chapter_title]\nplace = { anchor = 'up', x = 0, y = 0 }\nformat = 'f'",
                 "hud: chapter_title: place: anchor: not one of top_left, top, top_right, left, "
                 "centre, right, bottom_left, bottom, bottom_right"},
        SBadCase{"features.flashlight = 1", "features: flashlight: not a [flashlight] table"},
        SBadCase{"[features.flashlight]\nrange = 1",
                 "features: flashlight: range: not a key this file takes"},
        SBadCase{"[features.flashlight]", "features: flashlight: options: missing"},
        SBadCase{"[features.difficulty]\nlines = 1",
                 "features: difficulty: lines: not a key this file takes"},
        SBadCase{"[features.difficulty]", "features: difficulty: options: missing"},
        SBadCase{"looks.iris = 1", "looks: iris: not a [iris] table"},
        SBadCase{"[looks.iris]\nspeed = 1", "looks: iris: speed: not a key this file takes"},
        SBadCase{"[looks.iris]\nblack_frames = 1", "looks: iris: opens_session: missing"},
        SBadCase{"[looks.iris]\nopens_session = true", "looks: iris: black_frames: missing"},
        SBadCase{"[looks.iris]\nopens_session = true\nblack_frames = 0",
                 "looks: iris: black_frames: not from 1 to 300"},
        SBadCase{"hud.chapter_title = 1", "hud: chapter_title: not a [chapter_title] table"},
        SBadCase{"[hud.chapter_title]\nsize = 1",
                 "hud: chapter_title: size: not a key this file takes"},
        SBadCase{"[hud.chapter_title]\nseconds = 8", "hud: chapter_title: format: missing"},
        SBadCase{"[hud.chapter_title]\nformat = 'f'\nseconds = 0",
                 "hud: chapter_title: seconds: not from 1 to 600"},
        SBadCase{"[hud.chapter_title]\nformat = 'f'\nseconds = 8\ncolour = 0\nshadow = 0\n"
                 "alpha = 0",
                 "hud: chapter_title: font: missing"},
        SBadCase{"[hud.chapter_title]\nformat = 'f'\nseconds = 8\ncolour = 0\nshadow = 0\n"
                 "alpha = 0\n[[hud.chapter_title.font]]\nsize = 1",
                 "hud: chapter_title: font 1: size: not a key this file takes"},
        SBadCase{"[hud.chapter_title]\nformat = 'f'\nseconds = 8\ncolour = 0\nshadow = 0\n"
                 "alpha = 0\n[[hud.chapter_title.font]]\n"
                 "below_height = 1",
                 "hud: chapter_title: font 1: font: missing"},
        SBadCase{"[hud.chapter_title]\nformat = 'f'\nseconds = 8\ncolour = 0\nshadow = 0\n"
                 "alpha = 0\n[[hud.chapter_title.font]]\n"
                 "font = 'tiny'\nbelow_height = 400",
                 "hud: chapter_title: font 1: below_height: the last font takes every height left"},
        SBadCase{"[hud.chapter_title]\nformat = 'f'\nseconds = 8\ncolour = 0\nshadow = 0\n"
                 "alpha = 0\n[[hud.chapter_title.font]]\n"
                 "font = 'tiny'\n[[hud.chapter_title.font]]\nfont = 'medium'",
                 "hud: chapter_title: font 1: below_height: missing"},
        SBadCase{"[hud.chapter_title]\nformat = 'f'\nseconds = 8\ncolour = 0\nshadow = 0\n"
                 "alpha = 0\n[[hud.chapter_title.font]]\n"
                 "font = 'tiny'\nbelow_height = 5000\n[[hud.chapter_title.font]]\nfont = 'medium'",
                 "hud: chapter_title: font 1: below_height: not from 1 to 2160"},
        SBadCase{"[hud.chapter_title]\nformat = 'f'\nseconds = 8\ncolour = 0\nshadow = 0\n"
                 "alpha = 0\nfont = 1",
                 "hud: chapter_title: font: not a list of [[font]] tables"},
        SBadCase{"[stories.select]\nstory_list = 1",
                 "stories: select: story_list: not a [story_list] table"},
        SBadCase{"[stories.select]\ndirect_start = 1",
                 "stories: select: direct_start: not a [direct_start] table"},
        SBadCase{"menu.styles.select = ''", "menu: styles: select: missing"}));

INSTANTIATE_TEST_SUITE_P(
    Menu, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"[menu]\nright = 1", "menu: right: not a key this file takes"},
        SBadCase{"[menu]\ntop = 1\ntitled_top = 1", "menu: left: missing"},
        SBadCase{"[menu]\nleft = 640\ntop = 1\ntitled_top = 1", "menu: left: not from 0 to 639"},
        SBadCase{"[menu]\nleft = 1\ntop = \"1\"\ntitled_top = 1", "menu: top: not a whole number"},
        SBadCase{"[menu]\nleft = 1\ntop = 1", "menu: titled_top: missing"},
        SBadCase{"[menu]\nleft = 1\ntop = 1\ntitled_top = 1\ntrademark = 1",
                 "menu: trademark: not a [trademark] table"},
        SBadCase{"[menu]\nleft = 1\ntop = 1\ntitled_top = 1\ntrademark = { z = 1 }",
                 "menu: trademark: z: not a key this file takes"},
        SBadCase{"[menu]\nleft = 1\ntop = 1\ntitled_top = 1\ntrademark = { y = 1 }",
                 "menu: trademark: x: missing"},
        SBadCase{"[menu]\nleft = 1\ntop = 1\ntitled_top = 1\ntrademark = { x = 1, y = 480 }",
                 "menu: trademark: y: not from 0 to 479"},
        SBadCase{"[menu]\nleft = 1\ntop = 1\ntitled_top = 1\n"
                 "trademark = { x = 1, y = 1, glyph = 0, alpha = 0 }",
                 "menu: trademark: glyph: not from 1 to 255"},
        SBadCase{"[menu]\nleft = 1\ntop = 1\ntitled_top = 1", "menu: title: missing"}));

// A [menu] whole but for the part a case changes.
constexpr std::string_view kMenuTop =
    "[menu]\nleft = 1\ntop = 1\ntitled_top = 1\nanimate_titled_backdrop = false\n"
    "text_fonts = { large = 'theme', small = 'small_editor' }\n";
constexpr std::string_view kMenuTitle = "[menu.title]\ncolour = 7\nshadow = 0\ngap_lines = 2\n";
constexpr std::string_view kMenuItem =
    "[menu.item]\nfont = 'theme'\ncolour = 1\nselected_colour = 2\nalpha = 3\nshadow = -1\n"
    "spacing_titled = 1\nspacing_untitled = 2\n";
constexpr std::string_view kMenuGlow = "[menu.item.glow]\ncolour = 7\ncopies = 5\nflicker = true\n";
constexpr std::string_view kMenuFooterKeys =
    "[menu.footer]\nfont = 'small_editor'\ncolour = 1\nshadow = 0\nversion_alpha = 5\n";
constexpr std::string_view kMenuFooterCopyright =
    "[menu.footer.copyright]\ncorner = 'bottom_right'\nedge = 'screen'\nx = 1\ny = 1\n";
constexpr std::string_view kMenuFooterVersion =
    "[menu.footer.version]\ncorner = 'bottom_left'\nedge = 'screen'\nx = 4\ny = 1\n";
const std::string &menuFooter() {
    static const std::string footer =
        std::format("{}{}{}", kMenuFooterKeys, kMenuFooterCopyright, kMenuFooterVersion);
    return footer;
}
constexpr std::string_view kMenuCalibration =
    "[menu.calibration]\nimage = 'b'\nsteps = ['one']\ntitle = 't'\nprompt = 'p'\n"
    "font = 'small_editor'\ncolour = 1\ntitle_lines = 2\nprompt_lines = 3\nfit = 'stretch'\n";

constexpr std::string_view kMenuOptions = "[menu.options]\nhero = 2\ncard_name_length = 24\n";
constexpr std::string_view kMenuSound = "[menu.sound]\neffects_sample = 's.wav'\n";
constexpr std::string_view kMenuSlider =
    "[menu.slider]\nwidth_share = 3\nwidth_parts = 4\nheight = 44\nbar_colour = 4\n"
    "trough_colour = 0\nborder_colour = 255\ntext_colour = 255\ntext_shadow = 0\n";

// The music, the table read last.
constexpr std::string_view kMenuFeatures =
    "[menu.music]\nlow_rate = 'low.wav'\nhigh_rate = 'high.wav'\n";

std::string menuWith(std::string_view title, std::string_view item, std::string_view glow,
                     std::string_view footer, std::string_view calibration) {
    return std::format("{}{}{}{}{}{}{}{}{}{}", kMenuTop, title, item, glow, footer, calibration,
                       kMenuOptions, kMenuSound, kMenuSlider, kMenuFeatures);
}

// The whole menu with the rest of the menu's tables after it, in place of options, sound and
// slider when a case gives its own.
std::string menuThen(std::string_view rest) {
    return std::format("{}{}{}{}{}{}{}", kMenuTop, kMenuTitle, kMenuItem, kMenuGlow, menuFooter(),
                       kMenuCalibration, rest);
}

// The whole menu with a key of [menu]'s own, which goes before its tables.
std::string menuKeyed(std::string_view key) {
    return std::format("{}{}\n{}{}{}{}{}{}{}{}{}", kMenuTop, key, kMenuTitle, kMenuItem, kMenuGlow,
                       menuFooter(), kMenuCalibration, kMenuOptions, kMenuSound, kMenuSlider,
                       kMenuFeatures);
}

// The whole menu's tables under [menu] keys of the case's own.
std::string menuTopped(std::string_view top) {
    return std::format("{}{}{}{}{}{}{}{}{}{}", top, kMenuTitle, kMenuItem, kMenuGlow, menuFooter(),
                       kMenuCalibration, kMenuOptions, kMenuSound, kMenuSlider, kMenuFeatures);
}

constexpr std::string_view kMenuPosition = "[menu]\nleft = 1\ntop = 1\ntitled_top = 1\n";

// The whole menu with keys added to [menu.item].
std::string menuItemWith(std::string_view keys) {
    return menuWith(kMenuTitle, std::format("{}{}\n", kMenuItem, keys), kMenuGlow, menuFooter(),
                    kMenuCalibration);
}

// The whole menu with [menu.footer.version] the case's own.
std::string menuFooterVersion(std::string_view version) {
    return menuWith(kMenuTitle, kMenuItem, kMenuGlow,
                    std::format("{}{}[menu.footer.version]\n{}\n", kMenuFooterKeys,
                                kMenuFooterCopyright, version),
                    kMenuCalibration);
}

TEST(GameContentFile, AMenusOptionalTablesAndPageTopsRead) {
    const std::expected<SGameContent, std::string> content = parseGameContent(
        menuWith(kMenuTitle, kMenuItem, kMenuGlow, menuFooter(), kMenuCalibration) +
        "[menu.page_tops]\nsound = 200\n"
        "[menu.sound.spectrum]\nframes = ['a', 'b']\nfps = 24\npitch = 4\nhalf_width = 16\n"
        "margin_divisor = 20\nheight_percent = 25\nalpha = 1\n"
        "[menu.attract]\ndirectory = 'video'\nmovies = ['a.avi']\n");
    ASSERT_TRUE(content.has_value()) << content.error();
    ASSERT_TRUE(content->menu.has_value());
    EXPECT_EQ(content->menu->page_tops.at("sound"), 200);
    ASSERT_TRUE(content->menu->spectrum.has_value());
    EXPECT_EQ(content->menu->spectrum->frames.size(), 2U);
    ASSERT_TRUE(content->menu->attract.has_value());
    EXPECT_EQ(content->menu->attract->movies, std::vector<std::string>{"a.avi"});
    EXPECT_EQ(parseGameContent(formatGameContentTables(*content)), content);
}

// A [looks.list] whole but for the part a case changes.
constexpr std::string_view kListTop =
    "[looks.list]\nitem_colour = 1\ndisabled_colour = 1\nselected_colour = 1\nconfirmed_colour = "
    "1\n"
    "separator_colour = 1\nalpha = 1\nshadow = -1\ncolumn_padding = 8\nmargin_width = 8\n"
    "margin_height = 6\nfield_gap_divisor = 40\nrow_extra = 1\nreserved_lines = 4\n"
    "width_share = 7\nwidth_parts = 8\ndouble_click_ticks = 1\n";
constexpr std::string_view kListPointer =
    "[looks.list.pointer]\ncube_colours = [0, 1, 2, 3]\nsize = 9\ndefault_height = 11\n";
constexpr std::string_view kListScrollBar =
    "[looks.list.scroll_bar]\nfirst_repeat_ticks = 1\nrepeat_ticks = 1\ntrack_fill_colour = 0\n"
    "track_border_colour = 7\n";

INSTANTIATE_TEST_SUITE_P(
    ListAndDialog, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"looks.list = 1", "looks: list: not a [list] table"},
        SBadCase{"[looks.list]\nsize = 1", "looks: list: size: not a key this file takes"},
        SBadCase{"[looks.list]\nitem_colour = 256", "looks: list: item_colour: not from 0 to 255"},
        SBadCase{std::format("{}", kListTop), "looks: list: pointer: missing"},
        SBadCase{std::format("{}{}", kListTop, "[looks.list.pointer]\nsize = 9\n"),
                 "looks: list: pointer: cube_colours: not a list of four"},
        SBadCase{std::format("{}{}", kListTop, "[looks.list.pointer]\ncube_colours = [0, 1, 2]\n"),
                 "looks: list: pointer: cube_colours: not a list of four"},
        SBadCase{std::format("{}{}", kListTop,
                             "[looks.list.pointer]\ncube_colours = [0, 1, 2, 0x8000]\n"),
                 "looks: list: pointer: cube_colours: not from 0 to 0x7fff"},
        SBadCase{std::format("{}{}", kListTop,
                             "[looks.list.pointer]\npalette_colours = [0, 1, 2, 256]\n"),
                 "looks: list: pointer: palette_colours: not from 0 to 0xff"},
        SBadCase{
            std::format("{}{}", kListTop, "[looks.list.pointer]\ncube_colours = [0, 1, 2, 'a']\n"),
            "looks: list: pointer: cube_colours: not from 0 to 0x7fff"},
        SBadCase{
            std::format("{}{}", kListTop, "[looks.list.pointer]\ncube_colours = [-1, 1, 2, 3]\n"),
            "looks: list: pointer: cube_colours: not from 0 to 0x7fff"},
        SBadCase{std::format("{}pointer = 1\n", kListTop),
                 "looks: list: pointer: not a [pointer] table"},
        SBadCase{std::format("{}{}", kListTop,
                             "[looks.list.pointer]\npalette_colours = [0, 1, 2, 3]\n"
                             "cube_colours = [0, 1, 2, 3]\n"),
                 "looks: list: pointer: palette_colours: cube_colours are given as well"},
        SBadCase{std::format("{}{}", kListTop, "[looks.list.pointer]\nwidth = 1\n"),
                 "looks: list: pointer: width: not a key this file takes"},
        SBadCase{
            std::format("{}{}", kListTop, "[looks.list.pointer]\ncube_colours = [0, 1, 2, 3]\n"),
            "looks: list: pointer: size: missing"},
        SBadCase{std::format("{}{}", kListTop, kListPointer), "looks: list: scroll_bar: missing"},
        SBadCase{std::format("{}{}[looks.list.scroll_bar]\nspeed = 1\n", kListTop, kListPointer),
                 "looks: list: scroll_bar: speed: not a key this file takes"},
        SBadCase{std::format("{}{}[looks.list.scroll_bar]\nfirst_repeat_ticks = 0\n", kListTop,
                             kListPointer),
                 "looks: list: scroll_bar: first_repeat_ticks: not from 1 to 70778880"},
        SBadCase{"[looks.list]\nitem_colour = 1\ndisabled_colour = 1\nselected_colour = 1\n"
                 "confirmed_colour = 1\nseparator_colour = 1\nalpha = 1\nshadow = -1\n"
                 "column_padding = 8\nmargin_width = 8\nmargin_height = 6\n"
                 "field_gap_divisor = 40\nrow_extra = 1\nreserved_lines = 4\nwidth_share = 9\n"
                 "width_parts = 8\ndouble_click_ticks = 1\n",
                 "looks: list: width_share: more than width_parts"},
        SBadCase{"looks.dialog = 1", "looks: dialog: not a [dialog] table"},
        SBadCase{"[looks.dialog]\nsize = 1", "looks: dialog: size: not a key this file takes"},
        SBadCase{"[looks.dialog]\ncontent_colour = 256",
                 "looks: dialog: content_colour: not from 0 to 255"},
        SBadCase{"[looks.dialog]\ncontent_colour = 0", "looks: dialog: border_colour: missing"}));

TEST(GameContentFile, AWholeListReads) {
    const std::expected<SGameContent, std::string> content =
        parseGameContent(std::format("{}{}{}", kListTop, kListPointer, kListScrollBar));
    ASSERT_TRUE(content.has_value()) << content.error();
    ASSERT_TRUE(content->list.has_value());
    EXPECT_EQ(content->list->pointer.colours, (std::array<int, 4>{0, 1, 2, 3}));
    EXPECT_FALSE(content->list->pointer.palette_indices);
    EXPECT_EQ(content->list->scroll_bar.track_border_colour, 7);
}

INSTANTIATE_TEST_SUITE_P(
    MenuTables, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{menuThen(""), "menu: options: missing"},
        SBadCase{menuThen("[menu.options]\nhero = 256\n"),
                 "menu: options: hero: not from 0 to 255"},
        SBadCase{menuThen("[menu.options]\nname = 1\n"),
                 "menu: options: name: not a key this file takes"},
        SBadCase{menuThen("[menu.options]\nhero = 2\n"),
                 "menu: options: card_name_length: missing"},
        SBadCase{menuThen("[menu.options]\nhero = 2\ncard_name_length = 0\n"),
                 "menu: options: card_name_length: not from 1 to 255"},
        SBadCase{menuThen(kMenuOptions), "menu: sound: missing"},
        SBadCase{menuThen(std::format("{}[menu.sound]\nvolume = 1\n", kMenuOptions)),
                 "menu: sound: volume: not a key this file takes"},
        SBadCase{menuThen(std::format("{}[menu.sound]\nspectrum = 1\n", kMenuOptions)),
                 "menu: sound: effects_sample: missing"},
        SBadCase{menuThen(std::format("{}{}spectrum = 1\n", kMenuOptions, kMenuSound)),
                 "menu: sound: spectrum: not a [spectrum] table"},
        SBadCase{menuThen(std::format("{}{}[menu.sound.spectrum]\nsize = 1\n", kMenuOptions,
                                      kMenuSound)),
                 "menu: sound: spectrum: size: not a key this file takes"},
        SBadCase{
            menuThen(std::format("{}{}[menu.sound.spectrum]\nfps = 1\n", kMenuOptions, kMenuSound)),
            "menu: sound: spectrum: frames: missing"},
        SBadCase{menuThen(std::format("{}{}[menu.sound.spectrum]\nframes = 1\n", kMenuOptions,
                                      kMenuSound)),
                 "menu: sound: spectrum: frames: not a list"},
        SBadCase{menuThen(std::format("{}{}[menu.sound.spectrum]\nframes = ['a']\nfps = 0\n",
                                      kMenuOptions, kMenuSound)),
                 "menu: sound: spectrum: fps: not from 1 to 1000"},
        SBadCase{menuThen(std::format("{}{}", kMenuOptions, kMenuSound)), "menu: slider: missing"},
        SBadCase{menuThen(std::format("{}{}[menu.slider]\nsize = 1\n", kMenuOptions, kMenuSound)),
                 "menu: slider: size: not a key this file takes"},
        SBadCase{
            menuThen(std::format("{}{}[menu.slider]\nwidth_share = 0\n", kMenuOptions, kMenuSound)),
            "menu: slider: width_share: not from 1 to 639"},
        SBadCase{menuThen(std::format("{}{}[menu.slider]\nwidth_share = 5\nwidth_parts = 4\n"
                                      "height = 44\nbar_colour = 4\ntrough_colour = 0\n"
                                      "border_colour = 255\ntext_colour = 255\ntext_shadow = 0\n",
                                      kMenuOptions, kMenuSound)),
                 "menu: slider: width_share: more than width_parts"},
        SBadCase{menuThen(std::format("{}{}{}[menu.page_tops]\nsound = 480\n", kMenuOptions,
                                      kMenuSound, kMenuSlider)),
                 "menu: page_tops: sound: not from 0 to 479"},
        SBadCase{menuKeyed("page_tops = 1"), "menu: page_tops: not a [page_tops] table"},
        SBadCase{menuKeyed("attract = 1"), "menu: attract: not a [attract] table"},
        SBadCase{menuThen(std::format("{}{}{}[menu.attract]\nmusic = 1\n", kMenuOptions, kMenuSound,
                                      kMenuSlider)),
                 "menu: attract: music: not a key this file takes"},
        SBadCase{menuThen(std::format("{}{}{}[menu.attract]\nmovies = ['a']\n", kMenuOptions,
                                      kMenuSound, kMenuSlider)),
                 "menu: attract: directory: missing"},
        SBadCase{menuThen(std::format("{}{}{}[menu.attract]\ndirectory = 'v'\n", kMenuOptions,
                                      kMenuSound, kMenuSlider)),
                 "menu: attract: movies: missing"},
        SBadCase{menuThen(std::format("{}{}{}[menu.attract]\ndirectory = 'v'\nmovies = 1\n",
                                      kMenuOptions, kMenuSound, kMenuSlider)),
                 "menu: attract: movies: not a list"},
        SBadCase{menuThen(std::format("{}{}{}", kMenuOptions, kMenuSound, kMenuSlider)),
                 "menu: music: missing"},
        SBadCase{menuThen(std::format("{}{}{}[menu.music]\nlow_rate = 'a.wav'\n", kMenuOptions,
                                      kMenuSound, kMenuSlider)),
                 "menu: music: high_rate: missing"},
        SBadCase{menuKeyed("align = 'right'"), "menu: align: not one of left, centre"},
        SBadCase{menuWith(kMenuTitle,
                          std::format("{}untitled_positions = [{{ x = 1, centre_x = 2, y = 3 }}]\n",
                                      kMenuItem),
                          kMenuGlow, menuFooter(), kMenuCalibration),
                 "menu: item: untitled_positions 1: give one of x and centre_x"},
        SBadCase{menuWith(kMenuTitle,
                          std::format("{}untitled_positions = [{{ y = 3 }}]\n", kMenuItem),
                          kMenuGlow, menuFooter(), kMenuCalibration),
                 "menu: item: untitled_positions 1: give one of x and centre_x"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow,
                          std::format("{}{}", kMenuFooterKeys, kMenuFooterVersion),
                          kMenuCalibration),
                 "menu: footer: copyright: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow,
                          std::format("{}{}", kMenuFooterKeys, kMenuFooterCopyright),
                          kMenuCalibration),
                 "menu: footer: version: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow,
                          std::format("{}{}[menu.footer.version]\ncorner = 'middle'\n"
                                      "edge = 'screen'\nx = 0\ny = 0\n",
                                      kMenuFooterKeys, kMenuFooterCopyright),
                          kMenuCalibration),
                 "menu: footer: version: corner: not one of bottom_left, bottom_right, top_left, "
                 "top_right"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow,
                          std::format("{}{}[menu.footer.version]\ncorner = 'top_left'\n"
                                      "x = 0\ny = 0\n",
                                      kMenuFooterKeys, kMenuFooterCopyright),
                          kMenuCalibration),
                 "menu: footer: version: edge: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow,
                          std::format("{}{}[menu.footer.version]\ncorner = 'top_left'\n"
                                      "edge = 'window'\nx = 0\ny = 0\n",
                                      kMenuFooterKeys, kMenuFooterCopyright),
                          kMenuCalibration),
                 "menu: footer: version: edge: not one of screen, layout, backdrop"},
        SBadCase{menuWith(std::format("{}drop = {{ x = 9, y = 0, colour = 2 }}\n", kMenuTitle),
                          kMenuItem, kMenuGlow, menuFooter(), kMenuCalibration),
                 "menu: title: drop: x: not from -8 to 8"},
        SBadCase{menuKeyed("align = 1"), "menu: align: not a string"},
        SBadCase{menuFooterVersion("corner = 1\nedge = 'screen'\nx = 0\ny = 0"),
                 "menu: footer: version: corner: not a string"},
        SBadCase{menuFooterVersion("corner = 'top_left'\nedge = 1\nx = 0\ny = 0"),
                 "menu: footer: version: edge: not a string"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow,
                          std::format("{}[menu.footer.copyright]\nz = 1\n{}", kMenuFooterKeys,
                                      kMenuFooterVersion),
                          kMenuCalibration),
                 "menu: footer: copyright: z: not a key this file takes"},
        SBadCase{menuItemWith("untitled_positions = 1"),
                 "menu: item: untitled_positions: not a list of points"},
        SBadCase{menuItemWith("untitled_positions = [1]"),
                 "menu: item: untitled_positions 1: not a table"},
        SBadCase{menuItemWith("untitled_positions = [{ z = 1 }]"),
                 "menu: item: untitled_positions 1: z: not a key this file takes"},
        SBadCase{menuItemWith("untitled_positions = [{ x = 640, y = 1 }]"),
                 "menu: item: untitled_positions 1: x: not from 0 to 639"},
        SBadCase{menuItemWith("untitled_font = 1"), "menu: item: untitled_font: not a string"},
        SBadCase{menuItemWith("drop = 1"), "menu: item: drop: not a [drop] table"},
        SBadCase{menuWith(std::format("{}drop = {{ z = 1 }}\n", kMenuTitle), kMenuItem, kMenuGlow,
                          menuFooter(), kMenuCalibration),
                 "menu: title: drop: z: not a key this file takes"},
        SBadCase{menuWith(std::format("{}drop = 1\n", kMenuTitle), kMenuItem, kMenuGlow,
                          menuFooter(), kMenuCalibration),
                 "menu: title: drop: not a [drop] table"},
        SBadCase{menuThen(std::format("{}{}[menu.sound.spectrum]\nframes = ['a']\nfps = 24\n"
                                      "pitch = 4\nhalf_width = 16\nmargin_divisor = 20\n"
                                      "height_percent = 25\nalpha = 1\nmirrored = 1\n",
                                      kMenuOptions, kMenuSound)),
                 "menu: sound: spectrum: mirrored: not true or false"},
        SBadCase{menuThen(std::format("{}{}{}[menu.music]\ntempo = 1\n", kMenuOptions, kMenuSound,
                                      kMenuSlider)),
                 "menu: music: tempo: not a key this file takes"},
        SBadCase{menuTopped(std::format("{}text_fonts = {{ large = 'a', small = 'b' }}\n",
                                        kMenuPosition)),
                 "menu: animate_titled_backdrop: missing"},
        SBadCase{menuTopped(std::format("{}animate_titled_backdrop = false\n", kMenuPosition)),
                 "menu: text_fonts: missing"},
        SBadCase{menuTopped(std::format("{}animate_titled_backdrop = false\n"
                                        "text_fonts = {{ z = 'a' }}\n",
                                        kMenuPosition)),
                 "menu: text_fonts: z: not a key this file takes"},
        SBadCase{menuTopped(std::format("{}animate_titled_backdrop = false\n"
                                        "text_fonts = {{ small = 'b' }}\n",
                                        kMenuPosition)),
                 "menu: text_fonts: large: missing"}));

// The moon indicator's table whole but for what a case adds after its strings.
constexpr std::string_view kMoonStrings =
    "[stories.loading_indicator.moon]\nmodel = 'moon.kfm'\nglow_texture = 'G.RAW'\n"
    "status_font = 'theme'\n";
constexpr std::string_view kMoonIntegers =
    "window_size = 90\ncorner_x = 447\ncorner_y = 0\ncorner_size = 192\nfull_projection = 56\n"
    "window_projection = 84\ndepth = 36\nlight_reach = 37000\nambient = 640\n"
    "glow_half_size = 1856\nstatus_box_colour = 0\nstatus_colour = 248\n";

INSTANTIATE_TEST_SUITE_P(
    Controls, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"[controls]\nsize = 1", "controls: size: not a key this file takes"},
        SBadCase{"[controls]", "controls: mode: missing"},
        SBadCase{"[[controls.mode]]\nlabel = 'K'", "controls: mode 1: id: missing"},
        SBadCase{"[[controls.mode]]\nid = 'keyboard'", "controls: mode 1: label: missing"},
        SBadCase{"[[controls.mode]]\nid = 'keyboard'\nlabel = 'K'",
                 "controls: mode 1: manual_aim: missing"},
        SBadCase{"[[controls.mode]]\nid = 'keyboard'\nlabel = 'K'\nmanual_aim = false",
                 "controls: mode 1: defaults: missing"},
        SBadCase{"[[controls.mode]]\nid = 'keyboard'\nlabel = 'K'\nmanual_aim = false\n"
                 "[controls.mode.defaults]\nwalk = 1",
                 "controls: mode 1: defaults: walk: not a list of codes"},
        SBadCase{"[[controls.mode]]\nid = 'keyboard'\nlabel = 'K'\nmanual_aim = false\n"
                 "[controls.mode.defaults]\nwalk = [0x10000]",
                 "controls: mode 1: defaults: walk: not codes from 0 to 65535"},
        SBadCase{"[[controls.mode]]\nid = 'keyboard'\nlabel = 'K'\nmanual_aim = false\n"
                 "[controls.mode.defaults]\n[[controls.mode]]\nid = 'keyboard'\nlabel = 'L'\n"
                 "manual_aim = false\n[controls.mode.defaults]",
                 "controls: mode 2: id: keyboard is another mode's"},
        SBadCase{"[[controls.mode]]\nid = 'keyboard'\nlabel = 'K'\nmanual_aim = false\n"
                 "[controls.mode.defaults]\n[[controls.binding]]\nlabel = 'Forward'",
                 "controls: binding 1: action: missing"},
        SBadCase{"[[controls.mode]]\nz = 1", "controls: mode 1: z: not a key this file takes"},
        SBadCase{"[controls]\nmode = 1", "controls: mode: not a list of [[mode]] tables"},
        SBadCase{"[[controls.mode]]\nid = 'keyboard'\nlabel = 'K'\nmanual_aim = false\n"
                 "[controls.mode.defaults]\nwalk = ['a']",
                 "controls: mode 1: defaults: walk: not codes from 0 to 65535"},
        SBadCase{"[[controls.mode]]\nid = 'keyboard'\nlabel = 'K'\nmanual_aim = false\n"
                 "[controls.mode.defaults]\nwalk = [-1]",
                 "controls: mode 1: defaults: walk: not codes from 0 to 65535"},
        SBadCase{"[controls]\nbinding = 1\n[[controls.mode]]\nid = 'keyboard'\nlabel = 'K'\n"
                 "manual_aim = false\n[controls.mode.defaults]",
                 "controls: binding: not a list of [[binding]] tables"},
        SBadCase{"[[controls.mode]]\nid = 'keyboard'\nlabel = 'K'\nmanual_aim = false\n"
                 "[controls.mode.defaults]\n[[controls.binding]]\nz = 1",
                 "controls: binding 1: z: not a key this file takes"},
        SBadCase{"[[controls.mode]]\nid = 'keyboard'\nlabel = 'K'\nmanual_aim = false\n"
                 "[controls.mode.defaults]\n[[controls.binding]]\naction = 'fire'",
                 "controls: binding 1: label: missing"},
        SBadCase{"[[controls.mode]]\nid = 'keyboard'\nlabel = 'K'\nmanual_aim = false\n"
                 "[controls.mode.defaults]\n[[controls.binding]]\naction = 'fire'\nlabel = 'F'\n"
                 "help = 1",
                 "controls: binding 1: help: not a string"}));

INSTANTIATE_TEST_SUITE_P(
    Fonts, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"looks.font = 1", "looks: font: not a list of [[font]] tables"},
        SBadCase{"[[looks.font]]\nsize = 1", "looks: font 1: size: not a key this file takes"},
        SBadCase{"[[looks.font]]\nfile = 'f.raw'", "looks: font 1: id: missing"},
        SBadCase{"[[looks.font]]\nid = 'tiny'", "looks: font 1: file: missing"},
        SBadCase{"[[looks.font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 0",
                 "looks: font 1: width: not from 1 to 4096"},
        SBadCase{
            "[[looks.font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
            "space_width = 1\nshadow_x = 1",
            "looks: font 1: own_colours: missing"},
        SBadCase{
            "[[looks.font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
            "space_width = 1\nshadow_x = 1\nown_colours = false",
            "looks: font 1: y_offsets: not a list of offset tables"},
        SBadCase{
            "[[looks.font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
            "space_width = 1\nshadow_x = 1\nown_colours = false\ny_offsets = [1]",
            "looks: font 1: y_offsets 1: not a table"},
        SBadCase{
            "[[looks.font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
            "space_width = 1\nshadow_x = 1\nown_colours = false\n"
            "y_offsets = [{ offset = 1, first = 0, last = 256 }]",
            "looks: font 1: y_offsets 1: last: not from 0 to 255"},
        SBadCase{
            "[[looks.font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
            "space_width = 1\nshadow_x = 1\nown_colours = false\ny_offsets = []\n"
            "os_font = { height = 0 }",
            "looks: font 1: os_font: height: not from 1 to 479"},
        SBadCase{
            "[[looks.font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
            "space_width = 1\nshadow_x = 1\nown_colours = false\ny_offsets = []\n"
            "[[looks.font]]\nid = 'tiny'\nfile = 'g.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
            "space_width = 1\nshadow_x = 1\nown_colours = false\ny_offsets = []",
            "looks: font 2: id: tiny is another font's"},
        SBadCase{
            "[[looks.font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
            "space_width = 1\nshadow_x = 1\nown_colours = false\ny_offsets = [{ z = 1 }]",
            "looks: font 1: y_offsets 1: z: not a key this file takes"},
        SBadCase{
            "[[looks.font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
            "space_width = 1\nshadow_x = 1\nown_colours = false\ny_offsets = []\nos_font = 1",
            "looks: font 1: os_font: not a [os_font] table"},
        SBadCase{
            "[[looks.font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
            "space_width = 1\nshadow_x = 1\nown_colours = false\ny_offsets = []\n"
            "os_font = { z = 1 }",
            "looks: font 1: os_font: z: not a key this file takes"}));

INSTANTIATE_TEST_SUITE_P(
    Startup, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"menu.startup = 1", "menu: startup: not a [startup] table"},
        SBadCase{"[menu.startup]\nsplash = 1", "menu: startup: splash: not a key this file takes"},
        SBadCase{"[menu.startup]\nlabel_font = 'theme'", "menu: startup: picture: missing"},
        SBadCase{
            "[menu.startup]\npicture = 'fangs'\nlabel_font = 'theme'\nmovie_directory = 'video'\n"
            "movie = 'opening.avi'\npicture_alpha = 0x10000",
            "menu: startup: picture_alpha: not from 0 to 65535"},
        SBadCase{
            "[menu.startup]\npicture = 'fangs'\nlabel_font = 'theme'\nmovie_directory = 'video'\n"
            "movie = 'opening.avi'\npicture_alpha = 0\nlabel_x = 0\nlabel_y = 0\n"
            "label_colour = 0",
            "menu: startup: fit: missing"}));

// The sky scene's strings and whole numbers, before its real numbers.
constexpr std::string_view kSkyStrings =
    "[menu.backdrop.sky_scene]\nmodel = 'moon.kfm'\ncheat_model = 'head.kfm'\n"
    "bat_model = 'bat.kfm'\ncloud_image = 'cloud'\nframe_prefix = 'noc'\n";
constexpr std::string_view kSkyWhole =
    "[menu.backdrop.sky_scene]\nmodel = 'moon.kfm'\ncheat_model = 'head.kfm'\n"
    "bat_model = 'bat.kfm'\ncloud_image = 'cloud'\nframe_prefix = 'noc'\n"
    "bat_courses = ['menu1.pth']\ncheat_code = 666\nmoon_ambient = 640\nmoon_flat = 65536\n"
    "bat_count = 30\nbat_ambient = 8192\ncloud_size = 256\ncloud_shift_x = 5\n"
    "cloud_shift_y = 4\nframe_digits = 5\nframe_count = 30\nframe_x = 0\nframe_y = 0\n"
    "frame_width = 640\nframe_height = 278\nframe_alpha = 48000\n";

INSTANTIATE_TEST_SUITE_P(
    TitleBackdrop, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"menu.backdrop = 1", "menu: backdrop: not a [backdrop] table"},
        SBadCase{"[menu.backdrop]\nno_such_style = 1",
                 "menu: backdrop: no_such_style: not a key this file takes"},
        SBadCase{"[menu.backdrop.figure_scene]\nmoon = 1",
                 "menu: backdrop: figure_scene: moon: not a key this file takes"},
        SBadCase{"[menu.backdrop.figure_scene]\nbackdrop = 'b'\ncheat_model = 'c'\n"
                 "frame_prefix = 'f'\nmodels = 1",
                 "menu: backdrop: figure_scene: models: not a list of model tables"},
        SBadCase{"[menu.backdrop.figure_scene]\nbackdrop = 'b'\nframe_prefix = 'f'",
                 "menu: backdrop: figure_scene: backdrop_alpha: missing"},
        SBadCase{"[menu.backdrop.figure_scene]\nframe_prefix = 'f'\nbackdrop_alpha = 1",
                 "menu: backdrop: figure_scene: backdrop_alpha: there is no backdrop"},
        SBadCase{"[menu.backdrop.figure_scene]\nbackdrop = 'b'",
                 "menu: backdrop: figure_scene: frame_prefix: missing"},
        SBadCase{"[menu.backdrop.figure_scene]\nbackdrop = 'b'\ncheat_model = 'c'\n"
                 "frame_prefix = 'f'\nmodels = [{ file = 'a.kfm' }]",
                 "menu: backdrop: figure_scene: models 1: frame_wrap: missing"},
        SBadCase{"[menu.backdrop.figure_scene]\nbackdrop = 'b'\ncheat_model = 'c'\n"
                 "frame_prefix = 'f'\nmodels = [{ file = 'a.kfm', frame_wrap = 1 }]\n"
                 "steps_per_second = 1\n"
                 "backdrop_alpha = 0\ncheat_code = 0\nambient = 0\nframe_digits = 1\n"
                 "frame_count = 1\nframe_x = 0\nframe_y = 0\nframe_width = 1\nframe_height = 1\n"
                 "frame_alpha = 0\nprojection = 1\nframe_rate = 1\nframe_wrap = 1\n"
                 "camera_rotation = [2, 0, 0, 0, 0, 0, 0, 0, 0]",
                 "menu: backdrop: figure_scene: camera_rotation: not from -1 to 1"},
        SBadCase{"[menu.backdrop.figure_scene]\nbackdrop = 'b'\ncheat_model = 'c'\n"
                 "frame_prefix = 'f'\nmodels = [{ file = 'a.kfm', frame_wrap = 1 }]\n"
                 "steps_per_second = 1\n"
                 "backdrop_alpha = 0\ncheat_code = 0\nambient = 0\nframe_digits = 1\n"
                 "frame_count = 1\nframe_x = 0\nframe_y = 0\nframe_width = 1\nframe_height = 1\n"
                 "frame_alpha = 0\nprojection = 1\nframe_rate = 1\nframe_wrap = 1\n"
                 "camera_rotation = [nan, 0, 0, 0, 0, 0, 0, 0, 0]",
                 "menu: backdrop: figure_scene: camera_rotation: not from -1 to 1"},
        SBadCase{"[menu.backdrop.figure_scene]\nbackdrop = 'b'\ncheat_model = 'c'\n"
                 "frame_prefix = 'f'\nmodels = [{ file = 'a.kfm', frame_wrap = 1 }]\n"
                 "steps_per_second = 1\n"
                 "backdrop_alpha = 0\ncheat_code = 0\nambient = 0\nframe_digits = 1\n"
                 "frame_count = 1\nframe_x = 0\nframe_y = 0\nframe_width = 1\nframe_height = 1\n"
                 "frame_alpha = 0\nprojection = 1\nframe_rate = 1\nframe_wrap = 1\n"
                 "camera_rotation = [1, 0, 0, 0, 1, 0, 0, 0, 1]\ncamera_origin = [nan, 0, 0]",
                 "menu: backdrop: figure_scene: camera_origin: not from -65536 to 65536"},
        SBadCase{"[menu.backdrop.sky_scene]\nstars = 1",
                 "menu: backdrop: sky_scene: stars: not a key this file takes"},
        SBadCase{"[menu.backdrop.sky_scene]\ncheat_model = 'h'",
                 "menu: backdrop: sky_scene: model: missing"},
        SBadCase{"[menu.backdrop.sky_scene]\nmodel = 'm'\ncheat_model = 'h'\nbat_model = 'b'\n"
                 "cloud_image = 'c'\nframe_prefix = 'n'",
                 "menu: backdrop: sky_scene: bat_courses: missing"},
        SBadCase{std::format("{}", kSkyWhole), "menu: backdrop: sky_scene: start_phase: missing"},
        SBadCase{std::format("{}start_phase = 'a'\n", kSkyWhole),
                 "menu: backdrop: sky_scene: start_phase: not a number"},
        SBadCase{std::format("{}start_phase = 1.5\n", kSkyWhole),
                 "menu: backdrop: sky_scene: start_phase: not from 0 to 1"},
        SBadCase{std::format("{}start_phase = nan\n", kSkyWhole),
                 "menu: backdrop: sky_scene: start_phase: not from 0 to 1"},
        SBadCase{std::format("{}start_phase = -0.5\n", kSkyWhole),
                 "menu: backdrop: sky_scene: start_phase: not from 0 to 1"},
        SBadCase{std::format("{}bat_courses = 1", kSkyStrings),
                 "menu: backdrop: sky_scene: bat_courses: not a list"},
        SBadCase{std::format("{}bat_courses = ['a']\ncheat_code = -1", kSkyStrings),
                 "menu: backdrop: sky_scene: cheat_code: not from 0 to 99999"},
        SBadCase{std::format("{}start_phase = 0.25\nturn_per_second = 0.0125\nrest_phase = 0.58\n"
                             "projection = 112\nswing = 48\ndepth = 72\nbat_speed = 20\n"
                             "bat_animation_speed = 30\nbat_scatter = 5\nframe_rate = 12\n"
                             "frame_wrap = 60\n",
                             kSkyWhole),
                 "menu: backdrop: sky_scene: moon_light: not a list of 3"},
        SBadCase{"[menu.backdrop]\ntiled_scroll = 1",
                 "menu: backdrop: tiled_scroll: not a [tiled_scroll] table"},
        SBadCase{"[menu.backdrop]\nsky_scene = 1",
                 "menu: backdrop: sky_scene: not a [sky_scene] table"},
        SBadCase{"[menu.backdrop]\nfigure_scene = 1",
                 "menu: backdrop: figure_scene: not a [figure_scene] table"}));

// A figure scene's keys in their read order, each part whole.
constexpr std::string_view kFigureStrings =
    "[menu.backdrop.figure_scene]\nbackdrop = 'b'\ncheat_model = 'c'\nframe_prefix = 'f'\n";
constexpr std::string_view kFigureIntegers =
    "backdrop_alpha = 0\nsteps_per_second = 1\ncheat_code = 0\nambient = 0\nframe_digits = 1\n"
    "frame_count = 1\nframe_x = 0\nframe_y = 0\nframe_width = 1\nframe_height = 1\n"
    "frame_alpha = 0\n";
constexpr std::string_view kFigureReals = "projection = 1\nframe_rate = 1\nframe_wrap = 1\n";
constexpr std::string_view kFigureRotation = "camera_rotation = [1, 0, 0, 0, 1, 0, 0, 0, 1]\n";
constexpr std::string_view kFigureOrigin = "camera_origin = [0, 0, 0]\n";

// The figure scene whole up to its camera, then the case's keys.
std::string figureCamera(std::string_view keys) {
    return std::format("{}{}{}{}", kFigureStrings, kFigureIntegers, kFigureReals, keys);
}

INSTANTIATE_TEST_SUITE_P(
    FigureScene, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{std::format("{}models = [1]", kFigureStrings),
                 "menu: backdrop: figure_scene: models 1: not a table"},
        SBadCase{std::format("{}models = [{{ z = 1 }}]", kFigureStrings),
                 "menu: backdrop: figure_scene: models 1: z: not a key this file takes"},
        SBadCase{std::format("{}models = [{{ frame_wrap = 1 }}]", kFigureStrings),
                 "menu: backdrop: figure_scene: models 1: file: missing"},
        SBadCase{"[menu.backdrop.figure_scene]\nframe_prefix = 'f'\nbackdrop = 1",
                 "menu: backdrop: figure_scene: backdrop: not a string"},
        SBadCase{std::format("{}backdrop_alpha = 0\nsteps_per_second = 0", kFigureStrings),
                 "menu: backdrop: figure_scene: steps_per_second: not from 1 to 1000"},
        SBadCase{std::format("{}{}", kFigureStrings, kFigureIntegers),
                 "menu: backdrop: figure_scene: projection: missing"},
        SBadCase{figureCamera(""),
                 "menu: backdrop: figure_scene: camera_rotation: not a list of 9"},
        SBadCase{figureCamera("camera_rotation = [0]"),
                 "menu: backdrop: figure_scene: camera_rotation: not a list of 9"},
        SBadCase{figureCamera("camera_rotation = ['a', 0, 0, 0, 0, 0, 0, 0, 0]"),
                 "menu: backdrop: figure_scene: camera_rotation: not from -1 to 1"},
        SBadCase{figureCamera("camera_rotation = [-2, 0, 0, 0, 0, 0, 0, 0, 0]"),
                 "menu: backdrop: figure_scene: camera_rotation: not from -1 to 1"},
        SBadCase{figureCamera(kFigureRotation),
                 "menu: backdrop: figure_scene: camera_origin: not a list of 3"},
        SBadCase{figureCamera(std::format("{}camera_origin = [0]", kFigureRotation)),
                 "menu: backdrop: figure_scene: camera_origin: not a list of 3"},
        SBadCase{figureCamera(std::format("{}camera_origin = ['a', 0, 0]", kFigureRotation)),
                 "menu: backdrop: figure_scene: camera_origin: not from -65536 to 65536"},
        SBadCase{figureCamera(std::format("{}camera_origin = [-70000, 0, 0]", kFigureRotation)),
                 "menu: backdrop: figure_scene: camera_origin: not from -65536 to 65536"},
        SBadCase{figureCamera(std::format("{}camera_origin = [70000, 0, 0]", kFigureRotation)),
                 "menu: backdrop: figure_scene: camera_origin: not from -65536 to 65536"},
        SBadCase{figureCamera(std::format("{}{}", kFigureRotation, kFigureOrigin)),
                 "menu: backdrop: figure_scene: light: not a list of 3"},
        SBadCase{figureCamera(std::format("{}{}light = [0, 0, 0]\nflat = [0, 0, 0]\n",
                                          kFigureRotation, kFigureOrigin)),
                 "menu: backdrop: figure_scene: fit: missing"}));

// A tiled scroll's names and tile lists, then its whole numbers but the hand's alpha range.
constexpr std::string_view kTiledNames =
    "[menu.backdrop.tiled_scroll]\ntile = 't'\nhand = 'h'\noverlay = 'o'\n";
constexpr std::string_view kTiledLists = "columns = [320, -320]\nrows = [0, 480]\n";
constexpr std::string_view kTiledSteps =
    "step_x = 2\nstep_y = -1\nsteps_per_second = 60\nwrap_x_above = 639\nwrap_x_to = -640\n"
    "wrap_y_below = -479\nwrap_y_to = 479\nhand_x = 64\nhand_y = 64\nhand_width = 512\n"
    "hand_height = 512\nhand_alpha_start = 0x10000\nhand_alpha_step = 500\n";

INSTANTIATE_TEST_SUITE_P(
    TiledScroll, CGameContentErrorTest,
    ::testing::Values(SBadCase{"[menu.backdrop.tiled_scroll]\nsize = 1",
                               "menu: backdrop: tiled_scroll: size: not a key this file takes"},
                      SBadCase{"[menu.backdrop.tiled_scroll]\nhand = 'h'",
                               "menu: backdrop: tiled_scroll: tile: missing"},
                      SBadCase{std::string(kTiledNames),
                               "menu: backdrop: tiled_scroll: columns: not a list of 2"},
                      SBadCase{std::format("{}columns = [1]", kTiledNames),
                               "menu: backdrop: tiled_scroll: columns: not a list of 2"},
                      SBadCase{std::format("{}columns = ['a', 0]", kTiledNames),
                               "menu: backdrop: tiled_scroll: columns: not from -640 to 640"},
                      SBadCase{std::format("{}columns = [-641, 0]", kTiledNames),
                               "menu: backdrop: tiled_scroll: columns: not from -640 to 640"},
                      SBadCase{std::format("{}columns = [641, 0]", kTiledNames),
                               "menu: backdrop: tiled_scroll: columns: not from -640 to 640"},
                      SBadCase{std::format("{}{}step_x = 640", kTiledNames, kTiledLists),
                               "menu: backdrop: tiled_scroll: step_x: not from -639 to 639"},
                      SBadCase{
                          std::format("{}{}{}hand_alpha_low = 2\nhand_alpha_high = 1", kTiledNames,
                                      kTiledLists, kTiledSteps),
                          "menu: backdrop: tiled_scroll: hand_alpha_low: above hand_alpha_high"},
                      SBadCase{std::format("{}{}{}hand_alpha_low = 1\nhand_alpha_high = 2",
                                           kTiledNames, kTiledLists, kTiledSteps),
                               "menu: backdrop: tiled_scroll: fit: missing"}));

INSTANTIATE_TEST_SUITE_P(
    LoadingIndicator, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"stories.loading_indicator = 1",
                 "stories: loading_indicator: not a [loading_indicator] table"},
        SBadCase{"[stories.loading_indicator]\nbar = 1",
                 "stories: loading_indicator: bar: not a key this file takes"},
        SBadCase{"[stories.loading_indicator.icon]\nspin = 1",
                 "stories: loading_indicator: icon: spin: not a key this file takes"},
        SBadCase{"[stories.loading_indicator.icon]\nx = 75\ny = 298\nwidth = 128\nheight = 128\n"
                 "alpha_start = 0\nalpha_end = 1\nframes = 0",
                 "stories: loading_indicator: icon: frames: not from 1 to 1000"},
        SBadCase{"[stories.loading_indicator.icon]\nx = 75\ny = 298\nwidth = 128\nheight = 128\n"
                 "alpha_start = 0\nalpha_end = 1\nframes = 12",
                 "stories: loading_indicator: icon: always_random: missing"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nfit = 'stretch'\nicon = 1",
                 "stories: loading 1: icon: not a string"},
        SBadCase{"[stories.loading_indicator.progress_bar]\nwidth = 1",
                 "stories: loading_indicator: progress_bar: width: not a key this file takes"},
        SBadCase{"[stories.loading_indicator.progress_bar]\nheight = 3",
                 "stories: loading_indicator: progress_bar: height: not from 4 to 479"},
        SBadCase{"[stories.loading_indicator.progress_bar]\nheight = 20\nframe_colour = 0\n"
                 "trough_colour = 0\nbar_colour = 4",
                 "stories: loading_indicator: progress_bar: status_font: missing"},
        SBadCase{"[stories.loading_indicator.moon]\nspin = 1",
                 "stories: loading_indicator: moon: spin: not a key this file takes"},
        SBadCase{"[stories.loading_indicator.moon]\nglow_texture = 'G.RAW'",
                 "stories: loading_indicator: moon: model: missing"},
        SBadCase{std::format("{}window_size = 0\n", kMoonStrings),
                 "stories: loading_indicator: moon: window_size: not from 1 to 480"},
        SBadCase{std::format("{}{}", kMoonStrings, kMoonIntegers),
                 "stories: loading_indicator: moon: default_tint: not a list of 3"},
        SBadCase{std::format("{}{}default_tint = [0, 0, 0x10000]\n", kMoonStrings, kMoonIntegers),
                 "stories: loading_indicator: moon: default_tint: not from 0 to 65280"},
        SBadCase{std::format("{}{}default_tint = [0, 0, 0]\nstatus_box = [1, 2, 3]\n", kMoonStrings,
                             kMoonIntegers),
                 "stories: loading_indicator: moon: status_box: not a list of 4"},
        SBadCase{std::format("{}{}default_tint = [0, 0]\n", kMoonStrings, kMoonIntegers),
                 "stories: loading_indicator: moon: default_tint: not a list of 3"},
        SBadCase{std::format("{}{}default_tint = ['a', 0, 0]\n", kMoonStrings, kMoonIntegers),
                 "stories: loading_indicator: moon: default_tint: not from 0 to 65280"},
        SBadCase{std::format("{}{}default_tint = [-1, 0, 0]\n", kMoonStrings, kMoonIntegers),
                 "stories: loading_indicator: moon: default_tint: not from 0 to 65280"},
        SBadCase{std::format("{}{}default_tint = [0, 0, 0]\n", kMoonStrings, kMoonIntegers),
                 "stories: loading_indicator: moon: status_box: not a list of 4"},
        SBadCase{std::format("{}{}default_tint = [0, 0, 0]\nstatus_box = ['a', 0, 0, 0]\n",
                             kMoonStrings, kMoonIntegers),
                 "stories: loading_indicator: moon: status_box: not from 0 to 640"},
        SBadCase{std::format("{}{}default_tint = [0, 0, 0]\nstatus_box = [-1, 0, 0, 0]\n",
                             kMoonStrings, kMoonIntegers),
                 "stories: loading_indicator: moon: status_box: not from 0 to 640"},
        SBadCase{std::format("{}{}default_tint = [0, 0, 0]\nstatus_box = [641, 0, 0, 0]\n",
                             kMoonStrings, kMoonIntegers),
                 "stories: loading_indicator: moon: status_box: not from 0 to 640"},
        SBadCase{"[stories.loading_indicator.progress_bar]\nheight = 20\nframe_colour = 0\n"
                 "trough_colour = 0\nbar_colour = 4\nstatus_font = 'theme'\n"
                 "status_box_colour = 256",
                 "stories: loading_indicator: progress_bar: status_box_colour: not from 0 to 255"},
        SBadCase{"[stories.loading_indicator]\nicon = 1",
                 "stories: loading_indicator: icon: not a [icon] table"},
        SBadCase{"[stories.loading_indicator]\nmoon = 1",
                 "stories: loading_indicator: moon: not a [moon] table"},
        SBadCase{"[stories.loading_indicator]\nprogress_bar = 1",
                 "stories: loading_indicator: progress_bar: not a [progress_bar] table"}));

INSTANTIATE_TEST_SUITE_P(
    Difficulties, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"[stories.select.story_list]\nfull_install_probe = 'a.pod'\nloading_frames = 1\n"
                 "difficulty = 1",
                 "stories: select: story_list: difficulty: not a list of [[difficulty]] tables"},
        SBadCase{"[stories.select.story_list]\nfull_install_probe = 'a.pod'\nloading_frames = 1\n"
                 "[[stories.select.story_list.difficulty]]\nname = 'x'",
                 "stories: select: story_list: difficulty 1: name: not a key this file takes"},
        SBadCase{"[stories.select.story_list]\nfull_install_probe = 'a.pod'\nloading_frames = 1\n"
                 "[[stories.select.story_list.difficulty]]\npuzzle = 0",
                 "stories: select: story_list: difficulty 1: label: missing"},
        SBadCase{"[stories.select.story_list]\nfull_install_probe = 'a.pod'\nloading_frames = 1\n"
                 "[[stories.select.story_list.difficulty]]\nlabel = 'Hard'\npuzzle = 2",
                 "stories: select: story_list: difficulty 1: puzzle: not from 0 to 1"}));

TEST(GameContentFile, BlairWitchOnesDifficultiesReadInOrder) {
    const auto games = getEmbeddedGames();
    const auto bw1 = std::ranges::find(games, "blairwitch1", &SEmbeddedGame::id);
    ASSERT_NE(bw1, games.end());
    const std::expected<SGameContent, std::string> content = parseGameContent(bw1->text);
    ASSERT_TRUE(content.has_value()) << content.error();
    ASSERT_TRUE(content->story_select.has_value());
    const std::vector<SStoryDifficulty> &difficulties = content->story_select->difficulties;
    ASSERT_EQ(difficulties.size(), 4U);
    EXPECT_EQ(difficulties[1],
              (SStoryDifficulty{.label = "Normal Puzzles, Hard Combat", .puzzle = 0, .combat = 1}));
    EXPECT_EQ(difficulties[2],
              (SStoryDifficulty{.label = "Hard Puzzles, Normal Combat", .puzzle = 1, .combat = 0}));
}

TEST(GameContentFile, BlairWitchOnesFrontEndReads) {
    const auto games = getEmbeddedGames();
    const auto bw1 = std::ranges::find(games, "blairwitch1", &SEmbeddedGame::id);
    ASSERT_NE(bw1, games.end());
    const std::expected<SGameContent, std::string> content = parseGameContent(bw1->text);
    ASSERT_TRUE(content.has_value()) << content.error();
    ASSERT_TRUE(content->menu.has_value());
    EXPECT_EQ(content->menu->left, 400);
    EXPECT_EQ(content->menu->top, 50);
    EXPECT_EQ(content->menu->titled_top, 25);
    EXPECT_EQ(content->menu->page_tops.at("graphic"), 50);
    EXPECT_EQ(content->difficulty, SDifficulty{.options = true});
    EXPECT_FALSE(content->menu->attract.has_value());
    ASSERT_TRUE(content->controls.has_value());
    EXPECT_EQ(content->controls->modes.size(), 3U);
    EXPECT_EQ(content->controls->bindings.front(),
              (SBindingRowSpec{.action = "fire", .label = "Fire / Action", .help = {}}));
    ASSERT_EQ(content->stories.size(), 1U);
    EXPECT_EQ(content->stories.front().year, 1941);
    EXPECT_EQ(content->stories.front().chapters.front().mission, "hq-bw1.msn");
    ASSERT_EQ(content->loading.size(), 1U);
    EXPECT_FALSE(content->loading.front().random);
}

TEST(GameContentFile, BlairWitchTwosFrontEndReads) {
    const auto games = getEmbeddedGames();
    const auto bw2 = std::ranges::find(games, "blairwitch2", &SEmbeddedGame::id);
    ASSERT_NE(bw2, games.end());
    const std::expected<SGameContent, std::string> content = parseGameContent(bw2->text);
    ASSERT_TRUE(content.has_value()) << content.error();
    ASSERT_TRUE(content->figure_scene.has_value());
    EXPECT_TRUE(content->figure_scene->backdrop.empty());
    EXPECT_TRUE(content->figure_scene->models.empty());
    EXPECT_TRUE(content->figure_scene->cheat_model.empty());
    EXPECT_EQ(content->figure_scene->frame_count, 75);
    ASSERT_TRUE(content->menu.has_value());
    const SMenuLayout &menu = *content->menu;
    EXPECT_EQ(menu.align, EMenuAlign::Centre);
    EXPECT_EQ(menu.top, 310);
    EXPECT_EQ(menu.titled_top, 290);
    EXPECT_EQ(menu.title.drop, (SMenuDrop{.x = 1, .y = 1, .colour = 2}));
    EXPECT_EQ(menu.item.drop, (SMenuDrop{.x = 0, .y = 1, .colour = 4}));
    EXPECT_EQ(menu.footer.version,
              (SFooterPlace{
                  .corner = EFooterCorner::TopRight, .edge = EFooterEdge::Layout, .x = 0, .y = 0}));
    EXPECT_EQ(menu.music.high_rate, "XBLAIRMENU.wav");
    ASSERT_TRUE(menu.spectrum.has_value());
    EXPECT_TRUE(menu.spectrum->mirrored);
    EXPECT_FALSE(menu.trademark.has_value());
    ASSERT_TRUE(content->credits.has_value());
    ASSERT_TRUE(content->credits->fade_loop.has_value());
    EXPECT_EQ(content->credits->fade_loop->loop_below, -2500);
    ASSERT_TRUE(content->direct_start.has_value());
    EXPECT_EQ(content->direct_start->loading_frames, 10);
    ASSERT_EQ(content->stories.size(), 1U);
    EXPECT_EQ(content->stories.front().chapters.front().mission, "awakening.msn");
    ASSERT_TRUE(content->controls.has_value());
    // BW2's 24 rows, Drop item or weapon its own last.
    ASSERT_EQ(content->controls->bindings.size(), 24U);
    EXPECT_EQ(content->controls->bindings.back().action, "drop");
}

TEST(GameContentFile, BlairWitchThreesFrontEndReads) {
    const auto games = getEmbeddedGames();
    const auto bw3 = std::ranges::find(games, "blairwitch3", &SEmbeddedGame::id);
    ASSERT_NE(bw3, games.end());
    const std::expected<SGameContent, std::string> content = parseGameContent(bw3->text);
    ASSERT_TRUE(content.has_value()) << content.error();
    ASSERT_TRUE(content->tiled_scroll.has_value());
    EXPECT_EQ(content->tiled_scroll->columns, (std::array<int, 2>{320, -320}));
    EXPECT_EQ(content->tiled_scroll->hand_alpha_start, 0x10000);
    EXPECT_EQ(content->tiled_scroll->steps_per_second, 60);
    ASSERT_TRUE(content->menu.has_value());
    const SMenuLayout &menu = *content->menu;
    EXPECT_EQ(menu.title.font, "menu");
    EXPECT_EQ(menu.item.untitled_font, "menu");
    ASSERT_EQ(menu.item.untitled_positions.size(), 4U);
    EXPECT_EQ(menu.item.untitled_positions[1], (SMenuPoint{.x = 320, .y = 274, .centred = true}));
    EXPECT_EQ(menu.item.glow.item_colour, 0x9a);
    EXPECT_EQ(
        menu.footer.copyright,
        (SFooterPlace{
            .corner = EFooterCorner::BottomRight, .edge = EFooterEdge::Backdrop, .x = 21, .y = 1}));
    EXPECT_FALSE(menu.spectrum.has_value());
    EXPECT_EQ(content->tiled_scroll->fit.fit, EPictureFit::KeepAspect);
    EXPECT_EQ(content->labels.at("main_play"), "PLAY");
    EXPECT_EQ(content->labels.at("options_graphic"), "Graphic Options");
    ASSERT_TRUE(content->credits.has_value());
    EXPECT_TRUE(content->credits->image.empty());
    ASSERT_TRUE(content->credits->two_column.has_value());
    EXPECT_EQ(content->credits->two_column->right_x, 300);
    EXPECT_EQ(content->stories.front().chapters.front().mission, "town_act1.msn");
    EXPECT_EQ(std::ranges::count(content->fonts, "small_menu", &SFontSpec::id), 1);
}

// What a written manifest holds of each game's look reads back the same.
TEST(GameContentFile, EachGamesFrontEndWritesBack) {
    const auto games = getEmbeddedGames();
    for (const std::string_view id : {"nocturne", "blairwitch1", "blairwitch2", "blairwitch3"}) {
        const auto game = std::ranges::find(games, id, &SEmbeddedGame::id);
        ASSERT_NE(game, games.end());
        const std::expected<SGameContent, std::string> content = parseGameContent(game->text);
        ASSERT_TRUE(content.has_value()) << content.error();
        const std::expected<SGameContent, std::string> again = parseGameContent(format(*content));
        ASSERT_TRUE(again.has_value()) << id << ": " << again.error();
        EXPECT_EQ(*again, *content) << id;
    }
}

TEST(GameContentFile, ALeftEdgedPointAndAManyCodedDefaultWriteBack) {
    SGameContent content = fullContent();
    common::required(content.menu).item.untitled_positions = {{.x = 5, .y = 6, .centred = false}};
    ASSERT_TRUE(content.controls.has_value());
    ASSERT_FALSE(content.controls->modes.empty());
    ASSERT_FALSE(content.controls->modes.front().defaults.empty());
    content.controls->modes.front().defaults.front().codes = {1, 2};
    EXPECT_EQ(parseGameContent(format(content)), content);
}

TEST(GameContentFile, AWholeMenuReads) {
    const std::expected<SGameContent, std::string> content = parseGameContent(
        menuWith(kMenuTitle, kMenuItem, kMenuGlow, menuFooter(), kMenuCalibration));
    ASSERT_TRUE(content.has_value()) << content.error();
    ASSERT_TRUE(content->menu.has_value());
    EXPECT_EQ(content->menu->item.glow.copies, 5);
    EXPECT_EQ(content->menu->calibration.steps, std::vector<std::string>{"one"});
}

INSTANTIATE_TEST_SUITE_P(
    MenuParts, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{menuWith("[menu.title]\ncolour = 7\nshadow = -2\ngap_lines = 2\n", kMenuItem,
                          kMenuGlow, menuFooter(), kMenuCalibration),
                 "menu: title: shadow: not from -1 to 255"},
        SBadCase{menuWith("[menu.title]\nsize = 1\n", kMenuItem, kMenuGlow, menuFooter(),
                          kMenuCalibration),
                 "menu: title: size: not a key this file takes"},
        SBadCase{menuWith(kMenuTitle, "", "", menuFooter(), kMenuCalibration),
                 "menu: item: missing"},
        SBadCase{
            menuWith(kMenuTitle, "[menu.item]\nwidth = 1\n", "", menuFooter(), kMenuCalibration),
            "menu: item: width: not a key this file takes"},
        SBadCase{
            menuWith(kMenuTitle, "[menu.item]\ncolour = 1\n", "", menuFooter(), kMenuCalibration),
            "menu: item: font: missing"},
        SBadCase{menuWith(kMenuTitle,
                          "[menu.item]\nfont = 'theme'\ncolour = 1\nselected_colour = 2\n"
                          "alpha = 3\nshadow = -1\nspacing_titled = 0\nspacing_untitled = 2\n",
                          kMenuGlow, menuFooter(), kMenuCalibration),
                 "menu: item: spacing_titled: not from 1 to 40"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, "", menuFooter(), kMenuCalibration),
                 "menu: item: glow: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, "[menu.item.glow]\nspeed = 1\n", menuFooter(),
                          kMenuCalibration),
                 "menu: item: glow: speed: not a key this file takes"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, "[menu.item.glow]\ncolour = 7\ncopies = 17\n",
                          menuFooter(), kMenuCalibration),
                 "menu: item: glow: copies: not from 0 to 16"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, "[menu.item.glow]\ncolour = 7\ncopies = 5\n",
                          menuFooter(), kMenuCalibration),
                 "menu: item: glow: flicker: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem,
                          "[menu.item.glow]\ncolour = 7\ncopies = 5\nflicker = 1\n", menuFooter(),
                          kMenuCalibration),
                 "menu: item: glow: flicker: not true or false"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, "", kMenuCalibration),
                 "menu: footer: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, "[menu.footer]\nsize = 1\n",
                          kMenuCalibration),
                 "menu: footer: size: not a key this file takes"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, "[menu.footer]\ncolour = 1\n",
                          kMenuCalibration),
                 "menu: footer: font: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow,
                          std::format("{}{}[menu.footer.version]\ncorner = 'top_left'\n"
                                      "edge = 'layout'\nx = 640\ny = 0\n",
                                      kMenuFooterKeys, kMenuFooterCopyright),
                          kMenuCalibration),
                 "menu: footer: version: x: not from 0 to 639"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, menuFooter(), ""),
                 "menu: calibration: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, menuFooter(),
                          "[menu.calibration]\nsize = 1\n"),
                 "menu: calibration: size: not a key this file takes"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, menuFooter(),
                          "[menu.calibration]\nimage = 'b'\n"),
                 "menu: calibration: title: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, menuFooter(),
                          "[menu.calibration]\nimage = 'b'\ntitle = 't'\nprompt = 'p'\n"
                          "font = 'f'\nsteps = 1\n"),
                 "menu: calibration: steps: not a list"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, menuFooter(),
                          "[menu.calibration]\nimage = 'b'\ntitle = 't'\nprompt = 'p'\n"
                          "font = 'f'\nsteps = []\n"),
                 "menu: calibration: steps: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, menuFooter(),
                          "[menu.calibration]\nimage = 'b'\ntitle = 't'\nprompt = 'p'\n"
                          "font = 'f'\nsteps = ['s']\ncolour = 1\ntitle_lines = 41\n"),
                 "menu: calibration: title_lines: not from 0 to 40"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, menuFooter(),
                          "[menu.calibration]\nimage = 'b'\nsteps = ['one']\ntitle = 't'\n"
                          "prompt = 'p'\nfont = 'small_editor'\ncolour = 1\ntitle_lines = 2\n"
                          "prompt_lines = 3\n"),
                 "menu: calibration: fit: missing"},
        SBadCase{menuWith(std::format("{}font = 1\n", kMenuTitle), kMenuItem, kMenuGlow,
                          menuFooter(), kMenuCalibration),
                 "menu: title: font: not a string"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, std::format("{}item_colour = 256\n", kMenuGlow),
                          menuFooter(), kMenuCalibration),
                 "menu: item: glow: item_colour: not from 0 to 255"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow,
                          "[menu.footer]\nfont = 'small_editor'\ncolour = 256\n", kMenuCalibration),
                 "menu: footer: colour: not from 0 to 255"}));

INSTANTIATE_TEST_SUITE_P(
    Loading, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"[[stories.loading]]\nx = 1", "stories: loading 1: x: not a key this file takes"},
        SBadCase{"[[stories.loading]]\nid = \"a b\"",
                 "stories: loading 1: id: only letters, digits, '.', '_' and '-'"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nmoon = 1",
                 "stories: loading 1: moon: not a [moon] table"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nmoon = { z = 1 }",
                 "stories: loading 1: moon: z: not a key this file takes"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nmoon = { y = 1 }",
                 "stories: loading 1: moon: x: missing"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nmoon = { x = 1 }",
                 "stories: loading 1: moon: y: missing"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nmoon = { x = 1, y = 1 }",
                 "stories: loading 1: moon: tint: not a list of red, green and blue"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nmoon = { x = 1, y = 1, tint = [1, 2] }",
                 "stories: loading 1: moon: tint: not a list of red, green and blue"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nmoon = { x = 1, y = 1, tint = [1, 2, \"3\"] }",
                 "stories: loading 1: moon: tint: not from 0 to 0xff00"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nmoon = { x = 1, y = 1, tint = [1, -2, 3] }",
                 "stories: loading 1: moon: tint: not from 0 to 0xff00"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nmoon = { x = 1, y = 1, tint = [0xff01, 2, 3] }",
                 "stories: loading 1: moon: tint: not from 0 to 0xff00"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nrandom = 1",
                 "stories: loading 1: random: not true or false"},
        SBadCase{
            "[[stories.loading]]\nid = \"a\"\nfit = 'stretch'\n[[stories.loading]]\nid = \"a\"\n"
            "fit = 'stretch'",
            "stories: loading 2: id: a is another loading's"},
        SBadCase{"[[stories.loading]]\nid = \"a\"", "stories: loading 1: fit: missing"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nfit = 'fill'",
                 "stories: loading 1: fit: not one of keep_aspect, stretch"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nfit = 'keep_aspect'\nanchor = 'top'",
                 "stories: loading 1: anchor: not one of centre, left, right"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nfit = 'stretch'\nanchor = 'left'",
                 "stories: loading 1: anchor: a stretched picture has none"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nfit = 1",
                 "stories: loading 1: fit: not a string"},
        SBadCase{"[[stories.loading]]\nid = \"a\"\nfit = 'keep_aspect'\nanchor = 1",
                 "stories: loading 1: anchor: not a string"}));

INSTANTIATE_TEST_SUITE_P(
    Story, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{storyWith("act = 1"), "stories: story 1: act: not a key this file takes"},
        SBadCase{"[[stories.story]]\nname = \"S\"", "stories: story 1: id: missing"},
        SBadCase{"[[stories.story]]\nid = \"s\"\ntitle = \"T\"", "stories: story 1: name: missing"},
        SBadCase{"[[stories.story]]\nid = \"s\"\nname = \"S\"", "stories: story 1: title: missing"},
        SBadCase{storyWith("year = 10000"), "stories: story 1: year: not from 0 to 9999"},
        SBadCase{storyWith("loading = 1"), "stories: story 1: loading: not a string"},
        SBadCase{storyWith("unlock = 1"), "stories: story 1: unlock: not a [unlock] table"},
        SBadCase{storyWith("unlock = { value = 1 }"),
                 "stories: story 1: unlock: value: not a key this file takes"},
        SBadCase{storyWith("unlock = { code = 1 }"), "stories: story 1: unlock: key: missing"},
        SBadCase{storyWith("unlock = { key = \"K\" }"), "stories: story 1: unlock: code: missing"},
        SBadCase{storyWith("unlock = { key = \"K\", code = -1 }"),
                 "stories: story 1: unlock: code: not from 0 to 2147483647"},
        SBadCase{storyWith("requires = \"a\""), "stories: story 1: requires: not a list"},
        SBadCase{std::string(kStory), "stories: story 1: chapter: a story needs one"},
        SBadCase{std::format("{}chapter = 1", kStory),
                 "stories: story 1: chapter: not a list of [[chapter]] tables"},
        SBadCase{std::format("{}[[stories.story.chapter]]\nname = \"C\"\nlevel = 1", kStory),
                 "stories: story 1: chapter 1: level: not a key this file takes"},
        SBadCase{std::format("{}[[stories.story.chapter]]\nmission = \"c.msn\"", kStory),
                 "stories: story 1: chapter 1: name: missing"},
        SBadCase{std::format("{}[[stories.story.chapter]]\nname = \"C\"", kStory),
                 "stories: story 1: chapter 1: mission: missing"},
        SBadCase{std::format("{}{}needs_full_install = 1", kStory, kChapter),
                 "stories: story 1: chapter 1: needs_full_install: not true or false"},
        SBadCase{std::format("{}{}{}{}", kStory, kChapter, kStory, kChapter),
                 "stories: story 2: id: s is another story's"}));

INSTANTIATE_TEST_SUITE_P(
    Translation, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"[text.translation]\nde = 1", "text: translation.de: not a table of translations"},
        SBadCase{"[text.translation.\"d e\"]",
                 "text: translation.d e: not a language code of letters, digits, '.', '_' and '-'"},
        SBadCase{"[text.translation.\"\"]",
                 "text: translation.: not a language code of letters, digits, '.', '_' and '-'"},
        SBadCase{"[text.translation.de]\nYes = 1", "text: translation.de: Yes: not a string"},
        SBadCase{"text.labels = 1", "text: labels: not a [labels] table"},
        SBadCase{"[text.labels]\nYes = 1", "text: labels: Yes: not a string"}));

TEST(GameContentFile, BadTomlNamesItsLine) {
    EXPECT_THAT(errorOf("title = "), HasSubstr("line 1: "));
}

} // namespace
} // namespace nocturne::engine
