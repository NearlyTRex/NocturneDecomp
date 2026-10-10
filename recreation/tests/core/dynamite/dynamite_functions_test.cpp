#include "core/dynamite/dynamite_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreDynamiteFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncDynamite), CDynamite *(*)()>);
}

} // namespace
} // namespace nocturne::core
