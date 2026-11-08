// Name: FUN_004934b0
// Address: 004934b0
// Address Range: [[004934b0, 0049371d]]
// Convention: unknown
// Signature: void FUN_004934b0(undefined1 *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00493638) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004934b0(byte *param_1,int param_2,int param_3)

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
  
  iVar4 = _DAT_01c3f53c + param_3;
  if (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0x134)) {
    iVar2 = FUN_004933e0(param_1,*(int *)(param_1 + 0x138));
    iVar2 = param_2 + iVar2;
    iVar3 = FUN_004933e0(param_1,*(uint *)(param_1 + 0x134));
    iVar3 = iVar3 + param_2;
    local_18 = iVar3;
    local_1c = iVar2;
    if (iVar3 < iVar2) {
      local_18 = iVar2;
      local_1c = iVar3;
    }
    local_14 = param_3;
    local_20 = iVar4;
    if (_DAT_01c3f544 == 0) {
      FUN_004031c0(local_1c,param_3,local_18,iVar4,_DAT_01c3f568);
    }
    else {
      iVar2 = (_DAT_01c3f568 & 0xff) * 3;
      FUN_00517d50((uint)(byte)(&DAT_01c4e9f8)[iVar2] << 0x10 |
                   (uint)(byte)(&DAT_01c4e9f9)[iVar2] << 8 | (uint)(byte)(&DAT_01c4e9fa)[iVar2]);
      FUN_00518010(local_1c,local_14,local_18,local_20);
    }
  }
  FUN_00406bd0(0xffff);
  FUN_00512320(0x3f800000);
  puVar5 = param_1;
  if (*(int *)(param_1 + 0x13c) != 0) {
    if (0x3ff < *(uint *)(param_1 + 0x130)) {
      _DAT_01d1d400 = "..\\shape\\edittool.cpp";
      _DAT_01d1d404 = 0x22e;
      FUN_005030e0("CInputString::draw - string too big for hidden text!");
    }
    FUN_005bfb70(local_420,0x2a,*(uint *)(param_1 + 0x130));
    local_420[*(int *)(param_1 + 0x130)] = 0;
    puVar5 = local_420;
  }
  FUN_004c1dd0(_DAT_01c3eb50,puVar5,param_2,param_3,_DAT_01c3f56c,0xffffffff);
  uVar1 = FUN_005b2420();
  if ((uVar1 & 0x40000) != 0) {
    if (_DAT_01c3f544 == 0) {
      _DAT_01c4f020 = _DAT_01c3f570;
    }
    else {
      iVar2 = (_DAT_01c3f570 & 0xff) * 3;
      FUN_00517d50((uint)(byte)(&DAT_01c4e9fa)[iVar2] |
                   (uint)(byte)(&DAT_01c4e9f8)[iVar2] << 0x10 |
                   (uint)(byte)(&DAT_01c4e9f9)[iVar2] << 8);
    }
    iVar2 = FUN_004933e0(param_1,*(uint *)(param_1 + 0x134));
    FUN_004011a0(iVar2 + param_2,param_3,iVar2 + param_2,iVar4);
  }
  return;
}
