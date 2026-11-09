// Name: core_tvbat.cpp_FUN_00576070
// Address: 00576070
// Address Range: [[00576070, 005760cd]]
// Convention: unknown
// Signature: void core_tvbat_cpp_FUN_00576070(int param_1)

#include "nocturne.h"

void core_tvbat_cpp_FUN_00576070(int param_1)

{
  CKeyFramedModelInstance *this_ptr;
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  uint auStack_24 [6];
  int iStack_c;
  
  bVar5 = 0;
  fVar6 = (float10)*(float *)(param_1 + 0xd054);
  this_ptr = (CKeyFramedModelInstance *)round();
  iStack_c = (int)ROUND(fVar6);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(this_ptr);
  puVar3 = (uint *)(*(int *)&pCVar1->field_0x350 + iStack_c * 0x18);
  puVar4 = auStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = auStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
