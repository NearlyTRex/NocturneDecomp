// Name: core_glass.cpp_CGlass_getCollisionType_FUN_004c5b80
// Address: 004c5b80
// Address Range: [[004c5b80, 004c5ba8]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_glass_cpp_CGlass_getCollisionType_FUN_004c5b80(CGlass *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_glass_cpp_CGlass_getCollisionType_FUN_004c5b80(CGlass *this_ptr,SCollisionInfo *collision_info)

{
  if ((*(int *)&this_ptr->field_0x2dc != 0) && (*(int *)&this_ptr->field_0x344 == 0)) {
    *(uint *)&this_ptr->field_0x100 = 1;
    return COLLISION_TYPE_NONE;
  }
  return COLLISION_TYPE_MESH;
}
