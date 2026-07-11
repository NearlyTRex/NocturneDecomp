// Name: FUN_00469390
// Address: 00469390
// Address Range: [[00469390, 00469cd6]]
// Convention: unknown
// Signature: void FUN_00469390(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469390(uint *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  float10 fVar3;
  byte auStack_d4 [4];
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  _DAT_01b7b734 = _DAT_01b7b734 + 1;
  if ((((((int)param_1[0x15] <= param_2) && ((int)param_1[0x16] <= param_3)) &&
       ((int)param_1[0x17] <= param_4)) &&
      ((param_2 <= (int)param_1[0x18] && (param_3 <= (int)param_1[0x19])))) &&
     (param_4 <= (int)param_1[0x1a])) {
    local_34 = (int *)FUN_004678d0(param_1,param_2,param_3,param_4);
    if ((local_34 != (int *)0x0) && (*local_34 != 0)) {
      local_28 = (float)param_2;
      local_18 = param_3;
      local_14 = param_4;
      local_20 = (float)param_3;
      local_ac = local_28 * (float)param_1[10] + (float)param_1[4];
      local_30 = (float)param_4;
      local_a8 = local_20 * (float)param_1[0xb] + (float)param_1[5];
      _DAT_01b7b738 = _DAT_01b7b738 + 1;
      local_a4 = local_30 * (float)param_1[0xc] + (float)param_1[6];
      local_64 = (int)ROUND(local_ac * _DAT_0059c8a0);
      local_60 = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_5c = (int)ROUND(local_a4 * _DAT_0059c8a0);
      FUN_0053075c(*0x01B4D738,&local_64);
      local_14 = param_2 + 1;
      local_2c = (float)local_14;
      local_ac = local_2c * (float)param_1[10] + (float)param_1[4];
      local_a8 = local_20 * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_30 * (float)param_1[0xc] + (float)param_1[6];
      local_7c = (int)ROUND(local_ac * _DAT_0059c8a0);
      local_78 = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_74 = (int)ROUND(local_a4 * _DAT_0059c8a0);
      FUN_0053075c(*0x01B4D738 + 0x30,&local_7c);
      local_14 = param_4 + 1;
      local_ac = local_2c * (float)param_1[10] + (float)param_1[4];
      local_24 = (float)local_14;
      local_a8 = local_20 * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_24 * (float)param_1[0xc] + (float)param_1[6];
      local_40 = (int)ROUND(local_ac * _DAT_0059c8a0);
      local_3c = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_38 = (int)ROUND(local_a4 * _DAT_0059c8a0);
      FUN_0053075c(*0x01B4D738 + 0x60,&local_40);
      local_ac = local_28 * (float)param_1[10] + (float)param_1[4];
      local_a8 = local_20 * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_24 * (float)param_1[0xc] + (float)param_1[6];
      local_58 = (int)ROUND(local_ac * _DAT_0059c8a0);
      local_54 = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_50 = (int)ROUND(local_a4 * _DAT_0059c8a0);
      FUN_0053075c(*0x01B4D738 + 0x90,&local_58);
      local_14 = param_3 + 1;
      local_ac = local_28 * (float)param_1[10] + (float)param_1[4];
      local_1c = (float)local_14;
      local_a8 = local_1c * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_30 * (float)param_1[0xc] + (float)param_1[6];
      local_a0 = (int)ROUND(local_ac * _DAT_0059c8a0);
      local_9c = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_98 = (int)ROUND(local_a4 * _DAT_0059c8a0);
      FUN_0053075c(*0x01B4D738 + 0xc0,&local_a0);
      local_ac = local_2c * (float)param_1[10] + (float)param_1[4];
      local_a8 = local_1c * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_30 * (float)param_1[0xc] + (float)param_1[6];
      local_94 = (int)ROUND(local_ac * _DAT_0059c8a0);
      local_90 = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_8c = (int)ROUND(local_a4 * _DAT_0059c8a0);
      FUN_0053075c(*0x01B4D738 + 0xf0,&local_94);
      local_ac = local_2c * (float)param_1[10] + (float)param_1[4];
      local_a8 = local_1c * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_24 * (float)param_1[0xc] + (float)param_1[6];
      local_70 = (int)ROUND(local_ac * _DAT_0059c8a0);
      local_6c = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_68 = (int)ROUND(local_a4 * _DAT_0059c8a0);
      FUN_0053075c(*0x01B4D738 + 0x120,&local_70);
      local_ac = local_28 * (float)param_1[10] + (float)param_1[4];
      local_a8 = local_1c * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_24 * (float)param_1[0xc] + (float)param_1[6];
      local_88 = (int)ROUND(local_ac * _DAT_0059c8a0);
      local_84 = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_80 = (int)ROUND(local_a4 * _DAT_0059c8a0);
      FUN_0053075c(*0x01B4D738 + 0x150,&local_88);
      uVar1 = DAT_005c5024 & DAT_005c5054 & DAT_005c5084 & DAT_005c50b4 & DAT_005c50e4 &
              DAT_005c5114 & DAT_005c5144 & DAT_005c5174;
      if (((uVar1 & 0x80000000) == 0) || ((char)uVar1 == '\0')) {
        _DAT_01b7b73c = _DAT_01b7b73c + 1;
        if (1 < param_5) {
          local_14 = param_4;
          local_d0 = 4;
          local_cc = 0;
          local_c8 = 0;
          local_c4 = -1;
          fVar3 = ((float10)param_4 * (float10)(float)param_1[0xc] + (float10)(float)param_1[6]) *
                  (float10)_DAT_0057e23e;
          local_bc = 0;
          local_b4 = 5;
          local_b0 = 4;
          FUN_00563a30(auStack_d4);
          local_c0 = (int)ROUND(fVar3);
          local_b8 = 1;
          iVar2 = FUN_0045f190(extraout_ECX);
          if (iVar2 == 0) {
            local_14 = param_4 + 1;
            local_c4 = 1;
            fVar3 = ((float10)local_14 * (float10)(float)param_1[0xc] + (float10)(float)param_1[6])
                    * (float10)_DAT_0057e246;
            local_bc = 2;
            local_b8 = 3;
            local_b4 = 7;
            local_b0 = 6;
            local_cc = iVar2;
            local_c8 = iVar2;
            FUN_00563a30(auStack_d4);
            local_c0 = (int)ROUND(fVar3);
            iVar2 = FUN_0045f190(extraout_ECX_00);
            if (iVar2 == 0) {
              local_14 = param_2;
              local_cc = -1;
              fVar3 = ((float10)param_2 * (float10)(float)param_1[10] + (float10)(float)param_1[4])
                      * (float10)_DAT_0057e23e;
              local_b8 = 4;
              local_b4 = 7;
              local_b0 = 3;
              local_c8 = iVar2;
              local_c4 = iVar2;
              local_bc = iVar2;
              FUN_00563a30(auStack_d4);
              local_c0 = (int)ROUND(fVar3);
              iVar2 = FUN_0045f190(extraout_ECX_01);
              if (iVar2 == 0) {
                local_14 = param_2 + 1;
                local_cc = 1;
                fVar3 = ((float10)local_14 * (float10)(float)param_1[10] +
                        (float10)(float)param_1[4]) * (float10)_DAT_0057e246;
                local_bc = 1;
                local_b4 = 6;
                local_b0 = 5;
                local_c8 = iVar2;
                local_c4 = iVar2;
                FUN_00563a30(auStack_d4);
                local_c0 = (int)ROUND(fVar3);
                local_b8 = 2;
                iVar2 = FUN_0045f190(extraout_ECX_02);
                if (iVar2 == 0) {
                  local_c8 = 1;
                  local_14 = param_3 + 1;
                  local_c4 = 0;
                  fVar3 = ((float10)local_14 * (float10)(float)param_1[0xb] +
                          (float10)(float)param_1[5]) * (float10)_DAT_0057e246;
                  local_bc = 4;
                  local_b8 = 5;
                  local_b4 = 6;
                  local_b0 = 7;
                  local_cc = iVar2;
                  FUN_00563a30(auStack_d4);
                  local_c0 = (int)ROUND(fVar3);
                  iVar2 = FUN_0045f190(extraout_ECX_03);
                  if (iVar2 == 0) {
                    local_c8 = -1;
                    local_14 = param_3;
                    local_c4 = 0;
                    fVar3 = ((float10)param_3 * (float10)(float)param_1[0xb] +
                            (float10)(float)param_1[5]) * (float10)_DAT_0057e23e;
                    local_bc = 0;
                    local_b4 = 2;
                    local_b0 = 3;
                    local_cc = iVar2;
                    FUN_00563a30(auStack_d4);
                    local_c0 = (int)ROUND(fVar3);
                    local_b8 = 1;
                    iVar2 = FUN_0045f190(extraout_ECX_04);
                    if (iVar2 == 0) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        local_4c = (float)param_2 * (float)param_1[10] + (float)param_1[4];
        local_14 = param_4;
        local_48 = (float)param_3 * (float)param_1[0xb] + (float)param_1[5];
        _DAT_01b7b740 = _DAT_01b7b740 + 1;
        local_44 = (float)param_4 * (float)param_1[0xc] + (float)param_1[6];
        FUN_00460a00(DAT_005ae704,&local_4c);
        FUN_0044aff0(local_34,*param_1);
        FUN_00460a00(DAT_005ae704,&DAT_02dd1184);
        iVar2 = _DAT_01b7b744;
        *(int **)(_DAT_01b7b744 * 4 + 0x1b7b74c) = local_34;
        iVar2 = iVar2 * 0xc;
        if ((float *)(&DAT_01b8efcc + iVar2) != &local_4c) {
          *(float *)(&DAT_01b8efcc + iVar2) = local_4c;
          *(float *)(&DAT_01b8efd0 + iVar2) = local_48;
          *(float *)(&DAT_01b8efd4 + iVar2) = local_44;
        }
        _DAT_01b7b744 = _DAT_01b7b744 + 1;
        if (19999 < _DAT_01b7b744) {
          _DAT_01cc4800 = ">..\\core\\dtrace.cpp" + 1;
          _DAT_01cc4804 = 0x792;
          FUN_004c8440("Too many drawn cubes.  Need to recompile.");
          return;
        }
      }
    }
  }
  return;
}
