// Name: FUN_0047e1d0
// Address: 0047e1d0
// Address Range: [[0047e1d0, 0047e2a2]]
// Convention: unknown
// Signature: void FUN_0047e1d0(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e1d0(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_01c25590 == 0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = FUN_004ab560(_DAT_01c25590,0x6a);
  if (param_4 != 0) {
    iVar1 = *(int *)(_DAT_01c25590 + 0x3668);
    iVar2 = FUN_004aaf00(_DAT_01c25590,param_4);
    iVar2 = iVar2 + iVar1 * 2;
    if (param_2 < iVar2) {
      param_2 = iVar2;
    }
  }
  iVar1 = (DAT_006141b8 - param_2) / 2;
  iVar2 = (DAT_006141bc - param_3) / 2;
  FUN_0047e2b0(param_1,iVar1,iVar2,DAT_006141b8 - iVar1,DAT_006141bc - iVar2,param_4,param_5);
  return;
}
