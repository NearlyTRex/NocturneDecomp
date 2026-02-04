// Name: core_vampboss.cpp_CVampireBoss_hasCollision_FUN_005e75f0
// Address: 005e75f0
// Address Range: [[005e75f0, 005e764b]]
// Convention: __cdecl
// Signature: int __cdecl core_vampboss_cpp_CVampireBoss_hasCollision_FUN_005e75f0 (CVampireBoss *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

int __cdecl
core_vampboss_cpp_CVampireBoss_hasCollision_FUN_005e75f0
          (CVampireBoss *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  
  if (collision_info->ray_type != 2) {
    iVar1 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr);
    if (iVar1 < 2) {
      if (((collision_info->ray_type == 1) || (collision_info->ray_type == 3)) &&
         (this_ptr->form == 2)) {
        collision_info->result_ptr = &this_ptr->model;
        return 1;
      }
      iVar1 = core_charactr_cpp_CCharacter_hasCollision_FUN_0042bc20
                        ((CCharacter *)this_ptr,collision_info);
      return iVar1;
    }
  }
  return 0;
}
