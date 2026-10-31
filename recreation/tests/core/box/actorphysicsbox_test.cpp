#include "core/box/actorphysicsbox.h"
#include "core/box/boundingbox3d.h"
#include "core/box/box.h"
#include "tests/mocks/core/testactor.h"

#include <gtest/gtest.h>

#include <numbers>

namespace nocturne::core {
namespace {

TEST(ActorPhysicsBox, TheBoxIsCentredOnTheBoundsInTheWorldAndTurnedAsTheActorIs) {
    CTestActor actor{kTestBaseType};
    actor.setLocation({.position = {.x = 10.0F, .y = 20.0F, .z = 30.0F}});
    actor.setOrientation({.y = std::numbers::pi_v<float>});
    actor.updateOrientationMatrix();
    const CBoundingBox3D bounds{.min = {.x = 2.0F, .y = -1.0F, .z = 0.0F},
                                .max = {.x = 4.0F, .y = 3.0F, .z = 6.0F}};
    CBox box;
    setupPhysicsBoxAround(box, actor, bounds, 5.0F);
    EXPECT_EQ(box.getValidity(), 1);
    EXPECT_NEAR(box.getPosition().x, 7.0F, 1e-5F);
    EXPECT_NEAR(box.getPosition().y, 21.0F, 1e-5F);
    EXPECT_NEAR(box.getPosition().z, 27.0F, 1e-5F);
    EXPECT_EQ(box.getOrientation().y, actor.getOrientation().y);
    EXPECT_EQ(box.getExtents().x, 2.0F);
    EXPECT_EQ(box.getExtents().y, 4.0F);
    EXPECT_EQ(box.getExtents().z, 6.0F);
}

} // namespace
} // namespace nocturne::core
