#include "core/passngr/passngr.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CorePassngrFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncPassenger), CPassenger *(*)()>);
}

} // namespace
} // namespace nocturne::core
