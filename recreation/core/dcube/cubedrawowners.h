#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

namespace nocturne::core {

// What the set's raytrace geometry is drawn with, handed to each draw: the set owns the grid
// it draws.
struct SCubeDrawOwners {
    engine::CDemonRenderer &renderer;
    engine::CSpecial &special;
    const engine::CMatrix &matrix;
    CDemonSet &set;
};

} // namespace nocturne::core
