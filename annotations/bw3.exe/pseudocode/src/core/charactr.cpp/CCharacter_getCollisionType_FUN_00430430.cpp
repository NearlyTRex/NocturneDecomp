// Name: core_charactr.cpp_CCharacter_getCollisionType_FUN_00430430
// Address: 00430430
// Address Range: [[00430430, 004304d9]]
// Convention: __cdecl
// Signature: ECollisionType __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter *this_ptr,SCollisionInfo *collision_info)

#include "nocturne.h"

ECollisionType __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_00430430(CCharacter *this_ptr,SCollisionInfo *collision_info)

{
  int iVar1;
  
  iVar1 = *(int *)collision_info;
  if (iVar1 == 2) {
    return COLLISION_TYPE_NONE;
  }
  if (*(int *)&this_ptr->field_0x27a8 == 0) {
    iVar1 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr);
    if (1 < iVar1) {
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
      *(uint *)&collision_info->field_0x18 = *(uint *)&this_ptr->field_0x2490;
    }
    *(float *)&collision_info->field_0x1c =
         *(float *)&this_ptr->field_0x3270 * *(float *)&this_ptr->field_0x27b8;
    return COLLISION_TYPE_CYLINDER;
  }
LAB_0043045b:
  *(byte **)&collision_info->field_0x20 = &this_ptr->field_0x158;
  return COLLISION_TYPE_MESH;
}
