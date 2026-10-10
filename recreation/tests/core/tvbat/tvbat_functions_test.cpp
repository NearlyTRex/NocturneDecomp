#include "core/tvbat/tvbat_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreTvbatFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncTVBat), CTVBat *(*)()>);
}

} // namespace
} // namespace nocturne::core
