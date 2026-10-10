#include "core/beast/beast_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreBeastFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncBeast), CBeast *(*)()>);
}

} // namespace
} // namespace nocturne::core
