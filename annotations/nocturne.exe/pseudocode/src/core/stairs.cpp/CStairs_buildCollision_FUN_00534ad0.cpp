// Name: core_stairs.cpp_CStairs_buildCollision_FUN_00534ad0
// Address: 00534ad0
// Address Range: [[00534ad0, 00534c01]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_00534ad0(int param_1)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_buildCollision_FUN_00534ad0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  local_18 = *(float *)(param_1 + 0x158) * (float)0.5;
  local_14 = -*(float *)(param_1 + 0x158) * (float)0.5;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x164)) {
    iVar3 = param_1 + 0x168;
    iVar1 = param_1 + 0x1a0;
    do {
      iVar2 = iVar2 + 1;
      local_54 = *(float *)(param_1 + 0x150) * (float)iVar2;
      local_50 = *(float *)(param_1 + 0x154) * (float)iVar2;
      local_38 = local_50 - *(float *)(param_1 + 0x160);
      local_3c = local_54 - *(float *)(param_1 + 0x15c);
      local_58 = local_14;
      local_4c = local_18;
      local_34 = local_18;
      local_40 = local_14;
      local_48 = local_54;
      local_44 = local_50;
      local_30 = local_3c;
      local_2c = local_38;
      local_28 = local_38;
      local_24 = local_54;
      local_20 = local_3c;
      local_1c = local_50;
      local_10 = iVar2;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(iVar3,&local_58,&local_4c,&local_34);
      iVar3 = iVar3 + 0x70;
      core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(iVar1,&local_58,&local_34,&local_40);
      iVar1 = iVar1 + 0x70;
    } while (iVar2 < *(int *)(param_1 + 0x164));
  }
  return;
}
