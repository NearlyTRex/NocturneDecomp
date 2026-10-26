#pragma once

#include "common/text/textscanner.h"
#include "core/actor/actorlookup.h"
#include "core/actor/demonactor.h"

#include <gmock/gmock.h>

#include <string_view>

namespace nocturne::core {

class MockActorLookup : public IActorLookup {
public:
    MOCK_METHOD(CDemonActor *, loadActor,
                (common::CTextScanner & scanner, const CDemonActor &owner,
                 std::string_view description),
                (const, override));
};

} // namespace nocturne::core
