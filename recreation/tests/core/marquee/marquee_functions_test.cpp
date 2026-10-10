#include "core/marquee/marquee_functions.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CoreMarqueeFunctions, PublicInterface) {
    static_assert(std::is_same_v<decltype(&staticInit), void (*)()>);
    static_assert(std::is_same_v<decltype(&factoryFuncMarquee), CMarquee *(*)()>);
}

} // namespace
} // namespace nocturne::core
