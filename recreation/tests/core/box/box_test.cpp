#include "core/box/box.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBox, IsConcrete) {
    static_assert(!std::is_abstract_v<CBox>);
}

TEST(CBox, Constructors) {
    static_assert(std::is_constructible_v<CBox>);
}

TEST(CBox, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBox::setupCorners),
                                 void (CBox::*)(common::CVector3f *, common::CVector3f *,
                                                common::CVector3f *, float)>);
    static_assert(std::is_same_v<decltype(&CBox::process), void (CBox::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBox::processPhysics), void (CBox::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBox::loadFromFile), void (CBox::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&CBox::saveToFile), void (CBox::*)(std::FILE *, char *)>);
    static_assert(std::is_same_v<decltype(&CBox::setupVelocities),
                                 void (CBox::*)(common::CVector3f *, common::CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
