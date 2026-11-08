// Name: FUN_00585b00
// Address: 00585b00
// Address Range: [[00585b00, 005881c1]]
// Convention: unknown
// Signature: void FUN_00585b00(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00585b00(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  float *pfVar7;
  int iVar8;
  uint *puVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_138c [51];
  uint *apuStackY_12c0 [3];
  float afStackY_12b4 [899];
  ulonglong uVar12;
  float fStack_478;
  uint *puStack_470;
  float fStack_468;
  float fStack_464;
  byte auStack_460 [4];
  float fStack_45c;
  int iStack_424;
  int iStack_420;
  float fStack_41c;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  uint local_404;
  uint uStack_400;
  uint uStack_3fc;
  uint uStack_3f8;
  uint uStack_3f4;
  uint uStack_3f0;
  uint local_3ec [6];
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float afStack_3bc [6];
  float fStack_3a4;
  float afStack_3a0 [4];
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  uint uStack_344;
  uint uStack_338;
  float fStack_32c;
  uint uStack_328;
  uint uStack_324;
  uint uStack_320;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  uint uStack_308;
  float fStack_2fc;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float *pfStack_2d8;
  uint *apuStack_2d4 [2];
  float fStack_2cc;
  float afStack_2c8 [5];
  float afStack_2b4 [3];
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  uint uStack_290;
  float fStack_284;
  uint uStack_280;
  uint uStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  uint uStack_26c;
  float fStack_260;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  uint uStack_244;
  float fStack_23c;
  uint uStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint uStack_1e8;
  uint uStack_1dc;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float afStack_1c4 [3];
  uint uStack_1b8;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  uint uStack_194;
  float fStack_190;
  uint uStack_188;
  float afStack_17c [3];
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  uint uStack_164;
  float fStack_160;
  float fStack_15c;
  uint uStack_158;
  float fStack_14c;
  uint uStack_148;
  float fStack_144;
  uint uStack_140;
  float afStack_13c [4];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float afStack_f8 [3];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_c8 [3];
  float afStack_bc [3];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_98;
  uint uStack_8c;
  int iStack_78;
  int iStack_74;
  uint *puStack_70;
  uint *puStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint *puStack_5c;
  int iStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint *puStack_38;
  int local_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  uint *puStack_18;
  
  bVar11 = 0;
  local_34 = FUN_004a6c30(0x01C51D80,"?DebugActionPending" + 1);
  if ((*(int *)(param_1 + 0x2628) != 0) && (*(float *)(param_1 + 0x20084) < _DAT_005f6841)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x2628) + 0x154) + 0x1c))();
    puVar6 = local_3ec;
    puVar9 = &local_404;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    if ((uint *)(param_1 + 0x20078) != &local_404) {
      *(uint *)(param_1 + 0x20078) = local_404;
      *(uint *)(param_1 + 0x2007c) = uStack_400;
      *(uint *)(param_1 + 0x20080) = uStack_3fc;
    }
    if ((uint *)(param_1 + 0x20084) != &uStack_3f8) {
      *(uint *)(param_1 + 0x20084) = uStack_3f8;
      *(uint *)(param_1 + 0x20088) = uStack_3f4;
      *(uint *)(param_1 + 0x2008c) = uStack_3f0;
    }
    fStack_3a4 = *(float *)(param_1 + 0x20078) + *(float *)(param_1 + 0x20084);
    afStack_3a0[0] = *(float *)(param_1 + 0x2007c) + *(float *)(param_1 + 0x20088);
    afStack_3a0[1] = *(float *)(param_1 + 0x20080) + *(float *)(param_1 + 0x2008c);
    fStack_128 = fStack_3a4;
    afStack_13c[(uint)bVar11 * -2 + 6] = afStack_3a0[(uint)bVar11 * -2];
    afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    fStack_170 = fStack_128 * _DAT_005f6845;
    fStack_16c = fStack_124 * _DAT_005f6845;
    fStack_168 = fStack_120 * _DAT_005f6845;
    fStack_2cc = fStack_128 * _DAT_005f6845;
    afStack_2c8[(uint)bVar11 * -2] = afStack_2c8[(uint)bVar11 * -2 + 0x57];
    afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x58];
    FUN_00408b40(*(uint *)(param_1 + 0x2628),&fStack_2cc);
    pfVar7 = afStack_2c8 + 0x41;
    afStack_1c4[0] = (float)uStack_344;
    afStack_2c8[(uint)bVar11 * -2 + 0x42] = afStack_3a0[(uint)bVar11 * -2 + 0x18];
    afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x43] =
         afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
    FUN_00408bb0(param_1,pfVar7);
    fStack_32c = fStack_368;
    afStack_3a0[(uint)bVar11 * -2 + 0x1e] = afStack_3a0[(uint)bVar11 * -2 + 0xf];
    afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
         afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    if ((float *)(param_1 + 0x2006c) != afStack_3a0 + 0x1d) {
      *(float *)(param_1 + 0x2006c) = fStack_32c;
      *(uint *)(param_1 + 0x20070) = uStack_328;
      *(uint *)(param_1 + 0x20074) = uStack_324;
    }
  }
  FUN_00434790(param_1,param_2);
  FUN_004d7f50(0x01CCF390,param_2);
  fVar1 = *(float *)(param_1 + 0xc1d0) - param_2;
  *(float *)(param_1 + 0xc1d0) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0xc1d0) = 0;
  }
  fVar1 = *(float *)(param_1 + 0x20014) - param_2;
  *(float *)(param_1 + 0x20014) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x20014) = 0;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  FUN_00588a10();
  pfVar7 = afStack_13c + 0x20;
  afStack_bc[0] = (float)uStack_338;
  afStack_13c[(uint)bVar11 * -2 + 0x21] = afStack_3a0[(uint)bVar11 * -2 + 0x1b];
  afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22] =
       afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c];
  FUN_00408b40(param_1,pfVar7);
  uVar12 = CONCAT44(param_2,param_1);
  fStack_11c = fStack_20c;
  afStack_13c[(uint)bVar11 * -2 + 9] = afStack_2c8[(uint)bVar11 * -2 + 0x30];
  afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
       afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x31];
  FUN_005881d0(uVar12);
  iStack_3c = 1;
  iStack_48 = 1;
  iStack_4c = 1;
  iStack_2c = 1;
  uStack_30 = 1;
  if (*(int *)(param_1 + 0x26fc) != 0) {
    iStack_3c = 0;
    iStack_4c = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_48 = 0;
    if (local_34 != 0) {
      FUN_00445430(PTR_DAT_00611100,"grabbedBy=%s\n",*(int *)(param_1 + 0x26fc));
    }
  }
  if (*(int *)(param_1 + 0x1ff7c) != 0) {
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    iStack_4c = 0;
    if (local_34 != 0) {
      FUN_00445430(PTR_DAT_00611100,"pushedObject=%s\n",*(uint *)(param_1 + 0x1ff7c));
    }
  }
  if ((*(int *)(param_1 + 0x1ff84) != 0) || (*(int *)(param_1 + 0x20000) != 0)) {
    iStack_48 = 0;
    iStack_4c = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      FUN_00445430(PTR_DAT_00611100,"ladder\n");
    }
  }
  if ((*(int *)(param_1 + 0x1ff78) != 0) || (*(int *)(param_1 + 0x1ff5c) == 4)) {
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      FUN_00445430(PTR_DAT_00611100,"pickup\n");
    }
  }
  iVar5 = param_1 + 0x158;
  puStack_18 = (uint *)FUN_00524a40(iVar5,0x31);
  if ((((0.0 < (float)puStack_18) ||
       (puStack_18 = (uint *)FUN_00524a40(iVar5,0x35), 0.0 < (float)puStack_18)) ||
      (puStack_18 = (uint *)FUN_00524a40(iVar5,0x36), 0.0 < (float)puStack_18)) ||
     (*(float *)(param_1 + 0x2538) <= 0.0)) {
    iStack_4c = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      FUN_00445430(PTR_DAT_00611100,"hurt\n");
    }
  }
  iVar5 = param_1 + 0x158;
  puStack_18 = (uint *)FUN_00524a40(iVar5,0x27);
  if (((0.0 < (float)puStack_18) ||
      (puStack_18 = (uint *)FUN_00524a40(iVar5,0x28), 0.0 < (float)puStack_18)) ||
     ((puStack_18 = (uint *)FUN_00524a40(iVar5,0x29), 0.0 < (float)puStack_18 ||
      ((*(int *)(param_1 + 0x1ff5c) == 5 || (*(int *)(param_1 + 0x1ff74) != 0)))))) {
    uStack_30 = 0;
    iStack_3c = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00445430(PTR_DAT_00611100,"door\n");
    }
  }
  puStack_18 = (uint *)FUN_00524a40(param_1 + 0x158,0x3b);
  if (0.0 < (float)puStack_18) {
    iStack_4c = 0;
    iStack_2c = 0;
    iStack_48 = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      FUN_00445430(PTR_DAT_00611100,"sitting\n");
    }
  }
  if (*(int *)(param_1 + 0x1ff5c) == 1) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00445430(PTR_DAT_00611100,"stashinventory\n");
    }
  }
  if (*(int *)(param_1 + 0x1ff5c) == 2) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00445430(PTR_DAT_00611100,"placeobject\n");
    }
  }
  if (*(int *)(param_1 + 0x1ff5c) == 6) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00445430(PTR_DAT_00611100,"putdownobject\n");
    }
  }
  if (*(int *)(param_1 + 0x1ff5c) == 3) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00445430(PTR_DAT_00611100,"toss\n");
    }
  }
  if (*(int *)(param_1 + 0x1ff5c) == 7) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00445430(PTR_DAT_00611100,"attackmelee\n");
    }
  }
  if (*(int *)(param_1 + 0x26fc) == 0) {
    if (*(int *)(param_1 + 0xdc) != 0) {
      iStack_48 = 1;
    }
    if (*(float *)(param_1 + 0x24) != *(float *)(param_1 + 0x2504)) {
      iStack_48 = 1;
    }
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2);
  iVar5 = FUN_00524770();
  if ((*(int *)(iVar5 + 0x24) == 5) || (iVar5 = FUN_00524770(), *(int *)(iVar5 + 0x24) == 6)) {
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x249c) * (float)_DAT_005f6849;
  }
  if (*(int *)(param_1 + 0x1ff88) == 0) {
    fVar1 = *(float *)(param_1 + 0x20018) - param_2 * (float)_DAT_005f6849;
    *(float *)(param_1 + 0x20018) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x20018) = 0;
    }
  }
  else {
    fVar1 = param_2 * (float)_DAT_005f6849 + *(float *)(param_1 + 0x20018);
    *(float *)(param_1 + 0x20018) = fVar1;
    if (1.0 < fVar1) {
      *(uint *)(param_1 + 0x20018) = 0x3f800000;
    }
  }
  iVar5 = *(int *)(param_1 + 0x1ff84);
  iStack_24 = 1;
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x20000) == 0) {
      iVar8 = *(int *)(param_1 + 0x1ff88);
      if (iVar8 == 0) {
        if (*(int *)(param_1 + 0x26fc) == 0) {
          if (*(int *)(param_1 + 0x1ff7c) == 0) {
            iVar5 = FUN_00432240(param_1,param_2);
            if (iVar5 == 0) {
              if (iStack_3c != 0) {
                iVar5 = FUN_00524770();
                uVar3 = *(uint *)(iVar5 + 0x24);
                if (uVar3 < 0x12) {
                  if ((uVar3 < 2) || (uVar3 < 3)) {
LAB_005876d2:
                    if (*(int *)(param_1 + 0x2500) != 0) {
                      iVar8 = 0;
                      iVar5 = FUN_00524770();
                      iVar5 = *(int *)(iVar5 + 0x24);
                      if (*(int *)(param_1 + 0xc1d8) == 0) {
                        if (*(int *)(param_1 + 0xc1dc) == 0) {
                          if ((float)_DAT_005f6851 <= *(float *)(param_1 + 0xc1fc)) {
                            if (_DAT_005f6859 < (double)*(float *)(param_1 + 0xc1fc)) {
                              iVar8 = 6;
                            }
                          }
                          else {
                            iVar8 = 5;
                          }
                        }
                        else {
                          iVar8 = 2;
                        }
                      }
                      else if (*(int *)(param_1 + 0xc1e0) == 0) {
                        iVar8 = 1;
                      }
                      else {
                        iVar8 = 4;
                      }
                      iStack_78 = param_1 + 0x158;
                      puStack_18 = (uint *)FUN_00524a40(iStack_78,1);
                      pfStack_20 = (float *)((float)puStack_18 * _DAT_006060a0);
                      puStack_18 = (uint *)FUN_00524a40(iStack_78,4);
                      pfStack_20 = (float *)((float)puStack_18 * _DAT_006060a4 + (float)pfStack_20);
                      puStack_18 = (uint *)FUN_00524a40(iStack_78,2);
                      fVar2 = (float)puStack_18 * _DAT_006060a8;
                      fVar1 = *(float *)(param_1 + 0xc200) * *(float *)(param_1 + 0x2528);
                      *(float *)(param_1 + 0x2508) = fVar1;
                      *(float *)(param_1 + 0x20024) = *(float *)(param_1 + 0x20024) - fVar1;
                      *(float *)(param_1 + 0x1ffc4) = *(float *)(param_1 + 0x1ffc4) - fVar1;
                      *(float *)(param_1 + 0x1ffe4) =
                           *(float *)(param_1 + 0x1ffe4) - *(float *)(param_1 + 0x2508);
                      *(float *)(param_1 + 0x1ffcc) =
                           *(float *)(param_1 + 0x1ffcc) - *(float *)(param_1 + 0x2508);
                      *(float *)(param_1 + 0x1ffec) =
                           *(float *)(param_1 + 0x1ffec) - *(float *)(param_1 + 0x2508);
                      *(float *)(param_1 + 0x250c) =
                           *(float *)(param_1 + 0xc1fc) * param_2 * (fVar2 + (float)pfStack_20) +
                           *(float *)(param_1 + 0x250c);
                      if ((*(int *)(param_1 + 0xc1f4) != 0) && (*(int *)(param_1 + 0x2c98) != 0xe))
                      {
                        switch(iVar5) {
                        case 0:
                        case 1:
                        case 2:
                        case 5:
                        case 6:
                          iVar8 = 0x16;
                          break;
                        default:
                          goto switchD_0058784a_caseD_3;
                        case 4:
                          iVar8 = 0x12;
                        }
                        *(uint *)(param_1 + 0x2500) = 0;
                      }
switchD_0058784a_caseD_3:
                      if (iVar8 != iVar5) {
                        FUN_005247c0(param_1 + 0x158,iVar8,1);
                      }
                      if (*(int *)(param_1 + 0xc1e8) != 0) {
                        FUN_004ec020();
                      }
                    }
                    iStack_24 = 0;
                  }
                  else if (uVar3 < 5) {
                    if (uVar3 == 4) goto LAB_005876d2;
                  }
                  else if ((uVar3 < 6) || (uVar3 == 6)) goto LAB_005876d2;
                }
                else if ((((uVar3 < 0x13) || (uVar3 < 0x16)) || (uVar3 < 0x17)) ||
                        (((uVar3 < 0x18 || (uVar3 < 0x19)) || (uVar3 == 0x19)))) {
                  *(uint *)(param_1 + 0x2500) = 0;
                }
              }
            }
            else {
              uVar3 = *(uint *)(param_1 + 0x273c);
              if (uVar3 < 2) {
                if (uVar3 == 1) {
                  uVar12 = 0x100000001;
                }
                else {
                  uVar12 = 0x100000000;
                }
LAB_0058763b:
                FUN_005247c0(param_1 + 0x158,uVar12);
              }
              else {
                if (uVar3 < 3) {
                  uVar12 = 0x100000004;
                  goto LAB_0058763b;
                }
                if (uVar3 != 3) {
                  uVar12 = 0x100000000;
                  goto LAB_0058763b;
                }
                FUN_005247c0(param_1 + 0x158,0,1);
                FUN_00445430(PTR_DAT_00611100,"%s confused while walking to scriptDest!\n",param_1);
              }
              *(uint *)(param_1 + 0x24a4) = 0;
              *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
              *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
            }
          }
          else {
            iStack_28 = iVar5;
            if (*(int *)(param_1 + 0xc1e4) != 0) {
              (**(code **)(*(int *)(*(int *)(param_1 + 0x1ff7c) + 0x154) + 0x1c))();
              pfVar7 = afStack_3bc;
              pfVar10 = &fStack_3d4;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *pfVar10 = *pfVar7;
                pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
                pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
              }
              fStack_104 = fStack_3d4 + fStack_3c8;
              fStack_100 = fStack_3d0 + fStack_3c4;
              fStack_fc = fStack_3cc + fStack_3c0;
              fStack_254 = fStack_3d4 + fStack_3c8;
              afStack_2c8[(uint)bVar11 * -2 + 0x1e] = afStack_13c[(uint)bVar11 * -2 + 0xf];
              afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
                   afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
              fStack_110 = fStack_254 * _DAT_005f6845;
              fStack_10c = fStack_250 * _DAT_005f6845;
              fStack_108 = fStack_24c * _DAT_005f6845;
              afStack_17c[0] = fStack_254 * _DAT_005f6845;
              afStack_2c8[(uint)bVar11 * -2 + 0x54] = afStack_13c[(uint)bVar11 * -2 + 0xc];
              afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x55] =
                   afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
              FUN_00408b40(*(uint *)(param_1 + 0x1ff7c),afStack_2c8 + 0x53);
              pfVar7 = afStack_13c + 0x11;
              afStack_f8[0] = (float)uStack_1b8;
              afStack_13c[(uint)bVar11 * -2 + 0x12] = afStack_2c8[(uint)bVar11 * -2 + 0x45];
              afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
                   afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x46];
              FUN_00408bb0(param_1,pfVar7);
              uStack_164 = uStack_158;
              afStack_2c8[(uint)bVar11 * -2 + 0x5a] = afStack_2c8[(uint)bVar11 * -2 + 0x5d];
              afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x5b] =
                   afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x5e];
              FUN_005a7520();
              uStack_1dc = uStack_8c;
              afStack_2c8[(uint)bVar11 * -2 + 0x3c] = afStack_13c[(uint)bVar11 * -2 + 0x2d];
              afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3d] =
                   afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e];
              puStack_470 = (uint *)FUN_0040cd60();
              puStack_18 = puStack_470;
              fStack_35c = fStack_3c8 - fStack_3d4;
              fStack_358 = fStack_3c4 - fStack_3d0;
              fStack_354 = fStack_3c0 - fStack_3cc;
              fStack_314 = fStack_3c8 - fStack_3d4;
              afStack_3a0[(uint)bVar11 * -2 + 0x24] = afStack_3a0[(uint)bVar11 * -2 + 0x12];
              afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25] =
                   afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
              fStack_200 = fStack_314 * _DAT_005f6845;
              fStack_1fc = fStack_310 * _DAT_005f6845;
              fStack_1f8 = fStack_30c * _DAT_005f6845;
              fStack_23c = fStack_314 * _DAT_005f6845;
              afStack_2c8[(uint)bVar11 * -2 + 0x24] = afStack_2c8[(uint)bVar11 * -2 + 0x33];
              afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25] =
                   afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x34];
              uStack_238 = 0;
              if ((((fStack_15c - SQRT(fStack_234 * fStack_234 + fStack_23c * fStack_23c) <
                     (float)_DAT_005f6861) && (1.0 < (double)fStack_160)) &&
                  ((double)fStack_160 < _DAT_005f6869)) &&
                 (ABS((float)puStack_470) < (float)_DAT_005f6871)) {
                puStack_5c = (uint *)(param_2 * _DAT_005f6879);
                if ((float)puStack_470 < -(float)puStack_5c) {
                  puStack_470 = (uint *)-(float)puStack_5c;
                }
                if ((float)puStack_5c < (float)puStack_470) {
                  puStack_470 = puStack_5c;
                }
                *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + (float)puStack_470;
                FUN_00433d50(param_1,param_1 + 0x30);
                goto LAB_0058636e;
              }
            }
            if (iStack_28 == 0) {
              FUN_005247c0(param_1 + 0x158,0,1);
              FUN_004ebbe0();
            }
          }
        }
        else {
          if (*(int *)(param_1 + 0x2700) == 0) {
            FUN_00408bb0(param_1,*(int *)(param_1 + 0x26fc) + 0x20);
            uStack_1e8 = uStack_140;
            afStack_2c8[(uint)bVar11 * -2 + 0x39] = afStack_13c[(uint)bVar11 * -2];
            afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3a] =
                 afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            FUN_005a7520();
            uStack_26c = uStack_188;
            afStack_2c8[(uint)bVar11 * -2 + 0x18] = afStack_2c8[(uint)bVar11 * -2 + 0x51];
            afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
                 afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x52];
            puStack_18 = (uint *)FUN_0040cd60();
            puStack_38 = puStack_18;
            if ((float)puStack_18 < _DAT_005f687d) {
              puStack_38 = (uint *)((float)puStack_18 + _DAT_005f6879);
            }
            if (_DAT_005f6881 < (float)puStack_38) {
              puStack_38 = (uint *)((float)puStack_38 + _DAT_005f6885);
            }
            puStack_6c = (uint *)(param_2 * _DAT_005f6879);
            puStack_70 = (uint *)-(float)puStack_6c;
            if ((float)puStack_38 < (float)puStack_70) {
              puStack_38 = puStack_70;
            }
            if ((float)puStack_6c < (float)puStack_38) {
              puStack_38 = puStack_6c;
            }
            *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + (float)puStack_38;
            FUN_00433d50(param_1,param_1 + 0x30);
          }
          iStack_44 = *(int *)(param_1 + 0x26fc);
          pfStack_20 = *(float **)(iStack_44 + 0x154);
          iStack_58 = param_1 + 0x158;
          FUN_00569130(iStack_58,0);
          pfVar7 = pfStack_20;
          iVar5 = iStack_44;
          uVar12 = CONCAT44(afStack_13c + 0x1d,param_1);
          afStack_c8[0] = (float)uStack_98;
          afStack_13c[(uint)bVar11 * -2 + 0x1e] = afStack_13c[(uint)bVar11 * -2 + 0x2a];
          afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
               afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b];
          iVar5 = (*(code *)pfVar7[0x44])(iVar5,uVar12);
          if (iVar5 == 0) {
            *(uint *)(param_1 + 0x26fc) = 0;
          }
          else if (*(int *)(param_1 + 0x26fc) != 0) {
            fVar1 = *(float *)(param_1 + 0x200a8) + param_2;
            *(float *)(param_1 + 0x200a8) = fVar1;
            if ((_DAT_006060ac <= fVar1) && (*(int *)(param_1 + 0x2700) != 1)) {
              pfStack_20 = (float *)FUN_00524a40(iStack_58,0x2f);
              puStack_18 = (uint *)FUN_00524a40(iStack_58,0x30);
              if ((float)puStack_18 + (float)pfStack_20 <= 0.0) {
                (**(code **)(*(int *)(param_1 + 0x154) + 0xf0))();
              }
              else if (*(int *)(param_1 + 0xc1e4) != 0) {
                FUN_005247c0(iStack_58,0x30,1);
                *(uint *)(param_1 + 0xc1e4) = 0;
              }
            }
            goto LAB_0058636e;
          }
          FUN_005247c0(param_1 + 0x158,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar8 + 0x154) + 0x98))(iVar8,&iStack_424);
        if ((iStack_424 == 0) || (param_1 != iStack_420)) {
          FUN_004ebe80();
        }
        else {
          puVar6 = (uint *)(*(int *)(iStack_420 + 0x1ff88) + 0x34 + (uint)bVar11 * -8);
          pfStack_2d8 = *(float **)(*(int *)(iStack_420 + 0x1ff88) + 0x30);
          apuStack_2d4[(uint)bVar11 * -2] = (uint *)*puVar6;
          apuStack_2d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               (uint *)puVar6[(uint)bVar11 * -2 + 1];
          fStack_50 = *(float *)(iStack_420 + 0xc200) * _DAT_005f6879 * (float)_DAT_005f6889 *
                      param_2;
          if (fStack_50 < fStack_410) {
            fStack_50 = fStack_410;
          }
          if (fStack_414 < fStack_50) {
            fStack_50 = fStack_414;
          }
          apuStack_2d4[0] = (uint *)FUN_0040cd60();
          fStack_54 = *(float *)(param_1 + 0xc204) * _DAT_005f6879 * (float)_DAT_005f6889 * param_2;
          if (fStack_54 < fStack_408) {
            fStack_54 = fStack_408;
          }
          if (fStack_40c < fStack_54) {
            fStack_54 = fStack_40c;
          }
          puStack_18 = apuStack_2d4[0];
          pfStack_2d8 = (float *)FUN_0040cd60();
          pfStack_20 = pfStack_2d8;
          iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1ff88) + 0x154) + 0xa0))
                            (*(int *)(param_1 + 0x1ff88),&pfStack_2d8,param_1 + 0xc1d8);
          if (iVar5 == 0) {
            FUN_005247c0(param_1 + 0x158,0,1);
            FUN_004ebe80();
          }
          else {
            puVar6 = (uint *)FUN_0040cd60();
            if ((float)_DAT_005f6851 <= (float)puVar6) {
              if ((double)(float)puVar6 <= _DAT_005f6859) {
                uVar12 = 0x100000000;
              }
              else {
                uVar12 = 0x100000005;
              }
            }
            else {
              uVar12 = 0x100000006;
            }
            puStack_18 = puVar6;
            FUN_005247c0(param_1 + 0x158,uVar12);
            pfVar7 = (float *)(param_1 + 0x34 + (uint)bVar11 * -8);
            fStack_d4 = *(float *)(param_1 + 0x30);
            afStack_13c[(uint)bVar11 * -2 + 0x1b] = *pfVar7;
            afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c] =
                 pfVar7[(uint)bVar11 * -2 + 1];
            fStack_d0 = (float)puVar6 * *(float *)(param_1 + 0x20018) + fStack_d0;
            FUN_00433d50(param_1,afStack_13c + 0x1a);
            fStack_144 = fStack_41c + (float)_DAT_005f6891;
            fStack_14c = 0.0;
            uStack_148 = 0;
            pfStack_20 = (float *)fStack_144;
            FUN_00408b40(*(uint *)(param_1 + 0x1ff88),afStack_2c8 + 0x5f);
            fStack_b0 = fStack_224;
            afStack_13c[(uint)bVar11 * -2 + 0x24] = afStack_2c8[(uint)bVar11 * -2 + 0x2a];
            afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25] =
                 afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b];
            pfStack_20 = (float *)(param_1 + 0x20018);
            fStack_1f4 = fStack_b0 - *(float *)(param_1 + 0x20);
            fStack_1f0 = fStack_ac - *(float *)(param_1 + 0x24);
            pfVar7 = afStack_2c8 + 5;
            fStack_1ec = fStack_a8 - *(float *)(param_1 + 0x28);
            afStack_2b4[0] = fStack_1f4;
            afStack_2c8[(uint)bVar11 * -2 + 6] = afStack_2c8[(uint)bVar11 * -2 + 0x36];
            afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x37];
            FUN_00408b00(param_1,pfVar7);
            fStack_230 = fStack_29c;
            afStack_2c8[(uint)bVar11 * -2 + 0x27] = afStack_2c8[(uint)bVar11 * -2 + 0xc];
            afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28] =
                 afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
            fStack_38c = fStack_230 * *pfStack_20;
            fStack_388 = fStack_22c * *pfStack_20;
            fStack_384 = fStack_228 * *pfStack_20;
            fStack_284 = fStack_230 * *pfStack_20;
            afStack_2c8[(uint)bVar11 * -2 + 0x12] = afStack_3a0[(uint)bVar11 * -2 + 6];
            afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
                 afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
            if ((float *)(param_1 + 0x249c) != afStack_2c8 + 0x11) {
              *(float *)(param_1 + 0x249c) = fStack_284;
              *(uint *)(param_1 + 0x24a0) = uStack_280;
              *(uint *)(param_1 + 0x24a4) = uStack_27c;
            }
            *(uint *)(param_1 + 0x24a0) = 0;
          }
        }
      }
    }
    else {
      puStack_18 = (uint *)FUN_00524a40(param_1 + 0x158,0x38);
      if (0.0 < (float)puStack_18) {
        if (*(float *)(param_1 + 0x24) < *(float *)(*(int *)(param_1 + 0x20000) + 0x24) + 1.0) {
          FUN_005247c0(param_1 + 0x158,0,1);
        }
      }
      else {
        *(uint *)(param_1 + 0x20000) = 0;
      }
      if (0.0 < *(float *)(param_1 + 0x20238)) {
        if (*(float *)(param_1 + 0x20238) <= param_2) {
          *(uint *)(param_1 + 0x20238) = 0;
          fStack_464 = 1.0;
        }
        else {
          fStack_464 = param_2 / *(float *)(param_1 + 0x20238);
          *(float *)(param_1 + 0x20238) = *(float *)(param_1 + 0x20238) - param_2;
        }
        pfVar7 = (float *)(param_1 + 0x20228);
        fVar1 = 1.0 - fStack_464;
        fStack_2f0 = *pfVar7 * fStack_464;
        fStack_2ec = *(float *)(param_1 + 0x2022c) * fStack_464;
        fStack_2e8 = *(float *)(param_1 + 0x20230) * fStack_464;
        fStack_350 = *pfVar7 * fStack_464;
        afStack_3a0[(uint)bVar11 * -2 + 0x15] = afStack_3a0[(uint)bVar11 * -2 + 0x2d];
        afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
             afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e];
        *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_350;
        *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_34c;
        *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_348;
        *pfVar7 = *pfVar7 * fVar1;
        *(float *)(param_1 + 0x2022c) = *(float *)(param_1 + 0x2022c) * fVar1;
        *(float *)(param_1 + 0x20230) = *(float *)(param_1 + 0x20230) * fVar1;
        fStack_68 = fVar1;
        puStack_18 = (uint *)FUN_0040cd60();
        *(float *)(param_1 + 0x2508) = (float)puStack_18 * fStack_464;
      }
      puStack_18 = (uint *)
                   (**(code **)(*(int *)(param_1 + 0x154) + 0x40))
                             (param_1,*(uint *)(param_1 + 0x2fec),0);
      *(uint **)(param_1 + 0x2504) = puStack_18;
    }
  }
  else {
    puStack_18 = (uint *)FUN_00524a40(param_1 + 0x158,0x37);
    if (0.0 < (float)puStack_18) {
      FUN_00408b40(*(uint *)(param_1 + 0x1ff84),*(int *)(param_1 + 0x1ff84) + 0x2d4);
      uStack_194 = uStack_290;
      afStack_2c8[(uint)bVar11 * -2 + 0x4e] = afStack_2c8[(uint)bVar11 * -2 + 0xf];
      afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x4f] =
           afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
      if (fStack_190 + (float)_DAT_005f6899 < *(float *)(param_1 + 0x24)) {
        FUN_005247c0(param_1 + 0x158,0,1);
      }
    }
    else {
      *(uint *)(param_1 + 0x1ff84) = 0;
    }
    if (0.0 < *(float *)(param_1 + 0x20238)) {
      if (*(float *)(param_1 + 0x20238) <= param_2) {
        *(uint *)(param_1 + 0x20238) = 0;
        fStack_478 = 1.0;
      }
      else {
        fStack_478 = param_2 / *(float *)(param_1 + 0x20238);
        *(float *)(param_1 + 0x20238) = *(float *)(param_1 + 0x20238) - param_2;
      }
      pfVar7 = (float *)(param_1 + 0x20228);
      fVar1 = 1.0 - fStack_478;
      fStack_ec = *pfVar7 * fStack_478;
      fStack_e8 = *(float *)(param_1 + 0x2022c) * fStack_478;
      fStack_e4 = *(float *)(param_1 + 0x20230) * fStack_478;
      fStack_374 = *pfVar7 * fStack_478;
      afStack_3a0[(uint)bVar11 * -2 + 0xc] = afStack_13c[(uint)bVar11 * -2 + 0x15];
      afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
           afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_374;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_370;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_36c;
      *pfVar7 = *pfVar7 * fVar1;
      *(float *)(param_1 + 0x2022c) = *(float *)(param_1 + 0x2022c) * fVar1;
      *(float *)(param_1 + 0x20230) = *(float *)(param_1 + 0x20230) * fVar1;
      fStack_64 = fVar1;
      puStack_18 = (uint *)FUN_0040cd60();
      *(float *)(param_1 + 0x2508) = (float)puStack_18 * fStack_478;
    }
  }
LAB_0058636e:
  iVar5 = FUN_00524770();
  if ((*(int *)(iVar5 + 0x24) == 0x26) &&
     (iVar5 = FUN_0040c600(*(uint *)(param_1 + 0x1ff78),DAT_007c33e0), iVar5 != 0)) {
    puStack_18 = (uint *)FUN_00525020();
    FUN_0040e1a0(iVar5,puStack_18);
  }
  FUN_0042e160();
  FUN_0058a010(param_1,param_2);
  if (iStack_24 != 0) {
    *(uint *)(param_1 + 0x20054) = 0;
    *(uint *)(param_1 + 0x20050) = *(uint *)(param_1 + 0x20054);
    *(uint *)(param_1 + 0x2004c) = *(uint *)(param_1 + 0x20050);
  }
  if ((*(int *)(param_1 + 0x1ff84) == 0) && (*(int *)(param_1 + 0x20000) == 0)) {
    if (iStack_48 == 0) goto LAB_0058648f;
    iStack_1c = param_1 + 0x158;
    iVar5 = FUN_00524770();
    fVar1 = 0x41900000 * param_2;
    iVar5 = *(int *)(iVar5 + 0x24);
    fStack_2a8 = *(float *)(param_1 + 0x249c) + *(float *)(param_1 + 0x250c);
    fStack_2a4 = *(float *)(param_1 + 0x24a0) + *(float *)(param_1 + 0x2510);
    fStack_2a0 = *(float *)(param_1 + 0x24a4) + *(float *)(param_1 + 0x2514);
    fStack_2e4 = fStack_2a8;
    afStack_3a0[(uint)bVar11 * -2 + 0x30] = afStack_2c8[(uint)bVar11 * -2 + 9];
    afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x31] =
         afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    fStack_60 = fVar1;
    iStack_40 = iVar5;
    if (iVar5 == 0x12) {
      fStack_2e4 = 0.0;
      fStack_2e0 = 0.0;
      *(float *)(param_1 + 0x20068) = 0x41900000;
      *(uint *)(param_1 + 0x20064) = 0;
      fStack_2dc = fVar1;
    }
    else {
      if (iVar5 == 0x13) {
        fVar2 = (float)_DAT_005f68a1;
        *(float *)(param_1 + 0x20068) = 0x41900000;
        fVar2 = *(float *)(param_1 + 0x251c) - param_2 * fVar2;
        *(uint *)(param_1 + 0x20064) = 0;
        fStack_2dc = fVar1;
        goto LAB_00587a5e;
      }
      if (iVar5 == 0x14) {
        fVar2 = (float)_DAT_005f68a1;
        fStack_2e4 = 0.0;
        fStack_2e0 = 0.0;
        fVar1 = 0x3F000000 * 0x41900000;
        fStack_2dc = *(float *)(param_1 + 0x20068) * param_2;
        *(uint *)(param_1 + 0x20064) = 0;
        *(float *)(param_1 + 0x20068) = *(float *)(param_1 + 0x20068) - fVar1 * param_2;
        *(float *)(param_1 + 0x251c) = *(float *)(param_1 + 0x251c) - param_2 * fVar2;
        if (*(float *)(param_1 + 0x20068) < 0.0) {
          *(uint *)(param_1 + 0x20068) = 0;
          FUN_005247c0(iStack_1c,0x1a,1);
        }
      }
      else if (iVar5 == 0x15) {
        fStack_2e0 = 0.0;
        fStack_2e4 = 0.0;
        fStack_2dc = fVar1;
      }
      else if (iVar5 == 0x16) {
        *(uint *)(param_1 + 0x20064) = 0;
        *(float *)(param_1 + 0x20068) = 0x41200000;
      }
      else if (iVar5 == 0x17) {
        fStack_2dc = 0x41200000 * param_2;
        fVar1 = (float)_DAT_005f68a1;
        *(float *)(param_1 + 0x20068) = 0x41200000;
        fVar2 = *(float *)(param_1 + 0x251c) - param_2 * fVar1;
        *(uint *)(param_1 + 0x20064) = 0;
LAB_00587a5e:
        fStack_2e0 = 0.0;
        fStack_2e4 = 0.0;
LAB_00587a60:
        *(float *)(param_1 + 0x251c) = fVar2;
      }
      else if (iVar5 == 0x18) {
        fVar2 = (float)_DAT_005f68a1;
        fStack_2e4 = 0.0;
        fStack_2e0 = 0.0;
        fVar1 = 0x3F000000 * 0x41200000;
        fStack_2dc = *(float *)(param_1 + 0x20068) * param_2;
        *(uint *)(param_1 + 0x20064) = 0;
        *(float *)(param_1 + 0x20068) = *(float *)(param_1 + 0x20068) - fVar1 * param_2;
        *(float *)(param_1 + 0x251c) = *(float *)(param_1 + 0x251c) - param_2 * fVar2;
        if (*(float *)(param_1 + 0x20068) < 0.0) {
          *(uint *)(param_1 + 0x20068) = 0;
          FUN_005247c0(iStack_1c,0x1a,1);
        }
      }
      else {
        if (iVar5 != 0x19) {
          if (iVar5 == 0x1a) {
            fStack_2dc = 0.0;
            fVar2 = *(float *)(param_1 + 0x251c) - param_2 * (float)_DAT_005f68a1;
            *(uint *)(param_1 + 0x20064) = 0x461c3f9a;
            goto LAB_00587a5e;
          }
          if (iVar5 == 0x1b) {
            fStack_2dc = 0.0;
            fStack_2e0 = 0.0;
            fStack_2e4 = 0.0;
            fVar2 = *(float *)(param_1 + 0x251c) - param_2 * (float)_DAT_005f68a1;
          }
          else {
            fVar2 = *(float *)(param_1 + 0x251c) - param_2 * (float)_DAT_005f68a1;
          }
          goto LAB_00587a60;
        }
        fStack_2e0 = 0.0;
      }
    }
    FUN_00408b00(param_1,param_1 + 0x2004c);
    fStack_1ac = fStack_260;
    afStack_2c8[(uint)bVar11 * -2 + 0x48] = afStack_2c8[(uint)bVar11 * -2 + 0x1b];
    afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x49] =
         afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c];
    fStack_380 = *(float *)(param_1 + 0x2518) * param_2;
    pfVar7 = afStack_3a0 + 0x2f;
    fStack_37c = *(float *)(param_1 + 0x251c) * param_2;
    fStack_378 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_e0 = fStack_380;
    afStack_13c[(uint)bVar11 * -2 + 0x18] = afStack_3a0[(uint)bVar11 * -2 + 9];
    afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
         afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    fStack_1d0 = fStack_e0 + fStack_1ac;
    fStack_1cc = fStack_dc + fStack_1a8;
    fStack_1c8 = fStack_d8 + fStack_1a4;
    fStack_218 = fStack_e0 + fStack_1ac;
    afStack_2c8[(uint)bVar11 * -2 + 0x2d] = afStack_2c8[(uint)bVar11 * -2 + 0x3f];
    afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e] =
         afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x40];
    fStack_2e4 = fStack_2e4 + fStack_218;
    fStack_2e0 = fStack_2e0 + fStack_214;
    fStack_2dc = fStack_2dc + fStack_210;
    *(uint *)(param_1 + 0x20240) = *(uint *)(param_1 + 0x251c);
    FUN_0042d750(param_1,pfVar7);
    if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2504) + (float)_DAT_005f68a9) {
      *(uint *)(param_1 + 0x2500) = 1;
    }
    if (((iStack_40 == 0x1a) || (iStack_40 == 0x14)) || (iStack_40 == 0x18)) {
      if (*(int *)(param_1 + 0x2500) != 0) {
        FUN_00445430(PTR_DAT_00611100,"Splat at %3.2f fps\n",
                     (double)*(float *)(param_1 + 0x251c));
        fVar1 = -*(float *)(param_1 + 0x20240);
        if (fVar1 < (float)_DAT_005f68b1) {
          if (iStack_40 == 0x18) {
            uVar12 = 0x100000019;
            goto LAB_00587c25;
          }
          if (iStack_40 == 0x14) {
            uVar12 = 0x100000015;
            goto LAB_00587c25;
          }
          if (iStack_40 == 0x1a) {
            uVar12 = 0x10000001b;
            goto LAB_00587c25;
          }
        }
        else {
          FUN_0042c010();
          fVar2 = (fVar1 + (float)_DAT_005f68b9) * (float)_DAT_005f68c1 * (float)_DAT_005f68c9;
          fStack_45c = fVar2;
          if (0x42c80000 < (int)fVar2) {
            fStack_45c = 9999.0;
          }
          *(uint *)(param_1 + 0xc1d0) = 0;
          (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,auStack_460);
          if ((*(float *)(param_1 + 0x2538) <= 0.0) || (0x42c80000 < (int)fVar2)) {
            FUN_005247c0(param_1 + 0x158,0x1d,1);
            (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"fall-?.wav");
            iVar5 = *(int *)(param_1 + 0x2500);
            fStack_468 = 0x3F000000;
            goto joined_r0x00587fec;
          }
          uVar12 = 0x10000001c;
LAB_00587c25:
          FUN_005247c0(param_1 + 0x158,uVar12);
        }
        (**(code **)(*(int *)(param_1 + 0x154) + 0x24))
                  (param_1,&DAT_02c8af28,fVar1 * _DAT_005f68d1 + 1.0);
      }
      iVar5 = *(int *)(param_1 + 0x2500);
      fStack_468 = 0x3F000000;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x2500);
      fStack_468 = 0x3F000000;
    }
joined_r0x00587fec:
    0x3F000000 = fStack_468;
    if (iVar5 == 0) {
      *(float *)(param_1 + 0x20064) = *(float *)(param_1 + 0x20064) + param_2;
      if (iStack_40 == 4) {
        fStack_468 = fStack_468 * (float)_DAT_005f6849;
      }
      if ((fStack_468 < *(float *)(param_1 + 0x20064)) ||
         (*(float *)(param_1 + 0x20240) < (float)_DAT_005f68b9)) {
        if (iStack_40 != 0x1a) {
          FUN_005247c0(param_1 + 0x158,0x1a,1);
        }
        *(uint *)(param_1 + 0x2500) = 0;
      }
      goto LAB_0058648f;
    }
  }
  else {
    puStack_18 = (uint *)(param_1 + 0x249c);
    FUN_00408ac0(param_1,puStack_18);
    fStack_278 = fStack_2fc;
    afStack_2c8[(uint)bVar11 * -2 + 0x15] = afStack_3a0[(uint)bVar11 * -2 + 0x2a];
    afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
         afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b];
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_278;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_274;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_270;
    puStack_18[2] = 0;
    puStack_18[1] = puStack_18[2];
    *puStack_18 = puStack_18[1];
  }
  *(uint *)(param_1 + 0x20064) = 0;
LAB_0058648f:
  *(uint *)(param_1 + 0x20054) = 0;
  *(uint *)(param_1 + 0x20050) = *(uint *)(param_1 + 0x20054);
  *(uint *)(param_1 + 0x2004c) = *(uint *)(param_1 + 0x20050);
  iVar5 = 0x01CCF390;
  if (iStack_3c != 0) {
    if (*(int *)(param_1 + 0xc1f0) != 0) {
      if (*(int *)(param_1 + 0x1ffac) == 0) {
        *(uint *)(param_1 + 0x1ffac) = 1;
      }
      else {
        *(uint *)(param_1 + 0x1ffac) = 0;
        if (*(int *)(iVar5 + 0x264) != 0) {
          *(uint *)(iVar5 + 0x264) = 0;
          (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"flashlit.wav");
        }
      }
    }
    if (((*(int *)(param_1 + 0xc1ec) != 0) && (*(int *)(param_1 + 0x1fe20) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x1fe20) + 0x2f0) != 0)) {
      uVar3 = (uint)(*(int *)(0x01CCF390 + 0x264) == 0);
      *(uint *)(0x01CCF390 + 0x264) = uVar3;
      if (uVar3 != 0) {
        *(uint *)(param_1 + 0x1ffac) = 1;
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"flashlit.wav");
    }
  }
  if (*(int *)(param_1 + 0x1fe20) == 0) {
    *(uint *)(0x01CCF390 + 0x264) = 0;
  }
  else if (*(int *)(*(int *)(param_1 + 0x1fe20) + 0x2f0) == 0) {
    *(uint *)(0x01CCF390 + 0x264) = 0;
  }
  if (iStack_4c != 0) {
    FUN_005907a0(param_1,param_2);
  }
  if (*(int *)(param_1 + 0x1ffac) == 0) {
    fVar1 = *(float *)(param_1 + 0x1ffb0) - param_2 / _DAT_00606070;
    *(float *)(param_1 + 0x1ffb0) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x1ffb0) = 0;
    }
  }
  else {
    fVar1 = param_2 / _DAT_0060606c + *(float *)(param_1 + 0x1ffb0);
    *(float *)(param_1 + 0x1ffb0) = fVar1;
    if (1.0 < fVar1) {
      *(uint *)(param_1 + 0x1ffb0) = 0x3f800000;
    }
  }
  fVar1 = *(float *)(param_1 + 0x1ffd0) - param_2 / _DAT_00606074;
  *(uint *)(param_1 + 0x1ffb4) = 0;
  *(float *)(param_1 + 0x1ffd0) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x1ffd0) = 0;
  }
  fVar1 = *(float *)(param_1 + 0x1fff0) - param_2 / _DAT_00606074;
  *(float *)(param_1 + 0x1fff0) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x1fff0) = 0;
  }
  if (iStack_2c != 0) {
    FUN_00591120();
  }
  FUN_00588ad0();
  if (((*(int *)(param_1 + 0x1fae4) == 2) && (*(int *)(param_1 + 0x20004) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x20004) + 0x2e0) == 0)) {
    FUN_00569180();
    FUN_0058aeb0(param_1,0);
    FUN_0058f660();
    FUN_00588ad0();
  }
  FUN_00590020(param_1,param_2,uStack_30);
  FUN_005917b0();
  FUN_00433e80(param_1,param_2);
  puStack_18 = (uint *)FUN_00524a40(param_1 + 0x158,0x11);
  if ((float)puStack_18 <= 0.0) {
    FUN_004ebbe0();
  }
  else {
    puStack_18 = (uint *)FUN_00525020();
    if ((1.0 < (float)puStack_18) &&
       (iStack_74 = FUN_0040c600(*(uint *)(param_1 + 0x1ff7c),DAT_007c5094), iStack_74 != 0))
    {
      FUN_00588a10();
      pfVar7 = afStack_2c8 + 2;
      afStack_2c8[2] = (float)uStack_320;
      afStack_2c8[(uint)bVar11 * -2 + 3] = afStack_3a0[(uint)bVar11 * -2 + 0x21];
      afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22];
      FUN_00408b40(param_1,pfVar7);
      pfVar7 = afStack_2c8 + 0x20;
      afStack_3a0[2] = fStack_a4;
      afStack_3a0[(uint)bVar11 * -2 + 3] = afStack_13c[(uint)bVar11 * -2 + 0x27];
      afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28];
      fStack_1a0 = afStack_3a0[2] - fStack_11c;
      fStack_19c = afStack_3a0[3] - fStack_118;
      fStack_198 = fStack_390 - fStack_114;
      fStack_248 = afStack_3a0[2] - fStack_11c;
      afStack_2c8[(uint)bVar11 * -2 + 0x21] = afStack_2c8[(uint)bVar11 * -2 + 0x4b];
      afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22] =
           afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x4c];
      uStack_244 = 0;
      FUN_00408b00(param_1,pfVar7);
      afStack_13c[2] = (float)uStack_308;
      afStack_13c[(uint)bVar11 * -2 + 3] = afStack_3a0[(uint)bVar11 * -2 + 0x27];
      afStack_13c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28];
      if (0.0 < fStack_12c) {
        FUN_00422ab0(iStack_74,afStack_13c + 8,afStack_2c8 + 0x20);
      }
    }
  }
  FUN_0058aeb0(param_1,0);
  FUN_0058eb50(param_1,0,param_2);
  FUN_0058eb50(param_1,1,param_2);
  FUN_005914a0(param_1,param_2);
  FUN_004f9f10();
  FUN_00591b20(param_1,param_2);
  if ((*(int *)(param_1 + 0x20004) != 0) && (*(int *)(*(int *)(param_1 + 0x20004) + 0xfc) != 0)) {
    *(uint *)(param_1 + 0xfc) = 1;
  }
  iVar5 = FUN_005735a0();
  if (iVar5 == 0) {
    if (*(int *)(0x01CCF390 + 0x25c) != 0) {
      FUN_00573a80();
      FUN_00572ac0();
      FUN_00572a10();
      uVar4 = FUN_00572d20();
      *(uint *)(param_1 + 0x20020) = uVar4;
      FUN_005728e0();
      uVar4 = FUN_00572d20();
      *(uint *)(param_1 + 0x2001c) = uVar4;
      FUN_00572b40();
      FUN_00573ab0(*(uint *)(param_1 + 0x2001c),0x3f800000,0x3f800000,0);
      return;
    }
  }
  else if (*(int *)(0x01CCF390 + 0x25c) == 0) {
    FUN_00573a80();
    FUN_00573a80();
    FUN_00572ac0();
    FUN_00572a10();
    FUN_00572d20();
    FUN_00572b40();
    return;
  }
  return;
}
