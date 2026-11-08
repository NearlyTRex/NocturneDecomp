// Name: FUN_004df1c0
// Address: 004df1c0
// Address Range: [[004df1c0, 004df25b]]
// Convention: unknown
// Signature: void FUN_004df1c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004df1c0(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar1 = param_1 + 0x438;
  *(float *)(param_1 + 0x434) = param_2 * _DAT_005dbbba + *(float *)(param_1 + 0x434);
  FUN_00448810(iVar1,param_1 + 0x20);
  fVar5 = (float10)fsin((float10)*(float *)(param_1 + 0x434));
  fVar5 = fVar5 * (float10)_DAT_005dbbbe + (float10)_DAT_005dbbc6;
  FUN_005b7ff0();
  iVar3 = (int)ROUND(fVar5);
  *(int *)(param_1 + 0x474) = iVar3;
  iVar3 = (iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0);
  iVar4 = iVar3 >> 0x1f;
  *(char *)(param_1 + 0x454) =
       (char)((int)(((iVar3 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
  FUN_00448860(iVar1,0x3f800000);
  uVar2 = 0x01E661B8;
  *(uint *)(param_1 + 0x458) = 0;
  FUN_005306b0(uVar2,iVar1);
  return;
}
