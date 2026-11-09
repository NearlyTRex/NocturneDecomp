// Name: core_drip.cpp_FUN_00485b10
// Address: 00485b10
// Address Range: [[00485b10, 00485b8e]]
// Convention: unknown
// Signature: void core_drip_cpp_FUN_00485b10(int param_1)

#include "nocturne.h"

void core_drip_cpp_FUN_00485b10(int param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint auStack_24 [6];
  
  bVar5 = 0;
  if (*(int *)(param_1 + 0x2d4) == 2) {
    puVar4 = auStack_24;
    pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
                       ((CKeyFramedModelInstance *)(param_1 + 0x158));
    iVar2 = 6;
    puVar3 = *(uint **)&pCVar1->field_0x350;
  }
  else {
    uStack_34 = 0xbf000000;
    uStack_3c = 0xbf000000;
    uStack_38 = 0;
    uStack_30 = 0x3f000000;
    iVar2 = 6;
    uStack_2c = 0x3f800000;
    uStack_28 = 0x3f800000;
    puVar3 = &uStack_3c;
    puVar4 = auStack_24;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar4 = auStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar4;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
