// Name: FUN_004af960
// Address: 004af960
// Address Range: [[004af960, 004afa1f]]
// Convention: unknown
// Signature: void FUN_004af960(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004af960(int param_1)

{
  float *unaff_ESI;
  byte bVar1;
  float afStackY_1048 [1016];
  uint uVar2;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  bVar1 = 0;
  FUN_005469a0(param_1 + 0x2b4,_DAT_01cb06bc);
  local_30 = local_48;
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar1 * -8);
  uVar2 = _DAT_01cb06b8;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  FUN_005469a0(param_1 + 0x2b4,uVar2);
  local_60 = local_3c;
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  local_54 = local_60 + local_30;
  local_50 = local_5c + local_2c;
  local_4c = local_58 + local_28;
  local_24 = local_60 + local_30;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffb0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)((int)&stack0xffffffb4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  local_18 = local_24 * _DAT_005d7033;
  local_14 = local_20 * _DAT_005d7033;
  local_10 = local_1c * _DAT_005d7033;
  *unaff_ESI = local_24 * _DAT_005d7033;
  unaff_ESI[(uint)bVar1 * -2 + 1] = *(float *)((int)&stack0xffffffec + (uint)bVar1 * -8);
  (unaff_ESI + (uint)bVar1 * -2 + 1)[(uint)bVar1 * -2 + 1] =
       *(float *)((int)&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  return;
}
