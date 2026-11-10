// Name: core_vampboss.cpp_CVampireBoss_getCollisionType_FUN_005a73c0
// Address: 005a73c0
// Address Range: [[005a73c0, 005a741b]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_vampboss_cpp_CVampireBoss_getCollisionType_FUN_005a73c0(CVampireBoss *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_vampboss_cpp_CVampireBoss_getCollisionType_FUN_005a73c0(CVampireBoss *this_ptr,SCollisionInfo *collision_info)

{
  EDeathState EVar1;
  ECollisionType EVar2;
  
  if (*(int *)collision_info != 2) {
    EVar1 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
    if ((int)EVar1 < 2) {
      if (((*(int *)collision_info == 1) || (*(int *)collision_info == 3)) && (this_ptr->form == 2))
      {
        *(CDeformableModelInstance **)&collision_info->field_0x20 = &this_ptr->model;
        return COLLISION_TYPE_MESH;
      }
      EVar2 = core_charactr_cpp_CCharacter_getCollisionType_FUN_004310b0
                        ((CCharacter *)this_ptr,collision_info);
      return EVar2;
    }
  }
  return COLLISION_TYPE_NONE;
}
