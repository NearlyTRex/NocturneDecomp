#include "common/math/vector3f.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/game/herotype.h"
#include "core/hero/hero.h"
#include "core/hero/heroplaceholder.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "core/scat/scat.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/testactor.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::Return;

const CDemonActorType kPlacedHeroType = makeActorType("CTestPlacedHero", &CHero::kType, nullptr, 1);

// A hero from the last mission, which records where it is put and what it is told to walk to.
class CTestPlacedHero : public CHero {
public:
    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return kPlacedHeroType;
    }

    void drawWeapon(int /*drawn*/) override {}

    int isWeaponDrawn() override {
        return 0;
    }

    void setPositionAndOrientation(common::CVector3f *new_position,
                                   common::CVector3f *new_orientation) override {
        placed_at = *new_position;
        placed_facing = *new_orientation;
        CLocation location = getLocation();
        location.position = *new_position;
        setLocation(location);
    }

    void setWalkTarget(CDemonActor *target, float min_distance, float max_distance) override {
        walk_targets.push_back(target);
        walk_distances.emplace_back(min_distance, max_distance);
    }

    common::CVector3f placed_at;
    common::CVector3f placed_facing;
    std::vector<CDemonActor *> walk_targets;
    std::vector<std::pair<float, float>> walk_distances;
};

class CDemonMissionHeroesTest : public CMissionFixture {
protected:
    // A place for the hero of that number, at (1, 2, 3) in area 4 facing (0.5, 0.25, 0.125).
    void addPlaceholder(int index) {
        auto placeholder = std::make_unique<CHeroPlaceholder>();
        placeholder->setIndex(index);
        placeholder->setLocation({.position = common::CVector3f(1.0F, 2.0F, 3.0F), .area_id = 4});
        placeholder->setOrientation(common::CVector3f(0.5F, 0.25F, 0.125F));
        mission_.addActorToList(std::move(placeholder));
    }

    void addActor(std::string_view name) {
        auto actor = std::make_unique<CTestActor>(kTestLeafType);
        actor->setActorName(name);
        mission_.addActorToList(std::move(actor));
    }

    [[nodiscard]] std::vector<std::string> names() const {
        std::vector<std::string> result;
        for (const std::unique_ptr<CDemonActor> &actor : mission_.getActors()) {
            result.push_back(actor->getActorName());
        }
        return result;
    }
};

// The new hero goes on the end of the list, and every placeholder comes off it.
TEST_F(CDemonMissionHeroesTest, TheGamesHeroIsMadeAtThePlaceForTheFirstHero) {
    game_.hero_number = EHeroType::HERO_TYPE_SCAT;
    addPlaceholder(1);
    addActor("Door");
    addPlaceholder(0);
    ASSERT_TRUE(mission_.createHeros(nullptr));
    EXPECT_EQ(names(), (std::vector<std::string>{"Door", "Scat0"}));
    EXPECT_EQ(mission_.getHeroCount(), 1);
    CHero *hero = mission_.getHero(0);
    ASSERT_NE(hero, nullptr);
    EXPECT_EQ(&hero->getActorType(), &CScat::kType);
    EXPECT_EQ(hero, mission_.getActors().back().get());
    EXPECT_EQ(hero->getLocation().position.x, 1.0F);
    EXPECT_EQ(hero->getLocation().area_id, 4);
    EXPECT_EQ(mission_.getHero(1), nullptr);
}

// It is put where the place is, in its area, and starts its first motion standing still.
TEST_F(CDemonMissionHeroesTest, AHeroGivenIsPutAtThePlaceInstead) {
    addPlaceholder(0);
    auto given = std::make_unique<CTestPlacedHero>();
    given->setActorName("Gabriel");
    given->getModel().jumpToMotion(3, 5.0F);
    CTestPlacedHero &hero = *given;
    ASSERT_TRUE(mission_.createHeros(std::move(given)));
    EXPECT_EQ(names(), (std::vector<std::string>{"Gabriel"}));
    EXPECT_EQ(mission_.getHero(0), &hero);
    EXPECT_EQ(hero.placed_at.y, 2.0F);
    EXPECT_EQ(hero.placed_facing.z, 0.125F);
    EXPECT_EQ(hero.getLocation().position.z, 3.0F);
    EXPECT_EQ(hero.getLocation().area_id, 4);
    EXPECT_EQ(hero.getModel().getCurrentMotionIndex(), 0);
    EXPECT_EQ(hero.getModel().getCurrentFrameNumber(), 0.0F);
    EXPECT_EQ(hero.walk_targets, (std::vector<CDemonActor *>{nullptr}));
    EXPECT_EQ(hero.walk_distances, (std::vector<std::pair<float, float>>{{0.0F, 0.0F}}));
}

// The error waits for a key, and the placeholders stay.
TEST_F(CDemonMissionHeroesTest, WithNoPlaceForTheFirstHeroItFails) {
    addPlaceholder(1);
    EXPECT_CALL(raw_input_, getNextKeypress(_)).WillOnce(Return('x'));
    EXPECT_FALSE(mission_.createHeros(nullptr));
    EXPECT_EQ(names(), (std::vector<std::string>{"HeroPlaceholder0"}));
    EXPECT_EQ(mission_.getHero(0), nullptr);
}

TEST_F(CDemonMissionHeroesTest, MakingTheHeroesAgainForgetsTheLastOnes) {
    addPlaceholder(0);
    ASSERT_TRUE(mission_.createHeros(nullptr));
    EXPECT_CALL(raw_input_, getNextKeypress(_)).WillOnce(Return('x'));
    EXPECT_FALSE(mission_.createHeros(nullptr));
    EXPECT_EQ(mission_.getHero(0), nullptr);
}

TEST_F(CDemonMissionHeroesTest, DestroyingAHeroTakesItOffTheHeroes) {
    addPlaceholder(0);
    ASSERT_TRUE(mission_.createHeros(nullptr));
    mission_.removeActor(*mission_.getHero(0));
    EXPECT_EQ(mission_.getHero(0), nullptr);
    EXPECT_TRUE(mission_.getActors().empty());
}

TEST_F(CDemonMissionHeroesTest, RemovingAnActorNotOnTheListLeavesTheHeroes) {
    addPlaceholder(0);
    ASSERT_TRUE(mission_.createHeros(nullptr));
    const CTestActor stranger(kTestLeafType);
    mission_.removeActor(stranger);
    EXPECT_NE(mission_.getHero(0), nullptr);
}

TEST_F(CDemonMissionHeroesTest, RemovingAllActorsLeavesNoHeroes) {
    addPlaceholder(0);
    ASSERT_TRUE(mission_.createHeros(nullptr));
    mission_.removeAllActors();
    EXPECT_EQ(mission_.getHeroCount(), 0);
    EXPECT_EQ(mission_.getHero(0), nullptr);
}

} // namespace
} // namespace nocturne::core
