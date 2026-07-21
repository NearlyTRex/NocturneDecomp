// Name: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590
// Address: 0051e590
// Address Range: [[0051e590, 0051e7c6]]
// Convention: __cdecl
// Signature: float * __cdecl core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590(float param_1,float *param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __cdecl core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590(float param_1,float *param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  int iVar13;
  int iVar14;
  float10 fVar15;
  uint uVar16;
  float local_38;
  float local_34;
  float local_30;
  int local_18;
  
  if (param_4 <= param_3) {
    *param_2 = _DAT_02dd1184;
    param_2[1] = _DAT_02dd1188;
    param_2[2] = _DAT_02dd118c;
    return param_2;
  }
  iVar13 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(param_1);
  dVar12 = (double)floor((double)param_3);
  uVar16 = 0x51e5fc;
  round((float10)dVar12);
  dVar12 = (double)ceil((double)param_3,uVar16);
  fVar15 = (float10)round((float10)dVar12);
  iVar1 = (int)ROUND(fVar15);
  local_38 = 0.0;
  local_34 = 0.0;
  local_30 = 0.0;
  if (local_18 < iVar1) {
    iVar14 = local_18 * 0xc;
    do {
      iVar8 = *(int *)(iVar13 + 0x29378);
      local_38 = local_38 + *(float *)(iVar8 + iVar14);
      local_34 = local_34 + *(float *)(iVar8 + 4 + iVar14);
      local_30 = local_30 + *(float *)(iVar8 + 8 + iVar14);
      iVar14 = iVar14 + 0xc;
    } while (iVar14 < iVar1 * 0xc);
  }
  iVar8 = local_18 * 0xc;
  fVar10 = param_1 - (float)local_18;
  iVar9 = *(int *)(iVar13 + 0x29378);
  fVar2 = *(float *)(iVar8 + 4 + iVar9);
  fVar3 = *(float *)(iVar8 + 8 + iVar9);
  iVar14 = iVar1 + -1;
  fVar11 = (float)iVar1 - (float)param_2;
  iVar1 = *(int *)(iVar13 + 0x29378);
  fVar4 = *(float *)(iVar1 + 4 + iVar14 * 0xc);
  fVar5 = *(float *)(iVar1 + 8 + iVar14 * 0xc);
  fVar6 = *(float *)((int)param_1 + 0x50c);
  fVar7 = *(float *)((int)param_1 + 0x510);
  *param_2 = ((local_38 - *(float *)(iVar8 + iVar9) * fVar10) -
             *(float *)(iVar1 + iVar14 * 0xc) * fVar11) * *(float *)((int)param_1 + 0x508);
  param_2[1] = ((local_34 - fVar2 * fVar10) - fVar4 * fVar11) * fVar6;
  param_2[2] = ((local_30 - fVar3 * fVar10) - fVar5 * fVar11) * fVar7;
  return param_2;
}
