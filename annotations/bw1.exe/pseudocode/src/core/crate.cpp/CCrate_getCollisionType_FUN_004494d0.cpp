// Name: core_crate.cpp_CCrate_getCollisionType_FUN_004494d0
// Address: 004494d0
// Address Range: [[004494d0, 004494ea]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_crate_cpp_CCrate_getCollisionType_FUN_004494d0(CCrate *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_crate_cpp_CCrate_getCollisionType_FUN_004494d0(CCrate *this_ptr,SCollisionInfo *collision_info)

{
  if ((*(int *)&this_ptr->field_0x70 == 1) && (*(int *)&this_ptr->field_0x2d4 == 0)) {
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}
