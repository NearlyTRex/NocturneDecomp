#include "core/actor/notported.h"
#include "core/werewolf/werewolf.h"

#include <string_view>

// The CWerewolf virtual functions not ported yet. Each quits, naming itself, until its port
// replaces it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CWerewolf", function);
}

} // namespace

void CWerewolf::setup() {
    notPorted("setup");
}

void CWerewolf::process(float /*delta_time*/) {
    notPorted("process");
}

int CWerewolf::renderTransparent() {
    notPorted("renderTransparent");
}

int CWerewolf::getTargetPoints(common::CVector3f * /*out_points_array*/) {
    notPorted("getTargetPoints");
}

void CWerewolf::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

EDeathState CWerewolf::getDeathState() {
    notPorted("getDeathState");
}

void CWerewolf::setWalkTarget(CDemonActor * /*target*/, float /*min_distance*/,
                              float /*max_distance*/) {
    notPorted("setWalkTarget");
}

} // namespace nocturne::core
