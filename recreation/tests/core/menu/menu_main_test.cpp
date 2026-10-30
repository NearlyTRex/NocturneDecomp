#include "common/error/fatalerror.h"
#include "core/dfont/dfont.h"
#include "core/main/main.h"
#include "core/menu/menu.h"
#include "engine/keys/inputcodetype.h"
#include "shape/edittool/editortools.h"
#include "tests/mocks/core/menufixture.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <chrono>
#include <functional>
#include <string>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::AnyOf;
using ::testing::ElementsAre;
using ::testing::IsEmpty;
using ::testing::Return;

using CMainMenuTest = CMenuFixture;

TEST_F(CMainMenuTest, AWindowUnder480RowsShowsNothing) {
    ON_CALL(screen_, getWindowHeight()).WillByDefault(Return(479));
    EXPECT_EQ(menu_.showMainGameMenu(), 1);
    EXPECT_EQ(frames_, 0);
}

// The first frame is cleared before it is shown; the rest show the moon and the items.
TEST_F(CMainMenuTest, EachFrameShowsTheMoonAndItemsUntilCancel) {
    std::vector<bool> drawn;
    on_frame_ = [&](int frame) {
        drawn.push_back(anythingDrawn());
        if (frame == 3) {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    EXPECT_EQ(enterMainGameMenu(menu_), 99);
    EXPECT_EQ(drawn, (std::vector<bool>{false, true, true}));
}

// The music starts after the first frame and stops as the menu goes.
TEST_F(CMainMenuTest, TheMusicPlaysWhileTheMenuIsUp) {
    std::vector<int> playing;
    on_frame_ = [&](int frame) {
        playing.push_back(sound_main_.countActiveSfx());
        if (frame == 2) {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(playing, (std::vector<int>{0, 1}));
    EXPECT_EQ(sound_main_.countActiveSfx(), 0);
}

TEST_F(CMainMenuTest, ControlMMutesAndUnmutesTheSound) {
    std::vector<bool> muted;
    on_frame_ = [&](int frame) {
        muted.push_back(sound_main_.isSoundMuted());
        if (frame <= 2) {
            press(EInputCodeType::DIK_LCONTROL);
            press(EInputCodeType::DIK_M);
        } else {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(muted, (std::vector<bool>{false, true, false}));
}

// Up from PLAY wraps to it.
TEST_F(CMainMenuTest, QuitQuits) {
    on_frame_ = [&](int /*frame*/) {
        press(EInputCodeType::DIK_UP);
        press(EInputCodeType::DIK_RETURN);
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(frames_, 2);
}

// It is seen as soon as the frame it closed during is shown.
TEST_F(CMainMenuTest, ClosingTheWindowQuits) {
    on_frame_ = [&](int /*frame*/) {
        ON_CALL(raw_input_, getInputDisabled()).WillByDefault(Return(true));
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(frames_, 1);
}

// A second of music, a tenth of a second a frame, after the opening played.
class CMainMenuAttractTest : public CMenuFixture {
protected:
    CMainMenuAttractTest() {
        givenFile("sound\\splash-music-22.wav", sound::makeConstantWav(22050, 0));
        attract_movies_.setOpeningPlayed(true);
    }

    // Moves the clock on a frame's worth before the frame's own work.
    void runFrames(int count, const std::function<void(int)> &each = {}) {
        on_frame_ = [this, count, each](int frame) {
            now_ms_ += 100;
            if (each) {
                each(frame);
            }
            if (frame >= count) {
                press(EInputCodeType::DIK_ESCAPE);
            }
        };
        EXPECT_EQ(menu_.showMainGameMenu(), 99);
    }
};

// The music starts on the first frame, at 100ms, so its pass less the lead ends at 850ms.
TEST_F(CMainMenuAttractTest, AMovieFollowsThePassOfMusicAndTheMusicStartsAgain) {
    EXPECT_CALL(attract_clock_, sleep(std::chrono::duration<double>(0.4)));
    std::vector<int> playing;
    runFrames(12, [&](int frame) {
        if (frame >= 8) {
            playing.push_back(sound_main_.countActiveSfx());
        }
    });
    EXPECT_THAT(movies_, ElementsAre(AnyOf("video\\noc1.avi", "video\\noc2.avi", "video\\noc3.avi",
                                           "video\\noc4.avi")));
    EXPECT_EQ(playing, (std::vector<int>{1, 1, 1, 1, 1}));
}

TEST_F(CMainMenuAttractTest, TheNextPassEndsAfterTheMusicStartsAgain) {
    runFrames(17);
    EXPECT_EQ(movies_.size(), 2U);
}

TEST_F(CMainMenuAttractTest, MutedThereIsNoMusicToFollow) {
    sound_main_.setSoundMuted(true);
    runFrames(15);
    EXPECT_THAT(movies_, IsEmpty());
}

// Muting stopped the music the wait was for, and unmuting starts it again from the start.
TEST_F(CMainMenuAttractTest, MutingInTheMiddleOfAPassStartsTheWaitAgain) {
    runFrames(13, [&](int frame) {
        if (frame == 5 || frame == 6) {
            press(EInputCodeType::DIK_LCONTROL);
            press(EInputCodeType::DIK_M);
        }
    });
    EXPECT_THAT(movies_, IsEmpty());
}

TEST_F(CMainMenuAttractTest, WithoutTheOpeningNoMovieFollows) {
    attract_movies_.setOpeningPlayed(false);
    runFrames(15);
    EXPECT_THAT(movies_, IsEmpty());
}

TEST_F(CMainMenuTest, TheSoftwareRendererTakesAtMost640x480) {
    game_.game_pixx = 800;
    game_.game_pixy = 600;
    on_frame_ = [&](int /*frame*/) { press(EInputCodeType::DIK_ESCAPE); };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(game_.game_pixx, 640);
    EXPECT_EQ(game_.game_pixy, 480);
}

TEST_F(CMainMenuTest, Direct3DKeepsTheGameResolution) {
    special_.setUseDirect3D(true);
    game_.game_pixx = 800;
    game_.game_pixy = 600;
    on_frame_ = [&](int /*frame*/) { press(EInputCodeType::DIK_ESCAPE); };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(game_.game_pixx, 800);
    EXPECT_EQ(game_.game_pixy, 600);
}

// So a resolution picked under Options applies on the way back.
TEST_F(CMainMenuTest, EachFrameSizesTheWindowToTheGameResolution) {
    special_.setUseDirect3D(true);
    game_.game_pixx = 1024;
    game_.game_pixy = 768;
    EXPECT_CALL(display_, setWindowSize(1024, 768)).Times(2);
    on_frame_ = [&](int frame) {
        if (frame == 2) {
            press(EInputCodeType::DIK_ESCAPE);
        }
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
}

TEST_F(CMainMenuTest, TheDialogsDrawInTheThemeFont) {
    on_frame_ = [&](int /*frame*/) { press(EInputCodeType::DIK_ESCAPE); };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(editor_tools_.getEditorFont(), fonts_.getThemeFont());
}

// Options saves the settings as it closes, then the main menu is back.
TEST_F(CMainMenuTest, OptionsOpensTheOptionsScreen) {
    game_.always_run = 1;
    on_frame_ = [&](int frame) {
        if (frame <= 2) {
            press(EInputCodeType::DIK_DOWN);
        } else {
            press(frame == 3 ? EInputCodeType::DIK_RETURN : EInputCodeType::DIK_ESCAPE);
        }
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_THAT(ini_text_, ::testing::HasSubstr("alwaysRun=1\r\n"));
    EXPECT_EQ(frames_, 6);
}

TEST_F(CMainMenuTest, TheDialogsDrawInTheMenuTextFont) {
    fonts_.setMenuFontChoice(EMenuFontChoice::Small);
    on_frame_ = [&](int /*frame*/) { press(EInputCodeType::DIK_ESCAPE); };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(editor_tools_.getEditorFont(), fonts_.getSmallEditorFont());
}

// Cancel leaves the submenu for the main menu, and a second Cancel quits that.
TEST_F(CMainMenuTest, CancelInPlayGoesBackToTheMainMenu) {
    on_frame_ = [&](int frame) {
        press(frame == 1 ? EInputCodeType::DIK_RETURN : EInputCodeType::DIK_ESCAPE);
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(frames_, 4);
}

TEST_F(CMainMenuTest, CancelInMultiplayerGoesBackToTheMainMenu) {
    on_frame_ = [&](int frame) {
        if (frame == 1) {
            press(EInputCodeType::DIK_DOWN);
        } else {
            press(frame == 2 ? EInputCodeType::DIK_RETURN : EInputCodeType::DIK_ESCAPE);
        }
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(frames_, 5);
}

// The submenu leaves after its first frame, and the main menu quits without another.
TEST_F(CMainMenuTest, ClosingTheWindowUnderASubmenuQuits) {
    on_frame_ = [&](int frame) {
        if (frame == 1) {
            press(EInputCodeType::DIK_RETURN);
        } else {
            ON_CALL(raw_input_, getInputDisabled()).WillByDefault(Return(true));
        }
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
    EXPECT_EQ(frames_, 3);
}

// The press that opens a submenu is cleared before its first frame.
TEST_F(CMainMenuTest, ASubmenuClearsTheInputThatOpenedIt) {
    EXPECT_CALL(raw_input_, clearInput()).Times(3);
    on_frame_ = [&](int frame) {
        press(frame == 1 ? EInputCodeType::DIK_RETURN : EInputCodeType::DIK_ESCAPE);
    };
    EXPECT_EQ(menu_.showMainGameMenu(), 99);
}

// PLAY, then START, then Cancel back on the main menu, a press a frame; the keys given are held
// with START's press.
class CMainMenuStartTest : public CMainMenuTest {
protected:
    void chooseStart(const std::vector<EInputCodeType> &held) {
        on_frame_ = [this, &held](int frame) {
            if (frame == 1) {
                press(EInputCodeType::DIK_RETURN);
            } else if (frame == 2) {
                press(EInputCodeType::DIK_DOWN);
            } else if (frame == 3) {
                for (const EInputCodeType code : held) {
                    press(code);
                }
                press(EInputCodeType::DIK_RETURN);
            } else {
                music_after_.push_back(sound_main_.countActiveSfx());
                drawn_after_.push_back(anythingDrawn());
                press(EInputCodeType::DIK_ESCAPE);
            }
        };
        EXPECT_EQ(menu_.showMainGameMenu(), 99);
    }

    std::vector<int> music_after_;
    std::vector<bool> drawn_after_;
};

// The music is stopped while it runs, and plays again with the moon once the menu is back.
TEST_F(CMainMenuStartTest, StartOpensTheStoriesThenTheMenuComesBack) {
    std::vector<int> music_during;
    on_chapter_select_ = [&] { music_during.push_back(sound_main_.countActiveSfx()); };
    chooseStart({});
    EXPECT_THAT(chapter_selects_, ElementsAre(EChapterSelectMode::kStories));
    EXPECT_THAT(music_during, ElementsAre(0));
    EXPECT_THAT(music_after_, ElementsAre(1));
    EXPECT_THAT(drawn_after_, ElementsAre(true));
}

TEST_F(CMainMenuStartTest, ControlOpensTheMissionBrowser) {
    chooseStart({EInputCodeType::DIK_LCONTROL});
    EXPECT_THAT(chapter_selects_, ElementsAre(EChapterSelectMode::kMissionBrowser));
}

TEST_F(CMainMenuStartTest, ControlAndShiftOpenEveryStorysChapters) {
    chooseStart({EInputCodeType::DIK_LCONTROL, EInputCodeType::DIK_LSHIFT});
    EXPECT_THAT(chapter_selects_, ElementsAre(EChapterSelectMode::kChapters));
}

TEST_F(CMainMenuStartTest, ShiftAloneOpensTheStories) {
    chooseStart({EInputCodeType::DIK_LSHIFT});
    EXPECT_THAT(chapter_selects_, ElementsAre(EChapterSelectMode::kStories));
}

// Each is reached from its submenu with one press a frame.
class CMainMenuSubmenuTest
    : public CMainMenuTest,
      public ::testing::WithParamInterface<std::pair<std::vector<EInputCodeType>, std::string>> {};

TEST_P(CMainMenuSubmenuTest, AScreenNotPortedYetQuits) {
    const std::vector<EInputCodeType> &presses = GetParam().first;
    on_frame_ = [&](int frame) {
        if (std::cmp_less_equal(frame, presses.size())) {
            press(presses[static_cast<std::size_t>(frame) - 1]);
        }
    };
    EXPECT_THAT([this] { static_cast<void>(menu_.showMainGameMenu()); },
                ::testing::ThrowsMessage<common::CFatalError>(
                    ::testing::StrEq(GetParam().second + " is not ported yet")));
}

constexpr EInputCodeType kDown = EInputCodeType::DIK_DOWN;
constexpr EInputCodeType kReturn = EInputCodeType::DIK_RETURN;

INSTANTIATE_TEST_SUITE_P(PlayAndMultiplayer, CMainMenuSubmenuTest,
                         ::testing::Values(std::pair{std::vector{kReturn, kReturn},
                                                     std::string("CGame::loadGame")},
                                           std::pair{std::vector{kReturn, kDown, kDown, kReturn},
                                                     std::string("CGame::loadGame")},
                                           std::pair{std::vector{kDown, kReturn, kReturn},
                                                     std::string("core::hostNetworkGame")},
                                           std::pair{std::vector{kDown, kReturn, kDown, kReturn},
                                                     std::string("core::joinNetworkGame")}));

} // namespace
} // namespace nocturne::core
