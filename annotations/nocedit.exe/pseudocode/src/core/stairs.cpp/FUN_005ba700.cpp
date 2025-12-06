// Name: core_stairs.cpp_FUN_005ba700
// Address: 005ba700
// Address Range: [[005ba700, 005ba831]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba700()

#include "nocturne.h"

/* Signature: byte actors_other_stairs.cpp_FUN_005ba700(uint param_1) */

void core_stairs_cpp_FUN_005ba700(void)

{
  BADSPACEBASE *in_ESP;
  CDemonTriangle *this_ptr;
  int iVar1;
  CDemonTriangle *this_ptr_00;
  int in_stack_00000004;
  byte local_58 [8];
  float local_50;
  CVector3f local_4c;
  float local_40;
  byte local_3c [12];
  CVector3f local_30;
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
      local_58._4_4_ = *(float *)(in_stack_00000004 + 0x158) * (float)iVar1;
      local_50 = *(float *)(in_stack_00000004 + 0x15c) * (float)iVar1;
      local_3c._4_4_ = local_50 - *(float *)(in_stack_00000004 + 0x168);
      local_3c._0_4_ = (float)local_58._4_4_ - *(float *)(in_stack_00000004 + 0x164);
      local_58._0_4_ = local_14;
      local_4c.x = local_18;
      local_3c._8_4_ = local_18;
      local_40 = local_14;
      local_4c.y = (float)local_58._4_4_;
      local_4c.z = local_50;
      local_30.x = (float)local_3c._0_4_;
      local_30.y = (float)local_3c._4_4_;
      local_30.z = (float)local_3c._4_4_;
      local_24 = (float)local_58._4_4_;
      local_20 = (float)local_3c._0_4_;
      local_1c = local_50;
      local_10 = iVar1;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                (this_ptr_00,(CVector3f *)local_58,&local_4c,(CVector3f *)(local_3c + 8));
      this_ptr_00 = this_ptr_00 + 2;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
                (this_ptr,(CVector3f *)(local_58 + 4),&local_30,(CVector3f *)local_3c);
      this_ptr = this_ptr + 2;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x16c));
  }
  return;
}
