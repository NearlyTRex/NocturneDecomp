// Name: FUN_00493720
// Address: 00493720
// Address Range: [[00493720, 00493b92]]
// Convention: unknown
// Signature: undefined4 FUN_00493720(undefined4 param_1,char *param_2,undefined4 param_3,byte param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00493720(uint param_1,char *param_2,uint param_3,byte param_4,uint param_5)

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
  
  if (_DAT_01c3eb50 == 0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(uint *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = FUN_004c4510(_DAT_01c3eb50,0x6a);
  FUN_004032b0();
  pcVar7 = param_2;
  if ((param_4 & 1) == 0) {
    pcVar7 = (char *)0x0;
  }
  FUN_00492ec0(local_320,pcVar7,param_3,param_5);
  iVar2 = (int)((DAT_0061b498 + (DAT_0061b498 >> 0x1f) * -0x80) -
               (uint)((DAT_0061b498 >> 0x1f) << 6 < 0)) >> 7;
  iVar3 = DAT_0061b49c / 0x60;
  iVar4 = FUN_0049d9e0(0);
  FUN_00496840(0x01C3EB54,(DAT_0061b498 << 2) / 5,iVar4 + iVar3 * 2 + _DAT_01c3f53c,param_1,0);
  iVar3 = FUN_0049d950("Cancel");
  iVar4 = ((_DAT_01c4f008 + _DAT_01c4f010) - iVar2) / 2 - iVar3;
  iVar2 = (_DAT_01c4f008 + _DAT_01c4f010 + iVar2) / 2;
  iVar5 = FUN_0049d9e0(0);
  local_18 = (_DAT_01c4f014 - iVar5) + 1;
  FUN_0049d480(local_fc);
  FUN_0049d480(local_1e0);
  FUN_0049d530(local_fc,iVar4 + 1,local_18,iVar4 + iVar3,_DAT_01c4f014,"OK");
  FUN_0049d530(local_1e0,iVar2,local_18,iVar3 + iVar2 + -1,_DAT_01c4f014,"Cancel");
  local_14 = DAT_0061b4ac;
  DAT_0061b4ac = 0x7f;
  iVar2 = 0;
  while( true ) {
    FUN_00496ee0(0x01C3EB54);
    FUN_00497660(0x01C3EB54,1);
    FUN_004934b0(local_320,_DAT_01c4f008,_DAT_01c4f00c);
    FUN_0049d580(local_fc,iVar2 == 0);
    FUN_0049d580(local_1e0,iVar2 == 1);
    FUN_00497870(0x01C3EB54,0);
    FUN_005acff0();
    iVar3 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x2a);
    if ((iVar3 == 0) && (iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0xf), iVar3 != 0)) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x2a);
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0xf), iVar3 != 0)) {
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
    if (_DAT_02c9be70 != 0) break;
    while (iVar3 = FUN_005b2580(), iVar3 != 0) {
      iVar3 = FUN_004fd260(0x01D1BCA0);
      if (iVar3 == 0x1b) {
LAB_004939f6:
        uVar6 = 0;
        goto LAB_004939f8;
      }
      if (iVar3 == 0xd) {
        if (iVar2 != 0) goto LAB_004939f6;
        goto LAB_00493aae;
      }
      if (iVar3 == 8) {
        FUN_004930c0(local_320);
      }
      else if (((&DAT_00626114)[(byte)((char)iVar3 + 1)] & 8) != 0) {
        FUN_00493070(local_320);
        FUN_00492f70(local_320,iVar3,1);
        FUN_00492f50(local_320);
      }
    }
    FUN_004931b0(local_320);
    iVar3 = FUN_0049d8a0(local_fc);
    if (iVar3 != 0) {
LAB_00493aae:
      uVar6 = 1;
      goto LAB_00493ab8;
    }
    if (local_fc == _DAT_01c3f5d0) {
      iVar2 = 0;
    }
    iVar3 = FUN_0049d8a0(local_1e0);
    if (iVar3 != 0) break;
    if (local_1e0 == _DAT_01c3f5d0) {
      iVar2 = 1;
    }
  }
  uVar6 = 0;
  goto LAB_004939f8;
  while( true ) {
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    param_2[1] = cVar1;
    param_2 = param_2 + 2;
    if (cVar1 == '\0') break;
LAB_00493ab8:
    cVar1 = *pcVar7;
    *param_2 = cVar1;
    if (cVar1 == '\0') break;
  }
LAB_004939f8:
  FUN_00496dd0(0x01C3EB54);
  FUN_004032b0();
  DAT_0061b4ac = local_14;
  FUN_0049d4b0(local_1e0,0);
  FUN_0049d4b0(local_fc,0);
  return uVar6;
}
