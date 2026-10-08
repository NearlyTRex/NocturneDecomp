#include "core/bat/bat.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CBat, DerivesFromCCharacter) {
    static_assert(std::is_base_of_v<CCharacter, CBat>);
}

TEST(CBat, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CBat>);
}

TEST(CBat, IsConcrete) {
    static_assert(!std::is_abstract_v<CBat>);
}

TEST(CBat, Constructors) {
    static_assert(std::is_constructible_v<CBat>);
}

TEST(CBat, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CBat::setup), void (CBat::*)()>);
    static_assert(std::is_same_v<decltype(&CBat::process), void (CBat::*)(float)>);
    static_assert(std::is_same_v<decltype(&CBat::renderOpaque), int (CBat::*)()>);
    static_assert(std::is_same_v<decltype(&CBat::getBoundingBox),
                                 CBoundingBox3D *(CBat::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CBat::getActorType), CDemonActorType *(CBat::*)()>);
    static_assert(std::is_same_v<decltype(&CBat::archive), void (CBat::*)()>);
}

} // namespace
} // namespace nocturne::core
