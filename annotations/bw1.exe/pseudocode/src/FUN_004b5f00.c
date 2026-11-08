// Name: FUN_004b5f00
// Address: 004b5f00
// Address Range: [[004b5f00, 004b5f95]]
// Convention: unknown
// Signature: void FUN_004b5f00(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5f00(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01cadb64 + 1;
  iVar1 = _DAT_01cadb64 * 0x54;
  _DAT_01cadb64 = iVar2;
  if (0x3f < iVar2) {
    _DAT_01cadb64 = 0;
  }
  if (param_4 == 0) {
    iVar2 = FUN_005c084c();
    param_4 = FUN_00468900((iVar2 % 4) * 0x17c + 0x1c576a8);
  }
  FUN_004af0f0(iVar1 + 0x1cadb68,param_2,param_3,param_4,param_5);
  return;
}
