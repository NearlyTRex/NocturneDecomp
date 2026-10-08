#include "engine/clipper/clipper.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineClipperFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&interpolateVertexLeftClip),
                                 void (*)(SRenderVertex *, SRenderVertex *, SRenderVertex *)>);
    static_assert(std::is_same_v<decltype(&interpolateVertexRightClip),
                                 void (*)(SRenderVertex *, SRenderVertex *, SRenderVertex *)>);
    static_assert(std::is_same_v<decltype(&interpolateVertexBottomClip),
                                 void (*)(SRenderVertex *, SRenderVertex *, SRenderVertex *)>);
    static_assert(std::is_same_v<decltype(&interpolateVertexTopClip),
                                 void (*)(SRenderVertex *, SRenderVertex *, SRenderVertex *)>);
    static_assert(std::is_same_v<decltype(&clipAndRasterize), void (*)(int, int *)>);
    static_assert(std::is_same_v<decltype(&clipPolygonToViewport), void (*)(int, int *)>);
}

} // namespace
} // namespace nocturne::engine
