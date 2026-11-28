#pragma once

namespace nocturne::core {

// What an actor's collision test is handed as a ray tests it.
// deferred: the deformable or keyframed model the actor's test fills in for the ray to meet,
//   and the set's ray type, with CDemonActor::rayIntersect and CDemonSet::setRayType
struct SCollisionInfo {};

} // namespace nocturne::core
