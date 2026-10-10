#include "core/minecar/minecar_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreMinecarFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncMineCar), CMineCar *(*)()>);
}

} // namespace
} // namespace nocturne::core
