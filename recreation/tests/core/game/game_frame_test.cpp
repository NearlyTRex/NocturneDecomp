#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/dcamera/demoncamera.h"
#include "core/game/game.h"
#include "core/hero/hero.h"
#include "core/hero/heroplaceholder.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "engine/3d/3d.h"
#include "engine/keys/inputcodetype.h"
#include "engine/special/special.h"
#include "tests/mocks/common/vector3fequal.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/overlayscreen.h"
#include "tests/mocks/core/testhero.h"
#include "tests/mocks/platform/mockrenderer.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <span>
#include <string>

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

} // namespace
} // namespace nocturne::core
