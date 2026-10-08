#include "core/flies/flies_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreFliesFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncFlies), CFlies *(*)()>);
    static_assert(std::is_same_v<decltype(&findFliesByFollowActor), CFlies *(*)(CDemonActor *)>);
}

} // namespace
} // namespace nocturne::core
