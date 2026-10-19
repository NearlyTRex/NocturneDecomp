#include "common/error/fatalerror.h"
#include "core/ground/ground.h"
#include "core/terrain/terrain.h"
#include "core/texlist/texturelist.h"
#include "tests/mocks/engine/podfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <string>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::ElementsAre;
using ::testing::IsEmpty;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

class CGroundLoadTest : public engine::CPodFixture {
protected:
    // A 2 by 2 ground's heights, colours and one texture.
    void givenGround(const std::string &heights, const std::string &colors) {
        givenFile("data\\junk.raw", heights);
        givenFile("data\\junk.clr", colors);
        givenFile("data\\junk.tex", "1\nsand.raw\n");
    }

    std::vector<std::int16_t> heights() const {
        std::vector<std::int16_t> loaded;
        for (const SGroundCell &cell : ground_.getTerrainData()) {
            loaded.push_back(cell.height);
        }
        return loaded;
    }

    std::vector<std::uint16_t> colors() const {
        std::vector<std::uint16_t> loaded;
        for (const SGroundCell &cell : ground_.getTerrainData()) {
            loaded.push_back(cell.color);
        }
        return loaded;
    }

    void expectFatal(const std::string &filename, const std::string &message) {
        EXPECT_THAT([&] { ground_.load(filename); },
                    ThrowsMessage<common::CFatalError>(StrEq(message)));
    }

    CGround ground_{dosio_, 2, 2};
};

TEST_F(CGroundLoadTest, InitMakesAZeroGridAndAnEmptyTextureList) {
    EXPECT_EQ(ground_.getWidth(), 2);
    EXPECT_EQ(ground_.getHeight(), 2);
    EXPECT_THAT(ground_.getTerrainData(), IsEmpty());
    ground_.init();
    EXPECT_THAT(heights(), ElementsAre(0, 0, 0, 0));
    EXPECT_THAT(ground_.getTextureList().getTextureEntries(), IsEmpty());
}

TEST_F(CGroundLoadTest, InitStartsAFreshTextureList) {
    givenGround(std::string(4, '\0'), std::string(8, '\0'));
    ground_.init();
    ground_.load("junk.jnk");
    ground_.init();
    EXPECT_THAT(ground_.getTextureList().getTextureEntries(), IsEmpty());
}

TEST_F(CGroundLoadTest, ReadsHeightsColoursAndTextures) {
    givenGround(std::string("\x00\x01\x80\xff", 4),
                std::string("\x01\x02\x03\x04\x05\x06\x07\x08", 8));
    ground_.init();
    ground_.load("junk.jnk");
    EXPECT_THAT(heights(), ElementsAre(0, 128, 16384, 32640));
    EXPECT_THAT(colors(), ElementsAre(0x0201, 0x0403, 0x0605, 0x0807));
    EXPECT_EQ(ground_.getTextureList().getTextureEntries()[0].texture_name, "SAND.RAW");
}

TEST_F(CGroundLoadTest, ShortFilesGiveLowHeightsAndLeaveColours) {
    givenGround(std::string("\x02", 1), std::string("\x01\x02\x03\x04\x05\x06\x07\x08", 8));
    ground_.init();
    ground_.load("junk.jnk");
    givenFile("data\\junk.clr", std::string("\x11\x12\x13", 3));
    ground_.load("junk.jnk");
    EXPECT_THAT(heights(), ElementsAre(256, -128, -128, -128));
    EXPECT_THAT(colors(), ElementsAre(0x1211, 0x0413, 0x0605, 0x0807));
}

TEST_F(CGroundLoadTest, FreeDropsTheGridAndTextures) {
    givenGround(std::string(4, '\0'), std::string(8, '\0'));
    ground_.init();
    ground_.load("junk.jnk");
    ground_.free();
    EXPECT_THAT(ground_.getTerrainData(), IsEmpty());
    EXPECT_THAT(ground_.getTextureList().getTextureEntries(), IsEmpty());
}

TEST_F(CGroundLoadTest, AGridTooBigForAnIntOfBytesIsOutOfMemory) {
    CGround huge(dosio_, 0x8000, 0x4000);
    EXPECT_THAT([&huge] { huge.init(); },
                ThrowsMessage<common::CFatalError>(StrEq("CGround::init - Out of memory")));
    CGround negative(dosio_, -1, 1);
    EXPECT_THAT([&negative] { negative.init(); },
                ThrowsMessage<common::CFatalError>(StrEq("CGround::init - Out of memory")));
}

TEST_F(CGroundLoadTest, ANameWithoutADotIsFatal) {
    expectFatal("junk", "eopen - ext not found!");
}

TEST_F(CGroundLoadTest, AMissingFileIsFatal) {
    expectFatal("junk.jnk", "eopen - Cannot open file");
}

TEST_F(CGroundLoadTest, TheTerrainLoadsTheJunkGroundAndFreesIt) {
    givenGround(std::string("\x01\x01\x01\x01", 4), std::string(8, '\0'));
    CTerrain terrain(ground_);
    terrain.init();
    EXPECT_THAT(heights(), ElementsAre(128, 128, 128, 128));
    terrain.free();
    EXPECT_THAT(ground_.getTerrainData(), IsEmpty());
}

} // namespace
} // namespace nocturne::core
