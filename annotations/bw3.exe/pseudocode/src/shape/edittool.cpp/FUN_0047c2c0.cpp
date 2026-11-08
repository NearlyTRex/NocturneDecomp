// Name: FUN_0047c2c0
// Address: 0047c2c0
// Address Range: [[0047c2c0, 0047c732]]
// Convention: unknown
// Signature: undefined4 FUN_0047c2c0(undefined4 param_1,char *param_2,undefined4 param_3,byte param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0047c2c0(uint param_1,char *param_2,uint param_3,byte param_4,uint param_5)

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
  
  if (_DAT_01c5b0e0 == 0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  FUN_004032b0();
  pcVar7 = param_2;
  if ((param_4 & 1) == 0) {
    pcVar7 = (char *)0x0;
  }
  FUN_0047ba60(local_320,pcVar7,param_3,param_5);
  iVar2 = (int)((DAT_005fba18 + (DAT_005fba18 >> 0x1f) * -0x80) -
               (uint)((DAT_005fba18 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = DAT_005fba1c / 0x60;
  iVar4 = FUN_00486580(0);
  FUN_0047f3e0(0x01C5B0E4,(DAT_005fba18 << 2) / 5,iVar4 + iVar3 * 2 + _DAT_01c5bae4,param_1,0);
  iVar3 = FUN_004864f0("Cancel");
  iVar4 = ((_DAT_01c6b5a8 + _DAT_01c6b5b0) - iVar2) / 2 - iVar3;
  iVar2 = (_DAT_01c6b5a8 + _DAT_01c6b5b0 + iVar2) / 2;
  iVar5 = FUN_00486580(0);
  local_18 = (_DAT_01c6b5b4 - iVar5) + 1;
  FUN_00486020(local_fc);
  FUN_00486020(local_1e0);
  FUN_004860d0(local_fc,iVar4 + 1,local_18,iVar4 + iVar3,_DAT_01c6b5b4,&DAT_005bce07);
  FUN_004860d0(local_1e0,iVar2,local_18,iVar3 + iVar2 + -1,_DAT_01c6b5b4,"Cancel");
  local_14 = DAT_005fba2c;
  DAT_005fba2c = 0x7f;
  iVar2 = 0;
  while( true ) {
    FUN_0047fa80(0x01C5B0E4);
    FUN_00480200(0x01C5B0E4,1);
    FUN_0047c050(local_320,_DAT_01c6b5a8,_DAT_01c6b5ac);
    FUN_00486120(local_fc,iVar2 == 0);
    FUN_00486120(local_1e0,iVar2 == 1);
    FUN_00480410(0x01C5B0E4,0);
    FUN_0057a8a0();
    iVar3 = (**(code **)*0x01D70A78)(0x01D70A78,0x2a);
    if ((iVar3 == 0) && (iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0xf), iVar3 != 0)) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = (**(code **)*0x01D70A78)(0x01D70A78,0x2a);
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0xf), iVar3 != 0)) {
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
    if (_DAT_02d21b80 != 0) break;
    while (iVar3 = FUN_00580800(), iVar3 != 0) {
      iVar3 = FUN_004df580(0x01D70A78);
      if (iVar3 == 0x1b) {
LAB_0047c596:
        uVar6 = 0;
        goto LAB_0047c598;
      }
      if (iVar3 == 0xd) {
        if (iVar2 != 0) goto LAB_0047c596;
        goto LAB_0047c64e;
      }
      if (iVar3 == 8) {
        FUN_0047bc60(local_320);
      }
      else if (((&DAT_006074b8)[(byte)((char)iVar3 + 1)] & 8) != 0) {
        FUN_0047bc10(local_320);
        FUN_0047bb10(local_320,iVar3,1);
        FUN_0047baf0(local_320);
      }
    }
    FUN_0047bd50(local_320);
    iVar3 = FUN_00486440(local_fc);
    if (iVar3 != 0) {
LAB_0047c64e:
      uVar6 = 1;
      goto LAB_0047c658;
    }
    if (local_fc == _DAT_01c5bb78) {
      iVar2 = 0;
    }
    iVar3 = FUN_00486440(local_1e0);
    if (iVar3 != 0) break;
    if (local_1e0 == _DAT_01c5bb78) {
      iVar2 = 1;
    }
  }
  uVar6 = 0;
  goto LAB_0047c598;
  while( true ) {
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    param_2[1] = cVar1;
    param_2 = param_2 + 2;
    if (cVar1 == '\0') break;
LAB_0047c658:
    cVar1 = *pcVar7;
    *param_2 = cVar1;
    if (cVar1 == '\0') break;
  }
LAB_0047c598:
  FUN_0047f970(0x01C5B0E4);
  FUN_004032b0();
  DAT_005fba2c = local_14;
  FUN_00486050(local_1e0,0);
  FUN_00486050(local_fc,0);
  return uVar6;
}
