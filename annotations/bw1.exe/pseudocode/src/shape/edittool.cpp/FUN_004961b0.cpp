// Name: FUN_004961b0
// Address: 004961b0
// Address Range: [[004961b0, 004962a7]]
// Convention: unknown
// Signature: void FUN_004961b0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004961b0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (_DAT_01c3eb50 == 0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = FUN_004c4510(_DAT_01c3eb50,0x6a);
  iVar1 = DAT_0061b498 / 2;
  if (param_2 != 0) {
    iVar3 = FUN_004c3ea0(_DAT_01c3eb50,param_2);
    if (iVar1 < iVar3) {
      iVar1 = FUN_004c3ea0(_DAT_01c3eb50,param_2);
    }
  }
  FUN_00496840(param_1,iVar1,_DAT_01c3f53c * 6,param_2,0);
  uVar2 = FUN_005b2420();
  iVar1 = (_DAT_01c3eb5c + -1) * 0x1f8;
  *(uint *)(iVar1 + 0x1c3ed4c) = uVar2;
  *(uint *)(iVar1 + 0x1c3ed50) = 0xffffffff;
  FUN_004962b0(param_1,0,0x3f800000);
  return;
}
