#include "core/actor/notported.h"
#include "core/lever/lever.h"

#include <string_view>

// The CLever virtual functions not ported yet. Each quits, naming itself, until its port replaces it
// here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CLever", function);
}

} // namespace

void CLever::process(float /*delta_time*/) {
    notPorted("process");
}

int CLever::renderOpaque() {
    notPorted("renderOpaque");
}

CBoundingBox3D *CLever::getBoundingBox(CBoundingBox3D * /*out_box*/) {
    notPorted("getBoundingBox");
}

} // namespace nocturne::core
