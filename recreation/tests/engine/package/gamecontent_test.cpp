#include "engine/package/gamecontent.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <string>
#include <vector>

namespace nocturne::engine {
namespace {

using ::testing::ElementsAre;

SGameStory story(std::string id, std::string name) {
    return {.id = std::move(id),
            .name = std::move(name),
            .title = "T",
            .year = 0,
            .loading = {},
            .unlock = {},
            .required_stories = {},
            .chapters = {{.name = "C", .mission = "c.msn", .needs_full_install = false}}};
}

SLoadingPicture picture(std::string id, bool random) {
    return {.id = std::move(id), .moon = {}, .random = random};
}

SMergedGameContent merge(std::initializer_list<const SGameContent *> in_order) {
    const std::vector<const SGameContent *> list(in_order);
    return mergeGameContent(list);
}

TEST(GameContent, NothingMergedIsEmpty) {
    EXPECT_EQ(merge({}).content, SGameContent{});
}

TEST(GameContent, ALaterPackagesValuesWinAndUnsetOnesLeaveTheEarlier) {
    SGameContent base;
    base.title = "Base";
    base.front_end = "nocturne";
    base.loading_indicator = "moon";
    base.copyright = "Base";
    base.copyright_os_font = "(c) Base";
    base.credits = SGameCredits{.text = "a.txt", .image = "a", .music = "a.mp3"};
    base.menu = SMenuLayout{.left = 1, .top = 2, .titled_top = 3, .trademark = {}};
    SGameContent mod;
    mod.title = "Mod";
    mod.copyright = "Mod";
    mod.menu = SMenuLayout{.left = 4, .top = 5, .titled_top = 6, .trademark = {}};
    const SGameContent merged = merge({&base, &mod}).content;
    EXPECT_EQ(merged.title, "Mod");
    EXPECT_EQ(merged.front_end, "nocturne");
    EXPECT_EQ(merged.loading_indicator, "moon");
    EXPECT_EQ(merged.copyright, "Mod");
    EXPECT_EQ(merged.copyright_os_font, "(c) Base");
    EXPECT_EQ(merged.credits, base.credits);
    EXPECT_EQ(merged.menu, mod.menu);
}

TEST(GameContent, AStoryOrPictureWithAnIdTakenReplacesItWhereItStands) {
    SGameContent base;
    base.stories = {story("one", "One"), story("two", "Two")};
    base.loading = {picture("a", true), picture("b", true)};
    SGameContent mod;
    mod.stories = {story("one", "First"), story("three", "Three")};
    mod.loading = {picture("a", false), picture("c", true)};
    const SGameContent merged = merge({&base, &mod}).content;
    EXPECT_THAT(merged.stories,
                ElementsAre(story("one", "First"), story("two", "Two"), story("three", "Three")));
    EXPECT_THAT(merged.loading,
                ElementsAre(picture("a", false), picture("b", true), picture("c", true)));
}

TEST(GameContent, TranslationsMergeKeyByKeyPerLanguage) {
    SGameContent base;
    base.translations["de"] = {{"Yes", "Ja"}, {"No", "Nein"}};
    SGameContent mod;
    mod.translations["de"] = {{"No", "Nee"}};
    mod.translations["fr"] = {{"Yes", "Oui"}};
    const SGameContent merged = merge({&base, &mod}).content;
    EXPECT_EQ(merged.translations.at("de"), (TranslationTable{{"Yes", "Ja"}, {"No", "Nee"}}));
    EXPECT_EQ(merged.translations.at("fr"), (TranslationTable{{"Yes", "Oui"}}));
}

TEST(GameContent, AStoryNamingWhatNoPackageHasIsNoted) {
    SGameContent content;
    content.loading = {picture("load1", true)};
    SGameStory pictured = story("pictured", "P");
    pictured.loading = "load1";
    SGameStory unpictured = story("unpictured", "U");
    unpictured.loading = "gone";
    SGameStory needy = story("needy", "N");
    needy.required_stories = {"pictured", "absent"};
    content.stories = {pictured, unpictured, needy, story("plain", "Plain")};
    EXPECT_THAT(merge({&content}).notes,
                ElementsAre("the story unpictured names a loading picture gone no package has",
                            "the story needy needs a story absent no package has, so it isn't "
                            "listed"));
}

} // namespace
} // namespace nocturne::engine
