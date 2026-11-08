// Name: FUN_0042c7f0
// Address: 0042c7f0
// Address Range: [[0042c7f0, 0042cbda]]
// Convention: unknown
// Signature: void FUN_0042c7f0(int param_1)

#include "nocturne.h"

void FUN_0042c7f0(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint auStackY_1050 [1015];
  uint *puVar4;
  char *pcVar5;
  uint local_68;
  uint local_5c;
  byte local_50 [12];
  byte local_44 [12];
  uint local_38;
  uint auStack_34 [5];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar3 = 0;
  FUN_0040c040(param_1);
  FUN_0040b5f0(param_1 + 0x2538,"hitPoints");
  if (1 < 0x0000000B) {
    if (DAT_007c3038 == 1) {
      FUN_0040b670(auStack_34 + 5,"numCarryHands");
      local_14 = 0;
      if (0 < local_20) {
        iVar1 = param_1 + 0x25a8;
        do {
          FUN_0040b670(auStack_34 + 6,"carry hand");
          FUN_0040b6f0(local_1c * 0x78 + iVar1 + 8,"carry actor");
          FUN_005b53f0(local_1c * 0x78 + iVar1 + 0xc);
          iVar2 = 0x0000000B;
          *(uint *)(param_1 + 0x25e8 + local_1c * 0x78) = 0x3f800000;
          if (10 < iVar2) {
            FUN_0040b1c0(local_50,"carry pos");
            FUN_0040b260(local_44,"carry orient");
            FUN_005b5760(local_1c * 0x78 + iVar1 + 0xc,local_50,local_44);
          }
          local_14 = local_14 + 1;
        } while (local_14 < local_20);
      }
    }
    else {
      local_18 = 0;
      iVar1 = param_1;
      do {
        if (*(int *)(iVar1 + 0x25b0) != 0) {
          local_18 = local_18 + 1;
        }
        iVar1 = iVar1 + 0x78;
      } while (iVar1 != param_1 + 0xf0);
      local_14 = 2;
      FUN_0040b670(auStack_34 + 7,"numCarryHands");
      iVar1 = param_1 + 0x25a8;
      local_14 = 0;
      do {
        if (*(int *)(param_1 + 0x25b0 + local_14 * 0x78) != 0) {
          FUN_0040b670(auStack_34 + 8,"carry hand");
          FUN_0040b6f0(local_14 * 0x78 + iVar1 + 8,"carry actor");
          FUN_005b6270(local_14 * 0x78 + iVar1 + 0xc);
          iVar2 = local_14 * 0x78;
          auStack_34[2] = local_68;
          auStack_34[(uint)bVar3 * -2 + 3] = *(uint *)(&stack0xffffff9c + (uint)bVar3 * -8);
          auStack_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
               *(uint *)(&stack0xffffffa0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          FUN_005b5930(iVar2 + iVar1 + 0xc);
          pcVar5 = "carry pos";
          puVar4 = auStack_34 + 2;
          local_38 = local_5c;
          auStack_34[(uint)bVar3 * -2] = *(uint *)(&stack0xffffffa8 + (uint)bVar3 * -8);
          auStack_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(uint *)(&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          FUN_0040b1c0(puVar4,pcVar5);
          FUN_0040b260(&local_38,"carry orient");
        }
        local_14 = local_14 + 1;
      } while (local_14 < 2);
    }
  }
  if (2 < 0x0000000B) {
    FUN_0040b440(param_1 + 0x2698,"talkToMeEvent");
  }
  if (3 < 0x0000000B) {
    FUN_0040b6f0(param_1 + 0x26fc,"grabbedBy");
    FUN_0040b670(param_1 + 0x2700,"grabbedType");
    FUN_0040bce0(param_1 + 0x2ca0,"clothList");
  }
  if (4 < 0x0000000B) {
    FUN_0040b5f0(param_1 + 0x27b8,"sizeScale");
  }
  if (0x0000000B < 6) {
    *(uint *)(param_1 + 0x253c) = *(uint *)(param_1 + 0x2538);
  }
  else {
    FUN_0040b670(param_1 + 0x2540,"healthBarMode");
    FUN_0040b560(param_1 + 0x2544,"descriptiveName");
    FUN_0040b5f0(param_1 + 0x253c,"maxHitPoints");
  }
  if (6 < 0x0000000B) {
    FUN_0040b670(param_1 + 0x27a8,"spectralFlag");
  }
  if (7 < 0x0000000B) {
    FUN_0040b670(param_1 + 0x27b0,"invulnerableFlag");
  }
  if (8 < 0x0000000B) {
    FUN_0040b670(param_1 + 0x27a4,"etheralFlag");
  }
  if (9 < 0x0000000B) {
    FUN_0040b6f0(param_1 + 0x2704,"scriptWalkDest");
    FUN_0040b5f0(param_1 + 0x2708,"scriptWalkDist");
    FUN_0040b5f0(param_1 + 0x270c,"scriptRunDist");
    FUN_0040b5f0(param_1 + 10000,"scriptWalkTimer");
    FUN_0040b670(param_1 + 0x273c,"scriptWalkState");
    FUN_0040b6f0(param_1 + 0x2740,"scriptDoorToOpen");
    return;
  }
  return;
}
