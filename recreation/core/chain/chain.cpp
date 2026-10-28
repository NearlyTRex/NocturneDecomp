#include "core/chain/chain.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 4;

} // namespace

// Without a factory until CChain's constructor is ported, so missions can't make one yet.
// nocedit 0x0042fb10
constinit const CDemonActorType CChain::kType =
    makeActorType("CChain", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
