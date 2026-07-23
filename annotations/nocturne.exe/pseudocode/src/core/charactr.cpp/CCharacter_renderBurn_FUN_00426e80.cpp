// Name: core_charactr.cpp_CCharacter_renderBurn_FUN_00426e80
// Address: 00426e80
// Address Range: [[00426e80, 004270da]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_00426e80(int param_1)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderBurn_FUN_00426e80(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  float10 fVar12;
  float local_30;
  int local_20;
  int local_1c;
  int local_18;
  
  if (*(int *)(param_1 + 0x2f08) == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005ad1fc);
  iVar11 = param_1 + 0x150;
  if (*(int *)(param_1 + 0xb640) != 0) {
    core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
              (iVar11,0xffffffff,0xc9,0,1);
    return;
  }
  iVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(iVar11);
  local_20 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(iVar11);
  iVar11 = *(int *)(param_1 + 0x2380);
  iVar5 = 0;
  if (0 < *(int *)(iVar4 + 0x28558)) {
    iVar7 = 0;
    do {
      *(uint *)((int)&DAT_00765aa0 + iVar7) = 0;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar5 < *(int *)(iVar4 + 0x28558));
  }
  fVar2 = 3.0f;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x2f08)) {
    fVar1 = (float)65535;
    iVar7 = param_1;
    do {
      (&DAT_00765aa0)[*(int *)(iVar7 + 0x2f18)] =
           (float)(&DAT_00765aa0)[*(int *)(iVar7 + 0x2f18)] +
           (*(float *)(iVar7 + 0x2f28) * fVar1) / fVar2;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0x18;
    } while (iVar5 < *(int *)(param_1 + 0x2f08));
  }
  iVar7 = 0;
  iVar8 = 0;
  iVar5 = local_20;
  if (0 < *(int *)(iVar4 + 0x28558)) {
    do {
      if ((float)65535 <= (float)(&DAT_00765aa0)[iVar7]) {
        iVar8 = iVar8 + 1;
      }
      if (*(int *)(iVar5 + 0x288c) == -1) {
        iVar8 = iVar8 + 1;
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar7 < *(int *)(iVar4 + 0x28558));
  }
  if (iVar8 == *(int *)(iVar4 + 0x28558)) {
    *(uint *)(param_1 + 0xb644) = 0x3f800000;
    *(uint *)(param_1 + 0xb640) = 1;
  }
  local_1c = 0;
  local_18 = 0;
  for (iVar4 = 0; local_20 = local_20 + iVar11 * 4, iVar4 < *(int *)(local_20 + 0x2c);
      iVar4 = iVar4 + 1) {
    pbVar10 = (byte *)(*(int *)(local_20 + 0x40) + local_1c);
    local_30 = 0.0;
    pbVar6 = pbVar10;
    pbVar9 = pbVar10;
    for (iVar5 = 0; piVar3 = DAT_005ae704, iVar5 < (int)(uint)*pbVar10; iVar5 = iVar5 + 1) {
      fVar12 = (float10)round
                                  ((float10)*(float *)(pbVar6 + 4) *
                                   (float10)(float)(&DAT_00765aa0)[pbVar9[1]]);
      local_18 = (int)ROUND(fVar12);
      pbVar6 = pbVar6 + 4;
      pbVar9 = pbVar9 + 1;
      local_30 = (float)local_18 + 6.101353e-39;
    }
    if ((float)65535 < local_30) {
      local_30 = 65535.0;
    }
    fVar12 = (float10)round((float10)local_30);
    local_20 = local_1c + 0x34;
    local_1c = local_18 + 0x30;
    *(int *)(*piVar3 + local_18 + 0x2c) = (int)ROUND(fVar12);
    local_18 = (int)ROUND(fVar12);
  }
  core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
            (param_1 + 0x150,0xffffffff,0x163,0,1);
  return;
}
