// Name: core_actor.cpp_initTransformCache_FUN_00409cf0
// Address: 00409cf0
// Address Range: [[00409cf0, 00409d22]]
// Convention: __cdecl
// Signature: CDemonActorTransformState * __cdecl core_actor_cpp_initTransformCache_FUN_00409cf0(CDemonActorTransformState *transform_cache)

#include "nocturne.h"

CDemonActorTransformState * __cdecl core_actor_cpp_initTransformCache_FUN_00409cf0(CDemonActorTransformState *transform_cache)

{
  (transform_cache->position).z = 0.0;
  (transform_cache->position).y = (transform_cache->position).z;
  (transform_cache->position).x = (transform_cache->position).y;
  (transform_cache->orientation).vec.z = 0.0;
  (transform_cache->orientation).vec.y = (transform_cache->orientation).vec.z;
  (transform_cache->orientation).vec.x = (transform_cache->orientation).vec.y;
  transform_cache->dirty_flags = 0x1f;
  return transform_cache;
}
