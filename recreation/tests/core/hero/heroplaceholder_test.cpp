#include "common/random/watcomrandom.h"
#include "common/text/textscanner.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/game/game.h"
#include "core/hero/heroplaceholder.h"
#include "tests/mocks/core/mockactorlookup.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
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

// After CDemonActor's fields, which hero the place is for.
TEST(CHeroPlaceholder, ItsFileSaysWhichHeroItIsFor) {
    ::testing::NiceMock<engine::MockGameClock> clock;
    const CGame game{clock};
    common::CWatcomRandom crt;
    const CActor classes{game, crt};
    ::testing::NiceMock<MockActorLookup> actors;
    CHeroPlaceholder placeholder;
    common::CTextScanner scanner("{ CHeroPlaceholder \"Spot\"\n2,1,2,3\n0,0,0\n0\n1 // index\n"
                                 "} CHeroPlaceholder \"Spot\"\n");
    placeholder.load(scanner, {.actor_classes = classes, .actors = actors, .crt_random = crt});
    EXPECT_EQ(placeholder.getLocation().area_id, 2);
    EXPECT_EQ(placeholder.getIndex(), 1);
}

} // namespace
} // namespace nocturne::core
