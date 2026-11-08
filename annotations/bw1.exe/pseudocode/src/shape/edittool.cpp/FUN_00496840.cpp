// Name: FUN_00496840
// Address: 00496840
// Address Range: [[00496840, 00496912]]
// Convention: unknown
// Signature: void FUN_00496840(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00496840(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_01c3eb50 == 0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = FUN_004c4510(_DAT_01c3eb50,0x6a);
  if (param_4 != 0) {
    iVar1 = *(int *)(_DAT_01c3eb50 + 0x3668);
    iVar2 = FUN_004c3ea0(_DAT_01c3eb50,param_4);
    iVar2 = iVar2 + iVar1 * 2;
    if (param_2 < iVar2) {
      param_2 = iVar2;
    }
  }
  iVar1 = (DAT_0061b498 - param_2) / 2;
  iVar2 = (DAT_0061b49c - param_3) / 2;
  FUN_00496920(param_1,iVar1,iVar2,DAT_0061b498 - iVar1,DAT_0061b49c - iVar2,param_4,param_5);
  return;
}
