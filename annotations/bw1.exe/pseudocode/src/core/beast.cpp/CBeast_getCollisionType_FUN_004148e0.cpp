// Name: core_beast.cpp_CBeast_getCollisionType_FUN_004148e0
// Address: 004148e0
// Address Range: [[004148e0, 004148fe]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_beast_cpp_CBeast_getCollisionType_FUN_004148e0(CBeast *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_beast_cpp_CBeast_getCollisionType_FUN_004148e0(CBeast *this_ptr,SCollisionInfo *collision_info)

{
  if (*(int *)collision_info != 1) {
    return COLLISION_TYPE_NONE;
  }
  *(CDeformableModelInstance **)&collision_info->field_0x20 = &(this_ptr->base).base.model;
  return COLLISION_TYPE_MESH;
}
