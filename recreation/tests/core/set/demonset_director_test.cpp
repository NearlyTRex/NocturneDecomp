#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "core/barrier/barrier.h"
#include "core/game/game.h"
#include "core/location.h"
#include "core/set/demonset.h"
#include "core/setutil/3dscamera.h"
#include "core/xform/xform.h"
#include "engine/drender/demonrenderer.h"
#include "tests/mocks/core/geofile.h"
#include "tests/mocks/core/setfilefixture.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/core/testfieldsarchive.h"
#include "tests/mocks/engine/demonrendererfixture.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <format>
#include <span>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr std::string_view kSceneNotPorted = "CDemonCamera::saveZBufferScanlines is not ported yet";

// An unturned camera at the position, with its box.
std::string cameraAt(std::string_view name, std::string_view position, std::string_view box) {
    return std::format("label\n{}\npos\n{}\norient\n0,0,0\nfov\n30\nvmat\n1,0,0\n0,1,0\n0,0,1\n1\n"
                       "box\n{}\nreverb\n7\n",
                       name, position, box);
}

constexpr std::string_view kWideBox = "-50,-50,-50\n50,50,50";
// What cameras 3 and 1.2 in front of the barrier's middle score.
constexpr float kCloseScore = 146.625F;
constexpr float kNearScore = 11.140625F;

// A set of the cameras, none in a virtual director box, a 2 by 2 by 2 barrier at the origin to
// show, so of radius 4.15, and the game's frame time to set.
class CDemonSetDirectorTest : public engine::CDemonRendererFixture {
protected:
    CDemonSetDirectorTest() {
        CTestFieldsArchive archive(focus_, CBarrier::kType, 1, "2,2,2\n");
        focus_.archive(archive.get());
        focus_.setLocation({.position = {}, .area_id = 0});
        set_parts_.camera->init(kFrameHeight);
        frame_rows_.fill(screen_row_.data());
        depth_rows_.fill(depth_row_.data());
        ON_CALL(screen_, getScreenRows()).WillByDefault(Return(std::span<void *>(frame_rows_)));
        ON_CALL(screen_, getZBufferRows())
            .WillByDefault(Return(std::span<std::uint32_t *>(depth_rows_)));
    }

    // The scene camera's frame, 64 by 48.
    static constexpr int kFrameHeight = 48;
    std::array<void *, kFrameHeight> frame_rows_{};
    std::array<std::uint32_t, 64> depth_row_{};
    std::array<std::uint32_t *, kFrameHeight> depth_rows_{};

    // With one cube of geometry, which each camera's saved PVS names, so a camera shown draws no
    // more of it.
    void load(const SSetFile &file, const SGeoCube &cube = {}) {
        givenFile("models\\test.set", file.text());
        givenFile("data\\pier.geo",
                  geoFile(CDemonRaytrace::kGeoFileFormatVersion, {.x = 1, .y = 1, .z = 1}, {cube}));
        set_.load("test.set");
    }

    // data\pier.zth, the thumbs of the cameras, each depth's bytes all the byte given.
    void givenThumbs(int cameras, char byte) {
        givenFile("data\\pier.zth",
                  std::string(static_cast<std::size_t>(cameras) * CDemonSet::kThumbWidth *
                                  CDemonSet::kThumbHeight * 4,
                              byte));
    }

    void givenCameras(const std::string &cameras, int count) {
        std::string pvs;
        for (int i = 0; i < count; ++i) {
            pvs += "1\n\t0\n";
        }
        load({.cameras = std::to_string(count) + "\n" + cameras, .pvs = pvs});
        for (C3DSCamera &camera : set_.getCameras()) {
            camera.setVdirZone(-1);
        }
    }

    // One in another area, one disabled, one too far and one whose view misses the barrier.
    void givenUnseeingCameras() {
        givenCameras(cameraAt("other", "0,0,-10", kWideBox) + cameraAt("off", "0,0,-10", kWideBox) +
                         cameraAt("far", "300,0,0", kWideBox) +
                         cameraAt("away", "0,0,0", "10,10,10\n20,20,20"),
                     4);
        set_.getCameras()[0].setVdirZone(5);
        set_.getCameras()[1].setEnabled(false);
    }

    // The game's frame time, in 65536ths of a second.
    void givenFrameTime(int units) {
        ON_CALL(set_parts_.classes.getClock(), getTime())
            .WillByDefault(Return(clock_ + (units * 18)));
        clock_ += units * 18;
        set_parts_.classes.getGame().updateDT();
    }

    void expectSwitch(int force_evaluation_mode) {
        const auto evaluate = [this, force_evaluation_mode] {
            static_cast<void>(set_.evaluateVirtualDirector(&focus_, force_evaluation_mode));
        };
        EXPECT_THAT(evaluate, ThrowsMessage<common::CFatalError>(StrEq(kSceneNotPorted)));
        closeTheScene();
    }

    // The first camera, chosen with no actor to show.
    void chooseTheFirstCamera() {
        EXPECT_THAT([this] { static_cast<void>(set_.evaluateVirtualDirector(nullptr, 0)); },
                    ThrowsMessage<common::CFatalError>(StrEq(kSceneNotPorted)));
        closeTheScene();
    }

    // What the rest of setCameraView would close once the camera's background is drawn.
    void closeTheScene() const {
        set_parts_.camera->endBackgroundScene(0);
        set_parts_.camera->endScene(1);
    }

    CSetParts set_parts_{dosio_};
    // Clipping as the game does, so faces partly out of view are drawn.
    engine::CDemonRenderer clipping_renderer_{
        matrix_, light_,   two_d_,   three_d_,  vertex_buffer_, special_,
        prim_,   zraster_, texture_, textures_, screen_,        &transformAndClipGeometry};
    CDemonSet set_{
        set_parts_.owners(clipping_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
    CBarrier focus_;
    int clock_ = 0;
};

// Its hold and the camera before it start; then, with one chosen, nothing changes.
TEST_F(CDemonSetDirectorTest, WithNoActorTheFirstCameraIsShown) {
    givenUnseeingCameras();
    chooseTheFirstCamera();
    EXPECT_EQ(set_.getSelectedCameraIndex(), 0);
    EXPECT_EQ(set_.getPreviousBestCameraIndex(), -1);
    EXPECT_EQ(set_.getPreviousBestCameraTimer(), 3.0F);
    EXPECT_EQ(set_.evaluateVirtualDirector(nullptr, 0), 1);
}

// A camera saved without a PVS keeps the cubes its view reached, here the one cube.
TEST_F(CDemonSetDirectorTest, ACameraWithoutAPVSKeepsTheCubesItsViewReaches) {
    SGeoCube cube;
    cube.vertex_count = 3;
    cube.vertices = {{}, {}, {}};
    cube.triangle_count = 1;
    cube.triangles.resize(1);
    load({.cameras = "1\n" + cameraAt("first", "4,8,-10", kWideBox), .pvs = "0\n"}, cube);
    set_.getCameras()[0].setVdirZone(-1);
    chooseTheFirstCamera();
    EXPECT_THAT(set_.getCameras()[0].getPVSList(), ElementsAre(0));
}

TEST_F(CDemonSetDirectorTest, AnIndexBeyondTheCamerasIsFatal) {
    givenCameras("", 0);
    EXPECT_THAT(
        [this] { static_cast<void>(set_.evaluateVirtualDirector(nullptr, 0)); },
        ThrowsMessage<common::CFatalError>(StrEq("CDemonSet::setCameraView - invalid index: 0")));
}

TEST_F(CDemonSetDirectorTest, WithNoCamerasNothingIsShown) {
    givenCameras("", 0);
    EXPECT_EQ(set_.evaluateVirtualDirector(&focus_, 1), 0);
    EXPECT_EQ(set_.getSelectedCameraIndex(), -1);
}

// Another area's camera scores far below the rest, which score 0; the first of those is chosen,
// the barrier being in no area.
TEST_F(CDemonSetDirectorTest, WithNoneChosenEveryCameraIsScoredAndTheBestShown) {
    givenUnseeingCameras();
    expectSwitch(0);
    EXPECT_THAT(set_.getCameraScores(), ElementsAre(-99999.9F, 0.0F, 0.0F, 0.0F));
    EXPECT_EQ(set_.getSelectedCameraIndex(), 1);
    EXPECT_TRUE(set_.wasLastSwitchAreaInvalid());
}

// Ten back from the barrier, its three faces towards the camera cover 132 of the thumb's pixels,
// none behind the thumb's depths of 0.
TEST_F(CDemonSetDirectorTest, ACameraScoresThePixelsOfTheActorItSees) {
    givenCameras(cameraAt("sees", "0,0,-10", kWideBox), 1);
    expectSwitch(1);
    EXPECT_THAT(set_.getCameraScores(), ElementsAre(132.0F));
    EXPECT_EQ(set_.getSelectedCameraIndex(), 0);
}

// Depths nearer than all of the barrier's hide it.
TEST_F(CDemonSetDirectorTest, AnActorBehindTheThumbsDepthsIsNotSeen) {
    givenThumbs(1, '\xff');
    givenCameras(cameraAt("sees", "0,0,-10", kWideBox), 1);
    expectSwitch(1);
    EXPECT_THAT(set_.getCameraScores(), ElementsAre(0.0F));
}

// Behind the camera every corner is past the near side.
TEST_F(CDemonSetDirectorTest, AnActorBehindTheCameraIsNotSeen) {
    givenCameras(cameraAt("behind", "0,0,10", kWideBox), 1);
    expectSwitch(1);
    EXPECT_THAT(set_.getCameraScores(), ElementsAre(0.0F));
}

// Up close, corners past a side halve the count each; nearer, those behind the camera take it to
// a sixteenth each; and from inside the box no face is seen.
TEST_F(CDemonSetDirectorTest, CornersOutOfViewCutTheScore) {
    givenCameras(cameraAt("close", "0,1,-3", kWideBox) + cameraAt("near", "0,1,-1.2", kWideBox) +
                     cameraAt("inside", "0,1,0", kWideBox),
                 3);
    expectSwitch(1);
    EXPECT_THAT(set_.getCameraScores(), ElementsAre(kCloseScore, kNearScore, 0.0F));
}

// Unforced, the camera shown counts three times over and the one shown before it a fifth, and a
// better camera that sees the actor is switched to.
TEST_F(CDemonSetDirectorTest, UnforcedTheShownCameraIsFavouredAndABetterOneTaken) {
    givenCameras(cameraAt("blind", "0,0,10", kWideBox) + cameraAt("sees", "0,0,-10", kWideBox) +
                     cameraAt("also", "0,0,-10", kWideBox),
                 3);
    chooseTheFirstCamera();
    expectSwitch(0);
    EXPECT_EQ(set_.getSelectedCameraIndex(), 1);
    EXPECT_EQ(set_.getPreviousBestCameraIndex(), 0);
    set_.getCameras()[0].setVdirZone(5);
    EXPECT_EQ(set_.evaluateVirtualDirector(&focus_, 0), 0);
    EXPECT_THAT(set_.getCameraScores(), ElementsAre(-99999.9F, 396.0F, 132.0F));
    set_.setPendingCamera(2, 1.0F);
    expectSwitch(0);
    EXPECT_EQ(set_.getPreviousBestCameraIndex(), 1);
    set_.setPendingCamera(2, 0.0F);
    EXPECT_EQ(set_.evaluateVirtualDirector(&focus_, 0), 0);
    EXPECT_THAT(set_.getCameraScores(),
                ElementsAre(-99999.9F, static_cast<float>(132.0 * double{0.2F}), 396.0F));
}

// The scene camera takes the camera shown's place, lens, name and ambient light, and the set's
// fog, or the camera's own when it has its own.
TEST_F(CDemonSetDirectorTest, TheSceneCameraTakesTheCameraShownAndItsFog) {
    givenCameras(
        cameraAt("sees", "0,0,-10", kWideBox) +
            std::format("label\nfogged\npos\n0,0,-10\norient\n0,0,0\nfov\n24\nvmat\n1,0,0\n"
                        "0,1,0\n0,0,1\n0\nfogR,fogG,fogB\n10,20,30\nfogVel\n1,2,3\n4,5\n6\n"
                        "box\n{}\nreverb\n7\n",
                        kWideBox),
        2);
    set_.getCameras()[1].setAmbientValue(0.2F);
    chooseTheFirstCamera();
    const CDemonCamera &scene = *set_parts_.camera;
    EXPECT_TRUE(scene.getPosition().equals({.x = 0.0F, .y = 0.0F, .z = -10.0F}));
    EXPECT_EQ(scene.getFocalLength(), 30.0F);
    EXPECT_EQ(scene.getCameraName(), "sees");
    EXPECT_EQ(set_.getActiveFog().color_index, set_.getSceneFog().color_index);
    set_.setPendingCamera(1, 1.0F);
    expectSwitch(0);
    EXPECT_EQ(scene.getCameraName(), "fogged");
    EXPECT_EQ(scene.getFocalLength(), 24.0F);
    EXPECT_EQ(set_.getActiveFog().color_index, (CColor3i{.r = 10, .g = 20, .b = 30}));
}

// The external renderer is turned off while the cameras are scored, then back on.
TEST_F(CDemonSetDirectorTest, TheExternalRendererIsLeftAsItWas) {
    givenCameras(cameraAt("sees", "0,0,-10", kWideBox), 1);
    EXPECT_FALSE(special_.getUseExternalRenderer());
    special_.setUseExternalRenderer(true);
    expectSwitch(1);
    EXPECT_TRUE(special_.getUseExternalRenderer());
    EXPECT_THAT(set_.getCameraScores(), ElementsAre(132.0F));
}

// Ten a second for each camera: four at a quarter second is all of them.
TEST_F(CDemonSetDirectorTest, UnforcedTheCamerasAreScoredAFewAFrame) {
    givenUnseeingCameras();
    chooseTheFirstCamera();
    EXPECT_EQ(set_.evaluateVirtualDirector(&focus_, 0), 0);
    EXPECT_THAT(set_.getCameraScores(), ElementsAre(-99999.9F, 0.0F, 0.0F, 0.0F));
    givenFrameTime(0x4000);
    EXPECT_EQ(set_.evaluateVirtualDirector(&focus_, 0), 0);
    EXPECT_EQ(set_.getSelectedCameraIndex(), 0);
}

// At least three a frame, so the fourth waits for the next.
TEST_F(CDemonSetDirectorTest, AtLeastThreeCamerasAreScoredAFrame) {
    givenUnseeingCameras();
    chooseTheFirstCamera();
    set_.getCameras()[3].setVdirZone(5);
    EXPECT_EQ(set_.evaluateVirtualDirector(&focus_, 0), 0);
    EXPECT_EQ(set_.getCameraScores()[3], 0.0F);
    EXPECT_EQ(set_.evaluateVirtualDirector(&focus_, 0), 0);
    EXPECT_EQ(set_.getCameraScores()[3], -99999.9F);
}

// It is held back for three seconds of unforced passes.
TEST_F(CDemonSetDirectorTest, TheCameraShownBeforeIsHeldBackForThreeSeconds) {
    givenUnseeingCameras();
    chooseTheFirstCamera();
    expectSwitch(2);
    EXPECT_EQ(set_.getPreviousBestCameraIndex(), 0);
    givenFrameTime(0x4000);
    for (int pass = 0; pass < 11; ++pass) {
        static_cast<void>(set_.evaluateVirtualDirector(&focus_, 0));
    }
    EXPECT_EQ(set_.getPreviousBestCameraIndex(), 0);
    EXPECT_EQ(set_.getPreviousBestCameraTimer(), 0.25F);
    static_cast<void>(set_.evaluateVirtualDirector(&focus_, 0));
    EXPECT_EQ(set_.getPreviousBestCameraIndex(), -1);
    EXPECT_EQ(set_.getPreviousBestCameraTimer(), 0.0F);
}

// Above 1 the best is shown though one is chosen; shown again, the camera before it stays as the
// pass left it.
TEST_F(CDemonSetDirectorTest, AboveOneTheBestIsShownEvenWithOneChosen) {
    givenUnseeingCameras();
    chooseTheFirstCamera();
    expectSwitch(2);
    EXPECT_EQ(set_.getSelectedCameraIndex(), 1);
    EXPECT_EQ(set_.getPreviousBestCameraTimer(), 3.0F);
    expectSwitch(2);
    EXPECT_EQ(set_.getPreviousBestCameraIndex(), -1);
    EXPECT_EQ(set_.getPreviousBestCameraTimer(), 0.0F);
}

// While held, the camera held is shown once, then kept.
TEST_F(CDemonSetDirectorTest, AHoldShowsItsCameraUntilItRunsOut) {
    givenUnseeingCameras();
    chooseTheFirstCamera();
    givenFrameTime(0x4000);
    set_.setPendingCamera(2, 1.0F);
    expectSwitch(0);
    EXPECT_EQ(set_.getSelectedCameraIndex(), 2);
    EXPECT_EQ(set_.getCameraSwitchCooldown(), 0.75F);
    EXPECT_EQ(set_.evaluateVirtualDirector(&focus_, 0), 0);
    EXPECT_EQ(set_.getCameraSwitchCooldown(), 0.5F);
    set_.setPendingCamera(-1, 1.0F);
    EXPECT_EQ(set_.evaluateVirtualDirector(&focus_, 1), 0);
    EXPECT_EQ(set_.getPendingCameraIndex(), -1);
}

// A hold that runs out scores every camera; above 1 the hold is passed over and ended.
TEST_F(CDemonSetDirectorTest, AHoldThatRunsOutOrIsOverriddenEnds) {
    givenUnseeingCameras();
    chooseTheFirstCamera();
    givenFrameTime(0x4000);
    set_.setPendingCamera(3, 0.1F);
    EXPECT_EQ(set_.evaluateVirtualDirector(&focus_, 0), 0);
    EXPECT_EQ(set_.getCameraSwitchCooldown(), 0.0F);
    EXPECT_EQ(set_.getSelectedCameraIndex(), 0);
    set_.setPendingCamera(3, 5.0F);
    expectSwitch(2);
    EXPECT_EQ(set_.getCameraSwitchCooldown(), 0.0F);
}

TEST_F(CDemonSetDirectorTest, LettingGoOfAHoldEndsItNextFrame) {
    givenCameras("", 0);
    set_.clearCameraSwitchCooldown();
    EXPECT_EQ(set_.getCameraSwitchCooldown(), 0.0F);
    set_.setPendingCamera(1, 2.0F);
    set_.clearCameraSwitchCooldown();
    EXPECT_EQ(set_.getCameraSwitchCooldown(), 1e-20F);
}

// The camera at (1, 2, 3) sees from -1 to 4 across, -2 to 5 up and -3 to 6 deep; a sphere of
// radius 1 reaches in from one beyond on any side, but not from two.
TEST_F(CDemonSetDirectorTest, ASphereIsInAViewWhenItReachesItsBox) {
    givenCameras(cameraAt("cam", "1,2,3", "-1,-2,-3\n4,5,6"), 1);
    const C3DSCamera &camera = set_.getCameras()[0];
    const auto in = [&camera](float x, float y, float z) {
        return camera.testSphereInFrustum({.x = 1.0F + x, .y = 2.0F + y, .z = 3.0F + z}, 1.0F);
    };
    const std::array<bool, 9> seen = {
        in(0.0F, 0.0F, 0.0F),  in(-2.0F, 0.0F, 0.0F), in(5.0F, 0.0F, 0.0F),
        in(-3.0F, 0.0F, 0.0F), in(6.0F, 0.0F, 0.0F),  in(0.0F, -4.0F, 0.0F),
        in(0.0F, 7.0F, 0.0F),  in(0.0F, 0.0F, -5.0F), in(0.0F, 0.0F, 8.0F)};
    EXPECT_THAT(seen, ElementsAre(true, true, true, false, false, false, false, false, false));
}

} // namespace
} // namespace nocturne::core
