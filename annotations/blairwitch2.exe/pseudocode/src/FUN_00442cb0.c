// Name: FUN_00442cb0
// Address: 00442cb0
// Address Range: [[00442cb0, 00442d7e]]
// Convention: unknown
// Signature: int FUN_00442cb0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00442cb0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  int extraout_EDX;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)((float)(param_2[1] - *(int *)(param_1 + 0x170)) * _DAT_005f4dd4);
  fVar4 = (float10)((float)(*param_2 - *(int *)(param_1 + 0x16c)) * _DAT_005f4dd4);
  fVar5 = (float10)((float)(param_2[2] - *(int *)(param_1 + 0x174)) * _DAT_005f4dd4);
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) * (float10)_DAT_005ce73e;
  FUN_005b7ff0();
  iVar1 = FUN_0043b1a0(0x146592c,extraout_EDX + 0x16c,extraout_ECX,(int)ROUND(fVar3));
  uVar2 = (uint)(iVar1 * 0xff) >> 0xe;
  if (0xff < uVar2) {
    return 0xffff;
  }
  return uVar2 << 8;
}
