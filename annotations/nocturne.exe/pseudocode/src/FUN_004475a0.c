// Name: FUN_004475a0
// Address: 004475a0
// Address Range: [[004475a0, 0044766d]]
// Convention: unknown
// Signature: int FUN_004475a0(int param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004475a0(int param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  int extraout_EDX;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = (float)(*param_2 - *(int *)(param_1 + 0x16c)) * _DAT_0059bde4;
  fVar2 = (float)(param_2[1] - *(int *)(param_1 + 0x170)) * _DAT_0059bde4;
  fVar3 = (float)(param_2[2] - *(int *)(param_1 + 0x174)) * _DAT_0059bde4;
  fVar6 = (float10)fVar2;
  fVar7 = (float10)fVar1;
  fVar8 = (float10)fVar3;
  fVar6 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) * (float10)_DAT_0057baf3;
  FUN_00563a30(fVar1,fVar2,fVar3);
  iVar4 = FUN_0043fc80(0x140d784,extraout_EDX + 0x16c,extraout_ECX,(int)ROUND(fVar6));
  uVar5 = (uint)(iVar4 * 0xff) >> 0xe;
  if (0xff < uVar5) {
    return 0xffff;
  }
  return uVar5 << 8;
}
