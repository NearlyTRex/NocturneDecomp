#include "engine/model/model.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineModelFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&loadModelFile), SMRGLHeaderExtended *(*)(char *)>);
    static_assert(std::is_same_v<decltype(&getMRGLSize), int (*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&loadModelChunk), SMRGLHeaderExtended *(*)(char *, int)>);
}

} // namespace
} // namespace nocturne::engine
