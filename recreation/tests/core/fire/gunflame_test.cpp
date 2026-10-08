#include "core/fire/gunflame.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGunFlame, IsConcrete) {
    static_assert(!std::is_abstract_v<CGunFlame>);
}

TEST(CGunFlame, Constructors) {
    static_assert(std::is_constructible_v<CGunFlame>);
}

TEST(CGunFlame, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGunFlame::reset), void (CGunFlame::*)()>);
    static_assert(std::is_same_v<decltype(&CGunFlame::activate),
                                 void (CGunFlame::*)(CVector3f *, CVector3f *, int)>);
    static_assert(std::is_same_v<decltype(&CGunFlame::process), void (CGunFlame::*)()>);
    static_assert(std::is_same_v<decltype(&CGunFlame::render), void (CGunFlame::*)()>);
}

} // namespace
} // namespace nocturne::core
