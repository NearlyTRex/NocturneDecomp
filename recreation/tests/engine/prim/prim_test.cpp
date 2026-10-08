#include "engine/prim/prim.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EnginePrimFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&setCullingMode), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&prepareDepthBuffer), void (*)(SRenderVertex *, int)>);
    static_assert(
        std::is_same_v<decltype(&normalizeTextureCoords), void (*)(SRenderVertex *, int)>);
    static_assert(
        std::is_same_v<decltype(&adjustNearPlaneTextureCoords), void (*)(SRenderVertex *, int)>);
    static_assert(std::is_same_v<decltype(&replaceWWithDepth), void (*)(SRenderVertex *, int)>);
    static_assert(std::is_same_v<decltype(&calculateTriangleWindingOrder),
                                 int (*)(SRenderVertex *, SRenderVertex *, SRenderVertex *)>);
    static_assert(std::is_same_v<decltype(&getTriangleWindingFromIndices1),
                                 int (*)(SMRGLPrimitiveTriangle *)>);
    static_assert(std::is_same_v<decltype(&getTriangleWindingFromPackedIndices),
                                 int (*)(STrianglePackedIndices *)>);
    static_assert(std::is_same_v<decltype(&renderPolygonSoftware), void (*)(SRenderVertex *, int)>);
    static_assert(std::is_same_v<decltype(&renderIndexedPolygonSoftware), void (*)(int *, int)>);
    static_assert(std::is_same_v<decltype(&renderScanlinePolygon), void (*)(SRenderVertex *, int)>);
    static_assert(std::is_same_v<decltype(&renderIndexedPolygonAdvanced), void (*)(int *, int)>);
}

} // namespace
} // namespace nocturne::engine
