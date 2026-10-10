#include "cockpit/drawsurf/drawsurf.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::cockpit {
namespace {

TEST(CockpitDrawsurfFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&setColor), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&setCurrentFont), void (*)(engine::CBitFont *)>);
}

} // namespace
} // namespace nocturne::cockpit
