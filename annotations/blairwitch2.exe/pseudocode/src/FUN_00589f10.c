// Name: FUN_00589f10
// Address: 00589f10
// Address Range: [[00589f10, 00589fb9]]
// Convention: unknown
// Signature: void FUN_00589f10(int param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_00589f10(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_1010 [1016];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  bVar1 = 0;
  *(uint *)(param_1 + 0x460) = 0;
  FUN_0058a2f0(param_1);
  if (param_2 != (uint *)0x0) {
    FUN_004495a0(param_1 + 0x47c,param_2);
    uStack_28 = uStack_1c;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if ((uint *)(param_1 + 0x4b0) != &stack0xffffffd8) {
      *(uint *)(param_1 + 0x4b0) = uStack_28;
      *(uint *)(param_1 + 0x4b4) = uStack_24;
      *(uint *)(param_1 + 0x4b8) = uStack_20;
    }
    if ((uint *)(param_1 + 0x4a4) != param_2) {
      *(uint *)(param_1 + 0x4a4) = *param_2;
      *(uint *)(param_1 + 0x4a8) = param_2[1];
      *(uint *)(param_1 + 0x4ac) = param_2[2];
    }
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xe4))(param_1,0);
  *(uint *)(param_1 + 0x6cc) = 0x40a00000;
  return;
}
