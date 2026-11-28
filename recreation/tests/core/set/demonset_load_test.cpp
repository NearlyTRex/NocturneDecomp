#include "common/error/fatalerror.h"
#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"
#include "common/serial/binarywriter.h"
#include "core/dtrace/demonraytrace.h"
#include "core/set/demonset.h"
#include "core/terrain/terrain.h"
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
    load({.water = "10.5,16"});
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
    EXPECT_FALSE(set_.isAboardMovingVehicle());
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

// A sound in the room, its turned box, sounds like its size; past any side, the set's default.
TEST_F(CDemonSetLoadTest, ASoundsRoomSizeIsTheRoomsItIsIn) {
    load({});
    const SRoom &room = set_.getRooms()[0];
    const auto at = [&](common::CVector3f local) {
        const common::CVector3f turned = room.rotation_matrix.transformVector(local);
        return set_.getReverbPresetAtPosition({.x = room.position.x + turned.x,
                                               .y = room.position.y + turned.y,
                                               .z = room.position.z + turned.z});
    };
    EXPECT_EQ(at({.x = 0.9F, .y = -1.9F, .z = 2.9F}), 7);
    EXPECT_EQ(at({.x = 1.1F, .y = 0.0F, .z = 0.0F}), 3);
    EXPECT_EQ(at({.x = 0.0F, .y = 2.1F, .z = 0.0F}), 3);
    EXPECT_EQ(at({.x = 0.0F, .y = 0.0F, .z = -3.1F}), 3);
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

TEST_F(CDemonSetLoadTest, ACameraGroupIsEnabledAndDisabledTogether) {
    load({.cameras = "3\n" + cameraText("first") + cameraText("second") + cameraText("third"),
          .pvs = "0\n0\n0\n"});
    set_.getCameras()[0].setCameraGroup(2);
    set_.getCameras()[2].setCameraGroup(2);
    set_.setCameraEnabledByGroup(2, false);
    EXPECT_THAT(set_.getCameras(),
                ::testing::ElementsAre(Property(&C3DSCamera::getEnabled, false),
                                       Property(&C3DSCamera::getEnabled, true),
                                       Property(&C3DSCamera::getEnabled, false)));
    set_.setCameraEnabled(1, false);
    set_.setCameraEnabledByGroup(2, true);
    EXPECT_THAT(set_.getCameras(), ::testing::ElementsAre(Property(&C3DSCamera::getEnabled, true),
                                                          Property(&C3DSCamera::getEnabled, false),
                                                          Property(&C3DSCamera::getEnabled, true)));
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

// The set is read as text, so a name on a line ending CRLF has no CR, as HQ.SET's lights don't.
TEST_F(CDemonSetLoadTest, ALineEndingCrlfEndsAtItsNewline) {
    std::string text = SSetFile{.lights = "1\n" + lightText("projector", 0)}.text();
    for (std::size_t at = text.find('\n'); at != std::string::npos; at = text.find('\n', at + 2)) {
        text.insert(at, "\r");
    }
    givenFile("models\\test.set", text);
    set_.load("test.set");
    EXPECT_EQ(set_.getLights()[0].getName(), "projector");
    EXPECT_TRUE(set_.addLightFilter("projector").has_value());
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
    EXPECT_TRUE(set_.isAboardMovingVehicle());
    EXPECT_EQ(set_parts_.ground.getTerrainData().size(), std::size_t{0x100} * 0x100);
    load({});
    EXPECT_FALSE(set_.isAboardMovingVehicle());
    EXPECT_TRUE(set_parts_.ground.getTerrainData().empty());
}

// A train set without a terrain block has Nocturne's ground at Nocturne's speed.
TEST_F(CDemonSetLoadTest, ATrainSetWithoutATerrainBlockTakesTheDefaults) {
    givenFile("data\\junk.raw", std::string(4, '\x01'));
    givenFile("data\\junk.clr", "");
    givenFile("data\\junk.tex", "0\n");
    load({.geometry = "train.geo"});
    EXPECT_TRUE(set_parts_.terrain.isInitialized());
    EXPECT_EQ(set_parts_.ground.getTerrainData()[0].height, 128);
    EXPECT_EQ(set_parts_.terrain.getScrollPerSecond(), 0x6270);
}

// After the file's end, a terrain block, its label in any case and after any lines, gives any set
// a moving ground of its own: here the dunes, scrolling 50 units a second. It isn't the train.
class CDemonSetTerrainBlockTest : public CDemonSetLoadTest {
protected:
    CDemonSetTerrainBlockTest() {
        givenFile("data\\junk.raw", std::string(4, '\x01'));
        givenFile("data\\junk.clr", "");
        givenFile("data\\junk.tex", "0\n");
        givenFile("data\\dunes.raw", std::string(4, '\x02'));
        givenFile("data\\dunes.clr", "");
        givenFile("data\\dunes.tex", "0\n");
    }

    void loadWith(const std::string &settings) {
        load({.tail = "\nnotes\n  Terrain  \n" + settings + "\n"});
    }

    [[nodiscard]] int groundHeight() const {
        return set_parts_.ground.getTerrainData()[0].height;
    }
};

TEST_F(CDemonSetTerrainBlockTest, ABlockGivesTheSetItsOwnGroundAndSpeed) {
    loadWith(" dunes.jnk , 50 ");
    EXPECT_FALSE(set_.isAboardMovingVehicle());
    EXPECT_TRUE(set_parts_.terrain.isInitialized());
    EXPECT_EQ(groundHeight(), 256);
    EXPECT_EQ(set_parts_.terrain.getScrollPerSecond(), 50 * 256);
}

// Left empty, or not a number, a part takes its default.
TEST_F(CDemonSetTerrainBlockTest, APartLeftOutTakesItsDefault) {
    loadWith("dunes.jnk");
    EXPECT_EQ(groundHeight(), 256);
    EXPECT_EQ(set_parts_.terrain.getScrollPerSecond(), 0x6270);
    loadWith(",12.5");
    EXPECT_EQ(groundHeight(), 128);
    EXPECT_EQ(set_parts_.terrain.getScrollPerSecond(), 12.5 * 256);
    loadWith("dunes.jnk,fast");
    EXPECT_EQ(set_parts_.terrain.getScrollPerSecond(), 0x6270);
    loadWith("dunes.jnk,50mph");
    EXPECT_EQ(set_parts_.terrain.getScrollPerSecond(), 0x6270);
    loadWith("");
    EXPECT_EQ(groundHeight(), 128);
    EXPECT_EQ(set_parts_.terrain.getSettings(), STerrainSettings{});
}

// The block also gives the grid's size and the ground's point the camera is drawn over.
TEST_F(CDemonSetTerrainBlockTest, ABlockGivesTheGridsSizeAndThePointToDrawOver) {
    loadWith("dunes.jnk,50,2,4,-3.5,10");
    const STerrainSettings &settings = set_parts_.terrain.getSettings();
    EXPECT_EQ(settings.width, 2);
    EXPECT_EQ(settings.height, 4);
    EXPECT_EQ(set_parts_.ground.getTerrainData().size(), 8U);
    EXPECT_EQ(settings.origin_x, -896);
    EXPECT_EQ(settings.origin_z, 10 * 256);
}

// A size that isn't a power of two of cells, the ground's wrap being a mask, takes the default.
TEST_F(CDemonSetTerrainBlockTest, AGridSizeNotAPowerOfTwoTakesTheDefault) {
    loadWith("dunes.jnk,50,3,0");
    EXPECT_EQ(set_parts_.terrain.getSettings().width, 256);
    EXPECT_EQ(set_parts_.terrain.getSettings().height, 256);
    loadWith("dunes.jnk,50,-4,wide");
    EXPECT_EQ(set_parts_.terrain.getSettings().width, 256);
    EXPECT_EQ(set_parts_.terrain.getSettings().height, 256);
}

// A block given twice keeps its last.
TEST_F(CDemonSetTerrainBlockTest, ABlockGivenTwiceKeepsItsLast) {
    load({.tail = "\nterrain\ndunes.jnk,50\nterrain\n,20\n"});
    EXPECT_EQ(groundHeight(), 128);
    EXPECT_EQ(set_parts_.terrain.getScrollPerSecond(), 20 * 256);
}

// Lines after the file's end that aren't a terrain block leave the set without a moving ground.
TEST_F(CDemonSetTerrainBlockTest, OtherLinesAfterTheEndAreLeftAlone) {
    load({.tail = "\nnotes\n"});
    EXPECT_FALSE(set_parts_.terrain.isInitialized());
}

// Without an ambient block a set plays its geometry's stem as a .wav, the mill and the town in
// any case at 0.85.
TEST_F(CDemonSetLoadTest, ASetWithoutAnAmbientBlockPlaysItsGeometrysSound) {
    load({});
    EXPECT_EQ(set_.getAmbientSound(), "pier.wav");
    load({.geometry = "smill.geo"});
    EXPECT_EQ(set_.getAmbientSound(), "smill.wav@0.85");
    load({.geometry = "TOWN.GEO"});
    EXPECT_EQ(set_.getAmbientSound(), "TOWN.wav@0.85");
}

// The block names the sound and its volume; a value left out, or a volume that is no number 0 or
// more, is what the set plays without the block.
TEST_F(CDemonSetLoadTest, AnAmbientBlockGivesTheSoundAndItsVolume) {
    load({.tail = "\n  Ambient  \n rain.wav , 0.5 \n"});
    EXPECT_EQ(set_.getAmbientSound(), "rain.wav@0.5");
    load({.tail = "\nambient\nrain.wav\n"});
    EXPECT_EQ(set_.getAmbientSound(), "rain.wav");
    load({.geometry = "town.geo", .tail = "\nambient\n,1\n"});
    EXPECT_EQ(set_.getAmbientSound(), "town.wav@1");
    load({.geometry = "town.geo", .tail = "\nambient\nrain.wav,loud\n"});
    EXPECT_EQ(set_.getAmbientSound(), "rain.wav@0.85");
    load({.tail = "\nambient\n,-1\n"});
    EXPECT_EQ(set_.getAmbientSound(), "pier.wav");
}

// off, in any case, gives the set no ambient sound.
TEST_F(CDemonSetLoadTest, AnAmbientBlockOfOffPlaysNone) {
    load({.geometry = "town.geo", .tail = "\nambient\n OFF \n"});
    EXPECT_EQ(set_.getAmbientSound(), "");
}

// Without their blocks, a castle blows the wind and a dungeon laps the water, in any case.
TEST_F(CDemonSetLoadTest, WithoutBlocksOnlyACastleBlowsAndOnlyADungeonLaps) {
    load({});
    EXPECT_FALSE(set_.getWind().has_value());
    EXPECT_FALSE(set_.getWater().has_value());
    load({.geometry = "Castle1.geo"});
    EXPECT_EQ(set_.getWind(), SSetWind{});
    EXPECT_FALSE(set_.getWater().has_value());
    load({.geometry = "NDUN3.geo"});
    EXPECT_FALSE(set_.getWind().has_value());
    EXPECT_EQ(set_.getWater(), SSetWater{});
}

// The block blows any set's wind, with its sound or the castle's; off blows none.
TEST_F(CDemonSetLoadTest, AWindBlockGivesTheWindItsSound) {
    load({.tail = "\n  Wind  \n gust.wav \n"});
    EXPECT_EQ(set_.getWind(), SSetWind{.sound = "gust.wav"});
    load({.tail = "\nwind\n\n"});
    EXPECT_EQ(set_.getWind(), SSetWind{});
    load({.geometry = "castle.geo", .tail = "\nwind\n Off \n"});
    EXPECT_FALSE(set_.getWind().has_value());
}

// The block laps any set's water, with its sound and loudest or the dungeon's; a loudest that is
// no number 0 or more is the dungeon's, and off laps none.
TEST_F(CDemonSetLoadTest, AWaterBlockGivesTheWaterItsSoundAndLoudest) {
    load({.tail = "\nwater\n drip.wav , 0.3 \n"});
    EXPECT_EQ(set_.getWater(), (SSetWater{.sound = "drip.wav", .loudest = 0.3F}));
    load({.tail = "\nwater\n,0.5\n"});
    EXPECT_EQ(set_.getWater(), (SSetWater{.sound = "water-2.wav", .loudest = 0.5F}));
    load({.tail = "\nwater\ndrip.wav,-1\n"});
    EXPECT_EQ(set_.getWater(), (SSetWater{.sound = "drip.wav", .loudest = 0.7F}));
    load({.tail = "\nwater\n,loud\n"});
    EXPECT_EQ(set_.getWater(), SSetWater{});
    load({.geometry = "ndun.geo", .tail = "\nwater\noff\n"});
    EXPECT_FALSE(set_.getWater().has_value());
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
