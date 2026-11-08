// Name: FUN_0049a390
// Address: 0049a390
// Address Range: [[0049a390, 0049a449]]
// Convention: unknown
// Signature: void FUN_0049a390(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_0049a390(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  uint auStackY_1010 [1016];
  uint local_28;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  bVar3 = 0;
  puVar1 = param_1 + 7;
  FUN_0045aae0(puVar1,param_2);
  param_1[0x16] = 0x8000;
  *(byte *)(param_1 + 0xe) = 0x20;
  FUN_0045ab30(puVar1,0x41000000);
  uVar2 = 0x01ED78C8;
  param_1[0xf] = 0;
  FUN_005372f0(uVar2,puVar1);
  if (param_1 + 1 != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  FUN_0045b9b0(param_3);
  local_1c = local_28;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (param_1 + 4 == &stack0xffffffe4) {
    *param_1 = 2;
    return;
  }
  param_1[4] = local_1c;
  param_1[5] = local_18;
  param_1[6] = local_14;
  *param_1 = 2;
  return;
}
