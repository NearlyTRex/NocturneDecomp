// Name: FUN_004244b0
// Address: 004244b0
// Address Range: [[004244b0, 004246d8]]
// Convention: unknown
// Signature: void FUN_004244b0(int param_1)

#include "nocturne.h"

void FUN_004244b0(int param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_0040d2d0(param_1);
  FUN_0040c880(param_1 + 0x2434,"hitPoints");
  if (1 < 0x00000006) {
    if (DAT_00763e88 == 1) {
      FUN_0040c900(&local_1c,"numCarryHands");
      local_20 = 0;
      if (0 < local_1c) {
        do {
          FUN_0040c900(&local_18,"carry hand");
          FUN_0040c980(local_18 * 0x44 + param_1 + 0x24ac,"carry actor");
          local_20 = local_20 + 1;
        } while (local_20 < local_1c);
      }
    }
    else {
      local_14 = 0;
      iVar1 = param_1;
      do {
        if (*(int *)(iVar1 + 0x24ac) != 0) {
          local_14 = local_14 + 1;
        }
        iVar1 = iVar1 + 0x44;
      } while (iVar1 != param_1 + 0x88);
      local_20 = 2;
      FUN_0040c900(&local_14,"numCarryHands");
      local_20 = 0;
      do {
        if (*(int *)(param_1 + 0x24ac + local_20 * 0x44) != 0) {
          FUN_0040c900(&local_20,"carry hand");
          FUN_0040c980(local_20 * 0x44 + param_1 + 0x24ac,"carry actor");
        }
        local_20 = local_20 + 1;
      } while (local_20 < 2);
    }
  }
  if (2 < 0x00000006) {
    FUN_0040c6d0(param_1 + 0x252c,"talkToMeEvent");
  }
  if (3 < 0x00000006) {
    FUN_0040c980(param_1 + 0x2590,"grabbedBy");
    FUN_0040c900(param_1 + 0x2594,"grabbedType");
    FUN_0040cf70(param_1 + 0x2a8c,"clothList");
  }
  if (4 < 0x00000006) {
    FUN_0040c880(param_1 + 0x2614,"sizeScale");
  }
  if (5 < 0x00000006) {
    FUN_0040c900(param_1 + 0x243c,"healthBarMode");
    FUN_0040c7f0(param_1 + 0x2440,"descriptiveName");
    FUN_0040c880(param_1 + 0x2438,"maxHitPoints");
    return;
  }
  *(uint *)(param_1 + 0x2438) = *(uint *)(param_1 + 0x2434);
  return;
}
