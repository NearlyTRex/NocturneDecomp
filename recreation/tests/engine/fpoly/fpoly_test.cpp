#include "engine/fpoly/fpoly.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineFpolyFunctions, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&rasterizePolygonHardware), void (*)(SRenderVertex **, int)>);
}

} // namespace
} // namespace nocturne::engine
