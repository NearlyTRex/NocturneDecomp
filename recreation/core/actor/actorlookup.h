#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <string_view>

namespace nocturne::core {

// Where an actor's fields find the actors they name.
class IActorLookup {
public:
    virtual ~IActorLookup() = default;

    // Reads a reference to an actor, quoted by name or "(none)", and the rest of its line. One the
    // owner's field names but can't be found is warned of and taken as none.
    [[nodiscard]] virtual CDemonActor *loadActor(common::CTextScanner &scanner,
                                                 const CDemonActor &owner,
                                                 std::string_view description) const = 0;
};

} // namespace nocturne::core
