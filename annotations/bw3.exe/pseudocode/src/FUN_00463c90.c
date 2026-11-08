// Name: FUN_00463c90
// Address: 00463c90
// Address Range: [[00463c90, 00463d01]]
// Convention: unknown
// Signature: void FUN_00463c90(int param_1)

#include "nocturne.h"

void FUN_00463c90(int param_1)

{
  int iVar1;
  
  FUN_00462580(param_1 + 0x158);
  FUN_00408890(param_1);
  iVar1 = FUN_005a3d00(param_1 + 0x2e8,"defaultDoorOpen");
  if (iVar1 == 0) {
    FUN_005a28c0(param_1 + 0x2e8,"%sOpen",param_1);
  }
  iVar1 = FUN_005a3d00(param_1 + 0x34c,"defaultDoorClose");
  if (iVar1 != 0) {
    return;
  }
  FUN_005a28c0(param_1 + 0x34c,"%sClose",param_1);
  return;
}
