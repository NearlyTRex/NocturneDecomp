// Name: FUN_0050ec80
// Address: 0050ec80
// Address Range: [[0050ec80, 0050f90f]]
// Convention: unknown
// Signature: float FUN_0050ec80(int param_1,float *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0050ec80(int param_1,float *param_2,float param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint auStack_308 [3];
  byte auStack_2fc [12];
  byte auStack_2f0 [12];
  byte auStack_2e4 [12];
  byte auStack_2d8 [12];
  byte auStack_2cc [12];
  byte auStack_2c0 [12];
  byte auStack_2b4 [12];
  byte auStack_2a8 [36];
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  byte auStack_270 [36];
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  byte auStack_238 [36];
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  byte auStack_200 [36];
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  byte auStack_1c8 [36];
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  byte auStack_190 [36];
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  uint local_158 [8];
  int local_138;
  int local_134;
  byte auStack_130 [24];
  byte auStack_118 [24];
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  byte auStack_b8 [24];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  byte auStack_7c [12];
  byte auStack_70 [12];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  byte auStack_4c [12];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if (0.0 < param_3) {
    local_14 = (float)FUN_004687e0(&DAT_01fba938,param_2,param_3,param_1 + 0x14cd4c,
                                   param_1 + 0x14cd40);
  }
  else {
    local_14 = (float)FUN_00468580(&DAT_01fba938,param_2,param_1 + 0x14cd4c,param_1 + 0x14cd40);
  }
  if (*(int *)(param_1 + 0x14cd4c) == 0) {
    *(uint *)(param_1 + 0x14cd4c) = *(uint *)(param_1 + 0x15f294);
  }
  if (&local_e8 != param_2) {
    local_e8 = *param_2;
    local_e4 = param_2[1];
    local_e0 = param_2[2];
  }
  local_e4 = local_e4 + _DAT_00590a0d;
  *(uint *)(param_1 + 0x14cd5c) = 0;
  *(uint *)(param_1 + 0x14cd60) = 0xffffffff;
  *(uint *)(param_1 + 0x14cd64) = 0xffffffff;
  local_28 = local_14;
  if (-1 < *(int *)(param_1 + 0x15f2ac)) {
    if (&local_f4 != &local_e8) {
      local_f4 = local_e8;
      local_ec = local_e0;
      local_f0 = local_e4;
    }
    local_f4 = local_f4 + param_3;
    local_ec = local_ec + param_3;
    local_100 = local_100 - param_3;
    local_f8 = local_f8 - param_3;
    if (&local_100 != &local_f4) {
      local_fc = local_f0;
      local_100 = local_f4;
      local_f8 = local_ec;
    }
    local_fc = local_fc + _DAT_00590a11;
    FUN_00511990(local_158);
    local_158[0] = 0;
    local_1c = 0;
    if (0 < *(int *)(param_1 + 0x1569c0)) {
      puVar1 = (uint *)(param_1 + 0x14cd40);
      local_18 = param_1;
      do {
        iVar2 = *(int *)(local_18 + 0x1569c4);
        iVar3 = FUN_005103f0(param_1,iVar2);
        if (iVar3 == 0) {
          iVar3 = FUN_0040d890(iVar2,_DAT_02dc9e60);
          if (iVar3 == 0) {
            local_138 = iVar3;
            local_134 = iVar3;
            uVar4 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x34))(iVar2,local_158);
            if (uVar4 != 0) {
              uVar18 = FUN_0040a540(iVar2,auStack_118,local_158,uVar4);
              iVar3 = FUN_0041dc20(&local_100,uVar18);
              if (iVar3 != 0) {
                if ((*(int *)(param_1 + 0x15f2f4) == 0) && (local_134 != 0)) {
                  iVar3 = FUN_00454530(local_134);
                  if (*(int *)(iVar3 + 0x358) == 0) {
                    _DAT_01cc4800 = "..\\core\\setcolid.cpp";
                    _DAT_01cc4804 = 0xcb;
                    FUN_004c8440("info.keyFramedModelInstancePtr != NULL, but %s doesn't have exact collision",iVar3);
                  }
                  fStack_58 = local_e8 - *(float *)(iVar2 + 0x20);
                  fStack_54 = local_e4 - *(float *)(iVar2 + 0x24);
                  fStack_50 = local_e0 - *(float *)(iVar2 + 0x28);
                  fStack_24 = local_28 - *(float *)(iVar2 + 0x24);
                  iVar3 = FUN_00453f00(iVar3,0,&fStack_58,param_3,&fStack_24,iVar2 + 0x30);
                  if (iVar3 != 0) {
                    *(int *)(param_1 + 0x14cd5c) = iVar2;
                    local_28 = fStack_24 + *(float *)(iVar2 + 0x24);
                    uStack_d0 = 0;
                    uStack_cc = 0x3f800000;
                    uStack_c8 = 0;
                    if (puVar1 != &uStack_d0) {
                      *puVar1 = 0;
                      *(uint *)(param_1 + 0x14cd44) = 0x3f800000;
                      *(uint *)(param_1 + 0x14cd48) = 0;
                    }
                  }
                }
                else if (uVar4 < 2) {
                  if (uVar4 == 1) {
                    FUN_005644a7(auStack_308,8,&DAT_005993b0);
                    puVar17 = auStack_308;
                    iVar3 = 0;
                    (**(code **)(*(int *)(iVar2 + 0x14c) + 0x14))(iVar2,auStack_130);
                    do {
                      uVar18 = FUN_0041cc70(auStack_130,auStack_70,iVar3);
                      puVar5 = (uint *)FUN_0040a240(iVar2,auStack_7c,uVar18);
                      if (puVar17 != puVar5) {
                        *puVar17 = *puVar5;
                        puVar17[1] = puVar5[1];
                        puVar17[2] = puVar5[2];
                      }
                      iVar3 = iVar3 + 1;
                      puVar17 = puVar17 + 3;
                    } while (iVar3 < 8);
                    FUN_0046c5b0(auStack_270,auStack_308,auStack_2d8,auStack_2c0);
                    iVar3 = FUN_0046d110(auStack_270,&local_e8,param_3,&local_28);
                    FUN_0046c5b0(auStack_270,auStack_308,auStack_2c0,auStack_2f0);
                    iVar6 = FUN_0046d110(auStack_270,&local_e8,param_3,&local_28);
                    if (iVar3 != 0 || iVar6 != 0) {
                      fStack_a0 = -fStack_24c;
                      fStack_9c = -fStack_248;
                      fStack_98 = -fStack_244;
                      if (&fStack_64 != &fStack_a0) {
                        fStack_64 = fStack_a0;
                        fStack_60 = fStack_9c;
                        fStack_5c = fStack_98;
                      }
                    }
                    FUN_0046c5b0(auStack_1c8,auStack_2fc,auStack_2e4,auStack_2b4);
                    iVar7 = FUN_0046d110(auStack_1c8,&local_e8,param_3,&local_28);
                    FUN_0046c5b0(auStack_1c8,auStack_2fc,auStack_2b4,auStack_2cc);
                    iVar8 = FUN_0046d110(auStack_1c8,&local_e8,param_3,&local_28);
                    if (iVar7 != 0 || iVar8 != 0) {
                      fStack_40 = -fStack_1a4;
                      fStack_3c = -fStack_1a0;
                      fStack_38 = -fStack_19c;
                      if (&fStack_64 != &fStack_40) {
                        fStack_64 = fStack_40;
                        fStack_60 = fStack_3c;
                        fStack_5c = fStack_38;
                      }
                    }
                    FUN_0046c5b0(auStack_200,auStack_308,auStack_2fc,auStack_2cc);
                    iVar9 = FUN_0046d110(auStack_200,&local_e8,param_3,&local_28);
                    FUN_0046c5b0(auStack_200,auStack_308,auStack_2cc,auStack_2d8);
                    iVar10 = FUN_0046d110(auStack_200,&local_e8,param_3,&local_28);
                    if (iVar9 != 0 || iVar10 != 0) {
                      fStack_34 = -fStack_1dc;
                      fStack_30 = -fStack_1d8;
                      fStack_2c = -fStack_1d4;
                      if (&fStack_64 != &fStack_34) {
                        fStack_64 = fStack_34;
                        fStack_60 = fStack_30;
                        fStack_5c = fStack_2c;
                      }
                    }
                    FUN_0046c5b0(auStack_190,auStack_2f0,auStack_2c0,auStack_2b4);
                    iVar11 = FUN_0046d110(auStack_190,&local_e8,param_3,&local_28);
                    FUN_0046c5b0(auStack_190,auStack_2f0,auStack_2b4,auStack_2e4);
                    iVar12 = FUN_0046d110(auStack_190,&local_e8,param_3,&local_28);
                    if (iVar11 != 0 || iVar12 != 0) {
                      fStack_dc = -fStack_16c;
                      fStack_d8 = -fStack_168;
                      fStack_d4 = -fStack_164;
                      if (&fStack_64 != &fStack_dc) {
                        fStack_64 = fStack_dc;
                        fStack_60 = fStack_d8;
                        fStack_5c = fStack_d4;
                      }
                    }
                    FUN_0046c5b0(auStack_2a8,auStack_308,auStack_2f0,auStack_2e4);
                    iVar13 = FUN_0046d110(auStack_2a8,&local_e8,param_3,&local_28);
                    FUN_0046c5b0(auStack_2a8,auStack_308,auStack_2e4,auStack_2fc);
                    iVar14 = FUN_0046d110(auStack_2a8,&local_e8,param_3,&local_28);
                    if (iVar13 != 0 || iVar14 != 0) {
                      fStack_94 = -fStack_284;
                      fStack_90 = -fStack_280;
                      fStack_8c = -fStack_27c;
                      if (&fStack_64 != &fStack_94) {
                        fStack_64 = fStack_94;
                        fStack_60 = fStack_90;
                        fStack_5c = fStack_8c;
                      }
                    }
                    FUN_0046c5b0(auStack_238,auStack_2d8,auStack_2cc,auStack_2b4);
                    iVar15 = FUN_0046d110(auStack_238,&local_e8,param_3,&local_28);
                    FUN_0046c5b0(auStack_238,auStack_2d8,auStack_2b4,auStack_2c0);
                    iVar16 = FUN_0046d110(auStack_238,&local_e8,param_3,&local_28);
                    if (iVar15 != 0 || iVar16 != 0) {
                      fStack_c4 = -fStack_214;
                      fStack_c0 = -fStack_210;
                      fStack_bc = -fStack_20c;
                      if (&fStack_64 != &fStack_c4) {
                        fStack_64 = fStack_c4;
                        fStack_60 = fStack_c0;
                        fStack_5c = fStack_bc;
                      }
                    }
                    if ((((((iVar3 != 0 || iVar6 != 0) || (iVar7 != 0 || iVar8 != 0)) ||
                          (iVar9 != 0 || iVar10 != 0)) || (iVar11 != 0 || iVar12 != 0)) ||
                        (iVar13 != 0 || iVar14 != 0)) || (iVar15 != 0 || iVar16 != 0)) {
                      *(int *)(param_1 + 0x14cd5c) = iVar2;
                      puVar17 = (uint *)FUN_0040a200(iVar2,auStack_b8,&fStack_64);
                      if (puVar1 != puVar17) {
                        *puVar1 = *puVar17;
                        *(uint *)(param_1 + 0x14cd44) = puVar17[1];
                        *(uint *)(param_1 + 0x14cd48) = puVar17[2];
                      }
                    }
                  }
                  else {
LAB_0050f8bc:
                    _DAT_01cc4800 = "..\\core\\setcolid.cpp";
                    _DAT_01cc4804 = 299;
                    FUN_004c8440("Invalid collision type!");
                  }
                }
                else if (2 < uVar4) {
                  if (uVar4 != 3) goto LAB_0050f8bc;
                  FUN_0040a290(iVar2,auStack_4c,&local_e8);
                  fStack_20 = local_28 - *(float *)(iVar2 + 0x24);
                  iVar3 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0xb8))
                                    (iVar2,auStack_4c,param_3,&fStack_20);
                  if (iVar3 != 0) {
                    *(int *)(param_1 + 0x14cd5c) = iVar2;
                    local_28 = fStack_20 + *(float *)(iVar2 + 0x24);
                    uStack_84 = 0x3f800000;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    if (puVar1 != &uStack_88) {
                      *puVar1 = 0;
                      *(uint *)(param_1 + 0x14cd44) = 0x3f800000;
                      *(uint *)(param_1 + 0x14cd48) = 0;
                    }
                  }
                }
              }
            }
          }
        }
        local_18 = local_18 + 4;
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(param_1 + 0x1569c0));
    }
    iVar2 = *(int *)(param_1 + 0x14cd5c);
    if (iVar2 != 0) {
      uVar18 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x3c))(iVar2);
      *(uint *)(param_1 + 0x14cd4c) = uVar18;
      return local_28;
    }
  }
  return local_28;
}
