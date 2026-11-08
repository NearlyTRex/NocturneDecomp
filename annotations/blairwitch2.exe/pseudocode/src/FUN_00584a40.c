// Name: FUN_00584a40
// Address: 00584a40
// Address Range: [[00584a40, 00584d6d]]
// Convention: unknown
// Signature: int FUN_00584a40(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int FUN_00584a40(int param_1)

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
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar4 = auStack_90;
  puVar5 = auStack_c0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  aiStack_20[2] = FUN_0041a840(auStack_c0);
  *(int *)(param_1 + 0x11c8) = aiStack_20[2];
  if (aiStack_20[2] != 0) {
    iVar1 = FUN_0046b960(DAT_0060b280);
    if ((iVar1 == 0) || (*(int *)(0x01CB6900 + 0x25c) != 0)) {
      FUN_0044fcc0(param_1 + 0x2b4,0,0xffffffff);
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0xa94)) {
        iVar2 = param_1 + 0xaac;
        iVar3 = param_1 + 0xc28;
        aiStack_20[3] = param_1 + 0xc40;
        iVar6 = param_1 + 0xc34;
        do {
          FUN_0046b350(DAT_0060b280,aiStack_20[3],iVar6);
          FUN_0046b350(DAT_0060b280,iVar3,0);
          FUN_0044fcc0(iVar2,0,0xffffffff);
          thunk_FUN_004e9810(DAT_0060b280);
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 0x1b4;
          thunk_FUN_004e9810(DAT_0060b280);
          iVar3 = iVar3 + 0x1b4;
          iVar2 = iVar2 + 0x1b4;
          aiStack_20[3] = aiStack_20[3] + 0x1b4;
        } while (iVar1 < *(int *)(param_1 + 0xa94));
      }
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
      puVar4 = auStack_78;
      puVar5 = auStack_a8;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      }
      FUN_0041b700(auStack_a8);
    }
  }
  FUN_00408a10(param_1);
  if ((*(int *)(param_1 + 0x11c8) != 0) && (iVar1 = FUN_0046b960(DAT_0060b280), iVar1 == 0)) {
    uStack_40 = 0x40c00000;
    uStack_28 = 0x40c00000;
    uStack_48 = 0x3f91eb85;
    uStack_44 = 0xbe27ef9e;
    uStack_30 = 0xbf91eb85;
    uStack_2c = 0xbe27ef9e;
    FUN_00408d70(param_1,&uStack_48);
    uVar10 = 0x41200000;
    uVar9 = 0x42600000;
    iVar1 = param_1 + 0x30;
    puVar8 = (byte *)&uStack_3c;
    uStack_3c = uStack_24;
    *(uint *)((int)auStack_38 + (uint)bVar7 * 0xfffffff8) =
         *(uint *)((int)aiStack_20 + (uint)bVar7 * 0xfffffff8);
    *(uint *)((int)auStack_38 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4) =
         *(uint *)((int)aiStack_20 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4);
    FUN_0044d060(puVar8,iVar1,uVar9,uVar10);
    FUN_00408d70(param_1,&uStack_30);
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
    FUN_0044d060(&uStack_3c,param_1 + 0x30,0x42600000,0x41200000);
    return aiStack_20[2];
  }
  return aiStack_20[2];
}
