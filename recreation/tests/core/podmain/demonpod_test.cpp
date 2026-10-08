#include "core/podmain/demonpod.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonPod, DerivesFromCPod) {
    static_assert(std::is_base_of_v<engine::CPod, CDemonPod>);
}

TEST(CDemonPod, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CDemonPod>);
}

TEST(CDemonPod, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonPod>);
}

TEST(CDemonPod, Constructors) {
    static_assert(std::is_constructible_v<CDemonPod>);
}

TEST(CDemonPod, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonPod::load), void (CDemonPod::*)()>);
}

} // namespace
} // namespace nocturne::core
