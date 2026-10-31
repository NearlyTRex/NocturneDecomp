#include "core/box/actorphysicsbox.h"

#include "common/math/vector3f.h"
#include "core/actor/demonactor.h"
#include "core/box/boundingbox3d.h"
#include "core/box/box.h"

namespace nocturne::core {

namespace {

// Halfway between the bounds is their centre.
constexpr float kHalf = 0.5F;

} // namespace

void setupPhysicsBoxAround(CBox &box, CDemonActor &actor, const CBoundingBox3D &bounds,
                           float weight) {
    common::CVector3f centre = {.x = (bounds.min.x + bounds.max.x) * kHalf,
                                .y = (bounds.min.y + bounds.max.y) * kHalf,
                                .z = (bounds.min.z + bounds.max.z) * kHalf};
    common::CVector3f position;
    actor.localToWorldPoint(&position, &centre);
    common::CVector3f orientation = actor.getOrientation();
    common::CVector3f extents = {.x = bounds.max.x - bounds.min.x,
                                 .y = bounds.max.y - bounds.min.y,
                                 .z = bounds.max.z - bounds.min.z};
    box.setupCorners(&position, &orientation, &extents, weight);
}

} // namespace nocturne::core
