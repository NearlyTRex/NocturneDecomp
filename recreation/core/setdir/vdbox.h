#pragma once

#include "common/math/matrix3x3f.h"
#include "common/math/vector3f.h"

namespace nocturne::core {

// A virtual director box: a turned box in world units, its extents half its size on each axis.
struct SVDBox {
    common::CVector3f position;
    common::CVector3f extents;
    common::CMatrix3x3f rotation_matrix;
    // The next box up its group's tree, or -1 for the group's root.
    int parent_index = -1;
};

} // namespace nocturne::core
