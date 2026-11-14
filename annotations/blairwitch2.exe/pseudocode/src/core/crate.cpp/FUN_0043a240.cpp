// Name: core_crate.cpp_FUN_0043a240
// Address: 0043a240
// Address Range: [[0043a240, 0043a27c]]
// Convention: unknown
// Signature: void core_crate_cpp_FUN_0043a240(int param_1)

#include "nocturne.h"

void core_crate_cpp_FUN_0043a240(int param_1)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  uint *unaff_ESI;
  CBoundingBox3D *pCVar3;
  float *pfVar4;
  byte bVar5;
  float afStack_20 [6];
  
  bVar5 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)(param_1 + 0x2b4));
  pCVar3 = pCVar1->frame_bounds;
  pfVar4 = afStack_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = (pCVar3->min).x;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  pfVar4 = afStack_20;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
