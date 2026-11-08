// Name: FUN_0047c8e0
// Address: 0047c8e0
// Address Range: [[0047c8e0, 0047cbcd]]
// Convention: unknown
// Signature: void FUN_0047c8e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047c8e0(uint param_1,uint param_2,uint param_3)

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
  
  if (_DAT_01c5b0e0 == 0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(int *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  iVar1 = DAT_005fba1c / 0x60;
  local_18 = FUN_004864f0("Cancel");
  iVar2 = FUN_00486580(0);
  iVar2 = iVar1 * 2 + iVar2;
  iVar1 = FUN_004b2a80(_DAT_01c5b0e0,param_1);
  local_14 = iVar1;
  iVar3 = FUN_004b2a80(_DAT_01c5b0e0,param_2);
  if (iVar1 < iVar3) {
    local_14 = iVar3;
  }
  if (local_14 < local_18) {
    local_14 = local_18;
  }
  iVar1 = FUN_004b2b30(_DAT_01c5b0e0,param_2);
  FUN_0047f3e0(0x01C5B0E4,_DAT_01c5bae0 * 4 + local_14,iVar1 + _DAT_01c5bae4 * 2 + iVar2,param_1,0
              );
  local_1c = FUN_004864f0("Cancel");
  local_24 = ((_DAT_01c6b5b0 + _DAT_01c6b5a8) - local_1c) / 2 + 1;
  iVar4 = FUN_00486580(0);
  local_20 = (_DAT_01c6b5b4 - iVar4) + 1;
  FUN_00486020(local_108);
  FUN_004860d0(local_108,local_24,local_20,local_24 + local_1c + -1,_DAT_01c6b5b4,&DAT_005bce1f);
  FUN_004032b0();
  while( true ) {
    iVar4 = FUN_00580800();
    if (iVar4 != 0) break;
    iVar4 = FUN_00486440(local_108);
    if ((iVar4 != 0) || (_DAT_02d21b80 != 0)) break;
    FUN_0047fa80(0x01C5B0E4);
    FUN_00480200(0x01C5B0E4,1);
    FUN_00406bf0(0xffff);
    FUN_004edaf0(0x3f800000);
    FUN_004b0a20(_DAT_01c5b0e0,param_2,((_DAT_01c6b5a8 + _DAT_01c6b5b0) - iVar3) / 2,
                 (((_DAT_01c6b5ac + _DAT_01c6b5b4) - iVar1) - iVar2) / 2,param_3,0xffffffff);
    FUN_00486120(local_108,1);
    FUN_00480410(0x01C5B0E4,0);
    FUN_0057a8a0();
  }
  FUN_004032b0();
  FUN_0047f970(0x01C5B0E4);
  FUN_00486050(local_108,0);
  return;
}
