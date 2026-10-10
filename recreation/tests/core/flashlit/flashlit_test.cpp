#include "core/flashlit/flashlit.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreFlashlitFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncFlashlight), CFlashlight *(*)()>);
}

} // namespace
} // namespace nocturne::core
