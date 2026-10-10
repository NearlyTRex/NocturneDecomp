#include "core/bugs/bugs_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreBugsFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncBugs), CBugs *(*)()>);
    static_assert(
        std::is_same_v<decltype(&getDeformableModelName), char *(*)(CDeformableModelInstance *)>);
}

} // namespace
} // namespace nocturne::core
