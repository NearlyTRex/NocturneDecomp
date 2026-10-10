#include "core/charactr/charactr.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreCharactrFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&getGameDeltaTime), float (*)(CGame *)>);
}

} // namespace
} // namespace nocturne::core
