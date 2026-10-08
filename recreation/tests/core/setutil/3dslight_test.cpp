#include "core/setutil/3dslight.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(C3DSLight, IsConcrete) {
    static_assert(!std::is_abstract_v<C3DSLight>);
}

TEST(C3DSLight, Constructors) {
    static_assert(std::is_constructible_v<C3DSLight>);
}

TEST(C3DSLight, PublicInterface) {
    static_assert(std::is_same_v<decltype(&C3DSLight::load), void (C3DSLight::*)(std::FILE *)>);
    static_assert(std::is_same_v<decltype(&C3DSLight::create), CDemonLight *(C3DSLight::*)()>);
    static_assert(std::is_same_v<decltype(&C3DSLight::apply), void (C3DSLight::*)(CDemonLight *)>);
    static_assert(std::is_same_v<decltype(&C3DSLight::doNothing), void (C3DSLight::*)()>);
    static_assert(
        std::is_same_v<decltype(&C3DSLight::process), void (C3DSLight::*)(CDemonLight *, int)>);
    static_assert(
        std::is_same_v<decltype(&C3DSLight::advanceFilter), void (C3DSLight::*)(CDemonLight *)>);
    static_assert(std::is_same_v<decltype(&C3DSLight::setFilterFrame),
                                 void (C3DSLight::*)(int, CDemonLight *)>);
    static_assert(
        std::is_same_v<decltype(&C3DSLight::addFilter), void (C3DSLight::*)(char *, float, int)>);
    static_assert(std::is_same_v<decltype(&C3DSLight::isVisible), int (C3DSLight::*)()>);
}

} // namespace
} // namespace nocturne::core
