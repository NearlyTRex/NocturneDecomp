#include "core/anvil/anvil_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreAnvilFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncAnvil), CAnvil *(*)()>);
}

} // namespace
} // namespace nocturne::core
