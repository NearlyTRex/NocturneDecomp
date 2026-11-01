#include "core/actor/notported.h"
#include "core/set/demonset.h"

#include <cstddef>

// The CDemonSet functions the ported ones call but which aren't ported yet. Each quits, naming
// itself, until its port replaces it here.

namespace nocturne::core {

float CDemonSet::calculateActorVisibility(std::size_t /*camera_index*/, CDemonActor & /*actor*/) {
    quitNotPorted("CZThumb", "calculateActorVisibility");
}

} // namespace nocturne::core
