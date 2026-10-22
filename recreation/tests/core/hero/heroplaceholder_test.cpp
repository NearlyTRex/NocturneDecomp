#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/hero/heroplaceholder.h"

#include <gtest/gtest.h>

#include <memory>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CHeroPlaceholder, DerivesFromCDemonActor) {
    static_assert(std::is_base_of_v<CDemonActor, CHeroPlaceholder>);
}

TEST(CHeroPlaceholder, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CHeroPlaceholder>);
}

TEST(CHeroPlaceholder, IsConcrete) {
    static_assert(!std::is_abstract_v<CHeroPlaceholder>);
}

TEST(CHeroPlaceholder, Constructors) {
    static_assert(std::is_constructible_v<CHeroPlaceholder>);
}

TEST(CHeroPlaceholder, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CHeroPlaceholder::getActorType),
                                 const CDemonActorType &(CHeroPlaceholder::*)() const>);
    static_assert(std::is_same_v<decltype(&CHeroPlaceholder::createHero),
                                 std::unique_ptr<CHero> (CHeroPlaceholder::*)(
                                     EHeroType, const CActor &, const CDemonMission &) const>);
}

TEST(CHeroPlaceholder, ItsRecordIsAVersionOneActorThatMissionsCanCreate) {
    EXPECT_EQ(CHeroPlaceholder::kType.class_name, "CHeroPlaceholder");
    EXPECT_EQ(CHeroPlaceholder::kType.parent_type, &CDemonActor::kType);
    EXPECT_EQ(CHeroPlaceholder::kType.latest_version, 1);
    EXPECT_EQ(CHeroPlaceholder::kType.name_hash, hashClassName("CHeroPlaceholder"));
    ASSERT_NE(CHeroPlaceholder::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CHeroPlaceholder::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CHeroPlaceholder::kType);
}

} // namespace
} // namespace nocturne::core
