#pragma once

#include "core/actor/actorarchive.h"
#include "core/actor/demonactortype.h"
#include "core/hero/hero.h"
#include "tests/mocks/core/testarchive.h"

#include <string>
#include <string_view>

namespace nocturne::core {

// An archive of a hero whose CHero fields are version 1, CDemonActor's alone with the hero in
// area kArea, followed by the hero class's own fields in the version given.
class CTestHeroArchive {
public:
    static constexpr int kArea = 3;

    CTestHeroArchive(const CHero &hero, const CDemonActorType &type, int saved_version,
                     std::string_view own_fields)
        : text_(std::string(kDemonFields) + std::string(own_fields)), archive_(hero, text_) {
        archive_.getClasses().setSavedVersion(CHero::kType, 1);
        archive_.getClasses().setSavedVersion(type, saved_version);
    }

    [[nodiscard]] CActorArchive &get() {
        return archive_.get();
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
