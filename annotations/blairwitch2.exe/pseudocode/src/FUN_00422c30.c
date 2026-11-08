// Name: FUN_00422c30
// Address: 00422c30
// Address Range: [[00422c30, 00422eb8]]
// Convention: unknown
// Signature: void FUN_00422c30(int param_1)

#include "nocturne.h"

void FUN_00422c30(int param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_0040c330(param_1);
  FUN_0040b8e0(param_1 + 0x25a8,"hitPoints");
  if (1 < 0x00000009) {
    if (DAT_007bc038 == 1) {
      FUN_0040b960(&local_1c,"numCarryHands");
      local_20 = 0;
      if (0 < local_1c) {
        do {
          FUN_0040b960(&local_18,"carry hand");
          FUN_0040b9e0(local_18 * 0x78 + param_1 + 0x2620,"carry actor");
          local_20 = local_20 + 1;
        } while (local_20 < local_1c);
      }
    }
    else {
      local_14 = 0;
      iVar1 = param_1;
      do {
        if (*(int *)(iVar1 + 0x2620) != 0) {
          local_14 = local_14 + 1;
        }
        iVar1 = iVar1 + 0x78;
      } while (iVar1 != param_1 + 0xf0);
      local_20 = 2;
      FUN_0040b960(&local_14,"numCarryHands");
      local_20 = 0;
      do {
        if (*(int *)(param_1 + 0x2620 + local_20 * 0x78) != 0) {
          FUN_0040b960(&local_20,"carry hand");
          FUN_0040b9e0(local_20 * 0x78 + param_1 + 0x2620,"carry actor");
        }
        local_20 = local_20 + 1;
      } while (local_20 < 2);
    }
  }
  if (2 < 0x00000009) {
    FUN_0040b730(param_1 + 0x2708,"talkToMeEvent");
  }
  if (3 < 0x00000009) {
    FUN_0040b9e0(param_1 + 0x276c,"grabbedBy");
    FUN_0040b960(param_1 + 0x2770,"grabbedType");
    FUN_0040bfd0(param_1 + 0x2d0c,"clothList");
  }
  if (4 < 0x00000009) {
    FUN_0040b8e0(param_1 + 0x2824,"sizeScale");
  }
  if (0x00000009 < 6) {
    *(uint *)(param_1 + 0x25ac) = *(uint *)(param_1 + 0x25a8);
  }
  else {
    FUN_0040b960(param_1 + 0x25b0,"healthBarMode");
    FUN_0040b850(param_1 + 0x25b4,"descriptiveName");
    FUN_0040b8e0(param_1 + 0x25ac,"maxHitPoints");
  }
  if (6 < 0x00000009) {
    FUN_0040b960(param_1 + 0x2814,"spectralFlag");
  }
  if (7 < 0x00000009) {
    FUN_0040b960(param_1 + 0x281c,"invulnerableFlag");
  }
  if (8 < 0x00000009) {
    FUN_0040b960(param_1 + 0x2810,"etheralFlag");
    return;
  }
  return;
}
