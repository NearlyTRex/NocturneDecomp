#include "core/actor/notported.h"
#include "core/dcamera/demoncamera.h"

#include <string_view>

// The virtual functions the scene camera overrides, before their ports replace them here. Each
// quits, naming itself.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CDemonCamera", function);
}

} // namespace

void CDemonCamera::setupPerspectiveAndFog(common::CVector3f * /*position*/,
                                          platform::SProjectedVertex * /*projected_vertex*/) {
    notPorted("setupPerspectiveAndFog");
}

int CDemonCamera::getFogValueAtPosition(common::CVector3i * /*world_position*/,
                                        platform::SProjectedVertex * /*projected_vertex*/) {
    notPorted("getFogValueAtPosition");
}

void CDemonCamera::saveAlphaTransform(int /*alpha_index*/) {
    notPorted("saveAlphaTransform");
}

} // namespace nocturne::core
