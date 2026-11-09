// Name: core_rifle.cpp_FUN_0053ffb0
// Address: 0053ffb0
// Address Range: [[0053ffb0, 0054005d]]
// Convention: unknown
// Signature: void core_rifle_cpp_FUN_0053ffb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_rifle_cpp_FUN_0053ffb0(int param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  float *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  byte auStack_23d4 [9124];
  uint auStack_30 [3];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float afStack_14 [2];
  
  bVar5 = 0;
  core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_00567370
            ((CDeformableModelInstance *)auStack_23d4);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                     ((CKeyFramedModelInstance *)(param_1 + 0x158));
  puVar3 = (uint *)&pCVar1->field_0x338;
  puVar4 = auStack_30;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = _strcmp((char *)(param_1 + 0x1d0),"LITEDESLILE.kfm");
  if (iVar2 == 0) {
    afStack_14[1] = fStack_1c + (float)_DAT_005edc2f;
    afStack_14[0] = fStack_20 + (float)_DAT_005edc27;
  }
  else {
    afStack_14[0] = fStack_20;
    afStack_14[1] = fStack_1c;
  }
  fStack_18 = fStack_24 * _DAT_005edc37;
  core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
            ((CDeformableModelInstance *)auStack_23d4,0);
  *unaff_ESI = fStack_18;
  unaff_ESI[(uint)bVar5 * -2 + 1] = afStack_14[(uint)bVar5 * -2];
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       afStack_14[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  return;
}
