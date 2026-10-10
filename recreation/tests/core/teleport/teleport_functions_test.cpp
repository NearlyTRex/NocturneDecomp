#include "core/teleport/teleport_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreTeleportFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncTeleportDest), CTeleportDest *(*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncTeleport), CTeleport *(*)()>);
}

} // namespace
} // namespace nocturne::core
