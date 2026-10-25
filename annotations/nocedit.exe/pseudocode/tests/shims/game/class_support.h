#pragma once

// =============================================================================
// CLASS SUPPORT — which class each test actor is, as the engine asks it
// =============================================================================
//
// Each actor's own CDemonActorType, answered through its vtable's getActorType,
// and the engine's class tests stood in for as they work: castToClassHash and
// isOfClass walk that type and each base in turn, by hash and by name.

#include "nocturne.h"

#include <map>

namespace class_support {

// Every actor's own type, by actor.
extern std::map<const void *, CDemonActorType *> types;

// For a vtable's getActorType: the type in `types`, or none.
CDemonActorType *actor_type(CDemonActor *actor);

// A type named `name` and hashed `hash`, under `parent`.
CDemonActorType make(const char *name, uint hash, CDemonActorType *parent = nullptr);

} // namespace class_support
