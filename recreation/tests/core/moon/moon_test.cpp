#include "core/moon/moon.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMoon, IsConcrete) {
    static_assert(!std::is_abstract_v<CMoon>);
}

TEST(CMoon, Constructors) {
    static_assert(std::is_constructible_v<CMoon>);
}

TEST(CMoon, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMoon::init), void (CMoon::*)()>);
    static_assert(std::is_same_v<decltype(&CMoon::free), void (CMoon::*)()>);
    static_assert(std::is_same_v<decltype(&CMoon::update), void (CMoon::*)(float)>);
    static_assert(std::is_same_v<decltype(&CMoon::render), void (CMoon::*)()>);
    static_assert(std::is_same_v<decltype(&CMoon::renderJoystickCalibration), void (CMoon::*)()>);
    static_assert(std::is_same_v<decltype(&CMoon::isAnimationFirstHalf), int (CMoon::*)()>);
}

} // namespace
} // namespace nocturne::core
