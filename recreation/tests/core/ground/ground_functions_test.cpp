#include "core/ground/ground_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreGroundFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&getGroundTypeCode), char *(*)(EGroundType)>);
    static_assert(std::is_same_v<decltype(&getGroundTypeColor), std::uint32_t (*)(EGroundType)>);
}

} // namespace
} // namespace nocturne::core
