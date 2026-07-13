// Name: FUN_004551f0
// Address: 004551f0
// Address Range: [[004551f0, 00455261]]
// Convention: unknown
// Signature: void FUN_004551f0(int param_1)

#include "nocturne.h"

void FUN_004551f0(int param_1)

{
  int iVar1;
  
  FUN_00454510(param_1 + 0x150);
  FUN_00409fc0(param_1);
  iVar1 = FUN_005649c0(param_1 + 0x2e0,"defaultDoorOpen");
  if (iVar1 == 0) {
    FUN_00563c90(param_1 + 0x2e0,"%sOpen",param_1);
  }
  iVar1 = FUN_005649c0(param_1 + 0x344,"defaultDoorClose");
  if (iVar1 != 0) {
    return;
  }
  FUN_00563c90(param_1 + 0x344,"%sClose",param_1);
  return;
}
