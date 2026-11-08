// Name: FUN_004b7ee0
// Address: 004b7ee0
// Address Range: [[004b7ee0, 004b7f87]]
// Convention: unknown
// Signature: void FUN_004b7ee0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b7ee0(int param_1)

{
  byte local_18 [20];
  
  thunk_FUN_0057a2f0();
  if ((DAT_005fba1c != 0x1e0) || (*(int *)(param_1 + 8) != 0x20)) {
    FUN_00579bb0(0x280,0x1e0,0x20);
  }
  if (*(int *)(0x01D81080 + 0x1008) == 0) {
    _DAT_01c5b0e0 = _DAT_01549aa8;
  }
  FUN_00560d70();
  FUN_0040d2e0(local_18);
  FUN_0040d460(local_18,"fangs",0x280,0x1e0);
  FUN_0040d6f0(local_18,0,0,0x8000);
  FUN_0057a8a0();
  FUN_0040d300(local_18,0);
  return;
}
