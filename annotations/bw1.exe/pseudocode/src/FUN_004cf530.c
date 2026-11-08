// Name: FUN_004cf530
// Address: 004cf530
// Address Range: [[004cf530, 004cf5d7]]
// Convention: unknown
// Signature: void FUN_004cf530(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cf530(int param_1)

{
  byte local_18 [20];
  
  thunk_FUN_005aca40();
  if ((DAT_0061b49c != 0x1e0) || (*(int *)(param_1 + 8) != 0x20)) {
    FUN_005ac300(0x280,0x1e0,0x20);
  }
  if (*(int *)(0x01D2C900 + 0x1008) == 0) {
    _DAT_01c3eb50 = _DAT_0152d244;
  }
  FUN_0057dc40();
  FUN_0040d0a0(local_18);
  FUN_0040d220(local_18,"fangs",0x280,0x1e0);
  FUN_0040d4b0(local_18,0,0,0x8000);
  FUN_005acff0();
  FUN_0040d0c0(local_18,0);
  return;
}
