#include "common/math/vector3f.h"
#include "core/actor/collisioninfo.h"
#include "core/actor/collisiontype.h"
#include "core/actor/demonactor.h"
#include "core/actor/notported.h"
#include "core/box/boundingbox3d.h"
#include "core/dtrace/demonraytrace.h"
#include "core/set/demonset.h"

namespace nocturne::core {
namespace {

// How far below and above a point the height query's ray runs.
constexpr float kHeightQueryBelow = 1.0F;
constexpr float kHeightQueryAbove = 150.0F;
// How far along a ray actors are tested to when the geometry stops nothing: just past its end.
constexpr float kPastRayEnd = 1.01F;
// The least distance along a ray actors are tested from: none.
constexpr float kFromRayStart = -1.0F;

} // namespace

// Rays meet the collidable actors.
// deferred: the actors ignored, collision with characters, exact collisions and the ray type
//   cleared, with ignore, enableCollision, skipExactCollisions and setRayType
// nocedit 0x00574180
// nocturne 0x00511750
// bw1 0x00559220
// bw2 0x00537e00
// bw3 0x0053ebe0
void CDemonSet::init() {
    rays_meet_actors_ = true;
}

// Rays pass through every actor until init.
// nocedit 0x00574210
// nocturne 0x005117e0
// bw1 0x005592b0
// bw2 0x00537e90
// bw3 0x0053ec70
void CDemonSet::disableIgnore() {
    rays_meet_actors_ = false;
}

// The point's height, from a ray up through it from a unit below it to 150 above: where the ray
// first meets the geometry or an actor, or 1.01 of the way up when it meets neither.
// deferred: the met geometry's normal and ground type kept, the set's default for a ground of
//   type 0, with the collision's callers
// nocedit 0x00572340
// nocturne 0x0050f910
// bw1 0x00557110
// bw2 0x00535cf0
// bw3 0x0053cad0
float CDemonSet::rayVoxelHeightQuery(const common::CVector3f &position) const {
    const common::CVector3f below{
        .x = position.x, .y = position.y - kHeightQueryBelow, .z = position.z};
    const common::CVector3f above{
        .x = position.x, .y = position.y + kHeightQueryAbove, .z = position.z};
    float along = owners_.raytrace.rayVoxelIntersection(below, above, nullptr, nullptr);
    if (along < 0.0F) {
        along = kPastRayEnd;
    }
    const float met = raycastAgainstActors(kFromRayStart, below, above, along);
    return ((above.y - below.y) * met) + below.y;
}

// Whether something stands between the two points: the geometry, or an actor within the line.
// deferred: an actor met within the line standing between them, with CDemonActor::rayIntersect
// nocedit 0x00572460
// nocturne 0x0050fa30
// bw1 0x00557230
// bw2 0x00535e10
// bw3 0x0053cbf0
bool CDemonSet::testLineOcclusion(const common::CVector3f &start_pos,
                                  const common::CVector3f &end_pos) const {
    if (owners_.raytrace.rayVoxelGridTest(start_pos, end_pos)) {
        return true;
    }
    static_cast<void>(raycastAgainstActors(kFromRayStart, start_pos, end_pos, kPastRayEnd));
    return false;
}

// How far along the ray, up to max_t, it first meets a collidable actor; max_t when it meets
// none, or while rays pass through actors, and 0 for a max_t of 0 or less. An actor whose
// collision type is none is passed over.
// deferred: the met actor, its part and bone cleared, then kept with its normal and its ground
//   type for the set's, with the collision's callers
// deferred: the actors the set ignores, and characters while collision with them is on, passed
//   over, with ignore and enableCollision
// deferred: each actor's test against the ray, from min_t to the nearest met so far, with
//   CDemonActor::rayIntersect
// nocedit 0x00572a10
// nocturne 0x0050ffe0
// bw1 0x005578b0
// bw2 0x00536490
// bw3 0x0053d270
float CDemonSet::raycastAgainstActors(float /*min_t*/, const common::CVector3f & /*ray_origin*/,
                                      const common::CVector3f & /*ray_target*/, float max_t) const {
    if (!rays_meet_actors_) {
        return max_t;
    }
    if (max_t <= 0.0F) {
        return 0.0F;
    }
    for (CDemonActor *actor : collidable_actors_) {
        SCollisionInfo collision_info;
        if (actor->getCollisionType(&collision_info) != ECollisionType::kNone) {
            quitNotPorted("CDemonActor", "rayIntersect");
        }
    }
    return max_t;
}

// deferred: resetting every path map around the new shadow, with resetAllPathMaps and the path
//   maps
// nocedit 0x00574440
// bw1 0x00559440
// bw2 0x00538020
// bw3 0x0053ee00
void CDemonSet::castVoxelShadow(CDemonActor &actor) {
    CBoundingBox3D box;
    actor.getBoundingBox(&box);
    owners_.raytrace.markShadowVoxels(actor.getLocation().position, actor.getOrientation(), box.min,
                                      box.max);
}

} // namespace nocturne::core
