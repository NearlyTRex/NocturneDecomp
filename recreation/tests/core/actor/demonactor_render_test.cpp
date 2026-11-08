#include "common/math/vector3f.h"
#include "common/math/vector3i.h"
#include "core/actor/demonactor.h"
#include "core/location.h"
#include "engine/light/light.h"
#include "engine/matrix/matrix.h"
#include "tests/mocks/core/actorrenderfixture.h"
#include "tests/mocks/core/testactor.h"
#include "tests/mocks/engine/demonrendererfixture.h"

#include <gtest/gtest.h>

#include <utility>

namespace nocturne::core {
namespace {

// A test actor that lets the test call its box draw.
class CBoxDrawingActor : public CTestActor {
public:
    CBoxDrawingActor() : CTestActor(kTestBaseType) {}
    using CDemonActor::renderIfBoxVisible;
};

class CDemonActorRenderTest : public engine::CDemonRendererFixture {
protected:
    CTestActor actor_{kTestBaseType};
};

// Its place is where the renderer is moved to, in 24.8, and its orientation turns it, as x, z, y.
TEST_F(CDemonActorRenderTest, TheRendererIsMovedToTheActorAndTurnedByIt) {
    matrix_.setCameraOrigin(512, 0, 0);
    actor_.setLocation({.position = {.x = 1.0F, .y = 0.0F, .z = 0.0F}, .area_id = 0});
    actor_.setOrientation({.x = 0.1F, .y = 0.2F, .z = 0.3F});
    engine::CLight reference_light;
    engine::CMatrix reference{two_d_, reference_light};
    reference.setRelativeOrigin({.x = 256});
    reference.matrixPushAndTransform(1043, 3129, 2086, 0, 0, 0);
    actor_.setupRenderState(demon_renderer_);
    EXPECT_EQ(three_d_.getStoredPoint(), (common::CVector3i{.x = 256}));
    EXPECT_EQ(matrix_.getTransformMatrix(), reference.getTransformMatrix());
    EXPECT_EQ(matrix_.getRelativeOrigin(), reference.getRelativeOrigin());
}

// An actor's own box: eight wide and deep and eight tall from its place, here centred far enough
// ahead to be wholly in view.
class CDemonActorBoxDrawTest : public CActorRenderFixture {
protected:
    CDemonActorBoxDrawTest() {
        actor_.setLocation({.position = {.x = 0.0F, .y = -4.0F, .z = 9.0F}, .area_id = 0});
    }

    // Whether it drew, and what the call said.
    [[nodiscard]] std::pair<bool, bool> draw() {
        bool drawn = false;
        const bool visible = actor_.renderIfBoxVisible(render_owners_, [&drawn] { drawn = true; });
        return {drawn, visible};
    }

    CBoxDrawingActor actor_;
};

TEST_F(CDemonActorBoxDrawTest, AnActorDrawsWhileItsBoxIsVisible) {
    const auto before = matrix_.getTransformMatrix();
    EXPECT_EQ(draw(), std::pair(true, true));
    EXPECT_EQ(matrix_.getTransformMatrix(), before);
}

TEST_F(CDemonActorBoxDrawTest, AnActorBehindTheDepthsIsNotDrawn) {
    hideEverything();
    const auto before = matrix_.getTransformMatrix();
    EXPECT_EQ(draw(), std::pair(false, false));
    EXPECT_EQ(matrix_.getTransformMatrix(), before);
}

TEST_F(CDemonActorRenderTest, TheRestoreUndoesTheTurn) {
    const auto before = matrix_.getTransformMatrix();
    actor_.setOrientation({.x = 0.1F, .y = 0.2F, .z = 0.3F});
    actor_.setupRenderState(demon_renderer_);
    CDemonActor::restoreRenderState(demon_renderer_);
    EXPECT_EQ(matrix_.getTransformMatrix(), before);
}

} // namespace
} // namespace nocturne::core
