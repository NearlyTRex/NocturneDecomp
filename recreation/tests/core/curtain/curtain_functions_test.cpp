#include "core/curtain/curtain_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreCurtainFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncCurtain), CCurtain *(*)()>);
}

} // namespace
} // namespace nocturne::core
