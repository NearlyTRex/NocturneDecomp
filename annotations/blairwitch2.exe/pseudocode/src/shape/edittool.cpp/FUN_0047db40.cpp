// Name: FUN_0047db40
// Address: 0047db40
// Address Range: [[0047db40, 0047dc37]]
// Convention: unknown
// Signature: void FUN_0047db40(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047db40(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (_DAT_01c25590 == 0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = FUN_004ab560(_DAT_01c25590,0x6a);
  iVar1 = DAT_006141b8 / 2;
  if (param_2 != 0) {
    iVar3 = FUN_004aaf00(_DAT_01c25590,param_2);
    if (iVar1 < iVar3) {
      iVar1 = FUN_004aaf00(_DAT_01c25590,param_2);
    }
  }
  FUN_0047e1d0(param_1,iVar1,_DAT_01c25f7c * 6,param_2,0);
  uVar2 = FUN_0058e9e0();
  iVar1 = (_DAT_01c2559c + -1) * 0x1f8;
  *(uint *)(iVar1 + 0x1c2578c) = uVar2;
  *(uint *)(iVar1 + 0x1c25790) = 0xffffffff;
  FUN_0047dc40(param_1,0,0x3f800000);
  return;
}
