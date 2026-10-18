#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/mission/demonmission.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/testactor.h"

#include <gtest/gtest.h>

#include <memory>
#include <span>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>
#include <vector>

namespace nocturne::core {
namespace {

TEST(CDemonMission, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonMission>);
}

TEST(CDemonMission, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonMission::reset), void (CDemonMission::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonMission::clearMission), void (CDemonMission::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonMission::load),
                                 void (CDemonMission::*)(std::string_view, bool)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::readMissionFile),
                                 void (CDemonMission::*)(common::CTextScanner &, bool)>);
    static_assert(
        std::is_same_v<decltype(&CDemonMission::freeAllAssets), void (CDemonMission::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonMission::getNextLoadedInventoryActor),
                                 CDemonActor *(CDemonMission::*)(char *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonMission::writeFile), void (CDemonMission::*)(std::FILE *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonMission::loadActor),
                       CDemonActor *(CDemonMission::*)(std::FILE *, CDemonActor *, char *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonMission::saveActor),
                       void (CDemonMission::*)(CDemonActor *, std::FILE *, CDemonActor *, char *)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::addActorToList),
                                 void (CDemonMission::*)(std::unique_ptr<CDemonActor>)>);
    static_assert(
        std::is_same_v<decltype(&CDemonMission::removeActorFromList),
                       std::unique_ptr<CDemonActor> (CDemonMission::*)(const CDemonActor &)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::removeActor),
                                 void (CDemonMission::*)(const CDemonActor &)>);
    static_assert(
        std::is_same_v<decltype(&CDemonMission::removeAllActors), void (CDemonMission::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonMission::findActorByName),
                                 CDemonActor *(CDemonMission::*)(std::string_view) const>);
    static_assert(
        std::is_same_v<decltype(&CDemonMission::getActors),
                       std::span<const std::unique_ptr<CDemonActor>> (CDemonMission::*)() const>);
    static_assert(std::is_same_v<decltype(&CDemonMission::setTeleportTarget),
                                 void (CDemonMission::*)(CLocation *)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::markActorToDelete),
                                 void (CDemonMission::*)(CDemonActor *, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::process), void (CDemonMission::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonMission::run), void (CDemonMission::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonMission::setMissionName),
                                 void (CDemonMission::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::generateActorName),
                                 void (CDemonMission::*)(CDemonActor &) const>);
    static_assert(std::is_same_v<decltype(&CDemonMission::startMission), int (CDemonMission::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonMission::createHeros),
                                 int (CDemonMission::*)(CCharacter *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonMission::countDamageableEnemies), int (CDemonMission::*)()>);
}

class CDemonMissionTest : public CMissionFixture {};

TEST_F(CDemonMissionTest, StartsWithNoMissionAndNoActors) {
    EXPECT_FALSE(mission_.isInEditor());
    EXPECT_EQ(mission_.getMissionVersionNum(), -1);
    EXPECT_EQ(mission_.getMissionName(), "");
    EXPECT_EQ(mission_.getPendingMissionName(), "");
    EXPECT_TRUE(mission_.getActors().empty());
}

TEST_F(CDemonMissionTest, SettingTheNameAsksForThatMissionNext) {
    mission_.setMissionName("chap1");
    EXPECT_EQ(mission_.getPendingMissionName(), "chap1");
    EXPECT_EQ(mission_.getMissionName(), "");
}

TEST_F(CDemonMissionTest, ResetDropsTheMissionAskedFor) {
    mission_.setMissionName("chap1");
    mission_.reset();
    EXPECT_EQ(mission_.getPendingMissionName(), "");
    EXPECT_EQ(mission_.getMissionVersionNum(), -1);
}

// A class whose name has no leading 'C'.
constexpr CDemonActorType kGadgetType = makeActorType("Gadget", nullptr, nullptr, 1);

// A test actor that counts its own destruction.
class CCountedActor : public CTestActor {
public:
    CCountedActor(const CDemonActorType &type, int &destroyed)
        : CTestActor(type), destroyed_(destroyed) {}
    ~CCountedActor() override {
        ++destroyed_;
    }
    CCountedActor(const CCountedActor &) = delete;
    CCountedActor &operator=(const CCountedActor &) = delete;
    CCountedActor(CCountedActor &&) = delete;
    CCountedActor &operator=(CCountedActor &&) = delete;

private:
    int &destroyed_;
};

class CDemonMissionActorsTest : public CMissionFixture {
protected:
    // Adds an actor of the class, named as given or by the mission when the name is empty.
    CDemonActor &add(std::string_view name, const CDemonActorType &type = kTestLeafType) {
        auto actor = std::make_unique<CCountedActor>(type, destroyed_);
        actor->setActorName(name);
        CDemonActor &added = *actor;
        mission_.addActorToList(std::move(actor));
        return added;
    }

    [[nodiscard]] std::vector<std::string> names() const {
        std::vector<std::string> list;
        for (const std::unique_ptr<CDemonActor> &actor : mission_.getActors()) {
            list.push_back(actor->getActorName());
        }
        return list;
    }

    // The actors count into destroyed_, which goes before the fixture's mission does.
    void TearDown() override {
        mission_.removeAllActors();
    }

    int destroyed_ = 0;
};

TEST_F(CDemonMissionActorsTest, ActorsAreAddedToTheEnd) {
    add("a");
    add("b");
    mission_.addActorToList(nullptr);
    EXPECT_EQ(names(), (std::vector<std::string>{"a", "b"}));
}

// The class's name without its 'C', numbered from 0.
TEST_F(CDemonMissionActorsTest, AnUnnamedActorIsNamedAfterItsClass) {
    add("");
    add("");
    add("", kGadgetType);
    EXPECT_EQ(names(), (std::vector<std::string>{"TestLeaf0", "TestLeaf1", "Gadget0"}));
}

// One past the highest number any name has after the class's name, in either case and with
// sscanf's reading of the number.
TEST_F(CDemonMissionActorsTest, ANewNameIsNumberedPastTheHighest) {
    add("testleaf7");
    add("TestLeaf 3");
    add("TestLeafX9");
    add("Other12");
    add("");
    EXPECT_EQ(names().back(), "TestLeaf8");
}

TEST_F(CDemonMissionActorsTest, ANumberReadAsNegativeCountsBelowZero) {
    add("TestLeaf-5");
    add("");
    EXPECT_EQ(names().back(), "TestLeaf0");
}

TEST_F(CDemonMissionActorsTest, GeneratingANameReplacesTheActorsOwn) {
    CDemonActor &actor = add("TestLeaf4");
    mission_.generateActorName(actor);
    EXPECT_EQ(actor.getActorName(), "TestLeaf0");
}

TEST_F(CDemonMissionActorsTest, AnActorIsFoundByNameIgnoringCase) {
    add("door");
    const CDemonActor &second = add("Lamp");
    add("LAMP");
    EXPECT_EQ(mission_.findActorByName("lamp"), &second);
    EXPECT_EQ(mission_.findActorByName("chair"), nullptr);
}

TEST_F(CDemonMissionActorsTest, TakingAnActorOffHandsItBack) {
    add("a");
    const CDemonActor &b = add("b");
    add("c");
    const std::unique_ptr<CDemonActor> removed = mission_.removeActorFromList(b);
    EXPECT_EQ(removed.get(), &b);
    EXPECT_EQ(names(), (std::vector<std::string>{"a", "c"}));
    EXPECT_EQ(destroyed_, 0);
    EXPECT_EQ(mission_.removeActorFromList(*removed), nullptr);
}

TEST_F(CDemonMissionActorsTest, RemovingAnActorDestroysIt) {
    add("a");
    const CDemonActor &b = add("b");
    mission_.removeActor(b);
    EXPECT_EQ(names(), (std::vector<std::string>{"a"}));
    EXPECT_EQ(destroyed_, 1);
}

TEST_F(CDemonMissionActorsTest, RemovingAnActorOffTheListLeavesItAlone) {
    add("a");
    const CCountedActor other(kTestLeafType, destroyed_);
    mission_.removeActor(other);
    EXPECT_EQ(names(), (std::vector<std::string>{"a"}));
    EXPECT_EQ(destroyed_, 0);
}

TEST_F(CDemonMissionActorsTest, RemovingAllDestroysEveryActor) {
    add("a");
    add("b");
    mission_.removeAllActors();
    EXPECT_TRUE(mission_.getActors().empty());
    EXPECT_EQ(destroyed_, 2);
}

TEST_F(CDemonMissionActorsTest, ResetDestroysTheActors) {
    add("a");
    mission_.reset();
    EXPECT_TRUE(mission_.getActors().empty());
    EXPECT_EQ(destroyed_, 1);
}

} // namespace
} // namespace nocturne::core
