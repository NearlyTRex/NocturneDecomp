// Name: FUN_005790f0
// Address: 005790f0
// Address Range: [[005790f0, 00579145]]
// Convention: unknown
// Signature: undefined4 FUN_005790f0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint FUN_005790f0(uint *param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  uint auStackY_1804 [1524];
  uint *puVar3;
  uint uVar4;
  uint local_28;
  uint local_18;
  
  bVar2 = 0;
  FUN_00578ef0(param_2);
  puVar3 = &stack0xffffffd8;
  uVar4 = 0x10;
  local_28 = local_18;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(uint *)
   ((int)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  iVar1 = Ordinal_4(*param_1,puVar3,uVar4);
  if (iVar1 != 0) {
    iVar1 = Ordinal_111();
    if (iVar1 != 0x2733) {
      return 0;
    }
  }
  return 1;
}
