#include "core/waypoint/waypoint_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreWaypointFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncWayPoint), CWayPoint *(*)()>);
}

} // namespace
} // namespace nocturne::core
