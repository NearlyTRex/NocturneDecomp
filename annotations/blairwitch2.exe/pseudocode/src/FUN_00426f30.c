// Name: FUN_00426f30
// Address: 00426f30
// Address Range: [[00426f30, 0042705e]]
// Convention: unknown
// Signature: void FUN_00426f30(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_00426f30(int param_1)

{
  int iVar1;
  byte bVar2;
  int aiStackY_107c [1014];
  uint *puVar3;
  uint local_94;
  uint local_88;
  uint local_7c;
  uint local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_4c;
  uint local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_1c;
  int local_18;
  int *local_14;
  
  bVar2 = 0;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x3448)) {
    local_1c = param_1 + 0x1134;
    local_14 = (int *)(param_1 + 0x344c);
    do {
      if (*(int *)(param_1 + 0x23f4 + *local_14 * 4) != 0) {
        iVar1 = FUN_0040d060(0x3dcccccd);
        if (iVar1 != 0) {
          local_34 = 0;
          local_30 = 0;
          local_2c = 0xbe4ccccd;
          FUN_00591530(&stack0xffffffcc,local_14 + 2,local_14[1] * 0x30 + local_1c);
          local_4c = local_58;
          *(uint *)((int)&stack0xffffffb8 + (uint)bVar2 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xffffffac + (uint)bVar2 * 0xfffffffe * 4);
          *(uint *)(&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffffb0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          FUN_00591530(&stack0xffffffb4);
          puVar3 = &stack0xffffffc0;
          local_40 = local_94;
          *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffff70 + (uint)bVar2 * -8);
          *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffff74 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          FUN_00408d70(param_1,puVar3);
          local_28 = local_7c;
          *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffff88 + (uint)bVar2 * -8);
          *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffff8c + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          local_64 = 0x40400000;
          local_60 = 0;
          local_5c = 0;
          FUN_00408cf0(param_1,&stack0xffffff9c);
          local_88 = local_70;
          *(uint *)((int)&stack0xffffff7c + (uint)bVar2 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffff94 + (uint)bVar2 * -8);
          *(uint *)(&stack0xffffff80 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffff98 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          FUN_004c9730(0x01CB8284,&stack0xffffffd8,&stack0xffffff78,
                       *(uint *)(param_1 + 0x280c));
        }
      }
      local_14 = local_14 + 0xe;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x3448));
  }
  return;
}
