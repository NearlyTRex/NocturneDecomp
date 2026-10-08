#include "engine/light/light.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineLightFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&setAmbientLightLevel), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&setDirectionalLightVector), void (*)(int, int, int)>);
    static_assert(std::is_same_v<decltype(&calculateLighting), int (*)(int, int, int)>);
    static_assert(
        std::is_same_v<decltype(&calculateAndStoreVertexLight), void (*)(int, core::CVector3i *)>);
}

} // namespace
} // namespace nocturne::engine
