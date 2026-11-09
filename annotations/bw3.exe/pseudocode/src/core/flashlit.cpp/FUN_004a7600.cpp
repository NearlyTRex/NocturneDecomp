// Name: core_flashlit.cpp_FUN_004a7600
// Address: 004a7600
// Address Range: [[004a7600, 004a769b]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_004a7600(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flashlit_cpp_FUN_004a7600(int param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  float *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  byte auStack_23d0 [9124];
  uint auStack_2c [3];
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  float fStack_14;
  float afStack_10 [2];
  
  bVar5 = 0;
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0054bf00
            ((CDeformableModelInstance *)auStack_23d0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)(param_1 + 0x158));
  puVar3 = (uint *)&pCVar1->field_0x338;
  puVar4 = auStack_2c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_14 = fStack_20 * _DAT_005c0d03;
  afStack_10[1] = (float)uStack_18;
  afStack_10[0] = fStack_1c + (float)_DAT_005c0d07;
  core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
            ((CDeformableModelInstance *)auStack_23d0,0);
  *unaff_ESI = fStack_14;
  unaff_ESI[(uint)bVar5 * -2 + 1] = afStack_10[(uint)bVar5 * -2];
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       afStack_10[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  return;
}
