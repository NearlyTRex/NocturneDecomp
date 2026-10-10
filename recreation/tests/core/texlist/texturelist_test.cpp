#include "core/texlist/texturelist.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTextureList, IsConcrete) {
    static_assert(!std::is_abstract_v<CTextureList>);
}

TEST(CTextureList, Constructors) {
    static_assert(std::is_constructible_v<CTextureList>);
}

TEST(CTextureList, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CTextureList::load), void (CTextureList::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CTextureList::captureTexture),
                                 void (CTextureList::*)(std::uint32_t)>);
}

} // namespace
} // namespace nocturne::core
