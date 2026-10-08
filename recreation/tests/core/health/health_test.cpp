#include "core/health/health.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreHealthFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncHealthItem), CHealthItem *(*)()>);
}

} // namespace
} // namespace nocturne::core
