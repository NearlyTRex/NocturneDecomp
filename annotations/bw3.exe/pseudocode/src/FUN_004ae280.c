// Name: FUN_004ae280
// Address: 004ae280
// Address Range: [[004ae280, 004ae374]]
// Convention: unknown
// Signature: void FUN_004ae280(int param_1,int param_2)

#include "nocturne.h"

void FUN_004ae280(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint *apuStackY_1034 [1016];
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_28;
  uint *local_1c;
  uint *local_18;
  
  bVar4 = 0;
  local_1c = (uint *)(param_1 + 0x168 + param_2 * 0x34);
  FUN_004ae380(param_1,0);
  puVar3 = local_1c;
  puVar2 = local_1c + 1;
  local_4c = local_28;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (puVar2 != &stack0xffffffb4) {
    *puVar2 = local_4c;
    puVar3[2] = local_48;
    puVar3[3] = local_44;
  }
  puVar3 = local_1c + 1;
  local_18 = local_1c + 10;
  puVar2 = local_1c + 4;
  do {
    FUN_004ae380(param_1,puVar3);
    local_40 = local_34;
    *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffd0 + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (puVar2 != &stack0xffffffc0) {
      *puVar2 = local_40;
      puVar2[1] = local_3c;
      puVar2[2] = local_38;
    }
    puVar3 = puVar3 + 3;
    puVar2 = puVar2 + 3;
  } while (puVar3 != local_18);
  uVar1 = FUN_0040ce40(0,0x3f800000);
  *local_1c = uVar1;
  return;
}
