#include "core/skeleton/skeleton_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreSkeletonFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&blendWeightCallback),
                                 float (*)(int, int, float, int, CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&getDeformableModel), CDeformableModel *(*)(char *)>);
    static_assert(std::is_same_v<decltype(&freeAllModels), void (*)()>);
    static_assert(std::is_same_v<decltype(&freeAllSkeletons), void (*)()>);
    static_assert(std::is_same_v<decltype(&getMemoryStats), void (*)(char *)>);
}

} // namespace
} // namespace nocturne::core
