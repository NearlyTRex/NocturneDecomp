#include "core/platfrm/platfrm.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CorePlatfrmFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncPlatform), CPlatform *(*)()>);
}

} // namespace
} // namespace nocturne::core
