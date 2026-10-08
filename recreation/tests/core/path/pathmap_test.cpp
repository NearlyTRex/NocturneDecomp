#include "core/path/pathmap.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CPathMap, IsConcrete) {
    static_assert(!std::is_abstract_v<CPathMap>);
}

TEST(CPathMap, Constructors) {
    static_assert(std::is_constructible_v<CPathMap>);
}

TEST(CPathMap, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CPathMap::updateIfNeeded), void (CPathMap::*)(CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CPathMap::findPathWithRetry),
                                 int (CPathMap::*)(CVector3f *, CVector3f *, int)>);
    static_assert(
        std::is_same_v<decltype(&CPathMap::renderPathMap), void (CPathMap::*)(int, int, int, int)>);
    static_assert(std::is_same_v<decltype(&CPathMap::reset), void (CPathMap::*)()>);
    static_assert(std::is_same_v<decltype(&CPathMap::setupPathSearch), void (CPathMap::*)()>);
}

} // namespace
} // namespace nocturne::core
