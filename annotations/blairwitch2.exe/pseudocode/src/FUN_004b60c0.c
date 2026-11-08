// Name: FUN_004b60c0
// Address: 004b60c0
// Address Range: [[004b60c0, 004b6167]]
// Convention: unknown
// Signature: void FUN_004b60c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b60c0(int param_1)

{
  byte local_18 [20];
  
  thunk_FUN_00588ff0();
  if ((DAT_006141bc != 0x1e0) || (*(int *)(param_1 + 8) != 0x20)) {
    FUN_00588a50(0x280,0x1e0,0x20);
  }
  if (*(int *)(0x01D182F0 + 0x1008) == 0) {
    _DAT_01c25590 = _DAT_01511cc0;
  }
  FUN_0055b1f0();
  FUN_0040d420(local_18);
  FUN_0040d5a0(local_18,"test_logo",0x280,0x1e0);
  FUN_0040d900(local_18,0,0,0x8000);
  FUN_00589560();
  FUN_0040d440(local_18,0);
  return;
}
