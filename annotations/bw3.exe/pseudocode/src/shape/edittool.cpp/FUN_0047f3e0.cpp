// Name: FUN_0047f3e0
// Address: 0047f3e0
// Address Range: [[0047f3e0, 0047f4b2]]
// Convention: unknown
// Signature: void FUN_0047f3e0(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f3e0(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_01c5b0e0 == 0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  if (param_4 != 0) {
    iVar1 = *(int *)(_DAT_01c5b0e0 + 0x3668);
    iVar2 = FUN_004b2a80(_DAT_01c5b0e0,param_4);
    iVar2 = iVar2 + iVar1 * 2;
    if (param_2 < iVar2) {
      param_2 = iVar2;
    }
  }
  iVar1 = (DAT_005fba18 - param_2) / 2;
  iVar2 = (DAT_005fba1c - param_3) / 2;
  FUN_0047f4c0(param_1,iVar1,iVar2,DAT_005fba18 - iVar1,DAT_005fba1c - iVar2,param_4,param_5);
  return;
}
