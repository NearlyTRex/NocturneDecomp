// Name: core_actor.cpp_initTransformCache_FUN_00408870
// Address: 00408870
// MANUAL RECONSTRUCTION
// Address Range: [[00408870, 004088a2]]
// Convention: __cdecl
// Signature: CDemonActorTransformState * __cdecl core_actor_cpp_initTransformCache_FUN_00408870(CDemonActorTransformState *transform_cache)

#include "nocturne.h"

CDemonActorTransformState * __cdecl core_actor_cpp_initTransformCache_FUN_00408870(CDemonActorTransformState *transform_cache)

{
  (transform_cache->position).x = 0.0;
  (transform_cache->position).y = 0.0;
  (transform_cache->position).z = 0.0;
  (transform_cache->orientation).vec.x = 0.0;
  (transform_cache->orientation).vec.y = 0.0;
  (transform_cache->orientation).vec.z = 0.0;
  transform_cache->dirty_flags = 0x1f;
  return transform_cache;
}
