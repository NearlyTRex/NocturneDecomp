#include "core/actor/notported.h"
#include "core/scat/scat.h"

#include <string_view>

// The CScat functions not ported yet. Each quits, naming itself, until its port replaces it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CScat", function);
}

} // namespace

void CScat::setup() {
    notPorted("setup");
}

void CScat::process(float /*delta_time*/) {
    notPorted("process");
}

int CScat::renderOpaque() {
    notPorted("renderOpaque");
}

void CScat::archive(CActorArchive & /*actor_archive*/) {
    notPorted("archive");
}

void CScat::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

void CScat::createDefaultWeapon() {
    notPorted("createDefaultWeapon");
}

void CScat::drawWeapon(int /*drawn*/) {
    notPorted("drawWeapon");
}

int CScat::isWeaponDrawn() {
    notPorted("isWeaponDrawn");
}

} // namespace nocturne::core
