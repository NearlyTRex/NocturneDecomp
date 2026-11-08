#pragma once

#include "core/actor/demonactor.h"
#include "tests/mocks/core/actorrenderfixture.h"
#include "tests/mocks/core/oneframemodel.h"
#include "tests/mocks/core/testclasses.h"

#include <cstddef>
#include <string>

namespace nocturne::core {

// Actor classes whose every key-framed model is the one-frame model, its texture on disk, for an
// actor that draws one; a draw lights the first vertex, marked unlit until then.
class CKeyFramedActorFixture : public CActorRenderFixture {
protected:
    static constexpr int kUnlit = -1;

    CKeyFramedActorFixture() {
        givenFile("models\\one.kfm", oneFrameModel());
        givenFile("art\\SKIN.RAW", std::string(std::size_t{32} * 32, '\x01'));
        classes_.getKeyFramedModel().load("one.kfm");
    }

    // Set up, which finds its model, put in view, and not yet drawn.
    void ready(CDemonActor &actor) {
        actor.setup();
        placeInView(actor);
        vertex_buffer_[0].r = kUnlit;
    }

    [[nodiscard]] bool drawn() const {
        return vertex_buffer_[0].r != kUnlit;
    }

    CTestClasses classes_{dosio_};
};

} // namespace nocturne::core
