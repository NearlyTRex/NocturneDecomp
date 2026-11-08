// Name: FUN_00469550
// Address: 00469550
// Address Range: [[00469550, 0046bdd0]]
// Convention: unknown
// Signature: void FUN_00469550(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469550(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  float *pfVar9;
  uint *puVar10;
  float *pfVar11;
  byte bVar12;
  float afStackY_13b8 [944];
  ulonglong uVar13;
  float fStack_4a8;
  float fStack_4a0;
  float fStack_49c;
  float fStack_494;
  uint *puStack_490;
  byte auStack_48c [4];
  float fStack_488;
  int iStack_450;
  int iStack_44c;
  float fStack_448;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float afStack_430 [6];
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  uint local_400;
  uint uStack_3fc;
  uint uStack_3f8;
  uint uStack_3f4;
  uint uStack_3f0;
  uint uStack_3ec;
  uint local_3e8 [6];
  float fStack_3d0;
  float afStack_3cc [5];
  float fStack_3b8;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float afStack_3a0 [3];
  uint uStack_394;
  uint uStack_388;
  float fStack_384;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  uint uStack_370;
  float fStack_364;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_340;
  float fStack_33c;
  uint uStack_334;
  float fStack_32c;
  float fStack_328;
  float afStack_31c [3];
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float afStack_304 [3];
  float fStack_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  uint uStack_2a4;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float afStack_244 [3];
  float afStack_238 [3];
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  uint uStack_214;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  uint *puStack_1fc;
  float afStack_1f8 [4];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  uint uStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  float fStack_1b4;
  uint uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  uint uStack_178;
  uint uStack_16c;
  uint uStack_160;
  uint uStack_154;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float afStack_13c [3];
  float afStack_130 [3];
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_118;
  float afStack_10c [3];
  uint uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [3];
  uint uStack_c4;
  float fStack_b8;
  uint uStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  uint *puStack_8c;
  float fStack_88;
  float afStack_84 [4];
  float *pfStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  int iStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  uint *puStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  int local_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  float *pfStack_18;
  
  bVar12 = 0;
  local_28 = FUN_004a6c30(0x01C51D80,"?DebugActionPending" + 1);
  if ((*(int *)(param_1 + 0x2628) != 0) && (*(float *)(param_1 + 0x20084) < _DAT_005d9d70)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x2628) + 0x154) + 0x1c))();
    puVar8 = local_3e8;
    puVar10 = &local_400;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    }
    if ((uint *)(param_1 + 0x20078) != &local_400) {
      *(uint *)(param_1 + 0x20078) = local_400;
      *(uint *)(param_1 + 0x2007c) = uStack_3fc;
      *(uint *)(param_1 + 0x20080) = uStack_3f8;
    }
    if ((uint *)(param_1 + 0x20084) != &uStack_3f4) {
      *(uint *)(param_1 + 0x20084) = uStack_3f4;
      *(uint *)(param_1 + 0x20088) = uStack_3f0;
      *(uint *)(param_1 + 0x2008c) = uStack_3ec;
    }
    fStack_dc = *(float *)(param_1 + 0x20078) + *(float *)(param_1 + 0x20084);
    fStack_d8 = *(float *)(param_1 + 0x2007c) + *(float *)(param_1 + 0x20088);
    fStack_d4 = *(float *)(param_1 + 0x20080) + *(float *)(param_1 + 0x2008c);
    fStack_184 = fStack_dc;
    afStack_1f8[(uint)bVar12 * -2 + 0x1e] = afStack_1f8[(uint)bVar12 * -2 + 0x48];
    afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1f] =
         afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x49];
    fStack_124 = fStack_184 * _DAT_005d9d74;
    fStack_120 = fStack_180 * _DAT_005d9d74;
    fStack_11c = fStack_17c * _DAT_005d9d74;
    afStack_31c[0] = fStack_184 * _DAT_005d9d74;
    afStack_3cc[(uint)bVar12 * -2 + 0x2d] = afStack_1f8[(uint)bVar12 * -2 + 0x36];
    afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x2e] =
         afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x37];
    FUN_00408b40(*(uint *)(param_1 + 0x2628),afStack_3cc + 0x2c);
    pfVar9 = afStack_3cc + 0xb;
    afStack_3a0[0] = (float)uStack_370;
    afStack_3cc[(uint)bVar12 * -2 + 0xc] = afStack_3cc[(uint)bVar12 * -2 + 0x18];
    afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
         afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19];
    FUN_00408bb0(param_1,pfVar9);
    fStack_1cc = fStack_328;
    afStack_1f8[(uint)bVar12 * -2 + 0xc] = afStack_3cc[(uint)bVar12 * -2 + 0x2a];
    afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
         afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x2b];
    if ((float *)(param_1 + 0x2006c) != afStack_1f8 + 0xb) {
      *(float *)(param_1 + 0x2006c) = fStack_1cc;
      *(uint *)(param_1 + 0x20070) = uStack_1c8;
      *(uint *)(param_1 + 0x20074) = uStack_1c4;
    }
  }
  FUN_004d7f50(0x01CCF390,param_2);
  FUN_00434790(param_1,param_2);
  fVar2 = *(float *)(param_1 + 0xc1d0) - param_2;
  *(float *)(param_1 + 0xc1d0) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0xc1d0) = 0;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  FUN_0046c9e0();
  pfVar9 = afStack_3cc + 0x62;
  afStack_244[0] = (float)uStack_394;
  afStack_3cc[(uint)bVar12 * -2 + 99] = afStack_3cc[(uint)bVar12 * -2 + 0xf];
  afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 100] =
       afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
  FUN_00408b40(param_1,pfVar9);
  uVar13 = CONCAT44(param_2,param_1);
  fStack_3ac = fStack_268;
  afStack_3cc[(uint)bVar12 * -2 + 9] = afStack_3cc[(uint)bVar12 * -2 + 0x5a];
  afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
       afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x5b];
  FUN_0046bde0(uVar13);
  iStack_30 = 1;
  iStack_38 = 1;
  iStack_34 = 1;
  iStack_20 = 1;
  uStack_24 = 1;
  if (*(int *)(param_1 + 0x26fc) != 0) {
    iStack_30 = 0;
    iStack_34 = 0;
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_38 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"grabbedBy=%s\n",*(int *)(param_1 + 0x26fc));
    }
  }
  if (*(int *)(param_1 + 0x1ff7c) != 0) {
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    iStack_34 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"pushedObject=%s\n",*(uint *)(param_1 + 0x1ff7c));
    }
  }
  if ((*(int *)(param_1 + 0x1ff84) != 0) || (*(int *)(param_1 + 0x20000) != 0)) {
    iStack_38 = 0;
    iStack_34 = 0;
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"ladder\n");
    }
  }
  if ((*(int *)(param_1 + 0x1ff78) != 0) || (*(int *)(param_1 + 0x1ff5c) == 4)) {
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"pickup\n");
    }
  }
  iVar6 = param_1 + 0x158;
  pfStack_18 = (float *)FUN_00524a40(iVar6,0x82);
  if (((((0.0 < (float)pfStack_18) ||
        (pfStack_18 = (float *)FUN_00524a40(iVar6,0x83), 0.0 < (float)pfStack_18)) ||
       (pfStack_18 = (float *)FUN_00524a40(iVar6,0x29), 0.0 < (float)pfStack_18)) ||
      ((pfStack_18 = (float *)FUN_00524a40(iVar6,0x2d), 0.0 < (float)pfStack_18 ||
       (pfStack_18 = (float *)FUN_00524a40(iVar6,0x2e), 0.0 < (float)pfStack_18)))) ||
     (*(float *)(param_1 + 0x2538) <= 0.0)) {
    iStack_34 = 0;
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"hurt\n");
    }
  }
  pfStack_18 = (float *)FUN_00524a40(param_1 + 0x158,0x22);
  if (((0.0 < (float)pfStack_18) || (*(int *)(param_1 + 0x1ff5c) == 5)) ||
     (*(int *)(param_1 + 0x1ff74) != 0)) {
    uStack_24 = 0;
    iStack_30 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"door\n");
    }
  }
  pfStack_18 = (float *)FUN_00524a40(param_1 + 0x158,0x23);
  if (((0.0 < (float)pfStack_18) || (*(int *)(param_1 + 0x1ff5c) == 5)) ||
     (*(int *)(param_1 + 0x1ff74) != 0)) {
    uStack_24 = 0;
    iStack_30 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"door\n");
    }
  }
  pfStack_18 = (float *)FUN_00524a40(param_1 + 0x158,0x33);
  if (0.0 < (float)pfStack_18) {
    iStack_34 = 0;
    iStack_20 = 0;
    iStack_38 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"sitting\n");
    }
  }
  if (*(int *)(param_1 + 0x1ff5c) == 1) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"stashinventory\n");
    }
  }
  if (*(int *)(param_1 + 0x1ff5c) == 2) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"placeobject\n");
    }
  }
  if (*(int *)(param_1 + 0x1ff5c) == 6) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"putdownobject\n");
    }
  }
  if (*(int *)(param_1 + 0x1ff5c) == 3) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"toss\n");
    }
  }
  if (*(int *)(param_1 + 0x1ff5c) == 7) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"attackmelee\n");
    }
  }
  if ((*(int *)(param_1 + 0x1ff80) != 0) ||
     (pfStack_18 = (float *)FUN_00524a40(param_1 + 0x158,0x24), 0.0 < (float)pfStack_18)) {
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    iStack_34 = 0;
    if (local_28 != 0) {
      FUN_00445430(PTR_DAT_00611100,"leverToPull=%s\n",*(uint *)(param_1 + 0x1ff80));
    }
  }
  if (*(int *)(param_1 + 0x26fc) == 0) {
    if (*(int *)(param_1 + 0xdc) != 0) {
      iStack_38 = 1;
    }
    if (*(float *)(param_1 + 0x24) != *(float *)(param_1 + 0x2504)) {
      iStack_38 = 1;
    }
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00435320(param_1,param_2);
  if (*(int *)(param_1 + 0x1ff88) == 0) {
    fVar2 = *(float *)(param_1 + 0x20014) - param_2 * (float)_DAT_005d9d7c * (float)_DAT_005d9d7c;
    *(float *)(param_1 + 0x20014) = fVar2;
    if (fVar2 < 0.0) {
      *(uint *)(param_1 + 0x20014) = 0;
    }
  }
  else {
    fVar2 = param_2 * (float)_DAT_005d9d7c + *(float *)(param_1 + 0x20014);
    *(float *)(param_1 + 0x20014) = fVar2;
    if (1.0 < fVar2) {
      *(uint *)(param_1 + 0x20014) = 0x3f800000;
    }
  }
  iStack_6c = 1;
  if (*(int *)(param_1 + 0x1ff84) == 0) {
    if (*(int *)(param_1 + 0x20000) == 0) {
      iVar6 = *(int *)(param_1 + 0x1ff88);
      if (iVar6 == 0) {
        if (*(int *)(param_1 + 0x26fc) == 0) {
          if (*(int *)(param_1 + 0x1ff7c) == 0) {
            iVar6 = FUN_00432240(param_1,param_2);
            if (iVar6 == 0) {
              if (iStack_30 != 0) {
                iVar6 = FUN_00524770();
                uVar7 = *(uint *)(iVar6 + 0x24);
                if ((((uVar7 < 9) || (uVar7 < 10)) || (uVar7 < 0xe)) || (uVar7 < 0xf)) {
LAB_0046b39a:
                  if (*(int *)(param_1 + 0x2500) != 0) {
                    iVar3 = 0;
                    iVar6 = FUN_00524770();
                    iVar6 = *(int *)(iVar6 + 0x24);
                    if (*(int *)(param_1 + 0xc1d8) == 0) {
                      if (*(int *)(param_1 + 0xc1dc) == 0) {
                        if ((float)_DAT_005d9d84 <= *(float *)(param_1 + 0xc1fc)) {
                          if (_DAT_005d9d8c < (double)*(float *)(param_1 + 0xc1fc)) {
                            if (*(int *)(param_1 + 0xc1e0) == 0) {
                              iVar3 = 6;
                            }
                            else {
                              iVar3 = 8;
                            }
                          }
                        }
                        else if (*(int *)(param_1 + 0xc1e0) == 0) {
                          iVar3 = 5;
                        }
                        else {
                          iVar3 = 7;
                        }
                      }
                      else if (*(int *)(param_1 + 0xc1e0) == 0) {
                        if ((float)_DAT_005d9d84 <= *(float *)(param_1 + 0xc1fc)) {
                          if ((double)*(float *)(param_1 + 0xc1fc) <= _DAT_005d9d8c) {
                            iVar3 = 2;
                          }
                          else {
                            iVar3 = 0x10;
                          }
                        }
                        else {
                          iVar3 = 0xf;
                        }
                      }
                      else if ((float)_DAT_005d9d84 <= *(float *)(param_1 + 0xc1fc)) {
                        if ((double)*(float *)(param_1 + 0xc1fc) <= _DAT_005d9d8c) {
                          iVar3 = 3;
                        }
                        else {
                          iVar3 = 0xe;
                        }
                      }
                      else {
                        iVar3 = 0xd;
                      }
                    }
                    else if (*(int *)(param_1 + 0xc1e0) == 0) {
                      if ((float)_DAT_005d9d84 <= *(float *)(param_1 + 0xc1fc)) {
                        if ((double)*(float *)(param_1 + 0xc1fc) <= _DAT_005d9d8c) {
                          iVar3 = 1;
                        }
                        else {
                          iVar3 = 0xc;
                        }
                      }
                      else {
                        iVar3 = 0xb;
                      }
                    }
                    else if ((float)_DAT_005d9d84 <= *(float *)(param_1 + 0xc1fc)) {
                      if ((double)*(float *)(param_1 + 0xc1fc) <= _DAT_005d9d8c) {
                        iVar3 = 4;
                      }
                      else {
                        iVar3 = 10;
                      }
                    }
                    else {
                      iVar3 = 9;
                    }
                    if ((*(int *)(param_1 + 0xc1f8) != 0) && (*(int *)(param_1 + 0x2c98) != 0xe)) {
                      *(uint *)(param_1 + 0x200dc) = 0;
                      *(uint *)(param_1 + 0x200d8) = 1;
                    }
                    if (*(int *)(param_1 + 0x200d8) == 0) {
                      fVar2 = *(float *)(param_1 + 0xc200) * *(float *)(param_1 + 0x2528);
                      *(float *)(param_1 + 0x2508) = fVar2;
                      *(float *)(param_1 + 0x20024) = *(float *)(param_1 + 0x20024) - fVar2;
                    }
                    if (iVar3 != iVar6) {
                      FUN_005247c0(param_1 + 0x158,iVar3,1);
                    }
                    if (*(int *)(param_1 + 0xc1e8) != 0) {
                      FUN_004ec020();
                    }
                  }
                  iStack_6c = 0;
                }
                else if (uVar7 < 0x75) {
                  if ((uVar7 < 0x10) || (uVar7 == 0x10)) goto LAB_0046b39a;
                }
                else if (((0x75 < uVar7) && (0x77 < uVar7)) && ((uVar7 < 0x79 || (uVar7 == 0x79))))
                {
                  iVar6 = FUN_00524770();
                  iVar3 = 0x78;
                  if (*(int *)(param_1 + 0xc1d8) != 0) {
                    iVar3 = 0x79;
                  }
                  if (iVar3 != *(int *)(iVar6 + 0x24)) {
                    FUN_005247c0(param_1 + 0x158,iVar3,1);
                  }
                  if (*(int *)(param_1 + 0x200d8) == 0) {
                    fVar2 = *(float *)(param_1 + 0xc200) * *(float *)(param_1 + 0x2528);
                    *(float *)(param_1 + 0x2508) = fVar2;
                    *(float *)(param_1 + 0x20024) = *(float *)(param_1 + 0x20024) - fVar2;
                  }
                }
              }
            }
            else {
              uVar7 = *(uint *)(param_1 + 0x273c);
              if (uVar7 < 2) {
                if (uVar7 == 1) {
                  uVar13 = 0x100000001;
                }
                else {
                  uVar13 = 0x100000000;
                }
LAB_0046b2fb:
                FUN_005247c0(param_1 + 0x158,uVar13);
              }
              else {
                if (uVar7 < 3) {
                  uVar13 = 0x100000004;
                  goto LAB_0046b2fb;
                }
                if (uVar7 != 3) {
                  uVar13 = 0x100000000;
                  goto LAB_0046b2fb;
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
            iStack_58 = *(int *)(param_1 + 0x1ff84);
            if (*(int *)(param_1 + 0xc1e4) != 0) {
              (**(code **)(*(int *)(*(int *)(param_1 + 0x1ff7c) + 0x154) + 0x1c))();
              pfVar9 = afStack_430;
              pfVar11 = &fStack_418;
              for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                *pfVar11 = *pfVar9;
                pfVar9 = pfVar9 + (uint)bVar12 * -2 + 1;
                pfVar11 = pfVar11 + (uint)bVar12 * -2 + 1;
              }
              fStack_37c = fStack_418 + fStack_40c;
              fStack_378 = fStack_414 + fStack_408;
              fStack_374 = fStack_410 + fStack_404;
              fStack_1e4 = fStack_418 + fStack_40c;
              afStack_1f8[(uint)bVar12 * -2 + 6] = afStack_3cc[(uint)bVar12 * -2 + 0x15];
              afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
                   afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16];
              fStack_a0 = fStack_1e4 * _DAT_005d9d74;
              fStack_9c = fStack_1e0 * _DAT_005d9d74;
              fStack_98 = fStack_1dc * _DAT_005d9d74;
              afStack_130[0] = fStack_1e4 * _DAT_005d9d74;
              afStack_1f8[(uint)bVar12 * -2 + 0x33] = afStack_1f8[(uint)bVar12 * -2 + 0x57];
              afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x34] =
                   afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x58];
              FUN_00408b40(*(uint *)(param_1 + 0x1ff7c),afStack_1f8 + 0x32);
              pfVar9 = afStack_1f8 + 0x2f;
              afStack_13c[0] = (float)uStack_c4;
              afStack_1f8[(uint)bVar12 * -2 + 0x30] = afStack_1f8[(uint)bVar12 * -2 + 0x4e];
              afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x31] =
                   afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x4f];
              FUN_00408bb0(param_1,pfVar9);
              uStack_100 = uStack_154;
              afStack_1f8[(uint)bVar12 * -2 + 0x3f] = afStack_1f8[(uint)bVar12 * -2 + 0x2a];
              afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x40] =
                   afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x2b];
              FUN_005a7520();
              uStack_2a4 = uStack_ac;
              afStack_3cc[(uint)bVar12 * -2 + 0x4b] = afStack_1f8[(uint)bVar12 * -2 + 0x54];
              afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x4c] =
                   afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x55];
              puStack_490 = (uint *)FUN_0040cd60();
              pfStack_18 = (float *)puStack_490;
              fStack_208 = fStack_40c - fStack_418;
              fStack_204 = fStack_408 - fStack_414;
              fStack_200 = fStack_404 - fStack_410;
              fStack_2e0 = fStack_40c - fStack_418;
              afStack_3cc[(uint)bVar12 * -2 + 0x3c] = afStack_3cc[(uint)bVar12 * -2 + 0x72];
              afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x3d] =
                   afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x73];
              fStack_2b0 = fStack_2e0 * _DAT_005d9d74;
              fStack_2ac = fStack_2dc * _DAT_005d9d74;
              fStack_2a8 = fStack_2d8 * _DAT_005d9d74;
              fStack_1d8 = fStack_2e0 * _DAT_005d9d74;
              afStack_1f8[(uint)bVar12 * -2 + 9] = afStack_3cc[(uint)bVar12 * -2 + 0x48];
              afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
                   afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x49];
              uStack_1d4 = 0;
              if ((((fStack_f8 - SQRT(fStack_1d0 * fStack_1d0 + fStack_1d8 * fStack_1d8) <
                     (float)_DAT_005d9d94) && (1.0 < (double)fStack_fc)) &&
                  ((double)fStack_fc < _DAT_005d9d9c)) &&
                 (ABS((float)puStack_490) < (float)_DAT_005d9da4)) {
                puStack_48 = (uint *)(param_2 * _DAT_005d9dac);
                if ((float)puStack_490 < -(float)puStack_48) {
                  puStack_490 = (uint *)-(float)puStack_48;
                }
                if ((float)puStack_48 < (float)puStack_490) {
                  puStack_490 = puStack_48;
                }
                *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + (float)puStack_490;
                FUN_00433d50(param_1,param_1 + 0x30);
                goto LAB_00469e25;
              }
            }
            if (iStack_58 == 0) {
              FUN_005247c0(param_1 + 0x158,0,1);
              FUN_004ebbe0();
            }
          }
        }
        else {
          if (*(int *)(param_1 + 0x2700) == 0) {
            FUN_00408bb0(param_1,*(int *)(param_1 + 0x26fc) + 0x20);
            afStack_3cc[2] = (float)uStack_e8;
            afStack_3cc[(uint)bVar12 * -2 + 3] = afStack_1f8[(uint)bVar12 * -2 + 0x45];
            afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
                 afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x46];
            FUN_005a7520();
            uStack_214 = uStack_16c;
            afStack_3cc[(uint)bVar12 * -2 + 0x6f] = afStack_1f8[(uint)bVar12 * -2 + 0x24];
            afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x70] =
                 afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x25];
            pfStack_18 = (float *)FUN_0040cd60();
            fStack_2c = (float)pfStack_18;
            if ((float)pfStack_18 < _DAT_005d9db0) {
              fStack_2c = (float)pfStack_18 + _DAT_005d9dac;
            }
            if (_DAT_005d9db4 < fStack_2c) {
              fStack_2c = fStack_2c + _DAT_005d9db8;
            }
            fStack_54 = param_2 * _DAT_005d9dac;
            fStack_64 = -fStack_54;
            if (fStack_2c < fStack_64) {
              fStack_2c = fStack_64;
            }
            if (fStack_54 < fStack_2c) {
              fStack_2c = fStack_54;
            }
            *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_2c;
            FUN_00433d50(param_1,param_1 + 0x30);
          }
          iStack_70 = *(int *)(param_1 + 0x26fc);
          pfStack_18 = *(float **)(iStack_70 + 0x154);
          iStack_4c = param_1 + 0x158;
          FUN_00569130(iStack_4c,0);
          pfVar9 = afStack_3cc + 0x65;
          afStack_238[0] = (float)uStack_1c0;
          afStack_3cc[(uint)bVar12 * -2 + 0x66] = afStack_1f8[(uint)bVar12 * -2 + 0xf];
          afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x67] =
               afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
          iVar6 = (*(code *)pfStack_18[0x44])(iStack_70,param_1,pfVar9);
          if (iVar6 == 0) {
            *(uint *)(param_1 + 0x26fc) = 0;
          }
          else if (*(int *)(param_1 + 0x26fc) != 0) {
            fVar2 = *(float *)(param_1 + 0x200a8) + param_2;
            *(float *)(param_1 + 0x200a8) = fVar2;
            if ((_DAT_005feccc <= fVar2) && (*(int *)(param_1 + 0x2700) != 1)) {
              pfStack_74 = (float *)FUN_00524a40(iStack_4c,0x27);
              pfStack_18 = (float *)FUN_00524a40(iStack_4c,0x28);
              if ((float)pfStack_18 + (float)pfStack_74 <= 0.0) {
                (**(code **)(*(int *)(param_1 + 0x154) + 0xf0))();
              }
              else if ((*(int *)(param_1 + 0xc1e4) != 0) || (_DAT_01c43544 != 0)) {
                FUN_005247c0(param_1 + 0x158,0x28,1);
                *(uint *)(param_1 + 0xc1e4) = 0;
              }
            }
            goto LAB_00469e25;
          }
          FUN_005247c0(param_1 + 0x158,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar6 + 0x154) + 0x98))(iVar6,&iStack_450);
        if ((iStack_450 == 0) || (param_1 != iStack_44c)) {
          FUN_004ebe80();
        }
        else {
          pfVar9 = (float *)(*(int *)(iStack_44c + 0x1ff88) + 0x34 + (uint)bVar12 * -8);
          puStack_1fc = *(uint **)(*(int *)(iStack_44c + 0x1ff88) + 0x30);
          afStack_1f8[(uint)bVar12 * -2] = *pfVar9;
          afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = pfVar9[(uint)bVar12 * -2 + 1];
          fStack_3c = *(float *)(iStack_44c + 0xc200) * _DAT_005d9dac * (float)_DAT_005d9dbc *
                      param_2;
          if (fStack_3c < fStack_43c) {
            fStack_3c = fStack_43c;
          }
          if (fStack_440 < fStack_3c) {
            fStack_3c = fStack_440;
          }
          afStack_1f8[0] = (float)FUN_0040cd60();
          fStack_40 = *(float *)(param_1 + 0xc204) * _DAT_005d9dac * (float)_DAT_005d9dbc * param_2;
          if (fStack_40 < fStack_434) {
            fStack_40 = fStack_434;
          }
          if (fStack_438 < fStack_40) {
            fStack_40 = fStack_438;
          }
          pfStack_18 = (float *)afStack_1f8[0];
          puStack_1fc = (uint *)FUN_0040cd60();
          pfStack_18 = (float *)puStack_1fc;
          iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1ff88) + 0x154) + 0xa0))
                            (*(int *)(param_1 + 0x1ff88),&puStack_1fc,param_1 + 0xc1d8);
          if (iVar6 == 0) {
            FUN_005247c0(param_1 + 0x158,0,1);
            FUN_004ebe80();
          }
          else {
            fVar2 = (float)FUN_0040cd60();
            if ((float)_DAT_005d9d84 <= fVar2) {
              if ((double)fVar2 <= _DAT_005d9d8c) {
                uVar13 = 0x100000000;
              }
              else {
                uVar13 = 0x100000005;
              }
            }
            else {
              uVar13 = 0x100000006;
            }
            pfStack_18 = (float *)fVar2;
            FUN_005247c0(param_1 + 0x158,uVar13);
            pfVar9 = (float *)(param_1 + 0x34 + (uint)bVar12 * -8);
            fStack_340 = *(float *)(param_1 + 0x30);
            afStack_3cc[(uint)bVar12 * -2 + 0x24] = *pfVar9;
            afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x25] =
                 pfVar9[(uint)bVar12 * -2 + 1];
            fStack_33c = fVar2 * *(float *)(param_1 + 0x20014) + fStack_33c;
            FUN_00433d50(param_1,afStack_3cc + 0x23);
            puStack_8c = (uint *)(fStack_448 + (float)_DAT_005d9dc4);
            fStack_94 = 0.0;
            uStack_90 = 0;
            pfStack_18 = (float *)puStack_8c;
            FUN_00408b40(*(uint *)(param_1 + 0x1ff88),afStack_1f8 + 0x59);
            fStack_88 = fStack_280;
            afStack_84[(uint)bVar12 * -2] = afStack_3cc[(uint)bVar12 * -2 + 0x54];
            afStack_84[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x55];
            pfStack_74 = (float *)(param_1 + 0x20014);
            fStack_310 = fStack_88 - *(float *)(param_1 + 0x20);
            fStack_30c = afStack_84[0] - *(float *)(param_1 + 0x24);
            pfVar9 = afStack_3cc + 0x32;
            fStack_308 = afStack_84[1] - *(float *)(param_1 + 0x28);
            afStack_304[0] = fStack_310;
            afStack_3cc[(uint)bVar12 * -2 + 0x33] = afStack_3cc[(uint)bVar12 * -2 + 0x30];
            afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x34] =
                 afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x31];
            FUN_00408b00(param_1,pfVar9);
            fStack_1a8 = fStack_250;
            afStack_1f8[(uint)bVar12 * -2 + 0x15] = afStack_3cc[(uint)bVar12 * -2 + 0x60];
            afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x16] =
                 afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x61];
            fStack_274 = fStack_1a8 * *pfStack_74;
            fStack_270 = fStack_1a4 * *pfStack_74;
            fStack_26c = fStack_1a0 * *pfStack_74;
            fStack_2f8 = fStack_1a8 * *pfStack_74;
            afStack_3cc[(uint)bVar12 * -2 + 0x36] = afStack_3cc[(uint)bVar12 * -2 + 0x57];
            afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x37] =
                 afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x58];
            if ((float *)(param_1 + 0x249c) != afStack_3cc + 0x35) {
              *(float *)(param_1 + 0x249c) = fStack_2f8;
              *(uint *)(param_1 + 0x24a0) = uStack_2f4;
              *(uint *)(param_1 + 0x24a4) = uStack_2f0;
            }
            *(uint *)(param_1 + 0x24a0) = 0;
          }
        }
      }
    }
    else {
      pfStack_18 = (float *)FUN_00524a40(param_1 + 0x158,0x30);
      if (0.0 < (float)pfStack_18) {
        if (*(float *)(param_1 + 0x24) < *(float *)(*(int *)(param_1 + 0x20000) + 0x24) + 1.0) {
          FUN_005247c0(param_1 + 0x158,0,1);
        }
      }
      else {
        *(uint *)(param_1 + 0x20000) = 0;
      }
      if (0.0 < *(float *)(param_1 + 0x200bc)) {
        if (*(float *)(param_1 + 0x200bc) <= param_2) {
          *(uint *)(param_1 + 0x200bc) = 0;
          fStack_49c = 1.0;
        }
        else {
          fStack_49c = param_2 / *(float *)(param_1 + 0x200bc);
          *(float *)(param_1 + 0x200bc) = *(float *)(param_1 + 0x200bc) - param_2;
        }
        pfVar9 = (float *)(param_1 + 0x200ac);
        fVar2 = 1.0 - fStack_49c;
        fStack_25c = *pfVar9 * fStack_49c;
        fStack_258 = *(float *)(param_1 + 0x200b0) * fStack_49c;
        fStack_254 = *(float *)(param_1 + 0x200b4) * fStack_49c;
        fStack_3d0 = *pfVar9 * fStack_49c;
        afStack_3cc[(uint)bVar12 * -2] = afStack_3cc[(uint)bVar12 * -2 + 0x5d];
        afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
             afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x5e];
        *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_3d0;
        *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + afStack_3cc[0];
        *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + afStack_3cc[1];
        *pfVar9 = *pfVar9 * fVar2;
        *(float *)(param_1 + 0x200b0) = *(float *)(param_1 + 0x200b0) * fVar2;
        *(float *)(param_1 + 0x200b4) = *(float *)(param_1 + 0x200b4) * fVar2;
        fStack_60 = fVar2;
        pfStack_18 = (float *)FUN_0040cd60();
        *(float *)(param_1 + 0x2508) = (float)pfStack_18 * fStack_49c;
      }
      pfStack_18 = (float *)(**(code **)(*(int *)(param_1 + 0x154) + 0x40))
                                      (param_1,*(uint *)(param_1 + 0x2fec),0);
      *(float **)(param_1 + 0x2504) = pfStack_18;
    }
  }
  else {
    pfStack_18 = (float *)FUN_00524a40(param_1 + 0x158,0x2f);
    if (0.0 < (float)pfStack_18) {
      FUN_00408b40(*(uint *)(param_1 + 0x1ff84),*(int *)(param_1 + 0x1ff84) + 0x2d4);
      uStack_388 = uStack_118;
      afStack_3cc[(uint)bVar12 * -2 + 0x12] = afStack_1f8[(uint)bVar12 * -2 + 0x39];
      afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13] =
           afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x3a];
      if (fStack_384 + (float)_DAT_005d9dcc < *(float *)(param_1 + 0x24)) {
        FUN_005247c0(param_1 + 0x158,0,1);
      }
    }
    else {
      *(uint *)(param_1 + 0x1ff84) = 0;
    }
    if (0.0 < *(float *)(param_1 + 0x200bc)) {
      if (*(float *)(param_1 + 0x200bc) <= param_2) {
        *(uint *)(param_1 + 0x200bc) = 0;
        fStack_494 = 1.0;
      }
      else {
        fStack_494 = param_2 / *(float *)(param_1 + 0x200bc);
        *(float *)(param_1 + 0x200bc) = *(float *)(param_1 + 0x200bc) - param_2;
      }
      pfVar9 = (float *)(param_1 + 0x200ac);
      fVar2 = 1.0 - fStack_494;
      fStack_190 = *pfVar9 * fStack_494;
      fStack_18c = *(float *)(param_1 + 0x200b0) * fStack_494;
      fStack_188 = *(float *)(param_1 + 0x200b4) * fStack_494;
      fStack_28c = *pfVar9 * fStack_494;
      afStack_3cc[(uint)bVar12 * -2 + 0x51] = afStack_1f8[(uint)bVar12 * -2 + 0x1b];
      afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x52] =
           afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1c];
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_28c;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_288;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_284;
      *pfVar9 = *pfVar9 * fVar2;
      *(float *)(param_1 + 0x200b0) = *(float *)(param_1 + 0x200b0) * fVar2;
      *(float *)(param_1 + 0x200b4) = *(float *)(param_1 + 0x200b4) * fVar2;
      fStack_5c = fVar2;
      pfStack_18 = (float *)FUN_0040cd60();
      *(float *)(param_1 + 0x2508) = (float)pfStack_18 * fStack_494;
    }
  }
LAB_00469e25:
  if (0.0 < *(float *)(param_1 + 0x200d0)) {
    if (*(float *)(param_1 + 0x200d0) <= param_2) {
      *(uint *)(param_1 + 0x200d0) = 0;
      fStack_4a0 = 1.0;
    }
    else {
      fStack_4a0 = param_2 / *(float *)(param_1 + 0x200d0);
      *(float *)(param_1 + 0x200d0) = *(float *)(param_1 + 0x200d0) - param_2;
    }
    fStack_2ec = *(float *)(param_1 + 0x200c0) * fStack_4a0;
    pfStack_18 = (float *)(param_1 + 0x200c0);
    pfVar9 = afStack_1f8 + 0x3b;
    fStack_2e8 = *(float *)(param_1 + 0x200c4) * fStack_4a0;
    fStack_2e4 = *(float *)(param_1 + 0x200c8) * fStack_4a0;
    afStack_10c[0] = fStack_2ec;
    afStack_1f8[(uint)bVar12 * -2 + 0x3c] = afStack_3cc[(uint)bVar12 * -2 + 0x39];
    afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x3d] =
         afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x3a];
    FUN_00408b00(param_1,pfVar9);
    afStack_1f8[2] = fStack_3b8;
    afStack_1f8[(uint)bVar12 * -2 + 3] = afStack_3cc[(uint)bVar12 * -2 + 6];
    afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
         afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
    fStack_50 = 1.0 - fStack_4a0;
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x249c) + afStack_1f8[2];
    *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a0) + afStack_1f8[3];
    *(float *)(param_1 + 0x24a4) = *(float *)(param_1 + 0x24a4) + fStack_1e8;
    *pfStack_18 = *pfStack_18 * fStack_50;
    pfStack_18[1] = pfStack_18[1] * fStack_50;
    pfStack_18[2] = pfStack_18[2] * fStack_50;
    pfStack_18 = (float *)FUN_0040cd60();
    *(float *)(param_1 + 0x2508) = (float)pfStack_18 * fStack_4a0;
  }
  iVar6 = FUN_00524770();
  if ((*(int *)(iVar6 + 0x24) == 0x1e) &&
     (iVar6 = FUN_0040c600(*(uint *)(param_1 + 0x1ff78),DAT_007c33e0), iVar6 != 0)) {
    pfStack_18 = (float *)FUN_00525020();
    FUN_0040e1a0(iVar6,pfStack_18);
  }
  FUN_0042e160();
  FUN_0046e730(param_1,param_2);
  if (iStack_6c != 0) {
    *(uint *)(param_1 + 0x20054) = 0;
    *(uint *)(param_1 + 0x20050) = *(uint *)(param_1 + 0x20054);
    *(uint *)(param_1 + 0x2004c) = *(uint *)(param_1 + 0x20050);
  }
  if ((*(int *)(param_1 + 0x1ff84) == 0) && (*(int *)(param_1 + 0x20000) == 0)) {
    if (iStack_38 == 0) goto LAB_0046a09c;
    iVar6 = FUN_00524770();
    iVar6 = *(int *)(iVar6 + 0x24);
    fStack_148 = *(float *)(param_1 + 0x249c) + *(float *)(param_1 + 0x250c);
    fStack_144 = *(float *)(param_1 + 0x24a0) + *(float *)(param_1 + 0x2510);
    fStack_140 = *(float *)(param_1 + 0x24a4) + *(float *)(param_1 + 0x2514);
    fStack_2c8 = fStack_148;
    afStack_3cc[(uint)bVar12 * -2 + 0x42] = afStack_1f8[(uint)bVar12 * -2 + 0x2d];
    afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x43] =
         afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x2e];
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    if (iVar6 == 0x12) {
      fStack_2c0 = 0.0;
      fStack_2c4 = 0.0;
      fStack_2c8 = 0.0;
      fVar2 = *(float *)(param_1 + 0x251c) - param_2 * (float)_DAT_005d9dd4;
      *(uint *)(param_1 + 0x20064) = 0x461c3f9a;
    }
    else {
      if (iVar6 == 0x13) {
        fStack_2c0 = 0.0;
        fStack_2c4 = 0.0;
        fStack_2c8 = 0.0;
      }
      fVar2 = *(float *)(param_1 + 0x251c) - param_2 * (float)_DAT_005d9dd4;
    }
    *(float *)(param_1 + 0x251c) = fVar2;
    iStack_44 = iVar6;
    FUN_00408b00(param_1,param_1 + 0x2004c);
    fStack_f4 = fStack_b8;
    afStack_1f8[(uint)bVar12 * -2 + 0x42] = afStack_1f8[(uint)bVar12 * -2 + 0x51];
    afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x43] =
         afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x52];
    fStack_298 = *(float *)(param_1 + 0x2518) * param_2;
    pfVar9 = afStack_3cc + 0x41;
    fStack_294 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_290 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_2bc = fStack_298;
    afStack_3cc[(uint)bVar12 * -2 + 0x45] = afStack_3cc[(uint)bVar12 * -2 + 0x4e];
    afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x46] =
         afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x4f];
    fStack_19c = fStack_2bc + fStack_f4;
    fStack_198 = fStack_2b8 + fStack_f0;
    fStack_194 = fStack_2b4 + fStack_ec;
    fStack_2d4 = fStack_2bc + fStack_f4;
    afStack_3cc[(uint)bVar12 * -2 + 0x3f] = afStack_1f8[(uint)bVar12 * -2 + 0x18];
    afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x40] =
         afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x19];
    fStack_2c8 = fStack_2c8 + fStack_2d4;
    fStack_2c4 = fStack_2c4 + fStack_2d0;
    fStack_2c0 = fStack_2c0 + fStack_2cc;
    *(uint *)(param_1 + 0x200e0) = *(uint *)(param_1 + 0x251c);
    FUN_0042d750(param_1,pfVar9);
    if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2504) + (float)_DAT_005d9ddc) {
      *(uint *)(param_1 + 0x2500) = 1;
    }
    if ((iStack_44 == 0x12) && (*(int *)(param_1 + 0x2500) != 0)) {
      FUN_00445430(PTR_DAT_00611100,"Splat at %3.2f fps\n",
                   (double)*(float *)(param_1 + 0x251c));
      fVar2 = -*(float *)(param_1 + 0x200e0);
      if (fVar2 < (float)_DAT_005d9de4) {
        if (iStack_44 == 0x12) {
          uVar13 = 0x100000013;
          goto LAB_0046b941;
        }
LAB_0046b950:
        (**(code **)(*(int *)(param_1 + 0x154) + 0x24))
                  (param_1,&DAT_02c8af28,fVar2 * _DAT_005d9e04 + 1.0);
        goto LAB_0046b976;
      }
      FUN_0042c010();
      fVar1 = (fVar2 + (float)_DAT_005d9dec) * (float)_DAT_005d9df4 * (float)_DAT_005d9dfc;
      fStack_488 = fVar1;
      if (0x42c80000 < (int)fVar1) {
        fStack_488 = 9999.0;
      }
      *(uint *)(param_1 + 0xc1d0) = 0;
      (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,auStack_48c);
      if ((0.0 < *(float *)(param_1 + 0x2538)) && ((int)fVar1 < 0x42c80001)) {
        uVar13 = 0x100000014;
LAB_0046b941:
        FUN_005247c0(param_1 + 0x158,uVar13);
        goto LAB_0046b950;
      }
      FUN_005247c0(param_1 + 0x158,0x15,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"fall-?.wav");
      iVar6 = *(int *)(param_1 + 0x2500);
      fStack_4a8 = 0x3F000000;
    }
    else {
LAB_0046b976:
      iVar6 = *(int *)(param_1 + 0x2500);
      fStack_4a8 = 0x3F000000;
    }
    0x3F000000 = fStack_4a8;
    if (iVar6 == 0) {
      *(float *)(param_1 + 0x20064) = *(float *)(param_1 + 0x20064) + param_2;
      if (iStack_44 == 4) {
        fStack_4a8 = fStack_4a8 * (float)_DAT_005d9d7c;
      }
      if ((fStack_4a8 < *(float *)(param_1 + 0x20064)) ||
         (*(float *)(param_1 + 0x200e0) < (float)_DAT_005d9dec)) {
        if (iStack_44 != 0x12) {
          FUN_005247c0(param_1 + 0x158,0x12,1);
        }
        *(uint *)(param_1 + 0x2500) = 0;
      }
      goto LAB_0046a09c;
    }
  }
  else {
    pfStack_18 = (float *)(param_1 + 0x249c);
    FUN_00408ac0(param_1,pfStack_18);
    fStack_22c = fStack_34c;
    afStack_3cc[(uint)bVar12 * -2 + 0x69] = afStack_3cc[(uint)bVar12 * -2 + 0x21];
    afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x6a] =
         afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x22];
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_22c;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_228;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_224;
    pfStack_18[2] = 0.0;
    pfStack_18[1] = pfStack_18[2];
    *pfStack_18 = pfStack_18[1];
  }
  *(uint *)(param_1 + 0x20064) = 0;
LAB_0046a09c:
  *(uint *)(param_1 + 0x20054) = 0;
  *(uint *)(param_1 + 0x20050) = *(uint *)(param_1 + 0x20054);
  *(uint *)(param_1 + 0x2004c) = *(uint *)(param_1 + 0x20050);
  iVar6 = 0x01CCF390;
  if (iStack_30 != 0) {
    if (*(int *)(param_1 + 0xc1f0) != 0) {
      if (*(int *)(param_1 + 0x1ffac) == 0) {
        *(uint *)(param_1 + 0x1ffac) = 1;
      }
      else {
        *(uint *)(param_1 + 0x1ffac) = 0;
        if (*(int *)(iVar6 + 0x264) != 0) {
          *(uint *)(iVar6 + 0x264) = 0;
          (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"flashlit.wav");
        }
      }
    }
    if ((*(int *)(param_1 + 0xc1ec) != 0) &&
       (iVar6 = param_1 + 0x1fae8, *(int *)(param_1 + 0x1fe20) != 0)) {
      if (*(int *)(param_1 + 0x1ffac) == 1) {
        iVar6 = FUN_0040c550(*(uint *)(param_1 + 0x20004),"CFlashlight");
        if ((iVar6 == 0) || (*(int *)(0x01CCF390 + 0x264) != 1)) {
          if (*(int *)(*(int *)(param_1 + 0x1fe20) + 0x2f0) != 0) {
            uVar7 = (uint)(*(int *)(0x01CCF390 + 0x264) == 0);
            *(uint *)(0x01CCF390 + 0x264) = uVar7;
            if (uVar7 != 0) {
              *(uint *)(param_1 + 0x1ffac) = 1;
            }
            (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"flashlit.wav");
          }
        }
        else {
          *(uint *)(0x01CCF390 + 0x264) = 0;
          *(uint *)(param_1 + 0x1ffac) = 0;
        }
      }
      else {
        iVar3 = FUN_004f8ce0(iVar6,"CFlashlight");
        if (iVar3 == 0) {
          if (*(int *)(*(int *)(param_1 + 0x1fe20) + 0x2f0) != 0) {
            uVar7 = (uint)(*(int *)(0x01CCF390 + 0x264) == 0);
            *(uint *)(0x01CCF390 + 0x264) = uVar7;
            if (uVar7 != 0) {
              *(uint *)(param_1 + 0x1ffac) = 1;
            }
            (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"flashlit.wav");
          }
        }
        else {
          iStack_1c = iVar6;
          for (iVar3 = 0; iVar3 < *(int *)(iStack_1c + 0x10); iVar3 = iVar3 + 1) {
            iVar4 = FUN_0040c600(*(uint *)(iVar6 + 0x14),_DAT_01cc41fc);
            if (iVar4 != 0) {
              FUN_004f8dc0(iStack_1c,iVar4,5,1);
              break;
            }
            iVar6 = iVar6 + 4;
          }
          uVar7 = (uint)(*(int *)(0x01CCF390 + 0x264) == 0);
          *(uint *)(0x01CCF390 + 0x264) = uVar7;
          if (uVar7 != 0) {
            *(uint *)(param_1 + 0x1ffac) = 1;
          }
          (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"flashlit.wav");
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x1fe20) == 0) {
    *(uint *)(0x01CCF390 + 0x264) = 0;
  }
  else if (*(int *)(*(int *)(param_1 + 0x1fe20) + 0x2f0) == 0) {
    *(uint *)(0x01CCF390 + 0x264) = 0;
  }
  if ((*(int *)(0x01CCF390 + 0x244) != 0) &&
     ((*(int *)(param_1 + 0x1ff58) != 0 || (*(int *)(0x01CCF390 + 0x25c) != 0)))) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x150))();
  }
  if (iStack_34 != 0) {
    FUN_00474400(param_1,param_2);
  }
  if (*(int *)(param_1 + 0x1ffac) == 0) {
    fVar2 = *(float *)(param_1 + 0x1ffb0) - param_2 / _DAT_005feca0;
    *(float *)(param_1 + 0x1ffb0) = fVar2;
    if (fVar2 < 0.0) {
      *(uint *)(param_1 + 0x1ffb0) = 0;
    }
  }
  else {
    fVar2 = param_2 / _DAT_005fec9c + *(float *)(param_1 + 0x1ffb0);
    *(float *)(param_1 + 0x1ffb0) = fVar2;
    if (1.0 < fVar2) {
      *(uint *)(param_1 + 0x1ffb0) = 0x3f800000;
    }
  }
  fVar2 = *(float *)(param_1 + 0x1ffd0) - param_2 / _DAT_005feca4;
  *(float *)(param_1 + 0x1ffd0) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x1ffd0) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x1fff0) - param_2 / _DAT_005feca4;
  *(float *)(param_1 + 0x1fff0) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x1fff0) = 0;
  }
  if (iStack_20 != 0) {
    FUN_00474ef0();
  }
  FUN_0046caa0();
  if (((*(int *)(param_1 + 0x1fae4) == 2) && (*(int *)(param_1 + 0x20004) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x20004) + 0x2e0) == 0)) {
    FUN_00569180();
    FUN_0046f610(param_1,0);
    FUN_00473160();
    FUN_0046caa0();
  }
  FUN_00473c10(param_1,param_2,uStack_24);
  FUN_00476080();
  FUN_00433e80(param_1,param_2);
  pfStack_18 = (float *)FUN_00524a40(param_1 + 0x158,0x11);
  if ((float)pfStack_18 <= 0.0) {
    FUN_004ebbe0();
  }
  else {
    pfStack_18 = (float *)FUN_00525020();
    if ((1.0 < (float)pfStack_18) &&
       (iStack_68 = FUN_0040c600(*(uint *)(param_1 + 0x1ff7c),DAT_007c5094), iStack_68 != 0))
    {
      FUN_0046c9e0();
      pfVar9 = afStack_1f8 + 0x4a;
      afStack_d0[0] = (float)uStack_178;
      afStack_1f8[(uint)bVar12 * -2 + 0x4b] = afStack_1f8[(uint)bVar12 * -2 + 0x21];
      afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x4c] =
           afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x22];
      FUN_00408b40(param_1,pfVar9);
      pfVar9 = afStack_1f8 + 0x11;
      fStack_358 = fStack_364;
      afStack_3cc[(uint)bVar12 * -2 + 0x1e] = afStack_3cc[(uint)bVar12 * -2 + 0x1b];
      afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1f] =
           afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x1c];
      fStack_220 = fStack_358 - fStack_3ac;
      fStack_21c = fStack_354 - fStack_3a8;
      fStack_218 = fStack_350 - fStack_3a4;
      fStack_1b4 = fStack_358 - fStack_3ac;
      afStack_1f8[(uint)bVar12 * -2 + 0x12] = afStack_3cc[(uint)bVar12 * -2 + 0x6c];
      afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x13] =
           afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x6d];
      uStack_1b0 = 0;
      FUN_00408b00(param_1,pfVar9);
      uStack_334 = uStack_160;
      afStack_3cc[(uint)bVar12 * -2 + 0x27] = afStack_1f8[(uint)bVar12 * -2 + 0x27];
      afStack_3cc[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x28] =
           afStack_1f8[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x28];
      if (0.0 < fStack_32c) {
        FUN_00422ab0(iStack_68,afStack_3cc + 8,afStack_1f8 + 0x11);
      }
    }
  }
  FUN_0046f610(param_1,0);
  FUN_004724a0(param_1,0,param_2);
  FUN_004724a0(param_1,1,param_2);
  FUN_00475920(param_1,param_2);
  FUN_004f9f10();
  FUN_00476150(param_1,param_2);
  if (iStack_20 == 0) {
    FUN_004eb5b0();
  }
  else {
    param_2 = *(float *)(param_1 + 0x1ff70) + param_2;
    *(float *)(param_1 + 0x1ff70) = param_2;
    if ((float)_DAT_005d9dbc < param_2) {
      FUN_004eca10(param_1,1);
    }
  }
  if ((*(int *)(param_1 + 0x20004) != 0) && (*(int *)(*(int *)(param_1 + 0x20004) + 0xfc) != 0)) {
    *(uint *)(param_1 + 0xfc) = 1;
  }
  iVar6 = FUN_005735a0();
  if (iVar6 == 0) {
    if (*(int *)(0x01CCF390 + 0x25c) != 0) {
      FUN_00573a80();
      FUN_00572ac0();
      FUN_00572a10();
      uVar5 = FUN_00572d20();
      *(uint *)(param_1 + 0x2001c) = uVar5;
      FUN_005728e0();
      uVar5 = FUN_00572d20();
      *(uint *)(param_1 + 0x20018) = uVar5;
      FUN_00572b40();
      FUN_00573ab0(*(uint *)(param_1 + 0x20018),0x3eaa7efa,0x3f800000,0);
      if (*(int *)(0x01CCF390 + 0x264) != 0) {
        *(uint *)(0x01CCF390 + 0x264) = 0;
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"flashlit.wav");
        return;
      }
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
