// Name: core_grave.cpp_FUN_004e6d50
// Address: 004e6d50
// Address Range: [[004e6d50, 004e6e51]]
// Convention: unknown
// Signature: void core_grave_cpp_FUN_004e6d50(int param_1)

#include "nocturne.h"

void core_grave_cpp_FUN_004e6d50(int param_1)

{
  CKeyFramedModel *pCVar1;
  CKeyFramedModelInstance *this_ptr;
  int iVar2;
  uint *puVar3;
  uint *unaff_ESI;
  byte bVar4;
  float10 fVar5;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  int iStack_c;
  
  bVar4 = 0;
  if (*(int *)(0x01D2C900 + 0x1008) == 0) {
    fVar5 = (float10)*(float *)(param_1 + 0x2d4);
    this_ptr = (CKeyFramedModelInstance *)round();
    iStack_c = (int)ROUND(fVar5);
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(this_ptr);
    puVar3 = (uint *)(*(int *)&pCVar1->field_0x350 + iStack_c * 0x18);
    if (&uStack_24 != puVar3) {
      uStack_24 = *puVar3;
      uStack_20 = puVar3[1];
      uStack_1c = puVar3[2];
    }
    if (&uStack_18 != puVar3 + 3) {
      uStack_18 = puVar3[3];
      uStack_14 = puVar3[4];
      uStack_10 = puVar3[5];
      puVar3 = &uStack_24;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *unaff_ESI = *puVar3;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
        unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
      }
      return;
    }
  }
  else {
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                       ((CKeyFramedModelInstance *)(param_1 + 0x158));
    if (&uStack_24 != (uint *)&pCVar1->field_0x338) {
      uStack_24 = *(uint *)&pCVar1->field_0x338;
      uStack_20 = *(uint *)&pCVar1->field_0x33c;
      uStack_1c = *(uint *)&pCVar1->field_0x340;
    }
    if (&uStack_18 != (uint *)&pCVar1->field_0x344) {
      uStack_18 = *(uint *)&pCVar1->field_0x344;
      uStack_14 = *(uint *)&pCVar1->field_0x348;
      uStack_10 = *(uint *)&pCVar1->field_0x34c;
    }
  }
  puVar3 = &uStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
