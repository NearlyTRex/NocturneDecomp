#include "core/gabriela/gabriella.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CGabriella, DerivesFromCHero) {
    static_assert(std::is_base_of_v<CHero, CGabriella>);
}

TEST(CGabriella, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CGabriella>);
}

TEST(CGabriella, IsConcrete) {
    static_assert(!std::is_abstract_v<CGabriella>);
}

TEST(CGabriella, Constructors) {
    static_assert(std::is_constructible_v<CGabriella>);
}

TEST(CGabriella, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CGabriella::setup), void (CGabriella::*)()>);
    static_assert(std::is_same_v<decltype(&CGabriella::process), void (CGabriella::*)(float)>);
    static_assert(std::is_same_v<decltype(&CGabriella::renderOpaque), int (CGabriella::*)()>);
    static_assert(std::is_same_v<decltype(&CGabriella::renderTransparent), int (CGabriella::*)()>);
    static_assert(
        std::is_same_v<decltype(&CGabriella::getActorType), CDemonActorType *(CGabriella::*)()>);
    static_assert(std::is_same_v<decltype(&CGabriella::archive), void (CGabriella::*)()>);
    static_assert(
        std::is_same_v<decltype(&CGabriella::processDamage), void (CGabriella::*)(SDamageInfo *)>);
    static_assert(std::is_same_v<decltype(&CGabriella::getCarryObjToBodyXForm),
                                 common::CMatrix3x4f *(CGabriella::*)(int, common::CMatrix3x4f *)>);
    static_assert(std::is_same_v<decltype(&CGabriella::drawWeapon), void (CGabriella::*)(int)>);
    static_assert(std::is_same_v<decltype(&CGabriella::isWeaponDrawn), int (CGabriella::*)()>);
}

} // namespace
} // namespace nocturne::core
