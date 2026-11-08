// Name: FUN_00518cd0
// Address: 00518cd0
// Address Range: [[00518cd0, 0051b54d]]
// Convention: unknown
// Signature: void FUN_00518cd0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00518cd0(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  float *pfVar9;
  byte bVar10;
  float afStackY_13c0 [944];
  ulonglong uVar11;
  float fStack_4b0;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_49c;
  float fStack_498;
  byte auStack_494 [4];
  float fStack_490;
  int iStack_458;
  int iStack_454;
  float fStack_450;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float afStack_438 [6];
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  uint local_408 [6];
  uint local_3f0;
  uint uStack_3ec;
  uint uStack_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  uint uStack_3dc;
  float fStack_3d8;
  float afStack_3d4 [5];
  uint uStack_3c0;
  float afStack_3bc [5];
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  uint uStack_38c;
  uint uStack_388;
  uint uStack_384;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  uint uStack_36c;
  float afStack_360 [3];
  uint uStack_354;
  float afStack_348 [3];
  float fStack_33c;
  uint uStack_338;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  uint uStack_30c;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  uint uStack_2f4;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  uint uStack_2dc;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  uint uStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_294;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float afStack_270 [3];
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  uint uStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float afStack_234 [3];
  float fStack_228;
  float fStack_224;
  float fStack_220;
  uint uStack_21c;
  float afStack_210 [3];
  float fStack_204;
  uint uStack_200;
  float fStack_1fc;
  float fStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  float fStack_1e4;
  uint uStack_1e0;
  float fStack_1d4;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  uint uStack_198;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float afStack_150 [3];
  uint uStack_144;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  uint uStack_12c;
  uint uStack_120;
  float fStack_11c;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float afStack_fc [3];
  float afStack_f0 [3];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint uStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_9c;
  float afStack_90 [5];
  int iStack_7c;
  int iStack_78;
  float fStack_74;
  int iStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  float fStack_38;
  int local_34;
  uint uStack_30;
  int iStack_2c;
  float *pfStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float *pfStack_18;
  
  bVar10 = 0;
  local_34 = FUN_00491aa0(0x01C6E360,"?DebugActionPending" + 1);
  if ((*(int *)(param_1 + 0x2628) != 0) && (*(float *)(param_1 + 0x20ca4) < _DAT_005cd147)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x2628) + 0x154) + 0x1c))();
    puVar6 = local_408;
    puVar8 = &local_3f0;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    if ((uint *)(param_1 + 0x20c98) != &local_3f0) {
      *(uint *)(param_1 + 0x20c98) = local_3f0;
      *(uint *)(param_1 + 0x20c9c) = uStack_3ec;
      *(uint *)(param_1 + 0x20ca0) = uStack_3e8;
    }
    if ((uint *)(param_1 + 0x20ca4) != &uStack_3e4) {
      *(uint *)(param_1 + 0x20ca4) = uStack_3e4;
      *(uint *)(param_1 + 0x20ca8) = uStack_3e0;
      *(uint *)(param_1 + 0x20cac) = uStack_3dc;
    }
    fStack_174 = *(float *)(param_1 + 0x20c98) + *(float *)(param_1 + 0x20ca4);
    fStack_170 = *(float *)(param_1 + 0x20c9c) + *(float *)(param_1 + 0x20ca8);
    fStack_16c = *(float *)(param_1 + 0x20ca0) + *(float *)(param_1 + 0x20cac);
    fStack_114 = fStack_174;
    afStack_3bc[(uint)bVar10 * -2 + 0xab] = afStack_3bc[(uint)bVar10 * -2 + 0x93];
    afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xac] =
         afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x94];
    fStack_1a4 = fStack_114 * _DAT_005cd14b;
    fStack_1a0 = fStack_110 * _DAT_005cd14b;
    fStack_19c = fStack_10c * _DAT_005cd14b;
    afStack_234[0] = fStack_114 * _DAT_005cd14b;
    afStack_3bc[(uint)bVar10 * -2 + 99] = afStack_3bc[(uint)bVar10 * -2 + 0x87];
    afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 100] =
         afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x88];
    FUN_00408b80(*(uint *)(param_1 + 0x2628),afStack_3bc + 0x62);
    pfVar7 = afStack_3bc + 0xb0;
    afStack_fc[0] = (float)uStack_198;
    afStack_3bc[(uint)bVar10 * -2 + 0xb1] = afStack_3bc[(uint)bVar10 * -2 + 0x8a];
    afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xb2] =
         afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x8b];
    FUN_00408bf0(param_1,pfVar7);
    fStack_390 = fStack_1b0;
    afStack_3bc[(uint)bVar10 * -2 + 0xc] = afStack_3bc[(uint)bVar10 * -2 + 0x84];
    afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x85];
    if ((float *)(param_1 + 0x20c8c) != afStack_3bc + 0xb) {
      *(float *)(param_1 + 0x20c8c) = fStack_390;
      *(uint *)(param_1 + 0x20c90) = uStack_38c;
      *(uint *)(param_1 + 0x20c94) = uStack_388;
    }
  }
  FUN_004bf3a0(0x01D2130C,param_2);
  FUN_00433c60(param_1,param_2);
  fVar3 = *(float *)(param_1 + 0xcdcc) - param_2;
  *(float *)(param_1 + 0xcdcc) = fVar3;
  if (fVar3 < 0.0) {
    *(uint *)(param_1 + 0xcdcc) = 0;
  }
  *(uint *)(param_1 + 0x24a4) = 0;
  *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
  *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
  FUN_0051c100();
  pfVar7 = afStack_3bc + 0x53;
  afStack_270[0] = afStack_3bc[2];
  afStack_3bc[(uint)bVar10 * -2 + 0x54] = afStack_3bc[(uint)bVar10 * -2 + 3];
  afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x55] =
       afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
  FUN_00408b80(param_1,pfVar7);
  uVar11 = CONCAT44(param_2,param_1);
  fStack_3d8 = fStack_9c;
  afStack_3d4[(uint)bVar10 * -2] = afStack_3bc[(uint)bVar10 * -2 + 0xc9];
  afStack_3d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xca];
  FUN_0051b550(uVar11);
  iStack_3c = 1;
  iStack_44 = 1;
  iStack_40 = 1;
  iStack_2c = 1;
  uStack_30 = 1;
  if (*(int *)(param_1 + 0x26fc) != 0) {
    iStack_3c = 0;
    iStack_40 = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_44 = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"grabbedBy=%s\n",*(int *)(param_1 + 0x26fc));
    }
  }
  if (*(int *)(param_1 + 0x20b9c) != 0) {
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    iStack_40 = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"pushedObject=%s\n",*(uint *)(param_1 + 0x20b9c));
    }
  }
  if ((*(int *)(param_1 + 0x20ba4) != 0) || (*(int *)(param_1 + 0x20c20) != 0)) {
    iStack_44 = 0;
    iStack_40 = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"ladder\n");
    }
  }
  if ((*(int *)(param_1 + 0x20b98) != 0) || (*(int *)(param_1 + 0x20b64) == 4)) {
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"pickup\n");
    }
  }
  iVar4 = param_1 + 0x158;
  pfStack_18 = (float *)FUN_004fc350(iVar4,0x31);
  if ((((0.0 < (float)pfStack_18) ||
       (pfStack_18 = (float *)FUN_004fc350(iVar4,0x35), 0.0 < (float)pfStack_18)) ||
      (pfStack_18 = (float *)FUN_004fc350(iVar4,0x36), 0.0 < (float)pfStack_18)) ||
     (*(float *)(param_1 + 0x2538) <= 0.0)) {
    iStack_40 = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"hurt\n");
    }
  }
  pfStack_18 = (float *)FUN_004fc350(param_1 + 0x158,0x2a);
  if (((0.0 < (float)pfStack_18) || (*(int *)(param_1 + 0x20b64) == 5)) ||
     (*(int *)(param_1 + 0x20b94) != 0)) {
    uStack_30 = 0;
    iStack_3c = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"door\n");
    }
  }
  pfStack_18 = (float *)FUN_004fc350(param_1 + 0x158,0x2b);
  if (((0.0 < (float)pfStack_18) || (*(int *)(param_1 + 0x20b64) == 5)) ||
     (*(int *)(param_1 + 0x20b94) != 0)) {
    uStack_30 = 0;
    iStack_3c = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"door\n");
    }
  }
  iVar4 = FUN_004fc070();
  if ((((((*(int *)(iVar4 + 0x24) != 0x2a) &&
         (iVar4 = FUN_004fc070(), *(int *)(iVar4 + 0x24) != 0x2b)) &&
        (iVar4 = FUN_004fc070(), *(int *)(iVar4 + 0x24) != 0x28)) &&
       ((iVar4 = FUN_004fc070(), *(int *)(iVar4 + 0x24) != 0x29 &&
        (iVar4 = FUN_004fc070(), *(int *)(iVar4 + 0x24) != 0x27)))) &&
      ((iVar4 = FUN_004fc0c0(), iVar4 != 0x2a &&
       ((iVar4 = FUN_004fc0c0(), iVar4 != 0x2b && (iVar4 = FUN_004fc0c0(), iVar4 != 0x28)))))) &&
     ((iVar4 = FUN_004fc0c0(), iVar4 != 0x29 && (iVar4 = FUN_004fc0c0(), iVar4 != 0x27)))) {
    if (*(int *)(param_1 + 0x20b64) == 5) {
      *(uint *)(param_1 + 0x20b64) = 0;
    }
    if (*(int *)(param_1 + 0x20b94) != 0) {
      *(uint *)(param_1 + 0x20b94) = 0;
    }
  }
  iVar4 = FUN_004fc070();
  if ((((*(int *)(iVar4 + 0x24) != 0x20) && (iVar4 = FUN_004fc070(), *(int *)(iVar4 + 0x24) != 0x1e)
       ) && (iVar4 = FUN_004fc070(), *(int *)(iVar4 + 0x24) != 0x22)) &&
     (((iVar4 = FUN_004fc070(), *(int *)(iVar4 + 0x24) != 0x23 &&
       (iVar4 = FUN_004fc0c0(), iVar4 != 0x20)) &&
      ((iVar4 = FUN_004fc0c0(), iVar4 != 0x1e &&
       ((iVar4 = FUN_004fc0c0(), iVar4 != 0x22 && (iVar4 = FUN_004fc0c0(), iVar4 != 0x23)))))))) {
    if (*(int *)(param_1 + 0x20b64) == 4) {
      *(uint *)(param_1 + 0x20b64) = 0;
    }
    if (*(int *)(param_1 + 0x20b98) != 0) {
      *(uint *)(param_1 + 0x20b98) = 0;
    }
  }
  pfStack_18 = (float *)FUN_004fc350(param_1 + 0x158,0x3b);
  if (0.0 < (float)pfStack_18) {
    iStack_40 = 0;
    iStack_2c = 0;
    iStack_44 = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"sitting\n");
    }
  }
  if (*(int *)(param_1 + 0x20b64) == 1) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"stashinventory\n");
    }
  }
  if ((*(int *)(param_1 + 0x20b64) == 8) || (*(int *)(param_1 + 0x20b64) == 9)) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"stashinventory\n");
    }
  }
  if (*(int *)(param_1 + 0x20b64) == 2) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"placeobject\n");
    }
  }
  if (*(int *)(param_1 + 0x20b64) == 6) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"putdownobject\n");
    }
  }
  if (*(int *)(param_1 + 0x20b64) == 3) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"toss\n");
    }
  }
  if (*(int *)(param_1 + 0x20b64) == 7) {
    uStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"attackmelee\n");
    }
  }
  if ((*(int *)(param_1 + 0x20ba0) != 0) ||
     (pfStack_18 = (float *)FUN_004fc350(param_1 + 0x158,0x2c), 0.0 < (float)pfStack_18)) {
    iStack_2c = 0;
    uStack_30 = 0;
    iStack_3c = 0;
    iStack_40 = 0;
    if (local_34 != 0) {
      FUN_00441ff0(PTR_DAT_005f1690,"leverToPull=%s\n",*(uint *)(param_1 + 0x20ba0));
    }
  }
  if (*(int *)(param_1 + 0x26fc) == 0) {
    if (*(int *)(param_1 + 0xdc) != 0) {
      iStack_44 = 1;
    }
    if (*(float *)(param_1 + 0x24) != *(float *)(param_1 + 0x2504)) {
      iStack_44 = 1;
    }
  }
  *(uint *)(param_1 + 0x2524) = *(uint *)(param_1 + 0x24a4);
  FUN_00434850(param_1,param_2);
  if (*(int *)(param_1 + 0x20ba8) == 0) {
    fVar3 = *(float *)(param_1 + 0x20c34) - param_2 * (float)_DAT_005cd14f * (float)_DAT_005cd14f;
    *(float *)(param_1 + 0x20c34) = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)(param_1 + 0x20c34) = 0;
    }
  }
  else {
    fVar3 = param_2 * (float)_DAT_005cd14f + *(float *)(param_1 + 0x20c34);
    *(float *)(param_1 + 0x20c34) = fVar3;
    if (1.0 < fVar3) {
      *(uint *)(param_1 + 0x20c34) = 0x3f800000;
    }
  }
  iStack_70 = 1;
  if (*(int *)(param_1 + 0x20ba4) == 0) {
    if (*(int *)(param_1 + 0x20c20) == 0) {
      iVar4 = *(int *)(param_1 + 0x20ba8);
      if (iVar4 == 0) {
        if (*(int *)(param_1 + 0x26fc) == 0) {
          if (*(int *)(param_1 + 0x20b9c) == 0) {
            iVar4 = FUN_00431660(param_1,param_2);
            if (iVar4 == 0) {
              if (iStack_3c != 0) {
                iVar4 = FUN_004fc070();
                uVar1 = *(uint *)(iVar4 + 0x24);
                if ((((((uVar1 < 8) || (uVar1 < 9)) || (uVar1 < 0xd)) ||
                     ((uVar1 < 0xe || (uVar1 < 0xf)))) || (uVar1 < 0x10)) ||
                   ((uVar1 < 0x11 || (uVar1 == 0x7a)))) {
                  if (*(int *)(param_1 + 0x2500) != 0) {
                    iVar4 = FUN_004fc070();
                    iVar4 = *(int *)(iVar4 + 0x24);
                    iVar5 = 0;
                    if (*(int *)(param_1 + 0xcdd4) == 0) {
                      if (*(int *)(param_1 + 0xcdd8) == 0) {
                        if ((float)_DAT_005cd157 <= *(float *)(param_1 + 0xcdfc)) {
                          if (_DAT_005cd15f < (double)*(float *)(param_1 + 0xcdfc)) {
                            if (*(int *)(param_1 + 0xcddc) == 0) {
                              iVar5 = 6;
                            }
                            else {
                              iVar5 = 8;
                            }
                          }
                        }
                        else if (*(int *)(param_1 + 0xcddc) == 0) {
                          iVar5 = 5;
                        }
                        else {
                          iVar5 = 7;
                        }
                      }
                      else if (*(int *)(param_1 + 0xcddc) == 0) {
                        if ((float)_DAT_005cd157 <= *(float *)(param_1 + 0xcdfc)) {
                          if ((double)*(float *)(param_1 + 0xcdfc) <= _DAT_005cd15f) {
                            iVar5 = 2;
                          }
                          else {
                            iVar5 = 0x10;
                          }
                        }
                        else {
                          iVar5 = 0xf;
                        }
                      }
                      else if ((float)_DAT_005cd157 <= *(float *)(param_1 + 0xcdfc)) {
                        if ((double)*(float *)(param_1 + 0xcdfc) <= _DAT_005cd15f) {
                          iVar5 = 3;
                        }
                        else {
                          iVar5 = 0xe;
                        }
                      }
                      else {
                        iVar5 = 0xd;
                      }
                    }
                    else if (*(int *)(param_1 + 0xcddc) == 0) {
                      if ((float)_DAT_005cd157 <= *(float *)(param_1 + 0xcdfc)) {
                        if ((double)*(float *)(param_1 + 0xcdfc) <= _DAT_005cd15f) {
                          iVar5 = 1;
                        }
                        else {
                          iVar5 = 0xc;
                        }
                      }
                      else {
                        iVar5 = 0xb;
                      }
                    }
                    else if ((float)_DAT_005cd157 <= *(float *)(param_1 + 0xcdfc)) {
                      if ((double)*(float *)(param_1 + 0xcdfc) <= _DAT_005cd15f) {
                        iVar5 = 4;
                      }
                      else {
                        iVar5 = 10;
                      }
                    }
                    else {
                      iVar5 = 9;
                    }
                    if ((*(int *)(param_1 + 0xcdf8) != 0) && (*(int *)(param_1 + 0x2f00) != 0x11)) {
                      *(uint *)(param_1 + 0x20cfc) = 0;
                      *(uint *)(param_1 + 0x20cf8) = 1;
                    }
                    if (*(int *)(param_1 + 0x20cf8) == 0) {
                      fVar3 = *(float *)(param_1 + 0xce00) * *(float *)(param_1 + 0x2528);
                      *(float *)(param_1 + 0x2508) = fVar3;
                      *(float *)(param_1 + 0x20c44) = *(float *)(param_1 + 0x20c44) - fVar3;
                    }
                    if (*(int *)(param_1 + 0x20b64) == 5) {
                      *(uint *)(param_1 + 0x20b64) = 0;
                    }
                    if (*(int *)(param_1 + 0x20b94) != 0) {
                      *(uint *)(param_1 + 0x20b94) = 0;
                    }
                    if (iVar5 != iVar4) {
                      FUN_004fc0d0(param_1 + 0x158,iVar5,1);
                    }
                    if (*(int *)(param_1 + 0xcde8) != 0) {
                      FUN_004d3c90();
                    }
                  }
                  iStack_70 = 0;
                }
              }
            }
            else {
              uVar1 = *(uint *)(param_1 + 0x273c);
              if (uVar1 < 2) {
                if (uVar1 == 1) {
                  uVar11 = 0x100000001;
                }
                else {
                  uVar11 = 0x100000000;
                }
LAB_0051ac8d:
                FUN_004fc0d0(param_1 + 0x158,uVar11);
              }
              else {
                if (uVar1 < 3) {
                  uVar11 = 0x100000004;
                  goto LAB_0051ac8d;
                }
                if (uVar1 != 3) {
                  uVar11 = 0x100000000;
                  goto LAB_0051ac8d;
                }
                FUN_004fc0d0(param_1 + 0x158,0,1);
                FUN_00441ff0(PTR_DAT_005f1690,"%s confused while walking to scriptDest!\n",param_1);
              }
              *(uint *)(param_1 + 0x24a4) = 0;
              *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
              *(uint *)(param_1 + 0x249c) = *(uint *)(param_1 + 0x24a0);
            }
          }
          else {
            iStack_78 = *(int *)(param_1 + 0x20ba4);
            if (*(int *)(param_1 + 0xcde0) != 0) {
              (**(code **)(*(int *)(*(int *)(param_1 + 0x20b9c) + 0x154) + 0x1c))();
              pfVar7 = afStack_438;
              pfVar9 = &fStack_420;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pfVar9 = *pfVar7;
                pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
                pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
              }
              fStack_39c = fStack_420 + fStack_414;
              fStack_398 = fStack_41c + fStack_410;
              fStack_394 = fStack_418 + fStack_40c;
              fStack_168 = fStack_420 + fStack_414;
              afStack_3bc[(uint)bVar10 * -2 + 0x96] = afStack_3bc[(uint)bVar10 * -2 + 9];
              afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x97] =
                   afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
              fStack_b4 = fStack_168 * _DAT_005cd14b;
              fStack_b0 = fStack_164 * _DAT_005cd14b;
              fStack_ac = fStack_160 * _DAT_005cd14b;
              afStack_90[0] = fStack_168 * _DAT_005cd14b;
              afStack_3bc[(uint)bVar10 * -2 + 0xcc] = afStack_3bc[(uint)bVar10 * -2 + 0xc3];
              afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xcd] =
                   afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xc4];
              FUN_00408b80(*(uint *)(param_1 + 0x20b9c),afStack_3bc + 0xcb);
              pfVar7 = afStack_3bc + 0x17;
              afStack_360[0] = (float)uStack_21c;
              afStack_3bc[(uint)bVar10 * -2 + 0x18] = afStack_3bc[(uint)bVar10 * -2 + 0x69];
              afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
                   afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x6a];
              FUN_00408bf0(param_1,pfVar7);
              uStack_24c = uStack_c0;
              afStack_3bc[(uint)bVar10 * -2 + 0x5d] = afStack_3bc[(uint)bVar10 * -2 + 0xc0];
              afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x5e] =
                   afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xc1];
              FUN_00576250();
              uStack_354 = uStack_3c0;
              afStack_3bc[(uint)bVar10 * -2 + 0x1b] = afStack_3bc[(uint)bVar10 * -2];
              afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c] =
                   afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              fStack_4b0 = (float)FUN_0040cfa0();
              pfStack_18 = (float *)fStack_4b0;
              fStack_330 = fStack_414 - fStack_420;
              fStack_32c = fStack_410 - fStack_41c;
              fStack_328 = fStack_40c - fStack_418;
              fStack_180 = fStack_414 - fStack_420;
              afStack_3bc[(uint)bVar10 * -2 + 0x90] = afStack_3bc[(uint)bVar10 * -2 + 0x24];
              afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x91] =
                   afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25];
              fStack_108 = fStack_180 * _DAT_005cd14b;
              fStack_104 = fStack_17c * _DAT_005cd14b;
              fStack_100 = fStack_178 * _DAT_005cd14b;
              fStack_204 = fStack_180 * _DAT_005cd14b;
              afStack_3bc[(uint)bVar10 * -2 + 0x6f] = afStack_3bc[(uint)bVar10 * -2 + 0xae];
              afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x70] =
                   afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xaf];
              uStack_200 = 0;
              if ((((fStack_244 - SQRT(fStack_1fc * fStack_1fc + fStack_204 * fStack_204) <
                     (float)_DAT_005cd167) && (1.0 < (double)fStack_248)) &&
                  ((double)fStack_248 < _DAT_005cd16f)) && (ABS(fStack_4b0) < (float)_DAT_005cd177))
              {
                fStack_60 = param_2 * _DAT_005cd17f;
                fStack_74 = -fStack_60;
                if (fStack_4b0 < fStack_74) {
                  fStack_4b0 = fStack_74;
                }
                if (fStack_60 < fStack_4b0) {
                  fStack_4b0 = fStack_60;
                }
                *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_4b0;
                FUN_00433220(param_1,param_1 + 0x30);
                goto LAB_0051976f;
              }
            }
            if (iStack_78 == 0) {
              FUN_004fc0d0(param_1 + 0x158,0,1);
              FUN_004d3850();
            }
          }
        }
        else {
          if (*(int *)(param_1 + 0x2700) == 0) {
            FUN_00408bf0(param_1,*(int *)(param_1 + 0x26fc) + 0x20);
            uStack_384 = uStack_144;
            afStack_3bc[(uint)bVar10 * -2 + 0xf] = afStack_3bc[(uint)bVar10 * -2 + 0x9f];
            afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
                 afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xa0];
            FUN_00576250();
            uStack_36c = uStack_12c;
            afStack_3bc[(uint)bVar10 * -2 + 0x15] = afStack_3bc[(uint)bVar10 * -2 + 0xa5];
            afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
                 afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xa6];
            pfStack_18 = (float *)FUN_0040cfa0();
            fStack_38 = (float)pfStack_18;
            if ((float)pfStack_18 < _DAT_005cd183) {
              fStack_38 = (float)pfStack_18 + _DAT_005cd17f;
            }
            if (_DAT_005cd187 < fStack_38) {
              fStack_38 = fStack_38 + _DAT_005cd18b;
            }
            fStack_5c = param_2 * _DAT_005cd17f;
            fStack_68 = -fStack_5c;
            if (fStack_38 < fStack_68) {
              fStack_38 = fStack_68;
            }
            if (fStack_5c < fStack_38) {
              fStack_38 = fStack_5c;
            }
            *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + fStack_38;
            FUN_00433220(param_1,param_1 + 0x30);
          }
          iStack_7c = *(int *)(param_1 + 0x26fc);
          pfStack_28 = *(float **)(iStack_7c + 0x154);
          iStack_1c = param_1 + 0x158;
          FUN_0054dcc0(iStack_1c,0);
          pfVar7 = afStack_3bc + 0x9b;
          afStack_150[0] = (float)uStack_1e0;
          afStack_3bc[(uint)bVar10 * -2 + 0x9c] = afStack_3bc[(uint)bVar10 * -2 + 0x78];
          afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x9d] =
               afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x79];
          iVar4 = (*(code *)pfStack_28[0x44])(iStack_7c,param_1,pfVar7);
          if (iVar4 == 0) {
            *(uint *)(param_1 + 0x26fc) = 0;
          }
          else if (*(int *)(param_1 + 0x26fc) != 0) {
            fVar3 = *(float *)(param_1 + 0x20cc8) + param_2;
            *(float *)(param_1 + 0x20cc8) = fVar3;
            if ((_DAT_005e3520 <= fVar3) && (*(int *)(param_1 + 0x2700) != 1)) {
              pfStack_28 = (float *)FUN_004fc350(iStack_1c,0x2f);
              pfStack_18 = (float *)FUN_004fc350(iStack_1c,0x30);
              if ((float)pfStack_18 + (float)pfStack_28 <= 0.0) {
                (**(code **)(*(int *)(param_1 + 0x154) + 0xf0))();
              }
              else if ((*(int *)(param_1 + 0xcde0) != 0) || (_DAT_01c5fae4 != 0)) {
                FUN_004fc0d0(param_1 + 0x158,0x30,1);
                *(uint *)(param_1 + 0xcde0) = 0;
              }
            }
            goto LAB_0051976f;
          }
          FUN_004fc0d0(param_1 + 0x158,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x98))(iVar4,&iStack_458);
        if ((iStack_458 == 0) || (param_1 != iStack_454)) {
          FUN_004d3af0();
        }
        else {
          pfVar7 = (float *)(*(int *)(iStack_454 + 0x20ba8) + 0x34 + (uint)bVar10 * -8);
          fStack_2c4 = *(float *)(*(int *)(iStack_454 + 0x20ba8) + 0x30);
          afStack_3bc[(uint)bVar10 * -2 + 0x3f] = *pfVar7;
          afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x40] = pfVar7[(uint)bVar10 * -2 + 1];
          fStack_4c = *(float *)(iStack_454 + 0xce00) * _DAT_005cd17f * (float)_DAT_005cd18f *
                      param_2;
          if (fStack_4c < fStack_444) {
            fStack_4c = fStack_444;
          }
          if (fStack_448 < fStack_4c) {
            fStack_4c = fStack_448;
          }
          uStack_2c0 = FUN_0040cfa0();
          fStack_48 = *(float *)(param_1 + 0xce04) * _DAT_005cd17f * (float)_DAT_005cd18f * param_2;
          if (fStack_48 < fStack_43c) {
            fStack_48 = fStack_43c;
          }
          if (fStack_440 < fStack_48) {
            fStack_48 = fStack_440;
          }
          pfStack_18 = (float *)uStack_2c0;
          fStack_2c4 = (float)FUN_0040cfa0();
          pfStack_18 = (float *)fStack_2c4;
          iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x20ba8) + 0x154) + 0xa0))
                            (*(int *)(param_1 + 0x20ba8),afStack_3bc + 0x3e,param_1 + 0xcdd4);
          if (iVar4 == 0) {
            FUN_004fc0d0(param_1 + 0x158,0,1);
            FUN_004d3af0();
          }
          else {
            fVar3 = (float)FUN_0040cfa0();
            if ((float)_DAT_005cd157 <= fVar3) {
              if ((double)fVar3 <= _DAT_005cd15f) {
                uVar11 = 0x100000000;
              }
              else {
                uVar11 = 0x100000005;
              }
            }
            else {
              uVar11 = 0x100000006;
            }
            pfStack_18 = (float *)fVar3;
            FUN_004fc0d0(param_1 + 0x158,uVar11);
            pfVar7 = (float *)(param_1 + 0x34 + (uint)bVar10 * -8);
            fStack_258 = *(float *)(param_1 + 0x30);
            afStack_3bc[(uint)bVar10 * -2 + 0x5a] = *pfVar7;
            afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x5b] =
                 pfVar7[(uint)bVar10 * -2 + 1];
            fStack_254 = fVar3 * *(float *)(param_1 + 0x20c34) + fStack_254;
            FUN_00433220(param_1,afStack_3bc + 0x59);
            afStack_3d4[4] = fStack_450 + (float)_DAT_005cd197;
            afStack_3d4[2] = 0.0;
            afStack_3d4[3] = 0.0;
            pfStack_28 = (float *)afStack_3d4[4];
            FUN_00408b80(*(uint *)(param_1 + 0x20ba8),afStack_3d4 + 2);
            fStack_300 = fStack_2a0;
            afStack_3bc[(uint)bVar10 * -2 + 0x30] = afStack_3bc[(uint)bVar10 * -2 + 0x48];
            afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x31] =
                 afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x49];
            pfStack_28 = (float *)(param_1 + 0x20c34);
            fStack_264 = fStack_300 - *(float *)(param_1 + 0x20);
            fStack_260 = fStack_2fc - *(float *)(param_1 + 0x24);
            pfVar7 = afStack_3bc + 0x6b;
            fStack_25c = fStack_2f8 - *(float *)(param_1 + 0x28);
            afStack_210[0] = fStack_264;
            afStack_3bc[(uint)bVar10 * -2 + 0x6c] = afStack_3bc[(uint)bVar10 * -2 + 0x57];
            afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x6d] =
                 afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x58];
            FUN_00408b40(param_1,pfVar7);
            fStack_e4 = fStack_15c;
            afStack_3bc[(uint)bVar10 * -2 + 0xb7] = afStack_3bc[(uint)bVar10 * -2 + 0x99];
            afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xb8] =
                 afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x9a];
            fStack_2b8 = fStack_e4 * *pfStack_28;
            fStack_2b4 = fStack_e0 * *pfStack_28;
            fStack_2b0 = fStack_dc * *pfStack_28;
            fStack_1f8 = fStack_e4 * *pfStack_28;
            afStack_3bc[(uint)bVar10 * -2 + 0x72] = afStack_3bc[(uint)bVar10 * -2 + 0x42];
            afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x73] =
                 afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x43];
            if ((float *)(param_1 + 0x249c) != afStack_3bc + 0x71) {
              *(float *)(param_1 + 0x249c) = fStack_1f8;
              *(uint *)(param_1 + 0x24a0) = uStack_1f4;
              *(uint *)(param_1 + 0x24a4) = uStack_1f0;
            }
            *(uint *)(param_1 + 0x24a0) = 0;
          }
        }
      }
    }
    else {
      pfStack_18 = (float *)FUN_004fc350(param_1 + 0x158,0x38);
      if (0.0 < (float)pfStack_18) {
        if (*(float *)(param_1 + 0x24) < *(float *)(*(int *)(param_1 + 0x20c20) + 0x24) + 1.0) {
          FUN_004fc0d0(param_1 + 0x158,0,1);
        }
      }
      else {
        *(uint *)(param_1 + 0x20c20) = 0;
      }
      if (0.0 < *(float *)(param_1 + 0x20cdc)) {
        if (*(float *)(param_1 + 0x20cdc) <= param_2) {
          *(uint *)(param_1 + 0x20cdc) = 0;
          fStack_49c = 1.0;
        }
        else {
          fStack_49c = param_2 / *(float *)(param_1 + 0x20cdc);
          *(float *)(param_1 + 0x20cdc) = *(float *)(param_1 + 0x20cdc) - param_2;
        }
        pfVar7 = (float *)(param_1 + 0x20ccc);
        fVar3 = 1.0 - fStack_49c;
        fStack_2e8 = *pfVar7 * fStack_49c;
        fStack_2e4 = *(float *)(param_1 + 0x20cd0) * fStack_49c;
        fStack_2e0 = *(float *)(param_1 + 0x20cd4) * fStack_49c;
        fStack_318 = *pfVar7 * fStack_49c;
        afStack_3bc[(uint)bVar10 * -2 + 0x2a] = afStack_3bc[(uint)bVar10 * -2 + 0x36];
        afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b] =
             afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x37];
        *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_318;
        *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_314;
        *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_310;
        *pfVar7 = *pfVar7 * fVar3;
        *(float *)(param_1 + 0x20cd0) = *(float *)(param_1 + 0x20cd0) * fVar3;
        *(float *)(param_1 + 0x20cd4) = *(float *)(param_1 + 0x20cd4) * fVar3;
        fStack_54 = fVar3;
        pfStack_18 = (float *)FUN_0040cfa0();
        *(float *)(param_1 + 0x2508) = (float)pfStack_18 * fStack_49c;
      }
      pfStack_18 = (float *)(**(code **)(*(int *)(param_1 + 0x154) + 0x40))
                                      (param_1,*(uint *)(param_1 + 0x326c),0);
      *(float **)(param_1 + 0x2504) = pfStack_18;
    }
  }
  else {
    pfStack_18 = (float *)FUN_004fc350(param_1 + 0x158,0x37);
    if (0.0 < (float)pfStack_18) {
      FUN_00408b80(*(uint *)(param_1 + 0x20ba4),*(int *)(param_1 + 0x20ba4) + 0x2d4);
      uStack_120 = uStack_2f4;
      afStack_3bc[(uint)bVar10 * -2 + 0xa8] = afStack_3bc[(uint)bVar10 * -2 + 0x33];
      afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xa9] =
           afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x34];
      if (fStack_11c + (float)_DAT_005cd19f < *(float *)(param_1 + 0x24)) {
        FUN_004fc0d0(param_1 + 0x158,0,1);
      }
    }
    else {
      *(uint *)(param_1 + 0x20ba4) = 0;
    }
    if (0.0 < *(float *)(param_1 + 0x20cdc)) {
      if (*(float *)(param_1 + 0x20cdc) <= param_2) {
        *(uint *)(param_1 + 0x20cdc) = 0;
        fStack_4a4 = 1.0;
      }
      else {
        fStack_4a4 = param_2 / *(float *)(param_1 + 0x20cdc);
        *(float *)(param_1 + 0x20cdc) = *(float *)(param_1 + 0x20cdc) - param_2;
      }
      pfVar7 = (float *)(param_1 + 0x20ccc);
      fVar3 = 1.0 - fStack_4a4;
      fStack_324 = *pfVar7 * fStack_4a4;
      fStack_320 = *(float *)(param_1 + 0x20cd0) * fStack_4a4;
      fStack_31c = *(float *)(param_1 + 0x20cd4) * fStack_4a4;
      fStack_1c8 = *pfVar7 * fStack_4a4;
      afStack_3bc[(uint)bVar10 * -2 + 0x7e] = afStack_3bc[(uint)bVar10 * -2 + 0x27];
      afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x7f] =
           afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28];
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_1c8;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_1c4;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_1c0;
      *pfVar7 = *pfVar7 * fVar3;
      *(float *)(param_1 + 0x20cd0) = *(float *)(param_1 + 0x20cd0) * fVar3;
      *(float *)(param_1 + 0x20cd4) = *(float *)(param_1 + 0x20cd4) * fVar3;
      fStack_64 = fVar3;
      pfStack_18 = (float *)FUN_0040cfa0();
      *(float *)(param_1 + 0x2508) = (float)pfStack_18 * fStack_4a4;
    }
  }
LAB_0051976f:
  if (0.0 < *(float *)(param_1 + 0x20cf0)) {
    if (*(float *)(param_1 + 0x20cf0) <= param_2) {
      *(uint *)(param_1 + 0x20cf0) = 0;
      fStack_4a8 = 1.0;
    }
    else {
      fStack_4a8 = param_2 / *(float *)(param_1 + 0x20cf0);
      *(float *)(param_1 + 0x20cf0) = *(float *)(param_1 + 0x20cf0) - param_2;
    }
    fStack_3a8 = *(float *)(param_1 + 0x20ce0) * fStack_4a8;
    pfStack_18 = (float *)(param_1 + 0x20ce0);
    pfVar7 = afStack_3bc + 0xb3;
    fStack_3a4 = *(float *)(param_1 + 0x20ce4) * fStack_4a8;
    fStack_3a0 = *(float *)(param_1 + 0x20ce8) * fStack_4a8;
    afStack_f0[0] = fStack_3a8;
    afStack_3bc[(uint)bVar10 * -2 + 0xb4] = afStack_3bc[(uint)bVar10 * -2 + 6];
    afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xb5] =
         afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    FUN_00408b40(param_1,pfVar7);
    fStack_138 = fStack_a8;
    afStack_3bc[(uint)bVar10 * -2 + 0xa2] = afStack_3bc[(uint)bVar10 * -2 + 0xc6];
    afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xa3] =
         afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 199];
    fStack_58 = 1.0 - fStack_4a8;
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x249c) + fStack_138;
    *(float *)(param_1 + 0x24a0) = *(float *)(param_1 + 0x24a0) + fStack_134;
    *(float *)(param_1 + 0x24a4) = *(float *)(param_1 + 0x24a4) + fStack_130;
    *pfStack_18 = *pfStack_18 * fStack_58;
    pfStack_18[1] = pfStack_18[1] * fStack_58;
    pfStack_18[2] = pfStack_18[2] * fStack_58;
    pfStack_18 = (float *)FUN_0040cfa0();
    *(float *)(param_1 + 0x2508) = (float)pfStack_18 * fStack_4a8;
  }
  iVar4 = FUN_004fc070();
  if ((*(int *)(iVar4 + 0x24) == 0x26) &&
     (iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x20b98),DAT_007dfe14), iVar4 != 0)) {
    pfStack_18 = (float *)FUN_004fc930();
    FUN_0040e6b0(iVar4,pfStack_18);
  }
  FUN_0042cd30();
  FUN_0051e380(param_1,param_2);
  if (iStack_70 != 0) {
    *(uint *)(param_1 + 0x20c74) = 0;
    *(uint *)(param_1 + 0x20c70) = *(uint *)(param_1 + 0x20c74);
    *(uint *)(param_1 + 0x20c6c) = *(uint *)(param_1 + 0x20c70);
  }
  if ((*(int *)(param_1 + 0x20ba4) == 0) && (*(int *)(param_1 + 0x20c20) == 0)) {
    if (iStack_44 == 0) goto LAB_005199e6;
    iVar4 = FUN_004fc070();
    iVar4 = *(int *)(iVar4 + 0x24);
    fStack_228 = *(float *)(param_1 + 0x249c) + *(float *)(param_1 + 0x250c);
    fStack_224 = *(float *)(param_1 + 0x24a0) + *(float *)(param_1 + 0x2510);
    fStack_220 = *(float *)(param_1 + 0x24a4) + *(float *)(param_1 + 0x2514);
    fStack_d8 = fStack_228;
    afStack_3bc[(uint)bVar10 * -2 + 0xba] = afStack_3bc[(uint)bVar10 * -2 + 0x66];
    afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xbb] =
         afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x67];
    *(uint *)(param_1 + 0x24a4) = 0;
    *(uint *)(param_1 + 0x24a0) = *(uint *)(param_1 + 0x24a4);
    *(float *)(param_1 + 0x249c) = *(float *)(param_1 + 0x24a0);
    *(uint *)(param_1 + 0x2514) = 0;
    *(uint *)(param_1 + 0x2510) = *(uint *)(param_1 + 0x2514);
    *(float *)(param_1 + 0x250c) = *(float *)(param_1 + 0x2510);
    if (iVar4 == 0x1a) {
      fStack_d0 = 0.0;
      fStack_d4 = 0.0;
      fStack_d8 = 0.0;
      fVar3 = *(float *)(param_1 + 0x251c) - param_2 * (float)_DAT_005cd1a7;
      *(uint *)(param_1 + 0x20c84) = 0x461c3f9a;
    }
    else {
      if (iVar4 == 0x1b) {
        fStack_d0 = 0.0;
        fStack_d4 = 0.0;
        fStack_d8 = 0.0;
      }
      fVar3 = *(float *)(param_1 + 0x251c) - param_2 * (float)_DAT_005cd1a7;
    }
    *(float *)(param_1 + 0x251c) = fVar3;
    iStack_50 = iVar4;
    FUN_00408b40(param_1,param_1 + 0x20c6c);
    fStack_27c = fStack_240;
    afStack_3bc[(uint)bVar10 * -2 + 0x51] = afStack_3bc[(uint)bVar10 * -2 + 0x60];
    afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x52] =
         afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x61];
    fStack_378 = *(float *)(param_1 + 0x2518) * param_2;
    pfVar7 = afStack_3bc + 0xb9;
    fStack_374 = *(float *)(param_1 + 0x251c) * param_2;
    fStack_370 = *(float *)(param_1 + 0x2520) * param_2;
    fStack_288 = fStack_378;
    afStack_3bc[(uint)bVar10 * -2 + 0x4e] = afStack_3bc[(uint)bVar10 * -2 + 0x12];
    afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x4f] =
         afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
    fStack_cc = fStack_288 + fStack_27c;
    fStack_c8 = fStack_284 + fStack_278;
    fStack_c4 = fStack_280 + fStack_274;
    fStack_18c = fStack_288 + fStack_27c;
    afStack_3bc[(uint)bVar10 * -2 + 0x8d] = afStack_3bc[(uint)bVar10 * -2 + 0xbd];
    afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x8e] =
         afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xbe];
    fStack_d8 = fStack_d8 + fStack_18c;
    fStack_d4 = fStack_d4 + fStack_188;
    fStack_d0 = fStack_d0 + fStack_184;
    *(uint *)(param_1 + 0x20d00) = *(uint *)(param_1 + 0x251c);
    FUN_0042c230(param_1,pfVar7);
    if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2504) + (float)_DAT_005cd1af) {
      *(uint *)(param_1 + 0x2500) = 1;
    }
    if ((iStack_50 == 0x1a) && (*(int *)(param_1 + 0x2500) != 0)) {
      FUN_00441ff0(PTR_DAT_005f1690,"Splat at %3.2f fps\n",
                   (double)*(float *)(param_1 + 0x251c));
      fVar3 = -*(float *)(param_1 + 0x20d00);
      if (fVar3 < (float)_DAT_005cd1b7) {
        if (iStack_50 == 0x1a) {
          uVar11 = 0x10000001b;
          goto LAB_0051b278;
        }
LAB_0051b287:
        (**(code **)(*(int *)(param_1 + 0x154) + 0x24))
                  (param_1,&DAT_02cfd900,fVar3 * _DAT_005cd1d7 + 1.0);
        goto LAB_0051b2ad;
      }
      FUN_0042abb0();
      fVar2 = (fVar3 + (float)_DAT_005cd1bf) * (float)_DAT_005cd1c7 * (float)_DAT_005cd1cf;
      fStack_490 = fVar2;
      if (0x42c80000 < (int)fVar2) {
        fStack_490 = 9999.0;
      }
      *(uint *)(param_1 + 0xcdcc) = 0;
      (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,auStack_494);
      if ((0.0 < *(float *)(param_1 + 0x2538)) && ((int)fVar2 < 0x42c80001)) {
        uVar11 = 0x10000001c;
LAB_0051b278:
        FUN_004fc0d0(param_1 + 0x158,uVar11);
        goto LAB_0051b287;
      }
      FUN_004fc0d0(param_1 + 0x158,0x1d,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"fall-?.wav");
      iVar4 = *(int *)(param_1 + 0x2500);
      fStack_498 = 0x3F000000;
    }
    else {
LAB_0051b2ad:
      iVar4 = *(int *)(param_1 + 0x2500);
      fStack_498 = 0x3F000000;
    }
    0x3F000000 = fStack_498;
    if (iVar4 == 0) {
      *(float *)(param_1 + 0x20c84) = *(float *)(param_1 + 0x20c84) + param_2;
      if (iStack_50 == 4) {
        fStack_498 = fStack_498 * (float)_DAT_005cd14f;
      }
      if ((fStack_498 < *(float *)(param_1 + 0x20c84)) ||
         (*(float *)(param_1 + 0x20d00) < (float)_DAT_005cd1bf)) {
        if (iStack_50 != 0x1a) {
          FUN_004fc0d0(param_1 + 0x158,0x1a,1);
        }
        *(uint *)(param_1 + 0x2500) = 0;
      }
      goto LAB_005199e6;
    }
  }
  else {
    pfStack_28 = (float *)(param_1 + 0x249c);
    FUN_00408b00(param_1,pfStack_28);
    fStack_2ac = fStack_294;
    afStack_3bc[(uint)bVar10 * -2 + 0x45] = afStack_3bc[(uint)bVar10 * -2 + 0x4b];
    afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x46] =
         afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x4c];
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_2ac;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_2a8;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_2a4;
    pfStack_28[2] = 0.0;
    pfStack_28[1] = pfStack_28[2];
    *pfStack_28 = pfStack_28[1];
  }
  *(uint *)(param_1 + 0x20c84) = 0;
LAB_005199e6:
  *(uint *)(param_1 + 0x20c74) = 0;
  *(uint *)(param_1 + 0x20c70) = *(uint *)(param_1 + 0x20c74);
  *(uint *)(param_1 + 0x20c6c) = *(uint *)(param_1 + 0x20c70);
  iVar4 = 0x01D2130C;
  if (iStack_3c != 0) {
    if ((*(int *)(param_1 + 0xcdf0) != 0) ||
       ((*(int *)(param_1 + 0xcde0) != 0 && (*(int *)(param_1 + 0x20bcc) == 0)))) {
      if (*(int *)(param_1 + 0x20bcc) == 0) {
        if ((*(int *)(param_1 + 0x25b0) == 0) ||
           (*(int *)(*(int *)(param_1 + 0x20a20) + 0x578) == 1)) {
          *(uint *)(param_1 + 0x20bcc) = 1;
        }
      }
      else {
        *(uint *)(param_1 + 0x20bcc) = 0;
        if (*(int *)(iVar4 + 0x26c) != 0) {
          *(uint *)(iVar4 + 0x26c) = 0;
          (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"flashlit.wav");
        }
      }
    }
    if (*(int *)(param_1 + 0xcdec) != 0) {
      iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x25b0),DAT_007e1a50);
      if (iVar4 == 0) {
        if (((*(int *)(param_1 + 0x20c24) == 0) ||
            (*(int *)(*(int *)(param_1 + 0x20c24) + 0x578) == 1)) &&
           (iVar4 = FUN_004dba80(param_1 + 0x206e8,"CLightActor"), iVar4 != 0)) {
          *(uint *)(param_1 + 0x20b64) = 8;
        }
      }
      else {
        *(uint *)(param_1 + 0x20b64) = 9;
      }
    }
    iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x25b0),DAT_007e1a50);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x23a0) != 0)) {
      *(float *)(param_1 + 0x20bd8) =
           *(float *)(param_1 + 0xce04) * _DAT_005cd17f * (float)_DAT_005cd14f * param_2 +
           *(float *)(param_1 + 0x20bd8);
      fStack_6c = (float)FUN_0051c0a0();
      pfStack_18 = (float *)fStack_6c;
      fStack_24 = (float)FUN_0051c0f0();
      if (*(float *)(param_1 + 0x20bd8) < fStack_6c) {
        *(float *)(param_1 + 0x20bd8) = fStack_6c;
      }
      pfStack_18 = (float *)fStack_24;
      if (fStack_24 < *(float *)(param_1 + 0x20bd8)) {
        *(float *)(param_1 + 0x20bd8) = fStack_24;
      }
    }
  }
  if (*(int *)(param_1 + 0x20a20) == 0) {
    *(uint *)(0x01D2130C + 0x26c) = 0;
  }
  else if (*(int *)(*(int *)(param_1 + 0x20a20) + 0x2f0) == 0) {
    *(uint *)(0x01D2130C + 0x26c) = 0;
  }
  if (iStack_40 != 0) {
    FUN_00524940(param_1,param_2);
  }
  if (*(int *)(param_1 + 0x20bcc) == 0) {
    fVar3 = *(float *)(param_1 + 0x20bd0) - param_2 / _DAT_005e34f0;
    *(float *)(param_1 + 0x20bd0) = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)(param_1 + 0x20bd0) = 0;
    }
  }
  else {
    fVar3 = param_2 / _DAT_005e34ec + *(float *)(param_1 + 0x20bd0);
    *(float *)(param_1 + 0x20bd0) = fVar3;
    if (1.0 < fVar3) {
      *(uint *)(param_1 + 0x20bd0) = 0x3f800000;
    }
  }
  fVar3 = *(float *)(param_1 + 0x20bf0) - param_2 / _DAT_005e34f4;
  *(float *)(param_1 + 0x20bf0) = fVar3;
  if (fVar3 <= 0.0) {
    *(uint *)(param_1 + 0x20bf0) = 0;
  }
  fVar3 = *(float *)(param_1 + 0x20c10) - param_2 / _DAT_005e34f4;
  *(float *)(param_1 + 0x20c10) = fVar3;
  if (fVar3 <= 0.0) {
    *(uint *)(param_1 + 0x20c10) = 0;
  }
  if (iStack_2c != 0) {
    FUN_00525930();
  }
  FUN_0051c1c0();
  iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x25b0),DAT_007e1a50);
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x20c24) != 0)) {
    FUN_0054dd10();
    FUN_0051f360(param_1,0);
    FUN_00523800();
    FUN_0051c1c0();
  }
  FUN_00524170(param_1,param_2,uStack_30);
  FUN_00526cf0();
  FUN_00433350(param_1,param_2);
  pfStack_18 = (float *)FUN_004fc350(param_1 + 0x158,0x11);
  if ((float)pfStack_18 <= 0.0) {
    FUN_004d3850();
  }
  else {
    pfStack_18 = (float *)FUN_004fc930();
    if ((1.0 < (float)pfStack_18) &&
       (iStack_20 = FUN_0040c840(*(uint *)(param_1 + 0x20b9c),DAT_007e17b4), iStack_20 != 0))
    {
      FUN_0051c100();
      pfVar7 = afStack_3bc + 0x1d;
      afStack_348[0] = (float)uStack_30c;
      afStack_3bc[(uint)bVar10 * -2 + 0x1e] = afStack_3bc[(uint)bVar10 * -2 + 0x2d];
      afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f] =
           afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2e];
      FUN_00408b80(param_1,pfVar7);
      pfVar7 = afStack_3bc + 0x20;
      fStack_2d0 = fStack_1d4;
      afStack_3bc[(uint)bVar10 * -2 + 0x3c] = afStack_3bc[(uint)bVar10 * -2 + 0x7b];
      afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x3d] =
           afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x7c];
      fStack_1bc = fStack_2d0 - fStack_3d8;
      fStack_1b8 = fStack_2cc - afStack_3d4[0];
      fStack_1b4 = fStack_2c8 - afStack_3d4[1];
      fStack_33c = fStack_2d0 - fStack_3d8;
      afStack_3bc[(uint)bVar10 * -2 + 0x21] = afStack_3bc[(uint)bVar10 * -2 + 0x81];
      afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22] =
           afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x82];
      uStack_338 = 0;
      FUN_00408b40(param_1,pfVar7);
      uStack_1ec = uStack_2dc;
      afStack_3bc[(uint)bVar10 * -2 + 0x75] = afStack_3bc[(uint)bVar10 * -2 + 0x39];
      afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x76] =
           afStack_3bc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x3a];
      if (0.0 < fStack_1e4) {
        FUN_0041ff20(iStack_20,&fStack_3d8,afStack_3bc + 0x20);
      }
    }
  }
  FUN_0051f360(param_1,0);
  FUN_00522b00(param_1,0,param_2);
  FUN_00522b00(param_1,1,param_2);
  FUN_005263c0(param_1,param_2);
  FUN_004dcdb0();
  FUN_00526dc0(param_1,param_2);
  iVar4 = FUN_0040c840(*(uint *)(param_1 + 0x25b0),DAT_007e1a50);
  if (iVar4 != 0) {
    *(uint *)(iVar4 + 0x23a0) = 1;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x25b0) + 0x154) + 0xc))
              (*(int *)(param_1 + 0x25b0),param_2);
  }
  if (iStack_2c == 0) {
    FUN_004d3210();
  }
  else {
    param_2 = *(float *)(param_1 + 0x20b7c) + param_2;
    *(float *)(param_1 + 0x20b7c) = param_2;
    if ((float)_DAT_005cd1df < param_2) {
      FUN_004d4900(param_1,1);
    }
  }
  if ((*(int *)(param_1 + 0x20c24) != 0) && (*(int *)(*(int *)(param_1 + 0x20c24) + 0xfc) != 0)) {
    *(uint *)(param_1 + 0xfc) = 1;
    return;
  }
  return;
}
