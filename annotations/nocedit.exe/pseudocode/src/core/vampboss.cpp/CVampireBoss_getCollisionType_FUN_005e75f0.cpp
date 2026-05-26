// Name: core_vampboss.cpp_CVampireBoss_getCollisionType_FUN_005e75f0
// Address: 005e75f0
// Address Range: [[005e75f0, 005e764b]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_vampboss_cpp_CVampireBoss_getCollisionType_FUN_005e75f0(CVampireBoss *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_vampboss_cpp_CVampireBoss_getCollisionType_FUN_005e75f0(CVampireBoss *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  EDeathState EVar2;
  ECollisionType EVar3;
  
  if ((collision_info->ray_query).ray_type != 2) {
    EVar2 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    if ((int)EVar2 < 2) {
      iVar1 = (collision_info->ray_query).ray_type;
      if (((iVar1 == 1) || (iVar1 == 3)) && (this_ptr->form == 2)) {
        collision_info->deformable_model = &this_ptr->model;
        return COLLISION_TYPE_MESH;
      }
      EVar3 = core_charactr_cpp_CCharacter_getCollisionType_FUN_0042bc20
                        ((CCharacter *)this_ptr,collision_info);
      return EVar3;
    }
  }
  return COLLISION_TYPE_NONE;
}
