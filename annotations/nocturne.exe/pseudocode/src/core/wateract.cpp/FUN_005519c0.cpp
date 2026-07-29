// Name: core_wateract.cpp_FUN_005519c0
// Address: 005519c0
// Address Range: [[005519c0, 00551a6b]]
// Convention: unknown
// Signature: void core_wateract_cpp_FUN_005519c0(int param_1)

#include "nocturne.h"

void core_wateract_cpp_FUN_005519c0(int param_1)

{
  CVector3f *pCVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  int iVar4;
  CVector3f local_30;
  CVector3f local_24;
  CMatrix3x3f *local_18;
  int local_14;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x290)) {
    local_14 = param_1 + 0x294;
    local_18 = (CMatrix3x3f *)(param_1 + 0x3c);
    pfVar2 = (float *)(param_1 + 0x2a0);
    do {
      local_30.x = *pfVar2 - *(float *)(param_1 + 0x20);
      pCVar3 = (CVector3f *)(iVar4 * 0x20 + local_14);
      local_30.y = pfVar2[1] - *(float *)(param_1 + 0x24);
      local_30.z = pfVar2[2] - *(float *)(param_1 + 0x28);
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                         (local_18,&local_24,&local_30);
      if (pCVar3 != pCVar1) {
        pCVar3->x = pCVar1->x;
        pCVar3->y = pCVar1->y;
        pCVar3->z = pCVar1->z;
      }
      iVar4 = iVar4 + 1;
      pfVar2 = pfVar2 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x290));
  }
  return;
}
