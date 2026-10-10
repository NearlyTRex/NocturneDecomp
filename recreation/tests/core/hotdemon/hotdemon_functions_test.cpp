#include "core/hotdemon/hotdemon_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreHotdemonFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncHotDemon), CHotDemon *(*)()>);
}

} // namespace
} // namespace nocturne::core
