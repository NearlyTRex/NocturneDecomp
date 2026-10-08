#include "core/passngr/passenger.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CPassenger, DerivesFromCNPC) {
    static_assert(std::is_base_of_v<CNPC, CPassenger>);
}

TEST(CPassenger, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CPassenger>);
}

TEST(CPassenger, IsConcrete) {
    static_assert(!std::is_abstract_v<CPassenger>);
}

TEST(CPassenger, Constructors) {
    static_assert(std::is_constructible_v<CPassenger>);
}

TEST(CPassenger, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CPassenger::setup), void (CPassenger::*)()>);
    static_assert(std::is_same_v<decltype(&CPassenger::process), void (CPassenger::*)(float)>);
    static_assert(std::is_same_v<decltype(&CPassenger::renderOpaque), int (CPassenger::*)()>);
    static_assert(
        std::is_same_v<decltype(&CPassenger::getActorType), CDemonActorType *(CPassenger::*)()>);
    static_assert(std::is_same_v<decltype(&CPassenger::archive), void (CPassenger::*)()>);
}

} // namespace
} // namespace nocturne::core
