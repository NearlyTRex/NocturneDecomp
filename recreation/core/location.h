#pragma once

#include "common/math/vector3f.h"

namespace nocturne::core {

// Where an actor is: a point in world units and the area of the mission it is in.
struct CLocation {
    common::CVector3f position;
    int area_id = 0;
};

} // namespace nocturne::core
