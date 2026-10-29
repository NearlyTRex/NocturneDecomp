#include "core/dfont/dfont.h"
#include "core/game/aimmode.h"
#include "core/game/game.h"
#include "core/menu/gameplaypage.h"
#include "core/menu/menupage.h"
#include "shape/edittool/editortools.h"
#include "tests/mocks/core/menufixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <optional>
#include <string>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::Return;

// The lines' ids, in the order they are listed.
constexpr int kAlwaysRun = 0;
constexpr int kAiming = 1;
constexpr int kAutoHealth = 2;
constexpr int kSubtitles = 3;
constexpr int kTextFont = 4;
constexpr int kMenuText = 5;
constexpr int kRating = 6;

TEST(CGameplayPage, PublicInterface) {
    static_assert(std::is_base_of_v<CMenuPage, CGameplayPage>);
    static_assert(std::is_final_v<CGameplayPage>);
    static_assert(std::is_constructible_v<CGameplayPage, CMenu &, const SMenuOwners &>);
}

class CGameplayPageTest : public CMenuFixture {
protected:
    // This frame's texts, by line.
    [[nodiscard]] std::vector<std::string> texts() {
        std::vector<SMenuLine> lines;
        page_.build(lines);
        std::vector<std::string> result;
        result.reserve(lines.size());
        for (const SMenuLine &line : lines) {
            result.push_back(line.text);
        }
        return result;
    }

    [[nodiscard]] std::string text(int id) {
        std::vector<SMenuLine> lines;
        page_.build(lines);
        for (const SMenuLine &line : lines) {
            if (line.id == id) {
                return line.text;
            }
        }
        return "";
    }

    void choose(int id, EMenuStep step = EMenuStep::On) {
        EXPECT_EQ(page_.choose(id, step), EMenuOutcome::Stay);
    }

    CGameplayPage page_{menu_, menu_owners_};
};

TEST_F(CGameplayPageTest, TheTitleIsGameplay) {
    EXPECT_EQ(page_.title(), std::optional<std::string>("Gameplay"));
}

TEST_F(CGameplayPageTest, TheLinesShowTheCurrentSettings) {
    EXPECT_EQ(texts(), (std::vector<std::string>{"Always run : OFF", "Aiming : Auto",
                                                 "Auto use health : Off", "Subtitles : On",
                                                 "Text font : Auto", "Menu text : Large",
                                                 "Rating: Mature"}));
}

TEST_F(CGameplayPageTest, AQuimbyBuildHasNoRating) {
    game_.quimby_flag = 1;
    EXPECT_EQ(texts().size(), 6U);
}

TEST_F(CGameplayPageTest, AlwaysRunAutoHealthAndSubtitlesToggle) {
    choose(kAlwaysRun);
    choose(kAutoHealth);
    choose(kSubtitles);
    EXPECT_EQ(text(kAlwaysRun), "Always run : ON");
    EXPECT_EQ(text(kAutoHealth), "Auto use health : On");
    EXPECT_EQ(text(kSubtitles), "Subtitles : Off");
    choose(kAlwaysRun, EMenuStep::Back);
    choose(kAutoHealth, EMenuStep::Back);
    choose(kSubtitles, EMenuStep::Back);
    EXPECT_EQ(game_.always_run, 0);
    EXPECT_EQ(game_.auto_use_health, 0);
    EXPECT_EQ(game_.subtitle_mode, 1);
}

// The INI can hold the third, which the line leaves for Auto.
TEST_F(CGameplayPageTest, AimingSwapsAutoAndManual) {
    choose(kAiming);
    EXPECT_EQ(game_.aim_mode, EAimMode::AIM_MODE_MANUAL);
    EXPECT_EQ(text(kAiming), "Aiming : Manual");
    choose(kAiming);
    EXPECT_EQ(game_.aim_mode, EAimMode::AIM_MODE_AUTO);
    game_.aim_mode = EAimMode::AIM_MODE_SEMI_AUTO;
    EXPECT_EQ(text(kAiming), "Aiming : Kindof auto");
    choose(kAiming);
    EXPECT_EQ(game_.aim_mode, EAimMode::AIM_MODE_AUTO);
}

TEST_F(CGameplayPageTest, TheTextFontStepsEitherWayAndWraps) {
    choose(kTextFont);
    EXPECT_EQ(fonts_.getOsFontChoice(), EOsFontChoice::Bitmap);
    EXPECT_EQ(text(kTextFont), "Text font : Bitmap");
    choose(kTextFont);
    EXPECT_EQ(text(kTextFont), "Text font : System");
    choose(kTextFont);
    EXPECT_EQ(fonts_.getOsFontChoice(), EOsFontChoice::Auto);
    choose(kTextFont, EMenuStep::Back);
    EXPECT_EQ(fonts_.getOsFontChoice(), EOsFontChoice::System);
}

// The text font waits for the next launch; the dialogs take the menu text at once.
TEST_F(CGameplayPageTest, TheMenuTextStepsAndTheDialogsTakeIt) {
    editor_tools_.setEditorFont(fonts_.getThemeFont());
    choose(kMenuText, EMenuStep::Back);
    EXPECT_EQ(fonts_.getMenuFontChoice(), EMenuFontChoice::Small);
    EXPECT_EQ(text(kMenuText), "Menu text : Small");
    EXPECT_EQ(editor_tools_.getEditorFont(), fonts_.getSmallEditorFont());
    choose(kMenuText);
    EXPECT_EQ(editor_tools_.getEditorFont(), fonts_.getThemeFont());
}

TEST_F(CGameplayPageTest, AWindowOf240RowsKeepsItsDialogFont) {
    ON_CALL(screen_, getWindowHeight()).WillByDefault(Return(240));
    editor_tools_.setEditorFont(fonts_.getThemeFont());
    choose(kMenuText);
    EXPECT_EQ(fonts_.getMenuFontChoice(), EMenuFontChoice::Small);
    EXPECT_EQ(editor_tools_.getEditorFont(), fonts_.getThemeFont());
}

TEST_F(CGameplayPageTest, TheRatingMovesNudityBloodAndLanguageTogether) {
    game_.blood_flag = 0;
    choose(kRating);
    EXPECT_EQ(text(kRating), "Rating: Teen");
    EXPECT_EQ(game_.nudity_flag, 0);
    EXPECT_EQ(game_.blood_flag, 0);
    EXPECT_EQ(game_.foul_language_flag, 0);
    choose(kRating);
    EXPECT_EQ(game_.nudity_flag, 1);
    EXPECT_EQ(game_.blood_flag, 1);
    EXPECT_EQ(game_.foul_language_flag, 1);
}

} // namespace
} // namespace nocturne::core
