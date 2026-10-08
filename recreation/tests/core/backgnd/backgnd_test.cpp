#include "core/backgnd/backgnd.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreBackgndFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncBackgroundActor), CBackgroundActor *(*)()>);
}

} // namespace
} // namespace nocturne::core
