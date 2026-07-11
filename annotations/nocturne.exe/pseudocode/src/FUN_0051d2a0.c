// Name: FUN_0051d2a0
// Address: 0051d2a0
// Address Range: [[0051d2a0, 0051d373]]
// Convention: unknown
// Signature: float * FUN_0051d2a0(int param_1,float *param_2,int param_3)

#include "nocturne.h"

float * FUN_0051d2a0(int param_1,float *param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_70 [12];
  uint local_40 [12];
  
  bVar5 = 0;
  if (param_3 < 0) {
    *param_2 = *(float *)(param_1 + 0x6a4);
    param_2[1] = *(float *)(param_1 + 0x6a8);
    param_2[2] = *(float *)(param_1 + 0x6ac);
    return param_2;
  }
  iVar2 = FUN_0051e0a0(param_1);
  iVar2 = *(int *)(param_3 * 0x24 + iVar2 + 0x2857c);
  pfVar1 = (float *)(param_1 + 0x58 + param_3 * 0xc);
  if (iVar2 < 0) {
    *param_2 = *pfVar1 + *(float *)(param_1 + 0x6a4);
    param_2[1] = pfVar1[1] + *(float *)(param_1 + 0x6a8);
    param_2[2] = pfVar1[2] + *(float *)(param_1 + 0x6ac);
    return param_2;
  }
  FUN_0051d0a0(param_1,iVar2);
  puVar3 = local_40;
  puVar4 = local_70;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_0055a8b0(param_2,pfVar1,local_70);
  return param_2;
}
