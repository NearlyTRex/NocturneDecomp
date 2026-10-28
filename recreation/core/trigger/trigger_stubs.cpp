#include "core/actor/notported.h"
#include "core/trigger/trigger.h"

#include <string_view>

// The CTrigger functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CTrigger", function);
}

} // namespace

void CTrigger::setup() {
    notPorted("setup");
}

void CTrigger::process(float /*delta_time*/) {
    notPorted("process");
}

int CTrigger::renderTransparent() {
    notPorted("renderTransparent");
}

ECollisionType CTrigger::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

int CTrigger::getTargetPoints(common::CVector3f * /*out_points_array*/) {
    notPorted("getTargetPoints");
}

float CTrigger::evaluateTriggerCondition(CDemonActor * /*querying_actor*/,
                                         common::CVector3f * /*query_position*/) {
    notPorted("evaluateTriggerCondition");
}

int CTrigger::processActionButton() {
    notPorted("processActionButton");
}

void CTrigger::onLaserHit(SLaserInfo * /*laser_info*/) {
    notPorted("onLaserHit");
}

} // namespace nocturne::core
