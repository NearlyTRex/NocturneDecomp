#include "core/biggs/biggs_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreBiggsFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncBiggs), CBiggs *(*)()>);
}

} // namespace
} // namespace nocturne::core
