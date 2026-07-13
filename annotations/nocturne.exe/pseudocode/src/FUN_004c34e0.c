// Name: FUN_004c34e0
// Address: 004c34e0
// Address Range: [[004c34e0, 004c3583]]
// Convention: unknown
// Signature: void FUN_004c34e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c34e0(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar1 = param_1 + 0x2d4;
  *(float *)(param_1 + 0x2d0) = param_2 * (float)_DAT_0058758c + *(float *)(param_1 + 0x2d0);
  FUN_0044cd90(iVar1,param_1 + 0x20);
  fVar5 = (float10)fsin((float10)*(float *)(param_1 + 0x2d0));
  fVar5 = fVar5 * (float10)_DAT_00587594 + (float10)_DAT_0058759c;
  FUN_00563a30();
  iVar3 = (int)ROUND(fVar5);
  *(int *)(param_1 + 0x310) = iVar3;
  iVar3 = (iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0);
  iVar4 = iVar3 >> 0x1f;
  *(char *)(param_1 + 0x2f0) =
       (char)((int)(((iVar3 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
  FUN_0044cde0(iVar1,0x3f800000);
  uVar2 = 0x01E57284;
  *(uint *)(param_1 + 0x2f4) = 0;
  FUN_0050a9f0(uVar2,iVar1);
  return;
}
