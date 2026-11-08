// Name: FUN_00578650
// Address: 00578650
// Address Range: [[00578650, 00578710]]
// Convention: unknown
// Signature: void FUN_00578650(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00578650(int param_1)

{
  double dVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1018 [1004];
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  bVar5 = 0;
  switch(*(uint *)(param_1 + 0x2d0)) {
  case 0:
  case 1:
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))();
    puVar3 = (uint *)&stack0xffffffb8;
    puVar4 = &stack0xffffffa0;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    fStack_24 = fStack_54 - local_60;
    fStack_20 = fStack_50 - fStack_5c;
    fStack_1c = fStack_4c - fStack_58;
    fStack_30 = fStack_54 - local_60;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    dVar1 = (double)FUN_005bae37((double)(SQRT(fStack_28 * fStack_28 +
                                               fStack_30 * fStack_30 + fStack_2c * fStack_2c) +
                                         (float)_DAT_005ecf02));
    *(float *)(param_1 + 0x2b4) = (float)dVar1;
  }
  return;
}
