// Name: FUN_004e2cc0
// Address: 004e2cc0
// Address Range: [[004e2cc0, 004e2d16]]
// Convention: unknown
// Signature: void FUN_004e2cc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e2cc0(int param_1)

{
  int iVar1;
  int iVar2;
  uint *unaff_ESI;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_ffc [1011];
  float fStack_1c;
  uint uStack_18;
  uint uStack_14;
  float fStack_10;
  uint uStack_c;
  
  bVar5 = 0;
  iVar1 = FUN_0044fd20(param_1 + 0x2b4);
  puVar3 = (uint *)(iVar1 + 0x338);
  puVar4 = (uint *)&stack0xffffffd4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uStack_14 = 0;
  uStack_c = uStack_18;
  fStack_10 = fStack_1c + (float)_DAT_005dc06a;
  *unaff_ESI = 0;
  unaff_ESI[(uint)bVar5 * -2 + 1] = *(uint *)((int)&stack0xfffffff0 + (uint)bVar5 * -8);
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return;
}
