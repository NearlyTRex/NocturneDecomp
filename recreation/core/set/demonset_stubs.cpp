#include "core/actor/notported.h"
#include "core/set/demonset.h"

#include <cstdint>

// The CDemonSet functions the ported ones call but which aren't ported yet. Each quits, naming
// itself, until its port replaces it here.

namespace nocturne::core {

void CDemonSet::buildDisplayList(std::uint32_t /*dirty_flags_mask*/) {
    quitNotPorted("CDemonSet", "buildDisplayList");
}

} // namespace nocturne::core
