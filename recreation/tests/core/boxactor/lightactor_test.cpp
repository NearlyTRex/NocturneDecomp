#include "core/boxactor/lightactor.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CLightActor, DerivesFromCBoxActor) {
    static_assert(std::is_base_of_v<CBoxActor, CLightActor>);
}

TEST(CLightActor, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CLightActor>);
}

TEST(CLightActor, IsConcrete) {
    static_assert(!std::is_abstract_v<CLightActor>);
}

TEST(CLightActor, Constructors) {
    static_assert(std::is_constructible_v<CLightActor>);
}

TEST(CLightActor, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLightActor::setup), void (CLightActor::*)()>);
    static_assert(std::is_same_v<decltype(&CLightActor::process), void (CLightActor::*)(float)>);
    static_assert(
        std::is_same_v<decltype(&CLightActor::getActorType), CDemonActorType *(CLightActor::*)()>);
    static_assert(std::is_same_v<decltype(&CLightActor::archive), void (CLightActor::*)()>);
}

} // namespace
} // namespace nocturne::core
