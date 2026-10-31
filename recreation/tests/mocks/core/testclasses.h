#pragma once

#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/game/game.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/core/mockdeformablemodels.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>

namespace nocturne::core {

// The actor classes, with the ported ones registered, that make actors and give them their
// random numbers and models.
class CTestClasses {
public:
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

private:
    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGameParts game_parts_{clock_};
    common::CWatcomRandom crt_;
    ::testing::NiceMock<MockDeformableModels> models_;
    CActor classes_{game_parts_.getGame(), crt_, models_};
};

} // namespace nocturne::core
