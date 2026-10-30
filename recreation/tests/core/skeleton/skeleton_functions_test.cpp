#include "core/skeleton/skeleton_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreSkeletonFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&blendWeightCallback),
                                 float (*)(int, int, float, int, CDeformableModelInstance *)>);
}

} // namespace
} // namespace nocturne::core
