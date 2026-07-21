// Name: core_charactr.cpp_CCharacter_renderAttachedModels_FUN_004265a0
// Address: 004265a0
// Address Range: [[004265a0, 00426693]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_004265a0(int param_1)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderAttachedModels_FUN_004265a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint local_8c [12];
  uint local_5c [3];
  uint local_50;
  uint local_40;
  uint local_30;
  byte local_2c [12];
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  
  bVar6 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2dec)) {
    local_14 = param_1 + 0xfd0;
    piVar2 = (int *)(param_1 + 0x2df0);
    do {
      if (*(int *)(*piVar2 * 4 + param_1 + 0x2290) != 0) {
        core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(piVar2 + 2,piVar2[1] * 0x30 + local_14);
        puVar4 = local_8c;
        puVar5 = local_5c;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        core_xform_cpp_matrixToEulerAngles_FUN_0055b180(local_5c,local_2c);
        local_20 = local_50;
        local_1c = local_40;
        local_18 = local_30;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                  (DAT_005ae704,local_2c,&local_20);
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                  (&DAT_007658e4,0,0xffffffff);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0xe;
    } while (iVar3 < *(int *)(param_1 + 0x2dec));
  }
  return;
}
