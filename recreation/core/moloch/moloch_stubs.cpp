#include "core/actor/notported.h"
#include "core/moloch/moloch.h"

#include <string_view>

// The CMoloch functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CMoloch", function);
}

} // namespace

void CMoloch::setup() {
    notPorted("setup");
}

void CMoloch::process(float /*delta_time*/) {
    notPorted("process");
}

int CMoloch::renderOpaque() {
    notPorted("renderOpaque");
}

void CMoloch::drawWeapon(int /*drawn*/) {
    notPorted("drawWeapon");
}

int CMoloch::isWeaponDrawn() {
    notPorted("isWeaponDrawn");
}

} // namespace nocturne::core
