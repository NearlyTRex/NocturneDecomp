#include "engine/texture/texture.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineTextureFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&initTextureCache), CTextureCache *(*)()>);
    static_assert(std::is_same_v<decltype(&freeTextureCache), void (*)()>);
    static_assert(std::is_same_v<decltype(&ensureTextureLoaded),
                                 SMRGLHeaderExtended *(*)(core::SMRGLTextureBasic *)>);
    static_assert(std::is_same_v<decltype(&loadTextureAndGetData),
                                 SMRGLHeaderExtended *(*)(core::SMRGLTextureBasic *)>);
    static_assert(std::is_same_v<decltype(&clearTextureCache), void (*)()>);
    static_assert(std::is_same_v<decltype(&loadAndUpdateTexture),
                                 void (*)(core::SMRGLTextureBasic *, SRGBColorPalette *)>);
    static_assert(std::is_same_v<decltype(&getTextureCacheStats), void (*)(char *)>);
    static_assert(std::is_same_v<decltype(&getCurrentTexture), core::SMRGLTextureBasic *(*)()>);
}

} // namespace
} // namespace nocturne::engine
