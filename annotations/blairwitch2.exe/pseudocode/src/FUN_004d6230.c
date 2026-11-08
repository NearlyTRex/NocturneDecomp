// Name: FUN_004d6230
// Address: 004d6230
// Address Range: [[004d6230, 004d634a]]
// Convention: unknown
// Signature: void FUN_004d6230(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_004d6230(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int aiStackY_1030 [999];
  uint *puVar5;
  uint local_84;
  uint local_80;
  uint local_58;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_3c;
  uint local_30;
  uint local_24;
  int local_18;
  uint local_14;
  
  bVar4 = 0;
  FUN_00546a90(param_1 + 0x2b4,param_2);
  puVar5 = &stack0xffffffb8;
  local_48 = local_3c;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  FUN_00408d70(param_1,puVar5);
  local_30 = local_24;
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar4 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8);
  *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  local_18 = 0;
  iVar3 = 0;
  iVar2 = 0;
  do {
    while( true ) {
      if (*(int *)(0x01E661B8 + 0x14f0a8) <= iVar3) {
        if (local_18 == 0) {
          return;
        }
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"icepick-punch?.wav");
        return;
      }
      iVar1 = *(int *)(iVar2 + 0x14f0ac + 0x01E661B8);
      if (iVar1 != param_1) break;
LAB_004d62a7:
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    FUN_004222d0(&stack0xffffff7c);
    local_80 = FUN_0040cf60(0x42b40000,0x43020000);
    local_58 = 0x3f000000;
    local_84 = 0xffffffff;
    local_50 = param_1;
    local_4c = param_1;
    local_14 = local_80;
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x108))
                      (iVar1,&stack0xffffffd0,0x3f800000,&stack0xffffff7c);
    if (iVar1 == 0) goto LAB_004d62a7;
    local_18 = 1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}
