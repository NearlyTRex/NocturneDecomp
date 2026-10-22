#include "core/actor/notported.h"
#include "core/haystack/haystack.h"

#include <string_view>

// The CHaystack functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CHaystack", function);
}

} // namespace

void CHaystack::setup() {
    notPorted("setup");
}

void CHaystack::process(float /*delta_time*/) {
    notPorted("process");
}

int CHaystack::renderOpaque() {
    notPorted("renderOpaque");
}

void CHaystack::archive(CActorArchive & /*actor_archive*/) {
    notPorted("archive");
}

void CHaystack::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

void CHaystack::drawWeapon(int /*drawn*/) {
    notPorted("drawWeapon");
}

int CHaystack::isWeaponDrawn() {
    notPorted("isWeaponDrawn");
}

} // namespace nocturne::core
