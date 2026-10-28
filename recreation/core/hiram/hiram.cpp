#include "core/hiram/hiram.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CHiram's constructor is ported, so missions can't make one yet.
// nocedit 0x004f4380
constinit const CDemonActorType CHiram::kType =
    makeActorType("CHiram", &CNPC::kType, nullptr, kVersion);

} // namespace nocturne::core
