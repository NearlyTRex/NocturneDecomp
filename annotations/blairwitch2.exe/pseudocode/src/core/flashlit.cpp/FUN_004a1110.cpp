// Name: core_flashlit.cpp_FUN_004a1110
// Address: 004a1110
// Address Range: [[004a1110, 004a11ab]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_004a1110(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flashlit_cpp_FUN_004a1110(int param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  float *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  byte auStack_22e0 [8884];
  uint auStack_2c [3];
  float fStack_20;
  float fStack_1c;
  uint uStack_18;
  float fStack_14;
  float afStack_10 [2];
  
  bVar5 = 0;
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00544cd0
            ((CDeformableModelInstance *)auStack_22e0);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)(param_1 + 0x2b4));
  puVar3 = (uint *)&pCVar1->field_0x338;
  puVar4 = auStack_2c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_14 = fStack_20 * _DAT_005d59d4;
  afStack_10[1] = (float)uStack_18;
  afStack_10[0] = fStack_1c + (float)_DAT_005d59d8;
  core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50
            ((CDeformableModelInstance *)auStack_22e0,0);
  *unaff_ESI = fStack_14;
  unaff_ESI[(uint)bVar5 * -2 + 1] = afStack_10[(uint)bVar5 * -2];
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       afStack_10[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  return;
}
