#include "core/mission/demonmission.h"

#include <gtest/gtest.h>

#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CDemonMission, IsConcrete) {
    static_assert(!std::is_abstract_v<CDemonMission>);
}

TEST(CDemonMission, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CDemonMission::reset), void (CDemonMission::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonMission::clearMission), void (CDemonMission::*)()>);
    static_assert(
        std::is_same_v<decltype(&CDemonMission::load), void (CDemonMission::*)(char *, int)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::readMissionFile),
                                 void (CDemonMission::*)(std::FILE *, int)>);
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
                                 void (CDemonMission::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::removeActorFromList),
                                 void (CDemonMission::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::findActorByName),
                                 CDemonActor *(CDemonMission::*)(char *)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::setTeleportTarget),
                                 void (CDemonMission::*)(CLocation *)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::markActorToDelete),
                                 void (CDemonMission::*)(CDemonActor *, std::uint32_t)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::process), void (CDemonMission::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonMission::run), void (CDemonMission::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonMission::setMissionName),
                                 void (CDemonMission::*)(std::string_view)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::generateActorName),
                                 void (CDemonMission::*)(CDemonActor *)>);
    static_assert(std::is_same_v<decltype(&CDemonMission::startMission), int (CDemonMission::*)()>);
    static_assert(std::is_same_v<decltype(&CDemonMission::createHeros),
                                 int (CDemonMission::*)(CCharacter *)>);
    static_assert(
        std::is_same_v<decltype(&CDemonMission::countDamageableEnemies), int (CDemonMission::*)()>);
}

TEST(CDemonMission, StartsWithNoMissionAndNoActors) {
    const CDemonMission mission;
    EXPECT_FALSE(mission.isInEditor());
    EXPECT_EQ(mission.getMissionVersionNum(), -1);
    EXPECT_EQ(mission.getMissionName(), "");
    EXPECT_EQ(mission.getPendingMissionName(), "");
    EXPECT_EQ(mission.getFirstActor(), nullptr);
    EXPECT_EQ(mission.getLastActor(), nullptr);
}

TEST(CDemonMission, SettingTheNameAsksForThatMissionNext) {
    CDemonMission mission;
    mission.setMissionName("chap1");
    EXPECT_EQ(mission.getPendingMissionName(), "chap1");
    EXPECT_EQ(mission.getMissionName(), "");
}

TEST(CDemonMission, ResetDropsTheMissionAskedFor) {
    CDemonMission mission;
    mission.setMissionName("chap1");
    mission.reset();
    EXPECT_EQ(mission.getPendingMissionName(), "");
    EXPECT_EQ(mission.getMissionVersionNum(), -1);
}

} // namespace
} // namespace nocturne::core
