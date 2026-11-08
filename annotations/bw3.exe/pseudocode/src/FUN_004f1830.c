// Name: FUN_004f1830
// Address: 004f1830
// Address Range: [[004f1830, 004f2081]]
// Convention: unknown
// Signature: void FUN_004f1830(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f1830(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int *local_14;
  
  local_28 = param_2[6] - param_1[6];
  local_2c = param_3[5] - param_2[5];
  local_20 = local_28 * local_2c;
  local_30 = param_2[5] - param_1[5];
  local_24 = param_3[6] - param_2[6];
  local_1c = local_30 * local_24;
  if (_DAT_01d76cf8 == 0) {
    if (local_1c <= local_20) {
      return;
    }
  }
  else if (local_20 <= local_1c) {
    return;
  }
  if (_DAT_01c6cee8 != 0) {
    local_c0 = FUN_004f1810(*param_1 * _DAT_005c822d);
    local_bc = FUN_004f1810(param_1[1] * _DAT_005c822d);
    local_b8 = FUN_004f1810(param_1[2] * _DAT_005c822d);
    local_b4 = FUN_004f1810(param_1[3] * _DAT_005c8231);
    local_b0 = FUN_004f1810(param_1[5] * _DAT_005c8235);
    local_ac = FUN_004f1810(param_1[6] * _DAT_005c8235);
    local_a8 = FUN_004f1810(param_1[7] * _DAT_005c822d * _DAT_005c8235);
    local_a4 = FUN_004f1810(param_1[8] * _DAT_005c822d * _DAT_005c8235);
    local_a0 = FUN_004f1810(param_1[0xb] * _DAT_005c8239);
    local_9c = FUN_004f1810(param_1[10] * _DAT_005c8239);
    local_98 = FUN_004f1810(param_1[9] * _DAT_005c8239);
    if ((DAT_01d76c38 & 8) == 0) {
      fVar1 = param_1[0xc];
    }
    else {
      fVar1 = param_1[0xd];
    }
    local_94 = FUN_004f1810(fVar1 * _DAT_005c8239);
    local_90 = FUN_004f1810(*param_2 * _DAT_005c822d);
    local_8c = FUN_004f1810(param_2[1] * _DAT_005c822d);
    local_88 = FUN_004f1810(param_2[2] * _DAT_005c822d);
    local_84 = FUN_004f1810(param_2[3] * _DAT_005c8231);
    local_80 = FUN_004f1810(param_2[5] * _DAT_005c8235);
    local_7c = FUN_004f1810(param_2[6] * _DAT_005c8235);
    local_78 = FUN_004f1810(param_2[7] * _DAT_005c822d * _DAT_005c8235);
    local_74 = FUN_004f1810(param_2[8] * _DAT_005c822d * _DAT_005c8235);
    local_70 = FUN_004f1810(param_2[0xb] * _DAT_005c8239);
    local_6c = FUN_004f1810(param_2[10] * _DAT_005c8239);
    local_68 = FUN_004f1810(param_2[9] * _DAT_005c8239);
    if ((DAT_01d76c38 & 8) == 0) {
      fVar1 = param_2[0xc];
    }
    else {
      fVar1 = param_2[0xd];
    }
    local_64 = FUN_004f1810(fVar1 * _DAT_005c8239);
    local_60 = FUN_004f1810(*param_3 * _DAT_005c822d);
    local_5c = FUN_004f1810(param_3[1] * _DAT_005c822d);
    local_58 = FUN_004f1810(param_3[2] * _DAT_005c822d);
    local_54 = FUN_004f1810(param_3[3] * _DAT_005c8231);
    local_50 = FUN_004f1810(param_3[5] * _DAT_005c8235);
    local_4c = FUN_004f1810(param_3[6] * _DAT_005c8235);
    local_48 = FUN_004f1810(param_3[7] * (float)_DAT_005c823d * (float)_DAT_005c8245);
    local_44 = FUN_004f1810(param_3[8] * (float)_DAT_005c823d * (float)_DAT_005c8245);
    local_40 = FUN_004f1810(param_3[0xb] * _DAT_005c8239);
    local_3c = FUN_004f1810(param_3[10] * _DAT_005c8239);
    local_38 = FUN_004f1810(param_3[9] * _DAT_005c8239);
    if ((DAT_01d76c38 & 8) == 0) {
      fVar1 = param_3[0xc];
    }
    else {
      fVar1 = param_3[0xd];
    }
    local_34 = FUN_004f1810(fVar1 * _DAT_005c8239);
    FUN_00565c10(&local_c0,3,_DAT_01c6e2b4);
    return;
  }
  _DAT_01d80d4c = _DAT_01c6cee8;
  _DAT_01d80844 = _DAT_01c6cee8;
  _DAT_01d80d48 = 0x4b0;
  FUN_004f13a0(param_1,param_2);
  FUN_004f13a0(param_2,param_3);
  FUN_004f13a0(param_3,param_1);
  local_14 = (int *)&DAT_01d80848;
  iVar3 = 0;
  if (0 < _DAT_01d80844) {
    do {
      if ((_DAT_01d80d48 == *local_14) && (local_14 != (int *)0x0)) goto LAB_004f1950;
      iVar3 = iVar3 + 1;
      local_14 = local_14 + 0x14;
    } while (iVar3 < _DAT_01d80844);
  }
  local_14 = (int *)0x0;
LAB_004f1950:
  if (local_14 != (int *)0x0) {
    iVar3 = 0;
    piVar2 = (int *)&DAT_01d80848;
    if (0 < _DAT_01d80844) {
      do {
        if ((_DAT_01d80d48 == *piVar2) && (piVar2 != local_14)) goto LAB_004f1992;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 0x14;
      } while (iVar3 < _DAT_01d80844);
    }
    piVar2 = (int *)0x0;
LAB_004f1992:
    if (piVar2 != (int *)0x0) {
      local_18 = _DAT_01d80d48;
      do {
        iVar3 = _DAT_01d80844;
        if (local_14[1] <= local_18) {
          *local_14 = -1;
          local_14 = (int *)&DAT_01d80848;
          iVar4 = 0;
          if (0 < iVar3) {
            do {
              if ((local_18 == *local_14) && (local_14 != piVar2)) goto LAB_004f19f0;
              iVar4 = iVar4 + 1;
              local_14 = local_14 + 0x14;
            } while (iVar4 < _DAT_01d80844);
          }
          local_14 = (int *)0x0;
LAB_004f19f0:
          if (local_14 == (int *)0x0) {
            return;
          }
        }
        if (piVar2[1] <= local_18) {
          *piVar2 = -1;
          iVar3 = 0;
          piVar2 = (int *)&DAT_01d80848;
          if (0 < _DAT_01d80844) {
            do {
              if ((local_18 == *piVar2) && (piVar2 != local_14)) goto LAB_004f1a46;
              iVar3 = iVar3 + 1;
              piVar2 = piVar2 + 0x14;
            } while (iVar3 < _DAT_01d80844);
          }
          piVar2 = (int *)0x0;
LAB_004f1a46:
          if (piVar2 == (int *)0x0) {
            return;
          }
        }
        if (_DAT_01c6e2a0 == 0) {
          if (DAT_005fba20 == 0x20) {
            FUN_00562c33();
          }
          else {
            FUN_00562e69();
          }
        }
        else if (DAT_005fba20 == 0x20) {
          FUN_00561fdc();
        }
        else {
          FUN_005625a3();
        }
        local_14[2] = local_14[2] + local_14[3];
        local_14[6] = local_14[6] + local_14[7];
        local_14[8] = local_14[8] + local_14[9];
        local_14[10] = local_14[10] + local_14[0xb];
        local_14[4] = local_14[4] + local_14[5];
        local_14[0xe] = local_14[0xe] + local_14[0xf];
        local_14[0x10] = local_14[0x10] + local_14[0x11];
        local_14[0x12] = local_14[0x12] + local_14[0x13];
        local_14[0xc] = local_14[0xc] + local_14[0xd];
        piVar2[2] = piVar2[2] + piVar2[3];
        piVar2[6] = piVar2[6] + piVar2[7];
        piVar2[8] = piVar2[8] + piVar2[9];
        piVar2[10] = piVar2[10] + piVar2[0xb];
        piVar2[4] = piVar2[4] + piVar2[5];
        local_18 = local_18 + 1;
        piVar2[0xe] = piVar2[0xe] + piVar2[0xf];
        piVar2[0x10] = piVar2[0x10] + piVar2[0x11];
        piVar2[0x12] = piVar2[0x12] + piVar2[0x13];
        piVar2[0xc] = piVar2[0xc] + piVar2[0xd];
      } while( true );
    }
  }
  return;
}
