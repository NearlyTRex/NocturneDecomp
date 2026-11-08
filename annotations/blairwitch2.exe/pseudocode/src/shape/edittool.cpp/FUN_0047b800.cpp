// Name: FUN_0047b800
// Address: 0047b800
// Address Range: [[0047b800, 0047bae1]]
// Convention: unknown
// Signature: void FUN_0047b800(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047b800(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte local_108 [228];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (_DAT_01c25590 == 0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(int *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = FUN_004ab560(_DAT_01c25590,0x6a);
  iVar1 = DAT_006141bc / 0x60;
  local_18 = FUN_004852f0("Cancel");
  iVar2 = FUN_00485380(0);
  iVar2 = iVar1 * 2 + iVar2;
  iVar1 = FUN_004aaf00(_DAT_01c25590,param_1);
  local_14 = iVar1;
  iVar3 = FUN_004aaf00(_DAT_01c25590,param_2);
  if (iVar1 < iVar3) {
    local_14 = iVar3;
  }
  if (local_14 < local_18) {
    local_14 = local_18;
  }
  iVar1 = FUN_004aafb0(_DAT_01c25590,param_2);
  FUN_0047e1d0(0x01C25594,_DAT_01c25f78 * 4 + local_14,iVar1 + _DAT_01c25f7c * 2 + iVar2,param_1,0
              );
  local_1c = FUN_004852f0("Cancel");
  local_24 = ((_DAT_01c35e50 + _DAT_01c35e48) - local_1c) / 2 + 1;
  iVar4 = FUN_00485380(0);
  local_20 = (_DAT_01c35e54 - iVar4) + 1;
  FUN_00484e20(local_108);
  FUN_00484ed0(local_108,local_24,local_20,local_24 + local_1c + -1,_DAT_01c35e54,&DAT_005d1f69);
  FUN_004032b0();
  while( true ) {
    iVar4 = FUN_0058eb40();
    if (iVar4 != 0) break;
    iVar4 = FUN_00485240(local_108);
    if (iVar4 != 0) break;
    FUN_0047e870(0x01C25594);
    FUN_0047eff0(0x01C25594,1);
    FUN_00406da0(0xffff);
    FUN_004f3570(0x3f800000);
    FUN_004a8df0(_DAT_01c25590,param_2,((_DAT_01c35e48 + _DAT_01c35e50) - iVar3) / 2,
                 (((_DAT_01c35e4c + _DAT_01c35e54) - iVar1) - iVar2) / 2,param_3,0xffffffff);
    FUN_00484f20(local_108,1);
    FUN_0047f210(0x01C25594,0);
    FUN_00589560();
  }
  FUN_004032b0();
  FUN_0047e760(0x01C25594);
  FUN_00484e50(local_108,0);
  return;
}
