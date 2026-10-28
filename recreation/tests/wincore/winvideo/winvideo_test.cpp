#include "engine/2d/2d.h"
#include "engine/3d/3d.h"
#include "engine/dosio/dosio.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "engine/special/special.h"
#include "engine/texture/currenttexture.h"
#include "tests/mocks/engine/memoryscreen.h"
#include "tests/mocks/platform/memoryfile.h"
#include "tests/mocks/platform/mockclock.h"
#include "tests/mocks/platform/mockfilesystem.h"
#include "tests/mocks/platform/mockmovieplayer.h"
#include "tests/mocks/platform/mockrenderer.h"
#include "tests/mocks/platform/mockwindow.h"
#include "wincore/winrun/winrun.h"
#include "wincore/winvideo/winvideo.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <chrono>
#include <memory>
#include <optional>
#include <string>
#include <type_traits>

namespace nocturne::wincore {
namespace {

using ::testing::_;
using ::testing::InSequence;
using ::testing::NiceMock;
using ::testing::Return;

TEST(WincoreWinvideoFunctions, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&playMovie),
                       bool (*)(const SMovieOwners &, std::string_view, std::string_view)>);
}

constexpr std::string_view kPath = "video\\opening.avi";
constexpr std::string_view kFullPath = "/game/video/opening.avi";

// video\opening.avi on disk, played on a 4x2 16-bit screen.
class CPlayMovieTest : public ::testing::Test {
protected:
    CPlayMovieTest() {
        ON_CALL(clock_, getCounterFrequency).WillByDefault(Return(1000));
        ON_CALL(file_system_, openFile(kPath, platform::EFileMode::Read))
            .WillByDefault([](std::string_view, platform::EFileMode) {
                return std::make_unique<platform::CMemoryFile>("RIFF");
            });
        ON_CALL(file_system_, getFullPath(kPath))
            .WillByDefault(Return(std::optional<std::string>(kFullPath)));
        ON_CALL(movies_, openMovie).WillByDefault(Return(true));
        ON_CALL(movies_, isMoviePlaying).WillByDefault(Return(true));
    }

    bool play() {
        return playMovie(owners_, "video", "opening.avi");
    }

    NiceMock<platform::MockFileSystem> file_system_;
    NiceMock<platform::MockMoviePlayer> movies_;
    NiceMock<platform::MockWindow> window_;
    NiceMock<platform::MockClock> clock_;
    NiceMock<platform::MockRenderer> renderer_;
    CWinRun winrun_{window_, clock_};
    engine::CDosIo dosio_{file_system_};
    engine::CMemoryScreen screen_{4, 2, 16};
    engine::C2d two_d_{dosio_, screen_, winrun_};
    engine::CLight light_;
    engine::CMatrix matrix_{two_d_, light_};
    engine::C3d three_d_{matrix_};
    engine::SCurrentTexture current_texture_;
    engine::CSpecial special_{renderer_, screen_, two_d_, matrix_, three_d_, current_texture_};
    SMovieOwners owners_{.file_system = file_system_,
                         .movies = movies_,
                         .window = window_,
                         .clock = clock_,
                         .winrun = winrun_,
                         .special = special_,
                         .screen = screen_,
                         .two_d = two_d_};
};

TEST_F(CPlayMovieTest, WithoutTheFileNothingHappens) {
    ON_CALL(file_system_, openFile).WillByDefault(::testing::ReturnNull());
    EXPECT_CALL(movies_, openMovie).Times(0);
    EXPECT_FALSE(play());
    EXPECT_EQ(screen_.swaps, 0);
}

TEST_F(CPlayMovieTest, PlaysOnTheScreenUntilTheMovieEnds) {
    screen_.fill(0xffff);
    EXPECT_CALL(movies_, isMoviePlaying)
        .WillOnce(Return(true))
        .WillOnce(Return(true))
        .WillOnce(Return(false));
    {
        const InSequence order;
        EXPECT_CALL(movies_, openMovie(std::filesystem::path(kFullPath), common::SExtent{4, 2},
                                       common::EPixelLayout::Rgb565));
        EXPECT_CALL(movies_, setMoviePlayback(true));
        EXPECT_CALL(movies_, updateMovie);
        EXPECT_CALL(clock_, sleep(std::chrono::duration<double>(0.02)));
        EXPECT_CALL(movies_, updateMovie);
        EXPECT_CALL(clock_, sleep(_));
        EXPECT_CALL(movies_, closeMovie);
    }
    EXPECT_TRUE(play());
    EXPECT_EQ(screen_.pixel(0, 0), 0U);
    EXPECT_EQ(screen_.swaps, 2);
}

TEST_F(CPlayMovieTest, ATypedKeyStopsTheMovieAndIsThenDropped) {
    EXPECT_CALL(movies_, updateMovie).WillOnce([this] { winrun_.enqueueInput('a'); });
    EXPECT_CALL(movies_, closeMovie);
    EXPECT_TRUE(play());
    EXPECT_EQ(winrun_.wasKeyPressed(), 0);
}

TEST_F(CPlayMovieTest, ClosingTheWindowStopsTheMovie) {
    EXPECT_CALL(window_, pollEvent)
        .WillOnce([](platform::SWindowEvent &event) {
            event = {.type = platform::EWindowEventType::Quit};
            return true;
        })
        .WillRepeatedly(Return(false));
    EXPECT_CALL(movies_, updateMovie).Times(0);
    EXPECT_TRUE(play());
}

TEST_F(CPlayMovieTest, AMovieThatWontOpenWarnsAndCountsAsPlayed) {
    ON_CALL(movies_, openMovie).WillByDefault(Return(false));
    EXPECT_CALL(window_, showMessageBox(std::string_view("Unable to open .AVI!"),
                                        std::string_view("Error")));
    EXPECT_CALL(movies_, setMoviePlayback).Times(0);
    EXPECT_CALL(movies_, updateMovie).Times(0);
    EXPECT_TRUE(play());
    EXPECT_EQ(screen_.swaps, 2);
}

TEST_F(CPlayMovieTest, AFileWithNoFullPathWarnsWithoutOpening) {
    ON_CALL(file_system_, getFullPath).WillByDefault(Return(std::nullopt));
    EXPECT_CALL(movies_, openMovie).Times(0);
    EXPECT_CALL(window_, showMessageBox);
    EXPECT_TRUE(play());
}

} // namespace
} // namespace nocturne::wincore
