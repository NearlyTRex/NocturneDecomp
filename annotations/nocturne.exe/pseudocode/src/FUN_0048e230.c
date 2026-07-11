// Name: FUN_0048e230
// Address: 0048e230
// Address Range: [[0048e230, 0048e30e]]
// Convention: unknown
// Signature: void FUN_0048e230(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048e230(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  uint local_28;
  float local_24;
  uint local_20;
  float local_14;
  
  local_28 = *(uint *)(param_1 + 0x20);
  local_20 = *(uint *)(param_1 + 0x28);
  local_24 = *(float *)(param_1 + 0x154) * (float)_DAT_00581617 + *(float *)(param_1 + 0x24);
  FUN_0044cd90(param_1 + 0x160,&local_28);
  local_14 = (float)FUN_0040dda0(-*(float *)(param_1 + 0x27c),*(uint *)(param_1 + 0x27c));
  fVar3 = ((float10)local_14 + (float10)*(float *)(param_1 + 0x278)) * (float10)_DAT_0058161f;
  FUN_00563a30();
  local_14 = (float)(int)ROUND(fVar3);
  *(float *)(param_1 + 0x19c) = local_14;
  iVar1 = ((int)local_14 + ((int)local_14 >> 0x1f) * -0x100) -
          (uint)(((int)local_14 >> 0x1f) << 7 < 0);
  iVar2 = iVar1 >> 0x1f;
  *(char *)(param_1 + 0x17c) =
       (char)((int)(((iVar1 >> 8) + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
  FUN_0044cde0(param_1 + 0x160,
               *(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x1a4) * (float)_DAT_00581627);
  *(uint *)(param_1 + 0x180) = 2;
  return;
}
