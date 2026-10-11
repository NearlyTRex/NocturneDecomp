#include "engine/texture/texturecache.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CTextureCache, IsConcrete) {
    static_assert(!std::is_abstract_v<CTextureCache>);
}

TEST(CTextureCache, Constructors) {
    static_assert(std::is_constructible_v<CTextureCache, int>);
}

TEST(CTextureCache, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTextureCache::getMaxTextureCount),
                                 int (CTextureCache::*)() const>);
    static_assert(std::is_same_v<decltype(&CTextureCache::reset), void (CTextureCache::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTextureCache::freeTextures), void (CTextureCache::*)()>);
    static_assert(
        std::is_same_v<decltype(&CTextureCache::loadTexture), int (CTextureCache::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CTextureCache::findTexture), int (CTextureCache::*)(int, char *)>);
    static_assert(
        std::is_same_v<decltype(&CTextureCache::setupTexture), void (CTextureCache::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CTextureCache::renderAllTextures), void (CTextureCache::*)()>);
    static_assert(std::is_same_v<decltype(&CTextureCache::getTextureCacheStats),
                                 int (CTextureCache::*)(char *)>);
}

TEST(CTextureCache, HoldsUpToItsGivenCount) {
    const CTextureCache cache(7);
    EXPECT_EQ(cache.getMaxTextureCount(), 7);
}

} // namespace
} // namespace nocturne::engine
