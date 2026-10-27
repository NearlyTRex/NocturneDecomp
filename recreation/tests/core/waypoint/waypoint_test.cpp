#include "core/actor/demonactortype.h"
#include "core/trigger/trigger.h"
#include "core/waypoint/waypoint.h"
#include "tests/mocks/core/notportedcalls.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <gtest/gtest.h>

#include <memory>
#include <string>
#include <string_view>
#include <type_traits>

namespace nocturne::core {
namespace {

TEST(CWayPoint, DerivesFromCTrigger) {
    static_assert(std::is_base_of_v<CTrigger, CWayPoint>);
}

TEST(CWayPoint, HasVirtualDestructor) {
    static_assert(std::has_virtual_destructor_v<CWayPoint>);
}

TEST(CWayPoint, IsConcrete) {
    static_assert(!std::is_abstract_v<CWayPoint>);
}

TEST(CWayPoint, Constructors) {
    static_assert(std::is_constructible_v<CWayPoint>);
}

TEST(CWayPoint, PublicInterface) {
    static_assert(std::is_same_v<decltype(&CWayPoint::setup), void (CWayPoint::*)()>);
    static_assert(std::is_same_v<decltype(&CWayPoint::renderOpaque), int (CWayPoint::*)()>);
    static_assert(std::is_same_v<decltype(&CWayPoint::getActorType),
                                 const CDemonActorType &(CWayPoint::*)() const>);
    static_assert(
        std::is_same_v<decltype(&CWayPoint::archive), void (CWayPoint::*)(CActorArchive &)>);
    static_assert(std::is_same_v<decltype(&CWayPoint::findNearestReachable),
                                 CWayPoint *(CWayPoint::*)(CWayPoint *)>);
}

TEST(CWayPoint, ItsRecordIsVersion2UnderCTriggerAndMissionsCanCreateOne) {
    EXPECT_EQ(CWayPoint::kType.class_name, "CWayPoint");
    EXPECT_EQ(CWayPoint::kType.parent_type, &CTrigger::kType);
    EXPECT_EQ(CWayPoint::kType.latest_version, 2);
    ASSERT_NE(CWayPoint::kType.factory_func, nullptr);
    const std::unique_ptr<CDemonActor> actor = CWayPoint::kType.factory_func();
    EXPECT_EQ(&actor->getActorType(), &CWayPoint::kType);
}

TEST(CWayPoint, AWayPointIsAHalfByOneByHalfTriggerLeadingNowhere) {
    const CWayPoint waypoint;
    EXPECT_EQ(waypoint.getTriggerSize().x, 0.5F);
    EXPECT_EQ(waypoint.getTriggerSize().y, 1.0F);
    EXPECT_EQ(waypoint.getTriggerSize().z, 0.5F);
    EXPECT_TRUE(waypoint.getAdjacentWaypoints().empty());
}

// A trigger's version 1 fields, then the waypoint's own.
class CWayPointArchiveTest : public ::testing::Test {
protected:
    static constexpr std::string_view kTriggerFields = "0\n0.5,1,0.5\n0\n\"\"\n\"\"\n";

    CWayPointArchiveTest() {
        first_.setActorName("WayPoint1");
        second_.setActorName("WayPoint2");
    }

    void read(int saved_version, std::string_view fields) {
        CTestFieldsArchive archive(waypoint_, CWayPoint::kType, saved_version,
                                   std::string(kTriggerFields) + std::string(fields));
        archive.getClasses().setSavedVersion(CTrigger::kType, 1);
        archive.addActor(first_);
        archive.addActor(second_);
        waypoint_.archive(archive.get());
        EXPECT_EQ(waypoint_.getLocation().area_id, CTestFieldsArchive::kArea);
        EXPECT_TRUE(archive.isFinished());
    }

    CWayPoint waypoint_;
    CTestActor first_{kTestBaseType};
    CTestActor second_{kTestBaseType};
};

TEST_F(CWayPointArchiveTest, AWayPointIsReadWithTheWaypointsItLeadsTo) {
    read(2, "3 // adjCount\n\"WayPoint1\"\n\"Gone\"\n\"WayPoint2\"\n");
    const auto adjacent = waypoint_.getAdjacentWaypoints();
    ASSERT_EQ(adjacent.size(), 3U);
    EXPECT_EQ(adjacent[0], &first_);
    EXPECT_EQ(adjacent[1], nullptr);
    EXPECT_EQ(adjacent[2], &second_);
}

TEST_F(CWayPointArchiveTest, ANegativeCountLeadsNowhere) {
    read(2, "-2\n");
    EXPECT_TRUE(waypoint_.getAdjacentWaypoints().empty());
}

// Version 1 named only the next waypoint, which nothing reads.
TEST_F(CWayPointArchiveTest, AVersionOneWayPointsNextIsDropped) {
    read(1, "\"WayPoint1\" // nextWayPoint\n");
    EXPECT_TRUE(waypoint_.getAdjacentWaypoints().empty());
}

TEST(CWayPoint, TheFunctionsNotPortedYetQuit) {
    CWayPoint waypoint;
    const NotPortedCalls calls = {
        {"setup", [&] { waypoint.setup(); }},
        {"renderOpaque", [&] { static_cast<void>(waypoint.renderOpaque()); }},
    };
    expectEachQuitsNotPorted("CWayPoint", calls);
}

} // namespace
} // namespace nocturne::core
