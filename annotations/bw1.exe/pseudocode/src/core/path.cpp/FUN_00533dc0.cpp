// Name: FUN_00533dc0
// Address: 00533dc0
// Address Range: [[00533dc0, 00534897]]
// Convention: unknown
// Signature: undefined4 FUN_00533dc0(float *param_1,float *param_2,float *param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00533dc0(float *param_1,float *param_2,float *param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_11cc [1011];
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  int local_1b4;
  uint local_1b0;
  int local_1ac;
  float local_1a8;
  float afStack_1a4 [4];
  float local_194;
  float local_190 [3];
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_148 [3];
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c [2];
  uint local_124;
  uint local_11c;
  float local_118;
  float afStack_114 [4];
  float local_104;
  float local_100;
  float local_f4 [3];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc [3];
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_88 [3];
  float local_7c [3];
  float local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_40 [3];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_1c;
  uint local_18;
  int local_14;
  
  bVar8 = 0;
  FUN_0048ef40(&DAT_01fe5c1c,param_2);
  param_1[6] = local_100;
  param_1[(uint)bVar8 * -2 + 7] = afStack_114[(uint)bVar8 * -2 + 6];
  (param_1 + (uint)bVar8 * -2 + 7)[(uint)bVar8 * -2 + 1] =
       afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  local_1b4 = 0;
  local_1b0 = 0;
  local_1ac = 0;
  switch(param_4 % 9) {
  case 1:
    local_1b4 = 4;
    break;
  case 2:
    local_1b4 = -4;
    break;
  case 3:
    local_1ac = 4;
    break;
  case 4:
    local_1ac = -4;
    break;
  case 5:
    local_1ac = 4;
    local_1b4 = 4;
    break;
  case 6:
    local_1ac = 4;
    local_1b4 = -4;
    break;
  case 7:
    local_1ac = -4;
    local_1b4 = -4;
    break;
  case 8:
    local_1ac = -4;
    local_1b4 = 4;
  }
  local_124 = (int)param_1[3] - (int)param_1[6];
  if (0x31 < (int)((local_124 ^ (int)local_124 >> 0x1f) - ((int)local_124 >> 0x1f))) {
    local_130 = *param_1 - *param_2;
    local_12c[0] = param_1[1] - param_2[1];
    local_12c[1] = param_1[2] - param_2[2];
    local_dc[0] = *param_1 - *param_2;
    afStack_114[(uint)bVar8 * -2 + 0xf] = local_12c[(uint)bVar8 * -2];
    afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
         local_12c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    FUN_005a7520(afStack_114 + 0xe);
    local_c4 = local_1a8;
    afStack_114[(uint)bVar8 * -2 + 0x15] = afStack_1a4[(uint)bVar8 * -2];
    afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16] =
         afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (afStack_114 + 0x14 != param_3) {
      *param_3 = local_c4;
      param_3[1] = local_c0;
      param_3[2] = local_bc;
    }
    return 2;
  }
  local_11c = (int)param_1[5] - (int)param_1[8];
  if (0x31 < (int)((local_11c ^ (int)local_11c >> 0x1f) - ((int)local_11c >> 0x1f))) {
    local_1d8 = *param_1 - *param_2;
    local_1d4 = param_1[1] - param_2[1];
    local_1d0 = param_1[2] - param_2[2];
    local_88[0] = *param_1 - *param_2;
    afStack_114[(uint)bVar8 * -2 + 0x24] = *(float *)((int)&stack0xfffffe2c + (uint)bVar8 * -8);
    afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x25] =
         *(float *)((int)&stack0xfffffe30 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    FUN_005a7520(afStack_114 + 0x23);
    local_58 = local_94;
    afStack_114[(uint)bVar8 * -2 + 0x30] = afStack_114[(uint)bVar8 * -2 + 0x21];
    afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x31] =
         afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22];
    if (afStack_114 + 0x2f == param_3) {
      return 2;
    }
    *param_3 = local_58;
    param_3[1] = local_54;
    param_3[2] = local_50;
    return 2;
  }
  _DAT_01e6c16c = (int)param_1[6] - (int)param_1[9];
  _DAT_01e6c178 = 0x32;
  _DAT_01e6c174 = 0x32;
  _DAT_01e6c170 = (int)param_1[8] - (int)param_1[0xb];
  if ((((_DAT_01e6c16c < 0) || (99 < _DAT_01e6c16c)) || (_DAT_01e6c170 < 0)) || (99 < _DAT_01e6c170)
     ) {
    local_16c = *param_1 - *param_2;
    local_168 = param_1[1] - param_2[1];
    local_164 = param_1[2] - param_2[2];
    local_148[0] = *param_1 - *param_2;
    afStack_1a4[(uint)bVar8 * -2 + 0x18] = afStack_1a4[(uint)bVar8 * -2 + 0xf];
    afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
         afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
    FUN_005a7520(afStack_1a4 + 0x17);
    local_a0 = local_4c;
    afStack_114[(uint)bVar8 * -2 + 0x1e] = afStack_114[(uint)bVar8 * -2 + 0x33];
    afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f] =
         afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x34];
    if (afStack_114 + 0x1d == param_3) {
      return 2;
    }
    *param_3 = local_a0;
    param_3[1] = local_9c;
    param_3[2] = local_98;
    return 2;
  }
  if ((_DAT_01e6c16c == 0x32) && (_DAT_01e6c170 == 0x32)) {
    local_34 = *param_1 - *param_2;
    local_30 = param_1[1] - param_2[1];
    local_2c = param_1[2] - param_2[2];
    local_40[0] = *param_1 - *param_2;
    afStack_114[(uint)bVar8 * -2 + 0x36] = afStack_114[(uint)bVar8 * -2 + 0x39];
    afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x37] =
         afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x3a];
    FUN_005a7520(afStack_114 + 0x35);
    local_1e4 = local_1c0;
    *(uint *)((int)&stack0xfffffe20 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffe44 + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xfffffe24 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffe48 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    if (&stack0xfffffe1c != param_3) {
      *param_3 = local_1e4;
      param_3[1] = local_1e0;
      param_3[2] = local_1dc;
    }
    return 1;
  }
  fVar9 = (float10)*param_1;
  pfVar1 = (float *)FUN_005c03a0();
  local_14 = (int)ROUND(fVar9);
  fVar9 = (float10)*pfVar1;
  FUN_005c03a0();
  local_14 = (int)ROUND(fVar9);
  fVar9 = (float10)param_1[2];
  iVar2 = FUN_005c03a0();
  local_14 = (int)ROUND(fVar9);
  fVar9 = (float10)*(float *)(iVar2 + 8);
  FUN_005c03a0();
  local_14 = (int)ROUND(fVar9);
  uVar3 = FUN_00533640(param_1,_DAT_01e6c170,_DAT_01e6c16c,param_1[7]);
  uVar4 = FUN_00533640(param_1,_DAT_01e6c178,_DAT_01e6c174,param_1[4]);
  iVar2 = FUN_005336e0(param_1,_DAT_01e6c16c,_DAT_01e6c170,uVar3,_DAT_01e6c174,_DAT_01e6c178,uVar4);
  if (iVar2 != 0) {
    local_70 = _DAT_01fe5c50;
    afStack_114[(uint)bVar8 * -2 + 0x2a] = *(float *)(&DAT_01fe5c54 + (uint)bVar8 * -8);
    afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x2b] =
         *(float *)(&DAT_01fe5c58 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    local_d0 = local_70;
    afStack_114[(uint)bVar8 * -2 + 0x12] = afStack_114[(uint)bVar8 * -2 + 0x2a];
    afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
         afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x2b];
    if (afStack_1a4 + 0x1a != param_1) {
      local_13c = *param_1;
      local_138 = param_1[1];
      local_134 = param_1[2];
    }
    local_14 = local_1ac;
    local_13c = (float)local_1b4 * local_d0 + local_13c;
    local_134 = (float)local_1ac * local_c8 + local_134;
    afStack_114[2] = *param_1 - *param_2;
    afStack_114[3] = param_1[1] - param_2[1];
    local_104 = param_1[2] - param_2[2];
    local_118 = *param_1 - *param_2;
    afStack_114[(uint)bVar8 * -2] = afStack_114[(uint)bVar8 * -2 + 3];
    afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    FUN_005a7520(&local_118);
    local_e8 = local_ac;
    afStack_114[(uint)bVar8 * -2 + 0xc] = afStack_114[(uint)bVar8 * -2 + 0x1b];
    afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
    if (afStack_114 + 0xb != param_3) {
      *param_3 = local_e8;
      param_3[1] = local_e4;
      param_3[2] = local_e0;
    }
    return 1;
  }
  iVar2 = FUN_00533930(param_1,_DAT_01e6c174,_DAT_01e6c178,_DAT_01e6c16c,_DAT_01e6c170);
  if (iVar2 == 0) {
    iVar2 = FUN_00535490(param_1,param_1[7]);
    if (iVar2 != 0) {
      uVar6 = (int)param_1[_DAT_01e6c178 * 100 + _DAT_01e6c174 + 0xc] - (int)param_1[4] >> 0x1f;
      if (3 < (int)(((int)param_1[_DAT_01e6c178 * 100 + _DAT_01e6c174 + 0xc] - (int)param_1[4] ^
                    uVar6) - uVar6)) {
        local_178 = *param_1 - *param_2;
        local_174 = param_1[1] - param_2[1];
        local_170 = param_1[2] - param_2[2];
        local_f4[0] = *param_1 - *param_2;
        afStack_114[(uint)bVar8 * -2 + 9] = afStack_1a4[(uint)bVar8 * -2 + 0xc];
        afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
             afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
        FUN_005a7520(afStack_114 + 8);
        local_1cc = local_b8;
        *(float *)((int)&stack0xfffffe38 + (uint)bVar8 * -8) = afStack_114[(uint)bVar8 * -2 + 0x18];
        *(float *)((int)&stack0xfffffe3c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19];
        if (&stack0xfffffe34 == param_3) {
          return 2;
        }
        *param_3 = local_1cc;
        param_3[1] = local_1c8;
        param_3[2] = local_1c4;
        return 2;
      }
      uVar6 = 0xffffffff;
      local_18 = 0xffffffff;
      iVar2 = _DAT_01e6c178;
      iVar7 = _DAT_01e6c174;
      do {
        local_1c = local_18;
        local_18 = uVar6;
        uVar6 = (uint)*(byte *)(iVar7 + 0x1e7abe8 + iVar2 * 100);
        if (uVar6 == 0) {
          local_184 = *param_1 - *param_2;
          local_180 = param_1[1] - param_2[1];
          local_17c = param_1[2] - param_2[2];
          local_190[0] = *param_1 - *param_2;
          afStack_1a4[(uint)bVar8 * -2 + 6] = afStack_1a4[(uint)bVar8 * -2 + 9];
          afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
          FUN_005a7520(afStack_1a4 + 5);
          local_160 = local_154;
          afStack_1a4[(uint)bVar8 * -2 + 0x12] = afStack_1a4[(uint)bVar8 * -2 + 0x15];
          afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
               afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
          if (afStack_1a4 + 0x11 == param_3) {
            return 2;
          }
          *param_3 = local_160;
          param_3[1] = local_15c;
          param_3[2] = local_158;
          return 2;
        }
        iVar7 = iVar7 - *(int *)(&DAT_00622788 + uVar6 * 4);
        iVar2 = iVar2 - *(int *)(&DAT_006227ac + uVar6 * 4);
        if (iVar7 < 0) {
          _DAT_01d1d400 = "..\\core\\path.cpp";
          _DAT_01d1d404 = 0x548;
          FUN_005030e0("Out of bounds1!");
        }
        if (iVar2 < 0) {
          _DAT_01d1d400 = "..\\core\\path.cpp";
          _DAT_01d1d404 = 0x549;
          FUN_005030e0("Out of bounds2!");
        }
        if (99 < iVar7) {
          _DAT_01d1d400 = "..\\core\\path.cpp";
          _DAT_01d1d404 = 0x54a;
          FUN_005030e0("Out of bounds3!");
        }
        if (99 < iVar2) {
          _DAT_01d1d400 = "..\\core\\path.cpp";
          _DAT_01d1d404 = 0x54b;
          FUN_005030e0("Out of bounds4!");
        }
      } while ((iVar7 != _DAT_01e6c16c) || (iVar2 != _DAT_01e6c170));
      *param_3 = 0.0;
      param_3[2] = 0.0;
      fVar5 = (float)FUN_00533140(param_1,uVar6,local_18,local_1c,param_2);
      param_3[1] = fVar5;
      return 1;
    }
    afStack_1a4[2] = *param_1 - *param_2;
    afStack_1a4[3] = param_1[1] - param_2[1];
    local_194 = param_1[2] - param_2[2];
    local_7c[0] = *param_1 - *param_2;
    afStack_114[(uint)bVar8 * -2 + 0x27] = afStack_1a4[(uint)bVar8 * -2 + 3];
    afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x28] =
         afStack_1a4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    FUN_005a7520(afStack_114 + 0x26);
    local_64 = local_28;
    afStack_114[(uint)bVar8 * -2 + 0x2d] = afStack_114[(uint)bVar8 * -2 + 0x3c];
    afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x2e] =
         afStack_114[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x3d];
    if (afStack_114 + 0x2c == param_3) {
      return 2;
    }
    *param_3 = local_64;
    param_3[1] = local_60;
    param_3[2] = local_5c;
    return 2;
  }
  if (iVar2 == 1) {
    if (_DAT_01e6c174 <= _DAT_01e6c16c) {
      if (_DAT_01e6c174 < _DAT_01e6c16c) {
        uVar3 = 4;
      }
      else if (_DAT_01e6c170 < _DAT_01e6c178) {
        uVar3 = 1;
      }
      else {
        uVar3 = 2;
      }
      goto LAB_0053443f;
    }
  }
  else {
    if (_DAT_01e6c170 < _DAT_01e6c178) {
      uVar3 = 1;
      goto LAB_0053443f;
    }
    if (_DAT_01e6c178 < _DAT_01e6c170) {
      uVar3 = 2;
      goto LAB_0053443f;
    }
    if (_DAT_01e6c174 <= _DAT_01e6c16c) {
      uVar3 = 4;
      goto LAB_0053443f;
    }
  }
  uVar3 = 3;
LAB_0053443f:
  *param_3 = 0.0;
  param_3[2] = 0.0;
  fVar5 = (float)FUN_00533140(param_1,uVar3,0xffffffff,0xffffffff,param_2);
  param_3[1] = fVar5;
  return 1;
}
