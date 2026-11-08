// Name: FUN_00423fb0
// Address: 00423fb0
// Address Range: [[00423fb0, 004240ff]]
// Convention: unknown
// Signature: void FUN_00423fb0(int param_1,float *param_2)

#include "nocturne.h"

void FUN_00423fb0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  fVar1 = *param_2 - *(float *)(param_1 + 0x20);
  fVar2 = param_2[1] - *(float *)(param_1 + 0x24);
  fVar3 = param_2[2] - *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x20) = *param_2;
  *(float *)(param_1 + 0x24) = param_2[1];
  *(float *)(param_1 + 0x28) = param_2[2];
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0xd058)) {
    pfVar4 = (float *)(param_1 + 0xd064);
    do {
      iVar7 = iVar7 + 1;
      *pfVar4 = *pfVar4 - fVar1;
      pfVar4[1] = pfVar4[1] - fVar2;
      pfVar4[2] = pfVar4[2] - fVar3;
      pfVar4[6] = pfVar4[6] - fVar1;
      pfVar4[7] = pfVar4[7] - fVar2;
      pfVar4[8] = pfVar4[8] - fVar3;
      pfVar4 = pfVar4 + 0x10;
    } while (iVar7 < *(int *)(param_1 + 0xd058));
  }
  *(float *)(param_1 + 0x1be68) = *(float *)(param_1 + 0x1be68) - fVar1;
  *(float *)(param_1 + 0x1be6c) = *(float *)(param_1 + 0x1be6c) - fVar2;
  *(float *)(param_1 + 0x1be70) = *(float *)(param_1 + 0x1be70) - fVar3;
  iVar8 = 0;
  *(float *)(param_1 + 0x1be74) = *(float *)(param_1 + 0x1be74) - fVar1;
  *(float *)(param_1 + 0x1be78) = *(float *)(param_1 + 0x1be78) - fVar2;
  *(float *)(param_1 + 0x1be7c) = *(float *)(param_1 + 0x1be7c) - fVar3;
  iVar7 = param_1;
  do {
    iVar7 = iVar7 + 0x30;
    iVar5 = iVar8 * 0x30 + param_1;
    do {
      iVar6 = iVar5 + 4;
      *(float *)(iVar5 + 0x135dc) = *(float *)(iVar5 + 0x135dc) - fVar2;
      iVar5 = iVar6;
    } while (iVar6 != iVar7);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xc);
  return;
}
