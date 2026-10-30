#include "core/actor/notported.h"
#include "core/flame/flame.h"

#include <string_view>

// The CFlame virtual functions not ported yet. Each quits, naming itself, until its port
// replaces it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CFlame", function);
}

} // namespace

void CFlame::setup() {
    notPorted("setup");
}

void CFlame::process(float /*delta_time*/) {
    notPorted("process");
}

int CFlame::renderTransparent() {
    notPorted("renderTransparent");
}

void CFlame::renderBackground(int /*layer_flag*/) {
    notPorted("renderBackground");
}

} // namespace nocturne::core
