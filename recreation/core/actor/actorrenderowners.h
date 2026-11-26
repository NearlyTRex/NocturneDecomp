#pragma once

#include "core/fwd.h"
#include "engine/fwd.h"

namespace nocturne::core {

// What an actor draws itself with: the renderer, its polygon state and projection, the screen's
// projection, the set it is drawn in, the camera tables, whose scene camera is the one it is
// drawn for, and the events it asks about.
struct SActorRenderOwners {
    engine::CDemonRenderer &renderer;
    const engine::C3d &three_d;
    const engine::CSpecial &special;
    const engine::C2d &two_d;
    CDemonSet &set;
    SCameraTables &camera_tables;
    IEventConditions &events;
};

} // namespace nocturne::core
