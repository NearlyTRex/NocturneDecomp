#include "engine/texture/texture.h"
#include "engine/texture/texturecache.h"
#include "platform/mrgltexturebasic.h"
#include "tests/mocks/engine/texturefixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

using ::testing::_;
using ::testing::AtLeast;
using ::testing::Each;
using ::testing::Return;

TEST(CTexture, Constructors) {
    static_assert(std::is_constructible_v<CTexture, const STextureOwners &>);
}

TEST(CTexture, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CTexture::initTextureCache), CTextureCache &(CTexture::*)()>);
    static_assert(std::is_same_v<decltype(&CTexture::ensureTextureLoaded),
                                 void (CTexture::*)(platform::SMRGLTextureBasic &)>);
    static_assert(
        std::is_same_v<decltype(&CTexture::loadTextureAndGetData),
                       SMRGLHeaderExtended *(CTexture::*)(platform::SMRGLTextureBasic *)>);
    static_assert(std::is_same_v<decltype(&CTexture::clearTextureCache), void (CTexture::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTexture::loadAndUpdateTexture),
                       void (CTexture::*)(platform::SMRGLTextureBasic *, SRGBColorPalette *)>);
    static_assert(
        std::is_same_v<decltype(&CTexture::getTextureCacheStats), void (CTexture::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CTexture::getCurrentTexture),
                                 platform::SMRGLTextureBasic *(CTexture::*)()>);
}

class CTextureTest : public CTextureFixture {
protected:
    CTexture texture_{owners_};
};

TEST_F(CTextureTest, TheCacheHoldsAThousandAndTwentyFourTextures) {
    EXPECT_EQ(texture_.initTextureCache().getMaxTextureCount(), 1024);
}

TEST_F(CTextureTest, ANewTextureIsLoadedMadeCurrentAndRemembered) {
    givenTexels("a", 32, 0);
    givenTexels("b", 64, 4);
    platform::SMRGLTextureBasic first{.texture_name = "a.raw", .cache_index = 0};
    platform::SMRGLTextureBasic second{.texture_name = "b.raw", .cache_index = 0};
    texture_.ensureTextureLoaded(first);
    texture_.ensureTextureLoaded(second);
    EXPECT_EQ(first.cache_index, 0);
    EXPECT_EQ(second.cache_index, 1);
    EXPECT_EQ(current_texture_.dimension, 64);
    EXPECT_THAT(current_texture_.data, Each(4));
}

TEST_F(CTextureTest, ALoadedTextureIsFoundAgainWithoutReloading) {
    givenTexels("a", 32, 0);
    platform::SMRGLTextureBasic texture{.texture_name = "a.raw", .cache_index = 0};
    texture_.ensureTextureLoaded(texture);
    EXPECT_CALL(file_system_, openFile).Times(0);
    // Only the low 16 bits of the remembered slot are tried.
    texture.cache_index = 0x10000;
    texture_.ensureTextureLoaded(texture);
    EXPECT_EQ(texture.cache_index, 0);
    EXPECT_EQ(current_texture_.dimension, 32);
}

TEST_F(CTextureTest, AnUnnamedTextureOrDisabledTexturesLoadNothing) {
    givenTexels("a", 32, 0);
    platform::SMRGLTextureBasic unnamed;
    unnamed.cache_index = 7;
    texture_.ensureTextureLoaded(unnamed);
    EXPECT_EQ(unnamed.cache_index, 7);
    current_texture_.textures_disabled = true;
    platform::SMRGLTextureBasic named{.texture_name = "a.raw", .cache_index = 7};
    texture_.ensureTextureLoaded(named);
    EXPECT_EQ(named.cache_index, 7);
    EXPECT_EQ(current_texture_.dimension, 0);
}

TEST_F(CTextureTest, TheRendererIsToldOfANewTextureThenSelectsItAfter) {
    startRenderer();
    givenTexels("a", 32, 0);
    platform::SMRGLTextureBasic texture{.texture_name = "a.raw", .cache_index = 0};
    EXPECT_CALL(renderer_, updateTexture(&texture, 32, _, _, nullptr)).WillOnce(Return(1));
    texture_.ensureTextureLoaded(texture);
    EXPECT_CALL(renderer_, selectTexture(&texture, 32, _, _, nullptr)).WillOnce(Return(1));
    texture_.ensureTextureLoaded(texture);
}

TEST_F(CTextureTest, ClearingTheCacheForgetsEveryTexture) {
    givenTexels("a", 32, 0);
    platform::SMRGLTextureBasic texture{.texture_name = "a.raw", .cache_index = 0};
    texture_.ensureTextureLoaded(texture);
    texture_.clearTextureCache();
    EXPECT_CALL(file_system_, openFile).Times(AtLeast(1));
    texture_.ensureTextureLoaded(texture);
}

TEST_F(CTextureTest, AFreshCacheReplacesTheOldOne) {
    givenTexels("a", 32, 0);
    platform::SMRGLTextureBasic texture{.texture_name = "a.raw", .cache_index = 0};
    texture_.ensureTextureLoaded(texture);
    EXPECT_EQ(texture_.initTextureCache().findTexture(0, "a.raw"), -1);
}

} // namespace
} // namespace nocturne::engine
