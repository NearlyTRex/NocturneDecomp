#include "core/succubus/succubus_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreSuccubusFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncSuccubus), CSuccubus *(*)()>);
}

} // namespace
} // namespace nocturne::core
