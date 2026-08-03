// Name: core_crate.cpp_CCrate_getCollisionType_FUN_0043cca0
// Address: 0043cca0
// Address Range: [[0043cca0, 0043ccba]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_crate_cpp_CCrate_getCollisionType_FUN_0043cca0(CCrate *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_crate_cpp_CCrate_getCollisionType_FUN_0043cca0(CCrate *this_ptr,SCollisionInfo *collision_info)

{
  if (((this_ptr->base).lifecycle_state == ACTOR_CREATED) &&
     (this_ptr->carrier == (CDemonActor *)0x0)) {
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}
