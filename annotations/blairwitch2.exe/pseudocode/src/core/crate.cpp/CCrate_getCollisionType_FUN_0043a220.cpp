// Name: core_crate.cpp_CCrate_getCollisionType_FUN_0043a220
// Address: 0043a220
// Address Range: [[0043a220, 0043a23a]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_crate_cpp_CCrate_getCollisionType_FUN_0043a220(CCrate *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_crate_cpp_CCrate_getCollisionType_FUN_0043a220(CCrate *this_ptr,SCollisionInfo *collision_info)

{
  if ((*(int *)&this_ptr->field_0x70 == 1) && (*(int *)&this_ptr->field_0x430 == 0)) {
    return COLLISION_TYPE_MESH;
  }
  return COLLISION_TYPE_NONE;
}
