// Name: FUN_00570bd0
// Address: 00570bd0
// Address Range: [[00570bd0, 00570c3c]]
// Convention: unknown
// Signature: void FUN_00570bd0(int param_1)

#include "nocturne.h"

void FUN_00570bd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar3 = 0;
  if (0 < DAT_006232ec) {
    iVar2 = 0;
    iVar1 = param_1;
    do {
      fVar4 = (float10)*(double *)(param_1 + 4) - (float10)*(double *)(&DAT_02c80710 + iVar2);
      fVar5 = (float10)*(double *)(param_1 + 0xc) - (float10)*(double *)(&DAT_02c80750 + iVar2);
      fVar6 = (float10)*(double *)(param_1 + 0x14) - (float10)*(double *)(&DAT_02c80790 + iVar2);
      iVar2 = iVar2 + 8;
      iVar3 = iVar3 + 1;
      *(float *)(iVar1 + 0x70) = (float)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      iVar1 = iVar1 + 4;
    } while (iVar3 < DAT_006232ec);
  }
  return;
}
