#include "core/actor/notported.h"
#include "core/svetlana/svetlana.h"

#include <string_view>

// The CSvetlana functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CSvetlana", function);
}

} // namespace

void CSvetlana::setup() {
    notPorted("setup");
}

void CSvetlana::process(float /*delta_time*/) {
    notPorted("process");
}

int CSvetlana::renderOpaque() {
    notPorted("renderOpaque");
}

void CSvetlana::archive(CActorArchive & /*actor_archive*/) {
    notPorted("archive");
}

int CSvetlana::getGrabbed(CDemonActor * /*grabber*/, int /*grab_type*/) {
    notPorted("getGrabbed");
}

void CSvetlana::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

void CSvetlana::drawWeapon(int /*drawn*/) {
    notPorted("drawWeapon");
}

int CSvetlana::isWeaponDrawn() {
    notPorted("isWeaponDrawn");
}

} // namespace nocturne::core
