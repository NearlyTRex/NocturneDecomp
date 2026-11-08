// Name: FUN_005a8670
// Address: 005a8670
// Address Range: [[005a8670, 005a899d]]
// Convention: unknown
// Signature: int FUN_005a8670(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int FUN_005a8670(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  byte bVar7;
  uint auStackY_1048 [990];
  byte *puVar8;
  uint uVar9;
  uint uVar10;
  uint auStack_c0 [6];
  uint auStack_a8 [6];
  uint auStack_90 [6];
  uint auStack_78 [6];
  uint uStack_60;
  uint auStack_5c [5];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint auStack_38 [2];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  int aiStack_20 [4];
  
  bVar7 = 0;
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar4 = auStack_90;
  puVar5 = auStack_c0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  aiStack_20[2] = FUN_004207b0(auStack_c0);
  *(int *)(param_1 + 0x106c) = aiStack_20[2];
  if (aiStack_20[2] != 0) {
    iVar1 = FUN_00483e60(DAT_00612560);
    if ((iVar1 == 0) || (*(int *)(0x01CCF390 + 0x25c) != 0)) {
      FUN_004688a0(param_1 + 0x158,0,0xffffffff);
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x938)) {
        iVar2 = param_1 + 0x950;
        iVar3 = param_1 + 0xacc;
        aiStack_20[3] = param_1 + 0xae4;
        iVar6 = param_1 + 0xad8;
        do {
          FUN_00483850(DAT_00612560,aiStack_20[3],iVar6);
          FUN_00483850(DAT_00612560,iVar3,0);
          FUN_004688a0(iVar2,0,0xffffffff);
          thunk_FUN_005084b0(DAT_00612560);
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 0x1b4;
          thunk_FUN_005084b0(DAT_00612560);
          iVar3 = iVar3 + 0x1b4;
          iVar2 = iVar2 + 0x1b4;
          aiStack_20[3] = aiStack_20[3] + 0x1b4;
        } while (iVar1 < *(int *)(param_1 + 0x938));
      }
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
      puVar4 = auStack_78;
      puVar5 = auStack_a8;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      }
      FUN_00421670(auStack_a8);
    }
  }
  FUN_004087f0(param_1);
  if ((*(int *)(param_1 + 0x106c) != 0) && (iVar1 = FUN_00483e60(DAT_00612560), iVar1 == 0)) {
    uStack_40 = 0x40c00000;
    uStack_28 = 0x40c00000;
    uStack_48 = 0x3f91eb85;
    uStack_44 = 0xbe27ef9e;
    uStack_30 = 0xbf91eb85;
    uStack_2c = 0xbe27ef9e;
    FUN_00408b40(param_1,&uStack_48);
    uVar10 = 0x41200000;
    uVar9 = 0x42600000;
    iVar1 = param_1 + 0x30;
    puVar8 = (byte *)&uStack_3c;
    uStack_3c = uStack_24;
    *(uint *)((int)auStack_38 + (uint)bVar7 * 0xfffffff8) =
         *(uint *)((int)aiStack_20 + (uint)bVar7 * 0xfffffff8);
    *(uint *)((int)auStack_38 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4) =
         *(uint *)((int)aiStack_20 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4);
    FUN_00465890(puVar8,iVar1,uVar9,uVar10);
    FUN_00408b40(param_1,&uStack_30);
    uStack_60 = auStack_5c[2];
    *(uint *)((int)auStack_5c + (uint)bVar7 * 0xfffffff8) =
         auStack_5c[(uint)bVar7 * 0xfffffffe + 3];
    *(uint *)((int)auStack_38 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + -8) * 4) =
         auStack_5c[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 4];
    if (&uStack_3c != &uStack_60) {
      uStack_3c = uStack_60;
      auStack_38[0] = auStack_5c[0];
      auStack_38[1] = auStack_5c[1];
    }
    FUN_00465890(&uStack_3c,param_1 + 0x30,0x42600000,0x41200000);
    return aiStack_20[2];
  }
  return aiStack_20[2];
}
