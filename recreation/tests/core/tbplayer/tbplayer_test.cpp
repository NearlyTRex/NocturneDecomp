#include "core/tbplayer/tbplayer.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreTbplayerFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncBassPlayer), CBassPlayer *(*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncDrummer), CDrummer *(*)()>);
}

} // namespace
} // namespace nocturne::core
