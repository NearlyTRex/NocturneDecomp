// Name: FUN_0046f5c0
// Address: 0046f5c0
// Address Range: [[0046f5c0, 0046f677]]
// Convention: unknown
// Signature: undefined4 FUN_0046f5c0(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0046f5c0(int param_1,uint param_2)

{
  byte uVar1;
  uint uVar2;
  byte *puVar3;
  
  uVar2 = _DAT_01bcd070;
  if ((int)param_2 < 0) {
    uVar2 = 0;
  }
  else {
    if ((int)*(uint *)(param_1 + 0x130) < (int)param_2) {
      param_2 = *(uint *)(param_1 + 0x130);
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      puVar3 = (byte *)(param_2 + param_1);
      uVar1 = *puVar3;
      *puVar3 = 0;
      uVar2 = FUN_00492da0(uVar2,param_1);
      *puVar3 = uVar1;
      return uVar2;
    }
    if (0x3ff < param_2) {
      _DAT_01cc4800 = "..\\shape\\edittool.cpp";
      _DAT_01cc4804 = 0x187;
      FUN_004c8440("CInputString::calcX - string too big for hidden text!");
    }
    FUN_00563cc0(0x1bcd9c8,0x2a,param_2);
    *(byte *)(param_2 + 0x1bcd9c8) = 0;
    uVar2 = FUN_00492da0(_DAT_01bcd070,0x1bcd9c8);
  }
  return uVar2;
}
