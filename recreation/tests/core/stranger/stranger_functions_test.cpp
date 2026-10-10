#include "core/stranger/stranger_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreStrangerFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&blendWeightCallback),
                                 float (*)(int, int, float, int, CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&factoryFuncStranger), CStranger *(*)()>);
}

} // namespace
} // namespace nocturne::core
