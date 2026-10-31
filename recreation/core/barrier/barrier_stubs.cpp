#include "core/actor/notported.h"
#include "core/barrier/barrier.h"

#include <string_view>

// The CBarrier functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CBarrier", function);
}

} // namespace

int CBarrier::renderTransparent() {
    notPorted("renderTransparent");
}

ECollisionType CBarrier::getCollisionType(SCollisionInfo * /*collision_info*/) {
    notPorted("getCollisionType");
}

} // namespace nocturne::core
