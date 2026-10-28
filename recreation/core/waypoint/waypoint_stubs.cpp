#include "core/actor/notported.h"
#include "core/waypoint/waypoint.h"

#include <string_view>

// The CWayPoint functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CWayPoint", function);
}

} // namespace

void CWayPoint::setup() {
    notPorted("setup");
}

int CWayPoint::renderOpaque() {
    notPorted("renderOpaque");
}

} // namespace nocturne::core
