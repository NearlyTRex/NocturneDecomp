#include "core/vessel/vessel.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreVesselFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncCryptVessel), CCryptVessel *(*)()>);
}

} // namespace
} // namespace nocturne::core
