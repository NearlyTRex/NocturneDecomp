#include "engine/ncursfx/mouse.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::engine {
namespace {

TEST(CMouse, IsConcrete) {
    static_assert(!std::is_abstract_v<CMouse>);
}

TEST(CMouse, Constructors) {
    static_assert(std::is_constructible_v<CMouse>);
}

TEST(CMouse, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMouse::load), void (CMouse::*)()>);
    static_assert(std::is_same_v<decltype(&CMouse::reset), void (CMouse::*)()>);
}

} // namespace
} // namespace nocturne::engine
