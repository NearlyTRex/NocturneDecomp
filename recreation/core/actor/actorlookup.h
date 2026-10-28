#pragma once

#include "common/fwd.h"
#include "core/fwd.h"

#include <memory>
#include <string_view>

namespace nocturne::core {

// Where an actor's fields find the actors they name, and the items it carries.
class IActorLookup {
public:
    virtual ~IActorLookup() = default;

    // Reads a reference to an actor, quoted by name or "(none)", and the rest of its line. One the
    // owner's field names but can't be found is warned of and taken as none.
    [[nodiscard]] virtual CDemonActor *loadActor(common::CTextScanner &scanner,
                                                 const CDemonActor &owner,
                                                 std::string_view description) const = 0;
    // The next item the file lists as carried, handed over to its carrier; it must have the name.
    // Null when the file lists no carried items, which it then names only for its carriers.
    [[nodiscard]] virtual std::unique_ptr<CDemonActor> takeCarriedActor(std::string_view name) = 0;
};

} // namespace nocturne::core
