// Name: core_stairs.cpp_FUN_005ba700
// Address: 005ba700
// Address Range: [[005ba700, 005ba831]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_FUN_005ba700(void)

#include "nocturne.h"

/* Signature: byte actors_other_stairs.cpp_FUN_005ba700(uint param_1) */

void __cdecl core_stairs_cpp_FUN_005ba700(void)

{
  CDemonTriangle *this_ptr;
  int iVar1;
  CDemonTriangle *this_ptr_00;
  int in_stack_00000004;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  local_18 = *(float *)(in_stack_00000004 + 0x160) * (float)0.5;
  local_14 = -*(float *)(in_stack_00000004 + 0x160) * (float)0.5;
  iVar1 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x16c)) {
    this_ptr_00 = (CDemonTriangle *)(in_stack_00000004 + 0x170);
    this_ptr = (CDemonTriangle *)(in_stack_00000004 + 0x1a8);
    do {
      iVar1 = iVar1 + 1;
      local_58.y = *(float *)(in_stack_00000004 + 0x158) * (float)iVar1;
      local_58.z = *(float *)(in_stack_00000004 + 0x15c) * (float)iVar1;
      local_40.z = local_58.z - *(float *)(in_stack_00000004 + 0x168);
      local_40.y = local_58.y - *(float *)(in_stack_00000004 + 0x164);
      local_58.x = local_14;
      local_4c.x = local_18;
      local_34.x = local_18;
      local_40.x = local_14;
      local_4c.y = local_58.y;
      local_4c.z = local_58.z;
      local_34.y = local_40.y;
      local_34.z = local_40.z;
      local_28 = local_40.z;
      local_24 = local_58.y;
      local_20 = local_40.y;
      local_1c = local_58.z;
      local_10 = iVar1;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                (this_ptr_00,&local_58,&local_4c,&local_34);
      this_ptr_00 = this_ptr_00 + 2;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                (this_ptr,&local_58,&local_34,&local_40);
      this_ptr = this_ptr + 2;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x16c));
  }
  return;
}
