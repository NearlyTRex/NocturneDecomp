// Name: FUN_0047ed50
// Address: 0047ed50
// Address Range: [[0047ed50, 0047ee47]]
// Convention: unknown
// Signature: void FUN_0047ed50(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ed50(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (_DAT_01c5b0e0 == 0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  iVar1 = DAT_005fba18 / 2;
  if (param_2 != 0) {
    iVar3 = FUN_004b2a80(_DAT_01c5b0e0,param_2);
    if (iVar1 < iVar3) {
      iVar1 = FUN_004b2a80(_DAT_01c5b0e0,param_2);
    }
  }
  FUN_0047f3e0(param_1,iVar1,_DAT_01c5bae4 * 6,param_2,0);
  uVar2 = FUN_005806a0();
  iVar1 = (_DAT_01c5b104 + -1) * 0x1f8;
  *(uint *)(iVar1 + 0x1c5b2f4) = uVar2;
  *(uint *)(iVar1 + 0x1c5b2f8) = 0xffffffff;
  FUN_0047ee50(param_1,0,0x3f800000);
  return;
}
