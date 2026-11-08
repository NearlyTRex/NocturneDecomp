// Name: FUN_00420450
// Address: 00420450
// Address Range: [[00420450, 004204e7]]
// Convention: unknown
// Signature: void FUN_00420450(int param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_00420450(int param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint auStackY_1010 [1016];
  uint local_28;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  bVar1 = 0;
  if (param_2 != (uint *)0x0) {
    if ((uint *)(param_1 + 0x40) != param_2) {
      *(uint *)(param_1 + 0x40) = *param_2;
      *(uint *)(param_1 + 0x44) = param_2[1];
      *(uint *)(param_1 + 0x48) = param_2[2];
    }
    FUN_0045f700(param_1 + 0x18,param_1 + 0x40);
    local_1c = local_28;
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if ((uint *)(param_1 + 0x4c) != &stack0xffffffe4) {
      *(uint *)(param_1 + 0x4c) = local_1c;
      *(uint *)(param_1 + 0x50) = local_18;
      *(uint *)(param_1 + 0x54) = local_14;
    }
  }
  if ((param_3 != (uint *)0x0) && ((uint *)(param_1 + 0x70) != param_3)) {
    *(uint *)(param_1 + 0x70) = *param_3;
    *(uint *)(param_1 + 0x74) = param_3[1];
    *(uint *)(param_1 + 0x78) = param_3[2];
    return;
  }
  return;
}
