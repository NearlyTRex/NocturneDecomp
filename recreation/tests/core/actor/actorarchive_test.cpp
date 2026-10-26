#include "common/error/fatalerror.h"
#include "common/math/vector3f.h"
#include "common/random/watcomrandom.h"
#include "common/text/textscanner.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/cloth/clothlist.h"
#include "core/game/game.h"
#include "core/location.h"
#include "core/skeleton/deformablemodelinstance.h"
#include "core/skeleton/partvisibility.h"
#include "tests/mocks/core/mockactorlookup.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <format>
#include <functional>
#include <string>
#include <string_view>

namespace nocturne::core {
namespace {

using ::testing::_;
using ::testing::ElementsAre;
using ::testing::Ref;
using ::testing::StrEq;
using ::testing::ThrowsMessage;

// An actor Door whose fields are read from the text each test gives.
class CActorArchiveTest : public ::testing::Test {
protected:
    CActorArchiveTest() {
        actor_.setActorName("Door");
    }

    // Reads with a fresh archive over the text, then gives what is left of it.
    std::string read(std::string_view text, const std::function<void(CActorArchive &)> &fields) {
        common::CTextScanner scanner(text);
        CActorArchive archive(scanner, actor_, owners_);
        fields(archive);
        return std::string(scanner.readLine());
    }

    void expectFatal(std::string_view text, const std::function<void(CActorArchive &)> &fields,
                     std::string_view description, std::string_view type) {
        EXPECT_THAT([&] { read(text, fields); },
                    ThrowsMessage<common::CFatalError>(StrEq(std::format(
                        "Error loading actor property.\nActor name: Door\nActor type: CTestLeaf\n"
                        "Property description: {}\nProperty type: {}\n",
                        description, type))))
            << text;
    }

    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGame game_{clock_};
    common::CWatcomRandom crt_;
    CActor classes_{game_, crt_};
    ::testing::StrictMock<MockActorLookup> actors_;
    const SActorArchiveOwners owners_{
        .actor_classes = classes_, .actors = actors_, .crt_random = crt_};
    CTestActor actor_{kTestLeafType};
};

// Each value is followed by its description, which the read passes over to the next line.
TEST_F(CActorArchiveTest, ALocationIsTheAreaThenThePoint) {
    CLocation location;
    EXPECT_EQ(read("3,1.5,-2,4    // location\nnext",
                   [&](CActorArchive &archive) { archive.archiveLocation(location, "location"); }),
              "next");
    EXPECT_EQ(location.area_id, 3);
    EXPECT_EQ(location.position.x, 1.5F);
    EXPECT_EQ(location.position.y, -2.0F);
    EXPECT_EQ(location.position.z, 4.0F);
}

// Pitch, heading and bank, which the vector holds as x, z and y.
TEST_F(CActorArchiveTest, AnOrientationIsPitchHeadingAndBank) {
    common::CVector3f orientation;
    read("1,2,3\n", [&](CActorArchive &archive) { archive.archiveOrientation(orientation, "o"); });
    EXPECT_EQ(orientation.x, 1.0F);
    EXPECT_EQ(orientation.y, 3.0F);
    EXPECT_EQ(orientation.z, 2.0F);
}

TEST_F(CActorArchiveTest, AVectorIsXYAndZ) {
    common::CVector3f vector;
    read("1,2,3\n", [&](CActorArchive &archive) { archive.archiveVector(vector, "v"); });
    EXPECT_EQ(vector.x, 1.0F);
    EXPECT_EQ(vector.y, 2.0F);
    EXPECT_EQ(vector.z, 3.0F);
}

TEST_F(CActorArchiveTest, NumbersAreReadOneToALine) {
    float value = 0.0F;
    int count = 0;
    EXPECT_EQ(read(" 0.25 // f\n -7\nnext",
                   [&](CActorArchive &archive) {
                       archive.archiveFloat(value, "f");
                       archive.archiveInteger(count, "i");
                   }),
              "next");
    EXPECT_EQ(value, 0.25F);
    EXPECT_EQ(count, -7);
}

// The opening quote may come after any whitespace, lines included, and the quotes may hold
// nothing.
TEST_F(CActorArchiveTest, AStringIsQuoted) {
    std::string text = "old";
    read(" \n \"open door 2\" // e\n",
         [&](CActorArchive &archive) { archive.archiveString(text, "e"); });
    EXPECT_EQ(text, "open door 2");
    read("\"\"\n", [&](CActorArchive &archive) { archive.archiveString(text, "e"); });
    EXPECT_EQ(text, "");
}

TEST_F(CActorArchiveTest, AValueThatCantBeReadIsFatal) {
    CLocation location;
    common::CVector3f vector;
    float value = 0.0F;
    int count = 0;
    expectFatal(
        "1,2,3\n", [&](CActorArchive &archive) { archive.archiveLocation(location, "location"); },
        "location", "4D location");
    expectFatal(
        "1,2\n", [&](CActorArchive &archive) { archive.archiveOrientation(vector, "orient"); },
        "orient", "Euler PBH orientation");
    expectFatal(
        "1 2 3\n", [&](CActorArchive &archive) { archive.archiveVector(vector, "size"); }, "size",
        "3D vector");
    expectFatal(
        "x\n", [&](CActorArchive &archive) { archive.archiveFloat(value, "speed"); }, "speed",
        "Floating point value");
    expectFatal(
        "x\n", [&](CActorArchive &archive) { archive.archiveInteger(count, "count"); }, "count",
        "Integer value");
}

TEST_F(CActorArchiveTest, AStringWithoutBothQuotesIsFatal) {
    std::string text;
    const auto read_string = [&](CActorArchive &archive) { archive.archiveString(text, "name"); };
    for (const std::string_view broken : {"name\"\n", "\"", "\"name\n"}) {
        expectFatal(broken, read_string, "name", "String");
    }
}

// The original reached the end of the file looking for the line's end.
TEST_F(CActorArchiveTest, AValueWithoutItsLineEndIsFatal) {
    int count = 0;
    expectFatal(
        "5 // count", [&](CActorArchive &archive) { archive.archiveInteger(count, "count"); },
        "count", "Integer value");
}

TEST_F(CActorArchiveTest, AFieldWithNoDescriptionIsUnknown) {
    int count = 0;
    expectFatal(
        "x\n", [&](CActorArchive &archive) { archive.archiveInteger(count, ""); }, "(unknown)",
        "Integer value");
}

// The text after the description names it for whoever translates the game.
TEST_F(CActorArchiveTest, ALocalizedStringIsMarkedSo) {
    std::string text;
    read("\"Mob boss\"\n",
         [&](CActorArchive &archive) { archive.archiveLocalizedString(text, "descriptiveName"); });
    EXPECT_EQ(text, "Mob boss");
    expectFatal(
        "x\n", [&](CActorArchive &archive) { archive.archiveLocalizedString(text, "name"); },
        "name !LOCALIZE!", "String");
}

// The mission finds the actor, reading its reference for the actor being read.
TEST_F(CActorArchiveTest, AnActorIsFoundByTheMission) {
    CTestActor carried(kTestOtherType);
    CDemonActor *actor = nullptr;
    EXPECT_CALL(actors_, loadActor(_, Ref(actor_), StrEq("carry actor")))
        .WillOnce([&](common::CTextScanner &scanner, const CDemonActor &, std::string_view) {
            scanner.skipLine();
            return &carried;
        });
    EXPECT_EQ(read("\"Crate\"\nnext",
                   [&](CActorArchive &archive) { archive.archiveActor(actor, "carry actor"); }),
              "next");
    EXPECT_EQ(actor, &carried);
}

// A line opening the list, the count, a name to a line, and a line closing it.
TEST_F(CActorArchiveTest, AClothListIsItsFileNames) {
    CClothList cloth_list;
    EXPECT_EQ(read("\t{ // clothList\n\t\t2 // clothCount\n\t\t\"coat.cls\"\n\t\t\"skirt.cls\"\n"
                   "\t}\nnext",
                   [&](CActorArchive &archive) { archive.archiveClothList(cloth_list, "c"); }),
              "next");
    EXPECT_THAT(cloth_list.getFilenames(), ElementsAre("coat.cls", "skirt.cls"));
    read("{\n0\n}\n", [&](CActorArchive &archive) { archive.archiveClothList(cloth_list, "c"); });
    EXPECT_TRUE(cloth_list.getFilenames().empty());
}

TEST_F(CActorArchiveTest, AClothListThatCantBeReadIsFatal) {
    CClothList cloth_list;
    const auto read_list = [&](CActorArchive &archive) {
        archive.archiveClothList(cloth_list, "clothList");
    };
    expectFatal("{", read_list, "clothList", "Cloth list opening brace");
    expectFatal("{\nnone\n", read_list, "clothList", "cloth count");
    expectFatal("{\n1", read_list, "clothList", "clothCount");
    expectFatal("{\n1\ncoat.cls\n}\n", read_list, "clothList", "cloth filename entry");
    expectFatal("{\n1\n\"coat.cls\"\n}", read_list, "clothList", "Cloth list closing brace");
}

TEST_F(CActorArchiveTest, AMotionStateIsTheMotionAndFrame) {
    CDeformableModelInstance model;
    EXPECT_EQ(read("\t{ // motion state\n\t\t12,3.5\n\t}\nnext",
                   [&](CActorArchive &archive) { archive.archiveMotionState(model, "m"); }),
              "next");
    EXPECT_EQ(model.getCurrentMotionIndex(), 12);
    EXPECT_EQ(model.getCurrentFrameNumber(), 3.5F);
    EXPECT_EQ(model.getCurrentMotionName(), "");
}

// A motion named instead of numbered has no index until it is looked up.
TEST_F(CActorArchiveTest, AMotionStateCanNameTheMotion) {
    CDeformableModelInstance model;
    read("{\n\"run fast\" , 7\n}\n",
         [&](CActorArchive &archive) { archive.archiveMotionState(model, "m"); });
    EXPECT_EQ(model.getCurrentMotionIndex(), -1);
    EXPECT_EQ(model.getCurrentMotionName(), "run fast");
    EXPECT_EQ(model.getCurrentFrameNumber(), 7.0F);
}

TEST_F(CActorArchiveTest, AMotionStateThatCantBeReadIsFatal) {
    CDeformableModelInstance model;
    const auto read_motion = [&](CActorArchive &archive) {
        archive.archiveMotionState(model, "motion state");
    };
    expectFatal("{", read_motion, "motion state", "motion state info opening brace");
    expectFatal("{\n1,2\n}", read_motion, "motion state", "motion state info closing brace");
    for (const std::string_view broken : {"{\n5,x\n}\n", "{\n\"walk\"\n}\n"}) {
        EXPECT_THAT([&] { read(broken, read_motion); },
                    ThrowsMessage<common::CFatalError>(
                        StrEq("CMotionController::load - error parsing file")))
            << broken;
    }
}

// Every part is shown in its first texture set until the file says otherwise, and any number but
// 0 shows a part.
TEST_F(CActorArchiveTest, APartStatusIsEachPartsVisibilityThenTextureSet) {
    CDeformableModelInstance model;
    model.setPartVisibility(2, EPartVisibility::kHidden);
    model.setPartTextureSet(2, 9);
    EXPECT_EQ(read("\t{ // partStatus\n\t\t2\n\t\t0 3 \n\t\t5 6 \n\t}\nnext",
                   [&](CActorArchive &archive) { archive.archivePartStatus(model, "p"); }),
              "next");
    EXPECT_EQ(model.getPartVisibility(0), EPartVisibility::kHidden);
    EXPECT_EQ(model.getPartVisibility(1), EPartVisibility::kShown);
    EXPECT_EQ(model.getPartVisibility(2), EPartVisibility::kShown);
    EXPECT_EQ(model.getPartTextureSet(0), 5);
    EXPECT_EQ(model.getPartTextureSet(1), 6);
    EXPECT_EQ(model.getPartTextureSet(2), CDeformableModelInstance::kFirstTextureSet);
}

// The original read on with whatever its stack held for a count it couldn't read.
TEST_F(CActorArchiveTest, APartCountThatCantBeReadIsNone) {
    CDeformableModelInstance model;
    model.setPartVisibility(0, EPartVisibility::kHidden);
    EXPECT_EQ(
        read("{\n}\nnext", [&](CActorArchive &archive) { archive.archivePartStatus(model, "p"); }),
        "next");
    EXPECT_EQ(model.getPartVisibility(0), EPartVisibility::kShown);
}

TEST_F(CActorArchiveTest, APartStatusThatCantBeReadIsFatal) {
    CDeformableModelInstance model;
    const auto read_parts = [&](CActorArchive &archive) {
        archive.archivePartStatus(model, "partStatus");
    };
    expectFatal("{", read_parts, "partStatus", "part status opening brace");
    expectFatal("{\n2\n1\n}\n", read_parts, "description", "part status entry");
    expectFatal("{\n1\n1\n}\n", read_parts, "description", "part texture entry");
    expectFatal("{\n1\n1\n0\n}", read_parts, "partStatus", "part status info closing brace");
    EXPECT_THAT([&] { read("{\n31\n", read_parts); },
                ThrowsMessage<common::CFatalError>(
                    StrEq("CActorArchive::archivePartStatus - Door has 31 parts")));
}

TEST_F(CActorArchiveTest, ItGivesTheVersionTheFileSavedAClassIn) {
    classes_.setSavedVersion(kTestBaseType, 4);
    read("", [&](CActorArchive &archive) {
        EXPECT_EQ(archive.getSavedVersion(kTestBaseType), 4);
        EXPECT_EQ(archive.getSavedVersion(kTestLeafType), 1);
    });
}

// An actor whose own fields are CDemonActor's.
class CDemonActorArchiveTest : public CActorArchiveTest {
protected:
    CDemonActorArchiveTest() {
        actor_.onArchive([this](CActorArchive &archive) { actor_.CDemonActor::archive(archive); });
    }

    void readAs(int saved_version, std::string_view fields) {
        classes_.setSavedVersion(CDemonActor::kType, saved_version);
        const std::string text =
            std::format("{{ CTestLeaf \"Door\"\n{}}} CTestLeaf \"Door\"\n", fields);
        common::CTextScanner scanner(text);
        actor_.load(scanner, owners_);
    }
};

TEST_F(CDemonActorArchiveTest, AnActorIsWhereItIsAndHowItCameToBe) {
    readAs(7, "2,1,2,3 // location\n0.5,0.25,0.125 // orient\n1 // wasCreated\n"
              "0.75 // createProb\n\"boom\" // createEvent\n");
    EXPECT_EQ(actor_.getLocation().area_id, 2);
    EXPECT_EQ(actor_.getLocation().position.z, 3.0F);
    EXPECT_EQ(actor_.getOrientation().y, 0.125F);
    EXPECT_EQ(actor_.getLifecycleState(), EActorLifecycleState::kCreated);
    EXPECT_EQ(actor_.getCreateProbability(), 0.75F);
    EXPECT_EQ(actor_.getCreateEvent(), "boom");
}

// Version 6 still held a field of view, before the creation fields.
TEST_F(CDemonActorArchiveTest, AVersionSixActorHasAFieldOfViewToPassOver) {
    readAs(6, "2,1,2,3\n0,0,0\n90 // fov\n2\n0.5\n\"none\"\n");
    EXPECT_EQ(actor_.getLifecycleState(), EActorLifecycleState::kDestroyed);
    EXPECT_EQ(actor_.getCreateProbability(), 0.5F);
}

TEST_F(CDemonActorArchiveTest, AnOlderActorKeepsTheCreationDefaults) {
    readAs(5, "2,1,2,3\n0,0,0\n90\n");
    EXPECT_EQ(actor_.getLocation().area_id, 2);
    EXPECT_EQ(actor_.getLifecycleState(), EActorLifecycleState::kNotCreated);
    EXPECT_EQ(actor_.getCreateProbability(), 1.0F);
    EXPECT_EQ(actor_.getCreateEvent(), "none");
}

} // namespace
} // namespace nocturne::core
