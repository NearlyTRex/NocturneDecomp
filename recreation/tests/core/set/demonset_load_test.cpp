#include "common/error/fatalerror.h"
#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"
#include "common/serial/binarywriter.h"
#include "core/dtrace/demonraytrace.h"
#include "core/set/demonset.h"
#include "tests/mocks/core/setfilefixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>
#include <string>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::AllOf;
using ::testing::Each;
using ::testing::HasSubstr;
using ::testing::InSequence;
using ::testing::Property;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

using CDemonSetLoadTest = CSetFileFixture;

void expectMatrix(const common::CMatrix3x3f &actual, const common::CVector3f &angles) {
    common::CMatrix3x3f expected;
    expected.buildRotationMatrix(angles);
    for (std::size_t row = 0; row < 3; ++row) {
        EXPECT_TRUE(actual.m.at(row).equals(expected.m.at(row)));
    }
}

// A one-square text model, as models\moon.kfm.
constexpr std::string_view kMoonModel = "/\n5\n;\n4,1,1,1,1\n;\n0\n;\n"
                                        "0,0,2048\n512,0,2048\n512,512,2048\n0,512,2048\n;\n"
                                        "0,3, 0,0,0, 2,0,0, 1,0,0\n;\na.raw\n;\n4,1\n";

TEST_F(CDemonSetLoadTest, ACurrentFileGivesEverySetting) {
    load({});
    EXPECT_EQ(set_.getSetFileVersion(), 26);
    EXPECT_EQ(set_.getSetScaleFactor(), 1.5F);
    EXPECT_EQ(set_.getMinAmbientValue(), 0.25F);
    const SFog &fog = set_.getSceneFog();
    EXPECT_EQ(fog.color_index.r, 1);
    EXPECT_EQ(fog.color_index.b, 3);
    EXPECT_EQ(fog.scroll.z, 6.0F);
    EXPECT_EQ(fog.density_multiplier, 8.0F);
    EXPECT_EQ(fog.temperature, 9.0F);
    EXPECT_EQ(set_parts_.water.getWaterLevelY(), 10.5F);
    EXPECT_EQ(set_parts_.water.getTileSize(), 16.0F);
    EXPECT_TRUE(set_parts_.water.getWaveAnimationEnabled());
    EXPECT_FALSE(set_.getUseEnviroModel());
    EXPECT_EQ(set_.getEnviroModelName(), "moon.kfm");
    EXPECT_FALSE(set_.getHasSky());
    EXPECT_EQ(set_.getSkyBrightness(), 200);
    EXPECT_EQ(set_.getSkyTextureName(), "stars.raw");
    EXPECT_TRUE(set_.getUseWorldGeometry());
    EXPECT_EQ(set_.getWorldGeometryName(), "city.geo");
    EXPECT_EQ(set_.getWeatherType(), EWeatherType::WEATHER_TYPE_SNOW);
    EXPECT_FALSE(set_.getPlayerOnTrain());
    EXPECT_EQ(set_.getDefaultRoomSize(), 3);
    EXPECT_EQ(set_.getDefaultGroundType(), 5);
    EXPECT_EQ(set_.getDefaultMasterReverb(), 6);
    EXPECT_EQ(set_.getGeometryFilename(), "pier.geo");
}

// The file gives a box's angles as x, z, y.
TEST_F(CDemonSetLoadTest, ARoomIsAPlacedTurnedBoxWithItsReverb) {
    load({});
    ASSERT_EQ(set_.getRooms().size(), 1U);
    const SRoom &room = set_.getRooms()[0];
    EXPECT_TRUE(room.position.equals({.x = 0.5F, .y = 1.5F, .z = 2.5F}));
    EXPECT_TRUE(room.extents.equals({.x = 1, .y = 2, .z = 3}));
    expectMatrix(room.rotation_matrix, {.x = 0.1F, .y = 0.3F, .z = 0.2F});
    EXPECT_EQ(room.reverb_size, 7);
}

TEST_F(CDemonSetLoadTest, EveryCameraIsEnabledInGroupZeroAtTheLeastAmbient) {
    load(
        {.cameras = "2\n" + cameraText("first") + cameraText("second"), .pvs = "2\n\t4\n\t5\n0\n"});
    ASSERT_EQ(set_.getCameras().size(), 2U);
    EXPECT_THAT(set_.getCameras(), Each(AllOf(Property(&C3DSCamera::getEnabled, true),
                                              Property(&C3DSCamera::getCameraGroup, 0),
                                              Property(&C3DSCamera::getAmbientValue, 0.25F))));
    EXPECT_EQ(set_.getCameras()[1].getName(), "second");
    EXPECT_THAT(set_.getCameras()[0].getPVSList(), ::testing::ElementsAre(4, 5));
}

TEST_F(CDemonSetLoadTest, ACameraIsFoundByName) {
    load(
        {.cameras = "2\n" + cameraText("first") + cameraText("Second"), .pvs = "2\n\t4\n\t5\n0\n"});
    EXPECT_EQ(set_.findCameraByName("FIRST"), 0U);
    EXPECT_EQ(set_.findCameraByName("second"), 1U);
    EXPECT_FALSE(set_.findCameraByName("third").has_value());
}

TEST_F(CDemonSetLoadTest, EachLightIsReadInTurn) {
    load({.lights = "1\n" + lightText("lamp", 2)});
    ASSERT_EQ(set_.getLights().size(), 1U);
    EXPECT_EQ(set_.getLights()[0].getName(), "lamp");
}

// Other lights are passed over, and don't count among the spotlights.
TEST_F(CDemonSetLoadTest, ASpotlightIsFoundByNameAmongTheSpotlights) {
    load({.lights = "4\n" + lightText("first", 0) + lightText("omni", 1) + lightText("Beam", 0) +
                    lightText("last", 0)});
    const std::optional<SSpotlight> beam = set_.addLightFilter("BEAM");
    ASSERT_TRUE(beam.has_value());
    EXPECT_EQ(beam->light, &set_.getLights()[2]);
    EXPECT_EQ(beam->index, 1U);
    EXPECT_FALSE(set_.addLightFilter("omni").has_value());
    EXPECT_FALSE(set_.addLightFilter("absent").has_value());
}

TEST_F(CDemonSetLoadTest, AMissingFileIsFatal) {
    EXPECT_THAT([this] { set_.load("absent.set"); }, ThrowsMessage<common::CFatalError>(HasSubstr(
                                                         "CDemonSet::Unable to open absent.set")));
}

// Without a number the weather stays as the last set had it.
TEST_F(CDemonSetLoadTest, TheWeatherIsNoneRainOrForAnyOtherNumberSnow) {
    load({.weather = "0"});
    EXPECT_EQ(set_.getWeatherType(), EWeatherType::WEATHER_TYPE_NONE);
    load({.weather = "1"});
    EXPECT_EQ(set_.getWeatherType(), EWeatherType::WEATHER_TYPE_RAIN);
    load({.weather = "7"});
    EXPECT_EQ(set_.getWeatherType(), EWeatherType::WEATHER_TYPE_SNOW);
    load({.weather = "none"});
    EXPECT_EQ(set_.getWeatherType(), EWeatherType::WEATHER_TYPE_SNOW);
}

TEST_F(CDemonSetLoadTest, TheLoadingScreenShowsEachStep) {
    const InSequence order;
    EXPECT_CALL(set_parts_.loading_screen, update(StrEq("Loading set"), false));
    EXPECT_CALL(set_parts_.loading_screen, update(StrEq("Loading set geometry"), false));
    EXPECT_CALL(set_parts_.loading_screen, update(StrEq("Loading thumbs"), false));
    load({});
}

// Version 0 has three more header lines, and the oldest fog; the rest of what it lacks comes
// from the geometry file's name or a default.
TEST_F(CDemonSetLoadTest, TheOldestFileTakesWhatItLacksFromDefaultsAndTheName) {
    load({.version = 0, .geometry = "NDUN2.GEO"});
    EXPECT_EQ(set_.getSceneFog().color_index.r, 1);
    EXPECT_EQ(set_.getSceneFog().density_multiplier, 8.0F);
    EXPECT_EQ(set_.getSceneFog().temperature, SFog::kDefaultTemperature);
    EXPECT_TRUE(set_parts_.water.getWaveAnimationEnabled());
    EXPECT_TRUE(set_.getHasSky());
    EXPECT_EQ(set_.getSkyTextureName(), "NITESKY.RAW");
    EXPECT_EQ(set_.getSkyBrightness(), 0x4000);
    EXPECT_FALSE(set_.getUseWorldGeometry());
    EXPECT_EQ(set_.getWorldGeometryName(), "none");
    EXPECT_EQ(set_.getWeatherType(), EWeatherType::WEATHER_TYPE_NONE);
    EXPECT_EQ(set_.getDefaultRoomSize(), 3);
    EXPECT_TRUE(set_.getRooms().empty());
    EXPECT_EQ(set_.getDefaultGroundType(), 8);
    EXPECT_EQ(set_.getDefaultMasterReverb(), 0);
    EXPECT_TRUE(set_.getVdirBoxes().empty());
}

TEST_F(CDemonSetLoadTest, OldNamesWithoutAKnownPrefixGetTheDefaultRoomAndGround) {
    load({.version = 0, .geometry = "castle.geo"});
    EXPECT_FALSE(set_parts_.water.getWaveAnimationEnabled());
    EXPECT_EQ(set_.getDefaultRoomSize(), 0);
    EXPECT_EQ(set_.getDefaultGroundType(), 2);
    load({.version = 2, .geometry = "mauso.geo"});
    EXPECT_EQ(set_.getDefaultRoomSize(), 3);
    EXPECT_EQ(set_.getDefaultGroundType(), 8);
}

TEST_F(CDemonSetLoadTest, OldDirectorDataIsSkippedInVersionsFourToNine) {
    load({.version = 9, .vdir_boxes = "1\n0,0,0\n1,1,1\n0,0,0\n"});
    EXPECT_EQ(set_.getVdirBoxes().size(), 1U);
}

TEST_F(CDemonSetLoadTest, VersionFourteenEndsWithTwoStrayLines) {
    load({.version = 14, .vdir_boxes = "1\n0,0,0\n1,1,1\n0,0,0\n"});
    EXPECT_EQ(set_.getVdirBoxes().size(), 1U);
}

TEST_F(CDemonSetLoadTest, ATrainSetPutsTheTerrainDown) {
    givenFile("data\\junk.raw", std::string(4, '\x01'));
    givenFile("data\\junk.clr", "");
    givenFile("data\\junk.tex", "0\n");
    load({.geometry = "train.geo"});
    EXPECT_TRUE(set_.getPlayerOnTrain());
    EXPECT_EQ(set_parts_.ground.getTerrainData().size(), std::size_t{0x100} * 0x100);
    load({});
    EXPECT_FALSE(set_.getPlayerOnTrain());
    EXPECT_TRUE(set_parts_.ground.getTerrainData().empty());
}

TEST_F(CDemonSetLoadTest, TheEnviroModelIsLoadedWhenTheSetUsesOneAndFreedWithTheNext) {
    givenFile("models\\moon.kfm", std::string(kMoonModel));
    load({.enviro = "1,moon.kfm"});
    EXPECT_TRUE(set_.getUseEnviroModel());
    EXPECT_EQ(set_parts_.enviro_model.getVertexCount(), 4);
    load({});
    EXPECT_EQ(set_parts_.enviro_model.getVertexCount(), 0);
}

TEST_F(CDemonSetLoadTest, TheGeometryFileIsLoadedIntoTheRaytrace) {
    common::CBinaryWriter writer;
    writer.write(std::int32_t{CDemonRaytrace::kGeoFileFormatVersion});
    for (int i = 0; i < 3; ++i) {
        writer.write(std::int32_t{0});
    }
    for (const float value : {0.0F, 0.0F, 0.0F, 8.0F, 8.0F, 8.0F, 8.0F, 16.0F, 24.0F}) {
        writer.write(value);
    }
    const std::span<const std::byte> data = writer.getData();
    givenFile("data\\pier.geo", {reinterpret_cast<const char *>(data.data()), data.size()});
    EXPECT_CALL(raw_input_, getNextKeypress(_)).Times(0);
    load({});
    EXPECT_TRUE(set_parts_.raytrace.getCellSize().equals({.x = 8, .y = 16, .z = 24}));
}

TEST_F(CDemonSetLoadTest, WithoutTheGeometryFileTheSetWarnsAndWaitsForAKey) {
    EXPECT_CALL(screen_, swapBuffers());
    EXPECT_CALL(raw_input_, getNextKeypress(_));
    load({});
}

TEST_F(CDemonSetLoadTest, TheSameGeometryAsTheLastSetIsNotReloaded) {
    EXPECT_CALL(raw_input_, getNextKeypress(_)).Times(2);
    load({});
    load({.geometry = "PIER.GEO"});
    load({.geometry = "other.geo"});
    EXPECT_EQ(set_.getGeometryFilename(), "other.geo");
}

} // namespace
} // namespace nocturne::core
