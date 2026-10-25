#include "core/lever/lever.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 8;

} // namespace

// Without a factory until CLever's constructor is ported, so missions can't make one yet.
// nocedit 0x00504760
constinit const CDemonActorType CLever::kType =
    makeActorType("CLever", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
