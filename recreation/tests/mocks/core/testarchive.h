#pragma once

#include "common/random/watcomrandom.h"
#include "common/text/textscanner.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/game/game.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>

namespace nocturne::core {

// An archive over no text for the actor, for the archive() functions that quit before reading.
class CTestArchive {
public:
    explicit CTestArchive(const CDemonActor &actor) : archive_(scanner_, actor, classes_) {}

    [[nodiscard]] CActorArchive &get() {
        return archive_;
    }

private:
    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGame game_{clock_};
    common::CWatcomRandom crt_;
    CActor classes_{game_, crt_};
    common::CTextScanner scanner_{""};
    CActorArchive archive_;
};

} // namespace nocturne::core
