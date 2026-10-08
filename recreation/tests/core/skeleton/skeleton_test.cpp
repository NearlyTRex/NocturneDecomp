#include "core/skeleton/skeleton.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CSkeleton, IsConcrete) {
    static_assert(!std::is_abstract_v<CSkeleton>);
}

TEST(CSkeleton, Constructors) {
    static_assert(std::is_constructible_v<CSkeleton>);
}

TEST(CSkeleton, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSkeleton::free), void (CSkeleton::*)()>);
    static_assert(std::is_same_v<decltype(&CSkeleton::load), void (CSkeleton::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CSkeleton::findBone), int (CSkeleton::*)(char *, int)>);
    static_assert(std::is_same_v<decltype(&CSkeleton::getBoneAngleAtFrame),
                                 CQuaternion4f *(CSkeleton::*)(int, int)>);
    static_assert(
        std::is_same_v<decltype(&CSkeleton::getBoneAngleInterpolated),
                       CQuaternion4f *(CSkeleton::*)(int, int, int, float, CQuaternion4f *)>);
    static_assert(
        std::is_same_v<decltype(&CSkeleton::getHierarchyDistance), int (CSkeleton::*)(int, int)>);
    static_assert(
        std::is_same_v<decltype(&CSkeleton::calculateFrameDataSize), int (CSkeleton::*)()>);
}

} // namespace
} // namespace nocturne::core
