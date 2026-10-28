#include "core/filmreel/filmreel.h"

#include "core/actor/demonactortype.h"

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 2;

} // namespace

// Without a factory until CFilmReel's constructor is ported, so missions can't make one yet.
// nocedit 0x004be620
constinit const CDemonActorType CFilmReel::kType =
    makeActorType("CFilmReel", &CDemonActor::kType, nullptr, kVersion);

} // namespace nocturne::core
