#include "core/actor/notported.h"
#include "core/icepick/icepick.h"

#include <string_view>

// The CIcePick functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CIcePick", function);
}

} // namespace

void CIcePick::setup() {
    notPorted("setup");
}

void CIcePick::process(float /*delta_time*/) {
    notPorted("process");
}

int CIcePick::renderOpaque() {
    notPorted("renderOpaque");
}

void CIcePick::archive(CActorArchive & /*actor_archive*/) {
    notPorted("archive");
}

void CIcePick::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

common::CMatrix3x4f *CIcePick::getCarryObjToBodyXForm(int /*hand_index*/,
                                                      common::CMatrix3x4f * /*out_matrix*/) {
    notPorted("getCarryObjToBodyXForm");
}

void CIcePick::drawWeapon(int /*drawn*/) {
    notPorted("drawWeapon");
}

int CIcePick::isWeaponDrawn() {
    notPorted("isWeaponDrawn");
}

} // namespace nocturne::core
