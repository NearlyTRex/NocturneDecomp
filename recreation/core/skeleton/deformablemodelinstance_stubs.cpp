#include "core/actor/notported.h"
#include "core/skeleton/deformablemodelinstance.h"

#include <string_view>

// The CDeformableModelInstance functions not ported yet. Each quits, naming itself, until its
// port replaces it here.

namespace nocturne::core {
namespace {

[[noreturn]] void notPorted(std::string_view function) {
    quitNotPorted("CDeformableModelInstance", function);
}

} // namespace

int CDeformableModelInstance::findPatchToFrame(int /*source_motion_index*/, float /*source_frame*/,
                                               int /*target_motion_index*/) {
    notPorted("findPatchToFrame");
}

void CDeformableModelInstance::accumulateScaledRootMotion(float /*start_frame*/,
                                                          float /*end_frame*/,
                                                          float /*scale_factor*/) {
    notPorted("accumulateScaledRootMotion");
}

} // namespace nocturne::core
