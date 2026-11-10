// Name: core_charactr.cpp_CCharacter_getCollisionType_FUN_00427680
// Address: 00427680
// Address Range: [[00427680, 0042772e]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_00427680(CCharacter *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_00427680(CCharacter *this_ptr,SCollisionInfo *collision_info)

{
  EDeathState EVar1;
  
  if (*(int *)collision_info == 2) {
    return COLLISION_TYPE_NONE;
  }
  if (*(int *)&this_ptr->field_0x2814 == 0) {
    EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
    if (1 < (int)EVar1) {
      return COLLISION_TYPE_NONE;
    }
  }
  else if (*(int *)collision_info != 3) {
    return COLLISION_TYPE_NONE;
  }
  if ((*(int *)collision_info != 1) && (*(int *)collision_info != 3)) {
    *(float *)&collision_info->field_0x18 =
         *(float *)&this_ptr->field_0x3444 * *(float *)&this_ptr->field_0x2824;
    *(float *)&collision_info->field_0x14 =
         *(float *)&this_ptr->field_0x3440 * *(float *)&this_ptr->field_0x2824;
    if (*(float *)&collision_info->field_0x18 < *(float *)&collision_info->field_0x14) {
      *(uint *)&collision_info->field_0x18 = *(uint *)&(this_ptr->model).field_0x2248;
    }
    *(float *)&collision_info->field_0x1c =
         *(float *)&this_ptr->field_0x3434 * *(float *)&this_ptr->field_0x2824;
    return COLLISION_TYPE_CYLINDER;
  }
  *(CDeformableModelInstance **)&collision_info->field_0x20 = &this_ptr->model;
  return COLLISION_TYPE_MESH;
}
