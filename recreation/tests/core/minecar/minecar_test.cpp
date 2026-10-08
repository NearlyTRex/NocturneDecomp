#include "core/minecar/minecar.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMineCar, DerivesFromCPlatform) {
    static_assert(std::is_base_of_v<CPlatform, CMineCar>);
}

TEST(CMineCar, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CMineCar>);
}

TEST(CMineCar, IsConcrete) {
    static_assert(!std::is_abstract_v<CMineCar>);
}

TEST(CMineCar, Constructors) {
    static_assert(std::is_constructible_v<CMineCar>);
}

TEST(CMineCar, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMineCar::setup), void (CMineCar::*)()>);
    static_assert(std::is_same_v<decltype(&CMineCar::process), void (CMineCar::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CMineCar::getActorType), CDemonActorType *(CMineCar::*)()>);
}

} // namespace
} // namespace nocturne::core
