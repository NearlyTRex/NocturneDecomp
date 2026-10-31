#pragma once

#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/dmodel/keyframedmodel.h"
#include "core/game/game.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/core/mockdeformablemodels.h"
#include "tests/mocks/core/mockkeyframedmodels.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>

namespace nocturne::core {

// The actor classes, with the ported ones registered, that make actors and give them their
// random numbers and models. Every keyframed model asked for is the one empty model.
class CTestClasses {
public:
    CTestClasses() {
        ON_CALL(keyframed_models_, loadModel(::testing::_))
            .WillByDefault(::testing::ReturnRef(keyframed_model_));
    }

    [[nodiscard]] CActor &get() {
        return classes_;
    }

    // Where a test opens a sim frame.
    [[nodiscard]] CGame &getGame() {
        return game_parts_.getGame();
    }

    [[nodiscard]] MockDeformableModels &getModels() {
        return models_;
    }

    [[nodiscard]] MockKeyFramedModels &getKeyFramedModels() {
        return keyframed_models_;
    }

    [[nodiscard]] CKeyFramedModel &getKeyFramedModel() {
        return keyframed_model_;
    }

private:
    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGameParts game_parts_{clock_};
    common::CWatcomRandom crt_;
    ::testing::NiceMock<MockDeformableModels> models_;
    ::testing::NiceMock<MockKeyFramedModels> keyframed_models_;
    CKeyFramedModel keyframed_model_{game_parts_.getDosIo()};
    CActor classes_{game_parts_.getGame(), crt_, models_, keyframed_models_};
};

} // namespace nocturne::core
