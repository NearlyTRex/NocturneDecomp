#include "engine/texture/texture.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineTextureFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&ensureTextureLoaded),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLTextureBasic *)>);
    static_assert(std::is_same_v<decltype(&loadTextureAndGetData),
                                 SMRGLHeaderExtended *(*)(platform::SMRGLTextureBasic *)>);
    static_assert(std::is_same_v<decltype(&clearTextureCache), void (*)()>);
    static_assert(std::is_same_v<decltype(&loadAndUpdateTexture),
                                 void (*)(platform::SMRGLTextureBasic *, SRGBColorPalette *)>);
    static_assert(std::is_same_v<decltype(&getTextureCacheStats), void (*)(char *)>);
    static_assert(std::is_same_v<decltype(&getCurrentTexture), platform::SMRGLTextureBasic *(*)()>);
}

} // namespace
} // namespace nocturne::engine
