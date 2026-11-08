// Name: FUN_004fa7f0
// Address: 004fa7f0
// Address Range: [[004fa7f0, 004fa89c]]
// Convention: unknown
// Signature: undefined8 FUN_004fa7f0(int param_1,float *param_2)

#include "nocturne.h"

ulonglong FUN_004fa7f0(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float local_14;
  
  pfVar3 = (float *)0x7149f2ca;
  iVar4 = 0;
  iVar2 = 0;
  local_14 = 1e+30;
  if (0 < *(int *)(param_1 + 0x54)) {
    pfVar3 = (float *)(*(int *)(param_1 + 0x58) + 4);
    do {
      fVar1 = (param_2[2] - pfVar3[2]) * (param_2[2] - pfVar3[2]) +
              (*param_2 - *pfVar3) * (*param_2 - *pfVar3) +
              (param_2[1] - pfVar3[1]) * (param_2[1] - pfVar3[1]);
      if (fVar1 < local_14) {
        iVar4 = iVar2;
        local_14 = fVar1;
      }
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x54));
  }
  return CONCAT44(pfVar3,iVar4);
}
