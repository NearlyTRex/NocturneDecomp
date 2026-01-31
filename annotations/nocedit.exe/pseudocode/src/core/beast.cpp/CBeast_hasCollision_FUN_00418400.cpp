// Name: core_beast.cpp_CBeast_hasCollision_FUN_00418400
// Address: 00418400
// Address Range: [[00418400, 0041841e]]
// Convention: __cdecl
// Signature: int __cdecl core_beast_cpp_CBeast_hasCollision_FUN_00418400(CBeast *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl
core_beast_cpp_CBeast_hasCollision_FUN_00418400(CBeast *this_ptr,SCollisionInfo *collision_info)

{
  if (collision_info->ray_type != 1) {
    return 0;
  }
  collision_info->result_ptr = &(this_ptr->base).base.model;
  return 1;
}
