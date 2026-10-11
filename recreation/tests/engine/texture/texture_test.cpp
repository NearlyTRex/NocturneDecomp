#include "engine/texture/texture.h"
#include "engine/texture/texturecache.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CTexture, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CTexture::initTextureCache), CTextureCache &(CTexture::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTexture::ensureTextureLoaded),
                       SMRGLHeaderExtended *(CTexture::*)(platform::SMRGLTextureBasic *)>);
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

TEST(CTexture, TheCacheHoldsAThousandAndTwentyFourTextures) {
    CTexture texture;
    EXPECT_EQ(texture.initTextureCache().getMaxTextureCount(), 1024);
}

} // namespace
} // namespace nocturne::engine
