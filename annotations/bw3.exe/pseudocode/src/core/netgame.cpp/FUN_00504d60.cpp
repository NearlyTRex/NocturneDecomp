// Name: FUN_00504d60
// Address: 00504d60
// Address Range: [[00504d60, 00505862]]
// Convention: unknown
// Signature: void FUN_00504d60(int *param_1,int *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005056f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00504d60(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  byte bVar10;
  float local_f8;
  float local_f4;
  float local_f0;
  uint local_ec;
  byte local_e8;
  char local_e7 [20];
  char local_d3 [80];
  int local_83;
  int iStack_7f;
  uint local_78;
  byte local_74;
  uint local_73;
  uint local_6c;
  byte local_68;
  int local_67;
  uint local_60;
  byte local_5c;
  uint local_5b;
  uint local_54;
  byte local_50;
  int local_4f;
  uint local_48;
  byte local_44;
  byte local_3c [8];
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int *local_20;
  int local_1c;
  int local_18;
  
  bVar10 = 0;
  uVar2 = FUN_00505900(param_1,param_2);
  local_20 = (int *)0x0;
  if (-1 < (int)uVar2) {
    local_20 = param_1 + uVar2 * 0x20 + 8;
    local_20[9] = _DAT_01da6478;
  }
  switch(*(byte *)(param_3 + 4)) {
  case 1:
    local_2c = param_3;
    if (param_1[1] != 1) {
      local_48 = 9;
      local_44 = 3;
      FUN_005058d0(param_1,param_2,&local_48);
    }
    if ((int)uVar2 < 0) {
      uVar2 = FUN_00505950(param_1,param_2,local_2c + 0xd,*(uint *)(local_2c + 0x21),
                           *(uint *)(local_2c + 0x25));
    }
    else {
      iVar6 = FUN_005a3d00(local_20,local_2c + 0xd);
      if (((iVar6 != 0) || (*(int *)(local_2c + 0x21) != local_20[5])) ||
         (*(int *)(local_2c + 0x25) != local_20[6])) {
        pcVar7 = (char *)(local_2c + 0xd);
        piVar4 = local_20;
        do {
          cVar1 = *pcVar7;
          *(char *)piVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          *(char *)((int)piVar4 + 1) = cVar1;
          piVar4 = (int *)((int)piVar4 + 2);
        } while (cVar1 != '\0');
        local_20[5] = *(int *)(local_2c + 0x21);
        local_20[6] = *(int *)(local_2c + 0x25);
        FUN_00507370(param_1);
      }
    }
    pcVar7 = local_d3;
    local_ec = 0x71;
    piVar4 = param_1 + 0x4a;
    local_e8 = 2;
    do {
      iVar6 = *piVar4;
      *pcVar7 = (char)iVar6;
      if ((char)iVar6 == '\0') break;
      cVar1 = *(char *)((int)piVar4 + 1);
      piVar4 = (int *)((int)piVar4 + 2);
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar7 = local_e7;
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
    local_83 = *param_2;
    (&iStack_7f)[(uint)bVar10 * -2] = param_2[(uint)bVar10 * -2 + 1];
    FUN_00505870(param_1,uVar2,&local_ec);
    iVar6 = param_1[0x49];
    param_1[iVar6 * 0x20 + 0xf] = *(int *)(local_2c + 5);
    param_1[iVar6 * 0x20 + (uint)bVar10 * -2 + 0x10] = *(int *)(local_2c + 9 + (uint)bVar10 * -8);
    return;
  case 2:
    if (((*param_1 != 2) || ((int)uVar2 < 0)) || (uVar2 != param_1[0x48])) {
LAB_0050502a:
      FUN_00507f90(param_1,param_2,0);
      return;
    }
    if (param_1[1] == 1) {
      pcVar7 = (char *)(param_3 + 5);
      _DAT_01da647c = 1;
      do {
        cVar1 = *pcVar7;
        *(char *)local_20 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        *(char *)((int)local_20 + 1) = cVar1;
        local_20 = (int *)((int)local_20 + 2);
      } while (cVar1 != '\0');
      iVar6 = param_1[0x49];
      param_1[iVar6 * 0x20 + 0xf] = *(int *)(param_3 + 0x69);
      param_1[iVar6 * 0x20 + (uint)bVar10 * -2 + 0x10] =
           *(int *)(param_3 + 0x6d + (uint)bVar10 * -8);
      _DAT_01da6484 = 0xffffffff;
      return;
    }
    break;
  case 3:
    if (((*param_1 == 2) && (-1 < (int)uVar2)) && ((param_1[1] == 1 && (uVar2 == param_1[0x48])))) {
      _DAT_01da647c = *(uint *)(param_3 + 5);
      return;
    }
    break;
  case 4:
    if (*param_1 == 0) {
      FUN_00507f90(param_1,param_2,0);
      return;
    }
    local_60 = 9;
    local_5c = 5;
    local_5b = *(uint *)(param_3 + 5);
    FUN_005058d0(param_1,param_2,&local_60);
    return;
  case 5:
    if ((*param_1 == 0) || ((int)uVar2 < 0)) {
      FUN_00507f90(param_1,param_2,0);
      return;
    }
    if (0.0 <= (float)local_20[10]) {
      local_f8 = (float)(*(int *)(param_3 + 5) - local_20[0xc]) * (float)_DAT_005caab9;
      if (local_f8 < (float)_DAT_005caac1) {
        local_f8 = -30.0;
      }
      if ((float)_DAT_005caac9 < local_f8) {
        local_f8 = 30.0;
      }
      if (local_f8 <= 0.0) {
        return;
      }
    }
    local_f4 = (float)(_DAT_01da6478 - *(int *)(param_3 + 5)) * (float)_DAT_005caab9;
    if (local_f4 < 0.0) {
      local_f4 = 0.0;
    }
    if ((float)_DAT_005caac9 < local_f4) {
      local_f4 = 30.0;
    }
    local_20[10] = (int)local_f4;
    local_20[0xc] = _DAT_01da6478;
    return;
  case 6:
    if (-1 < (int)uVar2) {
      iVar6 = 0;
      if (0 < _DAT_01da648c) {
        piVar4 = (int *)0x1da6490;
        do {
          if ((((short)piVar4[1] == (short)param_2[1]) && (*param_2 == *piVar4)) &&
             (*(int *)(param_3 + 5) == *(int *)(iVar6 * 0x120 + 0x1da6498))) break;
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 0x48;
        } while (iVar6 < _DAT_01da648c);
      }
      if (iVar6 == _DAT_01da648c) {
        FUN_00506a00(param_1,param_2,*(uint *)(param_3 + 5),local_20,param_3 + 9);
      }
      local_78 = 9;
      local_74 = 7;
      local_73 = *(uint *)(param_3 + 5);
      FUN_005058d0(param_1,param_2,&local_78);
      return;
    }
    break;
  case 7:
    if (((*param_1 != 0) && (-1 < (int)uVar2)) && (0 < _DAT_01dc2690)) {
      iVar6 = 0;
      iVar8 = _DAT_01dc2690 * 0x114;
      do {
        while (*(int *)(&DAT_01dc2698 + iVar6) == *(int *)(param_3 + 5)) {
          (&DAT_01dc269c)[iVar6 + uVar2] = 1;
          iVar6 = iVar6 + 0x114;
          if (iVar8 <= iVar6) {
            return;
          }
        }
        iVar6 = iVar6 + 0x114;
      } while (iVar6 < iVar8);
    }
    break;
  case 8:
    if (((*param_1 != 2) || ((int)uVar2 < 0)) || (uVar2 != param_1[0x48])) goto LAB_0050502a;
    if ((param_1[1] == 1) && (*(int *)(param_3 + 5) == 1)) {
      param_1[1] = 2;
    }
    local_6c = 9;
    local_68 = 9;
    local_67 = param_1[param_1[0x49] * 0x20 + 0x17];
    FUN_00505870(param_1,param_1[0x48],&local_6c);
    if (_DAT_01da6480 < *(int *)(param_3 + 5)) {
      _DAT_01da6480 = *(int *)(param_3 + 5);
      return;
    }
    break;
  case 9:
    if ((*param_1 != 1) || ((int)uVar2 < 0)) {
LAB_005053b9:
      FUN_00507f90(param_1,param_2,0);
      return;
    }
    if ((param_1[1] == 2) && (local_20[0xf] <= *(int *)(param_3 + 5))) {
      local_20[0xf] = *(int *)(param_3 + 5);
      return;
    }
    break;
  case 10:
    if ((*param_1 != 1) || ((int)uVar2 < 0)) {
      FUN_00507f90(param_1,param_2,0);
      return;
    }
    if (param_1[1] == 1) {
      if (local_20[0x10] != 0) {
        local_18 = local_20[0x10] - *(int *)(param_3 + 5);
        local_f0 = (float)local_18 * (float)_DAT_005caab9;
        if (local_f0 < (float)_DAT_005caac1) {
          local_f0 = -30.0;
        }
        if ((float)_DAT_005caac9 < local_f0) {
          local_f0 = 30.0;
        }
        if (local_f0 <= 0.0) {
          return;
        }
      }
      pcVar7 = (char *)(param_3 + 9);
      local_20[0x11] = *(int *)(param_3 + 0x1d);
      piVar4 = local_20;
      do {
        cVar1 = *pcVar7;
        *(char *)piVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        *(char *)((int)piVar4 + 1) = cVar1;
        piVar4 = (int *)((int)piVar4 + 2);
      } while (cVar1 != '\0');
      FUN_00507370(param_1);
      return;
    }
    break;
  case 0xb:
    if (((*param_1 != 2) || ((int)uVar2 < 0)) || (uVar2 != param_1[0x48])) goto LAB_005053b9;
    if (param_1[1] == 1) {
      if (_DAT_01da6484 < *(int *)(param_3 + 5)) {
        iVar6 = FUN_00506b00(param_1,param_3);
        if (iVar6 == 0) {
          return;
        }
        _DAT_01da6484 = *(int *)(param_3 + 5);
      }
      local_54 = 9;
      local_50 = 0xc;
      local_4f = _DAT_01da6484;
      FUN_00505870(param_1,param_1[0x48],&local_54);
      return;
    }
    break;
  case 0xc:
    if ((*param_1 != 1) || ((int)uVar2 < 0)) goto LAB_005053b9;
    if ((param_1[1] == 1) && (local_20[0xd] <= *(int *)(param_3 + 5))) {
      local_20[0xd] = *(int *)(param_3 + 5);
      return;
    }
    break;
  case 0xd:
    if (*(int *)(param_3 + 5) != 0) {
      FUN_00507f90(param_1,param_2,0);
    }
    if (*param_1 == 1) {
      if (-1 < (int)uVar2) {
        FUN_005071a0(param_1,uVar2);
      }
      FUN_00507370(param_1);
    }
    if (((*param_1 == 2) && (-1 < (int)uVar2)) && (uVar2 == param_1[0x48])) {
      FUN_005043b0(param_1,0);
      uVar3 = FUN_0056f730(local_3c,_DAT_02cfd89c,0,0,&DAT_005caa40,
                           "You have been disconnected from the game");
      FUN_00506a00(param_1,uVar3);
      return;
    }
    break;
  case 0xf:
    local_30 = param_3;
    if (((*param_1 != 2) || ((int)uVar2 < 0)) || (uVar2 != param_1[0x48])) goto LAB_0050502a;
    local_34 = *(int *)(param_3 + 5);
    uVar2 = uVar2 ^ param_1[0x48];
    if (0 < _DAT_01dc5c80) {
      iVar6 = 0;
      do {
        if (local_34 == *(int *)(iVar6 + 0x1dc5c84)) {
          if (-1 < (int)uVar2) {
            piVar4 = (int *)(iVar6 + 0x1dc5c84);
            goto LAB_005056b2;
          }
          break;
        }
        iVar6 = iVar6 + 0x74;
        uVar2 = uVar2 + 1;
      } while (iVar6 < _DAT_01dc5c80 * 0x74);
    }
    if (0x1ff < _DAT_01dc5c80) {
      _DAT_01d71de0 = "..\\core\\netgame.cpp";
      _DAT_01d71de4 = 299;
      FUN_004e4330("allocSimFrame - sim history list full");
    }
    piVar4 = (int *)(_DAT_01dc5c80 * 0x74 + 0x1dc5c84);
    _DAT_01dc5c80 = _DAT_01dc5c80 + 1;
    FUN_005a28f0(piVar4,0,0x74);
    *piVar4 = local_34;
LAB_005056b2:
    piVar4[1] = *(int *)(local_30 + 9);
    piVar4[2] = *(int *)(local_30 + 0xd);
    iVar6 = 0;
    if (0 < param_1[7]) {
      local_1c = local_30;
      local_28 = piVar4;
      do {
        if (iVar6 < 0) {
          _DAT_01d71de0 = "..\\core\\netgame.cpp";
          _DAT_01d71de4 = 0x596;
          FUN_004e4330("Player list mismatch processing SimFrame Update packet!");
        }
        iVar8 = iVar6 * 0xd;
        iVar6 = iVar6 + 1;
        piVar4 = (int *)(local_1c + 0x11);
        piVar9 = local_28 + iVar8 + 3;
        for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar9 = *piVar4;
          piVar4 = piVar4 + (uint)bVar10 * -2 + 1;
          piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
        }
        local_1c = local_1c + 0x34;
      } while (iVar6 < param_1[7]);
    }
    break;
  case 0x10:
    if ((*param_1 != 1) || ((int)uVar2 < 0)) {
      FUN_00507f90(param_1,param_2,0);
      return;
    }
    if ((param_1[1] == 3) && (local_20[0x12] < *(int *)(param_3 + 5))) {
      local_20[0x12] = *(int *)(param_3 + 5);
      piVar4 = (int *)(param_3 + 9);
      piVar9 = local_20 + 0x13;
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *piVar4;
        piVar4 = piVar4 + (uint)bVar10 * -2 + 1;
        piVar9 = piVar9 + (uint)bVar10 * -2 + 1;
      }
      return;
    }
  }
  return;
}
