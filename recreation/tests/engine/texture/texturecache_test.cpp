#include "common/error/fatalerror.h"
#include "engine/texture/texturecache.h"
#include "tests/mocks/engine/texturefixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <array>
#include <cstdint>
#include <string>
#include <type_traits>

namespace nocturne::engine {
namespace {

using ::testing::Each;
using ::testing::ElementsAre;
using ::testing::IsEmpty;
using ::testing::SizeIs;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

TEST(CTextureCache, IsConcrete) {
    static_assert(!std::is_abstract_v<CTextureCache>);
}

TEST(CTextureCache, Constructors) {
    static_assert(std::is_constructible_v<CTextureCache, int, const STextureOwners &>);
}

TEST(CTextureCache, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTextureCache::getMaxTextureCount),
                                 int (CTextureCache::*)() const>);
    static_assert(std::is_same_v<decltype(&CTextureCache::reset), void (CTextureCache::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTextureCache::freeTextures), void (CTextureCache::*)()>);
    static_assert(std::is_same_v<decltype(&CTextureCache::loadTexture),
                                 int (CTextureCache::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CTextureCache::findTexture),
                                 int (CTextureCache::*)(int, std::string_view) const>);
    static_assert(
        std::is_same_v<decltype(&CTextureCache::setupTexture), void (CTextureCache::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CTextureCache::renderAllTextures), void (CTextureCache::*)()>);
    static_assert(std::is_same_v<decltype(&CTextureCache::getTextureCacheStats),
                                 int (CTextureCache::*)(char *)>);
}

// The texels of a 32 by 32 texture.
constexpr std::size_t kTexels = 1024;

class CTextureCacheTest : public CTextureFixture {
protected:
    explicit CTextureCacheTest(int bits_per_pixel = 32) : CTextureFixture(bits_per_pixel) {}

    // Loads the name and makes it current.
    void select(const std::string &name) {
        cache_.setupTexture(cache_.loadTexture(name));
    }

    // The dimension, both shifts, both masks and the bits once a texture of this dimension is
    // current.
    std::array<std::int64_t, 6> shapeOfSelected(int dimension) {
        const std::string stem = "t" + std::to_string(dimension);
        givenTexels(stem, dimension, 1);
        select(stem + ".raw");
        return {current_texture_.dimension,      current_texture_.texture_shift1,
                current_texture_.texture_shift2, current_texture_.texture_mask1,
                current_texture_.texture_mask2,  current_texture_.texture_bits};
    }

    CTextureCache cache_{3, owners_};
};

TEST_F(CTextureCacheTest, HoldsUpToItsGivenCount) {
    EXPECT_EQ(cache_.getMaxTextureCount(), 3);
}

TEST_F(CTextureCacheTest, ATextureBringsItsTexelsPaletteAndOpacity) {
    givenTexels("wall", 32, 7);
    givenFile("art\\wall.act", rampPalette());
    givenFile("art\\wall.opa", std::string(kTexels, '\x80'));
    select("wall.raw");
    EXPECT_EQ(current_texture_.dimension, 32);
    EXPECT_THAT(current_texture_.data, SizeIs(kTexels));
    EXPECT_THAT(current_texture_.data, Each(7));
    EXPECT_THAT(current_texture_.opacity, SizeIs(kTexels));
    EXPECT_THAT(current_texture_.opacity, Each(0x80));
    ASSERT_THAT(current_texture_.palette, SizeIs(768));
    EXPECT_THAT(current_texture_.palette.subspan(3, 3), ElementsAre(1, 2, 3));
}

TEST_F(CTextureCacheTest, TheSizeGivesTheDimensionAndTheRasterisersShifts) {
    EXPECT_THAT(shapeOfSelected(32), ElementsAre(32, 19, 14, 0x1f, 0x3e0, 5));
    EXPECT_THAT(shapeOfSelected(64), ElementsAre(64, 18, 12, 0x3f, 0xfc0, 6));
    EXPECT_THAT(shapeOfSelected(128), ElementsAre(128, 17, 10, 0x7f, 0x3f80, 7));
    EXPECT_THAT(shapeOfSelected(256), ElementsAre(256, 16, 8, 0xff, 0xff00, 8));
    EXPECT_THAT(shapeOfSelected(512), ElementsAre(512, 15, 6, 0x1ff, 0x3fe00, 9));
    EXPECT_THAT(shapeOfSelected(1024), ElementsAre(1024, 14, 4, 0x3ff, 0xffc00, 10));
}

TEST_F(CTextureCacheTest, ASizeThatIsNoSquareTextureIsFatal) {
    givenFile("art\\odd.raw", std::string(1000, 0));
    EXPECT_THAT([&] { static_cast<void>(cache_.loadTexture("odd.raw")); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CTextureCache::load - Bad texture length : odd.raw,1000")));
    EXPECT_THAT([&] { static_cast<void>(cache_.loadTexture("gone.raw")); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CTextureCache::load - Bad texture length : gone.raw,-1")));
}

TEST_F(CTextureCacheTest, ANameWithoutAnExtensionIsFatal) {
    givenFile("art\\plain", std::string(kTexels, 0));
    EXPECT_THAT(
        [&] { static_cast<void>(cache_.loadTexture("plain")); },
        ThrowsMessage<common::CFatalError>(StrEq("CTextureCache::load - Can't find extension")));
}

TEST_F(CTextureCacheTest, MissingFilesFallBackToTheGamePaletteBlankTexelsAndNoOpacity) {
    givenFile("art\\game.pal", rampPalette());
    two_d_.loadPaletteFile("game.pal");
    // The size comes from the name itself; the texels would be the .raw beside it.
    givenFile("art\\wall.tga", std::string(kTexels, 9));
    select("wall.tga");
    EXPECT_THAT(current_texture_.data, Each(0));
    EXPECT_THAT(current_texture_.opacity, IsEmpty());
    EXPECT_THAT(current_texture_.palette.subspan(3, 3), ElementsAre(1, 2, 3));
}

TEST_F(CTextureCacheTest, ShortFilesLeaveTheRestZero) {
    givenFile("art\\wall.tga", std::string(kTexels, 0));
    givenFile("art\\wall.raw", std::string(2, 5));
    givenFile("art\\wall.act", std::string(4, 6));
    givenFile("art\\wall.opa", std::string(1, 7));
    select("wall.tga");
    EXPECT_THAT(current_texture_.data.first(3), ElementsAre(5, 5, 0));
    EXPECT_THAT(current_texture_.palette.first(5), ElementsAre(6, 6, 6, 6, 0));
    EXPECT_THAT(current_texture_.opacity.first(2), ElementsAre(7, 0));
}

TEST_F(CTextureCacheTest, SlotsAreTakenInTurnAndWrapToTheFirst) {
    for (const char *stem : {"a", "b", "c", "d"}) {
        givenTexels(stem, 32, 0);
    }
    EXPECT_EQ(cache_.loadTexture("a.raw"), 0);
    EXPECT_EQ(cache_.loadTexture("b.raw"), 1);
    EXPECT_EQ(cache_.loadTexture("c.raw"), 2);
    EXPECT_EQ(cache_.loadTexture("d.raw"), 0);
    EXPECT_EQ(cache_.findTexture(-1, "a.raw"), -1);
}

TEST_F(CTextureCacheTest, TheHintIsTriedFirstThenTheSlotsBelowTheNextFree) {
    for (const char *stem : {"a", "b"}) {
        givenTexels(stem, 32, 0);
    }
    static_cast<void>(cache_.loadTexture("a.raw"));
    static_cast<void>(cache_.loadTexture("b.raw"));
    EXPECT_EQ(cache_.findTexture(1, "b.raw"), 1);
    EXPECT_EQ(cache_.findTexture(0, "b.raw"), 1);
    EXPECT_EQ(cache_.findTexture(-1, "b.raw"), 1);
    EXPECT_EQ(cache_.findTexture(3, "a.raw"), 0);
    EXPECT_EQ(cache_.findTexture(0, "c.raw"), -1);
}

TEST_F(CTextureCacheTest, AfterAWrapOnlyTheHintFindsASlotPastTheNextFree) {
    for (const char *stem : {"a", "b", "c"}) {
        givenTexels(stem, 32, 0);
        static_cast<void>(cache_.loadTexture(std::string(stem) + ".raw"));
    }
    EXPECT_EQ(cache_.findTexture(-1, "b.raw"), -1);
    EXPECT_EQ(cache_.findTexture(1, "b.raw"), 1);
}

TEST_F(CTextureCacheTest, ReloadingASlotWithoutOpacityDropsTheOldOne) {
    givenTexels("a", 32, 0);
    givenFile("art\\a.opa", std::string(kTexels, 1));
    givenTexels("b", 32, 0);
    CTextureCache cache(1, owners_);
    cache.setupTexture(cache.loadTexture("a.raw"));
    EXPECT_THAT(current_texture_.opacity, SizeIs(kTexels));
    cache.setupTexture(cache.loadTexture("b.raw"));
    EXPECT_THAT(current_texture_.opacity, IsEmpty());
}

TEST_F(CTextureCacheTest, FreeingEmptiesEverySlot) {
    givenTexels("a", 32, 0);
    select("a.raw");
    cache_.freeTextures();
    EXPECT_EQ(cache_.findTexture(0, "a.raw"), -1);
    // An empty slot clears the texture but leaves the shifts as they were.
    current_texture_.offset_u = 3;
    current_texture_.offset_v = 4;
    cache_.setupTexture(0);
    EXPECT_EQ(current_texture_.dimension, 0);
    EXPECT_THAT(current_texture_.data, IsEmpty());
    EXPECT_EQ(current_texture_.offset_u, 0);
    EXPECT_EQ(current_texture_.offset_v, 0);
    EXPECT_EQ(current_texture_.texture_bits, 5);
    EXPECT_EQ(cache_.loadTexture("a.raw"), 0);
}

TEST_F(CTextureCacheTest, AtThirtyTwoBitsTheHardwarePaletteIsInTheModesLayout) {
    givenTexels("a", 32, 0);
    givenFile("art\\a.act", rampPalette());
    select("a.raw");
    EXPECT_EQ(screen_.getHardwarePalette16()[8], 0U);
    EXPECT_EQ(screen_.getHardwarePalette32()[8], 0x081018U);
}

TEST_F(CTextureCacheTest, WithTheRendererOnTheHardwarePalettesAreLeftAlone) {
    startRenderer();
    givenTexels("a", 32, 0);
    givenFile("art\\a.act", rampPalette());
    select("a.raw");
    EXPECT_EQ(screen_.getHardwarePalette16()[8], 0U);
    EXPECT_EQ(screen_.getHardwarePalette32()[8], 0U);
}

class CTextureCache16Test : public CTextureCacheTest {
protected:
    CTextureCache16Test() : CTextureCacheTest(16) {}
};

TEST_F(CTextureCache16Test, BelowThirtyTwoBitsTheSixteenBitPaletteIsInTheModesLayout) {
    givenTexels("a", 32, 0);
    givenFile("art\\a.act", rampPalette());
    select("a.raw");
    // (8, 16, 24) in 5-6-5.
    EXPECT_EQ(screen_.getHardwarePalette16()[8], (1U << 11U) | (4U << 5U) | 3U);
    EXPECT_EQ(screen_.getHardwarePalette32()[8], 0x081018U);
}

} // namespace
} // namespace nocturne::engine
