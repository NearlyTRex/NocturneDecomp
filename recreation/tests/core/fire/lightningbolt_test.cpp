#include "core/fire/lightningbolt.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CLightningBolt, IsConcrete) {
    static_assert(!std::is_abstract_v<CLightningBolt>);
}

TEST(CLightningBolt, Constructors) {
    static_assert(std::is_constructible_v<CLightningBolt>);
}

TEST(CLightningBolt, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CLightningBolt::reset), void (CLightningBolt::*)()>);
    static_assert(std::is_same_v<decltype(&CLightningBolt::activate),
                                 void (CLightningBolt::*)(CVector3f *, float, float)>);
    static_assert(std::is_same_v<decltype(&CLightningBolt::activateDirectional),
                                 void (CLightningBolt::*)(CVector3f *, CVector3f *, float, float)>);
    static_assert(std::is_same_v<decltype(&CLightningBolt::process), void (CLightningBolt::*)()>);
    static_assert(std::is_same_v<decltype(&CLightningBolt::render), void (CLightningBolt::*)()>);
}

} // namespace
} // namespace nocturne::core
