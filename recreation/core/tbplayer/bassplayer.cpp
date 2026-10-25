#include "core/tbplayer/bassplayer.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// Without a factory until CBassPlayer's constructor is ported, so missions can't make one yet.
// nocedit 0x005d9fd0
constinit const CDemonActorType CBassPlayer::kType =
    makeActorType("CBassPlayer", &CNPC::kType, nullptr, kVersion);

} // namespace nocturne::core
