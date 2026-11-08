// Name: FUN_00593d20
// Address: 00593d20
// Address Range: [[00593d20, 00593d4e]]
// Convention: unknown
// Signature: undefined4 * FUN_00593d20(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint * FUN_00593d20(uint *param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  uint auStackY_17f8 [1525];
  uint local_1c;
  
  bVar2 = 0;
  FUN_00593c60(param_1,param_2);
  puVar1 = param_1 + (uint)bVar2 * -2 + 1;
  *param_1 = local_1c;
  *puVar1 = *(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  puVar1[(uint)bVar2 * -2 + 1] =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  (puVar1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4)
  ;
  return param_1;
}
