#include "core/vampboss/vampboss.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreVampbossFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncVampireBoss), CVampireBoss *(*)()>);
}

} // namespace
} // namespace nocturne::core
