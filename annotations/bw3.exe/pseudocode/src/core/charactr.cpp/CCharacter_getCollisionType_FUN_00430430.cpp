// Name: core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430
// Address: 00430430
// Address Range: [[00430430, 004304d9]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  EDeathState EVar2;
  
  iVar1 = *(int *)collision_info;
  if (iVar1 == 2) {
    return COLLISION_TYPE_NONE;
  }
  if (*(int *)&this_ptr->field_0x27a8 == 0) {
    EVar2 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
    if (1 < (int)EVar2) {
      return COLLISION_TYPE_NONE;
    }
  }
  else if (iVar1 != 4) {
    if (iVar1 != 3) {
      return COLLISION_TYPE_NONE;
    }
    goto LAB_0043045b;
  }
  if ((*(int *)collision_info != 1) && (*(int *)collision_info != 3)) {
    *(float *)&collision_info->field_0x18 =
         *(float *)&this_ptr->field_0x3280 * *(float *)&this_ptr->field_0x27b8;
    *(float *)&collision_info->field_0x14 =
         *(float *)&this_ptr->field_0x327c * *(float *)&this_ptr->field_0x27b8;
    if (*(float *)&collision_info->field_0x18 < *(float *)&collision_info->field_0x14) {
      *(float *)&collision_info->field_0x18 = (this_ptr->model).bounding_box.max.y;
    }
    *(float *)&collision_info->field_0x1c =
         *(float *)&this_ptr->field_0x3270 * *(float *)&this_ptr->field_0x27b8;
    return COLLISION_TYPE_CYLINDER;
  }
LAB_0043045b:
  *(CDeformableModelInstance **)&collision_info->field_0x20 = &this_ptr->model;
  return COLLISION_TYPE_MESH;
}
