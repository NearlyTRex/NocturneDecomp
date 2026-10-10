#include "core/flattn/flattn.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreFlattnFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&doNothing), void (*)()>);
}

} // namespace
} // namespace nocturne::core
