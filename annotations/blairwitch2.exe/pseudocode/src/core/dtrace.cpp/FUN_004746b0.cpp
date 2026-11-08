// Name: FUN_004746b0
// Address: 004746b0
// Address Range: [[004746b0, 00474ff6]]
// Convention: unknown
// Signature: void FUN_004746b0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004746b0(uint *param_1,int param_2,int param_3,int param_4,int param_5)

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
  
  _DAT_01bd3c4c = _DAT_01bd3c4c + 1;
  if ((((((int)param_1[0x15] <= param_2) && ((int)param_1[0x16] <= param_3)) &&
       ((int)param_1[0x17] <= param_4)) &&
      ((param_2 <= (int)param_1[0x18] && (param_3 <= (int)param_1[0x19])))) &&
     (param_4 <= (int)param_1[0x1a])) {
    local_34 = (int *)FUN_00472af0(param_1,param_2,param_3,param_4);
    if ((local_34 != (int *)0x0) && (*local_34 != 0)) {
      local_28 = (float)param_2;
      local_18 = param_3;
      local_14 = param_4;
      local_20 = (float)param_3;
      local_ac = local_28 * (float)param_1[10] + (float)param_1[4];
      local_30 = (float)param_4;
      local_a8 = local_20 * (float)param_1[0xb] + (float)param_1[5];
      _DAT_01bd3c50 = _DAT_01bd3c50 + 1;
      local_a4 = local_30 * (float)param_1[0xc] + (float)param_1[6];
      local_64 = (int)ROUND(local_ac * _DAT_005f5b10);
      local_60 = (int)ROUND(local_a8 * _DAT_005f5b10);
      local_5c = (int)ROUND(local_a4 * _DAT_005f5b10);
      FUN_0055d723(*0x01BA5C50,&local_64);
      local_14 = param_2 + 1;
      local_2c = (float)local_14;
      local_ac = local_2c * (float)param_1[10] + (float)param_1[4];
      local_a8 = local_20 * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_30 * (float)param_1[0xc] + (float)param_1[6];
      local_7c = (int)ROUND(local_ac * _DAT_005f5b10);
      local_78 = (int)ROUND(local_a8 * _DAT_005f5b10);
      local_74 = (int)ROUND(local_a4 * _DAT_005f5b10);
      FUN_0055d723(*0x01BA5C50 + 0x30,&local_7c);
      local_14 = param_4 + 1;
      local_ac = local_2c * (float)param_1[10] + (float)param_1[4];
      local_24 = (float)local_14;
      local_a8 = local_20 * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_24 * (float)param_1[0xc] + (float)param_1[6];
      local_40 = (int)ROUND(local_ac * _DAT_005f5b10);
      local_3c = (int)ROUND(local_a8 * _DAT_005f5b10);
      local_38 = (int)ROUND(local_a4 * _DAT_005f5b10);
      FUN_0055d723(*0x01BA5C50 + 0x60,&local_40);
      local_ac = local_28 * (float)param_1[10] + (float)param_1[4];
      local_a8 = local_20 * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_24 * (float)param_1[0xc] + (float)param_1[6];
      local_58 = (int)ROUND(local_ac * _DAT_005f5b10);
      local_54 = (int)ROUND(local_a8 * _DAT_005f5b10);
      local_50 = (int)ROUND(local_a4 * _DAT_005f5b10);
      FUN_0055d723(*0x01BA5C50 + 0x90,&local_58);
      local_14 = param_3 + 1;
      local_ac = local_28 * (float)param_1[10] + (float)param_1[4];
      local_1c = (float)local_14;
      local_a8 = local_1c * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_30 * (float)param_1[0xc] + (float)param_1[6];
      local_a0 = (int)ROUND(local_ac * _DAT_005f5b10);
      local_9c = (int)ROUND(local_a8 * _DAT_005f5b10);
      local_98 = (int)ROUND(local_a4 * _DAT_005f5b10);
      FUN_0055d723(*0x01BA5C50 + 0xc0,&local_a0);
      local_ac = local_2c * (float)param_1[10] + (float)param_1[4];
      local_a8 = local_1c * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_30 * (float)param_1[0xc] + (float)param_1[6];
      local_94 = (int)ROUND(local_ac * _DAT_005f5b10);
      local_90 = (int)ROUND(local_a8 * _DAT_005f5b10);
      local_8c = (int)ROUND(local_a4 * _DAT_005f5b10);
      FUN_0055d723(*0x01BA5C50 + 0xf0,&local_94);
      local_ac = local_2c * (float)param_1[10] + (float)param_1[4];
      local_a8 = local_1c * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_24 * (float)param_1[0xc] + (float)param_1[6];
      local_70 = (int)ROUND(local_ac * _DAT_005f5b10);
      local_6c = (int)ROUND(local_a8 * _DAT_005f5b10);
      local_68 = (int)ROUND(local_a4 * _DAT_005f5b10);
      FUN_0055d723(*0x01BA5C50 + 0x120,&local_70);
      local_ac = local_28 * (float)param_1[10] + (float)param_1[4];
      local_a8 = local_1c * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_24 * (float)param_1[0xc] + (float)param_1[6];
      local_88 = (int)ROUND(local_ac * _DAT_005f5b10);
      local_84 = (int)ROUND(local_a8 * _DAT_005f5b10);
      local_80 = (int)ROUND(local_a4 * _DAT_005f5b10);
      FUN_0055d723(*0x01BA5C50 + 0x150,&local_88);
      uVar1 = DAT_00622024 & DAT_00622054 & DAT_00622084 & DAT_006220b4 & DAT_006220e4 &
              DAT_00622114 & DAT_00622144 & DAT_00622174;
      if (((uVar1 & 0x80000000) == 0) || ((char)uVar1 == '\0')) {
        _DAT_01bd3c54 = _DAT_01bd3c54 + 1;
        if (1 < param_5) {
          local_14 = param_4;
          local_d0 = 4;
          local_cc = 0;
          local_c8 = 0;
          local_c4 = -1;
          fVar3 = ((float10)param_4 * (float10)(float)param_1[0xc] + (float10)(float)param_1[6]) *
                  (float10)_DAT_005d1bb3;
          local_bc = 0;
          local_b4 = 5;
          local_b0 = 4;
          FUN_005b7ff0(auStack_d4);
          local_c0 = (int)ROUND(fVar3);
          local_b8 = 1;
          iVar2 = FUN_004699a0(extraout_ECX);
          if (iVar2 == 0) {
            local_14 = param_4 + 1;
            local_c4 = 1;
            fVar3 = ((float10)local_14 * (float10)(float)param_1[0xc] + (float10)(float)param_1[6])
                    * (float10)_DAT_005d1bbb;
            local_bc = 2;
            local_b8 = 3;
            local_b4 = 7;
            local_b0 = 6;
            local_cc = iVar2;
            local_c8 = iVar2;
            FUN_005b7ff0(auStack_d4);
            local_c0 = (int)ROUND(fVar3);
            iVar2 = FUN_004699a0(extraout_ECX_00);
            if (iVar2 == 0) {
              local_14 = param_2;
              local_cc = -1;
              fVar3 = ((float10)param_2 * (float10)(float)param_1[10] + (float10)(float)param_1[4])
                      * (float10)_DAT_005d1bb3;
              local_b8 = 4;
              local_b4 = 7;
              local_b0 = 3;
              local_c8 = iVar2;
              local_c4 = iVar2;
              local_bc = iVar2;
              FUN_005b7ff0(auStack_d4);
              local_c0 = (int)ROUND(fVar3);
              iVar2 = FUN_004699a0(extraout_ECX_01);
              if (iVar2 == 0) {
                local_14 = param_2 + 1;
                local_cc = 1;
                fVar3 = ((float10)local_14 * (float10)(float)param_1[10] +
                        (float10)(float)param_1[4]) * (float10)_DAT_005d1bbb;
                local_bc = 1;
                local_b4 = 6;
                local_b0 = 5;
                local_c8 = iVar2;
                local_c4 = iVar2;
                FUN_005b7ff0(auStack_d4);
                local_c0 = (int)ROUND(fVar3);
                local_b8 = 2;
                iVar2 = FUN_004699a0(extraout_ECX_02);
                if (iVar2 == 0) {
                  local_c8 = 1;
                  local_14 = param_3 + 1;
                  local_c4 = 0;
                  fVar3 = ((float10)local_14 * (float10)(float)param_1[0xb] +
                          (float10)(float)param_1[5]) * (float10)_DAT_005d1bbb;
                  local_bc = 4;
                  local_b8 = 5;
                  local_b4 = 6;
                  local_b0 = 7;
                  local_cc = iVar2;
                  FUN_005b7ff0(auStack_d4);
                  local_c0 = (int)ROUND(fVar3);
                  iVar2 = FUN_004699a0(extraout_ECX_03);
                  if (iVar2 == 0) {
                    local_c8 = -1;
                    local_14 = param_3;
                    local_c4 = 0;
                    fVar3 = ((float10)param_3 * (float10)(float)param_1[0xb] +
                            (float10)(float)param_1[5]) * (float10)_DAT_005d1bb3;
                    local_bc = 0;
                    local_b4 = 2;
                    local_b0 = 3;
                    local_cc = iVar2;
                    FUN_005b7ff0(auStack_d4);
                    local_c0 = (int)ROUND(fVar3);
                    local_b8 = 1;
                    iVar2 = FUN_004699a0(extraout_ECX_04);
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
        _DAT_01bd3c58 = _DAT_01bd3c58 + 1;
        local_44 = (float)param_4 * (float)param_1[0xc] + (float)param_1[6];
        FUN_0046b2b0(DAT_0060b280,&local_4c);
        FUN_004468c0(local_34,*param_1);
        FUN_0046b2b0(DAT_0060b280,&DAT_0265370c);
        iVar2 = _DAT_01bd3c5c;
        *(int **)(_DAT_01bd3c5c * 4 + 0x1bd3c64) = local_34;
        iVar2 = iVar2 * 0xc;
        if ((float *)(&DAT_01be74e4 + iVar2) != &local_4c) {
          *(float *)(&DAT_01be74e4 + iVar2) = local_4c;
          *(float *)(&DAT_01be74e8 + iVar2) = local_48;
          *(float *)(&DAT_01be74ec + iVar2) = local_44;
        }
        _DAT_01bd3c5c = _DAT_01bd3c5c + 1;
        if (19999 < _DAT_01bd3c5c) {
          _DAT_01d046a0 = "..\\core\\dtrace.cpp";
          _DAT_01d046a4 = 0x792;
          FUN_004e4500("Too many drawn cubes.  Need to recompile.");
          return;
        }
      }
    }
  }
  return;
}
