// Name: core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0051e9e0
// Address: 0051e9e0
// Address Range: [[0051e9e0, 0051ed22]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_0051e9e0(int param_1,float *param_2)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_0051e9e0(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_4c;
  float local_40;
  int local_3c;
  
  iVar13 = 0;
  iVar10 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
  local_40 = 1e+30;
  local_4c = 0;
  if (0 < *(int *)(iVar10 + 0x28558)) {
    iVar12 = param_1 + 0xe80;
    local_3c = iVar10;
    do {
      iVar1 = *(int *)(local_3c + 0x2857c);
      if (-1 < iVar1) {
        fVar2 = *(float *)(iVar12 + 0xc);
        fVar3 = *(float *)(iVar12 + 0x1c);
        fVar4 = *(float *)(iVar12 + 0x2c);
        iVar11 = iVar1 * 0x30 + param_1 + 0xe80;
        fVar5 = *(float *)(iVar11 + 0xc) - fVar2;
        fVar6 = *(float *)(iVar11 + 0x1c) - fVar3;
        fVar8 = *(float *)(iVar11 + 0x2c) - fVar4;
        fVar7 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar6 * fVar6);
        if (fVar7 <= 0.0) {
LAB_0051ebc8:
          fVar2 = (param_2[1] - fVar3) * (param_2[1] - fVar3) +
                  (*param_2 - fVar2) * (*param_2 - fVar2);
          fVar4 = param_2[2] - fVar4;
        }
        else {
          fVar9 = 1.0 / fVar7;
          fVar5 = fVar5 * fVar9;
          fVar6 = fVar6 * fVar9;
          fVar8 = fVar8 * fVar9;
          fVar9 = (param_2[2] * fVar8 + *param_2 * fVar5 + param_2[1] * fVar6) -
                  (fVar4 * fVar8 + fVar2 * fVar5 + fVar3 * fVar6);
          if (fVar9 <= 0.0) goto LAB_0051ebc8;
          if (fVar9 < fVar7) {
            fVar2 = *param_2 - (fVar2 + fVar5 * fVar9);
            fVar3 = param_2[1] - (fVar3 + fVar6 * fVar9);
            fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
            fVar4 = param_2[2] - (fVar4 + fVar8 * fVar9);
          }
          else {
            fVar2 = *param_2 - *(float *)(iVar11 + 0xc);
            fVar3 = param_2[1] - *(float *)(iVar11 + 0x1c);
            fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
            fVar4 = param_2[2] - *(float *)(iVar11 + 0x2c);
          }
        }
        fVar2 = SQRT(fVar4 * fVar4 + fVar2);
        if (fVar2 < local_40) {
          local_4c = iVar1;
          local_40 = fVar2;
        }
      }
      local_3c = local_3c + 0x24;
      iVar13 = iVar13 + 1;
      iVar12 = iVar12 + 0x30;
    } while (iVar13 < *(int *)(iVar10 + 0x28558));
  }
  return local_4c;
}
