// Name: FUN_0042aa00
// Address: 0042aa00
// Address Range: [[0042aa00, 0042abd8]]
// Convention: unknown
// Signature: void FUN_0042aa00(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0042aa00(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint auStackY_1058 [1015];
  uint *puVar6;
  uint local_70;
  uint local_64;
  uint local_58;
  uint local_4c;
  uint local_40;
  uint local_34;
  uint local_28;
  uint local_1c;
  
  bVar5 = 0;
  iVar1 = param_1 + 0x2b4;
  if (param_2 < 7) {
    if ((param_2 == 1) && (*(int *)(param_1 + 0x2570) != 0)) {
      uVar3 = FUN_00547890(iVar1,"?Bip01 L Foot" + 1,0);
      iVar4 = FUN_00540e80(uVar3);
      if (-1 < iVar4) {
        iVar2 = *(int *)(param_1 + 0x2b0);
        FUN_005469a0(iVar1,iVar4,0x3f800000);
        puVar6 = &stack0xffffffb4;
        local_4c = local_34;
        *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffd0 + (uint)bVar5 * -8);
        *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        (**(code **)(iVar2 + 0x2c))(param_1,puVar6);
        return;
      }
    }
  }
  else if (param_2 < 8) {
    if (*(int *)(param_1 + 0x2570) != 0) {
      uVar3 = FUN_00547890(iVar1,"Bip01 R Foot",0);
      iVar4 = FUN_00540e80(uVar3);
      if (-1 < iVar4) {
        iVar2 = *(int *)(param_1 + 0x2b0);
        FUN_005469a0(iVar1,iVar4,0x3f800000);
        puVar6 = &stack0xffffffe4;
        local_1c = local_70;
        *(uint *)((int)&stack0xffffffe8 + (uint)bVar5 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff94 + (uint)bVar5 * -8);
        *(uint *)(&stack0xffffffec + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffff98 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        (**(code **)(iVar2 + 0x2c))(param_1,puVar6);
        return;
      }
    }
  }
  else if (0x1e < param_2) {
    if (param_2 < 0x20) {
      if (*(int *)(param_1 + 0x2570) != 0) {
        uVar3 = FUN_00547890(iVar1,"Bip01 L Foot",0);
        iVar4 = FUN_00540e80(uVar3);
        if (-1 < iVar4) {
          iVar2 = *(int *)(param_1 + 0x2b0);
          FUN_005469a0(iVar1,iVar4,0x3fd9999a);
          puVar6 = &stack0xffffffa8;
          local_58 = local_40;
          *(uint *)((int)&stack0xffffffac + (uint)bVar5 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffffc4 + (uint)bVar5 * -8);
          *(uint *)(&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffc8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          (**(code **)(iVar2 + 0x2c))(param_1,puVar6);
          return;
        }
      }
    }
    else {
      if (param_2 != 0x25) {
        return;
      }
      if (*(int *)(param_1 + 0x2570) != 0) {
        uVar3 = FUN_00547890(iVar1,"Bip01 R Foot",0);
        iVar4 = FUN_00540e80(uVar3);
        if (-1 < iVar4) {
          iVar2 = *(int *)(param_1 + 0x2b0);
          FUN_005469a0(iVar1,iVar4,0x3fd9999a);
          puVar6 = &stack0xffffffd8;
          local_28 = local_64;
          *(uint *)((int)&stack0xffffffdc + (uint)bVar5 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffffa0 + (uint)bVar5 * -8);
          *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffa4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          (**(code **)(iVar2 + 0x2c))(param_1,puVar6);
          return;
        }
      }
    }
  }
  return;
}
