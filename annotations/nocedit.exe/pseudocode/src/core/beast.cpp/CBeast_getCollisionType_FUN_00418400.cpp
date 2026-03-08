// Name: core_beast.cpp_CBeast_getCollisionType_FUN_00418400
// Address: 00418400
// Address Range: [[00418400, 0041841e]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_beast_cpp_CBeast_getCollisionType_FUN_00418400(CBeast *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_beast_cpp_CBeast_getCollisionType_FUN_00418400(CBeast *this_ptr,SCollisionInfo *collision_info)

{
  if (collision_info->ray_type != 1) {
    return COLLISION_TYPE_NONE;
  }
  collision_info->deformable_model = &(this_ptr->base).base.model;
  return COLLISION_TYPE_MESH;
}
