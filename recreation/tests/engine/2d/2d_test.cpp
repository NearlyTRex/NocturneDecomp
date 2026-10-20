#include "common/error/fatalerror.h"
#include "engine/2d/2d.h"
#include "tests/mocks/engine/twodfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>
#include <type_traits>

namespace nocturne::engine {
namespace {

using ::testing::InSequence;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(C2d, PublicInterface) {
    static_assert(std::is_same_v<decltype(&C2d::initGraphicsSystem), void (C2d::*)()>);
    static_assert(std::is_same_v<decltype(&C2d::cleanupGraphicsSystem), void (C2d::*)()>);
    static_assert(std::is_same_v<decltype(&C2d::loadPaletteFile), void (C2d::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&C2d::findBestPaletteMatch),
                                 int (C2d::*)(int, int, int, int, int) const>);
    static_assert(std::is_same_v<decltype(&C2d::buildColorLookupTable), void (C2d::*)()>);
    static_assert(
        std::is_same_v<decltype(&C2d::loadOrBuildColorMap), void (C2d::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&C2d::plotPixel), void (C2d::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&C2d::drawLine), void (C2d::*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&C2d::drawLine3D),
                                 void (C2d::*)(int, int, std::uint32_t, int, int, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&C2d::setupViewportAndClipping),
                                 void (C2d::*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&C2d::getStringWidth), int (C2d::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&C2d::drawText), void (C2d::*)(std::string_view, int, int)>);
    static_assert(std::is_same_v<decltype(&C2d::drawString), void (C2d::*)(char *, int, int, int)>);
    static_assert(std::is_same_v<decltype(&C2d::drawTextXY), void (C2d::*)(int, int, char *)>);
    static_assert(std::is_same_v<decltype(&C2d::drawTextColor), void (C2d::*)(char *, int, int)>);
    static_assert(
        std::is_same_v<decltype(&C2d::drawTextRightAlignedColor), void (C2d::*)(char *, int, int)>);
    static_assert(
        std::is_same_v<decltype(&C2d::drawTextCenteredAtColor), void (C2d::*)(char *, int, int)>);
    static_assert(std::is_same_v<decltype(&C2d::drawTextCenteredColor),
                                 void (C2d::*)(char *, int, int, int)>);
    static_assert(std::is_same_v<decltype(&C2d::drawTextCenteredXYColor),
                                 void (C2d::*)(int, int, int, char *)>);
    static_assert(std::is_same_v<decltype(&C2d::getTextWrapEnabled), int (C2d::*)()>);
    static_assert(std::is_same_v<decltype(&C2d::setTextWrapEnabled), void (C2d::*)(bool)>);
    static_assert(std::is_same_v<decltype(&C2d::disableTextWrap), void (C2d::*)()>);
    static_assert(std::is_same_v<decltype(&C2d::getTextColor), int (C2d::*)()>);
    static_assert(std::is_same_v<decltype(&C2d::setTextColor), void (C2d::*)(int)>);
    static_assert(std::is_same_v<decltype(&C2d::resetGraphicsSystem), void (C2d::*)()>);
    static_assert(std::is_same_v<decltype(&C2d::reinitializeGraphicsSystem), void (C2d::*)()>);
    static_assert(
        std::is_same_v<decltype(&C2d::clipLineGlobal), void (C2d::*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&C2d::drawHLine), void (C2d::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&C2d::drawVLine), void (C2d::*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&C2d::drawRect), void (C2d::*)(int, int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&C2d::fillRectColor), void (C2d::*)(int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&C2d::fillRectWithBorder),
                                 void (C2d::*)(int, int, int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&C2d::clearInputAndWait), void (C2d::*)()>);
    static_assert(std::is_same_v<decltype(&C2d::getClipRect), SClipRect (C2d::*)() const>);
    static_assert(std::is_same_v<decltype(&C2d::setClipRect), void (C2d::*)(const SClipRect &)>);
    static_assert(
        std::is_same_v<decltype(&C2d::setProjection), void (C2d::*)(const SProjectionParams &)>);
    static_assert(std::is_same_v<decltype(&C2d::setViewportSize), void (C2d::*)(int, int)>);
    static_assert(std::is_same_v<decltype(&C2d::getActiveRenderColor), int (C2d::*)() const>);
    static_assert(std::is_same_v<decltype(&C2d::setActiveRenderColor), void (C2d::*)(int)>);
}

class C2dTest : public C2dFixture {
protected:
    // Every file initGraphicsSystem reads, the caches included, so nothing is built.
    void givenStartupFiles() {
        givenFile("art\\vga.act", greyPalette());
        givenFile("fog\\vga.lte", std::string(C2d::kLightLevels * 256, '\x21'));
        givenFile("fog\\vga.map", std::string(C2d::kColorCubeSize, '\x22'));
        ON_CALL(screen_, initializeGraphicsSystem).WillByDefault(Return(1));
    }
};

TEST_F(C2dTest, StartupBringsUpTheScreenAndLoadsThePaletteAndItsTables) {
    givenStartupFiles();
    givenFile("art\\default.act", std::string(C2d::kPaletteBytes, '\x05'));
    ON_CALL(screen_, getWindowWidth).WillByDefault(Return(320));
    ON_CALL(screen_, getWindowHeight).WillByDefault(Return(200));
    {
        const InSequence order;
        EXPECT_CALL(screen_, initializeGraphicsSystem(320, 200)).WillOnce(Return(1));
        EXPECT_CALL(screen_, setScreenResolution(640, 480, 8)).WillOnce(Return(false));
        EXPECT_CALL(screen_, setupColorPalette());
    }
    two_d_.initGraphicsSystem();
    EXPECT_EQ(two_d_.getSourcePaletteData()[std::size_t{200} * 3], 200);
    EXPECT_EQ(two_d_.getLightTable()[1][0], 0x21);
    EXPECT_EQ(two_d_.getColorCubeLookup()[0x7fff], 0x22);
    EXPECT_EQ(two_d_.getDefaultPalette()[767], 5);
}

TEST_F(C2dTest, StartupFillsTheReciprocalTable) {
    givenStartupFiles();
    two_d_.initGraphicsSystem();
    const auto table = two_d_.getReciprocalLookupTable();
    EXPECT_EQ(table[0], 0xffffffffU);
    EXPECT_EQ(table[1], 4294967295U);
    EXPECT_EQ(table[2], 2147483647U);
    EXPECT_EQ(table[3], 1431655765U);
    EXPECT_EQ(table[1599], 2686033U);
}

TEST_F(C2dTest, WithoutADefaultPaletteItStaysBlack) {
    givenStartupFiles();
    two_d_.initGraphicsSystem();
    EXPECT_EQ(two_d_.getDefaultPalette(), C2d::Palette{});
}

TEST_F(C2dTest, AScreenWithNoRoomIsFatal) {
    givenStartupFiles();
    EXPECT_CALL(screen_, initializeGraphicsSystem).WillOnce(Return(0));
    EXPECT_THAT(
        [this] { two_d_.initGraphicsSystem(); },
        ThrowsMessage<common::CFatalError>(StrEq("No room for frame buffer.  Please run SETUP")));
}

TEST_F(C2dTest, AMissingPaletteIsFatal) {
    EXPECT_THAT([this] { two_d_.loadPaletteFile("vga.act"); },
                ThrowsMessage<common::CFatalError>(StrEq("Unable to open VGA palette")));
}

TEST_F(C2dTest, AShortPaletteReplacesOnlyTheEntriesItHas) {
    loadGreyPalette();
    givenFile("art\\short.act", "\x09\x08\x07");
    two_d_.loadPaletteFile("short.act");
    EXPECT_EQ(two_d_.getSourcePaletteData()[0], 9);
    EXPECT_EQ(two_d_.getSourcePaletteData()[2], 7);
    EXPECT_EQ(two_d_.getSourcePaletteData()[3], 1);
}

TEST_F(C2dTest, TheViewportCentresTheProjectionOnTheClipRectangle) {
    two_d_.setupViewportAndClipping(0, 0, 639, 479);
    EXPECT_EQ(two_d_.getClipLeft(), 0);
    EXPECT_EQ(two_d_.getClipTop(), 0);
    EXPECT_EQ(two_d_.getClipRight(), 639);
    EXPECT_EQ(two_d_.getClipBottom(), 479);
    EXPECT_EQ(two_d_.getViewportWidth(), 640);
    EXPECT_EQ(two_d_.getViewportHeight(), 480);
    const SProjectionParams &projection = two_d_.getProjection();
    EXPECT_EQ(projection.half_width_fixed, 319 << 16);
    EXPECT_EQ(projection.neg_half_height_fixed, -239 * 65536);
    EXPECT_EQ(projection.center_x_fixed, 320 << 16);
    EXPECT_EQ(projection.center_y_fixed, 240 << 16);
}

TEST_F(C2dTest, AnOddViewportRoundsItsHalvesDown) {
    two_d_.setupViewportAndClipping(10, 20, 110, 70);
    EXPECT_EQ(two_d_.getViewportWidth(), 101);
    EXPECT_EQ(two_d_.getViewportHeight(), 51);
    const SProjectionParams &projection = two_d_.getProjection();
    EXPECT_EQ(projection.half_width_fixed, 49 << 16);
    EXPECT_EQ(projection.neg_half_height_fixed, -24 * 65536);
    EXPECT_EQ(projection.center_x_fixed, 60 << 16);
    EXPECT_EQ(projection.center_y_fixed, 45 << 16);
}

} // namespace
} // namespace nocturne::engine
