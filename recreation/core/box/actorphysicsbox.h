#pragma once

#include "core/fwd.h"

namespace nocturne::core {

// Puts the box into the physics around bounds in the actor's own space, turned as the actor is.
// CBoxActor::setupPhysicsBox and CWeapon::setupPhysicsBox each repeat it in the original.
void setupPhysicsBoxAround(CBox &box, CDemonActor &actor, const CBoundingBox3D &bounds,
                           float weight);

} // namespace nocturne::core
