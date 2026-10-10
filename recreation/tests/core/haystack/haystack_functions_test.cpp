#include "core/haystack/haystack_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreHaystackFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncHaystack), CHaystack *(*)()>);
}

} // namespace
} // namespace nocturne::core
