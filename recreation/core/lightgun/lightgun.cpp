#include "core/lightgun/lightgun.h"

#include "core/actor/demonactortype.h"
#include "core/actor/notported.h"

#include <memory>

namespace nocturne::core {

namespace {

// Of the class's fields, as save files write them.
constexpr int kVersion = 1;

} // namespace

// nocedit 0x00505890
constinit const CDemonActorType CLightGun::kType =
    makeActorType("CLightGun", &CWeapon::kType, &CLightGun::create, kVersion);

// deferred: the defaults the constructor gives the firing fields, the weight, the charge and the
//   hit flag, with CLightGun::fire and CLightGun::process
// deferred: lighting the beam with the carrying hero's own light rather than the one shared light
//   (the decomp's nocturne_hero_light), with CLightGun::process, CLightGun::fire and
//   CLightGun::updateBeamLight
// deferred: charging from the batteries of the hero netplay gives it rather than the local one
//   (the decomp's nocturne_net_sim_target_for), with CLightGun::process
// nocedit 0x00505900
CLightGun::CLightGun(CActor &classes) : CWeapon(classes) {
    setModelName("cre.kfm");
}

// nocedit 0x00506a50
CLightGun::~CLightGun() = default;

// nocedit 0x005058f0
const CDemonActorType &CLightGun::getActorType() const {
    return kType;
}

// nocedit 0x005058c0
std::unique_ptr<CDemonActor> CLightGun::create(CActor &classes) {
    return std::make_unique<CLightGun>(classes);
}

void CLightGun::process(float /*delta_time*/) {
    quitNotPorted("CLightGun", "process");
}

int CLightGun::fire() {
    quitNotPorted("CLightGun", "fire");
}

float CLightGun::getDamage() {
    quitNotPorted("CLightGun", "getDamage");
}

void CLightGun::renderAimBeam() {
    quitNotPorted("CLightGun", "renderAimBeam");
}

} // namespace nocturne::core
