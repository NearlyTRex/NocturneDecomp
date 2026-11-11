// Name: core_barrier.cpp_CBarrier_getCollisionType_FUN_00410e20
// Address: 00410e20
// Address Range: [[00410e20, 00410e5c]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_barrier_cpp_CBarrier_getCollisionType_FUN_00410e20(CBarrier *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_barrier_cpp_CBarrier_getCollisionType_FUN_00410e20(CBarrier *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  
  if ((collision_info->ray_query).ray_type != 0) {
    return COLLISION_TYPE_NONE;
  }
  if (this_ptr->effect_class_name_list[0] != '\0') {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(DAT_007bbff4,this_ptr->effect_class_name_list);
    if (iVar1 == 0) {
      return COLLISION_TYPE_NONE;
    }
  }
  return COLLISION_TYPE_MESH;
}
