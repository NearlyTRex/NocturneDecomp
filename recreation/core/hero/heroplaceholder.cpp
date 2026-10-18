#include "core/hero/heroplaceholder.h"

#include "core/actor/demonactortype.h"

#include <memory>

namespace nocturne::core {

constinit const CDemonActorType CHeroPlaceholder::kType =
    makeActorType("CHeroPlaceholder", &CDemonActor::kType, &CHeroPlaceholder::create, 1);

// deferred: drawing it transparent and its hero index starting at 0, with the steps that read
//   them
// nocedit 0x004f3c00
CHeroPlaceholder::CHeroPlaceholder() = default;

// nocedit 0x004f3c30
CHeroPlaceholder::~CHeroPlaceholder() = default;

// nocedit 0x004f3bf0
const CDemonActorType &CHeroPlaceholder::getActorType() const {
    return kType;
}

// nocedit 0x004f3bc0
std::unique_ptr<CDemonActor> CHeroPlaceholder::create() {
    return std::make_unique<CHeroPlaceholder>();
}

} // namespace nocturne::core
