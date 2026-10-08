#include "core/manpuz/manpuz.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreManpuzFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(
        std::is_same_v<decltype(&factoryFuncMansionPuzzleCircle), CMansionPuzzleCircle *(*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncMirrorHack), CMirrorHack *(*)()>);
}

} // namespace
} // namespace nocturne::core
