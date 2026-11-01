#include "common/error/fatalerror.h"
#include "core/game/game.h"
#include "core/inv/inventoryassets.h"
#include "engine/alphabit/alphabitmap.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/engine/demonrendererfixture.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <format>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// The inventory over a window 300 lines high, with each of its pictures on disk, but for any
// named missing.
class CInventoryAssetsTest : public engine::CDemonRendererFixture {
protected:
    CInventoryAssetsTest() {
        ON_CALL(screen_, getWindowHeight()).WillByDefault(Return(300));
        game_parts_.getGame().game_pixy = 480;
    }

    void givenArt(std::string_view missing = "") {
        for (const char *name :
             {"invback", "invback2", "weapback", "weapback2", "battery", "hbar1", "hbar2",
              "tommyclip24x24", "bullet24x24", "lithium24x24", "mercurybullet24x24",
              "shotshell24x24", "silverbullet24x24", "holybullet24x24"}) {
            if (name != missing) {
                givenFile(std::format("art\\{}.raw", name), "");
                givenFile(std::format("art\\{}.act", name), "");
            }
        }
    }

    [[nodiscard]] std::size_t pixels(EInventoryBitmap bitmap) const {
        return assets_.getBitmap(bitmap).getRaw().size();
    }

    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGameParts game_parts_{clock_, dosio_};
    CInventoryAssets assets_{
        {.dosio = dosio_, .screen = screen_, .special = special_, .game = game_parts_.getGame()}};
};

// 208 by 96 without invsize.txt; the ends are 96 square.
TEST_F(CInventoryAssetsTest, ThePicturesAreReadAtTheirSizes) {
    givenArt();
    assets_.load();
    EXPECT_EQ(assets_.getScreenHeight(), 300);
    EXPECT_EQ(assets_.getWidth(), 208);
    EXPECT_EQ(assets_.getHeight(), 96);
    EXPECT_EQ(pixels(EInventoryBitmap::kInventoryBackground), 208U * 96);
    EXPECT_EQ(pixels(EInventoryBitmap::kInventoryBackgroundEnd), 96U * 96);
    EXPECT_EQ(pixels(EInventoryBitmap::kWeaponBackground), 208U * 96);
    EXPECT_EQ(pixels(EInventoryBitmap::kWeaponBackgroundEnd), 96U * 96);
    EXPECT_EQ(pixels(EInventoryBitmap::kBattery), 16U * 32);
    EXPECT_EQ(pixels(EInventoryBitmap::kHealthBar2), 27U * 64);
    EXPECT_EQ(pixels(EInventoryBitmap::kHolyBullet), 24U * 24);
}

TEST_F(CInventoryAssetsTest, InvsizeTxtGivesTheInventorysSize) {
    givenArt();
    givenFile("data\\invsize.txt", "100,50\n");
    assets_.load();
    EXPECT_EQ(assets_.getWidth(), 100);
    EXPECT_EQ(pixels(EInventoryBitmap::kWeaponBackground), 100U * 50);
    EXPECT_EQ(pixels(EInventoryBitmap::kWeaponBackgroundEnd), 50U * 50);
}

// Below 384 lines all but the backgrounds and the battery are halved.
TEST_F(CInventoryAssetsTest, ASmallScreenHalvesMostPictures) {
    givenArt();
    game_parts_.getGame().game_pixy = 383;
    assets_.load();
    EXPECT_EQ(pixels(EInventoryBitmap::kInventoryBackground), 208U * 96);
    EXPECT_EQ(pixels(EInventoryBitmap::kInventoryBackgroundEnd), 48U * 48);
    EXPECT_EQ(pixels(EInventoryBitmap::kBattery), 16U * 32);
    EXPECT_EQ(pixels(EInventoryBitmap::kHealthBar1), 13U * 32);
    EXPECT_EQ(pixels(EInventoryBitmap::kTommyClip), 12U * 12);
}

TEST_F(CInventoryAssetsTest, AMissingPictureIsFatal) {
    givenArt("hbar2");
    EXPECT_THAT([this] { assets_.load(); }, ThrowsMessage<common::CFatalError>(StrEq(
                                                "CAlphaBitmap::load - Can't open hbar2.raw")));
}

// The list stops at its first line that isn't three quoted strings, and is read afresh each
// load.
TEST_F(CInventoryAssetsTest, TheItemsAreReadFromTheItemList) {
    givenArt();
    givenFile("itemlist.txt", "\"key.kfm\", \"Key\", \"A brass key\"\n"
                              "\"gun.kfm\", \"Gun\", \"A gun\"\nbroken\n\"x\", \"y\", \"z\"\n");
    assets_.load();
    assets_.load();
    ASSERT_EQ(assets_.getItems().size(), 2U);
    EXPECT_EQ(assets_.getItems()[0],
              (SInventoryItemInfo{
                  .model_name = "key.kfm", .display_name = "Key", .description = "A brass key"}));
    EXPECT_EQ(assets_.getItems()[1].description, "A gun");
}

TEST_F(CInventoryAssetsTest, AListOfWholeLinesIsReadToItsEnd) {
    givenArt();
    givenFile("itemlist.txt", "\"a.kfm\", \"A\", \"An a\"\n\"b.kfm\", \"B\", \"A b\"\n");
    assets_.load();
    ASSERT_EQ(assets_.getItems().size(), 2U);
    EXPECT_EQ(assets_.getItems()[1].model_name, "b.kfm");
}

TEST_F(CInventoryAssetsTest, WithoutAnItemListThereAreNoItems) {
    givenArt();
    assets_.load();
    EXPECT_TRUE(assets_.getItems().empty());
}

} // namespace
} // namespace nocturne::core
