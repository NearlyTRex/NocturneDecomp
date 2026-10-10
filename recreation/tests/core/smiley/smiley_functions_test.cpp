#include "core/smiley/smiley_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreSmileyFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factorFunc), CSmiley *(*)()>);
}

} // namespace
} // namespace nocturne::core
