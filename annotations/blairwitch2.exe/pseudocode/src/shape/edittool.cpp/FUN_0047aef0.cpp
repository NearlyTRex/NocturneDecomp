// Name: FUN_0047aef0
// Address: 0047aef0
// Address Range: [[0047aef0, 0047afa7]]
// Convention: unknown
// Signature: undefined4 FUN_0047aef0(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0047aef0(int param_1,uint param_2)

{
  byte uVar1;
  uint uVar2;
  byte *puVar3;
  
  uVar2 = _DAT_01c25590;
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
      uVar2 = FUN_004aaf00(uVar2,param_1);
      *puVar3 = uVar1;
      return uVar2;
    }
    if (0x3ff < param_2) {
      _DAT_01d046a0 = "..\\shape\\edittool.cpp";
      _DAT_01d046a4 = 0x205;
      FUN_004e4500("CInputString::calcX - string too big for hidden text!");
    }
    FUN_005b77c0(0x1c25f88,0x2a,param_2);
    *(byte *)(param_2 + 0x1c25f88) = 0;
    uVar2 = FUN_004aaf00(_DAT_01c25590,0x1c25f88);
  }
  return uVar2;
}
