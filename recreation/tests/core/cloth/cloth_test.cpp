#include "core/cloth/cloth.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CCloth, IsConcrete) {
    static_assert(!std::is_abstract_v<CCloth>);
}

TEST(CCloth, Constructors) {
    static_assert(std::is_constructible_v<CCloth>);
}

TEST(CCloth, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CCloth::load), int (CCloth::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CCloth::setup),
                                 void (CCloth::*)(common::CVector3f *, common::CVector3f *,
                                                  CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&CCloth::process),
                                 void (CCloth::*)(common::CVector3f *, common::CVector3f *, float,
                                                  float, CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&CCloth::saveJoinedLight),
                                 int (CCloth::*)(CDeformableModelInstance *)>);
    static_assert(
        std::is_same_v<decltype(&CCloth::render), void (CCloth::*)(CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&CCloth::grabCloth), void (CCloth::*)(char *, int)>);
    static_assert(std::is_same_v<decltype(&CCloth::resetState), void (CCloth::*)(int)>);
    static_assert(
        std::is_same_v<decltype(&CCloth::applyRotation), void (CCloth::*)(common::CVector3f *)>);
}

} // namespace
} // namespace nocturne::core
