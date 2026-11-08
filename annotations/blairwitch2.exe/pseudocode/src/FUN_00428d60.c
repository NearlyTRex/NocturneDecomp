// Name: FUN_00428d60
// Address: 00428d60
// Address Range: [[00428d60, 00428df0]]
// Convention: unknown
// Signature: void FUN_00428d60(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00428d60(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1014 [1015];
  uint local_2c;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  bVar3 = 0;
  iVar1 = param_1 + 0x2618 + param_2 * 0x78;
  if (*(int *)(iVar1 + 8) != 0) {
    puVar2 = (uint *)0x0;
    if (param_3 != 0) {
      FUN_00408cf0(param_1,param_3);
      local_20 = local_2c;
      (&stack0xffffffe4)[(uint)bVar3 * 0xfffffffe] =
           *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (&stack0xffffffec != &stack0xffffffe0) {
        local_14 = local_20;
        local_10 = local_1c;
        local_c = local_18;
      }
      puVar2 = &stack0xffffffec;
    }
    (**(code **)(*(int *)(*(int *)(iVar1 + 8) + 0x2b0) + 0x94))(*(int *)(iVar1 + 8),puVar2);
    *(uint *)(iVar1 + 8) = 0;
  }
  return;
}
