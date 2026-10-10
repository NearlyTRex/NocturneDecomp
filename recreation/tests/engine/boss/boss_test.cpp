#include "engine/boss/boss.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineBossFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&modelStructNotSupported1),
                                 SMRGLHeaderExtended *(*)(SMRGLHeaderExtended *)>);
    static_assert(
        std::is_same_v<decltype(&modelStructNotSupported2), SMRGLHeaderExtended *(*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&modelStructNotSupported3), void (*)(SMRGLHeaderExtended *)>);
    static_assert(std::is_same_v<decltype(&modelStructNotSupported4),
                                 void (*)(SMRGLHeaderExtended *, SMRGLModelBounds *)>);
    static_assert(
        std::is_same_v<decltype(&modelStructNotSupported5), void (*)(SMRGLHeaderExtended *)>);
}

} // namespace
} // namespace nocturne::engine
