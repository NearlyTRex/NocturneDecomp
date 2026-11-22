#include "engine/package/gamecontent.h"
#include "engine/package/gamecontentfile.h"
#include "engine/package/packagedata.h"
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
constexpr std::string_view kStory = "[[story]]\nid = \"s\"\nname = \"S\"\ntitle = \"T\"\n";
constexpr std::string_view kChapter = "[[story.chapter]]\nname = \"C\"\nmission = \"c.msn\"\n";

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
    content.story_select->difficulties = {{.label = "Easy", .puzzle = 0, .combat = 0},
                                          {.label = "Hard \"puzzles\"", .puzzle = 1, .combat = 0}};
    content.chapter_title = getShippedGameContent().chapter_title;
    content.copyright = "Game \"1999\"";
    content.copyright_os_font = "Game (c) 1999";
    content.credits = getShippedGameContent().credits;
    content.credits->music = "m.mp3";
    content.menu = getShippedGameContent().menu;
    content.list = getShippedGameContent().list;
    content.dialog = getShippedGameContent().dialog;
    content.loading = {{.id = "load1",
                        .moon = SMoonWindow{.x = 120, .y = 130, .tint = {0x8200, 0xc800, 0xf400}},
                        .random = true},
                       {.id = "plain", .moon = {}, .random = false}};
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

TEST(GameContentFile, NoContentWritesNothing) {
    EXPECT_EQ(format({}), "");
    EXPECT_EQ(parseGameContent(""), SGameContent{});
}

TEST(GameContentFile, WritesOnlyWhatAStoryAndPictureHave) {
    SGameContent content;
    content.credits = SGameCredits{.text = "c.txt",
                                   .image = "i",
                                   .music = {},
                                   .column_scroll = {},
                                   .fade_loop = {},
                                   .two_column = {}};
    content.menu = getShippedGameContent().menu;
    content.menu->trademark.reset();
    EXPECT_THAT(formatGameContentTables(content),
                ::testing::StartsWith("\n[credits]\ntext = 'c.txt'\nimage = 'i'\n\n[menu]\n"
                                      "left = 160\ntop = 250\ntitled_top = 225\n\n[menu.title]\n"));
    EXPECT_EQ(parseGameContent(formatGameContentTables(content)), content);
}

// A mod changing one part writes only that one; the rest come from the packages before it.
TEST(GameContentFile, WritesOnlyTheFrontEndPartsSet) {
    SGameContent content;
    content.front_end.loading_indicator = "progress_bar";
    EXPECT_EQ(formatGameContentTables(content),
              "\n[front_end]\nloading_indicator = 'progress_bar'\n");
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
        SBadCase{"front_end = 1", "front_end: not a [front_end] table"},
        SBadCase{"front_end.title_backdrop = 1", "front_end: title_backdrop: not a string"},
        SBadCase{"front_end.title_backdrop = \"\"", "front_end: title_backdrop: missing"},
        SBadCase{"front_end.loading_indicator = \"\"", "front_end: loading_indicator: missing"},
        SBadCase{"front_end.menus = \"nocturne\"", "front_end: menus: not a key this file takes"},
        SBadCase{"title = 1", "title: not a string"},
        SBadCase{"title = \"\"", "title: not a name a folder can have"},
        SBadCase{"title = \".game\"", "title: not a name a folder can have"},
        SBadCase{"title = \"game.\"", "title: not a name a folder can have"},
        SBadCase{"title = \"game \"", "title: not a name a folder can have"},
        SBadCase{"title = \"a/b\"", "title: not a name a folder can have"},
        SBadCase{"title = \"a:b\"", "title: not a name a folder can have"},
        SBadCase{"credits = 1", "credits: not a [credits] table"},
        SBadCase{"menu = 1", "menu: not a [menu] table"},
        SBadCase{"loading = 1", "loading: not a list of [[loading]] tables"},
        SBadCase{"story = 1", "story: not a list of [[story]] tables"},
        SBadCase{"translation = 1", "translation: not a [translation] table"}));

INSTANTIATE_TEST_SUITE_P(
    Credits, CGameContentErrorTest,
    ::testing::Values(SBadCase{"[credits]\nfont = 1", "credits: font: not a key this file takes"},
                      SBadCase{"[credits]\nimage = \"i\"", "credits: text: missing"},
                      SBadCase{"[credits]\ntext = \"t\"\nimage = 1",
                               "credits: image: not a string"},
                      SBadCase{"[credits]\ntext = 't'\n[credits.two_column]\nfont = 'f'",
                               "credits: two_column: end_line: missing"},
                      SBadCase{"[credits]\ntext = 't'\n[credits.two_column]\nwidth = 1",
                               "credits: two_column: width: not a key this file takes"},
                      SBadCase{"[credits]\ntext = \"t\"\nimage = \"i\"\nmusic = 1",
                               "credits: music: not a string"},
                      SBadCase{"[credits]\ntext = 't'\nimage = 'i'\ncolumn_scroll = 1",
                               "credits: column_scroll: not a [column_scroll] table"},
                      SBadCase{"[credits]\ntext = 't'\nimage = 'i'\n[credits.column_scroll]\n"
                               "speed = 1",
                               "credits: column_scroll: speed: not a key this file takes"},
                      SBadCase{"[credits]\ntext = 't'\nimage = 'i'\n[credits.column_scroll]\n"
                               "end_line = 'end'",
                               "credits: column_scroll: font: missing"},
                      SBadCase{"[credits]\ntext = 't'\nimage = 'i'\n[credits.column_scroll]\n"
                               "font = 'theme'\nend_line = 'end'\ncolumn_left = 640",
                               "credits: column_scroll: column_left: not from 0 to 639"},
                      SBadCase{"[credits]\ntext = 't'\nimage = 'i'\n[credits.column_scroll]\n"
                               "font = 'theme'\nend_line = 'end'\ncolumn_left = 1\n"
                               "top_strip_bottom = 1\nbottom_strip_top = 1\nstrip_colour = 0\n"
                               "text_colour = 0\nheading_colour = 0\nshadow_colour = 0\n"
                               "scroll_speed = 1\nstart_y = 1\nmarker = 'ab'\nheading = 'b'",
                               "credits: column_scroll: marker: not one character"},
                      SBadCase{"front_end.credits = ''", "front_end: credits: missing"}));

INSTANTIATE_TEST_SUITE_P(
    StorySelectAndChapterTitle, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"story_select = 1", "story_select: not a [story_select] table"},
        SBadCase{"[story_select]\nprobe = 1", "story_select: probe: not a key this file takes"},
        SBadCase{"[story_select]", "story_select: missing a style's table"},
        SBadCase{"[story_select.direct_start]\nframes = 1",
                 "story_select: direct_start: frames: not a key this file takes"},
        SBadCase{"[story_select.direct_start]",
                 "story_select: direct_start: loading_frames: missing"},
        SBadCase{"[story_select.story_list]\nprobe = 1",
                 "story_select: story_list: probe: not a key this file takes"},
        SBadCase{"[story_select.story_list]\nloading_frames = 10",
                 "story_select: story_list: full_install_probe: missing"},
        SBadCase{"[story_select.story_list]\nfull_install_probe = 'a.pod'\nloading_frames = 0",
                 "story_select: story_list: loading_frames: not from 1 to 1000"},
        SBadCase{"chapter_title = 1", "chapter_title: not a [chapter_title] table"},
        SBadCase{"[chapter_title]\nsize = 1", "chapter_title: size: not a key this file takes"},
        SBadCase{"[chapter_title]\nseconds = 8", "chapter_title: format: missing"},
        SBadCase{"[chapter_title]\nformat = 'f'\nseconds = 0",
                 "chapter_title: seconds: not from 1 to 600"},
        SBadCase{"[chapter_title]\nformat = 'f'\nseconds = 8\ncolour = 0\nshadow = 0\n"
                 "alpha = 0\ninset_across = 2\ninset_up = 1",
                 "chapter_title: font: missing"},
        SBadCase{"[chapter_title]\nformat = 'f'\nseconds = 8\ncolour = 0\nshadow = 0\n"
                 "alpha = 0\ninset_across = 2\ninset_up = 1\n[[chapter_title.font]]\nsize = 1",
                 "chapter_title: font 1: size: not a key this file takes"},
        SBadCase{"[chapter_title]\nformat = 'f'\nseconds = 8\ncolour = 0\nshadow = 0\n"
                 "alpha = 0\ninset_across = 2\ninset_up = 1\n[[chapter_title.font]]\n"
                 "below_height = 1",
                 "chapter_title: font 1: font: missing"},
        SBadCase{"[chapter_title]\nformat = 'f'\nseconds = 8\ncolour = 0\nshadow = 0\n"
                 "alpha = 0\ninset_across = 2\ninset_up = 1\n[[chapter_title.font]]\n"
                 "font = 'tiny'\nbelow_height = 400",
                 "chapter_title: font 1: below_height: the last font takes every height left"},
        SBadCase{"[chapter_title]\nformat = 'f'\nseconds = 8\ncolour = 0\nshadow = 0\n"
                 "alpha = 0\ninset_across = 2\ninset_up = 1\n[[chapter_title.font]]\n"
                 "font = 'tiny'\n[[chapter_title.font]]\nfont = 'medium'",
                 "chapter_title: font 1: below_height: missing"},
        SBadCase{"[chapter_title]\nformat = 'f'\nseconds = 8\ncolour = 0\nshadow = 0\n"
                 "alpha = 0\ninset_across = 2\ninset_up = 1\n[[chapter_title.font]]\n"
                 "font = 'tiny'\nbelow_height = 5000\n[[chapter_title.font]]\nfont = 'medium'",
                 "chapter_title: font 1: below_height: not from 1 to 2160"},
        SBadCase{"front_end.story_select = ''", "front_end: story_select: missing"}));

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
constexpr std::string_view kMenuTop = "[menu]\nleft = 1\ntop = 1\ntitled_top = 1\n";
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
const std::string kMenuFooter =
    std::format("{}{}{}", kMenuFooterKeys, kMenuFooterCopyright, kMenuFooterVersion);
constexpr std::string_view kMenuCalibration =
    "[menu.calibration]\nimage = 'b'\nsteps = ['one']\ntitle = 't'\nprompt = 'p'\n"
    "font = 'small_editor'\ncolour = 1\ntitle_lines = 2\nprompt_lines = 3\n";

constexpr std::string_view kMenuOptions = "[menu.options]\nhero = 2\ncard_name_length = 24\n";
constexpr std::string_view kMenuSound = "[menu.sound]\neffects_sample = 's.wav'\n";
constexpr std::string_view kMenuSlider =
    "[menu.slider]\nwidth_share = 3\nwidth_parts = 4\nheight = 44\nbar_colour = 4\n"
    "trough_colour = 0\nborder_colour = 255\ntext_colour = 255\ntext_shadow = 0\n";

// With the music, the table read last.
constexpr std::string_view kMenuFeatures =
    "[menu.features]\ndifficulty = false\n"
    "[menu.music]\nlow_rate = 'low.wav'\nhigh_rate = 'high.wav'\n";

std::string menuWith(std::string_view title, std::string_view item, std::string_view glow,
                     std::string_view footer, std::string_view calibration) {
    return std::format("{}{}{}{}{}{}{}{}{}{}", kMenuTop, title, item, glow, footer, calibration,
                       kMenuOptions, kMenuSound, kMenuSlider, kMenuFeatures);
}

// The whole menu with the rest of the menu's tables after it, in place of options, sound and
// slider when a case gives its own.
std::string menuThen(std::string_view rest) {
    return std::format("{}{}{}{}{}{}{}", kMenuTop, kMenuTitle, kMenuItem, kMenuGlow, kMenuFooter,
                       kMenuCalibration, rest);
}

// The whole menu with a key of [menu]'s own, which goes before its tables.
std::string menuKeyed(std::string_view key) {
    return std::format("{}{}\n{}{}{}{}{}{}{}{}{}", kMenuTop, key, kMenuTitle, kMenuItem, kMenuGlow,
                       kMenuFooter, kMenuCalibration, kMenuOptions, kMenuSound, kMenuSlider,
                       kMenuFeatures);
}

TEST(GameContentFile, AMenusOptionalTablesAndPageTopsRead) {
    const std::expected<SGameContent, std::string> content = parseGameContent(
        menuWith(kMenuTitle, kMenuItem, kMenuGlow, kMenuFooter, kMenuCalibration) +
        "[menu.page_tops]\nsound = 200\n"
        "[menu.sound.spectrum]\nframes = ['a', 'b']\nfps = 24\npitch = 4\nhalf_width = 16\n"
        "margin_divisor = 20\nheight_percent = 25\nalpha = 1\n"
        "[menu.attract]\ndirectory = 'video'\nmovies = ['a.avi']\n");
    ASSERT_TRUE(content.has_value()) << content.error();
    EXPECT_EQ(content->menu->page_tops.at("sound"), 200);
    ASSERT_TRUE(content->menu->spectrum.has_value());
    EXPECT_EQ(content->menu->spectrum->frames.size(), 2U);
    ASSERT_TRUE(content->menu->attract.has_value());
    EXPECT_EQ(content->menu->attract->movies, std::vector<std::string>{"a.avi"});
    EXPECT_EQ(parseGameContent(formatGameContentTables(*content)), content);
}

// A [list] whole but for the part a case changes.
constexpr std::string_view kListTop =
    "[list]\nitem_colour = 1\ndisabled_colour = 1\nselected_colour = 1\nconfirmed_colour = 1\n"
    "separator_colour = 1\nalpha = 1\nshadow = -1\ncolumn_padding = 8\nmargin_width = 8\n"
    "margin_height = 6\nfield_gap_divisor = 40\nrow_extra = 1\nreserved_lines = 4\n"
    "width_share = 7\nwidth_parts = 8\ndouble_click_ticks = 1\n";
constexpr std::string_view kListPointer =
    "[list.pointer]\ncube_colours = [0, 1, 2, 3]\nsize = 9\ndefault_height = 11\n";
constexpr std::string_view kListScrollBar =
    "[list.scroll_bar]\nfirst_repeat_ticks = 1\nrepeat_ticks = 1\ntrack_fill_colour = 0\n"
    "track_border_colour = 7\n";

INSTANTIATE_TEST_SUITE_P(
    ListAndDialog, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"list = 1", "list: not a [list] table"},
        SBadCase{"[list]\nsize = 1", "list: size: not a key this file takes"},
        SBadCase{"[list]\nitem_colour = 256", "list: item_colour: not from 0 to 255"},
        SBadCase{std::format("{}", kListTop), "list: pointer: missing"},
        SBadCase{std::format("{}{}", kListTop, "[list.pointer]\nsize = 9\n"),
                 "list: pointer: cube_colours: not a list of four"},
        SBadCase{std::format("{}{}", kListTop, "[list.pointer]\ncube_colours = [0, 1, 2]\n"),
                 "list: pointer: cube_colours: not a list of four"},
        SBadCase{
            std::format("{}{}", kListTop, "[list.pointer]\ncube_colours = [0, 1, 2, 0x8000]\n"),
            "list: pointer: cube_colours: not from 0 to 0x7fff"},
        SBadCase{std::format("{}{}", kListTop, "[list.pointer]\nwidth = 1\n"),
                 "list: pointer: width: not a key this file takes"},
        SBadCase{std::format("{}{}", kListTop, "[list.pointer]\ncube_colours = [0, 1, 2, 3]\n"),
                 "list: pointer: size: missing"},
        SBadCase{std::format("{}{}", kListTop, kListPointer), "list: scroll_bar: missing"},
        SBadCase{std::format("{}{}[list.scroll_bar]\nspeed = 1\n", kListTop, kListPointer),
                 "list: scroll_bar: speed: not a key this file takes"},
        SBadCase{
            std::format("{}{}[list.scroll_bar]\nfirst_repeat_ticks = 0\n", kListTop, kListPointer),
            "list: scroll_bar: first_repeat_ticks: not from 1 to 70778880"},
        SBadCase{"[list]\nitem_colour = 1\ndisabled_colour = 1\nselected_colour = 1\n"
                 "confirmed_colour = 1\nseparator_colour = 1\nalpha = 1\nshadow = -1\n"
                 "column_padding = 8\nmargin_width = 8\nmargin_height = 6\n"
                 "field_gap_divisor = 40\nrow_extra = 1\nreserved_lines = 4\nwidth_share = 9\n"
                 "width_parts = 8\ndouble_click_ticks = 1\n",
                 "list: width_share: more than width_parts"},
        SBadCase{"dialog = 1", "dialog: not a [dialog] table"},
        SBadCase{"[dialog]\nsize = 1", "dialog: size: not a key this file takes"},
        SBadCase{"[dialog]\ncontent_colour = 256", "dialog: content_colour: not from 0 to 255"},
        SBadCase{"[dialog]\ncontent_colour = 0", "dialog: border_colour: missing"}));

TEST(GameContentFile, AWholeListReads) {
    const std::expected<SGameContent, std::string> content =
        parseGameContent(std::format("{}{}{}", kListTop, kListPointer, kListScrollBar));
    ASSERT_TRUE(content.has_value()) << content.error();
    EXPECT_EQ(content->list->pointer.cube_colours, (std::array<int, 4>{0, 1, 2, 3}));
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
        SBadCase{menuThen(std::string(kMenuOptions)), "menu: sound: missing"},
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
                 "menu: features: missing"},
        SBadCase{menuThen(std::format("{}{}{}[menu.features]\ncrosshair = true\n", kMenuOptions,
                                      kMenuSound, kMenuSlider)),
                 "menu: features: crosshair: not a key this file takes"},
        SBadCase{
            menuThen(std::format("{}{}{}[menu.features]\n", kMenuOptions, kMenuSound, kMenuSlider)),
            "menu: features: difficulty: missing"},
        SBadCase{menuThen(std::format("{}{}{}[menu.features]\ndifficulty = false\n", kMenuOptions,
                                      kMenuSound, kMenuSlider)),
                 "menu: music: missing"},
        SBadCase{menuThen(std::format("{}{}{}[menu.features]\ndifficulty = false\n"
                                      "[menu.music]\nlow_rate = 'a.wav'\n",
                                      kMenuOptions, kMenuSound, kMenuSlider)),
                 "menu: music: high_rate: missing"},
        SBadCase{menuKeyed("align = 'right'"), "menu: align: not one of left, centre"},
        SBadCase{menuWith(kMenuTitle,
                          std::format("{}untitled_positions = [{{ x = 1, centre_x = 2, y = 3 }}]\n",
                                      kMenuItem),
                          kMenuGlow, kMenuFooter, kMenuCalibration),
                 "menu: item: untitled_positions 1: give one of x and centre_x"},
        SBadCase{menuWith(kMenuTitle,
                          std::format("{}untitled_positions = [{{ y = 3 }}]\n", kMenuItem),
                          kMenuGlow, kMenuFooter, kMenuCalibration),
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
                 "menu: footer: version: edge: not one of screen, layout"},
        SBadCase{menuWith(std::format("{}drop = {{ x = 9, y = 0, colour = 2 }}\n", kMenuTitle),
                          kMenuItem, kMenuGlow, kMenuFooter, kMenuCalibration),
                 "menu: title: drop: x: not from -8 to 8"}));

// The moon indicator's table whole but for what a case adds after its strings.
constexpr std::string_view kMoonStrings =
    "[loading_indicator.moon]\nmodel = 'moon.kfm'\nglow_texture = 'G.RAW'\n"
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
                 "controls: binding 1: action: missing"}));

INSTANTIATE_TEST_SUITE_P(
    Fonts, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"font = 1", "font: not a list of [[font]] tables"},
        SBadCase{"[[font]]\nsize = 1", "font 1: size: not a key this file takes"},
        SBadCase{"[[font]]\nfile = 'f.raw'", "font 1: id: missing"},
        SBadCase{"[[font]]\nid = 'tiny'", "font 1: file: missing"},
        SBadCase{"[[font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 0",
                 "font 1: width: not from 1 to 4096"},
        SBadCase{"[[font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
                 "space_width = 1\nshadow_x = 1",
                 "font 1: own_colours: missing"},
        SBadCase{"[[font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
                 "space_width = 1\nshadow_x = 1\nown_colours = false",
                 "font 1: y_offsets: not a list of offset tables"},
        SBadCase{"[[font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
                 "space_width = 1\nshadow_x = 1\nown_colours = false\ny_offsets = [1]",
                 "font 1: y_offsets 1: not a table"},
        SBadCase{"[[font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
                 "space_width = 1\nshadow_x = 1\nown_colours = false\n"
                 "y_offsets = [{ offset = 1, first = 0, last = 256 }]",
                 "font 1: y_offsets 1: last: not from 0 to 255"},
        SBadCase{"[[font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
                 "space_width = 1\nshadow_x = 1\nown_colours = false\ny_offsets = []\n"
                 "os_font = { height = 0 }",
                 "font 1: os_font: height: not from 1 to 479"},
        SBadCase{"[[font]]\nid = 'tiny'\nfile = 'f.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
                 "space_width = 1\nshadow_x = 1\nown_colours = false\ny_offsets = []\n"
                 "[[font]]\nid = 'tiny'\nfile = 'g.raw'\nwidth = 1\nheight = 1\ntransparent = 0\n"
                 "space_width = 1\nshadow_x = 1\nown_colours = false\ny_offsets = []",
                 "font 2: id: tiny is another font's"}));

INSTANTIATE_TEST_SUITE_P(
    Startup, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"startup = 1", "startup: not a [startup] table"},
        SBadCase{"[startup]\nsplash = 1", "startup: splash: not a key this file takes"},
        SBadCase{"[startup]\nlabel_font = 'theme'", "startup: picture: missing"},
        SBadCase{"[startup]\npicture = 'fangs'\nlabel_font = 'theme'\nmovie_directory = 'video'\n"
                 "movie = 'opening.avi'\npicture_alpha = 0x10000",
                 "startup: picture_alpha: not from 0 to 65535"}));

// The sky scene's strings and whole numbers, before its real numbers.
constexpr std::string_view kSkyWhole =
    "[title_backdrop.sky_scene]\nmodel = 'moon.kfm'\ncheat_model = 'head.kfm'\n"
    "bat_model = 'bat.kfm'\ncloud_image = 'cloud'\nframe_prefix = 'noc'\n"
    "bat_courses = ['menu1.pth']\ncheat_code = 666\nmoon_ambient = 640\nmoon_flat = 65536\n"
    "bat_count = 30\nbat_ambient = 8192\ncloud_size = 256\ncloud_shift_x = 5\n"
    "cloud_shift_y = 4\nframe_digits = 5\nframe_count = 30\nframe_x = 0\nframe_y = 0\n"
    "frame_width = 640\nframe_height = 278\nframe_alpha = 48000\n";

INSTANTIATE_TEST_SUITE_P(
    TitleBackdrop, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"title_backdrop = 1", "title_backdrop: not a [title_backdrop] table"},
        SBadCase{"[title_backdrop]\nno_such_style = 1",
                 "title_backdrop: no_such_style: not a key this file takes"},
        SBadCase{"[title_backdrop.figure_scene]\nmoon = 1",
                 "title_backdrop: figure_scene: moon: not a key this file takes"},
        SBadCase{"[title_backdrop.figure_scene]\nbackdrop = 'b'\ncheat_model = 'c'\n"
                 "frame_prefix = 'f'\nmodels = 1",
                 "title_backdrop: figure_scene: models: not a list of model tables"},
        SBadCase{"[title_backdrop.figure_scene]\nbackdrop = 'b'\nframe_prefix = 'f'",
                 "title_backdrop: figure_scene: backdrop_alpha: missing"},
        SBadCase{"[title_backdrop.figure_scene]\nframe_prefix = 'f'\nbackdrop_alpha = 1",
                 "title_backdrop: figure_scene: backdrop_alpha: there is no backdrop"},
        SBadCase{"[title_backdrop.figure_scene]\nbackdrop = 'b'",
                 "title_backdrop: figure_scene: frame_prefix: missing"},
        SBadCase{"[title_backdrop.figure_scene]\nbackdrop = 'b'\ncheat_model = 'c'\n"
                 "frame_prefix = 'f'\nmodels = [{ file = 'a.kfm' }]",
                 "title_backdrop: figure_scene: models 1: frame_wrap: missing"},
        SBadCase{"[title_backdrop.figure_scene]\nbackdrop = 'b'\ncheat_model = 'c'\n"
                 "frame_prefix = 'f'\nmodels = [{ file = 'a.kfm', frame_wrap = 1 }]\n"
                 "backdrop_alpha = 0\ncheat_code = 0\nambient = 0\nframe_digits = 1\n"
                 "frame_count = 1\nframe_x = 0\nframe_y = 0\nframe_width = 1\nframe_height = 1\n"
                 "frame_alpha = 0\nprojection = 1\nframe_rate = 1\nframe_wrap = 1\n"
                 "camera_rotation = [2, 0, 0, 0, 0, 0, 0, 0, 0]",
                 "title_backdrop: figure_scene: camera_rotation: not from -1 to 1"},
        SBadCase{"[title_backdrop.sky_scene]\nstars = 1",
                 "title_backdrop: sky_scene: stars: not a key this file takes"},
        SBadCase{"[title_backdrop.sky_scene]\ncheat_model = 'h'",
                 "title_backdrop: sky_scene: model: missing"},
        SBadCase{"[title_backdrop.sky_scene]\nmodel = 'm'\ncheat_model = 'h'\nbat_model = 'b'\n"
                 "cloud_image = 'c'\nframe_prefix = 'n'",
                 "title_backdrop: sky_scene: bat_courses: missing"},
        SBadCase{std::format("{}", kSkyWhole), "title_backdrop: sky_scene: start_phase: missing"},
        SBadCase{std::format("{}start_phase = 'a'\n", kSkyWhole),
                 "title_backdrop: sky_scene: start_phase: not a number"},
        SBadCase{std::format("{}start_phase = 1.5\n", kSkyWhole),
                 "title_backdrop: sky_scene: start_phase: not from 0 to 1"},
        SBadCase{std::format("{}start_phase = nan\n", kSkyWhole),
                 "title_backdrop: sky_scene: start_phase: not from 0 to 1"}));

INSTANTIATE_TEST_SUITE_P(
    LoadingIndicator, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"loading_indicator = 1", "loading_indicator: not a [loading_indicator] table"},
        SBadCase{"[loading_indicator]\nbar = 1",
                 "loading_indicator: bar: not a key this file takes"},
        SBadCase{"[loading_indicator]", "loading_indicator: moon: missing"},
        SBadCase{"[loading_indicator.moon]\nspin = 1",
                 "loading_indicator: moon: spin: not a key this file takes"},
        SBadCase{"[loading_indicator.moon]\nglow_texture = 'G.RAW'",
                 "loading_indicator: moon: model: missing"},
        SBadCase{std::format("{}window_size = 0\n", kMoonStrings),
                 "loading_indicator: moon: window_size: not from 1 to 480"},
        SBadCase{std::format("{}{}", kMoonStrings, kMoonIntegers),
                 "loading_indicator: moon: default_tint: not a list of 3"},
        SBadCase{std::format("{}{}default_tint = [0, 0, 0x10000]\n", kMoonStrings, kMoonIntegers),
                 "loading_indicator: moon: default_tint: not from 0 to 65280"},
        SBadCase{std::format("{}{}default_tint = [0, 0, 0]\nstatus_box = [1, 2, 3]\n", kMoonStrings,
                             kMoonIntegers),
                 "loading_indicator: moon: status_box: not a list of 4"}));

INSTANTIATE_TEST_SUITE_P(
    Difficulties, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"[story_select.story_list]\nfull_install_probe = 'a.pod'\nloading_frames = 1\n"
                 "difficulty = 1",
                 "story_select: story_list: difficulty: not a list of [[difficulty]] tables"},
        SBadCase{"[story_select.story_list]\nfull_install_probe = 'a.pod'\nloading_frames = 1\n"
                 "[[story_select.story_list.difficulty]]\nname = 'x'",
                 "story_select: story_list: difficulty 1: name: not a key this file takes"},
        SBadCase{"[story_select.story_list]\nfull_install_probe = 'a.pod'\nloading_frames = 1\n"
                 "[[story_select.story_list.difficulty]]\npuzzle = 0",
                 "story_select: story_list: difficulty 1: label: missing"},
        SBadCase{"[story_select.story_list]\nfull_install_probe = 'a.pod'\nloading_frames = 1\n"
                 "[[story_select.story_list.difficulty]]\nlabel = 'Hard'\npuzzle = 2",
                 "story_select: story_list: difficulty 1: puzzle: not from 0 to 1"}));

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
    EXPECT_TRUE(content->menu->features.difficulty);
    EXPECT_FALSE(content->menu->attract.has_value());
    ASSERT_TRUE(content->controls.has_value());
    EXPECT_EQ(content->controls->modes.size(), 3U);
    EXPECT_EQ(content->controls->bindings.front(),
              (SBindingRowSpec{.action = "fire", .label = "Fire / Action"}));
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
    EXPECT_EQ(content->controls->bindings.size(), 23U);
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
            .corner = EFooterCorner::BottomRight, .edge = EFooterEdge::Layout, .x = 21, .y = 1}));
    EXPECT_FALSE(menu.spectrum.has_value());
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

TEST(GameContentFile, AWholeMenuReads) {
    const std::expected<SGameContent, std::string> content =
        parseGameContent(menuWith(kMenuTitle, kMenuItem, kMenuGlow, kMenuFooter, kMenuCalibration));
    ASSERT_TRUE(content.has_value()) << content.error();
    EXPECT_EQ(content->menu->item.glow.copies, 5);
    EXPECT_EQ(content->menu->calibration.steps, std::vector<std::string>{"one"});
}

INSTANTIATE_TEST_SUITE_P(
    MenuParts, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{menuWith("[menu.title]\ncolour = 7\nshadow = -2\ngap_lines = 2\n", kMenuItem,
                          kMenuGlow, kMenuFooter, kMenuCalibration),
                 "menu: title: shadow: not from -1 to 255"},
        SBadCase{menuWith("[menu.title]\nsize = 1\n", kMenuItem, kMenuGlow, kMenuFooter,
                          kMenuCalibration),
                 "menu: title: size: not a key this file takes"},
        SBadCase{menuWith(kMenuTitle, "", "", kMenuFooter, kMenuCalibration),
                 "menu: item: missing"},
        SBadCase{
            menuWith(kMenuTitle, "[menu.item]\nwidth = 1\n", "", kMenuFooter, kMenuCalibration),
            "menu: item: width: not a key this file takes"},
        SBadCase{
            menuWith(kMenuTitle, "[menu.item]\ncolour = 1\n", "", kMenuFooter, kMenuCalibration),
            "menu: item: font: missing"},
        SBadCase{menuWith(kMenuTitle,
                          "[menu.item]\nfont = 'theme'\ncolour = 1\nselected_colour = 2\n"
                          "alpha = 3\nshadow = -1\nspacing_titled = 0\nspacing_untitled = 2\n",
                          kMenuGlow, kMenuFooter, kMenuCalibration),
                 "menu: item: spacing_titled: not from 1 to 40"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, "", kMenuFooter, kMenuCalibration),
                 "menu: item: glow: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, "[menu.item.glow]\nspeed = 1\n", kMenuFooter,
                          kMenuCalibration),
                 "menu: item: glow: speed: not a key this file takes"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, "[menu.item.glow]\ncolour = 7\ncopies = 17\n",
                          kMenuFooter, kMenuCalibration),
                 "menu: item: glow: copies: not from 0 to 16"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, "[menu.item.glow]\ncolour = 7\ncopies = 5\n",
                          kMenuFooter, kMenuCalibration),
                 "menu: item: glow: flicker: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem,
                          "[menu.item.glow]\ncolour = 7\ncopies = 5\nflicker = 1\n", kMenuFooter,
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
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, kMenuFooter, ""),
                 "menu: calibration: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, kMenuFooter,
                          "[menu.calibration]\nsize = 1\n"),
                 "menu: calibration: size: not a key this file takes"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, kMenuFooter,
                          "[menu.calibration]\nimage = 'b'\n"),
                 "menu: calibration: title: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, kMenuFooter,
                          "[menu.calibration]\nimage = 'b'\ntitle = 't'\nprompt = 'p'\n"
                          "font = 'f'\nsteps = 1\n"),
                 "menu: calibration: steps: not a list"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, kMenuFooter,
                          "[menu.calibration]\nimage = 'b'\ntitle = 't'\nprompt = 'p'\n"
                          "font = 'f'\nsteps = []\n"),
                 "menu: calibration: steps: missing"},
        SBadCase{menuWith(kMenuTitle, kMenuItem, kMenuGlow, kMenuFooter,
                          "[menu.calibration]\nimage = 'b'\ntitle = 't'\nprompt = 'p'\n"
                          "font = 'f'\nsteps = ['s']\ncolour = 1\ntitle_lines = 41\n"),
                 "menu: calibration: title_lines: not from 0 to 40"}));

INSTANTIATE_TEST_SUITE_P(
    Loading, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"[[loading]]\nx = 1", "loading 1: x: not a key this file takes"},
        SBadCase{"[[loading]]\nid = \"a b\"",
                 "loading 1: id: only letters, digits, '.', '_' and '-'"},
        SBadCase{"[[loading]]\nid = \"a\"\nmoon = 1", "loading 1: moon: not a [moon] table"},
        SBadCase{"[[loading]]\nid = \"a\"\nmoon = { z = 1 }",
                 "loading 1: moon: z: not a key this file takes"},
        SBadCase{"[[loading]]\nid = \"a\"\nmoon = { y = 1 }", "loading 1: moon: x: missing"},
        SBadCase{"[[loading]]\nid = \"a\"\nmoon = { x = 1 }", "loading 1: moon: y: missing"},
        SBadCase{"[[loading]]\nid = \"a\"\nmoon = { x = 1, y = 1 }",
                 "loading 1: moon: tint: not a list of red, green and blue"},
        SBadCase{"[[loading]]\nid = \"a\"\nmoon = { x = 1, y = 1, tint = [1, 2] }",
                 "loading 1: moon: tint: not a list of red, green and blue"},
        SBadCase{"[[loading]]\nid = \"a\"\nmoon = { x = 1, y = 1, tint = [1, 2, \"3\"] }",
                 "loading 1: moon: tint: not from 0 to 0xff00"},
        SBadCase{"[[loading]]\nid = \"a\"\nmoon = { x = 1, y = 1, tint = [1, -2, 3] }",
                 "loading 1: moon: tint: not from 0 to 0xff00"},
        SBadCase{"[[loading]]\nid = \"a\"\nmoon = { x = 1, y = 1, tint = [0xff01, 2, 3] }",
                 "loading 1: moon: tint: not from 0 to 0xff00"},
        SBadCase{"[[loading]]\nid = \"a\"\nrandom = 1", "loading 1: random: not true or false"},
        SBadCase{"[[loading]]\nid = \"a\"\n[[loading]]\nid = \"a\"",
                 "loading 2: id: a is another loading's"}));

INSTANTIATE_TEST_SUITE_P(
    Story, CGameContentErrorTest,
    ::testing::Values(SBadCase{storyWith("act = 1"), "story 1: act: not a key this file takes"},
                      SBadCase{"[[story]]\nname = \"S\"", "story 1: id: missing"},
                      SBadCase{"[[story]]\nid = \"s\"\ntitle = \"T\"", "story 1: name: missing"},
                      SBadCase{"[[story]]\nid = \"s\"\nname = \"S\"", "story 1: title: missing"},
                      SBadCase{storyWith("year = 10000"), "story 1: year: not from 0 to 9999"},
                      SBadCase{storyWith("loading = 1"), "story 1: loading: not a string"},
                      SBadCase{storyWith("unlock = 1"), "story 1: unlock: not a [unlock] table"},
                      SBadCase{storyWith("unlock = { value = 1 }"),
                               "story 1: unlock: value: not a key this file takes"},
                      SBadCase{storyWith("unlock = { code = 1 }"), "story 1: unlock: key: missing"},
                      SBadCase{storyWith("unlock = { key = \"K\" }"),
                               "story 1: unlock: code: missing"},
                      SBadCase{storyWith("unlock = { key = \"K\", code = -1 }"),
                               "story 1: unlock: code: not from 0 to 2147483647"},
                      SBadCase{storyWith("requires = \"a\""), "story 1: requires: not a list"},
                      SBadCase{std::string(kStory), "story 1: chapter: a story needs one"},
                      SBadCase{std::format("{}chapter = 1", kStory),
                               "story 1: chapter: not a list of [[chapter]] tables"},
                      SBadCase{std::format("{}[[story.chapter]]\nname = \"C\"\nlevel = 1", kStory),
                               "story 1: chapter 1: level: not a key this file takes"},
                      SBadCase{std::format("{}[[story.chapter]]\nmission = \"c.msn\"", kStory),
                               "story 1: chapter 1: name: missing"},
                      SBadCase{std::format("{}[[story.chapter]]\nname = \"C\"", kStory),
                               "story 1: chapter 1: mission: missing"},
                      SBadCase{std::format("{}{}needs_full_install = 1", kStory, kChapter),
                               "story 1: chapter 1: needs_full_install: not true or false"},
                      SBadCase{std::format("{}{}{}{}", kStory, kChapter, kStory, kChapter),
                               "story 2: id: s is another story's"}));

INSTANTIATE_TEST_SUITE_P(
    Translation, CGameContentErrorTest,
    ::testing::Values(
        SBadCase{"[translation]\nde = 1", "translation.de: not a table of translations"},
        SBadCase{"[translation.\"d e\"]", "translation.d e: not a language code of letters, "
                                          "digits, '.', '_' and '-'"},
        SBadCase{"[translation.\"\"]", "translation.: not a language code of letters, digits, "
                                       "'.', '_' and '-'"},
        SBadCase{"[translation.de]\nYes = 1", "translation.de: Yes: not a string"},
        SBadCase{"labels = 1", "labels: not a [labels] table"},
        SBadCase{"[labels]\nYes = 1", "labels: Yes: not a string"}));

TEST(GameContentFile, BadTomlNamesItsLine) {
    EXPECT_THAT(errorOf("title = "), HasSubstr("line 1: "));
}

} // namespace
} // namespace nocturne::engine
