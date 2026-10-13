#include "common/error/fatalerror.h"
#include "engine/ncursfx/mouse.h"
#include "tests/mocks/engine/alphabitmapfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <format>
#include <string>
#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CMouse, IsNeitherCopiedNorMoved) {
    static_assert(!std::is_copy_constructible_v<CMouse>);
    static_assert(!std::is_move_constructible_v<CMouse>);
    static_assert(std::is_constructible_v<CMouse, const CDosIo &, IScreenDevice &, CSpecial &>);
}

TEST(CMouse, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMouse::load), void (CMouse::*)()>);
    static_assert(std::is_same_v<decltype(&CMouse::reset), void (CMouse::*)()>);
    static_assert(
        std::is_same_v<decltype(&CMouse::getCursor), CAlphaBitmap &(CMouse::*)(std::size_t)>);
    static_assert(
        std::is_same_v<decltype(&CMouse::getFlame), CAlphaBitmap &(CMouse::*)(std::size_t)>);
    static_assert(
        std::is_same_v<decltype(&CMouse::getSkull), CAlphaBitmap &(CMouse::*)(std::size_t)>);
}

// Every frame on disk, each filled with its own palette index: crsrN is N, flameN 10 + N and
// crsrskllN 20 + N.
class CMouseTest : public CAlphaBitmapFixture {
protected:
    CMouseTest() {
        for (int i = 1; i <= 8; ++i) {
            givenFrame(std::format("crsr{}", i), i);
        }
        for (int i = 1; i <= 7; ++i) {
            givenFrame(std::format("flame{}", i), 10 + i);
            givenFrame(std::format("crsrskll{}", i), 20 + i);
        }
    }

    void givenFrame(const std::string &name, int index) {
        givenImage(name, std::string(std::size_t{0x36} * 0x37, static_cast<char>(index)));
    }

    // The palette index a frame draws with, read back from the ramp palette's red.
    int indexOf(CAlphaBitmap &frame) {
        frame.display(0, 0, kFullAlpha);
        return static_cast<int>(screen_.pixel(0, 0) >> 16U);
    }

    CMouse mouse_{dosio_, screen_, special_};
};

TEST_F(CMouseTest, LoadsEachCursorAndFlameFromItsOwnFile) {
    mouse_.load();
    EXPECT_EQ(indexOf(mouse_.getCursor(0)), 1);
    EXPECT_EQ(indexOf(mouse_.getCursor(7)), 8);
    EXPECT_EQ(indexOf(mouse_.getFlame(0)), 11);
    EXPECT_EQ(indexOf(mouse_.getFlame(6)), 17);
}

TEST_F(CMouseTest, SkullsPastTheSeventhRepeatIt) {
    mouse_.load();
    EXPECT_EQ(indexOf(mouse_.getSkull(0)), 21);
    EXPECT_EQ(indexOf(mouse_.getSkull(6)), 27);
    EXPECT_EQ(indexOf(mouse_.getSkull(7)), 27);
    EXPECT_EQ(indexOf(mouse_.getSkull(14)), 27);
}

TEST_F(CMouseTest, AFrameOutsideItsSetIsAnError) {
    EXPECT_THROW(static_cast<void>(mouse_.getCursor(8)), std::out_of_range);
    EXPECT_THROW(static_cast<void>(mouse_.getFlame(7)), std::out_of_range);
    EXPECT_THROW(static_cast<void>(mouse_.getSkull(15)), std::out_of_range);
}

TEST_F(CMouseTest, AMissingFrameIsFatal) {
    ON_CALL(file_system_, getFileInfo(std::string_view("/game/art\\flame3.raw")))
        .WillByDefault(::testing::Return(std::nullopt));
    EXPECT_THROW(mouse_.load(), common::CFatalError);
}

} // namespace
} // namespace nocturne::engine
