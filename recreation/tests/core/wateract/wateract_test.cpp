#include "core/wateract/wateract.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreWateractFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncWaterActor), CWaterActor *(*)()>);
}

} // namespace
} // namespace nocturne::core
