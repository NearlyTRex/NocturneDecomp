#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "common/text/textscanner.h"
#include "core/color3i.h"
#include "core/dcamera/fog.h"
#include "core/setutil/3dscamera.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::IsEmpty;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

void expectVector(const common::CVector3f &actual, const common::CVector3f &expected) {
    EXPECT_FLOAT_EQ(actual.x, expected.x);
    EXPECT_FLOAT_EQ(actual.y, expected.y);
    EXPECT_FLOAT_EQ(actual.z, expected.z);
}

// A camera as a version 23 or later file holds it, using the set's fog when fog is empty.
std::string camera(const std::string &fog = "1\n") {
    return "-- camera name --\n"
           "townx1 trailing\n"
           "pos\n"
           "1,2,3\n"
           "orient\n"
           "0.1,0.2,0.3\n"
           "fov\n"
           "30\n"
           "vmat\n"
           "1,2,3\n"
           "4,5,6\n"
           "7,8,9\n" +
           fog +
           "box min, max\n"
           "-1,-2,-3\n"
           "4,5,6\n"
           "reverbPreset\n"
           "7\n"
           "next";
}

// The set's fog, which old cameras take.
SFog setFog() {
    SFog fog;
    fog.color_index = {.r = 1, .g = 2, .b = 3};
    fog.scroll = {.x = 4.0F, .y = 5.0F, .z = 6.0F};
    fog.height_threshold = 7.0F;
    fog.density_multiplier = 8.0F;
    fog.temperature = 9.0F;
    return fog;
}

C3DSCamera load(const std::string &text, int version, common::CTextScanner *rest = nullptr) {
    common::CTextScanner scanner(text);
    C3DSCamera loaded;
    loaded.load(scanner, version, setFog());
    if (rest != nullptr) {
        *rest = scanner;
    }
    return loaded;
}

TEST(C3DSCameraLoad, ReadsTheCameraAfterEachLabel) {
    common::CTextScanner rest("");
    const C3DSCamera loaded = load(camera(), 26, &rest);
    EXPECT_EQ(loaded.getName(), "townx1");
    expectVector(loaded.getPosition(), {.x = 1.0F, .y = 2.0F, .z = 3.0F});
    expectVector(loaded.getOrientation(), {.x = 0.1F, .y = 0.3F, .z = 0.2F});
    EXPECT_FLOAT_EQ(loaded.getProjectionScale(), 30.0F);
    expectVector(loaded.getRotationMatrix().m[0], {.x = 1.0F, .y = 2.0F, .z = 3.0F});
    expectVector(loaded.getRotationMatrix().m[1], {.x = 4.0F, .y = 5.0F, .z = 6.0F});
    expectVector(loaded.getRotationMatrix().m[2], {.x = 7.0F, .y = 8.0F, .z = 9.0F});
    EXPECT_TRUE(loaded.getUseGlobalFog());
    EXPECT_EQ(loaded.getFog().color_index, CColor3i{});
    expectVector(loaded.getBox().min, {.x = -1.0F, .y = -2.0F, .z = -3.0F});
    expectVector(loaded.getBox().max, {.x = 4.0F, .y = 5.0F, .z = 6.0F});
    EXPECT_EQ(loaded.getReverbPreset(), 7);
    EXPECT_EQ(rest.readLine(), "next");
}

TEST(C3DSCameraLoad, ACameraNotUsingTheSetsFogReadsItsOwn) {
    const C3DSCamera loaded =
        load(camera("0\nfogR,fogG,fogB\n10,20,30\nfogVel\n1,2,3\n4,5\n6\n"), 26);
    EXPECT_FALSE(loaded.getUseGlobalFog());
    EXPECT_EQ(loaded.getFog().color_index, (CColor3i{.r = 10, .g = 20, .b = 30}));
    EXPECT_FLOAT_EQ(loaded.getFog().temperature, 6.0F);
    EXPECT_EQ(loaded.getReverbPreset(), 7);
}

TEST(C3DSCameraLoad, BeforeEighteenACameraTakesTheSetsFog) {
    common::CTextScanner rest("");
    const C3DSCamera loaded = load(camera(""), 17, &rest);
    EXPECT_TRUE(loaded.getUseGlobalFog());
    EXPECT_EQ(loaded.getFog().color_index, setFog().color_index);
    expectVector(loaded.getFog().scroll, setFog().scroll);
    EXPECT_FLOAT_EQ(loaded.getFog().height_threshold, 7.0F);
    EXPECT_FLOAT_EQ(loaded.getFog().density_multiplier, 8.0F);
    EXPECT_FLOAT_EQ(loaded.getFog().temperature, 9.0F);
    EXPECT_EQ(rest.readLine(), "box min, max");
}

TEST(C3DSCameraLoad, BeforeTwentyThreeTheBoxAndReverbStayDefault) {
    common::CTextScanner rest("");
    const C3DSCamera loaded = load(camera(), 22, &rest);
    expectVector(loaded.getBox().min, {.x = -300.0F, .y = -300.0F, .z = 0.0F});
    expectVector(loaded.getBox().max, {.x = 300.0F, .y = 300.0F, .z = 300.0F});
    EXPECT_EQ(loaded.getReverbPreset(), 0);
    EXPECT_EQ(rest.readLine(), "box min, max");
}

TEST(C3DSCameraLoad, BeforeElevenFieldsHaveNoLabels) {
    const C3DSCamera loaded = load("cam\n1,2,3\n4,5,6\n30\nvmat\n1,0,0\n0,1,0\n0,0,1\n", 10);
    EXPECT_EQ(loaded.getName(), "cam");
    expectVector(loaded.getPosition(), {.x = 1.0F, .y = 2.0F, .z = 3.0F});
    expectVector(loaded.getOrientation(), {.x = 4.0F, .y = 6.0F, .z = 5.0F});
    EXPECT_FLOAT_EQ(loaded.getProjectionScale(), 30.0F);
    expectVector(loaded.getRotationMatrix().m[2], {.x = 0.0F, .y = 0.0F, .z = 1.0F});
}

TEST(C3DSCameraLoad, ABlankNameLineLeavesTheCameraUnnamed) {
    const C3DSCamera loaded = load("label\n  \npos\n1,2,3\n", 26);
    EXPECT_EQ(loaded.getName(), "");
    expectVector(loaded.getPosition(), {.x = 1.0F, .y = 2.0F, .z = 3.0F});
}

TEST(C3DSCamera, StartsUsingTheSetsFogWithNothingElse) {
    const C3DSCamera fresh;
    EXPECT_TRUE(fresh.getUseGlobalFog());
    EXPECT_FLOAT_EQ(fresh.getProjectionScale(), 0.0F);
    expectVector(fresh.getBox().max, {});
    EXPECT_THAT(fresh.getPVSList(), IsEmpty());
}

TEST(C3DSCamera, ResetEmptiesTheCameraBackToTheDefaultLensAndBox) {
    common::CTextScanner scanner(camera() + "\n2\n\t5\n\t6\n");
    C3DSCamera reused;
    reused.load(scanner, 26, setFog());
    scanner.skipLine();
    reused.loadPVS(scanner);
    reused.reset();
    EXPECT_EQ(reused.getName(), "");
    expectVector(reused.getPosition(), {});
    EXPECT_FALSE(reused.getUseGlobalFog());
    EXPECT_FLOAT_EQ(reused.getProjectionScale(), 28.0F);
    expectVector(reused.getBox().min, {.x = -300.0F, .y = -300.0F, .z = 0.0F});
    EXPECT_EQ(reused.getReverbPreset(), 0);
    EXPECT_THAT(reused.getPVSList(), IsEmpty());
}

C3DSCamera withPVS(const std::string &text) {
    common::CTextScanner scanner(text);
    C3DSCamera loaded;
    loaded.loadPVS(scanner);
    return loaded;
}

TEST(C3DSCameraPVS, ReadsTheCountAndEachCube) {
    EXPECT_THAT(withPVS("3\n\t10\n\t11\n\t12\n").getPVSList(), ElementsAre(10, 11, 12));
}

TEST(C3DSCameraPVS, CubesTheFileLacksAreZero) {
    EXPECT_THAT(withPVS("3\n\t10\n").getPVSList(), ElementsAre(10, 0, 0));
}

TEST(C3DSCameraPVS, ANegativeCountIsNoCubes) {
    EXPECT_THAT(withPVS("-4\n\t10\n").getPVSList(), IsEmpty());
}

TEST(C3DSCameraPVS, AMissingCountKeepsTheListItHad) {
    common::CTextScanner scanner("2\n\t5\n\t6\nnone");
    C3DSCamera reloaded;
    reloaded.loadPVS(scanner);
    reloaded.loadPVS(scanner);
    EXPECT_THAT(reloaded.getPVSList(), ElementsAre(5, 6));
}

TEST(C3DSCameraPVS, FreeEmptiesTheList) {
    C3DSCamera freed = withPVS("1\n\t5\n");
    freed.free();
    EXPECT_THAT(freed.getPVSList(), IsEmpty());
}

TEST(C3DSCameraPVS, ACountTooBigForItsBytesIsOutOfMemory) {
    EXPECT_THAT([] { static_cast<void>(withPVS("536870912\n")); },
                ThrowsMessage<common::CFatalError>(StrEq("Out of memory for pvsList - 536870912")));
}

} // namespace
} // namespace nocturne::core
