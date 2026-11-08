// Name: FUN_0047c0f0
// Address: 0047c0f0
// Address Range: [[0047c0f0, 0047c756]]
// Convention: unknown
// Signature: int FUN_0047c0f0(undefined4 param_1,int *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0047c0f0(uint param_1,int *param_2,int param_3)

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
  
  if (_DAT_01c25590 == 0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = FUN_004ab560(_DAT_01c25590,0x6a);
  if ((param_2 == (int *)0x0) || (iVar2 = *param_2, iVar2 < 1)) {
    return -1;
  }
  uVar3 = FUN_005b8df8(iVar2 * 0xe4 + 4,iVar2,&DAT_005f5d70);
  local_44 = FUN_005ba2b4(uVar3);
  iVar9 = 0;
  local_18 = 0;
  iVar5 = local_44;
  if (0 < iVar2) {
    do {
      local_20 = iVar5;
      pcVar11 = local_150;
      pcVar4 = (char *)FUN_00481240(param_2,iVar9);
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
        if (*pcVar11 == '^') goto LAB_0047c1ff;
        if (*pcVar11 == '\0') break;
        pcVar4 = pcVar11 + 1;
        if (*pcVar4 == '^') goto LAB_0047c1ff;
        pcVar11 = pcVar11 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_0047c1ff:
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
        FUN_004813f0(param_2,iVar9,local_150);
      }
      iVar5 = FUN_004852f0(local_150);
      if (local_18 < iVar5) {
        local_18 = iVar5;
      }
      local_20 = local_20 + 0xe4;
      iVar9 = iVar9 + 1;
      iVar5 = local_20;
    } while (iVar9 < iVar2);
  }
  iVar5 = FUN_004852f0("Cancel");
  if (local_18 < iVar5) {
    local_18 = FUN_004852f0("Cancel");
  }
  iVar5 = (int)((DAT_006141b8 + (DAT_006141b8 >> 0x1f) * -0x80) -
               (uint)((DAT_006141b8 >> 0x1f) << 6 < 0)) >> 7;
  local_40 = DAT_006141bc / 0x60;
  if (param_3 == 0) {
    iVar10 = local_18 * iVar2;
    iVar9 = FUN_00485380(0);
    iVar9 = iVar9 + -1;
    iVar10 = iVar10 + (iVar2 + -1) * (iVar5 + -2) + 1;
  }
  else {
    iVar10 = local_40 + -2;
    iVar9 = FUN_00485380(0);
    iVar9 = iVar10 * (iVar2 + -1) + iVar9 * iVar2;
    iVar10 = local_18;
  }
  iVar6 = FUN_004aaf00(_DAT_01c25590,param_1);
  if (iVar6 < iVar10) {
    iVar6 = iVar10;
  }
  FUN_0047e1d0(0x01C25594,iVar6,iVar9,param_1,0);
  local_2c = (((_DAT_01c35e50 - _DAT_01c35e48) + 1) - iVar10) / 2;
  iVar9 = 0;
  if (0 < iVar2) {
    local_34 = local_40 + -1;
    local_38 = iVar5 + -1;
    local_28 = 0;
    local_24 = 0;
    local_30 = local_18;
    local_1c = 0;
    iVar5 = local_44;
    do {
      iVar10 = _DAT_01c35e48 + local_2c;
      if (param_3 == 0) {
        iVar10 = iVar10 + local_1c + local_24;
        iVar6 = FUN_00485380(0);
        local_4c = (_DAT_01c35e54 - iVar6) + 1;
        uVar3 = FUN_00481240(param_2,iVar9);
        iVar7 = local_18 + iVar10;
        iVar6 = local_4c;
        iVar8 = _DAT_01c35e54;
      }
      else {
        iVar6 = FUN_00485380(0);
        local_48 = iVar6 * iVar9 + _DAT_01c35e4c + local_28 + -1;
        uVar3 = FUN_00481240(param_2,iVar9);
        iVar6 = FUN_00485380(0,uVar3);
        iVar8 = iVar6 + local_48 + -1;
        iVar7 = local_18 + iVar10;
        iVar6 = local_48;
      }
      FUN_00484ed0(iVar5,iVar10,iVar6,iVar7 + -1,iVar8,uVar3);
      iVar5 = iVar5 + 0xe4;
      local_28 = local_28 + local_34;
      iVar9 = iVar9 + 1;
      local_24 = local_24 + local_38;
      local_1c = local_1c + local_30;
    } while (iVar9 < iVar2);
  }
  FUN_004032b0();
  local_50 = DAT_006141cc;
  DAT_006141cc = 0x7f;
  local_14 = 0;
  local_3c = iVar2 + -1;
  iVar5 = -2;
  do {
    iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x1c);
    if (iVar9 != 0) {
      iVar5 = local_14;
    }
    iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a);
    if ((iVar9 == 0) && (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0xf), iVar9 != 0)) {
      local_14 = local_14 + 1;
    }
    iVar9 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a);
    if ((iVar9 != 0) && (iVar9 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0xf), iVar9 != 0)) {
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
    while (iVar9 = FUN_0058eb40(), iVar9 != 0) {
      iStack_10 = FUN_004dfea0(0x01D02F84);
      cVar1 = *(char *)(local_44 + 4);
      iVar10 = local_44;
      for (iVar9 = 0; (cVar1 != '\0' && (iVar9 < iVar2)); iVar9 = iVar9 + 1) {
        iVar6 = FUN_005b8e40(*(byte *)(iVar10 + 4));
        if (iVar6 == iStack_10) {
          iVar5 = iVar9;
        }
        cVar1 = *(char *)(iVar10 + 0xe8);
        iVar10 = iVar10 + 0xe4;
      }
      if (iStack_10 == 0x1b) {
        iVar5 = -1;
      }
    }
    iVar10 = 0;
    iVar9 = local_44;
    if (0 < iVar2) {
      do {
        iVar6 = FUN_00485240(iVar9);
        if (iVar6 != 0) {
          iVar5 = iVar10;
        }
        if (iVar9 == _DAT_01c26410) {
          local_14 = iVar10;
        }
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 0xe4;
      } while (iVar10 < iVar2);
    }
    FUN_0047e870(0x01C25594);
    iVar10 = 0;
    iVar9 = local_44;
    if (0 < iVar2) {
      do {
        bVar12 = iVar10 == local_14;
        iVar10 = iVar10 + 1;
        FUN_00484f20(iVar9,bVar12);
        iVar9 = iVar9 + 0xe4;
      } while (iVar10 < iVar2);
    }
    FUN_0047f210(0x01C25594,0);
    FUN_00589560();
  } while (iVar5 == -2);
  uVar3 = FUN_005b7fa7(local_44,&DAT_005f5d70);
  FUN_005b7fce(uVar3);
  DAT_006141cc = local_50;
  FUN_004032b0();
  FUN_0047e760(0x01C25594);
  return iVar5;
}
