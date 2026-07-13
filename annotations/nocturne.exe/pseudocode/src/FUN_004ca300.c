// Name: FUN_004ca300
// Address: 004ca300
// Address Range: [[004ca300, 004ca404]]
// Convention: unknown
// Signature: void FUN_004ca300(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ca300(int param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  
  FUN_0040ab10(param_1,param_2);
  iVar4 = 0;
  pfVar2 = (float *)(param_1 + 0x1354);
  do {
    if ((pfVar2[2] - param_2[0xd]) * (pfVar2[2] - param_2[0xd]) +
        (pfVar2[1] - param_2[0xc]) * (pfVar2[1] - param_2[0xc]) +
        (*pfVar2 - param_2[0xb]) * (*pfVar2 - param_2[0xb]) < 1.0) {
      param_2[0x14] = 1.0;
      return;
    }
    iVar4 = iVar4 + 1;
    pfVar2 = pfVar2 + 0x18;
  } while (iVar4 < 2);
  if (param_2[2] == 2.8026e-45) {
    iVar4 = 0;
    pfVar2 = (float *)(param_1 + 0xabc);
    do {
      pfVar3 = (float *)(iVar4 * 0xb8 + param_1 + 0xa98);
      if ((pfVar2[2] - param_2[0xd]) * (pfVar2[2] - param_2[0xd]) +
          (pfVar2[1] - param_2[0xc]) * (pfVar2[1] - param_2[0xc]) +
          (*pfVar2 - param_2[0xb]) * (*pfVar2 - param_2[0xb]) < (float)_DAT_00587f5a) {
        fVar1 = (float)_DAT_00587f52;
        pfVar3[6] = (float)(int)param_2[3] * *param_2 * *pfVar3 * fVar1 + pfVar3[6];
        pfVar3[7] = (float)(int)param_2[4] * *param_2 * pfVar3[1] * fVar1 + pfVar3[7];
        pfVar3[8] = (float)(int)param_2[5] * *param_2 * pfVar3[2] * fVar1 + pfVar3[8];
      }
      iVar4 = iVar4 + 1;
      pfVar2 = pfVar2 + 0x2e;
    } while (iVar4 < 0xc);
  }
  return;
}
