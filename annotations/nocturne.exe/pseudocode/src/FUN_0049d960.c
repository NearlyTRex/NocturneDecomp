// Name: FUN_0049d960
// Address: 0049d960
// Address Range: [[0049d960, 0049da04]]
// Convention: unknown
// Signature: void FUN_0049d960(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d960(int param_1)

{
  byte local_18 [20];
  
  thunk_FUN_005533a0();
  if ((DAT_005b7620 != 0x1e0) || (*(int *)(param_1 + 8) != 0x20)) {
    FUN_00552e00(0x280,0x1e0,0x20);
  }
  if (*(int *)(0x01CC9450 + 4) == 0) {
    _DAT_01bcd070 = _DAT_014b9900;
  }
  FUN_0052ee70();
  FUN_0040e320(local_18);
  FUN_0040e3c0(local_18,"fangs",0x280,0x1e0);
  FUN_0040e710(local_18,0,0,0x8000);
  FUN_00553910();
  FUN_0040e340(local_18,0);
  return;
}
