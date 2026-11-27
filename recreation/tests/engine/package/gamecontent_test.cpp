#include "engine/package/gamecontent.h"
#include "tests/mocks/common/required.h"
#include "tests/mocks/engine/shippedgamecontent.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <optional>
#include <string>
#include <string_view>
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
    return {.id = std::move(id), .fit = {}, .moon = {}, .random = random, .icon = {}};
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
    base.front_end = getShippedGameContent().front_end;
    base.copyright = "Base";
    base.copyright_os_font = "(c) Base";
    base.death_banner =
        SDeathBanner{.text = "Dead", .place = {.anchor = EHudAnchor::Centre, .x = 0, .y = 0}};
    base.iris = SIris{.opens_session = false, .black_frames = 3};
    base.battery = SBattery{.gauge = false};
    base.flashlight = SFlashlight{.options = false};
    base.health_bar = SHealthBar{.place = {.anchor = EHudAnchor::TopLeft, .x = 1, .y = 2}};
    base.inventory_panel = SInventoryPanel{.place = {.anchor = EHudAnchor::Top, .x = 1, .y = 2}};
    base.status_bars = SStatusBars{.place = {.anchor = EHudAnchor::Left, .x = 1, .y = 2}};
    base.message_line = SMessageLine{.place = {.anchor = EHudAnchor::Right, .x = 1, .y = 2}};
    base.credits = SGameCredits{.text = "a.txt",
                                .image = "a",
                                .fit = {},
                                .music = "a.mp3",
                                .column_scroll = {},
                                .fade_loop = {},
                                .two_column = {}};
    base.menu = getShippedGameContent().menu;
    common::required(base.menu).left = 1;
    SGameContent mod;
    mod.title = "Mod";
    mod.copyright = "Mod";
    mod.front_end.loading_indicator = "progress_bar";
    mod.menu = getShippedGameContent().menu;
    common::required(mod.menu).left = 4;
    const SGameContent merged = merge({&base, &mod}).content;
    EXPECT_EQ(merged.title, "Mod");
    EXPECT_EQ(merged.front_end.title_backdrop, "sky_scene");
    EXPECT_EQ(merged.front_end.loading_indicator, "progress_bar");
    EXPECT_EQ(merged.copyright, "Mod");
    EXPECT_EQ(merged.copyright_os_font, "(c) Base");
    EXPECT_EQ(merged.death_banner, base.death_banner);
    EXPECT_EQ(merged.iris, base.iris);
    EXPECT_EQ(merged.battery, base.battery);
    EXPECT_EQ(merged.flashlight, base.flashlight);
    EXPECT_EQ(merged.health_bar, base.health_bar);
    EXPECT_EQ(merged.inventory_panel, base.inventory_panel);
    EXPECT_EQ(merged.status_bars, base.status_bars);
    EXPECT_EQ(merged.message_line, base.message_line);
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
    const auto view = [](std::string_view model, std::optional<double> turn_y,
                         std::optional<double> distance) {
        return SInventoryItemView{.id = std::string(model),
                                  .turn_x = std::nullopt,
                                  .turn_y = turn_y,
                                  .turn_z = std::nullopt,
                                  .distance = distance};
    };
    base.inventory_views = {view("axe1.kfm", 1.0, {}), view("ax.kfm", 2.0, {})};
    mod.inventory_views = {view("ax.kfm", 10.0, {}), view("lamp.kfm", {}, 3.0)};
    const SGameContent merged = merge({&base, &mod}).content;
    EXPECT_THAT(merged.inventory_views, ElementsAre(base.inventory_views[0], mod.inventory_views[0],
                                                    mod.inventory_views[1]));
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

TEST(GameContent, LabelsMergeKeyByKey) {
    SGameContent base;
    base.labels = {{"S T A R T", "START"}, {"Q U I T", "QUIT"}};
    SGameContent mod;
    mod.labels = {{"Q U I T", "EXIT"}};
    EXPECT_EQ(merge({&base, &mod}).content.labels,
              (TranslationTable{{"S T A R T", "START"}, {"Q U I T", "EXIT"}}));
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
