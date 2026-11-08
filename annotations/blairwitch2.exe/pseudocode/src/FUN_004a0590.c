// Name: FUN_004a0590
// Address: 004a0590
// Address Range: [[004a0590, 004a065e]]
// Convention: unknown
// Signature: void FUN_004a0590(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a0590(int param_1)

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
  local_24 = *(float *)(param_1 + 0x2b8) * (float)_DAT_005d591d + *(float *)(param_1 + 0x24);
  FUN_00448810(param_1 + 0x2c4,&uStack_28);
  local_14 = (float)FUN_0040cf60(-*(float *)(param_1 + 0x3e0),*(uint *)(param_1 + 0x3e0));
  fVar3 = ((float10)local_14 + (float10)*(float *)(param_1 + 0x3dc)) * (float10)_DAT_005d5925;
  FUN_005b7ff0();
  local_14 = (float)(int)ROUND(fVar3);
  *(float *)(param_1 + 0x300) = local_14;
  iVar1 = ((int)local_14 + ((int)local_14 >> 0x1f) * -0x100) -
          (uint)(((int)local_14 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(param_1 + 0x2e0) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  FUN_00448860(param_1 + 0x2c4,
               *(float *)(param_1 + 0x2b8) * *(float *)(param_1 + 0x308) * (float)_DAT_005d592d);
  *(uint *)(param_1 + 0x2e4) = 2;
  return;
}
