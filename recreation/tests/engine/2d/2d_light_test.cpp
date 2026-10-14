#include "common/error/fatalerror.h"
#include "engine/2d/2d.h"
#include "tests/mocks/engine/twodfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <string>

namespace nocturne::engine {
namespace {

using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

constexpr std::size_t kTableBytes = C2d::kLightLevels * 256;

// The light table is built and loaded only by startup; every other file it reads is given.
class C2dLightTest : public C2dFixture {
protected:
    C2dLightTest() {
        givenFile("art\\vga.act", greyPalette());
        givenFile("fog\\vga.map", std::string(C2d::kColorCubeSize, '\0'));
        ON_CALL(screen_, initializeGraphicsSystem).WillByDefault(Return(1));
    }

    [[nodiscard]] int level(std::size_t row, std::size_t entry) const {
        return two_d_.getLightTable()[row][entry];
    }
};

// On greys, an entry's nearest match is its own level, kept within 10 to 245.
TEST_F(C2dLightTest, AMissingTableIsBuiltFromThePaletteAndSaved) {
    std::string written;
    givenWritable("fog\\vga.lte", written);
    two_d_.initGraphicsSystem();
    EXPECT_EQ(level(1, 100), 10);
    EXPECT_EQ(level(8, 100), 50);
    EXPECT_EQ(level(16, 100), 100);
    EXPECT_EQ(level(17, 100), 109);
    EXPECT_EQ(level(32, 100), 245);
    ASSERT_EQ(written.size(), kTableBytes);
    EXPECT_EQ(static_cast<unsigned char>(written[(7 * 256) + 100]), 50);
}

TEST_F(C2dLightTest, DarkeningLeavesTheReservedEntriesAlone) {
    std::string written;
    givenWritable("fog\\vga.lte", written);
    two_d_.initGraphicsSystem();
    EXPECT_EQ(level(1, 5), 5);
    EXPECT_EQ(level(16, 9), 9);
    EXPECT_EQ(level(1, 246), 246);
    EXPECT_EQ(level(1, 250), 250);
    EXPECT_EQ(level(17, 250), 245);
}

TEST_F(C2dLightTest, TheEndRowsRepeatPastTheTable) {
    std::string written;
    givenWritable("fog\\vga.lte", written);
    two_d_.initGraphicsSystem();
    const auto table = two_d_.getLightTable();
    EXPECT_EQ(table[0], table[1]);
    EXPECT_EQ(table[C2d::kLightLevels + 1], table[C2d::kLightLevels]);
}

TEST_F(C2dLightTest, ASavedTableIsLoadedAsItIs) {
    std::string saved(kTableBytes, '\x10');
    saved[kTableBytes - 1] = '\x11';
    givenFile("fog\\vga.lte", saved);
    expectNothingWritten();
    two_d_.initGraphicsSystem();
    EXPECT_EQ(level(1, 100), 0x10);
    EXPECT_EQ(level(32, 255), 0x11);
    EXPECT_EQ(level(33, 255), 0x11);
}

TEST_F(C2dLightTest, AShortSavedTableFillsOnlyTheRowsItHas) {
    givenFile("fog\\vga.lte", std::string(256 + 2, '\x10'));
    two_d_.initGraphicsSystem();
    EXPECT_EQ(level(2, 1), 0x10);
    EXPECT_EQ(level(2, 2), 0);
}

TEST_F(C2dLightTest, AFourKilobyteTableIsRebuiltAndLeftAsItIs) {
    givenFile("fog\\vga.lte", std::string(0x1000, '\x10'));
    expectNothingWritten();
    two_d_.initGraphicsSystem();
    EXPECT_EQ(level(8, 100), 50);
}

TEST_F(C2dLightTest, ATableThatCantBeSavedIsFatal) {
    EXPECT_THAT([this] { two_d_.initGraphicsSystem(); },
                ThrowsMessage<common::CFatalError>(StrEq("Unable to write light tab")));
}

} // namespace
} // namespace nocturne::engine
