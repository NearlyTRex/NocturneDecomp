#include "core/actor/notported.h"
#include "core/baron/baron.h"

#include <string_view>

// The CBaron functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CBaron", function);
}

} // namespace

void CBaron::setup() {
    notPorted("setup");
}

void CBaron::process(float /*delta_time*/) {
    notPorted("process");
}

int CBaron::renderOpaque() {
    notPorted("renderOpaque");
}

int CBaron::renderTransparent() {
    notPorted("renderTransparent");
}

ECollisionType CBaron::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

void CBaron::archive(CActorArchive & /*actor_archive*/) {
    notPorted("archive");
}

int CBaron::isGrabbable(CDemonActor * /*grabber*/) {
    notPorted("isGrabbable");
}

void CBaron::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

void CBaron::drawWeapon(int /*drawn*/) {
    notPorted("drawWeapon");
}

int CBaron::isWeaponDrawn() {
    notPorted("isWeaponDrawn");
}

} // namespace nocturne::core
