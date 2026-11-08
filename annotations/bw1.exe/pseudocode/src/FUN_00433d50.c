// Name: FUN_00433d50
// Address: 00433d50
// Address Range: [[00433d50, 00433e4b]]
// Convention: unknown
// Signature: void FUN_00433d50(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00433d50(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_1058 [1016];
  int iVar2;
  uint local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_4c;
  uint local_40;
  uint local_34;
  uint local_30 [5];
  uint local_1c;
  
  bVar1 = 0;
  FUN_00408ac0(param_1,param_1 + 0x249c);
  iVar2 = param_1 + 0x250c;
  local_58 = local_1c;
  *(uint *)((int)&stack0xffffffac + (uint)bVar1 * 0xfffffffe * 4) =
       local_30[(uint)bVar1 * 0xfffffffe + 6];
  *(uint *)(&stack0xffffffb0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       local_30[(uint)bVar1 * 0xfffffffe + (uint)bVar1 * 0xfffffffe + 7];
  FUN_00408ac0(param_1,iVar2);
  local_4c = local_40;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8);
  *(uint *)(&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((uint *)(param_1 + 0x30) != param_2) {
    *(uint *)(param_1 + 0x30) = *param_2;
    *(uint *)(param_1 + 0x34) = param_2[1];
    *(uint *)(param_1 + 0x38) = param_2[2];
  }
  FUN_004088b0(param_1);
  FUN_00408b00(param_1,&stack0xffffffa8);
  local_64 = local_70;
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff94 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff98 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((uint *)(param_1 + 0x249c) != &stack0xffffff9c) {
    *(uint *)(param_1 + 0x249c) = local_64;
    *(uint *)(param_1 + 0x24a0) = local_60;
    *(uint *)(param_1 + 0x24a4) = local_5c;
  }
  FUN_00408b00(param_1,&stack0xffffffb4);
  local_34 = local_30[2];
  *(uint *)((int)local_30 + (uint)bVar1 * -8) = local_30[(uint)bVar1 * 0xfffffffe + 3];
  local_30[(uint)bVar1 * 0xfffffffe + (uint)bVar1 * 0xfffffffe + 1] =
       local_30[(uint)bVar1 * 0xfffffffe + (uint)bVar1 * 0xfffffffe + 4];
  if ((uint *)(param_1 + 0x250c) == &local_34) {
    return;
  }
  *(uint *)(param_1 + 0x250c) = local_34;
  *(uint *)(param_1 + 0x2510) = local_30[0];
  *(uint *)(param_1 + 0x2514) = local_30[1];
  return;
}
