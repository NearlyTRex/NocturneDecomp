#include "core/actor/notported.h"
#include "core/npc/npc.h"

#include <string_view>

// The CNPC virtual functions not ported yet. Each quits, naming itself, until its port replaces
// it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CNPC", function);
}

} // namespace

void CNPC::setup() {
    notPorted("setup");
}

void CNPC::process(float /*delta_time*/) {
    notPorted("process");
}

void CNPC::renderBackground(int /*layer_flag*/) {
    notPorted("renderBackground");
}

CPathMap *CNPC::getPathMap() {
    notPorted("getPathMap");
}

void CNPC::processDamage(SDamageInfo * /*damage_info*/) {
    notPorted("processDamage");
}

} // namespace nocturne::core
