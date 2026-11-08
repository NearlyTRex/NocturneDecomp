// Name: FUN_004933e0
// Address: 004933e0
// Address Range: [[004933e0, 004934aa]]
// Convention: unknown
// Signature: undefined4 FUN_004933e0(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004933e0(int param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte local_40c [1024];
  uint local_c;
  
  uVar1 = _DAT_01c3eb50;
  if ((int)param_2 < 0) {
    uVar1 = 0;
  }
  else {
    if ((int)*(uint *)(param_1 + 0x130) < (int)param_2) {
      param_2 = *(uint *)(param_1 + 0x130);
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      pbVar2 = (byte *)(param_2 + param_1);
      local_c = (uint)*pbVar2;
      *pbVar2 = 0;
      uVar1 = FUN_004c3ea0(uVar1,param_1);
      *pbVar2 = (byte)local_c;
      return uVar1;
    }
    if (0x3ff < param_2) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0x20e;
      FUN_005030e0("CInputString::calcX - string too big for hidden text!");
    }
    FUN_005bfb70(local_40c,0x2a,param_2);
    local_40c[param_2] = 0;
    uVar1 = FUN_004c3ea0(_DAT_01c3eb50,local_40c);
  }
  return uVar1;
}
