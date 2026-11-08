// Name: FUN_00477450
// Address: 00477450
// Address Range: [[00477450, 004774c1]]
// Convention: unknown
// Signature: void FUN_00477450(int param_1)

#include "nocturne.h"

void FUN_00477450(int param_1)

{
  int iVar1;
  
  FUN_004688e0(param_1 + 0x158);
  FUN_00408850(param_1);
  iVar1 = FUN_005c0f80(param_1 + 0x2e8,"defaultDoorOpen");
  if (iVar1 == 0) {
    FUN_005bfb40(param_1 + 0x2e8,"%sOpen",param_1);
  }
  iVar1 = FUN_005c0f80(param_1 + 0x34c,"defaultDoorClose");
  if (iVar1 != 0) {
    return;
  }
  FUN_005bfb40(param_1 + 0x34c,"%sClose",param_1);
  return;
}
