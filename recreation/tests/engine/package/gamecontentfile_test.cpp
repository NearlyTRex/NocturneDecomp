#include "engine/package/gamecontent.h"
#include "engine/package/gamecontentfile.h"
#include "engine/package/packagedata.h"

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
    content.front_end = "nocturne";
    content.loading_indicator = "moon";
    content.copyright = "Game \"1999\"";
    content.copyright_os_font = "Game (c) 1999";
    content.credits = SGameCredits{.text = "credits.txt", .image = "stats", .music = "m.mp3"};
    content.menu = SMenuLayout{
        .left = 160, .top = 250, .titled_top = 225, .trademark = SLayoutPoint{.x = 518, .y = 99}};
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
    content.credits = SGameCredits{.text = "c.txt", .image = "i", .music = {}};
    content.menu = SMenuLayout{.left = 1, .top = 2, .titled_top = 3, .trademark = {}};
    EXPECT_EQ(formatGameContentTables(content),
              "\n[credits]\ntext = 'c.txt'\nimage = 'i'\n\n[menu]\nleft = 1\ntop = 2\n"
              "titled_top = 3\n");
    EXPECT_EQ(parseGameContent(formatGameContentTables(content)), content);
}

TEST(GameContentFile, TheShippedGamesFileReads) {
    const auto games = getEmbeddedGames();
    ASSERT_FALSE(games.empty());
    const std::expected<SGameContent, std::string> content = parseGameContent(games.front().text);
    ASSERT_TRUE(content.has_value()) << content.error();
    EXPECT_EQ(content->stories.size(), 5U);
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
    ::testing::Values(SBadCase{"id = \"a\"", "id: not a key this file takes"},
                      SBadCase{"front_end = 1", "front_end: not a string"},
                      SBadCase{"front_end = \"\"", "front_end: missing"},
                      SBadCase{"title = 1", "title: not a string"},
                      SBadCase{"title = \"\"", "title: not a name a folder can have"},
                      SBadCase{"title = \".game\"", "title: not a name a folder can have"},
                      SBadCase{"title = \"game.\"", "title: not a name a folder can have"},
                      SBadCase{"title = \"game \"", "title: not a name a folder can have"},
                      SBadCase{"title = \"a/b\"", "title: not a name a folder can have"},
                      SBadCase{"title = \"a:b\"", "title: not a name a folder can have"},
                      SBadCase{"loading_indicator = \"\"", "loading_indicator: missing"},
                      SBadCase{"credits = 1", "credits: not a [credits] table"},
                      SBadCase{"menu = 1", "menu: not a [menu] table"},
                      SBadCase{"loading = 1", "loading: not a list of [[loading]] tables"},
                      SBadCase{"story = 1", "story: not a list of [[story]] tables"},
                      SBadCase{"translation = 1", "translation: not a [translation] table"}));

INSTANTIATE_TEST_SUITE_P(
    Credits, CGameContentErrorTest,
    ::testing::Values(SBadCase{"[credits]\nfont = 1", "credits: font: not a key this file takes"},
                      SBadCase{"[credits]\nimage = \"i\"", "credits: text: missing"},
                      SBadCase{"[credits]\ntext = \"t\"", "credits: image: missing"},
                      SBadCase{"[credits]\ntext = \"t\"\nimage = \"i\"\nmusic = 1",
                               "credits: music: not a string"}));

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
                 "menu: trademark: y: not from 0 to 479"}));

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
        SBadCase{"[translation.de]\nYes = 1", "translation.de: Yes: not a string"}));

TEST(GameContentFile, BadTomlNamesItsLine) {
    EXPECT_THAT(errorOf("front_end = "), HasSubstr("line 1: "));
}

} // namespace
} // namespace nocturne::engine
