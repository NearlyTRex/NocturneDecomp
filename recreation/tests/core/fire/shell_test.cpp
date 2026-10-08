#include "core/fire/shell.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CShell, DerivesFromCParticle) {
    static_assert(std::is_base_of_v<CParticle, CShell>);
}

TEST(CShell, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CShell>);
}

TEST(CShell, IsConcrete) {
    static_assert(!std::is_abstract_v<CShell>);
}

TEST(CShell, Constructors) {
    static_assert(std::is_constructible_v<CShell>);
}

TEST(CShell, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CShell::process), void (CShell::*)()>);
    static_assert(std::is_same_v<decltype(&CShell::render), void (CShell::*)()>);
    static_assert(std::is_same_v<decltype(&CShell::onCollision), int (CShell::*)(CVector3f *)>);
    static_assert(
        std::is_same_v<decltype(static_cast<void (CShell::*)(CVector3f *, CVector3f *, CVector3f *,
                                                             CKeyFramedModel *)>(&CShell::setup)),
                       void (CShell::*)(CVector3f *, CVector3f *, CVector3f *, CKeyFramedModel *)>);
}

} // namespace
} // namespace nocturne::core
