#include "core/ammobox/ammobox_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreAmmoboxFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncAmmoBox), CAmmoBox *(*)()>);
}

} // namespace
} // namespace nocturne::core
