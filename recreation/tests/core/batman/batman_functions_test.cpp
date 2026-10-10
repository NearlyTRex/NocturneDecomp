#include "core/batman/batman_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreBatmanFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncBatman), CBatman *(*)()>);
}

} // namespace
} // namespace nocturne::core
