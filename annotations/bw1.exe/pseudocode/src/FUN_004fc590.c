// Name: FUN_004fc590
// Address: 004fc590
// Address Range: [[004fc590, 004fc62b]]
// Convention: unknown
// Signature: void FUN_004fc590(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc590(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar1 = param_1 + 0x2dc;
  *(float *)(param_1 + 0x2d8) = param_2 * _DAT_005e69c7 + *(float *)(param_1 + 0x2d8);
  FUN_0045e970(iVar1,param_1 + 0x20);
  fVar5 = (float10)fsin((float10)*(float *)(param_1 + 0x2d8));
  fVar5 = fVar5 * (float10)_DAT_005e69cb + (float10)_DAT_005e69d3;
  FUN_005c03a0();
  iVar3 = (int)ROUND(fVar5);
  *(int *)(param_1 + 0x318) = iVar3;
  iVar3 = (iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0);
  iVar4 = iVar3 >> 0x1f;
  *(char *)(param_1 + 0x2f8) =
       (char)((int)(((iVar3 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
  FUN_0045e9c0(iVar1,0x3f800000);
  uVar2 = 0x01E82168;
  *(uint *)(param_1 + 0x2fc) = 0;
  FUN_00551960(uVar2,iVar1);
  return;
}
