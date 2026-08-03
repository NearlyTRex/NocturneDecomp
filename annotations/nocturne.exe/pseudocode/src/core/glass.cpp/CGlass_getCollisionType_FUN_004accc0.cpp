// Name: core_glass.cpp_CGlass_getCollisionType_FUN_004accc0
// Address: 004accc0
// Address Range: [[004accc0, 004acce8]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_glass_cpp_CGlass_getCollisionType_FUN_004accc0(CGlass *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_glass_cpp_CGlass_getCollisionType_FUN_004accc0(CGlass *this_ptr,SCollisionInfo *collision_info)

{
  if ((this_ptr->shattered != 0) && (this_ptr->mirror_flag == 0)) {
    (this_ptr->base).collision_disabled = 1;
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_MESH;
}
