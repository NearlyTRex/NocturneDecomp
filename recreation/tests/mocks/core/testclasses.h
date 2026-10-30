#pragma once

#include "common/random/watcomrandom.h"
#include "core/actor/actor.h"
#include "core/game/game.h"
#include "tests/mocks/core/gameparts.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>

namespace nocturne::core {

// The actor classes, with the ported ones registered, that make actors and give them their
// random numbers.
class CTestClasses {
public:
    [[nodiscard]] CActor &get() {
        return classes_;
    }

    // Where a test opens a sim frame.
    [[nodiscard]] CGame &getGame() {
        return game_parts_.getGame();
    }

private:
    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGameParts game_parts_{clock_};
    common::CWatcomRandom crt_;
    CActor classes_{game_parts_.getGame(), crt_};
};

} // namespace nocturne::core
