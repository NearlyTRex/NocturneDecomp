#include "core/actor/notported.h"
#include "core/enemy/enemy.h"

#include <string_view>

// The CEnemy virtual functions not ported yet. Each quits, naming itself, until its port replaces
// it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CEnemy", function);
}

} // namespace

void CEnemy::renderBackground(int /*layer_flag*/) {
    notPorted("renderBackground");
}

int CEnemy::getTargetPoints(common::CVector3f * /*out_points_array*/) {
    notPorted("getTargetPoints");
}

void CEnemy::releaseVictim() {
    notPorted("releaseVictim");
}

void CEnemy::onVictimLost(CDemonActor * /*lost_actor*/) {
    notPorted("onVictimLost");
}

void CEnemy::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

common::CVector3f *CEnemy::getTargetPoint(common::CVector3f * /*out_point*/) {
    notPorted("getTargetPoint");
}

void CEnemy::updateVictim(float /*delta_time*/) {
    notPorted("updateVictim");
}

} // namespace nocturne::core
