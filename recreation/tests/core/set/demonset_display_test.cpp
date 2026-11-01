#include "common/math/vector3f.h"
#include "core/actor/demonactor.h"
#include "core/box/boundingbox3d.h"
#include "core/location.h"
#include "core/set/demonset.h"
#include "tests/mocks/core/setparts.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <cstdint>
#include <initializer_list>
#include <type_traits>
#include <vector>

namespace nocturne::core {
namespace {

using common::CVector3f;
using ::testing::ElementsAre;
using ::testing::FieldsAre;
using ::testing::IsEmpty;

constexpr std::uint32_t kSolidPass = 0x4;
constexpr std::uint32_t kShadowPass = 0x10;

// An actor a box two wide about a point a unit up from its feet, turned as it is facing.
class CBoxedActor : public CTestActor {
public:
    explicit CBoxedActor(const CVector3f &position) : CTestActor(kTestBaseType) {
        setLocation(CLocation{.position = position});
        updateOrientationMatrix();
    }

    CBoundingBox3D *getBoundingBox(CBoundingBox3D *out_box) override {
        *out_box = {.min = {.x = -1.0F, .y = 0.0F, .z = -1.0F},
                    .max = {.x = 1.0F, .y = 2.0F, .z = 1.0F}};
        return out_box;
    }

    // Noted as drawn where it stands, with only the passes given still due.
    void drawnHereWith(std::uint32_t dirty_flags) {
        setDrawnTransform({.position = getLocation().position,
                           .orientation = getOrientation(),
                           .dirty_flags = dirty_flags});
    }
};

class CDemonSetDisplayTest : public engine::CDemonRendererFixture {
protected:
    void show(std::initializer_list<CDemonActor *> actors) {
        set_.setActors(actors);
        set_.buildActorTypeLists();
    }

    CSetParts set_parts_{dosio_};
    CDemonSet set_{
        set_parts_.owners(demon_renderer_, matrix_, special_, two_d_, screen_, raw_input_)};
};

TEST(SDrawnTransformTest, EveryPassIsDueUntilTheActorIsDrawn) {
    static_assert(
        std::is_same_v<decltype(&CDemonSet::snapshotActorTransformState), void (*)(CDemonActor &)>);
    const SDrawnTransform drawn;
    EXPECT_THAT(drawn.position, FieldsAre(0.0F, 0.0F, 0.0F));
    EXPECT_THAT(drawn.orientation, FieldsAre(0.0F, 0.0F, 0.0F));
    EXPECT_EQ(drawn.dirty_flags, SDrawnTransform::kEveryPass);
}

TEST(SDrawnTransformTest, ASnapshotNotesWhereTheActorStandsAndFacesWithEveryPassDue) {
    CBoxedActor actor{{.x = 1.0F, .y = 2.0F, .z = 3.0F}};
    actor.setOrientation({.x = 0.25F, .y = 0.5F, .z = 0.75F});
    actor.drawnHereWith(0);
    actor.setLocation(CLocation{.position = {.x = 4.0F, .y = 5.0F, .z = 6.0F}});
    CDemonSet::snapshotActorTransformState(actor);
    EXPECT_THAT(actor.getDrawnTransform().position, FieldsAre(4.0F, 5.0F, 6.0F));
    EXPECT_THAT(actor.getDrawnTransform().orientation, FieldsAre(0.25F, 0.5F, 0.75F));
    EXPECT_EQ(actor.getDrawnTransform().dirty_flags, SDrawnTransform::kEveryPass);
}

TEST_F(CDemonSetDisplayTest, NothingIsListedBeforeTheFirstBuild) {
    EXPECT_THAT(set_.getSortedRenderActors(), IsEmpty());
}

TEST_F(CDemonSetDisplayTest, ActorsAreListedNearestTheCameraFirst) {
    // The camera stands at (0, 1, 0), level with each box's middle.
    matrix_.setCameraOrigin(0, 256, 0);
    CBoxedActor far_away{{.x = 0.0F, .y = 0.0F, .z = 30.0F}};
    CBoxedActor near{{.x = 2.0F, .y = 0.0F, .z = 0.0F}};
    CBoxedActor between{{.x = 0.0F, .y = 0.0F, .z = -10.0F}};
    show({&far_away, &near, &between});
    set_.buildDisplayList(kShadowPass);
    EXPECT_THAT(set_.getSortedRenderActors(), ElementsAre(&near, &between, &far_away));
}

TEST_F(CDemonSetDisplayTest, TheDistanceIsToTheMiddleOfTheTurnedBox) {
    // Upside down, the first actor's box hangs below its feet, a unit down; the camera is there.
    matrix_.setCameraOrigin(0, -256 * 11, 0);
    CBoxedActor flipped{{.x = 0.0F, .y = -10.0F, .z = 0.0F}};
    flipped.setOrientation({.x = 0.0F, .y = 0.0F, .z = 3.14159265F});
    flipped.updateOrientationMatrix();
    CBoxedActor upright{{.x = 0.0F, .y = -10.0F, .z = 0.0F}};
    show({&upright, &flipped});
    set_.buildDisplayList(kShadowPass);
    EXPECT_THAT(set_.getSortedRenderActors(), ElementsAre(&flipped, &upright));
}

TEST_F(CDemonSetDisplayTest, TheLocalHeroComesFirstWhereverItStands) {
    CBoxedActor near{{}};
    CBoxedActor hero{{.x = 0.0F, .y = 0.0F, .z = 100.0F}};
    show({&near, &hero});
    set_.setLocalHero(&hero);
    set_.buildDisplayList(kShadowPass);
    EXPECT_THAT(set_.getSortedRenderActors(), ElementsAre(&hero, &near));
}

TEST_F(CDemonSetDisplayTest, AnActorWithNoSolidOrLitPassDueIsLeftOut) {
    CBoxedActor drawn{{}};
    drawn.drawnHereWith(kShadowPass);
    CBoxedActor due{{}};
    due.drawnHereWith(kSolidPass);
    show({&drawn, &due});
    set_.buildDisplayList(kShadowPass);
    EXPECT_THAT(set_.getSortedRenderActors(), ElementsAre(&due));
    EXPECT_EQ(drawn.getDrawnTransform().dirty_flags, kShadowPass);
    EXPECT_EQ(due.getDrawnTransform().dirty_flags, kSolidPass);
}

TEST_F(CDemonSetDisplayTest, AnActorThatMovedOrTurnedGetsTheMasksPasses) {
    CBoxedActor moved{{}};
    moved.drawnHereWith(0);
    moved.setLocation(CLocation{.position = {.x = 1.0F, .y = 0.0F, .z = 0.0F}});
    CBoxedActor turned{{}};
    turned.drawnHereWith(0);
    turned.setOrientation({.x = 0.0F, .y = 0.5F, .z = 0.0F});
    show({&moved, &turned});
    set_.buildDisplayList(kSolidPass);
    EXPECT_THAT(set_.getSortedRenderActors(), ElementsAre(&turned, &moved));
    EXPECT_EQ(moved.getDrawnTransform().dirty_flags, kSolidPass);
    EXPECT_EQ(turned.getDrawnTransform().dirty_flags, kSolidPass);
}

TEST_F(CDemonSetDisplayTest, AnActorMovedOnAnyAxisGetsTheMasksPasses) {
    const CVector3f offsets[] = {{.y = 1.0F}, {.z = 1.0F}};
    std::vector<std::uint32_t> flags;
    for (const CVector3f &offset : offsets) {
        CBoxedActor moved{{}};
        moved.drawnHereWith(0);
        moved.setLocation(CLocation{.position = offset});
        CBoxedActor turned{{}};
        turned.drawnHereWith(0);
        turned.setOrientation({.x = offset.y, .y = 0.0F, .z = offset.z});
        show({&moved, &turned});
        set_.buildDisplayList(kSolidPass);
        flags.push_back(moved.getDrawnTransform().dirty_flags);
        flags.push_back(turned.getDrawnTransform().dirty_flags);
    }
    EXPECT_THAT(flags, ElementsAre(kSolidPass, kSolidPass, kSolidPass, kSolidPass));
}

TEST_F(CDemonSetDisplayTest, AFullMaskPutsEveryPassDueOnEveryActor) {
    CBoxedActor still{{}};
    still.drawnHereWith(0);
    show({&still});
    set_.buildDisplayList(0xffffffffU);
    EXPECT_THAT(set_.getSortedRenderActors(), ElementsAre(&still));
    EXPECT_EQ(still.getDrawnTransform().dirty_flags, 0xffffffffU);
}

TEST_F(CDemonSetDisplayTest, TheLocalHerosPassesAreLeftAlone) {
    CBoxedActor hero{{}};
    hero.drawnHereWith(0);
    show({&hero});
    set_.setLocalHero(&hero);
    set_.buildDisplayList(0xffffffffU);
    EXPECT_THAT(set_.getSortedRenderActors(), ElementsAre(&hero));
    EXPECT_EQ(hero.getDrawnTransform().dirty_flags, 0U);
}

} // namespace
} // namespace nocturne::core
