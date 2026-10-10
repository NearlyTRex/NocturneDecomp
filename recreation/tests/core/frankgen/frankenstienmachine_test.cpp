#include "core/frankgen/frankenstienmachine.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CFrankenstienMachine, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CFrankenstienMachine>);
}

TEST(CFrankenstienMachine, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CFrankenstienMachine>);
}

TEST(CFrankenstienMachine, IsConcrete) {
    static_assert(!std::is_abstract_v<CFrankenstienMachine>);
}

TEST(CFrankenstienMachine, Constructors) {
    static_assert(std::is_constructible_v<CFrankenstienMachine>);
}

TEST(CFrankenstienMachine, PublicInterface) {
    static_assert(
        std::is_same_v<decltype(&CFrankenstienMachine::setup), void (CFrankenstienMachine::*)()>);
    static_assert(std::is_same_v<decltype(&CFrankenstienMachine::process),
                                 void (CFrankenstienMachine::*)(float)>);
    static_assert(std::is_same_v<decltype(&CFrankenstienMachine::renderOpaque),
                                 int (CFrankenstienMachine::*)()>);
    static_assert(std::is_same_v<decltype(&CFrankenstienMachine::getBoundingBox),
                                 CBoundingBox3D *(CFrankenstienMachine::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CFrankenstienMachine::getCollisionType),
                                 ECollisionType (CFrankenstienMachine::*)(SCollisionInfo *)>);
    static_assert(std::is_same_v<decltype(&CFrankenstienMachine::getActorType),
                                 CDemonActorType *(CFrankenstienMachine::*)()>);
    static_assert(
        std::is_same_v<decltype(&CFrankenstienMachine::archive), void (CFrankenstienMachine::*)()>);
}

} // namespace
} // namespace nocturne::core
