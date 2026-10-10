#include "core/keyactor/keyactor_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreKeyactorFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncKeyActor), CKeyActor *(*)()>);
}

} // namespace
} // namespace nocturne::core
