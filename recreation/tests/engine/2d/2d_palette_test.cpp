#include "common/error/fatalerror.h"
#include "engine/2d/2d.h"
#include "tests/mocks/engine/twodfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>

namespace nocturne::engine {
namespace {

using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr std::size_t cubeIndex(std::size_t red, std::size_t green, std::size_t blue) {
    return ((red / 8) * 1024) + ((green / 8) * 32) + (blue / 8);
}

// One palette entry as the file holds it.
std::string rgb(char red, char green, char blue) {
    return {red, green, blue};
}

class C2dPaletteTest : public C2dFixture {
protected:
    // Entries 10 and 11 as given, every other entry white.
    void givenTwoEntries(const std::string &tenth, const std::string &eleventh) {
        std::string palette(C2d::kPaletteBytes, '\xff');
        palette.replace(30, 3, tenth);
        palette.replace(33, 3, eleventh);
        givenFile("art\\two.act", palette);
        two_d_.loadPaletteFile("two.act");
    }
};

TEST_F(C2dPaletteTest, AGreyFindsItsOwnEntry) {
    loadGreyPalette();
    two_d_.buildColorLookupTable();
    EXPECT_EQ(two_d_.findBestPaletteMatch(100, 100, 100, 10, 229), 100);
}

TEST_F(C2dPaletteTest, OnlyTheGivenRangeIsSearched) {
    loadGreyPalette();
    two_d_.buildColorLookupTable();
    EXPECT_EQ(two_d_.findBestPaletteMatch(250, 250, 250, 10, 229), 229);
    EXPECT_EQ(two_d_.findBestPaletteMatch(3, 3, 3, 10, 229), 10);
}

TEST_F(C2dPaletteTest, TheFirstOfEqualEntriesWins) {
    givenTwoEntries(rgb(50, 60, 70), rgb(50, 60, 70));
    two_d_.buildColorLookupTable();
    EXPECT_EQ(two_d_.findBestPaletteMatch(50, 60, 70, 10, 11), 10);
}

// Blue weighs least, so (0, 0, 30) is nearer black than (20, 0, 0) on colour alone: 99 against
// 120. Its brightness gap costs 45 to the red's 20, which turns it round: 144 against 140.
TEST_F(C2dPaletteTest, BrightnessCountsAlongsideTheWeightedChannels) {
    givenTwoEntries(rgb(0, 0, 30), rgb(20, 0, 0));
    two_d_.buildColorLookupTable();
    EXPECT_EQ(two_d_.findBestPaletteMatch(0, 0, 0, 10, 11), 11);
}

// The original returned whatever its register held.
TEST_F(C2dPaletteTest, AnEmptyRangeGivesItsStart) {
    loadGreyPalette();
    EXPECT_EQ(two_d_.findBestPaletteMatch(1, 2, 3, 5, 4), 5);
}

TEST_F(C2dPaletteTest, ARangeOutsideThePaletteIsCutToIt) {
    loadGreyPalette();
    two_d_.buildColorLookupTable();
    EXPECT_EQ(two_d_.findBestPaletteMatch(255, 255, 255, -5, 300), 255);
}

TEST_F(C2dPaletteTest, TheCubeMapsEachEighthOfAChannelToItsNearestEntry) {
    loadGreyPalette();
    two_d_.buildColorLookupTable();
    const auto cube = two_d_.getColorCubeLookup();
    EXPECT_EQ(cube[cubeIndex(80, 80, 80)], 80);
    EXPECT_EQ(cube[cubeIndex(0, 0, 8)], 10);
    EXPECT_EQ(cube[cubeIndex(248, 248, 248)], 229);
}

TEST_F(C2dPaletteTest, BlackAlwaysMapsToEntryZero) {
    loadGreyPalette();
    two_d_.buildColorLookupTable();
    EXPECT_EQ(two_d_.getColorCubeLookup()[0], 0);
}

TEST_F(C2dPaletteTest, ACachedMapIsLoadedUnderTheMapExtension) {
    givenFile("fog\\pal.map", std::string(C2d::kColorCubeSize, '\x2a'));
    expectNothingWritten();
    two_d_.loadOrBuildColorMap("pal.act");
    EXPECT_EQ(two_d_.getColorCubeLookup()[0], 0x2a);
    EXPECT_EQ(two_d_.getColorCubeLookup()[C2d::kColorCubeSize - 1], 0x2a);
}

TEST_F(C2dPaletteTest, AShortCachedMapReplacesOnlyItsStart) {
    givenFile("fog\\vga.map", {'\x2a', '\x2b'});
    two_d_.loadOrBuildColorMap("vga.map");
    EXPECT_EQ(two_d_.getColorCubeLookup()[1], 0x2b);
    EXPECT_EQ(two_d_.getColorCubeLookup()[2], 0);
}

TEST_F(C2dPaletteTest, AMissingMapIsBuiltAndWritten) {
    loadGreyPalette();
    std::string written;
    givenWritable("fog\\vga.map", written);
    EXPECT_CALL(file_system_, makeDirectory(std::string_view("fog")));
    two_d_.loadOrBuildColorMap("vga.map");
    ASSERT_EQ(written.size(), C2d::kColorCubeSize);
    EXPECT_EQ(static_cast<unsigned char>(written[cubeIndex(80, 80, 80)]), 80);
    EXPECT_EQ(two_d_.getColorCubeLookup()[cubeIndex(80, 80, 80)], 80);
}

TEST_F(C2dPaletteTest, AMapThatCantBeWrittenIsFatal) {
    loadGreyPalette();
    EXPECT_THAT([this] { two_d_.loadOrBuildColorMap("vga.map"); },
                ThrowsMessage<common::CFatalError>(StrEq("Unable to write quick map!")));
}

TEST_F(C2dPaletteTest, ANameWithoutAnExtensionIsFatal) {
    EXPECT_THAT([this] { two_d_.loadOrBuildColorMap("vga"); },
                ThrowsMessage<common::CFatalError>(StrEq("hose!")));
}

} // namespace
} // namespace nocturne::engine
