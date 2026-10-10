#include "core/fire/crater.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CCrater, IsConcrete) {
    static_assert(!std::is_abstract_v<CCrater>);
}

TEST(CCrater, Constructors) {
    static_assert(std::is_constructible_v<CCrater>);
}

TEST(CCrater, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CCrater::reset), void (CCrater::*)()>);
    static_assert(std::is_same_v<decltype(&CCrater::activate),
                                 void (CCrater::*)(common::CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CCrater::process), void (CCrater::*)()>);
    static_assert(std::is_same_v<decltype(&CCrater::render), void (CCrater::*)()>);
    static_assert(std::is_same_v<decltype(&CCrater::load), void (CCrater::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CCrater::save), void (CCrater::*)(std::FILE *)>);
}

} // namespace
} // namespace nocturne::core
