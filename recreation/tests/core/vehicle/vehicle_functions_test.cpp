#include "core/vehicle/vehicle_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreVehicleFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncVehicle), CVehicle *(*)()>);
}

} // namespace
} // namespace nocturne::core
