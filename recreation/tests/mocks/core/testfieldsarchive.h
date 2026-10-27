#pragma once

#include "core/actor/actor.h"
#include "core/actor/actorarchive.h"
#include "core/actor/demonactor.h"
#include "core/actor/demonactortype.h"
#include "tests/mocks/core/testarchive.h"

#include <string>
#include <string_view>

namespace nocturne::core {

// An archive of an actor whose CDemonActor fields are version 1, with the actor in area kArea,
// followed by the class's own fields in the version given.
class CTestFieldsArchive {
public:
    static constexpr int kArea = 3;

    CTestFieldsArchive(const CDemonActor &actor, const CDemonActorType &type, int saved_version,
                       std::string_view own_fields)
        : text_(std::string(kDemonFields) + std::string(own_fields)), archive_(actor, text_) {
        archive_.getClasses().setSavedVersion(type, saved_version);
    }

    [[nodiscard]] CActorArchive &get() {
        return archive_.get();
    }

    // Where the test says which version each other class's fields are in.
    [[nodiscard]] CActor &getClasses() {
        return archive_.getClasses();
    }

    // Whether every field was read.
    [[nodiscard]] bool isFinished() {
        return archive_.getScanner().atEnd();
    }

    void addActor(CDemonActor &actor) {
        archive_.addActor(actor);
    }

private:
    static constexpr std::string_view kDemonFields = "3,0,0,0\n0,0,0\n0\n";

    std::string text_;
    CTestArchive archive_;
};

} // namespace nocturne::core
