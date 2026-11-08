// Name: FUN_0042b450
// Address: 0042b450
// Address Range: [[0042b450, 0042b8cf]]
// Convention: unknown
// Signature: void FUN_0042b450(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0042b450(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int aiStackY_1050 [1015];
  uint *puVar4;
  char *pcVar5;
  uint local_68;
  uint local_5c;
  byte local_50 [12];
  uint local_44;
  int aiStack_40 [2];
  byte local_38 [12];
  uint local_2c;
  int aiStack_28 [4];
  int local_18;
  int local_14;
  
  bVar3 = 0;
  FUN_0040c280(param_1);
  FUN_0040b830(param_1 + 0x2538,"hitPoints");
  if (1 < 0x0000000E) {
    if (DAT_007df9b8 == 1) {
      FUN_0040b8b0(aiStack_28 + 2,"numCarryHands");
      local_14 = 0;
      if (0 < aiStack_28[2]) {
        iVar1 = param_1 + 0x25a8;
        do {
          FUN_0040b8b0(aiStack_28 + 3,"carry hand");
          FUN_0040b930(aiStack_28[3] * 0x78 + iVar1 + 8,"carry actor");
          FUN_005835d0(aiStack_28[3] * 0x78 + iVar1 + 0xc);
          *(uint *)(param_1 + 0x25e8 + aiStack_28[3] * 0x78) = 0x3f800000;
          if (0xc < 0x0000000E) {
            FUN_0040b400(local_38,"carry pos");
            FUN_0040b4a0(local_50,"carry orient");
            FUN_00583940(aiStack_28[3] * 0x78 + iVar1 + 0xc,local_38,local_50);
          }
          local_14 = local_14 + 1;
        } while (local_14 < aiStack_28[2]);
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
      FUN_0040b8b0(aiStack_28 + 4,"numCarryHands");
      iVar1 = param_1 + 0x25a8;
      local_14 = 0;
      do {
        puVar4 = &stack0xffffff98;
        if (*(int *)(param_1 + 0x25b0 + local_14 * 0x78) != 0) {
          FUN_0040b8b0(aiStack_28 + 5,"carry hand");
          FUN_0040b930(local_14 * 0x78 + iVar1 + 8,"carry actor");
          if (0xc < 0x0000000E) {
            FUN_00584450(local_14 * 0x78 + iVar1 + 0xc);
            iVar2 = local_14 * 0x78;
            local_68 = local_5c;
            *(uint *)((int)&stack0xffffff9c + (uint)bVar3 * 0xfffffffe * 4) =
                 *(uint *)(local_38 + (uint)bVar3 * -8 + -0x20);
            aiStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -8] =
                 *(int *)(local_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -0x1c);
            FUN_00583b10(iVar2 + iVar1 + 0xc);
            pcVar5 = "carry pos";
            local_44 = local_2c;
            aiStack_40[(uint)bVar3 * -2] = aiStack_28[(uint)bVar3 * -2];
            aiStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
                 aiStack_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            FUN_0040b400(puVar4,pcVar5);
            FUN_0040b4a0(&local_44,"carry orient");
          }
        }
        local_14 = local_14 + 1;
      } while (local_14 < 2);
    }
  }
  if (2 < 0x0000000E) {
    FUN_0040b680(param_1 + 0x2698,"talkToMeEvent");
  }
  if (3 < 0x0000000E) {
    FUN_0040b930(param_1 + 0x26fc,"grabbedBy");
    FUN_0040b8b0(param_1 + 0x2700,"grabbedType");
    FUN_0040bf20(param_1 + 0x2f08,"clothList");
  }
  if (4 < 0x0000000E) {
    FUN_0040b830(param_1 + 0x27b8,"sizeScale");
  }
  if (0x0000000E < 6) {
    *(uint *)(param_1 + 0x253c) = *(uint *)(param_1 + 0x2538);
  }
  else {
    FUN_0040b8b0(param_1 + 0x2540,"healthBarMode");
    FUN_0040b7a0(param_1 + 0x2544,"descriptiveName");
    FUN_0040b830(param_1 + 0x253c,"maxHitPoints");
  }
  if (6 < 0x0000000E) {
    FUN_0040b8b0(param_1 + 0x27a8,"spectralFlag");
  }
  if (7 < 0x0000000E) {
    FUN_0040b8b0(param_1 + 0x27b0,"invulnerableFlag");
  }
  if (8 < 0x0000000E) {
    FUN_0040b8b0(param_1 + 0x27a4,"etheralFlag");
  }
  if (9 < 0x0000000E) {
    FUN_0040b830(param_1 + 0x3254,"bind_time");
    FUN_0040b830(param_1 + 0x3260,"on_fire_time");
  }
  if (10 < 0x0000000E) {
    FUN_0040b8b0(param_1 + 0x3258,"bind_type");
  }
  if (0xb < 0x0000000E) {
    FUN_0040b8b0(param_1 + 0xcdc4,"additive");
  }
  if (0xc < 0x0000000E) {
    FUN_0040b930(param_1 + 0x2704,"scriptWalkDest");
    FUN_0040b830(param_1 + 0x2708,"scriptWalkDist");
    FUN_0040b830(param_1 + 0x270c,"scriptRunDist");
    FUN_0040b830(param_1 + 10000,"scriptWalkTimer");
    FUN_0040b8b0(param_1 + 0x273c,"scriptWalkState");
    FUN_0040b930(param_1 + 0x2740,"scriptDoorToOpen");
  }
  if (0xd < 0x0000000E) {
    FUN_0040b8b0(param_1 + 0x3268,"been_damaged");
    return;
  }
  return;
}
