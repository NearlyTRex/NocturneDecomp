#include "core/boxactor/boxactor_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreBoxactorFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncBoxActor), CBoxActor *(*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncLightActor), CLightActor *(*)()>);
}

} // namespace
} // namespace nocturne::core
