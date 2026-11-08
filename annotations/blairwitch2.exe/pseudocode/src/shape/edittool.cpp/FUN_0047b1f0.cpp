// Name: FUN_0047b1f0
// Address: 0047b1f0
// Address Range: [[0047b1f0, 0047b652]]
// Convention: unknown
// Signature: undefined4 FUN_0047b1f0(undefined4 param_1,char *param_2,undefined4 param_3,byte param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0047b1f0(uint param_1,char *param_2,uint param_3,byte param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char local_320 [320];
  byte local_1e0 [228];
  byte local_fc [228];
  int local_18;
  uint local_14;
  
  if (_DAT_01c25590 == 0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = FUN_004ab560(_DAT_01c25590,0x6a);
  FUN_004032b0();
  pcVar7 = param_2;
  if ((param_4 & 1) == 0) {
    pcVar7 = (char *)0x0;
  }
  FUN_0047a9d0(local_320,pcVar7,param_3,param_5);
  iVar2 = (int)((DAT_006141b8 + (DAT_006141b8 >> 0x1f) * -0x80) -
               (uint)((DAT_006141b8 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = DAT_006141bc / 0x60;
  iVar4 = FUN_00485380(0);
  FUN_0047e1d0(0x01C25594,(DAT_006141b8 << 2) / 5,iVar4 + iVar3 * 2 + _DAT_01c25f7c,param_1,0);
  iVar3 = FUN_004852f0("Cancel");
  iVar4 = ((_DAT_01c35e48 + _DAT_01c35e50) - iVar2) / 2 - iVar3;
  iVar2 = (_DAT_01c35e48 + _DAT_01c35e50 + iVar2) / 2;
  iVar5 = FUN_00485380(0);
  local_18 = (_DAT_01c35e54 - iVar5) + 1;
  FUN_00484e20(local_fc);
  FUN_00484e20(local_1e0);
  FUN_00484ed0(local_fc,iVar4 + 1,local_18,iVar4 + iVar3,_DAT_01c35e54,&DAT_005d1f51);
  FUN_00484ed0(local_1e0,iVar2,local_18,iVar3 + iVar2 + -1,_DAT_01c35e54,"Cancel");
  local_14 = DAT_006141cc;
  DAT_006141cc = 0x7f;
  iVar2 = 0;
LAB_0047b3b6:
  FUN_0047e870(0x01C25594);
  FUN_0047eff0(0x01C25594,1);
  FUN_0047afb0(local_320,_DAT_01c35e48,_DAT_01c35e4c);
  FUN_00484f20(local_fc,iVar2 == 0);
  FUN_00484f20(local_1e0,iVar2 == 1);
  FUN_0047f210(0x01C25594,0);
  FUN_00589560();
  iVar3 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a);
  if ((iVar3 == 0) && (iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0xf), iVar3 != 0)) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a);
  if ((iVar3 != 0) && (iVar3 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0xf), iVar3 != 0)) {
    iVar2 = iVar2 + -1;
  }
  pcVar7 = local_320;
  if (iVar2 < 2) {
    if (iVar2 < 0) {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  while (iVar3 = FUN_0058eb40(), iVar3 != 0) {
    iVar3 = FUN_004dfe90(0x01D02F84);
    if (iVar3 == 0x1b) {
LAB_0047b4ba:
      uVar6 = 0;
      goto LAB_0047b4bc;
    }
    if (iVar3 == 0xd) {
      if (iVar2 != 0) goto LAB_0047b4ba;
      goto LAB_0047b56b;
    }
    if (iVar3 == 8) {
      FUN_0047abd0(local_320);
    }
    else if (((&DAT_0061ed94)[(byte)((char)iVar3 + 1)] & 8) != 0) {
      FUN_0047ab80(local_320);
      FUN_0047aa80(local_320,iVar3,1);
      FUN_0047aa60(local_320);
    }
  }
  FUN_0047acc0(local_320);
  iVar3 = FUN_00485240(local_fc);
  if (iVar3 != 0) {
LAB_0047b56b:
    uVar6 = 1;
    goto LAB_0047b575;
  }
  if (local_fc == _DAT_01c26410) {
    iVar2 = 0;
  }
  iVar3 = FUN_00485240(local_1e0);
  if (iVar3 == 0) {
    if (local_1e0 == _DAT_01c26410) {
      iVar2 = 1;
    }
    goto LAB_0047b3b6;
  }
  uVar6 = 0;
  goto LAB_0047b4bc;
  while( true ) {
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    param_2[1] = cVar1;
    param_2 = param_2 + 2;
    if (cVar1 == '\0') break;
LAB_0047b575:
    cVar1 = *pcVar7;
    *param_2 = cVar1;
    if (cVar1 == '\0') break;
  }
LAB_0047b4bc:
  FUN_0047e760(0x01C25594);
  FUN_004032b0();
  DAT_006141cc = local_14;
  FUN_00484e50(local_1e0,0);
  FUN_00484e50(local_fc,0);
  return uVar6;
}
