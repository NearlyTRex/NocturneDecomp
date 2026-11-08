// Name: FUN_0052d450
// Address: 0052d450
// Address Range: [[0052d450, 0052df45]]
// Convention: unknown
// Signature: void FUN_0052d450(int *param_1,int *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0052ddd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052d450(int *param_1,int *param_2,int param_3)

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
  uint local_47;
  uint local_40;
  byte local_3c;
  int local_3b;
  byte local_34 [8];
  int local_2c;
  int local_28;
  int *local_24;
  int *local_1c;
  int local_18;
  int local_14;
  
  bVar9 = 0;
  uVar2 = FUN_0052dff0(param_1,param_2);
  local_1c = (int *)0x0;
  if (-1 < (int)uVar2) {
    local_1c = param_1 + uVar2 * 0x1f + 8;
    local_1c[9] = _DAT_01d51da0;
  }
  switch(*(byte *)(param_3 + 4)) {
  case 1:
    local_28 = param_3;
    if (param_1[1] != 1) {
      local_58 = 9;
      local_54 = 3;
      FUN_0052dfc0(param_1,param_2,&local_58);
    }
    if ((int)uVar2 < 0) {
      uVar2 = FUN_0052e040(param_1,param_2,local_28 + 0xd,*(uint *)(local_28 + 0x21),
                           *(uint *)(local_28 + 0x25));
    }
    else {
      iVar6 = FUN_005c0f80(local_1c,local_28 + 0xd);
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
        FUN_0052fa80(param_1);
      }
    }
    pcVar7 = local_cb;
    local_e4 = 0x71;
    piVar4 = param_1 + 0x48;
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
    FUN_0052df50(param_1,uVar2,&local_e4);
    iVar6 = param_1[0x47];
    param_1[iVar6 * 0x1f + 0xf] = *(int *)(local_28 + 5);
    param_1[iVar6 * 0x1f + (uint)bVar9 * -2 + 0x10] = *(int *)(local_28 + 9 + (uint)bVar9 * -8);
    return;
  case 2:
    if (((*param_1 != 2) || ((int)uVar2 < 0)) || (uVar2 != param_1[0x46])) {
LAB_0052d72f:
      FUN_005306d0(param_1,param_2,0);
      return;
    }
    if (param_1[1] == 1) {
      pcVar7 = (char *)(param_3 + 5);
      _DAT_01d51da4 = 1;
      do {
        cVar1 = *pcVar7;
        *(char *)local_1c = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        *(char *)((int)local_1c + 1) = cVar1;
        local_1c = (int *)((int)local_1c + 2);
      } while (cVar1 != '\0');
      iVar6 = param_1[0x47];
      param_1[iVar6 * 0x1f + 0xf] = *(int *)(param_3 + 0x69);
      param_1[iVar6 * 0x1f + (uint)bVar9 * -2 + 0x10] = *(int *)(param_3 + 0x6d + (uint)bVar9 * -8);
      _DAT_01d51dac = 0xffffffff;
      return;
    }
    break;
  case 3:
    if (((*param_1 == 2) && (-1 < (int)uVar2)) && ((param_1[1] == 1 && (uVar2 == param_1[0x46])))) {
      _DAT_01d51da4 = *(uint *)(param_3 + 5);
      return;
    }
    break;
  case 4:
    if (*param_1 == 0) {
      FUN_005306d0(param_1,param_2,0);
      return;
    }
    local_4c = 9;
    local_48 = 5;
    local_47 = *(uint *)(param_3 + 5);
    FUN_0052dfc0(param_1,param_2,&local_4c);
    return;
  case 5:
    if ((*param_1 == 0) || ((int)uVar2 < 0)) {
      FUN_005306d0(param_1,param_2,0);
      return;
    }
    if (0.0 <= (float)local_1c[10]) {
      local_ec = (float)(*(int *)(param_3 + 5) - local_1c[0xc]) * (float)_DAT_005ebca8;
      if (local_ec < (float)_DAT_005ebcb0) {
        local_ec = -30.0;
      }
      if ((float)_DAT_005ebcb8 < local_ec) {
        local_ec = 30.0;
      }
      if (local_ec <= 0.0) {
        return;
      }
    }
    local_f0 = (float)(_DAT_01d51da0 - *(int *)(param_3 + 5)) * (float)_DAT_005ebca8;
    if (local_f0 < 0.0) {
      local_f0 = 0.0;
    }
    if ((float)_DAT_005ebcb8 < local_f0) {
      local_f0 = 30.0;
    }
    local_1c[10] = (int)local_f0;
    local_1c[0xc] = _DAT_01d51da0;
    return;
  case 6:
    if (-1 < (int)uVar2) {
      iVar6 = 0;
      if (0 < _DAT_01d51db4) {
        piVar4 = (int *)0x1d51db8;
        do {
          if ((((short)piVar4[1] == (short)param_2[1]) && (*piVar4 == *param_2)) &&
             (*(int *)(param_3 + 5) == *(int *)(iVar6 * 0x120 + 0x1d51dc0))) break;
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 0x48;
        } while (iVar6 < _DAT_01d51db4);
      }
      if (iVar6 == _DAT_01d51db4) {
        FUN_0052f100(param_1,param_2,*(uint *)(param_3 + 5),local_1c,param_3 + 9);
      }
      local_70 = 9;
      local_6c = 7;
      local_6b = *(uint *)(param_3 + 5);
      FUN_0052dfc0(param_1,param_2,&local_70);
      return;
    }
    break;
  case 7:
    if (((*param_1 != 0) && (-1 < (int)uVar2)) && (0 < _DAT_01d6dfb8)) {
      iVar6 = 0;
      iVar5 = _DAT_01d6dfb8 * 0x114;
      do {
        while (*(int *)(&DAT_01d6dfc0 + iVar6) == *(int *)(param_3 + 5)) {
          (&DAT_01d6dfc4)[iVar6 + uVar2] = 1;
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
    if (((*param_1 != 2) || ((int)uVar2 < 0)) || (uVar2 != param_1[0x46])) goto LAB_0052d72f;
    if ((param_1[1] == 1) && (*(int *)(param_3 + 5) == 1)) {
      param_1[1] = 2;
    }
    local_64 = 9;
    local_60 = 9;
    local_5f = param_1[param_1[0x47] * 0x1f + 0x17];
    FUN_0052df50(param_1,param_1[0x46],&local_64);
    if (_DAT_01d51da8 < *(int *)(param_3 + 5)) {
      _DAT_01d51da8 = *(int *)(param_3 + 5);
      return;
    }
    break;
  case 9:
    if ((*param_1 != 1) || ((int)uVar2 < 0)) {
LAB_0052dac3:
      FUN_005306d0(param_1,param_2,0);
      return;
    }
    if ((param_1[1] == 2) && (local_1c[0xf] <= *(int *)(param_3 + 5))) {
      local_1c[0xf] = *(int *)(param_3 + 5);
      return;
    }
    break;
  case 10:
    if ((*param_1 != 1) || ((int)uVar2 < 0)) goto LAB_0052dac3;
    if (param_1[1] == 1) {
      if (local_1c[0x10] != 0) {
        local_14 = local_1c[0x10] - *(int *)(param_3 + 5);
        local_e8 = (float)local_14 * (float)_DAT_005ebca8;
        if (local_e8 < (float)_DAT_005ebcb0) {
          local_e8 = -30.0;
        }
        if ((float)_DAT_005ebcb8 < local_e8) {
          local_e8 = 30.0;
        }
        if (local_e8 <= 0.0) {
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
      FUN_0052fa80(param_1);
      return;
    }
    break;
  case 0xb:
    if (((*param_1 != 2) || ((int)uVar2 < 0)) || (uVar2 != param_1[0x46])) goto LAB_0052dac3;
    if (param_1[1] == 1) {
      if (_DAT_01d51dac < *(int *)(param_3 + 5)) {
        iVar6 = FUN_0052f200(param_1,param_3);
        if (iVar6 == 0) {
          return;
        }
        _DAT_01d51dac = *(int *)(param_3 + 5);
      }
      local_3c = 0xc;
      local_3b = _DAT_01d51dac;
      local_40 = 9;
      FUN_0052df50(param_1,param_1[0x46],&local_40);
      return;
    }
    break;
  case 0xc:
    if ((*param_1 != 1) || ((int)uVar2 < 0)) goto LAB_0052dac3;
    if ((param_1[1] == 1) && (local_1c[0xd] <= *(int *)(param_3 + 5))) {
      local_1c[0xd] = *(int *)(param_3 + 5);
      return;
    }
    break;
  case 0xd:
    if (*(int *)(param_3 + 5) != 0) {
      FUN_005306d0(param_1,param_2,0);
    }
    if (*param_1 == 1) {
      if (-1 < (int)uVar2) {
        FUN_0052f890(param_1,uVar2);
      }
      FUN_0052fa80(param_1);
    }
    if (((*param_1 == 2) && (-1 < (int)uVar2)) && (uVar2 == param_1[0x46])) {
      FUN_0052cab0(param_1,0);
      uVar3 = FUN_0059c740(local_34,_DAT_02c8ae4c,0,0,&DAT_005ebc2f,
                           "You have been disconnected from the game");
      FUN_0052f100(param_1,uVar3);
      return;
    }
    break;
  case 0xf:
    if (((*param_1 != 2) || ((int)uVar2 < 0)) || (uVar2 != param_1[0x46])) {
      FUN_005306d0(param_1,param_2,0);
      return;
    }
    local_2c = *(int *)(param_3 + 5);
    uVar2 = uVar2 ^ param_1[0x46];
    if (0 < _DAT_01d715a8) {
      iVar6 = 0;
      do {
        if (local_2c == *(int *)(iVar6 + 0x1d715ac)) {
          if (-1 < (int)uVar2) {
            piVar4 = (int *)(iVar6 + 0x1d715ac);
            goto LAB_0052dd98;
          }
          break;
        }
        iVar6 = iVar6 + 0x6c;
        uVar2 = uVar2 + 1;
      } while (iVar6 < _DAT_01d715a8 * 0x6c);
    }
    if (0x1ff < _DAT_01d715a8) {
      _DAT_01d1d400 = "..\\core\\netgame.cpp";
      _DAT_01d1d404 = 299;
      FUN_005030e0("allocSimFrame - sim history list full");
    }
    piVar4 = (int *)(_DAT_01d715a8 * 0x6c + 0x1d715ac);
    _DAT_01d715a8 = _DAT_01d715a8 + 1;
    FUN_005bfb70(piVar4,0,0x6c);
    *piVar4 = local_2c;
LAB_0052dd98:
    piVar4[1] = *(int *)(param_3 + 9);
    piVar4[2] = *(int *)(param_3 + 0xd);
    iVar6 = 0;
    if (0 < param_1[7]) {
      local_18 = param_3;
      local_24 = piVar4;
      do {
        if (iVar6 < 0) {
          _DAT_01d1d400 = "..\\core\\netgame.cpp";
          _DAT_01d1d404 = 0x596;
          FUN_005030e0("Player list mismatch processing SimFrame Update packet!");
        }
        piVar4 = (int *)(local_18 + 0x11);
        piVar8 = local_24 + iVar6 * 0xc + 3;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar8 = *piVar4;
          piVar4 = piVar4 + (uint)bVar9 * -2 + 1;
          piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
        }
        iVar6 = iVar6 + 1;
        local_18 = local_18 + 0x30;
      } while (iVar6 < param_1[7]);
    }
    break;
  case 0x10:
    if ((*param_1 != 1) || ((int)uVar2 < 0)) goto LAB_0052dac3;
    if ((param_1[1] == 3) && (local_1c[0x12] < *(int *)(param_3 + 5))) {
      local_1c[0x12] = *(int *)(param_3 + 5);
      piVar4 = (int *)(param_3 + 9);
      piVar8 = local_1c + 0x13;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = *piVar4;
        piVar4 = piVar4 + (uint)bVar9 * -2 + 1;
        piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
      }
      return;
    }
  }
  return;
}
