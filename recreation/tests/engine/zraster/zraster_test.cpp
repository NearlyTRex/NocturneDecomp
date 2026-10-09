#include "engine/zraster/zraster.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineZrasterFunctions, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&rasterizeTriangle), void (*)(platform::SRenderVertex *, int)>);
    static_assert(std::is_same_v<decltype(&rasterizePolygonCustom),
                                 void (*)(platform::SRenderVertex *, int, CustomScanlineFunc *)>);
}

} // namespace
} // namespace nocturne::engine
