// Name: FUN_005ada60
// Address: 005ada60
// Address Range: [[005ada60, 005adb09]]
// Convention: unknown
// Signature: void FUN_005ada60(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_005ada60(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_1010 [1016];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  bVar1 = 0;
  *(uint *)(param_1 + 0x304) = 0;
  FUN_005ade40(param_1);
  if (param_2 != (uint *)0x0) {
    FUN_0045f700(param_1 + 800,param_2);
    uStack_28 = uStack_1c;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if ((uint *)(param_1 + 0x354) != &stack0xffffffd8) {
      *(uint *)(param_1 + 0x354) = uStack_28;
      *(uint *)(param_1 + 0x358) = uStack_24;
      *(uint *)(param_1 + 0x35c) = uStack_20;
    }
    if ((uint *)(param_1 + 0x348) != param_2) {
      *(uint *)(param_1 + 0x348) = *param_2;
      *(uint *)(param_1 + 0x34c) = param_2[1];
      *(uint *)(param_1 + 0x350) = param_2[2];
    }
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0xdc))(param_1,0);
  *(uint *)(param_1 + 0x570) = 0x40a00000;
  return;
}
