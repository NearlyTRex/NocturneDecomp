#pragma once

#include "common/random/watcomrandom.h"
#include "common/text/textscanner.h"
#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/game/game.h"
#include "tests/mocks/core/mockactorlookup.h"
#include "tests/mocks/engine/mockgameclock.h"

#include <gmock/gmock.h>

#include <string_view>

namespace nocturne::core {

// An archive reading the actor's fields from the text, which must outlive it, with the ported
// classes registered and a lookup that finds no actors.
class CTestArchive {
public:
    explicit CTestArchive(const CDemonActor &actor, std::string_view text = "")
        : scanner_(text),
          archive_(scanner_, actor,
                   {.actor_classes = classes_, .actors = actors_, .crt_random = crt_}) {
        ON_CALL(actors_, loadActor)
            .WillByDefault([](common::CTextScanner &reference, const CDemonActor &,
                              std::string_view) -> CDemonActor * {
                reference.skipLine();
                return nullptr;
            });
    }

    [[nodiscard]] CActorArchive &get() {
        return archive_;
    }

    // Where the test says which version each class's fields are in.
    [[nodiscard]] CActor &getClasses() {
        return classes_;
    }

    [[nodiscard]] common::CTextScanner &getScanner() {
        return scanner_;
    }

private:
    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGame game_{clock_};
    common::CWatcomRandom crt_;
    CActor classes_{game_, crt_};
    ::testing::NiceMock<MockActorLookup> actors_;
    common::CTextScanner scanner_;
    CActorArchive archive_;
};

} // namespace nocturne::core
