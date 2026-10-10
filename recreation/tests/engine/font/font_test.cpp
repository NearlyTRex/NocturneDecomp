#include "engine/font/font.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(EngineFontFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&getDefaultTextColor), int (*)()>);
    static_assert(std::is_same_v<decltype(&setDefaultTextColor), void (*)(int)>);
}

} // namespace
} // namespace nocturne::engine
