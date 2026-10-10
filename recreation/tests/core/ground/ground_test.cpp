#include "core/ground/ground.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGround, IsConcrete) {
    static_assert(!std::is_abstract_v<CGround>);
}

TEST(CGround, Constructors) {
    static_assert(std::is_constructible_v<CGround, int, int>);
}

TEST(CGround, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGround::init), void (CGround::*)()>);
    static_assert(std::is_same_v<decltype(&CGround::free), void (CGround::*)()>);
    static_assert(std::is_same_v<decltype(&CGround::load), void (CGround::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CGround::render), void (CGround::*)()>);
    static_assert(
        std::is_same_v<decltype(&CGround::getHeightAtPosition), int (CGround::*)(int, int)>);
}

} // namespace
} // namespace nocturne::core
