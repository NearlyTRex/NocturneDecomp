// Name: FUN_004f0c20
// Address: 004f0c20
// Address Range: [[004f0c20, 004f14fe]]
// Convention: unknown
// Signature: undefined4 FUN_004f0c20(float *param_1,float *param_2,undefined4 *param_3,int param_4)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004f0c20(float *param_1,float *param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_1040 [963];
  byte *puVar11;
  float local_118;
  float local_114;
  float local_110;
  byte local_10c [12];
  float local_100;
  float local_fc;
  float local_f8;
  byte local_f4 [12];
  byte local_e8 [12];
  float local_dc;
  float local_d8;
  float local_d4;
  byte local_d0 [12];
  byte local_c4 [12];
  float local_b8;
  float local_b4;
  float local_b0;
  uint local_ac;
  uint local_a4;
  int local_a0;
  uint local_9c;
  int local_98;
  float local_94;
  float local_90;
  float local_8c;
  byte local_88 [12];
  float local_7c;
  float local_78;
  float local_74;
  byte local_70 [12];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float afStack_54 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  float local_2c;
  byte local_28 [12];
  uint local_1c;
  uint local_18;
  int local_14;
  
  bVar9 = 0;
  FUN_0046b700(&DAT_01fba938,param_2);
  param_1[6] = local_58;
  param_1[(uint)bVar9 * -2 + 7] = afStack_54[(uint)bVar9 * -2];
  (param_1 + (uint)bVar9 * -2 + 7)[(uint)bVar9 * -2 + 1] =
       afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  switch(param_4 % 9) {
  case 1:
    local_a0 = 4;
    break;
  case 2:
    local_a0 = -4;
    break;
  case 3:
    local_98 = 4;
    break;
  case 4:
    local_98 = -4;
    break;
  case 5:
    local_98 = 4;
    local_a0 = 4;
    break;
  case 6:
    local_98 = 4;
    local_a0 = -4;
    break;
  case 7:
    local_98 = -4;
    local_a0 = -4;
    break;
  case 8:
    local_98 = -4;
    local_a0 = 4;
  }
  local_ac = (int)param_1[3] - (int)param_1[6];
  if (0x31 < (int)((local_ac ^ (int)local_ac >> 0x1f) - ((int)local_ac >> 0x1f))) {
    afStack_54[2] = *param_1 - *param_2;
    afStack_54[3] = param_1[1] - param_2[1];
    local_44 = param_1[2] - param_2[2];
    pfVar2 = afStack_54 + 2;
    puVar11 = local_d0;
LAB_004f0ce0:
    puVar1 = (uint *)FUN_0054e4a0(puVar11,pfVar2);
    if (puVar1 != param_3) {
      *param_3 = *puVar1;
      param_3[1] = puVar1[1];
      param_3[2] = puVar1[2];
    }
    return 2;
  }
  local_a4 = (int)param_1[5] - (int)param_1[8];
  if (0x31 < (int)((local_a4 ^ (int)local_a4 >> 0x1f) - ((int)local_a4 >> 0x1f))) {
    local_64 = *param_1 - *param_2;
    local_60 = param_1[1] - param_2[1];
    local_5c = param_1[2] - param_2[2];
    puVar1 = (uint *)FUN_0054e4a0(local_88,&local_64);
    if (puVar1 == param_3) {
      return 2;
    }
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[2] = puVar1[2];
    return 2;
  }
  _DAT_01e3161c = (int)param_1[6] - (int)param_1[9];
  _DAT_01e31628 = 0x32;
  _DAT_01e31624 = 0x32;
  _DAT_01e31620 = (int)param_1[8] - (int)param_1[0xb];
  if ((((_DAT_01e3161c < 0) || (99 < _DAT_01e3161c)) || (_DAT_01e31620 < 0)) || (99 < _DAT_01e31620)
     ) {
    local_dc = *param_1 - *param_2;
    local_d8 = param_1[1] - param_2[1];
    local_d4 = param_1[2] - param_2[2];
    puVar1 = (uint *)FUN_0054e4a0(local_c4,&local_dc);
    if (puVar1 == param_3) {
      return 2;
    }
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[2] = puVar1[2];
    return 2;
  }
  if ((_DAT_01e3161c == 0x32) && (_DAT_01e31620 == 0x32)) {
    local_40 = *param_1 - *param_2;
    local_3c = param_1[1] - param_2[1];
    local_38 = param_1[2] - param_2[2];
    puVar1 = (uint *)FUN_0054e4a0(local_70,&local_40);
    if (puVar1 != param_3) {
      *param_3 = *puVar1;
      param_3[1] = puVar1[1];
      param_3[2] = puVar1[2];
    }
    return 1;
  }
  fVar10 = (float10)*param_1;
  pfVar2 = (float *)FUN_00563a30();
  local_14 = (int)ROUND(fVar10);
  fVar10 = (float10)*pfVar2;
  FUN_00563a30();
  local_14 = (int)ROUND(fVar10);
  fVar10 = (float10)param_1[2];
  iVar3 = FUN_00563a30();
  local_14 = (int)ROUND(fVar10);
  fVar10 = (float10)*(float *)(iVar3 + 8);
  FUN_00563a30();
  local_14 = (int)ROUND(fVar10);
  uVar4 = FUN_004f04a0(param_1,_DAT_01e31620,_DAT_01e3161c,param_1[7]);
  uVar5 = FUN_004f04a0(param_1,_DAT_01e31628,_DAT_01e31624,param_1[4]);
  iVar3 = FUN_004f0540(param_1,_DAT_01e3161c,_DAT_01e31620,uVar4,_DAT_01e31624,_DAT_01e31628,uVar5);
  if (iVar3 != 0) {
    local_34 = _DAT_01fba96c;
    local_30 = _DAT_01fba970;
    local_2c = _DAT_01fba974;
    if (&local_7c != param_1) {
      local_7c = *param_1;
      local_78 = param_1[1];
      local_74 = param_1[2];
    }
    local_14 = local_98;
    local_7c = (float)local_a0 * _DAT_01fba96c + local_7c;
    local_74 = (float)local_98 * _DAT_01fba974 + local_74;
    local_b8 = *param_1 - *param_2;
    local_b4 = param_1[1] - param_2[1];
    local_b0 = param_1[2] - param_2[2];
    puVar1 = (uint *)FUN_0054e4a0(local_28,&local_b8);
    if (puVar1 != param_3) {
      *param_3 = *puVar1;
      param_3[1] = puVar1[1];
      param_3[2] = puVar1[2];
    }
    return 1;
  }
  iVar3 = FUN_004f0790(param_1,_DAT_01e31624,_DAT_01e31628,_DAT_01e3161c,_DAT_01e31620);
  if (iVar3 == 0) {
    iVar3 = FUN_004f20a0(param_1,param_1[7]);
    if (iVar3 != 0) {
      uVar6 = (int)param_1[_DAT_01e31628 * 100 + _DAT_01e31624 + 0xc] - (int)param_1[4] >> 0x1f;
      if (3 < (int)(((int)param_1[_DAT_01e31628 * 100 + _DAT_01e31624 + 0xc] - (int)param_1[4] ^
                    uVar6) - uVar6)) {
        local_94 = *param_1 - *param_2;
        local_90 = param_1[1] - param_2[1];
        local_8c = param_1[2] - param_2[2];
        puVar1 = (uint *)FUN_0054e4a0(local_e8,&local_94);
        if (puVar1 == param_3) {
          return 2;
        }
        *param_3 = *puVar1;
        param_3[1] = puVar1[1];
        param_3[2] = puVar1[2];
        return 2;
      }
      local_18 = 0xffffffff;
      iVar3 = _DAT_01e31624;
      iVar7 = _DAT_01e31628;
      uVar6 = 0xffffffff;
      do {
        uVar8 = (uint)*(byte *)(iVar7 * 100 + 0x1e40098 + iVar3);
        local_1c = local_18;
        local_18 = uVar6;
        if (uVar8 == 0) {
          local_118 = *param_1 - *param_2;
          local_114 = param_1[1] - param_2[1];
          local_110 = param_1[2] - param_2[2];
          puVar1 = (uint *)FUN_0054e4a0(local_10c,&stack0xfffffee8);
          if (puVar1 == param_3) {
            return 2;
          }
          *param_3 = *puVar1;
          param_3[1] = puVar1[1];
          param_3[2] = puVar1[2];
          return 2;
        }
        iVar3 = iVar3 - *(int *)(&DAT_005be0e8 + uVar8 * 4);
        iVar7 = iVar7 - *(int *)(&DAT_005be10c + uVar8 * 4);
        if (iVar3 < 0) {
          _DAT_01cc4800 = "@..\\core\\path.cpp" + 1;
          _DAT_01cc4804 = 0x547;
          FUN_004c8440("Out of bounds1!");
        }
        if (iVar7 < 0) {
          _DAT_01cc4800 = "..\\core\\path.cpp";
          _DAT_01cc4804 = 0x548;
          FUN_004c8440("Out of bounds2!");
        }
        if (99 < iVar3) {
          _DAT_01cc4800 = "..\\core\\path.cpp";
          _DAT_01cc4804 = 0x549;
          FUN_004c8440("Out of bounds3!");
        }
        if (99 < iVar7) {
          _DAT_01cc4800 = "..\\core\\path.cpp";
          _DAT_01cc4804 = 0x54a;
          FUN_004c8440("Out of bounds4!");
        }
        uVar6 = uVar8;
      } while ((iVar3 != _DAT_01e3161c) || (iVar7 != _DAT_01e31620));
      *param_3 = 0;
      param_3[2] = 0;
      uVar4 = FUN_004efeb0(param_1,uVar8,local_18,local_1c,param_2);
      param_3[1] = uVar4;
      return 1;
    }
    local_100 = *param_1 - *param_2;
    local_fc = param_1[1] - param_2[1];
    local_f8 = param_1[2] - param_2[2];
    pfVar2 = &local_100;
    puVar11 = local_f4;
    goto LAB_004f0ce0;
  }
  if (iVar3 == 1) {
    if (_DAT_01e31624 <= _DAT_01e3161c) {
      if (_DAT_01e31624 < _DAT_01e3161c) {
        uVar4 = 4;
      }
      else if (_DAT_01e31620 < _DAT_01e31628) {
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
      }
      goto LAB_004f1185;
    }
  }
  else {
    if (_DAT_01e31620 < _DAT_01e31628) {
      uVar4 = 1;
      goto LAB_004f1185;
    }
    if (_DAT_01e31628 < _DAT_01e31620) {
      uVar4 = 2;
      goto LAB_004f1185;
    }
    if (_DAT_01e31624 <= _DAT_01e3161c) {
      uVar4 = 4;
      goto LAB_004f1185;
    }
  }
  uVar4 = 3;
LAB_004f1185:
  *param_3 = 0;
  param_3[2] = 0;
  uVar4 = FUN_004efeb0(param_1,uVar4,0xffffffff,0xffffffff,param_2);
  param_3[1] = uVar4;
  return 1;
}
