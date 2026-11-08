// Name: FUN_00534ea0
// Address: 00534ea0
// Address Range: [[00534ea0, 00535ce0]]
// Convention: unknown
// Signature: float FUN_00534ea0(int param_1,float *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00534ea0(int param_1,float *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  uint *puVar17;
  uint *puVar18;
  byte bVar19;
  float afStackY_1150 [864];
  byte auStack_3ac [12];
  byte auStack_3a0 [12];
  byte auStack_394 [12];
  byte auStack_388 [12];
  byte auStack_37c [12];
  byte auStack_370 [12];
  byte auStack_364 [12];
  byte auStack_358 [36];
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  byte auStack_320 [36];
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  byte auStack_2e8 [36];
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  byte auStack_2b0 [36];
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  byte auStack_278 [36];
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  byte auStack_240 [36];
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  uint local_208 [8];
  int local_1e8;
  int local_1e4;
  uint auStack_1e0 [6];
  uint auStack_1c8 [6];
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  uint auStack_198 [6];
  uint auStack_180 [6];
  float fStack_168;
  float afStack_164 [4];
  uint uStack_154;
  float afStack_150 [3];
  float fStack_144;
  uint uStack_140;
  uint uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  uint uStack_128;
  uint uStack_124;
  float fStack_120;
  uint uStack_11c;
  uint uStack_118;
  float afStack_114 [3];
  float fStack_108;
  uint uStack_104;
  uint uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float afStack_e0 [6];
  uint uStack_c8;
  uint uStack_c4;
  float fStack_c0;
  float afStack_bc [5];
  float fStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  float afStack_84 [3];
  float afStack_78 [4];
  float afStack_68 [4];
  float fStack_58;
  uint uStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int local_24;
  int local_20;
  float *local_1c;
  int local_18;
  float local_14;
  
  bVar19 = 0;
  if (0.0 < param_3) {
    local_14 = (float)FUN_00473b20(&DAT_01fc9c68,param_2,param_3,param_1 + 0x14d134,
                                   param_1 + 0x14d128);
  }
  else {
    local_14 = (float)FUN_004738d0(&DAT_01fc9c68,param_2,param_1 + 0x14d134,param_1 + 0x14d128);
  }
  if (*(int *)(param_1 + 0x14d134) == 0) {
    *(uint *)(param_1 + 0x14d134) = *(uint *)(param_1 + 0x15f690);
  }
  if (afStack_164 + 0x1d != param_2) {
    local_f0 = *param_2;
    local_ec = param_2[1];
    local_e8 = param_2[2];
  }
  local_ec = local_ec + _DAT_005e5da5;
  *(uint *)(param_1 + 0x14d144) = 0;
  *(uint *)(param_1 + 0x14d148) = 0xffffffff;
  *(uint *)(param_1 + 0x14d14c) = 0xffffffff;
  local_30 = local_14;
  if (-1 < *(int *)(param_1 + 0x15f6a8)) {
    if (&local_1a4 != afStack_164 + 0x1d) {
      local_1a4 = local_f0;
      local_19c = local_e8;
      local_1a0 = local_ec;
    }
    local_1a4 = local_1a4 + param_3;
    local_19c = local_19c + param_3;
    local_1b0 = local_1b0 - param_3;
    local_1a8 = local_1a8 - param_3;
    if (&local_1b0 != &local_1a4) {
      local_1ac = local_1a0;
      local_1b0 = local_1a4;
      local_1a8 = local_19c;
    }
    local_1ac = local_1ac + _DAT_005e5da9;
    FUN_00537fa0(local_208);
    local_208[0] = 0;
    local_24 = 0;
    if (0 < *(int *)(param_1 + 0x156db8)) {
      local_1c = (float *)(param_1 + 0x14d128);
      local_20 = param_1;
      do {
        local_18 = *(int *)(local_20 + 0x156dbc);
        iVar2 = FUN_00536990(param_1,local_18);
        iVar15 = local_18;
        if (iVar2 == 0) {
          iVar2 = FUN_0040c8f0(local_18,_DAT_0264bd40);
          if (iVar2 == 0) {
            local_1e8 = iVar2;
            local_1e4 = iVar2;
            uVar3 = (**(code **)(*(int *)(iVar15 + 0x2b0) + 0x44))(iVar15,local_208);
            if (uVar3 != 0) {
              FUN_004090f0(iVar15,local_208,uVar3);
              puVar17 = auStack_1c8;
              puVar18 = auStack_198;
              for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
                *puVar18 = *puVar17;
                puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
                puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
              }
              iVar15 = FUN_0041b660(&local_1b0,auStack_198);
              if (iVar15 != 0) {
                if ((*(int *)(param_1 + 0x15f6f0) == 0) && (local_1e4 != 0)) {
                  iVar15 = FUN_0044fd20(local_1e4);
                  if (*(int *)(iVar15 + 0x358) == 0) {
                    _DAT_01d046a0 = "..\\core\\setcolid.cpp";
                    _DAT_01d046a4 = 0xcb;
                    FUN_004e4500("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",iVar15);
                  }
                  iVar2 = local_18;
                  fVar1 = local_30;
                  iVar4 = local_18 + 0x30;
                  fStack_c0 = local_f0 - *(float *)(local_18 + 0x20);
                  afStack_bc[0] = local_ec - *(float *)(local_18 + 0x24);
                  afStack_bc[1] = local_e8 - *(float *)(local_18 + 0x28);
                  afStack_114[0] = fStack_c0;
                  afStack_164[(uint)bVar19 * -2 + 0x15] = afStack_bc[(uint)bVar19 * -2];
                  afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x16] =
                       afStack_bc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
                  fStack_28 = fVar1 - *(float *)(iVar2 + 0x24);
                  iVar15 = FUN_0044f670(iVar15,0,afStack_164 + 0x14,param_3,afStack_68 + 0x10,iVar4)
                  ;
                  if (iVar15 != 0) {
                    *(int *)(param_1 + 0x14d144) = local_18;
                    local_30 = fStack_28 + *(float *)(local_18 + 0x24);
                    afStack_e0[2] = 0.0;
                    afStack_e0[4] = 0.0;
                    afStack_e0[3] = 1.0;
                    if (afStack_e0 + 2 != local_1c) {
                      *local_1c = 0.0;
                      local_1c[1] = 1.0;
                      local_1c[2] = 0.0;
                    }
                  }
                }
                else if (uVar3 < 2) {
                  if (uVar3 == 1) {
                    FUN_005b7f5f(&stack0xfffffc48,8,&DAT_005f22b0);
                    pfVar16 = (float *)&stack0xfffffc48;
                    (**(code **)(*(int *)(local_18 + 0x2b0) + 0x24))(local_18);
                    iVar2 = 0;
                    puVar17 = auStack_1e0;
                    puVar18 = auStack_180;
                    for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
                      *puVar18 = *puVar17;
                      puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
                      puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
                    }
                    do {
                      FUN_0041a600(auStack_180,iVar2);
                      afStack_84[0] = (float)uStack_54;
                      afStack_bc[(uint)bVar19 * -2 + 0xf] = afStack_68[(uint)bVar19 * -2 + 6];
                      afStack_bc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x10] =
                           afStack_68[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7];
                      FUN_00408d70(local_18,afStack_bc + 0xe);
                      fStack_fc = fStack_e4;
                      afStack_164[(uint)bVar19 * -2 + 0x1b] = afStack_e0[(uint)bVar19 * -2];
                      afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x1c] =
                           afStack_e0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
                      if (pfVar16 != afStack_164 + 0x1a) {
                        *pfVar16 = fStack_fc;
                        pfVar16[1] = fStack_f8;
                        pfVar16[2] = fStack_f4;
                      }
                      iVar2 = iVar2 + 1;
                      pfVar16 = pfVar16 + 3;
                    } while (iVar2 < 8);
                    FUN_004779e0(auStack_358,&stack0xfffffc48,auStack_388,auStack_370);
                    iVar15 = FUN_00478550(auStack_358,afStack_164 + 0x1d,param_3,afStack_68 + 0xe);
                    FUN_004779e0(auStack_358,&stack0xfffffc48,auStack_370,auStack_3a0);
                    iVar2 = FUN_00478550(auStack_358,afStack_164 + 0x1d,param_3,afStack_68 + 0xe);
                    if (iVar15 != 0 || iVar2 != 0) {
                      afStack_164[0] = -fStack_330;
                      afStack_164[1] = -fStack_32c;
                      fStack_168 = -fStack_334;
                      fStack_12c = -fStack_334;
                      afStack_164[(uint)bVar19 * -2 + 0xf] = afStack_164[(uint)bVar19 * -2];
                      afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x10] =
                           afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
                      if (afStack_e0 + 5 != afStack_164 + 0xe) {
                        afStack_e0[5] = fStack_12c;
                        uStack_c8 = uStack_128;
                        uStack_c4 = uStack_124;
                      }
                    }
                    FUN_004779e0(auStack_278,auStack_3ac,auStack_394,auStack_364);
                    iVar4 = FUN_00478550(auStack_278,afStack_164 + 0x1d,param_3,afStack_68 + 0xe);
                    FUN_004779e0(auStack_278,auStack_3ac,auStack_364,auStack_37c);
                    iVar5 = FUN_00478550(auStack_278,afStack_164 + 0x1d,param_3,afStack_68 + 0xe);
                    if (iVar4 != 0 || iVar5 != 0) {
                      fStack_134 = -fStack_250;
                      fStack_130 = -fStack_24c;
                      fStack_138 = -fStack_254;
                      fStack_120 = -fStack_254;
                      afStack_164[(uint)bVar19 * -2 + 0x12] = afStack_164[(uint)bVar19 * -2 + 0xc];
                      afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x13] =
                           afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xd];
                      if (afStack_e0 + 5 != afStack_164 + 0x11) {
                        afStack_e0[5] = fStack_120;
                        uStack_c8 = uStack_11c;
                        uStack_c4 = uStack_118;
                      }
                    }
                    FUN_004779e0(auStack_240,&stack0xfffffc48,auStack_3ac,auStack_37c);
                    iVar6 = FUN_00478550(auStack_240,afStack_164 + 0x1d,param_3,afStack_68 + 0xe);
                    FUN_004779e0(auStack_240,&stack0xfffffc48,auStack_37c,auStack_388);
                    iVar7 = FUN_00478550(auStack_240,afStack_164 + 0x1d,param_3,afStack_68 + 0xe);
                    if (iVar6 != 0 || iVar7 != 0) {
                      afStack_68[0] = -fStack_218;
                      afStack_68[1] = -fStack_214;
                      afStack_78[3] = -fStack_21c;
                      fStack_a8 = -fStack_21c;
                      afStack_bc[(uint)bVar19 * -2 + 6] = afStack_68[(uint)bVar19 * -2];
                      afStack_bc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7] =
                           afStack_68[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
                      if (afStack_e0 + 5 != afStack_bc + 5) {
                        afStack_e0[5] = fStack_a8;
                        uStack_c8 = uStack_a4;
                        uStack_c4 = uStack_a0;
                      }
                    }
                    FUN_004779e0(auStack_2b0,auStack_3a0,auStack_370,auStack_364);
                    iVar8 = FUN_00478550(auStack_2b0,afStack_164 + 0x1d,param_3,afStack_68 + 0xe);
                    FUN_004779e0(auStack_2b0,auStack_3a0,auStack_364,auStack_394);
                    iVar9 = FUN_00478550(auStack_2b0,afStack_164 + 0x1d,param_3,afStack_68 + 0xe);
                    if (iVar8 != 0 || iVar9 != 0) {
                      fStack_44 = -fStack_288;
                      fStack_40 = -fStack_284;
                      fStack_48 = -fStack_28c;
                      fStack_108 = -fStack_28c;
                      afStack_164[(uint)bVar19 * -2 + 0x18] = afStack_68[(uint)bVar19 * -2 + 9];
                      afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0x19] =
                           afStack_68[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 10];
                      if (afStack_e0 + 5 != afStack_164 + 0x17) {
                        afStack_e0[5] = fStack_108;
                        uStack_c8 = uStack_104;
                        uStack_c4 = uStack_100;
                      }
                    }
                    FUN_004779e0(auStack_2e8,&stack0xfffffc48,auStack_3a0,auStack_394);
                    iVar10 = FUN_00478550(auStack_2e8,afStack_164 + 0x1d,param_3,afStack_68 + 0xe);
                    FUN_004779e0(auStack_2e8,&stack0xfffffc48,auStack_394,auStack_3ac);
                    iVar11 = FUN_00478550(auStack_2e8,afStack_164 + 0x1d,param_3,afStack_68 + 0xe);
                    if (iVar10 != 0 || iVar11 != 0) {
                      afStack_68[3] = -fStack_2c0;
                      fStack_58 = -fStack_2bc;
                      afStack_68[2] = -fStack_2c4;
                      fStack_144 = -fStack_2c4;
                      afStack_164[(uint)bVar19 * -2 + 9] = afStack_68[(uint)bVar19 * -2 + 3];
                      afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 10] =
                           afStack_68[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
                      if (afStack_e0 + 5 != afStack_164 + 8) {
                        afStack_e0[5] = fStack_144;
                        uStack_c8 = uStack_140;
                        uStack_c4 = uStack_13c;
                      }
                    }
                    FUN_004779e0(auStack_320,auStack_388,auStack_37c,auStack_364);
                    iVar12 = FUN_00478550(auStack_320,afStack_164 + 0x1d,param_3,afStack_68 + 0xe);
                    FUN_004779e0(auStack_320,auStack_388,auStack_364,auStack_370);
                    iVar13 = FUN_00478550(auStack_320,afStack_164 + 0x1d,param_3,afStack_68 + 0xe);
                    if (iVar12 != 0 || iVar13 != 0) {
                      fStack_98 = -fStack_2f8;
                      fStack_94 = -fStack_2f4;
                      fStack_9c = -fStack_2fc;
                      afStack_164[2] = -fStack_2fc;
                      afStack_164[(uint)bVar19 * -2 + 3] = afStack_bc[(uint)bVar19 * -2 + 9];
                      afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4] =
                           afStack_bc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 10];
                      if (afStack_e0 + 5 != afStack_164 + 2) {
                        afStack_e0[5] = afStack_164[2];
                        uStack_c8 = afStack_164[3];
                        uStack_c4 = uStack_154;
                      }
                    }
                    if ((((((iVar15 != 0 || iVar2 != 0) || (iVar4 != 0 || iVar5 != 0)) ||
                          (iVar6 != 0 || iVar7 != 0)) || (iVar8 != 0 || iVar9 != 0)) ||
                        (iVar10 != 0 || iVar11 != 0)) || (iVar12 != 0 || iVar13 != 0)) {
                      *(int *)(param_1 + 0x14d144) = local_18;
                      FUN_00408cf0(local_18,afStack_e0 + 5);
                      pfVar16 = local_1c;
                      fStack_3c = afStack_bc[2];
                      afStack_68[(uint)bVar19 * -2 + 0xc] = afStack_bc[(uint)bVar19 * -2 + 3];
                      afStack_68[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xd] =
                           afStack_bc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 4];
                      if (afStack_68 + 0xb != pfVar16) {
                        *pfVar16 = fStack_3c;
                        pfVar16[1] = fStack_38;
                        pfVar16[2] = fStack_34;
                      }
                    }
                  }
                  else {
LAB_00535c8d:
                    _DAT_01d046a0 = "..\\core\\setcolid.cpp";
                    _DAT_01d046a4 = 299;
                    FUN_004e4500("Invalid collision type!");
                  }
                }
                else if (2 < uVar3) {
                  if (uVar3 != 3) goto LAB_00535c8d;
                  FUN_00408de0(local_18,afStack_164 + 0x1d);
                  iVar15 = local_18;
                  afStack_150[0] = (float)uStack_90;
                  afStack_164[(uint)bVar19 * -2 + 6] = afStack_bc[(uint)bVar19 * -2 + 0xc];
                  iVar2 = local_18;
                  afStack_164[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 7] =
                       afStack_bc[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xd];
                  fStack_2c = local_30 - *(float *)(iVar15 + 0x24);
                  iVar15 = (**(code **)(*(int *)(iVar15 + 0x2b0) + 200))
                                     (local_18,afStack_164 + 5,param_3,afStack_68 + 0xf);
                  if (iVar15 != 0) {
                    *(int *)(param_1 + 0x14d144) = iVar2;
                    local_30 = fStack_2c + *(float *)(iVar2 + 0x24);
                    afStack_78[0] = 0.0;
                    afStack_78[2] = 0.0;
                    afStack_78[1] = 1.0;
                    if (afStack_bc + 0x11 != local_1c) {
                      *local_1c = 0.0;
                      local_1c[1] = 1.0;
                      local_1c[2] = 0.0;
                    }
                  }
                }
              }
            }
          }
        }
        local_20 = local_20 + 4;
        local_24 = local_24 + 1;
      } while (local_24 < *(int *)(param_1 + 0x156db8));
    }
    iVar15 = *(int *)(param_1 + 0x14d144);
    if (iVar15 != 0) {
      uVar14 = (**(code **)(*(int *)(iVar15 + 0x2b0) + 0x4c))(iVar15);
      *(uint *)(param_1 + 0x14d134) = uVar14;
      return local_30;
    }
  }
  return local_30;
}
