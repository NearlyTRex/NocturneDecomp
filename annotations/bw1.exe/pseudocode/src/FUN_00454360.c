// Name: FUN_00454360
// Address: 00454360
// Address Range: [[00454360, 0045442e]]
// Convention: unknown
// Signature: int FUN_00454360(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00454360(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  int extraout_EDX;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)((float)(param_2[1] - *(int *)(param_1 + 0x170)) * _DAT_005fe604);
  fVar4 = (float10)((float)(*param_2 - *(int *)(param_1 + 0x16c)) * _DAT_005fe604);
  fVar5 = (float10)((float)(param_2[2] - *(int *)(param_1 + 0x174)) * _DAT_005fe604);
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) * (float10)_DAT_005d7a07;
  FUN_005c03a0();
  iVar1 = FUN_0044c840(0x1480e2c,extraout_EDX + 0x16c,extraout_ECX,(int)ROUND(fVar3));
  uVar2 = (uint)(iVar1 * 0xff) >> 0xe;
  if (0xff < uVar2) {
    return 0xffff;
  }
  return uVar2 << 8;
}
