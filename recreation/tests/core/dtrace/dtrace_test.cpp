#include "core/dtrace/dtrace.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreDtraceFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&initIntersectionCylinder),
                                 void (*)(SIntersectXZCylinder *, float, float, float, float, float,
                                          float, float)>);
}

} // namespace
} // namespace nocturne::core
