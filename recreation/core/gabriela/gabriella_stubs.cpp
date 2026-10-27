#include "core/actor/notported.h"
#include "core/gabriela/gabriella.h"

#include <string_view>

// The CGabriella functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CGabriella", function);
}

} // namespace

void CGabriella::setup() {
    notPorted("setup");
}

void CGabriella::process(float /*delta_time*/) {
    notPorted("process");
}

int CGabriella::renderOpaque() {
    notPorted("renderOpaque");
}

int CGabriella::renderTransparent() {
    notPorted("renderTransparent");
}

void CGabriella::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

common::CMatrix3x4f *CGabriella::getCarryObjToBodyXForm(int /*hand_index*/,
                                                        common::CMatrix3x4f * /*out_matrix*/) {
    notPorted("getCarryObjToBodyXForm");
}

void CGabriella::drawWeapon(int /*drawn*/) {
    notPorted("drawWeapon");
}

int CGabriella::isWeaponDrawn() {
    notPorted("isWeaponDrawn");
}

} // namespace nocturne::core
