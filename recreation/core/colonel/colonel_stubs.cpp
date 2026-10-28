#include "core/actor/notported.h"
#include "core/colonel/colonel.h"

#include <string_view>

// The CColonel functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CColonel", function);
}

} // namespace

void CColonel::setup() {
    notPorted("setup");
}

void CColonel::process(float /*delta_time*/) {
    notPorted("process");
}

int CColonel::renderOpaque() {
    notPorted("renderOpaque");
}

void CColonel::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

void CColonel::drawWeapon(int /*drawn*/) {
    notPorted("drawWeapon");
}

int CColonel::isWeaponDrawn() {
    notPorted("isWeaponDrawn");
}

} // namespace nocturne::core
