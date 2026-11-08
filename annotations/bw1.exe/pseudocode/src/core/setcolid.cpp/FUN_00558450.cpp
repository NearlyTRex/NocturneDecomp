// Name: FUN_00558450
// Address: 00558450
// Address Range: [[00558450, 00558eac]]
// Convention: unknown
// Signature: float FUN_00558450(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,undefined4 param_6,float param_7,float param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00558450(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,float param_7,float param_8)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  byte bVar12;
  float afStackY_1094 [861];
  double dStack_2a8;
  float fStack_260;
  byte auStack_25c [88];
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float fStack_174;
  float fStack_170;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int local_12c;
  int local_128;
  uint auStack_124 [6];
  uint auStack_10c [6];
  uint auStack_f4 [6];
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  uint auStack_c4 [6];
  uint uStack_ac;
  float afStack_a8 [3];
  int iStack_9c;
  float fStack_98;
  float fStack_94;
  float afStack_90 [5];
  uint uStack_7c;
  uint uStack_74;
  uint uStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float afStack_58 [15];
  int local_1c;
  int local_18;
  uint uStack_14;
  
  bVar12 = 0;
  FUN_0048c230(&local_1a8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((param_4 & 0x7fffffff) != 0) || ((param_5 & 0x7fffffff) != 0)) {
    FUN_0048c300(&DAT_01fe5c1c,&local_1a8);
  }
  *(uint *)(param_1 + 0x14d134) = 1;
  *(uint *)(param_1 + 0x14d148) = 0xffffffff;
  *(uint *)(param_1 + 0x14d14c) = 0xffffffff;
  *(uint *)(param_1 + 0x14d144) = 0;
  if (-1 < *(int *)(param_1 + 0x15f6ac)) {
    local_dc = local_198 - local_188;
    local_d0 = local_198 + local_188;
    if (local_190 <= 0.0) {
      local_dc = local_dc + local_190;
    }
    else {
      local_d0 = local_d0 + local_190;
    }
    local_d8 = local_180;
    local_d4 = local_194 - local_188;
    local_c8 = local_194 + local_188;
    local_cc = local_184;
    if (local_18c <= 0.0) {
      local_d4 = local_d4 + local_18c;
    }
    else {
      local_c8 = local_c8 + local_18c;
    }
    FUN_005593c0(&local_14c);
    local_14c = *(uint *)(param_1 + 0x15f698);
    local_148 = *(uint *)(param_1 + 0x15f69c);
    local_144 = *(uint *)(param_1 + 0x15f6a0);
    local_140 = *(uint *)(param_1 + 0x15f6a4);
    local_13c = *(uint *)(param_1 + 0x15f6a8);
    local_1c = 0;
    if (0 < *(int *)(param_1 + 0x156db8)) {
      local_18 = param_1;
      do {
        iVar1 = *(int *)(local_18 + 0x156dbc);
        iVar9 = FUN_00557db0(param_1,iVar1);
        if ((iVar9 == 0) &&
           (local_12c = iVar9, local_128 = iVar9,
           uStack_14 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x3c))(iVar1,&local_14c),
           uStack_14 != 0)) {
          FUN_00408ec0(iVar1,&local_14c,uStack_14);
          puVar10 = auStack_c4;
          puVar11 = auStack_f4;
          for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
            puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
          }
          iVar9 = FUN_004215d0(&local_dc,auStack_f4);
          if (iVar9 != 0) {
            if (local_128 == 0) {
              if (uStack_14 < 2) {
                if (uStack_14 == 1) {
                  (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1,iVar1 + 0x20,iVar1 + 0x3c);
                  puVar10 = auStack_124;
                  puVar11 = auStack_10c;
                  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *puVar11 = *puVar10;
                    puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
                    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
                  }
                  iVar9 = FUN_005580d0(param_1,&local_1a8,auStack_10c);
                  if (iVar9 != 0) {
                    *(int *)(param_1 + 0x14d144) = iVar1;
                  }
                }
                else {
LAB_00558e17:
                  _DAT_01d1d400 = "..\\core\\setcolid.cpp";
                  _DAT_01d1d404 = 0x3f1;
                  FUN_005030e0("Invalid collision type!");
                }
              }
              else if (uStack_14 < 3) {
                fStack_138 = fStack_138 + *(float *)(iVar1 + 0x24);
                fStack_134 = fStack_134 + *(float *)(iVar1 + 0x24);
                fVar2 = *(float *)(iVar1 + 0x20);
                fVar3 = *(float *)(iVar1 + 0x28);
                if ((fStack_138 < local_184) && (local_180 < fStack_134)) {
                  fVar4 = fVar2 - local_198;
                  fVar6 = fVar3 - local_194;
                  fVar7 = fStack_130 + local_188;
                  fVar8 = fVar7 * fVar7;
                  fVar5 = fVar6 * fVar6 + fVar4 * fVar4;
                  if (fVar8 <= fVar5) {
                    fVar4 = fVar6 * fStack_170 + fVar4 * fStack_174;
                    if (0.0 < fVar4) {
                      fVar7 = fStack_174 * fVar4 + local_198;
                      fVar5 = fVar2 - fVar7;
                      fVar6 = fStack_170 * fVar4 + local_194;
                      fVar4 = fVar3 - fVar6;
                      fVar4 = fVar4 * fVar4 + fVar5 * fVar5;
                      if (fVar4 < fVar8) {
                        fVar4 = SQRT(fVar8 - fVar4);
                        fVar7 = fVar7 - fStack_174 * fVar4;
                        fVar6 = fVar6 - fStack_170 * fVar4;
                        if (ABS(local_190) <= ABS(local_18c)) {
                          fVar4 = (fVar6 - local_194) / local_18c;
                        }
                        else {
                          fVar4 = (fVar7 - local_198) / local_190;
                        }
                        if (((0.0 <= fVar4) && (fVar4 < local_1a8)) && (fVar4 <= 1.0)) {
                          local_1a4 = fVar7 - fVar2;
                          local_19c = fVar6 - fVar3;
                          local_1a0 = 0.0;
                          *(int *)(param_1 + 0x14d144) = iVar1;
                          local_1a8 = fVar4;
                        }
                      }
                    }
                  }
                  else {
                    dStack_2a8 = SQRT((double)fVar5) - (double)fVar7;
                    if (_DAT_005f0ec5 < dStack_2a8) {
                      dStack_2a8 = -0.001;
                    }
                    if ((float)dStack_2a8 < local_1a8) {
                      local_1a4 = -fVar4;
                      local_19c = -fVar6;
                      local_1a0 = 0.0;
                      *(int *)(param_1 + 0x14d144) = iVar1;
                      local_1a8 = (float)dStack_2a8;
                    }
                  }
                }
              }
              else {
                if (uStack_14 != 3) goto LAB_00558e17;
                afStack_a8[2] = local_198;
                fStack_98 = local_194;
                iStack_9c = local_128;
                FUN_00408bb0(iVar1,afStack_a8 + 2);
                fVar2 = local_18c;
                afStack_58[0] = local_190;
                uStack_ac = afStack_90[2];
                afStack_a8[(uint)bVar12 * -2] = afStack_90[(uint)bVar12 * -2 + 3];
                afStack_a8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                     afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
                afStack_58[2] = fVar2;
                afStack_58[1] = 0.0;
                FUN_00408b00(iVar1,afStack_90 + 0xe);
                uStack_7c = uStack_70;
                afStack_90[(uint)bVar12 * -2 + 6] = afStack_90[(uint)bVar12 * -2 + 9];
                afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
                     afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
                FUN_0048c230(&fStack_260,uStack_ac,afStack_a8[1],uStack_7c,uStack_74,param_6,
                             param_7 - *(float *)(iVar1 + 0x24),param_8 - *(float *)(iVar1 + 0x24));
                fStack_260 = local_1a8;
                (**(code **)(*(int *)(iVar1 + 0x154) + 0xbc))(iVar1,&fStack_260);
                if (fStack_260 < local_1a8) {
                  local_1a8 = fStack_260;
                  FUN_00408ac0(iVar1,auStack_25c);
                  fStack_64 = fStack_94;
                  afStack_90[(uint)bVar12 * -2 + 0xc] = afStack_90[(uint)bVar12 * -2];
                  afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
                       afStack_90[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
                  if (&local_1a4 != afStack_90 + 0xb) {
                    local_1a4 = fStack_64;
                    local_1a0 = fStack_60;
                    local_19c = fStack_5c;
                  }
                  *(int *)(param_1 + 0x14d144) = iVar1;
                }
              }
            }
            else {
              iVar9 = FUN_00468900(local_128);
              if (*(int *)(iVar9 + 0x358) == 0) {
                _DAT_01d1d400 = "..\\core\\setcolid.cpp";
                _DAT_01d1d404 = 0x389;
                FUN_005030e0("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",iVar9);
              }
              FUN_0048c230(&fStack_204,local_198 - *(float *)(iVar1 + 0x20),
                           local_194 - *(float *)(iVar1 + 0x28),local_190,local_18c,param_6,
                           param_7 - *(float *)(iVar1 + 0x24),param_8 - *(float *)(iVar1 + 0x24));
              fStack_204 = local_1a8;
              FUN_00468160(iVar9,0,&fStack_204,iVar1 + 0x30);
              if (fStack_204 < local_1a8) {
                if (&local_1a4 != &fStack_200) {
                  local_1a4 = fStack_200;
                  local_1a0 = fStack_1fc;
                  local_19c = fStack_1f8;
                }
                *(int *)(param_1 + 0x14d144) = iVar1;
                local_1a8 = fStack_204;
              }
            }
          }
        }
        local_18 = local_18 + 4;
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(param_1 + 0x156db8));
    }
  }
  if (local_1a8 <= 1.0) {
    fVar2 = SQRT(local_19c * local_19c + local_1a0 * local_1a0 + local_1a4 * local_1a4);
    if (0.0 < fVar2) {
      fVar2 = 1.0 / fVar2;
      local_1a4 = local_1a4 * fVar2;
      local_1a0 = local_1a0 * fVar2;
      local_19c = local_19c * fVar2;
    }
    else {
      local_1a0 = 0.0;
      local_1a4 = 0.0;
      local_19c = 0.0;
    }
    if ((float *)(param_1 + 0x14d128) != &local_1a4) {
      *(float *)(param_1 + 0x14d128) = local_1a4;
      *(float *)(param_1 + 0x14d12c) = local_1a0;
      *(float *)(param_1 + 0x14d130) = local_19c;
      return local_1a8;
    }
  }
  return local_1a8;
}
