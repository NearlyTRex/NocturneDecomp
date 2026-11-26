#include "common/error/fatalerror.h"
#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/box/boundingbox3d.h"
#include "core/charactr/deathstate.h"
#include "core/dcamera/demoncamera.h"
#include "core/dfont/dfont.h"
#include "core/dtrace/demonraytrace.h"
#include "core/game/game.h"
#include "core/game/irisfade.h"
#include "core/hero/hero.h"
#include "core/hero/heroplaceholder.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "core/skeleton/deformablemodelmanager.h"
#include "engine/3d/3d.h"
#include "engine/console/console.h"
#include "engine/font/bitfont.h"
#include "engine/keys/inputcodetype.h"
#include "engine/package/gamecontent.h"
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
        // As the session loads them, so a frame finds them at the screen's size.
        inventory_assets_.loadAssets();
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

// The pointer is in the middle, inside the border's ring.
TEST_F(CGameFrameDebugTest, TheFrameHasABlackBorderTwoPixelsWide) {
    ON_CALL(raw_input_, getMouseX()).WillByDefault(Return(kWidth / 2));
    ON_CALL(raw_input_, getMouseY()).WillByDefault(Return(kHeight / 2));
    frame();
    std::size_t border = 0;
    std::size_t inside = 0;
    for (int y = 0; y < kHeight; ++y) {
        for (int x = 0; x < kWidth; ++x) {
            const int edge = std::min({x, y, kWidth - 1 - x, kHeight - 1 - y});
            border += edge < 2 && screen_.pixel(x, y) == 0U ? 1U : 0U;
            inside += edge == 2 && screen_.pixel(x, y) == kBackground ? 1U : 0U;
        }
    }
    EXPECT_EQ(border,
              static_cast<std::size_t>((kWidth * kHeight) - ((kWidth - 4) * (kHeight - 4))));
    EXPECT_EQ(inside, static_cast<std::size_t>(((kWidth - 4) * 2) + ((kHeight - 6) * 2)));
}

// The game's banner, centred across and 112 640x480 shares down, in the colour cube's red, while
// the local hero is dead and not before.
TEST_F(CGameFrameDebugTest, ADeadHeroShowsTheGamesBannerHighInTheFrame) {
    ON_CALL(raw_input_, getMouseX()).WillByDefault(Return(kWidth - 1));
    ON_CALL(raw_input_, getMouseY()).WillByDefault(Return(kHeight - 1));
    auto &test_hero = static_cast<CTestHero &>(hero());
    test_hero.death_state = EDeathState::DEATH_STATE_DEAD;
    frame();
    const std::vector<std::uint32_t> shown = pixels();
    test_hero.death_state = EDeathState::DEATH_STATE_DYING;
    frame();
    engine::CBitFont &font = *game_parts_.getFonts().getMediumFont();
    const std::string_view text = "You're dead.  Game over.";
    font.drawText(text, (kWidth - font.getTextWidth(text)) / 2, 112 * kHeight / 480,
                  game_parts_.getTwoD().getColorCubeLookup()[0x7c00], 0);
    EXPECT_EQ(pixels(), shown);
}

// A banner the game places goes there, its insets 640x480 shares of the frame.
TEST_F(CGameFrameDebugTest, AGamePlacesItsBanner) {
    ON_CALL(raw_input_, getMouseX()).WillByDefault(Return(kWidth - 1));
    ON_CALL(raw_input_, getMouseY()).WillByDefault(Return(kHeight - 1));
    common::required(game_parts_.getContent().death_banner).place =
        engine::SHudPlace{.anchor = engine::EHudAnchor::TopLeft, .x = 64, .y = 48};
    static_cast<CTestHero &>(hero()).death_state = EDeathState::DEATH_STATE_DEAD;
    frame();
    const std::vector<std::uint32_t> shown = pixels();
    static_cast<CTestHero &>(hero()).death_state = EDeathState::DEATH_STATE_DYING;
    frame();
    engine::CBitFont &font = *game_parts_.getFonts().getMediumFont();
    const std::string_view text = "You're dead.  Game over.";
    font.drawText(text, 64 * kWidth / 640, 48 * kHeight / 480,
                  game_parts_.getTwoD().getColorCubeLookup()[0x7c00], 0);
    EXPECT_EQ(pixels(), shown);
}

TEST_F(CGameFrameDebugTest, AGameWithoutABannerShowsNoneForTheDead) {
    game_parts_.getContent().death_banner.reset();
    frame();
    const std::vector<std::uint32_t> alive = pixels();
    static_cast<CTestHero &>(hero()).death_state = EDeathState::DEATH_STATE_DEAD;
    frame();
    EXPECT_EQ(pixels(), alive);
}

// The keys help's frames, with the pointer out of the way, and its lines as the original lays
// them out: down from 4 lines and 4 characters in, each a line below the last, and once one is
// within 4 lines of the bottom, the next column a third of the way across from 6 lines down.
class CGameKeysHelpTest : public CGameFrameDebugTest {
protected:
    CGameKeysHelpTest() {
        ON_CALL(raw_input_, getMouseX()).WillByDefault(Return(kWidth - 1));
        ON_CALL(raw_input_, getMouseY()).WillByDefault(Return(kHeight - 1));
    }

    // The help on, then off with the lines drawn in its place; empty lines are gaps.
    [[nodiscard]] std::vector<std::uint32_t>
    drawnInsteadOfTheHelp(std::span<const std::string> lines) {
        game_.show_customizable_keys = false;
        frame();
        engine::CBitFont &font = *game_parts_.getFonts().getThemeFont();
        const int line = font.getCharHeight('X');
        int x = font.getCharWidth('X') * 4;
        int y = line * 4;
        for (const std::string &text : lines) {
            if (text.empty()) {
                y += line;
                continue;
            }
            font.drawText(text, x, y, 7, engine::CBitFont::kNoShadow);
            y += line;
            if (y > kHeight - (line * 4)) {
                y = line * 6;
                x += kWidth / 3;
            }
        }
        return pixels();
    }

    [[nodiscard]] std::vector<std::uint32_t> helpShown() {
        game_.show_customizable_keys = true;
        frame();
        return pixels();
    }

    void givenRows(std::vector<engine::SBindingRowSpec> rows) {
        common::required(game_parts_.getContent().controls).bindings = std::move(rows);
    }

    // The title and the hotkeys, each named by its bindings.
    static constexpr std::array<std::string_view, 10> kHotkeyLines{
        "Quick help",        "",
        "F1 = Toggle help",  "Ctrl+S, F2 = Save game",
        "F3 = Restore game", "F5, Ctrl+M = Toggle mute",
        "F6 = Quick save",   "F9 = Quick load",
        "Esc = Pause game",  ""};
};

// A row's help names it where the game gives one, and Run is Walk while the hero always runs.
TEST_F(CGameKeysHelpTest, ItListsTheHotkeysThenTheGamesRows) {
    givenRows({{.action = "walk", .label = "Forward", .help = {}},
               {.action = "run", .label = "Run", .help = {}},
               {.action = "weapon1", .label = "Select pistol weapons", .help = "Cycle pistols"}});
    game_.always_run = 1;
    const std::vector<std::uint32_t> shown = helpShown();
    std::vector<std::string> lines(kHotkeyLines.begin(), kHotkeyLines.end());
    lines.insert(lines.end(), {"Up = Forward", "LeftShift = Walk", "1 = Cycle pistols"});
    EXPECT_EQ(drawnInsteadOfTheHelp(lines), shown);
}

// Run is Run while the hero walks, and the rows go on in the next column.
TEST_F(CGameKeysHelpTest, ALongListGoesOnInTheNextColumn) {
    givenRows(std::vector<engine::SBindingRowSpec>(
        300, engine::SBindingRowSpec{.action = "run", .label = "Run", .help = {}}));
    const std::vector<std::uint32_t> shown = helpShown();
    std::vector<std::string> lines(kHotkeyLines.begin(), kHotkeyLines.end());
    lines.insert(lines.end(), 300, "LeftShift = Run");
    EXPECT_EQ(drawnInsteadOfTheHelp(lines), shown);
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

    // Where the half-size movie's pixel second down and second across starts, clear of the
    // border.
    static constexpr std::size_t kSecondRowSecondPixel = std::size_t{(kWidth / 2) + 1} * 3;

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
    EXPECT_EQ(first.substr(kSecondRowSecondPixel, 3), "\x12\x34\x56");
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

// Each of the movie's pixels is the mean of the block of the screen's it covers: the second
// pixel down and across, clear of the border, is the mean of the screen's 2x2 block at 2, 2.
TEST_F(CGameMovieTest, APixelIsTheMeanOfItsBlock) {
    arm();
    screen_.fill(kBackground);
    static_cast<std::uint32_t *>(screen_.getScreenRows()[2])[2] = 0xff0000;
    hold(EInputCodeType::DIK_LCONTROL);
    hold(EInputCodeType::DIK_V);
    game_.processFrame(session_);
    const std::string &frame = written_["movie\\noc00000.raw"];
    const std::string pixel = frame.substr(kSecondRowSecondPixel, 3);
    EXPECT_EQ(pixel[0], static_cast<char>(((0x12 * 3) + 0xff) / 4));
    EXPECT_EQ(pixel[1], static_cast<char>((0x34 * 3) / 4));
    EXPECT_EQ(pixel[2], static_cast<char>((0x56 * 3) / 4));
}

// Wider and taller than the screen, each pixel is the one its block starts on: the fifth down
// and across is the screen's at 2, 2, inside the border.
TEST_F(CGameMovieTest, AMovieLargerThanTheScreenRepeatsItsPixels) {
    game_.armMovieRecording({.width = kWidth * 2, .height = kHeight * 2});
    frameWithCtrlV();
    const std::string &frame = written_["movie\\noc00000.raw"];
    ASSERT_EQ(frame.size(), static_cast<std::size_t>(kWidth * kHeight * 12));
    EXPECT_EQ(frame.substr(static_cast<std::size_t>(((4 * kWidth * 2) + 4) * 3), 3),
              "\x12\x34\x56");
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

// The iris over paused frames, the hero the script's focus, the scene camera turned and placed
// so it sees the world, and the pointer in the corner.
class CGameIrisTest : public CGameFrameDebugTest {
protected:
    CGameIrisTest() {
        ON_CALL(raw_input_, getMouseX()).WillByDefault(Return(kWidth - 1));
        ON_CALL(raw_input_, getMouseY()).WillByDefault(Return(kHeight - 1));
        common::CMatrix3x3f turn;
        turn.buildRotationMatrix({.x = 0.3F, .y = 1.1F, .z = -0.4F});
        session_.camera.setRotationMatrix(turn);
        session_.camera.setPosition({.x = 1.0F, .y = 2.0F, .z = 3.0F});
        session_.camera.beginScene(1);
        session_.camera.endScene(1);
        script_.initRuntime();
    }

    // The middle the iris centres on: the hero's box's, taken to the world.
    [[nodiscard]] common::CVector3f heroMiddle() {
        CBoundingBox3D box;
        hero().getBoundingBox(&box);
        common::CVector3f middle{.x = (box.min.x + box.max.x) * 0.5F,
                                 .y = (box.min.y + box.max.y) * 0.5F,
                                 .z = (box.min.z + box.max.z) * 0.5F};
        common::CVector3f world;
        hero().localToWorldPoint(&world, &middle);
        return world;
    }

    void moveHeroTo(const common::CVector3f &position) {
        common::CVector3f moved = position;
        common::CVector3f facing = hero().getOrientation();
        hero().setPositionAndOrientation(&moved, &facing);
    }

    // The hero moved so its middle is where the scene camera shows the middle of that pixel.
    void placeHeroAt(int x, int y) {
        common::CVector3i screen_point{
            .x = (x << 16) + 0x8000, .y = (y << 16) + 0x8000, .z = 0x20000};
        common::CVector3i fixed;
        session_.camera.screenToWorldTransform(&screen_point, &fixed);
        moveHeroTo({});
        const common::CVector3f offset = heroMiddle();
        moveHeroTo({.x = (static_cast<float>(fixed.x) / 256.0F) - offset.x,
                    .y = (static_cast<float>(fixed.y) / 256.0F) - offset.y,
                    .z = (static_cast<float>(fixed.z) / 256.0F) - offset.z});
    }

    // The radius after a frame of delta units: a screen height every 3.2 seconds, its divisor a
    // float, the rest at full precision.
    [[nodiscard]] static float step(float radius, int delta, int sign) {
        const auto divisor = static_cast<float>(31457280.0 / kHeight);
        return static_cast<float>(
            static_cast<long double>(radius) +
            (sign * static_cast<long double>(delta) * 256.0L / static_cast<long double>(divisor)));
    }

    // An iris begun from the middle and opened for half a second.
    void openForHalfASecond() {
        game_.beginFadeIn(nullptr, session_.camera);
        game_.updateFadeTransition();
        game_.slamDT(0.5F);
        game_.updateFadeTransition();
    }

    static constexpr int kMiddleX = kWidth / 2;
    static constexpr int kMiddleY = kHeight / 2;
};

TEST_F(CGameIrisTest, AGameStartsWithNoIris) {
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Idle);
    game_.updateFadeTransition();
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Idle);
    frame();
    EXPECT_EQ(screen_.pixel(kMiddleX, kMiddleY), kBackground);
}

// Black for its one frame, then widening from nothing until it is wider than the screen.
TEST_F(CGameIrisTest, AnIrisOpensFromBlackAcrossTheScreen) {
    game_.beginFadeIn(nullptr, session_.camera);
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Starting);
    frame();
    EXPECT_EQ(screen_.pixel(kMiddleX, kMiddleY), 0U);
    game_.updateFadeTransition();
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Opening);
    frame();
    EXPECT_EQ(screen_.pixel(kMiddleX, kMiddleY), 0U);
    game_.slamDT(kQuarterSecond);
    float radius = 0.0F;
    int frames = 0;
    while (game_.getIrisFade() == EIrisFade::Opening && frames < 100) {
        game_.updateFadeTransition();
        radius = step(radius, game_.getDeltaTimeInt(), 1);
        ++frames;
    }
    EXPECT_GT(radius, static_cast<float>(kWidth));
    EXPECT_LE(step(radius, game_.getDeltaTimeInt(), -1), static_cast<float>(kWidth));
    EXPECT_GT(frames, 1);
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Idle);
}

// BW1's and BW3's hold the screen black for three frames.
TEST_F(CGameIrisTest, TheGameSaysHowManyFramesTheIrisStartsBlack) {
    game_parts_.getContent().iris = engine::SIris{.opens_session = true, .black_frames = 3};
    game_.beginFadeIn(nullptr, session_.camera);
    game_.updateFadeTransition();
    game_.updateFadeTransition();
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Starting);
    game_.updateFadeTransition();
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Opening);
}

// Outside the disc is black, inside left as it was.
TEST_F(CGameIrisTest, AnOpeningIrisBlacksOutsideItsDisc) {
    openForHalfASecond();
    const float radius = step(0.0F, game_.getDeltaTimeInt(), 1);
    ASSERT_GT(radius, 4.0F);
    ASSERT_LT(radius, static_cast<float>(kMiddleY - 4));
    frame();
    const int reach = static_cast<int>(radius);
    EXPECT_EQ(screen_.pixel(kMiddleX, kMiddleY), kBackground);
    EXPECT_EQ(screen_.pixel(kMiddleX + reach - 1, kMiddleY), kBackground);
    EXPECT_EQ(screen_.pixel(kMiddleX + reach + 1, kMiddleY), 0U);
    EXPECT_EQ(screen_.pixel(kMiddleX, kMiddleY - reach - 1), 0U);
    EXPECT_EQ(screen_.pixel(4, 4), 0U);
}

// It began on the focus where the camera shows it, and keeps that centre as the hero moves.
TEST_F(CGameIrisTest, AnOpeningIrisKeepsTheCentreItBeganWith) {
    placeHeroAt(30, 20);
    game_.beginFadeIn(&hero(), session_.camera);
    game_.updateFadeTransition();
    game_.slamDT(1.0F);
    game_.updateFadeTransition();
    placeHeroAt(150, 100);
    frame();
    EXPECT_EQ(screen_.pixel(30, 20), kBackground);
    EXPECT_EQ(screen_.pixel(150, 100), 0U);
}

// From the screen's width down to nothing, black for a frame, then black until another fade.
TEST_F(CGameIrisTest, AClosingIrisNarrowsToBlack) {
    game_.beginFadeOut(nullptr, session_.camera);
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Closing);
    frame();
    EXPECT_EQ(screen_.pixel(4, 4), kBackground);
    game_.slamDT(kQuarterSecond);
    auto radius = static_cast<float>(kWidth);
    int frames = 0;
    while (game_.getIrisFade() == EIrisFade::Closing && frames < 100) {
        game_.updateFadeTransition();
        radius = step(radius, game_.getDeltaTimeInt(), -1);
        ++frames;
    }
    EXPECT_LT(radius, 0.0F);
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Closed);
    frame();
    EXPECT_EQ(screen_.pixel(kMiddleX, kMiddleY), 0U);
    game_.updateFadeTransition();
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Black);
    game_.updateFadeTransition();
    EXPECT_EQ(game_.getIrisFade(), EIrisFade::Black);
    frame();
    EXPECT_EQ(screen_.pixel(kMiddleX, kMiddleY), 0U);
}

// A closing iris follows the script's focus each frame.
TEST_F(CGameIrisTest, AClosingIrisFollowsTheFocus) {
    placeHeroAt(30, 20);
    game_.beginFadeOut(&hero(), session_.camera);
    game_.slamDT(2.0F);
    game_.updateFadeTransition();
    ASSERT_EQ(game_.getIrisFade(), EIrisFade::Closing);
    placeHeroAt(150, 100);
    frame();
    EXPECT_EQ(screen_.pixel(150, 100), kBackground);
    EXPECT_EQ(screen_.pixel(30, 20), 0U);
}

// A focus the camera doesn't show leaves the iris on the screen's middle.
TEST_F(CGameIrisTest, AFocusOffTheScreenLeavesTheMiddle) {
    placeHeroAt(30, 20);
    const common::CVector3f position = hero().getLocation().position;
    common::CVector3f behind{
        .x = -position.x * 50.0F, .y = -position.y * 50.0F, .z = -position.z * 50.0F};
    common::CVector3f facing = hero().getOrientation();
    hero().setPositionAndOrientation(&behind, &facing);
    game_.beginFadeOut(&hero(), session_.camera);
    game_.slamDT(2.0F);
    game_.updateFadeTransition();
    frame();
    EXPECT_EQ(screen_.pixel(kMiddleX, kMiddleY), kBackground);
}

// At 16 bits the disc's outside goes black too, where the original left it.
TEST_F(CGameIrisTest, SixteenBitPixelsAreBlackedToo) {
    openForHalfASecond();
    screen_.fill(kBackground);
    screen_.setBitsPerPixel(16);
    game_.processFrame(session_);
    const auto row = [this](int y) {
        return std::span<const std::uint16_t>(
            static_cast<const std::uint16_t *>(
                screen_.getScreenRows()[static_cast<std::size_t>(y)]),
            static_cast<std::size_t>(kWidth));
    };
    EXPECT_EQ(row(4)[4], 0U);
    EXPECT_EQ(row(kMiddleY)[kMiddleX], kBackground & 0xffffU);
}

} // namespace
} // namespace nocturne::core
