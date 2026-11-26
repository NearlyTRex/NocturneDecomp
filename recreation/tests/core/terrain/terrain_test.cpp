#include "core/terrain/terrain.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CTerrain, IsConcrete) {
    static_assert(!std::is_abstract_v<CTerrain>);
}

TEST(CTerrain, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CTerrain::init), void (CTerrain::*)(const STerrainSettings &)>);
    static_assert(std::is_same_v<decltype(&CTerrain::free), void (CTerrain::*)()>);
    static_assert(std::is_same_v<decltype(&CTerrain::render),
                                 void (CTerrain::*)(int, const SGroundDrawOwners &)>);
    static_assert(std::is_same_v<decltype(&CTerrain::process), void (CTerrain::*)(int)>);
}

} // namespace
} // namespace nocturne::core
