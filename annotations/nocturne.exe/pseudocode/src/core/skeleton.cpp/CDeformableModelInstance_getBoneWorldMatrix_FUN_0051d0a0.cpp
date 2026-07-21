// Name: core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0
// Address: 0051d0a0
// Address Range: [[0051d0a0, 0051d29c]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0(int param_1,int param_2)

#include "nocturne.h"

void core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0(int param_1,int param_2)

{
  int iVar1;
  float *unaff_ESI;
  uint *puVar2;
  float *pfVar3;
  uint *puVar4;
  byte bVar5;
  uint local_ac [12];
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  uint local_4c [12];
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  
  bVar5 = 0;
  if (param_2 < 0) {
    core_xform_cpp_setRotationScaleIdentity_FUN_0055ac80(&local_7c);
    local_70 = (float)*(uint *)(param_1 + 0x6a4);
    local_60 = (float)*(uint *)(param_1 + 0x6a8);
    local_50 = (float)*(uint *)(param_1 + 0x6ac);
  }
  else {
    iVar1 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
    iVar1 = *(int *)(iVar1 + 0x2857c + param_2 * 0x24);
    local_10 = param_2 * 0xc;
    if (iVar1 < 0) {
      local_70 = *(float *)(param_1 + 0x6a4) + *(float *)(param_1 + 0x58 + local_10);
      local_60 = *(float *)(param_1 + 0x6a8) + *(float *)(param_1 + 0x5c + local_10);
      local_50 = *(float *)(param_1 + 0x6ac) + *(float *)(param_1 + 0x60 + local_10);
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0(param_1,iVar1);
      puVar2 = local_ac;
      puVar4 = local_4c;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_1c,param_1 + 0x58 + local_10,local_4c);
      local_70 = local_1c;
      local_60 = local_18;
      local_50 = local_14;
    }
    core_xform_cpp_quaternionToMatrix3x3_FUN_0055cd70(&local_7c,param_2 * 0x10 + param_1 + 0x6b0);
    param_1 = param_1 + param_2 * 4;
    if (*(int *)(param_1 + 0xcf0) != 0x3f800000) {
      local_7c = local_7c * *(float *)(param_1 + 0xcf0);
      local_78 = local_78 * *(float *)(param_1 + 0xcf0);
      local_74 = local_74 * *(float *)(param_1 + 0xcf0);
      local_6c = local_6c * *(float *)(param_1 + 0xcf0);
      local_68 = local_68 * *(float *)(param_1 + 0xcf0);
      local_64 = local_64 * *(float *)(param_1 + 0xcf0);
      local_5c = local_5c * *(float *)(param_1 + 0xcf0);
      local_58 = local_58 * *(float *)(param_1 + 0xcf0);
      local_54 = local_54 * *(float *)(param_1 + 0xcf0);
    }
  }
  pfVar3 = &local_7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
