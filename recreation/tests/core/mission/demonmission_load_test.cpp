#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "common/text/textscanner.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "core/hero/heroplaceholder.h"
#include "core/location.h"
#include "core/mission/demonmission.h"
#include "engine/keys/inputcodetype.h"
#include "platform/mrgltexturebasic.h"
#include "tests/mocks/core/missionfixture.h"
#include "tests/mocks/core/testactor.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstddef>
#include <format>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::EndsWith;
using ::testing::Return;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

std::unique_ptr<CDemonActor> makeDoor();
std::unique_ptr<CDemonActor> makeHero();
std::unique_ptr<CDemonActor> makeSpot();

const CDemonActorType kDoorType = makeActorType("CTestDoor", &kTestBaseType, &makeDoor, 2);
// Named as the game's hero class is, which is what a hero placeholder is offered for.
const CDemonActorType kHeroType = makeActorType("CHero", &kTestBaseType, &makeHero, 1);
const CDemonActorType kSpotType =
    makeActorType("CTestSpot", &CHeroPlaceholder::kType, &makeSpot, 1);

// A hero placeholder whose body holds its hero index, as CHeroPlaceholder's can't be read yet.
class CTestSpot : public CHeroPlaceholder {
public:
    [[nodiscard]] const CDemonActorType &getActorType() const override {
        return kSpotType;
    }
    void archive(CActorArchive &actor_archive) override {
        setIndex(actor_archive.getScanner().scanInteger().value_or(0));
    }
};

// A hero whose body holds its position, area and orientation.
class CTestHero : public CTestActor {
public:
    CTestHero() : CTestActor(kHeroType) {}
    void archive(CActorArchive &actor_archive) override {
        common::CTextScanner &scanner = actor_archive.getScanner();
        const auto number = [&scanner] { return scanner.scanFloat().value_or(0.0F); };
        CLocation location;
        location.position = {.x = number(), .y = number(), .z = number()};
        location.area_id = scanner.scanInteger().value_or(0);
        setLocation(location);
        setOrientation({.x = number(), .y = number(), .z = number()});
    }
};

std::unique_ptr<CDemonActor> makeDoor() {
    return std::make_unique<CTestActor>(kDoorType);
}

std::unique_ptr<CDemonActor> makeHero() {
    return std::make_unique<CTestHero>();
}

std::unique_ptr<CDemonActor> makeSpot() {
    return std::make_unique<CTestSpot>();
}

// An actor's start and end tags with nothing between.
std::string body(std::string_view class_name, std::string_view name) {
    return std::format("{{ {} \"{}\"\n}} {} \"{}\"\n", class_name, name, class_name, name);
}

// A version 7 mission named Test with one set, whose actors' class and name lines, and bodies,
// are as given.
std::string mission(std::string_view types, int actor_count, int carried_count,
                    std::string_view entries, std::string_view bodies) {
    return std::format("; mission\n7,4\n; name\nTest\n; sets\n1\nSET1\n; types\n{}; actors\n{}\n"
                       "; carried\n{}\n; list\n{}; bodies\n{}",
                       types, actor_count, carried_count, entries, bodies);
}

class CDemonMissionLoadTest : public CMissionFixture {
protected:
    CDemonMissionLoadTest() {
        actor_.registerActorClass(kDoorType);
        actor_.registerActorClass(kHeroType);
        actor_.registerActorClass(kSpotType);
    }

    void read(const std::string &text, bool keep_assets = true) {
        common::CTextScanner scanner(text);
        mission_.readMissionFile(scanner, keep_assets);
    }

    [[nodiscard]] std::vector<std::string> names() const {
        std::vector<std::string> list;
        for (const std::unique_ptr<CDemonActor> &actor : mission_.getActors()) {
            list.push_back(actor->getActorName());
        }
        return list;
    }

    void expectFatal(const std::string &text, const std::string &message) {
        EXPECT_THAT([&] { read(text); }, ThrowsMessage<common::CFatalError>(StrEq(message)));
    }
};

TEST_F(CDemonMissionLoadTest, TheFileGivesTheNameVersionAndActorsInOrder) {
    read(mission("2\nCTestDoor 2\nCTestSpot 1\n", 2, 0,
                 "CTestDoor \"Door 1\"\nCTestSpot \"Start\"\n",
                 body("CTestDoor", "Door 1") + body("CTestSpot", "Start")));
    EXPECT_EQ(mission_.getMissionName(), "Test");
    EXPECT_EQ(mission_.getMissionVersionNum(), 7);
    EXPECT_EQ(names(), (std::vector<std::string>{"Door 1", "Start"}));
    EXPECT_EQ(&mission_.getActors()[0]->getActorType(), &kDoorType);
}

// A new mission replaces the actors and the name of the last.
TEST_F(CDemonMissionLoadTest, ReadingAMissionReplacesTheOneBefore) {
    read(mission("0\n", 1, 0, "CTestDoor \"a\"\n", body("CTestDoor", "a")));
    read("; mission\n7,4\n; name\n");
    EXPECT_TRUE(mission_.getActors().empty());
    EXPECT_EQ(mission_.getMissionName(), "");
}

// Version 2 has no table of classes and no carried items.
TEST_F(CDemonMissionLoadTest, AVersionTwoMissionHasNoClassTable) {
    read("; mission\n2,4\n; name\nOld\n; sets\n0\n; actors\n1\n; list\nCTestDoor \"a\"\n"
         "; bodies\n" +
         body("CTestDoor", "a"));
    EXPECT_EQ(names(), (std::vector<std::string>{"a"}));
}

// An actor the list gives no name is named for its class until its body names it. Without
// quotes the line after the list is where fscanf stops, which the skip after the list takes.
TEST_F(CDemonMissionLoadTest, AnActorsNameComesFromItsBody) {
    read(mission("0\n", 2, 0, "CTestDoor \"a\"\nCTestDoor\n",
                 body("CTestDoor", "x") + body("CTestDoor", "y")));
    EXPECT_EQ(names(), (std::vector<std::string>{"x", "y"}));
}

// fscanf's %[^"] fails on an empty name and stops at its closing quote, so the skip after the
// list takes the rest of that line, and the bodies are read from the line before them.
TEST_F(CDemonMissionLoadTest, AnEmptyNameLastInTheListMisplacesTheBodies) {
    expectFatal(mission("0\n", 1, 0, "CTestDoor \"\"\n", body("CTestDoor", "z")),
                "Start of actor file tag mismatch for class CTestDoor");
}

// fscanf stops at a name without its quotes, so the next entry reads the name as its class.
TEST_F(CDemonMissionLoadTest, AnUnquotedNameIsReadAsTheNextClass) {
    expectFatal(mission("0\n", 2, 0, "CTestDoor door\nCTestDoor \"b\"\n", ""),
                "Can't create actor of unknown class type: door");
}

TEST_F(CDemonMissionLoadTest, AMissionNewerThanTheGameIsFatal) {
    expectFatal("; mission\n8,4\n", "Invalid mission version number: 8, current version is 7.  "
                                    "(You probably have an old .exe)");
}

TEST_F(CDemonMissionLoadTest, AnOldActorFormatIsFatal) {
    expectFatal("; mission\n7,3\n",
                "This mission uses actor format version 3, which we don't support anymore!");
    expectFatal("; mission\n7\n",
                "This mission uses actor format version 0, which we don't support anymore!");
}

// The version stays what it was when it can't be read.
TEST_F(CDemonMissionLoadTest, AMissionBeforeVersionTwoHasNoName) {
    expectFatal("; mission\n1,4\n", "No name in mission");
    expectFatal("; mission\nx,4\n",
                "This mission uses actor format version 0, which we don't support anymore!");
}

TEST_F(CDemonMissionLoadTest, AClassSavedNewerThanTheGameIsFatal) {
    expectFatal(mission("1\nCTestDoor 3\n", 0, 0, "", ""),
                "Actor type CTestDoor is saved in mission in format version 3, but the latest "
                "version this .EXE supports is 2!");
}

// Unknown classes are passed over, and a class with no version keeps the one before.
TEST_F(CDemonMissionLoadTest, AClassWithoutAVersionTakesTheLastRead) {
    read(mission("2\nCNothing 9\n\n", 0, 0, "", ""));
    expectFatal(mission("2\nCNothing 9\nCTestDoor\n", 0, 0, "", ""),
                "Actor type CTestDoor is saved in mission in format version 9, but the latest "
                "version this .EXE supports is 2!");
}

// A file that ends early reads as nothing from there on: a class with no name is passed over,
// and an actor with no class is of no known class.
TEST_F(CDemonMissionLoadTest, AFileEndingEarlyReadsAsNothing) {
    const std::string start = "; mission\n7,4\n; name\nT\n; sets\n0\n; types\n";
    read(start + "1\n");
    EXPECT_TRUE(mission_.getActors().empty());
    expectFatal(start + "0\n; actors\n1\n; carried\n0\n; list\n",
                "Can't create actor of unknown class type: ");
}

TEST_F(CDemonMissionLoadTest, AnUnknownClassInTheListIsFatal) {
    expectFatal(mission("0\n", 1, 0, "CNothing \"a\"\n", ""),
                "Can't create actor of unknown class type: CNothing");
}

TEST_F(CDemonMissionLoadTest, MoreThanTwoThousandActorsIsFatal) {
    std::string entries;
    for (int i = 0; i <= 2000; ++i) {
        entries += "CTestDoor \"a\"\n";
    }
    expectFatal(mission("0\n", 2001, 0, entries, ""), "Too many actors");
    EXPECT_EQ(mission_.getActors().size(), 2001U);
}

// A negative count of carried items leaves fewer actors than bodies to read.
TEST_F(CDemonMissionLoadTest, TooFewActorsForTheBodiesIsFatal) {
    expectFatal(mission("0\n", 2, -1, "CTestDoor \"a\"\n", body("CTestDoor", "a")),
                "CDemonMission::load - actor list count mismatch #1!");
}

// Carried items wait for their hero's inventory to take them off the list.
TEST_F(CDemonMissionLoadTest, ActorsLeftAfterTheBodiesAreFatal) {
    expectFatal(mission("0\n", 1, 1, "CTestDoor \"a\"\nCTestDoor \"b\"\n", body("CTestDoor", "a")),
                "CDemonMission::load - actor list count mismatch #3!");
    expectFatal(mission("0\n", -1, 2, "CTestDoor \"a\"\n", ""),
                "CDemonMission::load - actor list count mismatch #3!");
}

TEST_F(CDemonMissionLoadTest, NoActorsAtAllIsAnEmptyMission) {
    read(mission("0\n", -1, 0, "", ""));
    EXPECT_TRUE(mission_.getActors().empty());
}

// Without keep_assets the texture cache is emptied, so a texture loaded before is loaded again.
TEST_F(CDemonMissionLoadTest, TheTexturesAreFreedUnlessKept) {
    givenFile("art\\T.RAW", std::string(std::size_t{32} * 32, '\x01'));
    textures_.initTextureCache();
    platform::SMRGLTextureBasic texture{.texture_name = "T.RAW"};
    textures_.ensureTextureLoaded(texture);
    EXPECT_CALL(file_system_, getFileInfo(_)).Times(::testing::AnyNumber());
    EXPECT_CALL(file_system_, getFileInfo(EndsWith("T.RAW"))).Times(0);
    read(mission("0\n", 0, 0, "", ""), true);
    textures_.ensureTextureLoaded(texture);
    ::testing::Mock::VerifyAndClearExpectations(&file_system_);
    EXPECT_CALL(file_system_, getFileInfo(_)).Times(::testing::AnyNumber());
    EXPECT_CALL(file_system_, getFileInfo(EndsWith("T.RAW"))).Times(::testing::AtLeast(1));
    read(mission("0\n", 0, 0, "", ""), false);
    textures_.ensureTextureLoaded(texture);
}

TEST_F(CDemonMissionLoadTest, LoadingReadsTheWorldFile) {
    givenFile("world\\test.msn",
              mission("0\n", 1, 0, "CTestSpot \"s\"\n", body("CTestSpot", "Start")));
    EXPECT_CALL(raw_input_, getNextKeypress(_)).Times(0);
    mission_.load("test.msn", true);
    EXPECT_EQ(names(), (std::vector<std::string>{"Start"}));
}

TEST_F(CDemonMissionLoadTest, AMissingFileIsFatal) {
    EXPECT_THAT(
        [this] { mission_.load("none.msn", true); },
        ThrowsMessage<common::CFatalError>(StrEq("CDemonMission::load - Unable to open file")));
}

// With nothing that is or could be the first hero's place, a message says so and waits.
TEST_F(CDemonMissionLoadTest, AMissionWithNoHeroesOrPlaceholderSaysSo) {
    givenFile("world\\test.msn", mission("0\n", 1, 0, "CTestDoor \"d\"\n", body("CTestDoor", "d")));
    EXPECT_CALL(raw_input_, getNextKeypress(_)).WillOnce(Return('x'));
    mission_.load("test.msn", true);
    EXPECT_EQ(names(), (std::vector<std::string>{"d"}));
}

// A door, the heroes Gabriel at (1, 2, 3) in area 4 facing (0.5, 0.25, 0.125) and Stranger, and
// a placeholder for the hero given.
std::string heroMission(int placeholder_index) {
    return mission(
        "0\n", 4, 0,
        "CTestDoor \"Door\"\nCHero \"Gabriel\"\nCHero \"Stranger\"\nCTestSpot \"Spot\"\n",
        body("CTestDoor", "Door") +
            "{ CHero \"Gabriel\"\n1 2 3 4 0.5 0.25 0.125\n} CHero \"Gabriel\"\n"
            "{ CHero \"Stranger\"\n0 0 0 0 0 0 0\n} CHero \"Stranger\"\n" +
            std::format("{{ CTestSpot \"Spot\"\n{}\n}} CTestSpot \"Spot\"\n", placeholder_index));
}

TEST_F(CDemonMissionLoadTest, APlaceholderForTheFirstHeroLeavesTheMissionAsItIs) {
    givenFile("world\\test.msn", heroMission(0));
    EXPECT_CALL(raw_input_, getNextKeypress(_)).Times(0);
    mission_.load("test.msn", true);
    EXPECT_EQ(names(), (std::vector<std::string>{"Door", "Gabriel", "Stranger", "Spot"}));
}

// The heroes are offered in list order; the one picked is replaced, at its place, by a
// placeholder for the first hero, named for its class and put at the end.
TEST_F(CDemonMissionLoadTest, APickedHeroBecomesThePlaceholder) {
    givenFile("world\\test.msn", heroMission(1));
    press(engine::EInputCodeType::DIK_RETURN);
    EXPECT_CALL(raw_input_, getNextKeypress(_)).WillOnce(Return('x'));
    mission_.load("test.msn", true);
    EXPECT_EQ(names(), (std::vector<std::string>{"Door", "Stranger", "Spot", "HeroPlaceholder0"}));
    const CDemonActor &placeholder = *mission_.getActors().back();
    EXPECT_EQ(&placeholder.getActorType(), &CHeroPlaceholder::kType);
    EXPECT_EQ(dynamic_cast<const CHeroPlaceholder &>(placeholder).getIndex(), 0);
    const CLocation &location = placeholder.getLocation();
    EXPECT_EQ(location.position.x, 1.0F);
    EXPECT_EQ(location.position.y, 2.0F);
    EXPECT_EQ(location.position.z, 3.0F);
    EXPECT_EQ(location.area_id, 4);
    const common::CVector3f &orientation = placeholder.getOrientation();
    EXPECT_EQ(orientation.x, 0.5F);
    EXPECT_EQ(orientation.y, 0.25F);
    EXPECT_EQ(orientation.z, 0.125F);
}

TEST_F(CDemonMissionLoadTest, CancellingThePickLeavesTheMissionAsItIs) {
    givenFile("world\\test.msn", heroMission(1));
    press(engine::EInputCodeType::DIK_ESCAPE);
    EXPECT_CALL(raw_input_, getNextKeypress(_)).Times(0);
    mission_.load("test.msn", true);
    EXPECT_EQ(names(), (std::vector<std::string>{"Door", "Gabriel", "Stranger", "Spot"}));
}

} // namespace
} // namespace nocturne::core
