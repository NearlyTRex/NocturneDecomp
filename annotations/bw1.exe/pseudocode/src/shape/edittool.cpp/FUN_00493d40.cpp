// Name: FUN_00493d40
// Address: 00493d40
// Address Range: [[00493d40, 0049402d]]
// Convention: unknown
// Signature: void FUN_00493d40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00493d40(uint param_1,uint param_2,uint param_3)

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
  
  if (_DAT_01c3eb50 == 0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa4;
    FUN_005030e0("gEdFont must be set by the application.");
  }
  _DAT_01c3f538 = *(int *)(_DAT_01c3eb50 + 0x41e8);
  _DAT_01c3f53c = FUN_004c4510(_DAT_01c3eb50,0x6a);
  iVar1 = DAT_0061b49c / 0x60;
  local_18 = FUN_0049d950("Cancel");
  iVar2 = FUN_0049d9e0(0);
  iVar2 = iVar1 * 2 + iVar2;
  iVar1 = FUN_004c3ea0(_DAT_01c3eb50,param_1);
  local_14 = iVar1;
  iVar3 = FUN_004c3ea0(_DAT_01c3eb50,param_2);
  if (iVar1 < iVar3) {
    local_14 = iVar3;
  }
  if (local_14 < local_18) {
    local_14 = local_18;
  }
  iVar1 = FUN_004c3f50(_DAT_01c3eb50,param_2);
  FUN_00496840(0x01C3EB54,_DAT_01c3f538 * 4 + local_14,iVar1 + _DAT_01c3f53c * 2 + iVar2,param_1,0
              );
  local_1c = FUN_0049d950("Cancel");
  local_24 = ((_DAT_01c4f010 + _DAT_01c4f008) - local_1c) / 2 + 1;
  iVar4 = FUN_0049d9e0(0);
  local_20 = (_DAT_01c4f014 - iVar4) + 1;
  FUN_0049d480(local_108);
  FUN_0049d530(local_108,local_24,local_20,local_24 + local_1c + -1,_DAT_01c4f014,"OK");
  FUN_004032b0();
  while( true ) {
    iVar4 = FUN_005b2580();
    if (iVar4 != 0) break;
    iVar4 = FUN_0049d8a0(local_108);
    if ((iVar4 != 0) || (_DAT_02c9be70 != 0)) break;
    FUN_00496ee0(0x01C3EB54);
    FUN_00497660(0x01C3EB54,1);
    FUN_00406bd0(0xffff);
    FUN_00512320(0x3f800000);
    FUN_004c1dd0(_DAT_01c3eb50,param_2,((_DAT_01c4f008 + _DAT_01c4f010) - iVar3) / 2,
                 (((_DAT_01c4f00c + _DAT_01c4f014) - iVar1) - iVar2) / 2,param_3,0xffffffff);
    FUN_0049d580(local_108,1);
    FUN_00497870(0x01C3EB54,0);
    FUN_005acff0();
  }
  FUN_004032b0();
  FUN_00496dd0(0x01C3EB54);
  FUN_0049d4b0(local_108,0);
  return;
}
