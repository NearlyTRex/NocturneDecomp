#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcamera/demoncamera.h"
#include "core/dtrace/demonraytrace.h"
#include "core/game/game.h"
#include "core/hero/hero.h"
#include "core/hero/heroplaceholder.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "core/skeleton/deformablemodelmanager.h"
#include "engine/3d/3d.h"
#include "engine/console/console.h"
#include "engine/keys/inputcodetype.h"
#include "engine/special/special.h"
#include "engine/texture/texture.h"
#include "sound/sndmain/sampleinfo.h"
#include "sound/sndmain/sndmain.h"
#include "sound/sndmain/soundmemorystats.h"
#include "tests/mocks/common/pngimage.h"
#include "tests/mocks/common/required.h"
#include "tests/mocks/common/vector3fequal.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/overlayscreen.h"
#include "tests/mocks/core/setfilefixture.h"
#include "tests/mocks/core/testhero.h"
#include "tests/mocks/engine/twodfixture.h"
#include "tests/mocks/platform/mockrenderer.h"
#include "tests/mocks/sound/wavfile.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <algorithm>
#include <array>
#include <cstddef>
#include <cstdint>
#include <format>
#include <iterator>
#include <map>
#include <memory>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using engine::EInputCodeType;
using ::testing::_;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// A paused frame of a session whose one hero stands at the origin, a quarter second since the
// last, with the scene camera's transform taken from an open and closed scene.
class CGameFrameTest : public CMissionFixture {
protected:
    CGameFrameTest() {
        givenSessionAssets();
        auto placeholder = std::make_unique<CHeroPlaceholder>();
        placeholder->setIndex(0);
        placeholder->setLocation({.position = {}, .area_id = 0});
        mission_.addActorToList(std::move(placeholder));
        EXPECT_TRUE(mission_.createHeros(std::make_unique<CTestHero>(actor_)));
        common::CVector3f start;
        common::CVector3f facing{.y = 0.5F};
        hero().setPositionAndOrientation(&start, &facing);
        session_.camera.init(kHeight);
        session_.camera.beginScene(1);
        session_.camera.endScene(1);
        game_.slamDT(kQuarterSecond);
        game_.is_paused = true;
    }

    [[nodiscard]] CHero &hero() {
        return *mission_.getLocalHero();
    }

    void hold(EInputCodeType code) {
        game_parts_.hold(code, true);
    }

    static constexpr float kQuarterSecond = 0.25F;

    ::testing::NiceMock<engine::MockRawInput> &game_input_ = game_parts_.getRawInput();
};

// The rest of the frame waits for the game's processing.
TEST_F(CGameFrameTest, AnUnpausedFrameProcessesTheGame) {
    game_.is_paused = false;
    EXPECT_THAT([this] { game_.processFrame(session_); },
                ThrowsMessage<common::CFatalError>(StrEq("CGame::process is not ported yet")));
}

// Q raises the hero 8 units a second, its time the last frame's; the frame then measures its own.
TEST_F(CGameFrameTest, APausedFrameFliesTheHeroWithTheSlewKeys) {
    hold(EInputCodeType::DIK_Q);
    hold(EInputCodeType::DIK_NUMPAD3);
    game_.processFrame(session_);
    EXPECT_EQ(hero().getLocation().position.y, 2.0F);
    EXPECT_EQ(hero().getOrientation().y, 0.5F + static_cast<float>(0.25 * 3.1415926535));
    EXPECT_EQ(game_.getDeltaTimeFloat(), 0.0F);
}

// The click puts the hero where the camera maps the pointer and its depth, still facing as the
// slew left it, and lets go of the button.
TEST_F(CGameFrameTest, APausedClickPlacesTheHeroUnderThePointer) {
    constexpr int kX = 40;
    constexpr int kY = 30;
    screen_.getZBufferRows()[kY][kX] = 0x1000;
    ON_CALL(game_input_, getMouseButtonFlags()).WillByDefault(Return(1));
    ON_CALL(game_input_, getMouseX()).WillByDefault(Return(kX));
    ON_CALL(game_input_, getMouseY()).WillByDefault(Return(kY));
    EXPECT_CALL(game_input_, releaseLeftMouseButton());
    game_.processFrame(session_);
    common::CVector3i screen_point;
    session_.camera.screenToWorldCoord(kX, kY, &screen_point);
    common::CVector3i world;
    session_.camera.screenToWorldTransform(&screen_point, &world);
    EXPECT_TRUE(common::isSameVector(hero().getLocation().position,
                                     {.x = static_cast<float>(world.x) / 256.0F,
                                      .y = static_cast<float>(world.y) / 256.0F,
                                      .z = static_cast<float>(world.z) / 256.0F}));
    EXPECT_EQ(hero().getOrientation().y, 0.5F);
}

// The right button alone places nothing.
TEST_F(CGameFrameTest, OnlyTheLeftButtonPlacesTheHero) {
    ON_CALL(game_input_, getMouseButtonFlags()).WillByDefault(Return(2));
    EXPECT_CALL(game_input_, releaseLeftMouseButton()).Times(0);
    game_.processFrame(session_);
    EXPECT_TRUE(common::isSameVector(hero().getLocation().position, {}));
}

// The scene's alpha and the text's are both opaque after a frame, whatever came before.
TEST_F(CGameFrameTest, TheFrameDrawsOpaque) {
    static_cast<void>(three_d_.setRenderAlpha(0x8000));
    static_cast<void>(game_parts_.getThreeD().setRenderAlpha(0x8000));
    game_.processFrame(session_);
    EXPECT_EQ(three_d_.getCurrentAlphaValue(), 0xff);
    EXPECT_EQ(game_parts_.getThreeD().getCurrentAlphaValue(), 0xff);
}

// The message line and the pointer go over the scene.
TEST_F(CGameFrameTest, ThePausedFrameDrawsTheOverlayAndThePointer) {
    drawGameOnto(game_parts_, screen_, [this](const std::string &name, const std::string &text) {
        givenFile(name, text);
    });
    const auto drawn = [this] {
        std::size_t count = 0;
        for (int y = 0; y < screen_.getWindowHeight(); ++y) {
            for (int x = 0; x < screen_.getWindowWidth(); ++x) {
                count += screen_.pixel(x, y) != kBackground ? 1U : 0U;
            }
        }
        return count;
    };
    ON_CALL(raw_input_, getMouseX()).WillByDefault(Return(kWidth / 2));
    ON_CALL(raw_input_, getMouseY()).WillByDefault(Return(kHeight / 4));
    screen_.fill(kBackground);
    game_.processFrame(session_);
    const std::size_t pointer = drawn();
    EXPECT_GT(pointer, 0U);
    EXPECT_NE(screen_.pixel(kWidth / 2, kHeight / 4), kBackground);
    game_.displayMessage("Paused", 10.0F);
    screen_.fill(kBackground);
    game_.processFrame(session_);
    EXPECT_GT(drawn(), pointer);
}

// With the hardware renderer, the frame is drawn into its locked screen.
TEST_F(CGameFrameTest, TheHardwareRenderersScreenIsOpenedForTheFrame) {
    engine::CSpecial &special = game_parts_.getSpecial();
    platform::MockRenderer &renderer = game_parts_.getRenderer();
    engine::SColorChannels channels;
    std::array<std::uint16_t, 256> colors16{};
    ON_CALL(game_parts_.getScreen(), getColorChannels())
        .WillByDefault(::testing::ReturnRef(channels));
    ON_CALL(game_parts_.getScreen(), getColorTable16())
        .WillByDefault(Return(std::span<std::uint16_t, 256>(colors16)));
    ON_CALL(renderer, init(_)).WillByDefault(Return(1));
    ON_CALL(renderer, setVideoMode2(_, _, _, _)).WillByDefault(Return(1));
    ON_CALL(renderer, lockFrame()).WillByDefault(Return(1));
    special.setUseDirect3D(true);
    ASSERT_EQ(special.setResolutionAndColorTable(0, 0, 32), 1);
    ASSERT_TRUE(special.getUseExternalRenderer());
    const ::testing::InSequence order;
    EXPECT_CALL(game_parts_.getScreen(), openScreenDevice());
    EXPECT_CALL(renderer, lockFrame());
    EXPECT_CALL(renderer, unlockFrame());
    EXPECT_CALL(game_parts_.getScreen(), closeScreenDevice());
    game_.processFrame(session_);
}

TEST_F(CGameFrameTest, TheSoftwareFrameLeavesTheScreenDeviceAlone) {
    EXPECT_CALL(game_parts_.getScreen(), openScreenDevice()).Times(0);
    EXPECT_CALL(game_parts_.getScreen(), closeScreenDevice()).Times(0);
    game_.processFrame(session_);
}

// The game's frames drawn onto the screen, and what the screenshots write kept by name.
class CGameFrameDebugTest : public CGameFrameTest {
protected:
    CGameFrameDebugTest() {
        drawGameOnto(
            game_parts_, screen_,
            [this](const std::string &name, const std::string &text) { givenFile(name, text); });
        ON_CALL(file_system_, openFile(_, platform::EFileMode::Write))
            .WillByDefault([this](std::string_view name, platform::EFileMode) {
                return std::make_unique<engine::CRecordingFile>(written_[std::string(name)]);
            });
    }

    // A frame on a cleared screen.
    void frame() {
        screen_.fill(kBackground);
        game_.processFrame(session_);
    }

    // A frame with the key held through it.
    void frameWith(EInputCodeType code) {
        hold(code);
        frame();
        game_parts_.hold(code, false);
    }

    [[nodiscard]] std::vector<std::uint32_t> pixels() const {
        std::vector<std::uint32_t> all;
        for (int y = 0; y < kHeight; ++y) {
            for (int x = 0; x < kWidth; ++x) {
                all.push_back(screen_.pixel(x, y));
            }
        }
        return all;
    }

    [[nodiscard]] std::size_t countDrawn() const {
        std::size_t count = 0;
        for (int y = 0; y < screen_.getWindowHeight(); ++y) {
            for (int x = 0; x < screen_.getWindowWidth(); ++x) {
                count += screen_.pixel(x, y) != kBackground ? 1U : 0U;
            }
        }
        return count;
    }

    [[nodiscard]] std::optional<common::SPngImage> screenshot(const std::string &name) const {
        const auto found = written_.find(name);
        if (found == written_.end()) {
            return std::nullopt;
        }
        const std::vector<std::uint8_t> bytes(found->second.begin(), found->second.end());
        return common::readPng(bytes);
    }

    std::map<std::string, std::string> written_;
};

// The message and the pointer are drawn after it, so the picture is the scene alone. Any player
// can take one; the original needed developer mode or SPOOKHOUSE.
TEST_F(CGameFrameDebugTest, F4SavesTheSceneAsNumberedPngs) {
    game_.displayMessage("Paused", 10.0F);
    frameWith(EInputCodeType::DIK_F4);
    const std::optional<common::SPngImage> first = screenshot("demon1.png");
    ASSERT_TRUE(first.has_value());
    EXPECT_EQ(first->width, kWidth);
    EXPECT_EQ(first->height, kHeight);
    EXPECT_EQ(first->rgb.size(), static_cast<std::size_t>(kWidth * kHeight * 3));
    for (int y = 0; y < kHeight; ++y) {
        for (int x = 0; x < kWidth; ++x) {
            ASSERT_EQ(first->pixel(x, y), kBackground) << x << ", " << y;
        }
    }
    frameWith(EInputCodeType::DIK_F4);
    EXPECT_TRUE(screenshot("demon2.png").has_value());
}

TEST_F(CGameFrameDebugTest, AFrameWithoutF4SavesNothing) {
    EXPECT_CALL(file_system_, openFile(_, platform::EFileMode::Write)).Times(0);
    frame();
}

TEST_F(CGameFrameDebugTest, TheConsoleIsDrawnOverTheFrameWhileItIsOn) {
    console_.printf("Nocturne\n");
    frame();
    const std::size_t without = countDrawn();
    game_.console_enabled = true;
    frame();
    EXPECT_GT(countDrawn(), without);
    EXPECT_EQ(console_.getScale(), 1);
}

TEST_F(CGameFrameDebugTest, TheWheelScrollsTheConsoleBack) {
    game_.console_enabled = true;
    for (int line = 0; line < 100; ++line) {
        console_.printf("line\n");
    }
    frame();
    const int newest = console_.getViewTop();
    EXPECT_CALL(game_input_, takeMouseWheelNotches()).WillOnce(Return(1));
    frame();
    EXPECT_EQ(console_.getViewTop(), newest - engine::CConsole::kWheelLines);
}

// The camera debug's frames: the clock moves on by the delta units given each frame, and the
// pointer sits between the top lines and the bottom ones.
class CGameCameraDebugTest : public CGameFrameDebugTest {
protected:
    CGameCameraDebugTest() {
        ON_CALL(game_clock_, getTime()).WillByDefault([this] {
            ticks_ += step_ * kTicksPerDeltaUnit;
            return ticks_;
        });
        ON_CALL(raw_input_, getMouseX()).WillByDefault(Return(kWidth / 2));
        ON_CALL(raw_input_, getMouseY()).WillByDefault(Return(kPointerY));
        game_.camera_debug = true;
    }

    // The screen a frame with the camera debug on left is the one a frame with it off leaves,
    // with these lines, at these heights, drawn over it.
    void expectLines(const std::vector<std::pair<std::string, int>> &lines) {
        frame();
        const std::vector<std::uint32_t> on = pixels();
        game_.camera_debug = false;
        frame();
        for (const auto &[text, y] : lines) {
            game_parts_.getTwoD().drawText(text, 0, y);
        }
        EXPECT_EQ(pixels(), on);
    }

    // The memory lines as the stats give them.
    [[nodiscard]] std::vector<std::pair<std::string, int>> memoryLines() {
        const sound::SSoundMemoryStats stats = game_parts_.getSoundMain().getSoundMemoryStats();
        return {{std::format("SFX: 0 Samples: Active: 0/0.0k Avail: 0/0.0k Total alloc: 0.0k "
                             "Free: {:.1f}k",
                             static_cast<double>(stats.available_memory) / 1024.0),
                 kHeight - 0x42},
                {textures_.getTextureCacheStats(), kHeight - 0x37},
                {deformable_models_.getMemoryStats(), kHeight - 0x2c}};
    }

    static constexpr int kTicksPerDeltaUnit = 18;
    // An eighth of a second's delta units.
    static constexpr int kEighthSecond = 0x2000;
    static constexpr int kPointerY = 40;

    int ticks_ = 0;
    int step_ = kEighthSecond;
};

// The hero stands at the origin turned half a radian about y; no camera is selected yet.
TEST_F(CGameCameraDebugTest, ItsLinesAreTheCameraFrameRateHeroSlewAndMemory) {
    std::vector<std::pair<std::string, int>> lines{
        {std::format("Camera: \"{}\" Group -1", session_.camera.getCameraName()), kHeight - 0x16},
        {"FR: 8.000000, AVG: 8.000000, PC: 0", kHeight - 0x0b},
        {"Hero : 0.00,0.00,0.00 xyz and 0.00,0.00,28.65 pbh", 0},
        {"Slew : On, Virtual Director : Off", 0x0b}};
    game_.game_active = false;
    std::ranges::copy(memoryLines(), std::back_inserter(lines));
    expectLines(lines);
}

// The average is over the frames since it was turned on; turning it off starts it again.
TEST_F(CGameCameraDebugTest, TheAverageFrameRateIsOverTheFramesSinceItWasOn) {
    frame();
    step_ = 2 * kEighthSecond;
    std::vector<std::pair<std::string, int>> lines{
        {std::format("Camera: \"{}\" Group -1", session_.camera.getCameraName()), kHeight - 0x16},
        {std::format("FR: 4.000000, AVG: {:f}, PC: 0", 2.0 / 0.375), kHeight - 0x0b},
        {"Hero : 0.00,0.00,0.00 xyz and 0.00,0.00,28.65 pbh", 0},
        {"Slew : On, Virtual Director : On", 0x0b}};
    std::ranges::copy(memoryLines(), std::back_inserter(lines));
    expectLines(lines);
    game_.camera_debug = true;
    lines[1].first = "FR: 4.000000, AVG: 4.000000, PC: 0";
    expectLines(lines);
}

// The set's selected camera names its group.
TEST_F(CGameCameraDebugTest, TheSelectedCamerasGroupIsShown) {
    givenFile("models\\one.set",
              SSetFile{.cameras = "1\n" + cameraText("a"), .pvs = "1\n\t0\n"}.text());
    givenFile("data\\pier.geo", geoFile(CDemonRaytrace::kGeoFileFormatVersion,
                                        {.x = 1, .y = 1, .z = 1}, {SGeoCube{}}));
    set_.load("one.set");
    set_.setCameraView(0);
    set_.getCameras()[0].setCameraGroup(7);
    std::vector<std::pair<std::string, int>> lines{
        {std::format("Camera: \"{}\" Group 7", session_.camera.getCameraName()), kHeight - 0x16},
        {"FR: 8.000000, AVG: 8.000000, PC: 0", kHeight - 0x0b},
        {"Hero : 0.00,0.00,0.00 xyz and 0.00,0.00,28.65 pbh", 0},
        {"Slew : On, Virtual Director : On", 0x0b}};
    std::ranges::copy(memoryLines(), std::back_inserter(lines));
    expectLines(lines);
}

// The frame's count of triangles starts from none.
TEST_F(CGameFrameDebugTest, EachFramesTriangleCountStartsFromNone) {
    game_parts_.getSpecial().addRenderedTriangles(12);
    frame();
    EXPECT_EQ(game_parts_.getSpecial().getRenderedTriangleCount(), 0);
}

// Each playing effect's name, a line apart down from 0x37; nothing while none plays.
TEST_F(CGameFrameDebugTest, TheSoundDebugListsWhatIsPlaying) {
    ON_CALL(raw_input_, getMouseX()).WillByDefault(Return(kWidth - 1));
    ON_CALL(raw_input_, getMouseY()).WillByDefault(Return(kHeight - 1));
    game_.sound_debug = true;
    frame();
    const std::vector<std::uint32_t> silent = pixels();
    game_.sound_debug = false;
    frame();
    EXPECT_EQ(pixels(), silent);

    ON_CALL(game_parts_.getAudioDevice(), open).WillByDefault(Return(true));
    sound::CSndMain &sound_main = game_parts_.getSoundMain();
    sound_main.resetSoundSystemDefaults();
    sound_main.initializeSoundDevice();
    ASSERT_TRUE(sound_main.enableSoundSystem());
    const std::vector<std::byte> samples(4000, std::byte{0x40});
    givenFile("sound\\tone.wav", sound::makeWav(samples));
    givenFile("sound\\click.wav", sound::makeWav(samples));
    const std::uint32_t tone = sound_main.startSfx("tone.wav");
    const std::uint32_t click = sound_main.startSfx("click.wav");
    ASSERT_NE(tone, 0U);
    ASSERT_NE(click, 0U);
    game_.sound_debug = true;
    frame();
    const std::vector<std::uint32_t> playing = pixels();
    game_.sound_debug = false;
    frame();
    std::optional<sound::CSampleInfo> tone_info = sound_main.getSfxSampleInfo(tone);
    std::optional<sound::CSampleInfo> click_info = sound_main.getSfxSampleInfo(click);
    game_parts_.getTwoD().drawText(common::required(tone_info, "tone's info").name, 0, 0x37);
    game_parts_.getTwoD().drawText(common::required(click_info, "click's info").name, 0,
                                   0x37 + 0x0b);
    EXPECT_EQ(pixels(), playing);
}

TEST_F(CGameFrameDebugTest, TheEditorsMemoryLineIsTheHeapsAccount) {
    ON_CALL(raw_input_, getMouseX()).WillByDefault(Return(kWidth - 1));
    ON_CALL(raw_input_, getMouseY()).WillByDefault(Return(kHeight / 2));
    ON_CALL(heap_, describe()).WillByDefault(Return("Used: 1.0k Free: 2.0k Blocks: 3"));
    game_.editor_tools_enabled = true;
    frame();
    const std::vector<std::uint32_t> shown = pixels();
    game_.editor_tools_enabled = false;
    frame();
    game_parts_.getTwoD().drawText("Used: 1.0k Free: 2.0k Blocks: 3", 0, kHeight - 0x42);
    EXPECT_EQ(pixels(), shown);
}

// A movie of the screen, half its size, armed but not yet recording.
class CGameMovieTest : public CGameFrameDebugTest {
protected:
    CGameMovieTest() {
        ON_CALL(raw_input_, getMouseX()).WillByDefault(Return(kWidth - 1));
        ON_CALL(raw_input_, getMouseY()).WillByDefault(Return(kHeight - 1));
    }

    void arm(int max_frames = 0, float frames_per_second = 30.0F) {
        game_.armMovieRecording({.frames_per_second = frames_per_second,
                                 .max_frames = max_frames,
                                 .width = kWidth / 2,
                                 .height = kHeight / 2});
    }

    // A frame with Ctrl+V pressed through it.
    void frameWithCtrlV() {
        hold(EInputCodeType::DIK_LCONTROL);
        frameWith(EInputCodeType::DIK_V);
        game_parts_.hold(EInputCodeType::DIK_LCONTROL, false);
    }

    [[nodiscard]] bool wrote(int frame) const {
        return written_.contains(std::format("movie\\noc{:05d}.raw", frame));
    }
};

TEST_F(CGameMovieTest, CtrlVDoesNothingUntilAMovieIsArmed) {
    EXPECT_CALL(file_system_, openFile(_, platform::EFileMode::Write)).Times(0);
    frameWithCtrlV();
    EXPECT_FALSE(game_.isMovieRecording());
}

// Each frame from the first, the screen averaged to the movie's size, then named at the top left.
TEST_F(CGameMovieTest, CtrlVStartsAndStopsTheMovieAFrameAFile) {
    arm();
    frame();
    EXPECT_FALSE(wrote(0));
    frameWithCtrlV();
    EXPECT_TRUE(game_.isMovieRecording());
    const std::string &first = written_["movie\\noc00000.raw"];
    ASSERT_EQ(first.size(), static_cast<std::size_t>((kWidth / 2) * (kHeight / 2) * 3));
    EXPECT_EQ(first.substr(0, 3), "\x12\x34\x56");
    frame();
    EXPECT_TRUE(wrote(1));
    frameWithCtrlV();
    EXPECT_FALSE(game_.isMovieRecording());
    EXPECT_FALSE(wrote(2));
    // Started again, it begins at the first frame.
    frameWithCtrlV();
    EXPECT_EQ(written_.size(), 2U);
}

TEST_F(CGameMovieTest, TheFileItWroteIsNamedOverTheFrame) {
    arm();
    frameWithCtrlV();
    frame();
    const std::vector<std::uint32_t> recording = pixels();
    game_.armMovieRecording({.width = 1, .height = 1});
    frame();
    game_parts_.getTwoD().drawText("Movie recording active: movie\\noc00001.raw", 0, 0);
    EXPECT_EQ(pixels(), recording);
}

// Each of the movie's pixels is the mean of the block of the screen's it covers.
TEST_F(CGameMovieTest, APixelIsTheMeanOfItsBlock) {
    game_.armMovieRecording({.width = 1, .height = 1});
    screen_.fill(kBackground);
    static_cast<std::uint32_t *>(screen_.getScreenRows()[0])[0] = 0xff0000;
    hold(EInputCodeType::DIK_LCONTROL);
    hold(EInputCodeType::DIK_V);
    game_.processFrame(session_);
    const std::string &frame = written_["movie\\noc00000.raw"];
    ASSERT_EQ(frame.size(), 3U);
    const auto mean = [](int sum) { return static_cast<char>(sum / (kWidth * kHeight)); };
    EXPECT_EQ(frame[0], mean((0x12 * ((kWidth * kHeight) - 1)) + 0xff));
    EXPECT_EQ(frame[1], mean(0x34 * ((kWidth * kHeight) - 1)));
    EXPECT_EQ(frame[2], mean(0x56 * ((kWidth * kHeight) - 1)));
}

// Wider and taller than the screen, each pixel is the one its block starts on.
TEST_F(CGameMovieTest, AMovieLargerThanTheScreenRepeatsItsPixels) {
    game_.armMovieRecording({.width = kWidth * 2, .height = kHeight * 2});
    frameWithCtrlV();
    const std::string &frame = written_["movie\\noc00000.raw"];
    ASSERT_EQ(frame.size(), static_cast<std::size_t>(kWidth * kHeight * 12));
    EXPECT_EQ(frame.substr(frame.size() - 3), "\x12\x34\x56");
}

TEST_F(CGameMovieTest, TheMovieStopsAtItsFrameLimit) {
    arm(2);
    frameWithCtrlV();
    frame();
    EXPECT_TRUE(game_.isMovieRecording());
    frame();
    EXPECT_FALSE(game_.isMovieRecording());
    EXPECT_FALSE(wrote(2));
}

// A frame whose file won't open is skipped, its number kept for the next.
TEST_F(CGameMovieTest, AFrameThatCantBeWrittenIsTriedAgain) {
    arm();
    EXPECT_CALL(file_system_, openFile(_, platform::EFileMode::Write))
        .WillOnce([](std::string_view, platform::EFileMode) { return nullptr; })
        .WillRepeatedly([this](std::string_view name, platform::EFileMode) {
            return std::make_unique<engine::CRecordingFile>(written_[std::string(name)]);
        });
    frameWithCtrlV();
    EXPECT_TRUE(written_.empty());
    frame();
    EXPECT_TRUE(wrote(0));
}

// Each frame while recording is a frame of the movie's, the clock aside: 65536 / 24 scaled by
// a half, cut to 1365.
TEST_F(CGameMovieTest, EachFrameIsOneOfTheMoviesWhileItRecords) {
    arm(0, 24.0F);
    game_.time_scale_factor = 0.5F;
    frameWithCtrlV();
    frame();
    EXPECT_EQ(game_.getDeltaTimeInt(), 1365);
    frameWithCtrlV();
    frame();
    EXPECT_NE(game_.getDeltaTimeInt(), 1365);
}

TEST_F(CGameFrameDebugTest, TheWheelIsLeftAloneWhileTheConsoleIsOff) {
    EXPECT_CALL(game_input_, takeMouseWheelNotches()).Times(0);
    frame();
}

} // namespace
} // namespace nocturne::core
