#include "core/actor/demonactortype.h"
#include "core/curtain/curtain.h"

#include <gtest/gtest.h>

#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CCurtain, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CCurtain>);
}

TEST(CCurtain, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CCurtain>);
}

TEST(CCurtain, IsConcrete) {
    static_assert(!std::is_abstract_v<CCurtain>);
}

TEST(CCurtain, Constructors) {
    static_assert(std::is_constructible_v<CCurtain>);
}

TEST(CCurtain, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CCurtain::setup), void (CCurtain::*)()>);
    static_assert(std::is_same_v<decltype(&CCurtain::process), void (CCurtain::*)(float)>);
    static_assert(std::is_same_v<decltype(&CCurtain::renderOpaque), int (CCurtain::*)()>);
    static_assert(std::is_same_v<decltype(&CCurtain::renderTransparent), int (CCurtain::*)()>);
    static_assert(std::is_same_v<decltype(&CCurtain::getBoundingBox),
                                 CBoundingBox3D *(CCurtain::*)(CBoundingBox3D *)>);
    static_assert(std::is_same_v<decltype(&CCurtain::getCollisionType),
                                 ECollisionType (CCurtain::*)(SCollisionInfo *)>);
    static_assert(
        std::is_same_v<decltype(&CCurtain::getBlockVirtualDirectorFlag), int (CCurtain::*)()>);
    static_assert(std::is_same_v<decltype(&CCurtain::getActorType),
                                 const CDemonActorType &(CCurtain::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CCurtain::archive), void (CCurtain::*)(CActorArchive &)>);
}

TEST(CCurtain, ItsRecordIsVersion6UnderCDemonActor) {
    EXPECT_EQ(CCurtain::kType.class_name, "CCurtain");
    EXPECT_EQ(CCurtain::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CCurtain::kType.factory_func, nullptr);
    EXPECT_EQ(CCurtain::kType.latest_version, 6);
}

} // namespace
} // namespace nocturne::core
