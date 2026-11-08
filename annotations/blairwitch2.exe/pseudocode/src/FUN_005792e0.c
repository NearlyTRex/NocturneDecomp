// Name: FUN_005792e0
// Address: 005792e0
// Address Range: [[005792e0, 0057935a]]
// Convention: unknown
// Signature: undefined4 FUN_005792e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint FUN_005792e0(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  uint auStackY_1808 [1521];
  uint local_2c;
  uint local_1c;
  
  bVar2 = 0;
  if (param_4 == 0) {
    uVar1 = Ordinal_19(*param_1,param_2,param_3,0);
    return uVar1;
  }
  FUN_00578ef0(param_4);
  local_1c = local_2c;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  *(uint *)
   ((int)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  uVar1 = Ordinal_20(*param_1,param_2,param_3,0,&stack0xffffffe4,0x10);
  return uVar1;
}
