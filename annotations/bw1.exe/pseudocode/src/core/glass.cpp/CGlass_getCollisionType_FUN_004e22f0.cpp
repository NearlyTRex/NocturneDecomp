// Name: core_glass.cpp_CGlass_getCollisionType_FUN_004e22f0
// Address: 004e22f0
// Address Range: [[004e22f0, 004e2318]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_glass_cpp_CGlass_getCollisionType_FUN_004e22f0(CGlass *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_glass_cpp_CGlass_getCollisionType_FUN_004e22f0(CGlass *this_ptr,SCollisionInfo *collision_info)

{
  if ((*(int *)&this_ptr->field_0x180 != 0) && (*(int *)&this_ptr->field_0x1e8 == 0)) {
    *(uint *)&this_ptr->field_0x100 = 1;
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_MESH;
}
