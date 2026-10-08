#include "core/shotgun/shotgun_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreShotgunFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncShotgun), CShotgun *(*)()>);
}

} // namespace
} // namespace nocturne::core
