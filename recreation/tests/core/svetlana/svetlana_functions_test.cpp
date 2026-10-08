#include "core/svetlana/svetlana_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreSvetlanaFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncSvetlana), CSvetlana *(*)()>);
}

} // namespace
} // namespace nocturne::core
