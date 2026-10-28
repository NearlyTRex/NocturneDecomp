#include "core/gun/gun.h"

#include "core/actor/demonactortype.h"
#include "core/actor/notported.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// nocedit 0x004f0280
constinit const CDemonActorType CGun::kType =
    makeActorType("CGun", &CWeapon::kType, &CGun::create, kVersion);

// deferred: the defaults the constructor gives the firing fields, with fire
// nocedit 0x004f02f0
CGun::CGun() {
    setModelName("gat.kfm");
}

// nocedit 0x004f0b50
CGun::~CGun() = default;

// nocedit 0x004f02e0
const CDemonActorType &CGun::getActorType() const {
    return kType;
}

// nocedit 0x004f02b0
std::unique_ptr<CDemonActor> CGun::create() {
    return std::make_unique<CGun>();
}

int CGun::fire() {
    quitNotPorted("CGun", "fire");
}

float CGun::getDamage() {
    quitNotPorted("CGun", "getDamage");
}

} // namespace nocturne::core
