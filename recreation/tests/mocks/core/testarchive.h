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

#include <algorithm>
#include <format>
#include <string_view>
#include <vector>

namespace nocturne::core {

// An archive reading the actor's fields from the text, which must outlive it, with the ported
// classes registered and a lookup that finds the actors added to it by quoted name, and no
// others.
class CTestArchive {
public:
    explicit CTestArchive(const CDemonActor &actor, std::string_view text = "")
        : scanner_(text),
          archive_(scanner_, actor,
                   {.actor_classes = classes_, .actors = actors_, .crt_random = crt_}) {
        ON_CALL(actors_, loadActor)
            .WillByDefault([this](common::CTextScanner &reference, const CDemonActor &,
                                  std::string_view) -> CDemonActor * {
                const std::string_view line = reference.readLine();
                const auto found = std::ranges::find_if(known_, [line](const CDemonActor *known) {
                    return line.starts_with(std::format("\"{}\"", known->getActorName()));
                });
                return found == known_.end() ? nullptr : *found;
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

    // The actor must outlive the archive.
    void addActor(CDemonActor &actor) {
        known_.push_back(&actor);
    }

private:
    ::testing::NiceMock<engine::MockGameClock> clock_;
    CGame game_{clock_};
    common::CWatcomRandom crt_;
    CActor classes_{game_, crt_};
    ::testing::NiceMock<MockActorLookup> actors_;
    std::vector<CDemonActor *> known_;
    common::CTextScanner scanner_;
    CActorArchive archive_;
};

} // namespace nocturne::core
