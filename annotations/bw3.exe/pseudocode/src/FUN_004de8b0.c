// Name: FUN_004de8b0
// Address: 004de8b0
// Address Range: [[004de8b0, 004de94b]]
// Convention: unknown
// Signature: void FUN_004de8b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004de8b0(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar1 = param_1 + 0x2dc;
  *(float *)(param_1 + 0x2d8) = param_2 * _DAT_005c66a9 + *(float *)(param_1 + 0x2d8);
  FUN_0045aae0(iVar1,param_1 + 0x20);
  fVar5 = (float10)fsin((float10)*(float *)(param_1 + 0x2d8));
  fVar5 = fVar5 * (float10)_DAT_005c66ad + (float10)_DAT_005c66b5;
  FUN_005a3120();
  iVar3 = (int)ROUND(fVar5);
  *(int *)(param_1 + 0x318) = iVar3;
  iVar3 = (iVar3 + (iVar3 >> 0x1f) * -0x100) - (uint)((iVar3 >> 0x1f) << 7 < 0);
  iVar4 = iVar3 >> 0x1f;
  *(char *)(param_1 + 0x2f8) =
       (char)((int)(((iVar3 >> 8) + iVar4 * -4) - (uint)(iVar4 << 1 < 0)) >> 2);
  FUN_0045ab30(iVar1,0x3f800000);
  uVar2 = 0x01ED78C8;
  *(uint *)(param_1 + 0x2fc) = 0;
  FUN_005372f0(uVar2,iVar1);
  return;
}
