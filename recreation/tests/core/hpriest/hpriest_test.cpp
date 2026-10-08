#include "core/hpriest/hpriest.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreHpriestFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(
        std::is_same_v<decltype(&factoryFuncHighPriestOfGardath), CHighPriestOfGardath *(*)()>);
}

} // namespace
} // namespace nocturne::core
