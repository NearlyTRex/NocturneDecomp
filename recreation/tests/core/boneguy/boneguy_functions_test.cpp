#include "core/boneguy/boneguy_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreBoneguyFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncBoneGuy), CBoneGuy *(*)()>);
}

} // namespace
} // namespace nocturne::core
