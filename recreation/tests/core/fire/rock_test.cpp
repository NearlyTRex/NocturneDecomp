#include "core/fire/rock.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CRock, DerivesFromCParticle) {
    static_assert(std::is_base_of_v<CParticle, CRock>);
}

TEST(CRock, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CRock>);
}

TEST(CRock, IsConcrete) {
    static_assert(!std::is_abstract_v<CRock>);
}

TEST(CRock, Constructors) {
    static_assert(std::is_constructible_v<CRock>);
}

TEST(CRock, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CRock::process), void (CRock::*)()>);
    static_assert(std::is_same_v<decltype(&CRock::render), void (CRock::*)()>);
    static_assert(
        std::is_same_v<decltype(&CRock::onCollision), int (CRock::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<
                  decltype(static_cast<void (CRock::*)(common::CVector3f *, common::CVector3f *,
                                                       CKeyFramedModel *)>(&CRock::setup)),
                  void (CRock::*)(common::CVector3f *, common::CVector3f *, CKeyFramedModel *)>);
}

} // namespace
} // namespace nocturne::core
