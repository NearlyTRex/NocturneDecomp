#include "core/icepick/icepick_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreIcepickFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncIcePick), CIcePick *(*)()>);
}

} // namespace
} // namespace nocturne::core
