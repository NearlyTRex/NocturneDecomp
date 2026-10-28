#include "core/baron/baronweapon.h"

#include "core/actor/demonactortype.h"
#include "core/actor/notported.h"

#include <memory>
#include <string_view>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CBaronWeapon", function);
}

} // namespace

// nocedit 0x00412b20
constinit const CDemonActorType CBaronWeapon::kType =
    makeActorType("CBaronWeapon", &CWeapon::kType, &CBaronWeapon::create, kVersion);

// deferred: the defaults the constructor gives the weapon type, firing and light fields, and
//   the Baron it belongs to, with the steps that read them
// deferred: each Baron weapon claiming a Baron of its own in a network game, where the original
//   shares the set's first (the decomp's hero_baron.h), with findOrCreateBaron and CNetGame
// nocedit 0x00413d40
CBaronWeapon::CBaronWeapon() = default;

// nocedit 0x004140b0
CBaronWeapon::~CBaronWeapon() = default;

// nocedit 0x00413d30
const CDemonActorType &CBaronWeapon::getActorType() const {
    return kType;
}

// nocedit 0x00413d00
std::unique_ptr<CDemonActor> CBaronWeapon::create() {
    return std::make_unique<CBaronWeapon>();
}

void CBaronWeapon::setup() {
    notPorted("setup");
}

void CBaronWeapon::process(float /*delta_time*/) {
    notPorted("process");
}

int CBaronWeapon::renderOpaque() {
    notPorted("renderOpaque");
}

void CBaronWeapon::setWeaponState(int /*weapon_state*/) {
    notPorted("setWeaponState");
}

int CBaronWeapon::fire() {
    notPorted("fire");
}

int CBaronWeapon::isReadyToFire() {
    notPorted("isReadyToFire");
}

void CBaronWeapon::renderAimBeam() {
    notPorted("renderAimBeam");
}

} // namespace nocturne::core
