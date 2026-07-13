// Name: FUN_004ea830
// Address: 004ea830
// Address Range: [[004ea830, 004eb342]]
// Convention: unknown
// Signature: void FUN_004ea830(int *param_1,int *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004eb1dd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ea830(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  byte bVar9;
  float local_f0;
  float local_ec;
  float local_e8;
  uint local_e4;
  byte local_e0;
  char local_df [20];
  char local_cb [80];
  int local_7b;
  int iStack_77;
  uint local_70;
  byte local_6c;
  uint local_6b;
  uint local_64;
  byte local_60;
  int local_5f;
  uint local_58;
  byte local_54;
  uint local_4c;
  byte local_48;
  int local_47;
  uint local_40;
  byte local_3c;
  uint local_3b;
  byte local_34 [8];
  int local_2c;
  int local_28;
  int *local_24;
  int *local_1c;
  int local_18;
  int local_14;
  
  bVar9 = 0;
  uVar2 = FUN_004eb3f0(param_1,param_2);
  local_1c = (int *)0x0;
  if (-1 < (int)uVar2) {
    local_1c = param_1 + uVar2 * 0x1e + 8;
    local_1c[9] = _DAT_01cea3f8;
  }
  switch(*(byte *)(param_3 + 4)) {
  case 1:
    local_28 = param_3;
    if (param_1[1] != 1) {
      local_54 = 3;
      local_58 = 9;
      FUN_004eb3c0(param_1,param_2,&local_58);
    }
    if ((int)uVar2 < 0) {
      uVar2 = FUN_004eb440(param_1,param_2,local_28 + 0xd,*(uint *)(local_28 + 0x21),
                           *(uint *)(local_28 + 0x25));
    }
    else {
      iVar6 = FUN_005649c0(local_1c,local_28 + 0xd);
      if (((iVar6 != 0) || (*(int *)(local_28 + 0x21) != local_1c[5])) ||
         (*(int *)(local_28 + 0x25) != local_1c[6])) {
        pcVar7 = (char *)(local_28 + 0xd);
        piVar4 = local_1c;
        do {
          cVar1 = *pcVar7;
          *(char *)piVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          *(char *)((int)piVar4 + 1) = cVar1;
          piVar4 = (int *)((int)piVar4 + 2);
        } while (cVar1 != '\0');
        local_1c[5] = *(int *)(local_28 + 0x21);
        local_1c[6] = *(int *)(local_28 + 0x25);
        FUN_004ece70(param_1);
      }
    }
    pcVar7 = local_cb;
    local_e4 = 0x71;
    piVar4 = param_1 + 0x46;
    local_e0 = 2;
    do {
      iVar6 = *piVar4;
      *pcVar7 = (char)iVar6;
      if ((char)iVar6 == '\0') break;
      cVar1 = *(char *)((int)piVar4 + 1);
      piVar4 = (int *)((int)piVar4 + 2);
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar7 = local_df;
    piVar4 = param_1 + 2;
    do {
      iVar6 = *piVar4;
      *pcVar7 = (char)iVar6;
      if ((char)iVar6 == '\0') break;
      cVar1 = *(char *)((int)piVar4 + 1);
      piVar4 = (int *)((int)piVar4 + 2);
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    local_7b = *param_2;
    (&iStack_77)[(uint)bVar9 * -2] = param_2[(uint)bVar9 * -2 + 1];
    FUN_004eb350(param_1,uVar2,&local_e4);
    iVar6 = param_1[0x45];
    param_1[iVar6 * 0x1e + 0xf] = *(int *)(local_28 + 5);
    param_1[iVar6 * 0x1e + (uint)bVar9 * -2 + 0x10] = *(int *)(local_28 + 9 + (uint)bVar9 * -8);
    return;
  case 2:
    if (((*param_1 != 2) || ((int)uVar2 < 0)) || (uVar2 != param_1[0x44])) {
LAB_004eab0f:
      FUN_004edab0(param_1,param_2,0);
      return;
    }
    if (param_1[1] == 1) {
      pcVar7 = (char *)(param_3 + 5);
      _DAT_01cea3fc = 1;
      do {
        cVar1 = *pcVar7;
        *(char *)local_1c = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        *(char *)((int)local_1c + 1) = cVar1;
        local_1c = (int *)((int)local_1c + 2);
      } while (cVar1 != '\0');
      iVar6 = param_1[0x45];
      param_1[iVar6 * 0x1e + 0xf] = *(int *)(param_3 + 0x69);
      param_1[iVar6 * 0x1e + (uint)bVar9 * -2 + 0x10] = *(int *)(param_3 + 0x6d + (uint)bVar9 * -8);
      _DAT_01cea404 = 0xffffffff;
      return;
    }
    break;
  case 3:
    if (((*param_1 == 2) && (-1 < (int)uVar2)) && ((param_1[1] == 1 && (uVar2 == param_1[0x44])))) {
      _DAT_01cea3fc = *(uint *)(param_3 + 5);
      return;
    }
    break;
  case 4:
    if (*param_1 == 0) {
      FUN_004edab0(param_1,param_2,0);
      return;
    }
    local_40 = 9;
    local_3c = 5;
    local_3b = *(uint *)(param_3 + 5);
    FUN_004eb3c0(param_1,param_2,&local_40);
    return;
  case 5:
    if ((*param_1 == 0) || ((int)uVar2 < 0)) {
      FUN_004edab0(param_1,param_2,0);
      return;
    }
    if (0.0 <= (float)local_1c[10]) {
      local_ec = (float)(*(int *)(param_3 + 5) - local_1c[0xc]) * (float)_DAT_0058c0d2;
      if (local_ec < (float)_DAT_0058c0da) {
        local_ec = -30.0;
      }
      if ((float)_DAT_0058c0e2 < local_ec) {
        local_ec = 30.0;
      }
      if (local_ec <= 0.0) {
        return;
      }
    }
    local_e8 = (float)(_DAT_01cea3f8 - *(int *)(param_3 + 5)) * (float)_DAT_0058c0d2;
    if (local_e8 < 0.0) {
      local_e8 = 0.0;
    }
    if ((float)_DAT_0058c0e2 < local_e8) {
      local_e8 = 30.0;
    }
    local_1c[10] = (int)local_e8;
    local_1c[0xc] = _DAT_01cea3f8;
    return;
  case 6:
    if (-1 < (int)uVar2) {
      iVar6 = 0;
      if (0 < _DAT_01cea40c) {
        piVar4 = (int *)0x1cea410;
        do {
          if ((((short)piVar4[1] == (short)param_2[1]) && (*piVar4 == *param_2)) &&
             (*(int *)(param_3 + 5) == *(int *)(iVar6 * 0x120 + 0x1cea418))) break;
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 0x48;
        } while (iVar6 < _DAT_01cea40c);
      }
      if (iVar6 == _DAT_01cea40c) {
        FUN_004ec500(param_1,param_2,*(uint *)(param_3 + 5),local_1c,param_3 + 9);
      }
      local_70 = 9;
      local_6c = 7;
      local_6b = *(uint *)(param_3 + 5);
      FUN_004eb3c0(param_1,param_2,&local_70);
      return;
    }
    break;
  case 7:
    if (((*param_1 != 0) && (-1 < (int)uVar2)) && (0 < _DAT_01d06610)) {
      iVar6 = 0;
      iVar5 = _DAT_01d06610 * 0x114;
      do {
        while (*(int *)(&DAT_01d06618 + iVar6) == *(int *)(param_3 + 5)) {
          (&DAT_01d0661c)[iVar6 + uVar2] = 1;
          iVar6 = iVar6 + 0x114;
          if (iVar5 <= iVar6) {
            return;
          }
        }
        iVar6 = iVar6 + 0x114;
      } while (iVar6 < iVar5);
    }
    break;
  case 8:
    if (((*param_1 != 2) || ((int)uVar2 < 0)) || (uVar2 != param_1[0x44])) goto LAB_004eab0f;
    if ((param_1[1] == 1) && (*(int *)(param_3 + 5) == 1)) {
      param_1[1] = 2;
    }
    local_4c = 9;
    local_48 = 9;
    local_47 = param_1[param_1[0x45] * 0x1e + 0x17];
    FUN_004eb350(param_1,param_1[0x44],&local_4c);
    if (_DAT_01cea400 < *(int *)(param_3 + 5)) {
      _DAT_01cea400 = *(int *)(param_3 + 5);
      return;
    }
    break;
  case 9:
    if ((*param_1 != 1) || ((int)uVar2 < 0)) {
LAB_004eaea8:
      FUN_004edab0(param_1,param_2,0);
      return;
    }
    if ((param_1[1] == 2) && (local_1c[0xf] <= *(int *)(param_3 + 5))) {
      local_1c[0xf] = *(int *)(param_3 + 5);
      return;
    }
    break;
  case 10:
    if ((*param_1 != 1) || ((int)uVar2 < 0)) {
LAB_004eaf88:
      FUN_004edab0(param_1,param_2,0);
      return;
    }
    if (param_1[1] == 1) {
      if (local_1c[0x10] != 0) {
        local_14 = local_1c[0x10] - *(int *)(param_3 + 5);
        local_f0 = (float)local_14 * (float)_DAT_0058c0d2;
        if (local_f0 < (float)_DAT_0058c0da) {
          local_f0 = -30.0;
        }
        if ((float)_DAT_0058c0e2 < local_f0) {
          local_f0 = 30.0;
        }
        if (local_f0 <= 0.0) {
          return;
        }
      }
      pcVar7 = (char *)(param_3 + 9);
      local_1c[0x11] = *(int *)(param_3 + 0x1d);
      piVar4 = local_1c;
      do {
        cVar1 = *pcVar7;
        *(char *)piVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        *(char *)((int)piVar4 + 1) = cVar1;
        piVar4 = (int *)((int)piVar4 + 2);
      } while (cVar1 != '\0');
      FUN_004ece70(param_1);
      return;
    }
    break;
  case 0xb:
    if (((*param_1 != 2) || ((int)uVar2 < 0)) || (uVar2 != param_1[0x44])) goto LAB_004eaea8;
    if (param_1[1] == 1) {
      if (_DAT_01cea404 < *(int *)(param_3 + 5)) {
        iVar6 = FUN_004ec600(param_1,param_3);
        if (iVar6 == 0) {
          return;
        }
        _DAT_01cea404 = *(int *)(param_3 + 5);
      }
      local_64 = 9;
      local_60 = 0xc;
      local_5f = _DAT_01cea404;
      FUN_004eb350(param_1,param_1[0x44],&local_64);
      return;
    }
    break;
  case 0xc:
    if ((*param_1 != 1) || ((int)uVar2 < 0)) goto LAB_004eaea8;
    if ((param_1[1] == 1) && (local_1c[0xd] <= *(int *)(param_3 + 5))) {
      local_1c[0xd] = *(int *)(param_3 + 5);
      return;
    }
    break;
  case 0xd:
    if (*(int *)(param_3 + 5) != 0) {
      FUN_004edab0(param_1,param_2,0);
    }
    if (*param_1 == 1) {
      if (-1 < (int)uVar2) {
        FUN_004ecc80(param_1,uVar2);
      }
      FUN_004ece70(param_1);
    }
    if (((*param_1 == 2) && (-1 < (int)uVar2)) && (uVar2 == param_1[0x44])) {
      FUN_004e9e90(param_1,0);
      uVar3 = FUN_00548d30(local_34,&DAT_02dd10c4,0,0,&DAT_0058c059,
                           "You have been disconnected from the game");
      FUN_004ec500(param_1,uVar3);
      return;
    }
    break;
  case 0xf:
    if (((*param_1 != 2) || ((int)uVar2 < 0)) || (uVar2 != param_1[0x44])) goto LAB_004eaf88;
    local_2c = *(int *)(param_3 + 5);
    uVar2 = uVar2 ^ param_1[0x44];
    if (0 < _DAT_01d09c00) {
      local_14 = _DAT_01d09c00;
      iVar6 = 0;
      do {
        if (local_2c == *(int *)(iVar6 + 0x1d09c04)) {
          if (-1 < (int)uVar2) {
            piVar4 = (int *)(iVar6 + 0x1d09c04);
            goto LAB_004eb1a5;
          }
          break;
        }
        iVar6 = iVar6 + 100;
        uVar2 = uVar2 + 1;
      } while (iVar6 < _DAT_01d09c00 * 100);
    }
    if (0x1ff < _DAT_01d09c00) {
      _DAT_01cc4800 = "..\\core\\netgame.cpp";
      _DAT_01cc4804 = 299;
      FUN_004c8440("allocSimFrame - sim history list full");
    }
    piVar4 = (int *)(_DAT_01d09c00 * 100 + 0x1d09c04);
    _DAT_01d09c00 = _DAT_01d09c00 + 1;
    FUN_00563cc0(piVar4,0,100);
    *piVar4 = local_2c;
LAB_004eb1a5:
    piVar4[1] = *(int *)(param_3 + 9);
    piVar4[2] = *(int *)(param_3 + 0xd);
    iVar6 = 0;
    if (0 < param_1[7]) {
      local_18 = param_3;
      local_24 = piVar4;
      do {
        if (iVar6 < 0) {
          _DAT_01cc4800 = "..\\core\\netgame.cpp";
          _DAT_01cc4804 = 0x596;
          FUN_004c8440("Player list mismatch processing SimFrame Update packet!");
        }
        piVar4 = (int *)(local_18 + 0x11);
        piVar8 = local_24 + iVar6 * 0xb + 3;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = *piVar4;
          piVar4 = piVar4 + (uint)bVar9 * -2 + 1;
          piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
        }
        iVar6 = iVar6 + 1;
        local_18 = local_18 + 0x2c;
      } while (iVar6 < param_1[7]);
    }
    break;
  case 0x10:
    if ((*param_1 != 1) || ((int)uVar2 < 0)) {
      FUN_004edab0(param_1,param_2,0);
      return;
    }
    if ((param_1[1] == 3) && (local_1c[0x12] < *(int *)(param_3 + 5))) {
      local_1c[0x12] = *(int *)(param_3 + 5);
      piVar4 = (int *)(param_3 + 9);
      piVar8 = local_1c + 0x13;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = *piVar4;
        piVar4 = piVar4 + (uint)bVar9 * -2 + 1;
        piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
      }
      return;
    }
  }
  return;
}
