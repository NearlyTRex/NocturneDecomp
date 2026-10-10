#include "core/menu/menu.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreMenuFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&calibrateGamepad), int (*)()>);
    static_assert(std::is_same_v<decltype(&showCalibrationTest), void (*)()>);
    static_assert(std::is_same_v<decltype(&showOptionsScreen), void (*)(int)>);
    static_assert(std::is_same_v<decltype(&showMainGameMenu), int (*)()>);
    static_assert(std::is_same_v<decltype(&getKeyDisplayName), char *(*)(engine::EInputCodeType)>);
}

} // namespace
} // namespace nocturne::core
