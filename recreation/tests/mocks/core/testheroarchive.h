#pragma once

#include "core/actor/demonactortype.h"
#include "core/hero/hero.h"
#include "tests/mocks/core/testfieldsarchive.h"

#include <string_view>

namespace nocturne::core {

// An archive of a hero whose CHero fields are version 1, CDemonActor's alone, followed by the
// hero class's own fields in the version given.
class CTestHeroArchive : public CTestFieldsArchive {
public:
    CTestHeroArchive(const CHero &hero, const CDemonActorType &type, int saved_version,
                     std::string_view own_fields)
        : CTestFieldsArchive(hero, type, saved_version, own_fields) {
        getClasses().setSavedVersion(CHero::kType, 1);
    }
};

} // namespace nocturne::core
