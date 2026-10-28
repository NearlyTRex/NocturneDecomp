#pragma once

#include "common/text/textscanner.h"
#include "core/actor/actorlookup.h"
#include "core/actor/demonactor.h"

#include <gmock/gmock.h>

#include <memory>
#include <string_view>

namespace nocturne::core {

class MockActorLookup : public IActorLookup {
public:
    MOCK_METHOD(CDemonActor *, loadActor,
                (common::CTextScanner & scanner, const CDemonActor &owner,
                 std::string_view description),
                (const, override));
    MOCK_METHOD(std::unique_ptr<CDemonActor>, takeCarriedActor, (std::string_view name),
                (override));
};

} // namespace nocturne::core
