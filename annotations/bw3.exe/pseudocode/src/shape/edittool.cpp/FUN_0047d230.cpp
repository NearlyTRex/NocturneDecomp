// Name: FUN_0047d230
// Address: 0047d230
// Address Range: [[0047d230, 0047d8b1]]
// Convention: unknown
// Signature: int FUN_0047d230(undefined4 param_1,int *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0047d230(uint param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  char local_150 [256];
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int iStack_10;
  
  if (_DAT_01c5b0e0 == 0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa7;
    FUN_004e4330("gEdFont must be set by the application.");
  }
  _DAT_01c5bae0 = *(uint *)(_DAT_01c5b0e0 + 0x41e8);
  _DAT_01c5bae4 = FUN_004b30f0(_DAT_01c5b0e0,0x6a);
  if ((param_2 == (int *)0x0) || (iVar2 = *param_2, iVar2 < 1)) {
    return -1;
  }
  uVar3 = FUN_005a40df(iVar2 * 0xe4 + 4,iVar2,&DAT_005df080);
  local_44 = FUN_005a5584(uVar3);
  iVar10 = 0;
  local_18 = 0;
  iVar5 = local_44;
  if (0 < iVar2) {
    do {
      local_20 = iVar5;
      pcVar11 = local_150;
      pcVar4 = (char *)FUN_00482440(param_2,iVar10);
      do {
        cVar1 = *pcVar4;
        *pcVar11 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
      pcVar11 = local_150;
      do {
        pcVar4 = pcVar11;
        if (*pcVar11 == '^') goto LAB_0047d33f;
        if (*pcVar11 == '\0') break;
        pcVar4 = pcVar11 + 1;
        if (*pcVar4 == '^') goto LAB_0047d33f;
        pcVar11 = pcVar11 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_0047d33f:
      if (pcVar4 != (char *)0x0) {
        pcVar11 = pcVar4 + 1;
        *(char *)(local_20 + 4) = pcVar4[1];
        do {
          cVar1 = *pcVar11;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
        FUN_004825f0(param_2,iVar10,local_150);
      }
      iVar5 = FUN_004864f0(local_150);
      if (local_18 < iVar5) {
        local_18 = iVar5;
      }
      local_20 = local_20 + 0xe4;
      iVar10 = iVar10 + 1;
      iVar5 = local_20;
    } while (iVar10 < iVar2);
  }
  iVar5 = FUN_004864f0("Cancel");
  if (local_18 < iVar5) {
    local_18 = FUN_004864f0("Cancel");
  }
  local_40 = (int)((DAT_005fba18 + (DAT_005fba18 >> 0x1f) * -0x80) -
                  (uint)((DAT_005fba18 >> 0x1f) << 6 < 0)) >> 7;
  iVar5 = DAT_005fba1c / 0x60;
  if (param_3 == 0) {
    iVar8 = local_40 + -2;
    iVar9 = local_18 * iVar2;
    iVar10 = FUN_00486580(0);
    iVar10 = iVar10 + -1;
    iVar8 = (iVar2 + -1) * iVar8 + iVar9 + 1;
  }
  else {
    iVar10 = FUN_00486580(0);
    iVar10 = (iVar5 + -2) * (iVar2 + -1) + iVar10 * iVar2;
    iVar8 = local_18;
  }
  iVar9 = FUN_004b2a80(_DAT_01c5b0e0,param_1);
  if (iVar9 < iVar8) {
    iVar9 = iVar8;
  }
  FUN_0047f3e0(0x01C5B0E4,iVar9,iVar10,param_1,0);
  local_2c = (((_DAT_01c6b5b0 - _DAT_01c6b5a8) + 1) - iVar8) / 2;
  iVar10 = 0;
  if (0 < iVar2) {
    local_34 = iVar5 + -1;
    local_38 = local_40 + -1;
    local_28 = 0;
    local_24 = 0;
    local_30 = local_18;
    local_1c = 0;
    iVar5 = local_44;
    do {
      iVar8 = _DAT_01c6b5a8 + local_2c;
      if (param_3 == 0) {
        iVar8 = iVar8 + local_1c + local_24;
        iVar9 = FUN_00486580(0);
        local_4c = (_DAT_01c6b5b4 - iVar9) + 1;
        uVar3 = FUN_00482440(param_2,iVar10);
        iVar6 = local_18 + iVar8;
        iVar9 = local_4c;
        iVar7 = _DAT_01c6b5b4;
      }
      else {
        iVar9 = FUN_00486580(0);
        local_48 = iVar9 * iVar10 + _DAT_01c6b5ac + local_28 + -1;
        uVar3 = FUN_00482440(param_2,iVar10);
        iVar9 = FUN_00486580(0,uVar3);
        iVar7 = iVar9 + local_48 + -1;
        iVar6 = local_18 + iVar8;
        iVar9 = local_48;
      }
      FUN_004860d0(iVar5,iVar8,iVar9,iVar6 + -1,iVar7,uVar3);
      iVar5 = iVar5 + 0xe4;
      local_28 = local_28 + local_34;
      iVar10 = iVar10 + 1;
      local_24 = local_24 + local_38;
      local_1c = local_1c + local_30;
    } while (iVar10 < iVar2);
  }
  FUN_004032b0();
  local_50 = DAT_005fba2c;
  DAT_005fba2c = 0x7f;
  local_14 = 0;
  local_3c = iVar2 + -1;
  iVar5 = -2;
  do {
    iVar10 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x1c);
    if (iVar10 != 0) {
      iVar5 = local_14;
    }
    iVar10 = (**(code **)*0x01D70A78)(0x01D70A78,0x2a);
    if ((iVar10 == 0) && (iVar10 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0xf), iVar10 != 0))
    {
      local_14 = local_14 + 1;
    }
    iVar10 = (**(code **)*0x01D70A78)(0x01D70A78,0x2a);
    if ((iVar10 != 0) && (iVar10 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0xf), iVar10 != 0))
    {
      local_14 = local_14 + -1;
    }
    if (local_14 < iVar2) {
      if (local_14 < 0) {
        local_14 = local_3c;
      }
    }
    else {
      local_14 = 0;
    }
    if (_DAT_02d21b80 != 0) {
      iVar5 = -1;
      break;
    }
    while (iVar10 = FUN_00580800(), iVar10 != 0) {
      iStack_10 = FUN_004df590(0x01D70A78);
      cVar1 = *(char *)(local_44 + 4);
      iVar8 = local_44;
      for (iVar10 = 0; (cVar1 != '\0' && (iVar10 < iVar2)); iVar10 = iVar10 + 1) {
        iVar9 = FUN_005a4120(*(byte *)(iVar8 + 4));
        if (iVar9 == iStack_10) {
          iVar5 = iVar10;
        }
        cVar1 = *(char *)(iVar8 + 0xe8);
        iVar8 = iVar8 + 0xe4;
      }
      if (iStack_10 == 0x1b) {
        iVar5 = -1;
      }
    }
    iVar8 = 0;
    iVar10 = local_44;
    if (0 < iVar2) {
      do {
        iVar9 = FUN_00486440(iVar10);
        if (iVar9 != 0) {
          iVar5 = iVar8;
        }
        if (iVar10 == _DAT_01c5bb78) {
          local_14 = iVar8;
        }
        iVar8 = iVar8 + 1;
        iVar10 = iVar10 + 0xe4;
      } while (iVar8 < iVar2);
    }
    FUN_0047fa80(0x01C5B0E4);
    iVar8 = 0;
    iVar10 = local_44;
    if (0 < iVar2) {
      do {
        bVar12 = iVar8 == local_14;
        iVar8 = iVar8 + 1;
        FUN_00486120(iVar10,bVar12);
        iVar10 = iVar10 + 0xe4;
      } while (iVar8 < iVar2);
    }
    FUN_00480410(0x01C5B0E4,0);
    FUN_0057a8a0();
  } while (iVar5 == -2);
  uVar3 = FUN_005a308f(local_44,&DAT_005df080);
  FUN_005a30b6(uVar3);
  DAT_005fba2c = local_50;
  FUN_004032b0();
  FUN_0047f970(0x01C5B0E4);
  return iVar5;
}
