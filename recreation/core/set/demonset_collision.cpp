#include "common/math/vector3f.h"
#include "core/actor/demonactor.h"
#include "core/box/boundingbox3d.h"
#include "core/dtrace/demonraytrace.h"
#include "core/set/demonset.h"

namespace nocturne::core {

// deferred: resetting every path map around the new shadow, with resetAllPathMaps and the path
//   maps
// nocedit 0x00574440
void CDemonSet::castVoxelShadow(CDemonActor &actor) {
    CBoundingBox3D box;
    actor.getBoundingBox(&box);
    owners_.raytrace.markShadowVoxels(actor.getLocation().position, actor.getOrientation(), box.min,
                                      box.max);
}

} // namespace nocturne::core
