// Name: FUN_0047c050
// Address: 0047c050
// Address Range: [[0047c050, 0047c2bd]]
// Convention: unknown
// Signature: void FUN_0047c050(undefined1 *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0047c1d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047c050(byte *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *puVar5;
  byte local_420 [1024];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = _DAT_01c5bae4 + param_3;
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x134)) {
    iVar2 = FUN_0047bf80(param_1,*(int *)(param_1 + 0x138));
    iVar2 = param_2 + iVar2;
    iVar3 = FUN_0047bf80(param_1,*(uint *)(param_1 + 0x134));
    iVar3 = iVar3 + param_2;
    local_18 = iVar3;
    local_1c = iVar2;
    if (iVar3 < iVar2) {
      local_18 = iVar2;
      local_1c = iVar3;
    }
    local_14 = param_3;
    local_20 = iVar4;
    if (_DAT_01c5baec == 0) {
      FUN_004031c0(local_1c,param_3,local_18,iVar4,_DAT_01c5bb10);
    }
    else {
      iVar2 = (_DAT_01c5bb10 & 0xff) * 3;
      FUN_004f3520((uint)(byte)(&DAT_01c6af98)[iVar2] << 0x10 |
                   (uint)(byte)(&DAT_01c6af99)[iVar2] << 8 | (uint)(byte)(&DAT_01c6af9a)[iVar2]);
      FUN_004f37e0(local_1c,local_14,local_18,local_20);
    }
  }
  FUN_00406bf0(0xffff);
  FUN_004edaf0(0x3f800000);
  puVar5 = param_1;
  if (*(int *)(param_1 + 0x13c) != 0) {
    if (0x3ff < *(uint *)(param_1 + 0x130)) {
      _DAT_01d71de0 = "..\\shape\\edittool.cpp";
      _DAT_01d71de4 = 0x231;
      FUN_004e4330("CInputString::draw - string too big for hidden text!");
    }
    FUN_005a28f0(local_420,0x2a,*(uint *)(param_1 + 0x130));
    local_420[*(int *)(param_1 + 0x130)] = 0;
    puVar5 = local_420;
  }
  FUN_004b0a20(_DAT_01c5b0e0,puVar5,param_2,param_3,_DAT_01c5bb14,0xffffffff);
  uVar1 = FUN_005806a0();
  if ((uVar1 & 0x40000) != 0) {
    if (_DAT_01c5baec == 0) {
      _DAT_01c6b5c0 = _DAT_01c5bb18;
    }
    else {
      iVar2 = (_DAT_01c5bb18 & 0xff) * 3;
      FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar2] |
                   (uint)(byte)(&DAT_01c6af98)[iVar2] << 0x10 |
                   (uint)(byte)(&DAT_01c6af99)[iVar2] << 8);
    }
    iVar2 = FUN_0047bf80(param_1,*(uint *)(param_1 + 0x134));
    FUN_004011a0(iVar2 + param_2,param_3,iVar2 + param_2,iVar4);
  }
  return;
}
