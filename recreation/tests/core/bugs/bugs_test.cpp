#include "core/bugs/bugs.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBugs, DerivesFromCEnemy) {
    static_assert(std::is_base_of_v<CEnemy, CBugs>);
}

TEST(CBugs, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBugs>);
}

TEST(CBugs, IsConcrete) {
    static_assert(!std::is_abstract_v<CBugs>);
}

TEST(CBugs, Constructors) {
    static_assert(std::is_constructible_v<CBugs>);
}

TEST(CBugs, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBugs::setup), void (CBugs::*)()>);
    static_assert(std::is_same_v<decltype(&CBugs::process), void (CBugs::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBugs::renderOpaque), int (CBugs::*)()>);
    static_assert(std::is_same_v<decltype(&CBugs::getBoundingBox),
                                 CBoundingBox3D *(CBugs::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CBugs::getCollisionType),
                                 ECollisionType (CBugs::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CBugs::getActorType), CDemonActorType *(CBugs::*)()>);
    static_assert(std::is_same_v<decltype(&CBugs::archive), void (CBugs::*)()>);
    static_assert(std::is_same_v<decltype(&CBugs::processDamage), void (CBugs::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CBugs::getDeathState), EDeathState (CBugs::*)()>);
}

} // namespace
} // namespace nocturne::core
