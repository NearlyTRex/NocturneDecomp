#include "core/inv/inv.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreInvFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&loadAssets), void (*)()>);
    static_assert(std::is_same_v<decltype(&freeInventory), void (*)()>);
}

} // namespace
} // namespace nocturne::core
