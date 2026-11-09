// Name: core_trigger.cpp_FUN_0056eed0
// Address: 0056eed0
// Address Range: [[0056eed0, 0056ef90]]
// Convention: unknown
// Signature: void core_trigger_cpp_FUN_0056eed0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_trigger_cpp_FUN_0056eed0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  double dVar5;
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
  
  bVar4 = 0;
  switch(*(uint *)(param_1 + 0x174)) {
  case 0:
  case 1:
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))();
    puVar2 = (uint *)&stack0xffffffb8;
    puVar3 = &stack0xffffffa0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    fStack_24 = fStack_54 - local_60;
    fStack_20 = fStack_50 - fStack_5c;
    fStack_1c = fStack_4c - fStack_58;
    fStack_30 = fStack_54 - local_60;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    dVar5 = ceil
                      ((double)(SQRT(fStack_28 * fStack_28 +
                                     fStack_30 * fStack_30 + fStack_2c * fStack_2c) +
                               (float)_DAT_005d678b));
    *(float *)(param_1 + 0x158) = (float)dVar5;
  }
  return;
}
