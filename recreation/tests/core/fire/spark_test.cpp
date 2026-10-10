#include "core/fire/spark.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CSpark, DerivesFromCParticle) {
    static_assert(std::is_base_of_v<CParticle, CSpark>);
}

TEST(CSpark, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CSpark>);
}

TEST(CSpark, IsConcrete) {
    static_assert(!std::is_abstract_v<CSpark>);
}

TEST(CSpark, Constructors) {
    static_assert(std::is_constructible_v<CSpark>);
}

TEST(CSpark, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CSpark::process), void (CSpark::*)()>);
    static_assert(std::is_same_v<decltype(&CSpark::render), void (CSpark::*)()>);
    static_assert(
        std::is_same_v<decltype(&CSpark::onCollision), int (CSpark::*)(common::CVector3f *)>);
    static_assert(std::is_same_v<decltype(&CSpark::setupRenderState), void (CSpark::*)()>);
}

} // namespace
} // namespace nocturne::core
