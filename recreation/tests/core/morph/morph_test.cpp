#include "core/morph/morph.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CMorph, IsConcrete) {
    static_assert(!std::is_abstract_v<CMorph>);
}

TEST(CMorph, Constructors) {
    static_assert(std::is_constructible_v<CMorph>);
}

TEST(CMorph, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CMorph::setupModelFromDeformable),
                                 void (CMorph::*)(int, CDeformableModelInstance *)>);
    static_assert(std::is_same_v<decltype(&CMorph::setupModelFromKeyframed),
                                 void (CMorph::*)(int, CKeyFramedModel *, int)>);
    static_assert(std::is_same_v<decltype(&CMorph::addPartFromKeyframedModel),
                                 void (CMorph::*)(int, CKeyFramedModel *, int)>);
    static_assert(std::is_same_v<decltype(&CMorph::updateModelFromDeformable),
                                 void (CMorph::*)(int, CDeformableModelInstance *, int)>);
    static_assert(std::is_same_v<decltype(&CMorph::updateModelFromKeyframed),
                                 void (CMorph::*)(int, CKeyFramedModel *, int, int)>);
    static_assert(std::is_same_v<decltype(&CMorph::getReady), void (CMorph::*)()>);
    static_assert(std::is_same_v<decltype(&CMorph::render), void (CMorph::*)(float)>);
}

} // namespace
} // namespace nocturne::core
