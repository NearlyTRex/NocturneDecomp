// Name: FUN_004b8e40
// Address: 004b8e40
// Address Range: [[004b8e40, 004b8f0e]]
// Convention: unknown
// Signature: void FUN_004b8e40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b8e40(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  uint uStack_28;
  float local_24;
  uint uStack_20;
  float local_14;
  
  uStack_28 = *(uint *)(param_1 + 0x20);
  uStack_20 = *(uint *)(param_1 + 0x28);
  local_24 = *(float *)(param_1 + 0x15c) * (float)_DAT_005df75f + *(float *)(param_1 + 0x24);
  FUN_0045e970(param_1 + 0x168,&uStack_28);
  local_14 = (float)FUN_0040cc00(-*(float *)(param_1 + 0x284),*(uint *)(param_1 + 0x284));
  fVar3 = ((float10)local_14 + (float10)*(float *)(param_1 + 0x280)) * (float10)_DAT_005df767;
  FUN_005c03a0();
  local_14 = (float)(int)ROUND(fVar3);
  *(float *)(param_1 + 0x1a4) = local_14;
  iVar1 = ((int)local_14 + ((int)local_14 >> 0x1f) * -0x100) -
          (uint)(((int)local_14 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(param_1 + 0x184) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  FUN_0045e9c0(param_1 + 0x168,
               *(float *)(param_1 + 0x15c) * *(float *)(param_1 + 0x1ac) * (float)_DAT_005df76f);
  *(uint *)(param_1 + 0x188) = 2;
  return;
}
