// Name: FUN_00563060
// Address: 00563060
// Address Range: [[00563060, 005656e9]]
// Convention: unknown
// Signature: void FUN_00563060(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00563060(int param_1,float param_2)

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
  float afStackY_12b4 [901];
  ulonglong uVar12;
  float fStack_470;
  float fStack_46c;
  uint *puStack_468;
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
  float afStack_404 [6];
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  uint local_3d4 [6];
  uint local_3bc;
  uint uStack_3b8;
  uint uStack_3b4;
  uint uStack_3b0;
  uint uStack_3ac;
  uint uStack_3a8;
  float fStack_3a4;
  float afStack_3a0 [4];
  float fStack_390;
  float afStack_38c [3];
  float fStack_380;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  uint uStack_368;
  uint uStack_35c;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  uint uStack_340;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  uint uStack_328;
  uint uStack_324;
  float fStack_320;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  uint uStack_2fc;
  float fStack_2f8;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float *pfStack_2d8;
  uint *apuStack_2d4 [2];
  float fStack_2cc;
  float afStack_2c8 [8];
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  uint uStack_290;
  float fStack_284;
  uint uStack_280;
  uint uStack_27c;
  uint uStack_278;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float afStack_224 [3];
  float afStack_218 [3];
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  uint uStack_1f4;
  float afStack_1e8 [3];
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  uint uStack_1d0;
  uint uStack_1c4;
  float fStack_1b8;
  uint uStack_1b4;
  float fStack_1b0;
  float afStack_1ac [3];
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float afStack_194 [3];
  uint uStack_188;
  float afStack_17c [3];
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  uint uStack_164;
  uint uStack_158;
  float fStack_14c;
  float fStack_140;
  float fStack_13c;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  uint uStack_110;
  uint uStack_104;
  uint uStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  uint uStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  int iStack_78;
  uint *puStack_74;
  int iStack_70;
  int iStack_6c;
  float fStack_68;
  uint *puStack_64;
  int iStack_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  uint *puStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint *puStack_30;
  int local_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  float *pfStack_1c;
  uint *puStack_18;
  
  bVar11 = 0;
  local_2c = FUN_0048e340(0x01C38BC0,"?DebugActionPending" + 1);
  if ((*(int *)(param_1 + 0x2698) != 0) && (*(float *)(param_1 + 0x2571c) < _DAT_005eb5cd)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x2698) + 0x2b0) + 0x24))();
    puVar6 = local_3d4;
    puVar9 = &local_3bc;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    if ((uint *)(param_1 + 0x25710) != &local_3bc) {
      *(uint *)(param_1 + 0x25710) = local_3bc;
      *(uint *)(param_1 + 0x25714) = uStack_3b8;
      *(uint *)(param_1 + 0x25718) = uStack_3b4;
    }
    if ((uint *)(param_1 + 0x2571c) != &uStack_3b0) {
      *(uint *)(param_1 + 0x2571c) = uStack_3b0;
      *(uint *)(param_1 + 0x25720) = uStack_3ac;
      *(uint *)(param_1 + 0x25724) = uStack_3a8;
    }
    fStack_29c = *(float *)(param_1 + 0x25710) + *(float *)(param_1 + 0x2571c);
    fStack_298 = *(float *)(param_1 + 0x25714) + *(float *)(param_1 + 0x25720);
    fStack_294 = *(float *)(param_1 + 0x25718) + *(float *)(param_1 + 0x25724);
    fStack_230 = fStack_29c;
    afStack_2c8[(uint)bVar11 * -2 + 0x27] = afStack_2c8[(uint)bVar11 * -2 + 0xc];
    afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28] =
         afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
    fStack_134 = fStack_230 * _DAT_005eb5d1;
    fStack_130 = fStack_22c * _DAT_005eb5d1;
    fStack_12c = fStack_228 * _DAT_005eb5d1;
    afStack_194[0] = fStack_230 * _DAT_005eb5d1;
    afStack_2c8[(uint)bVar11 * -2 + 0x4e] = afStack_2c8[(uint)bVar11 * -2 + 0x66];
    afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x4f] =
         afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x67];
    FUN_00408d70(*(uint *)(param_1 + 0x2698),afStack_2c8 + 0x4d);
    pfVar7 = afStack_3a0 + 5;
    afStack_38c[0] = (float)uStack_278;
    afStack_3a0[(uint)bVar11 * -2 + 6] = afStack_2c8[(uint)bVar11 * -2 + 0x15];
    afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
    FUN_00408de0(param_1,pfVar7);
    fStack_32c = fStack_23c;
    afStack_3a0[(uint)bVar11 * -2 + 0x1e] = afStack_2c8[(uint)bVar11 * -2 + 0x24];
    afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
         afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25];
    if ((float *)(param_1 + 0x25704) != afStack_3a0 + 0x1d) {
      *(float *)(param_1 + 0x25704) = fStack_32c;
      *(uint *)(param_1 + 0x25708) = uStack_328;
      *(uint *)(param_1 + 0x2570c) = uStack_324;
    }
  }
  FUN_0042a7a0(param_1,param_2);
  FUN_004bd460(0x01CB6900,param_2);
  fVar1 = *(float *)(param_1 + 0x10a60) - param_2;
  *(float *)(param_1 + 0x10a60) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x10a60) = 0;
  }
  fVar1 = *(float *)(param_1 + 0x256ac) - param_2;
  *(float *)(param_1 + 0x256ac) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0x256ac) = 0;
  }
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  FUN_00565f30();
  pfVar7 = afStack_2c8 + 0x38;
  afStack_1e8[0] = (float)uStack_290;
  afStack_2c8[(uint)bVar11 * -2 + 0x39] = afStack_2c8[(uint)bVar11 * -2 + 0xf];
  afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3a] =
       afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
  FUN_00408d70(param_1,pfVar7);
  uVar12 = CONCAT44(param_2,param_1);
  fStack_20c = fStack_320;
  afStack_2c8[(uint)bVar11 * -2 + 0x30] = afStack_3a0[(uint)bVar11 * -2 + 0x21];
  afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x31] =
       afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22];
  FUN_005656f0(uVar12);
  iStack_34 = 1;
  iStack_40 = 1;
  iStack_3c = 1;
  iStack_28 = 1;
  uStack_24 = 1;
  if (*(int *)(param_1 + 0x276c) != 0) {
    iStack_34 = 0;
    iStack_3c = 0;
    iStack_28 = 0;
    uStack_24 = 0;
    iStack_40 = 0;
    if (local_2c != 0) {
      FUN_00436710(PTR_DAT_00609ed0,"grabbedBy=%s\n",*(int *)(param_1 + 0x276c));
    }
  }
  if (*(int *)(param_1 + 0x2560c) != 0) {
    iStack_28 = 0;
    uStack_24 = 0;
    iStack_34 = 0;
    iStack_3c = 0;
    if (local_2c != 0) {
      FUN_00436710(PTR_DAT_00609ed0,"pushedObject=%s\n",*(uint *)(param_1 + 0x2560c));
    }
  }
  if ((*(int *)(param_1 + 0x25614) != 0) || (*(int *)(param_1 + 0x25694) != 0)) {
    iStack_40 = 0;
    iStack_3c = 0;
    iStack_28 = 0;
    uStack_24 = 0;
    iStack_34 = 0;
    if (local_2c != 0) {
      FUN_00436710(PTR_DAT_00609ed0,"ladder\n");
    }
  }
  if ((*(int *)(param_1 + 0x25608) != 0) || (*(int *)(param_1 + 0x256a4) == 4)) {
    iStack_28 = 0;
    uStack_24 = 0;
    iStack_34 = 0;
    if (local_2c != 0) {
      FUN_00436710(PTR_DAT_00609ed0,"pickup\n");
    }
  }
  iVar5 = param_1 + 0x2b4;
  puStack_18 = (uint *)FUN_005038a0(iVar5,0x24);
  if ((((0.0 < (float)puStack_18) ||
       (puStack_18 = (uint *)FUN_005038a0(iVar5,0x28), 0.0 < (float)puStack_18)) ||
      (puStack_18 = (uint *)FUN_005038a0(iVar5,0x29), 0.0 < (float)puStack_18)) ||
     (*(float *)(param_1 + 0x25a8) <= 0.0)) {
    iStack_3c = 0;
    iStack_28 = 0;
    uStack_24 = 0;
    iStack_34 = 0;
    if (local_2c != 0) {
      FUN_00436710(PTR_DAT_00609ed0,"hurt\n");
    }
  }
  iVar5 = param_1 + 0x2b4;
  puStack_18 = (uint *)FUN_005038a0(iVar5,0x1c);
  if (((0.0 < (float)puStack_18) ||
      (puStack_18 = (uint *)FUN_005038a0(iVar5,0x1d), 0.0 < (float)puStack_18)) ||
     ((puStack_18 = (uint *)FUN_005038a0(iVar5,0x1e), 0.0 < (float)puStack_18 ||
      ((*(int *)(param_1 + 0x256a4) == 5 || (*(int *)(param_1 + 0x25604) != 0)))))) {
    uStack_24 = 0;
    iStack_34 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      FUN_00436710(PTR_DAT_00609ed0,"door\n");
    }
  }
  puStack_18 = (uint *)FUN_005038a0(param_1 + 0x2b4,0x2e);
  if (0.0 < (float)puStack_18) {
    iStack_3c = 0;
    iStack_28 = 0;
    iStack_40 = 0;
    uStack_24 = 0;
    iStack_34 = 0;
    if (local_2c != 0) {
      FUN_00436710(PTR_DAT_00609ed0,"sitting\n");
    }
  }
  if (*(int *)(param_1 + 0x256a4) == 1) {
    uStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      FUN_00436710(PTR_DAT_00609ed0,"stashinventory\n");
    }
  }
  if (*(int *)(param_1 + 0x256a4) == 2) {
    uStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      FUN_00436710(PTR_DAT_00609ed0,"placeobject\n");
    }
  }
  if (*(int *)(param_1 + 0x256a4) == 6) {
    uStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      FUN_00436710(PTR_DAT_00609ed0,"putdownobject\n");
    }
  }
  if (*(int *)(param_1 + 0x256a4) == 3) {
    uStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      FUN_00436710(PTR_DAT_00609ed0,"toss\n");
    }
  }
  if (*(int *)(param_1 + 0x256a4) == 7) {
    uStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      FUN_00436710(PTR_DAT_00609ed0,"attackmelee\n");
    }
  }
  if (*(int *)(param_1 + 0x276c) == 0) {
    if (*(int *)(param_1 + 0xdc) != 0) {
      iStack_40 = 1;
    }
    if (*(float *)(param_1 + 0x24) != *(float *)(param_1 + 0x2574)) {
      iStack_40 = 1;
    }
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2);
  iVar5 = FUN_005035c0();
  if ((*(int *)(iVar5 + 0x24) == 4) || (iVar5 = FUN_005035c0(), *(int *)(iVar5 + 0x24) == 5)) {
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x2508) * (float)_DAT_005eb5d5;
  }
  if (*(int *)(param_1 + 0x25618) == 0) {
    fVar1 = *(float *)(param_1 + 0x256b0) - param_2 * (float)_DAT_005eb5d5;
    *(float *)(param_1 + 0x256b0) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x256b0) = 0;
    }
  }
  else {
    fVar1 = param_2 * (float)_DAT_005eb5d5 + *(float *)(param_1 + 0x256b0);
    *(float *)(param_1 + 0x256b0) = fVar1;
    if (1.0 < fVar1) {
      *(uint *)(param_1 + 0x256b0) = 0x3f800000;
    }
  }
  iVar5 = *(int *)(param_1 + 0x25614);
  iStack_70 = 1;
  if (iVar5 == 0) {
    if (*(int *)(param_1 + 0x25694) == 0) {
      iVar8 = *(int *)(param_1 + 0x25618);
      if (iVar8 == 0) {
        if (*(int *)(param_1 + 0x276c) == 0) {
          if (*(int *)(param_1 + 0x2560c) == 0) {
            iVar5 = FUN_004287f0(param_1,param_2);
            if (iVar5 == 0) {
              if (iStack_34 != 0) {
                iVar5 = FUN_005035c0();
                switch(*(uint *)(iVar5 + 0x24)) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if (*(int *)(param_1 + 0x2570) != 0) {
                    iVar8 = 0;
                    iVar5 = FUN_005035c0();
                    iVar5 = *(int *)(iVar5 + 0x24);
                    if (*(int *)(param_1 + 0x10a68) == 0) {
                      if (*(int *)(param_1 + 0x10a6c) == 0) {
                        if ((float)_DAT_005eb5dd <= *(float *)(param_1 + 0x10a8c)) {
                          if (_DAT_005eb5e5 < (double)*(float *)(param_1 + 0x10a8c)) {
                            iVar8 = 5;
                          }
                        }
                        else {
                          iVar8 = 4;
                        }
                      }
                      else {
                        iVar8 = 2;
                      }
                    }
                    else if (*(int *)(param_1 + 0x10a70) == 0) {
                      iVar8 = 1;
                    }
                    else {
                      iVar8 = 3;
                    }
                    iStack_78 = param_1 + 0x2b4;
                    puStack_18 = (uint *)FUN_005038a0(iStack_78,1);
                    pfStack_1c = (float *)((float)puStack_18 * _DAT_005fc1f0);
                    puStack_18 = (uint *)FUN_005038a0(iStack_78,3);
                    pfStack_1c = (float *)((float)puStack_18 * _DAT_005fc1f4 + (float)pfStack_1c);
                    puStack_18 = (uint *)FUN_005038a0(iStack_78,2);
                    fVar2 = (float)puStack_18 * _DAT_005fc1f8;
                    fVar1 = *(float *)(param_1 + 0x10a90) * *(float *)(param_1 + 0x2598);
                    *(float *)(param_1 + 0x2578) = fVar1;
                    *(float *)(param_1 + 0x256bc) = *(float *)(param_1 + 0x256bc) - fVar1;
                    *(float *)(param_1 + 0x25658) = *(float *)(param_1 + 0x25658) - fVar1;
                    *(float *)(param_1 + 0x25678) =
                         *(float *)(param_1 + 0x25678) - *(float *)(param_1 + 0x2578);
                    *(float *)(param_1 + 0x25660) =
                         *(float *)(param_1 + 0x25660) - *(float *)(param_1 + 0x2578);
                    *(float *)(param_1 + 0x25680) =
                         *(float *)(param_1 + 0x25680) - *(float *)(param_1 + 0x2578);
                    *(float *)(param_1 + 0x257c) =
                         *(float *)(param_1 + 0x10a8c) * param_2 * (fVar2 + (float)pfStack_1c) +
                         *(float *)(param_1 + 0x257c);
                    if ((*(int *)(param_1 + 0x10a84) != 0) && (*(int *)(param_1 + 0x2d04) != 0xe)) {
                      switch(iVar5) {
                      case 0:
                      case 1:
                      case 2:
                      case 4:
                      case 5:
                        iVar8 = 0xb;
                        break;
                      case 3:
                        iVar8 = 7;
                        break;
                      default:
                        goto switchD_00564db7_default;
                      }
                      *(uint *)(param_1 + 0x2570) = 0;
                    }
switchD_00564db7_default:
                    if (iVar8 != iVar5) {
                      FUN_00503620(param_1 + 0x2b4,iVar8,1);
                    }
                    if (*(int *)(param_1 + 0x10a78) != 0) {
                      FUN_004cfc80();
                      iStack_70 = 0;
                      break;
                    }
                  }
                  iStack_70 = 0;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                  *(uint *)(param_1 + 0x2570) = 0;
                }
              }
            }
            else {
              uVar3 = *(uint *)(param_1 + 0x27ac);
              if (uVar3 < 2) {
                if (uVar3 == 1) {
                  uVar12 = 0x100000001;
                }
                else {
                  uVar12 = 0x100000000;
                }
LAB_00564b9f:
                FUN_00503620(param_1 + 0x2b4,uVar12);
              }
              else {
                if (uVar3 < 3) {
                  uVar12 = 0x100000003;
                  goto LAB_00564b9f;
                }
                if (uVar3 != 3) {
                  uVar12 = 0x100000000;
                  goto LAB_00564b9f;
                }
                FUN_00503620(param_1 + 0x2b4,0,1);
                FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
              }
              *(uint *)(param_1 + 0x2510) = 0;
              *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
              *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
            }
          }
          else {
            iStack_20 = iVar5;
            if (*(int *)(param_1 + 0x10a74) != 0) {
              (**(code **)(*(int *)(*(int *)(param_1 + 0x2560c) + 0x2b0) + 0x24))();
              pfVar7 = afStack_404;
              pfVar10 = &fStack_3ec;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *pfVar10 = *pfVar7;
                pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
                pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
              }
              fStack_350 = fStack_3ec + fStack_3e0;
              fStack_34c = fStack_3e8 + fStack_3dc;
              fStack_348 = fStack_3e4 + fStack_3d8;
              fStack_254 = fStack_3ec + fStack_3e0;
              afStack_2c8[(uint)bVar11 * -2 + 0x1e] = afStack_3a0[(uint)bVar11 * -2 + 0x15];
              afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
                   afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
              fStack_8c = fStack_254 * _DAT_005eb5d1;
              fStack_88 = fStack_250 * _DAT_005eb5d1;
              fStack_84 = fStack_24c * _DAT_005eb5d1;
              afStack_17c[0] = fStack_254 * _DAT_005eb5d1;
              afStack_2c8[(uint)bVar11 * -2 + 0x54] = afStack_ac[(uint)bVar11 * -2 + 9];
              afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x55] =
                   afStack_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
              FUN_00408d70(*(uint *)(param_1 + 0x2560c),afStack_2c8 + 0x53);
              pfVar7 = afStack_2c8 + 0x29;
              afStack_224[0] = (float)uStack_11c;
              afStack_2c8[(uint)bVar11 * -2 + 0x2a] = afStack_2c8[(uint)bVar11 * -2 + 0x6c];
              afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b] =
                   afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x6d];
              FUN_00408de0(param_1,pfVar7);
              uStack_c8 = uStack_110;
              afStack_2c8[(uint)bVar11 * -2 + 0x81] = afStack_2c8[(uint)bVar11 * -2 + 0x6f];
              afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x82] =
                   afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x70];
              FUN_005838f0();
              uStack_1d0 = uStack_104;
              afStack_2c8[(uint)bVar11 * -2 + 0x3f] = afStack_2c8[(uint)bVar11 * -2 + 0x72];
              afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x40] =
                   afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x73];
              puStack_468 = (uint *)FUN_0040d0c0();
              puStack_18 = puStack_468;
              fStack_1a0 = fStack_3e0 - fStack_3ec;
              fStack_19c = fStack_3dc - fStack_3e8;
              fStack_198 = fStack_3d8 - fStack_3e4;
              fStack_260 = fStack_3e0 - fStack_3ec;
              afStack_2c8[(uint)bVar11 * -2 + 0x1b] = afStack_2c8[(uint)bVar11 * -2 + 0x4b];
              afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c] =
                   afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x4c];
              fStack_d4 = fStack_260 * _DAT_005eb5d1;
              fStack_d0 = fStack_25c * _DAT_005eb5d1;
              fStack_cc = fStack_258 * _DAT_005eb5d1;
              fStack_1b8 = fStack_260 * _DAT_005eb5d1;
              afStack_2c8[(uint)bVar11 * -2 + 0x45] = afStack_2c8[(uint)bVar11 * -2 + 0x7e];
              afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x46] =
                   afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x7f];
              uStack_1b4 = 0;
              if ((((fStack_c0 - SQRT(fStack_1b0 * fStack_1b0 + fStack_1b8 * fStack_1b8) <
                     (float)_DAT_005eb5ed) && (1.0 < fStack_c4)) &&
                  (fStack_c4 < (float)_DAT_005eb5f5)) &&
                 (ABS((float)puStack_468) < (float)_DAT_005eb5fd)) {
                puStack_50 = (uint *)(param_2 * _DAT_005eb605);
                if ((float)puStack_468 < -(float)puStack_50) {
                  puStack_468 = (uint *)-(float)puStack_50;
                }
                if ((float)puStack_50 < (float)puStack_468) {
                  puStack_468 = puStack_50;
                }
                *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + (float)puStack_468;
                FUN_00429d60(param_1,param_1 + 0x30);
                goto switchD_00564c2e_caseD_6;
              }
            }
            if (iStack_20 == 0) {
              FUN_00503620(param_1 + 0x2b4,0,1);
              FUN_004cf830();
            }
          }
        }
        else {
          if (*(int *)(param_1 + 0x2770) == 0) {
            FUN_00408de0(param_1,*(int *)(param_1 + 0x276c) + 0x20);
            uStack_98 = uStack_368;
            afStack_ac[(uint)bVar11 * -2 + 6] = afStack_3a0[(uint)bVar11 * -2 + 0xf];
            afStack_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
            FUN_005838f0();
            uStack_1c4 = uStack_188;
            afStack_2c8[(uint)bVar11 * -2 + 0x42] = afStack_2c8[(uint)bVar11 * -2 + 0x51];
            afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x43] =
                 afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x52];
            puStack_18 = (uint *)FUN_0040d0c0();
            puStack_30 = puStack_18;
            if ((float)puStack_18 < _DAT_005eb609) {
              puStack_30 = (uint *)((float)puStack_18 + _DAT_005eb605);
            }
            if (_DAT_005eb60d < (float)puStack_30) {
              puStack_30 = (uint *)((float)puStack_30 + _DAT_005eb611);
            }
            puStack_64 = (uint *)(param_2 * _DAT_005eb605);
            puStack_74 = (uint *)-(float)puStack_64;
            if ((float)puStack_30 < (float)puStack_74) {
              puStack_30 = puStack_74;
            }
            if ((float)puStack_64 < (float)puStack_30) {
              puStack_30 = puStack_64;
            }
            *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + (float)puStack_30;
            FUN_00429d60(param_1,param_1 + 0x30);
          }
          iStack_44 = *(int *)(param_1 + 0x276c);
          pfStack_1c = *(float **)(iStack_44 + 0x2b0);
          iStack_54 = param_1 + 0x2b4;
          FUN_00546a90(iStack_54,0);
          pfVar7 = pfStack_1c;
          iVar5 = iStack_44;
          uVar12 = CONCAT44(afStack_2c8 + 0x2c,param_1);
          afStack_218[0] = (float)uStack_35c;
          afStack_2c8[(uint)bVar11 * -2 + 0x2d] = afStack_3a0[(uint)bVar11 * -2 + 0x12];
          afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e] =
               afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
          iVar5 = (*(code *)pfVar7[0x46])(iVar5,uVar12);
          if (iVar5 == 0) {
            *(uint *)(param_1 + 0x276c) = 0;
          }
          else if (*(int *)(param_1 + 0x276c) != 0) {
            fVar1 = *(float *)(param_1 + 0x25740) + param_2;
            *(float *)(param_1 + 0x25740) = fVar1;
            if ((_DAT_005fc1fc <= fVar1) && (*(int *)(param_1 + 0x2770) != 1)) {
              pfStack_1c = (float *)FUN_005038a0(iStack_54,0x22);
              puStack_18 = (uint *)FUN_005038a0(iStack_54,0x23);
              if ((float)puStack_18 + (float)pfStack_1c <= 0.0) {
                (**(code **)(*(int *)(param_1 + 0x2b0) + 0xf8))();
              }
              else if (*(int *)(param_1 + 0x10a74) != 0) {
                FUN_00503620(iStack_54,0x23,1);
                *(uint *)(param_1 + 0x10a74) = 0;
              }
            }
            goto switchD_00564c2e_caseD_6;
          }
          FUN_00503620(param_1 + 0x2b4,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar8 + 0x2b0) + 0xa0))(iVar8,&iStack_424);
        if ((iStack_424 == 0) || (param_1 != iStack_420)) {
          FUN_004cfad0();
        }
        else {
          puVar6 = (uint *)(*(int *)(iStack_420 + 0x25618) + 0x34 + (uint)bVar11 * -8);
          pfStack_2d8 = *(float **)(*(int *)(iStack_420 + 0x25618) + 0x30);
          apuStack_2d4[(uint)bVar11 * -2] = (uint *)*puVar6;
          apuStack_2d4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               (uint *)puVar6[(uint)bVar11 * -2 + 1];
          fStack_4c = *(float *)(iStack_420 + 0x10a90) * _DAT_005eb605 * (float)_DAT_005eb615 *
                      param_2;
          if (fStack_4c < fStack_410) {
            fStack_4c = fStack_410;
          }
          if (fStack_414 < fStack_4c) {
            fStack_4c = fStack_414;
          }
          apuStack_2d4[0] = (uint *)FUN_0040d0c0();
          fStack_48 = *(float *)(param_1 + 0x10a94) * _DAT_005eb605 * (float)_DAT_005eb615 * param_2
          ;
          if (fStack_48 < fStack_408) {
            fStack_48 = fStack_408;
          }
          if (fStack_40c < fStack_48) {
            fStack_48 = fStack_40c;
          }
          puStack_18 = apuStack_2d4[0];
          pfStack_2d8 = (float *)FUN_0040d0c0();
          pfStack_1c = pfStack_2d8;
          iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0x25618) + 0x2b0) + 0xa8))
                            (*(int *)(param_1 + 0x25618),&pfStack_2d8,param_1 + 0x10a68);
          if (iVar5 == 0) {
            FUN_00503620(param_1 + 0x2b4,0,1);
            FUN_004cfad0();
          }
          else {
            puVar6 = (uint *)FUN_0040d0c0();
            if ((float)_DAT_005eb5dd <= (float)puVar6) {
              if ((double)(float)puVar6 <= _DAT_005eb5e5) {
                uVar12 = 0x100000000;
              }
              else {
                uVar12 = 0x100000004;
              }
            }
            else {
              uVar12 = 0x100000005;
            }
            puStack_18 = puVar6;
            FUN_00503620(param_1 + 0x2b4,uVar12);
            pfVar7 = (float *)(param_1 + 0x34 + (uint)bVar11 * -8);
            fStack_140 = *(float *)(param_1 + 0x30);
            afStack_2c8[(uint)bVar11 * -2 + 99] = *pfVar7;
            afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 100] = pfVar7[(uint)bVar11 * -2 + 1]
            ;
            fStack_13c = (float)puVar6 * *(float *)(param_1 + 0x256b0) + fStack_13c;
            FUN_00429d60(param_1,afStack_2c8 + 0x62);
            fStack_b4 = fStack_41c + (float)_DAT_005eb61d;
            fStack_bc = 0.0;
            uStack_b8 = 0;
            pfStack_1c = (float *)fStack_b4;
            FUN_00408d70(*(uint *)(param_1 + 0x25618),afStack_2c8 + 0x83);
            fStack_338 = fStack_380;
            afStack_3a0[(uint)bVar11 * -2 + 0x1b] = afStack_3a0[(uint)bVar11 * -2 + 9];
            afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c] =
                 afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
            pfStack_1c = (float *)(param_1 + 0x256b0);
            fStack_b0 = fStack_338 - *(float *)(param_1 + 0x20);
            afStack_ac[0] = fStack_334 - *(float *)(param_1 + 0x24);
            pfVar7 = afStack_2c8 + 5;
            afStack_ac[1] = fStack_330 - *(float *)(param_1 + 0x28);
            afStack_2c8[5] = fStack_b0;
            afStack_2c8[(uint)bVar11 * -2 + 6] = afStack_ac[(uint)bVar11 * -2];
            afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            FUN_00408d30(param_1,pfVar7);
            fStack_1dc = fStack_200;
            afStack_2c8[(uint)bVar11 * -2 + 0x3c] = afStack_2c8[(uint)bVar11 * -2 + 0x33];
            afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3d] =
                 afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x34];
            fStack_170 = fStack_1dc * *pfStack_1c;
            fStack_16c = fStack_1d8 * *pfStack_1c;
            fStack_168 = fStack_1d4 * *pfStack_1c;
            fStack_284 = fStack_1dc * *pfStack_1c;
            afStack_2c8[(uint)bVar11 * -2 + 0x12] = afStack_2c8[(uint)bVar11 * -2 + 0x57];
            afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
                 afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x58];
            if ((float *)(param_1 + 0x2508) != afStack_2c8 + 0x11) {
              *(float *)(param_1 + 0x2508) = fStack_284;
              *(uint *)(param_1 + 0x250c) = uStack_280;
              *(uint *)(param_1 + 0x2510) = uStack_27c;
            }
            *(uint *)(param_1 + 0x250c) = 0;
          }
        }
      }
    }
    else {
      puStack_18 = (uint *)FUN_005038a0(param_1 + 0x2b4,0x2b);
      if (0.0 < (float)puStack_18) {
        if (*(float *)(param_1 + 0x24) < *(float *)(*(int *)(param_1 + 0x25694) + 0x24) + 1.0) {
          FUN_00503620(param_1 + 0x2b4,0,1);
        }
      }
      else {
        *(uint *)(param_1 + 0x25694) = 0;
      }
      if (0.0 < *(float *)(param_1 + 0x258d0)) {
        if (*(float *)(param_1 + 0x258d0) <= param_2) {
          *(uint *)(param_1 + 0x258d0) = 0;
          fStack_46c = 1.0;
        }
        else {
          fStack_46c = param_2 / *(float *)(param_1 + 0x258d0);
          *(float *)(param_1 + 0x258d0) = *(float *)(param_1 + 0x258d0) - param_2;
        }
        pfVar7 = (float *)(param_1 + 0x258c0);
        fVar1 = 1.0 - fStack_46c;
        fStack_248 = *pfVar7 * fStack_46c;
        fStack_244 = *(float *)(param_1 + 0x258c4) * fStack_46c;
        fStack_240 = *(float *)(param_1 + 0x258c8) * fStack_46c;
        fStack_2cc = *pfVar7 * fStack_46c;
        afStack_2c8[(uint)bVar11 * -2] = afStack_2c8[(uint)bVar11 * -2 + 0x21];
        afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22];
        *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_2cc;
        *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + afStack_2c8[0];
        *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + afStack_2c8[1];
        *pfVar7 = *pfVar7 * fVar1;
        *(float *)(param_1 + 0x258c4) = *(float *)(param_1 + 0x258c4) * fVar1;
        *(float *)(param_1 + 0x258c8) = *(float *)(param_1 + 0x258c8) * fVar1;
        fStack_58 = fVar1;
        puStack_18 = (uint *)FUN_0040d0c0();
        *(float *)(param_1 + 0x2578) = (float)puStack_18 * fStack_46c;
      }
      puStack_18 = (uint *)
                   (**(code **)(*(int *)(param_1 + 0x2b0) + 0x48))
                             (param_1,*(uint *)(param_1 + 0x3430),0);
      *(uint **)(param_1 + 0x2574) = puStack_18;
    }
  }
  else {
    puStack_18 = (uint *)FUN_005038a0(param_1 + 0x2b4,0x2a);
    if (0.0 < (float)puStack_18) {
      FUN_00408d70(*(uint *)(param_1 + 0x25614),*(int *)(param_1 + 0x25614) + 0x430);
      uStack_2fc = uStack_1f4;
      afStack_3a0[(uint)bVar11 * -2 + 0x2a] = afStack_2c8[(uint)bVar11 * -2 + 0x36];
      afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b] =
           afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x37];
      if (fStack_2f8 + (float)_DAT_005eb625 < *(float *)(param_1 + 0x24)) {
        FUN_00503620(param_1 + 0x2b4,0,1);
      }
    }
    else {
      *(uint *)(param_1 + 0x25614) = 0;
    }
    if (0.0 < *(float *)(param_1 + 0x258d0)) {
      if (*(float *)(param_1 + 0x258d0) <= param_2) {
        *(uint *)(param_1 + 0x258d0) = 0;
        fStack_470 = 1.0;
      }
      else {
        fStack_470 = param_2 / *(float *)(param_1 + 0x258d0);
        *(float *)(param_1 + 0x258d0) = *(float *)(param_1 + 0x258d0) - param_2;
      }
      pfVar7 = (float *)(param_1 + 0x258c0);
      fVar1 = 1.0 - fStack_470;
      fStack_3a4 = *pfVar7 * fStack_470;
      afStack_3a0[0] = *(float *)(param_1 + 0x258c4) * fStack_470;
      afStack_3a0[1] = *(float *)(param_1 + 0x258c8) * fStack_470;
      fStack_2f0 = *pfVar7 * fStack_470;
      afStack_3a0[(uint)bVar11 * -2 + 0x2d] = afStack_3a0[(uint)bVar11 * -2];
      afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e] =
           afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_2f0;
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_2ec;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_2e8;
      *pfVar7 = *pfVar7 * fVar1;
      *(float *)(param_1 + 0x258c4) = *(float *)(param_1 + 0x258c4) * fVar1;
      *(float *)(param_1 + 0x258c8) = *(float *)(param_1 + 0x258c8) * fVar1;
      fStack_5c = fVar1;
      puStack_18 = (uint *)FUN_0040d0c0();
      *(float *)(param_1 + 0x2578) = (float)puStack_18 * fStack_470;
    }
  }
switchD_00564c2e_caseD_6:
  iVar5 = FUN_005035c0();
  if ((*(int *)(iVar5 + 0x24) == 0x1b) &&
     (iVar5 = FUN_0040c8f0(*(uint *)(param_1 + 0x25608),DAT_007bc3e0), iVar5 != 0)) {
    puStack_18 = (uint *)FUN_00503e60();
    FUN_0040e600(iVar5,puStack_18);
  }
  FUN_00424470();
  FUN_00567530(param_1,param_2);
  if (iStack_70 != 0) {
    *(uint *)(param_1 + 0x256ec) = 0;
    *(uint *)(param_1 + 0x256e8) = *(uint *)(param_1 + 0x256ec);
    *(uint *)(param_1 + 0x256e4) = *(uint *)(param_1 + 0x256e8);
  }
  if ((*(int *)(param_1 + 0x25614) == 0) && (*(int *)(param_1 + 0x25694) == 0)) {
    if (iStack_40 == 0) goto LAB_005639ef;
    iStack_60 = param_1 + 0x2b4;
    iVar5 = FUN_005035c0();
    fVar1 = 0x41900000 * param_2;
    iVar5 = *(int *)(iVar5 + 0x24);
    afStack_3a0[2] = *(float *)(param_1 + 0x2508) + *(float *)(param_1 + 0x257c);
    afStack_3a0[3] = *(float *)(param_1 + 0x250c) + *(float *)(param_1 + 0x2580);
    fStack_390 = *(float *)(param_1 + 0x2510) + *(float *)(param_1 + 0x2584);
    afStack_2c8[2] = afStack_3a0[2];
    afStack_2c8[(uint)bVar11 * -2 + 3] = afStack_3a0[(uint)bVar11 * -2 + 3];
    afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(float *)(param_1 + 0x2508) = *(float *)(param_1 + 0x250c);
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(float *)(param_1 + 0x257c) = *(float *)(param_1 + 0x2580);
    fStack_68 = fVar1;
    iStack_38 = iVar5;
    if (iVar5 == 7) {
      afStack_2c8[2] = 0.0;
      afStack_2c8[3] = 0.0;
      *(float *)(param_1 + 0x25700) = 0x41900000;
      *(uint *)(param_1 + 0x256fc) = 0;
      afStack_2c8[4] = fVar1;
    }
    else {
      if (iVar5 == 8) {
        fVar2 = (float)_DAT_005eb62d;
        *(float *)(param_1 + 0x25700) = 0x41900000;
        fVar2 = *(float *)(param_1 + 0x258c) - param_2 * fVar2;
        *(uint *)(param_1 + 0x256fc) = 0;
        afStack_2c8[4] = fVar1;
        goto LAB_00564f88;
      }
      if (iVar5 == 9) {
        fVar2 = (float)_DAT_005eb62d;
        afStack_2c8[2] = 0.0;
        afStack_2c8[3] = 0.0;
        fVar1 = 0x3F000000 * 0x41900000;
        afStack_2c8[4] = *(float *)(param_1 + 0x25700) * param_2;
        *(uint *)(param_1 + 0x256fc) = 0;
        *(float *)(param_1 + 0x25700) = *(float *)(param_1 + 0x25700) - fVar1 * param_2;
        *(float *)(param_1 + 0x258c) = *(float *)(param_1 + 0x258c) - param_2 * fVar2;
        if (*(float *)(param_1 + 0x25700) < 0.0) {
          *(uint *)(param_1 + 0x25700) = 0;
          FUN_00503620(iStack_60,0xf,1);
        }
      }
      else if (iVar5 == 10) {
        afStack_2c8[3] = 0.0;
        afStack_2c8[2] = 0.0;
        afStack_2c8[4] = fVar1;
      }
      else if (iVar5 == 0xb) {
        *(uint *)(param_1 + 0x256fc) = 0;
        *(float *)(param_1 + 0x25700) = 0x41200000;
      }
      else if (iVar5 == 0xc) {
        afStack_2c8[4] = 0x41200000 * param_2;
        fVar1 = (float)_DAT_005eb62d;
        *(float *)(param_1 + 0x25700) = 0x41200000;
        fVar2 = *(float *)(param_1 + 0x258c) - param_2 * fVar1;
        *(uint *)(param_1 + 0x256fc) = 0;
LAB_00564f88:
        afStack_2c8[3] = 0.0;
        afStack_2c8[2] = 0.0;
LAB_00564f8a:
        *(float *)(param_1 + 0x258c) = fVar2;
      }
      else if (iVar5 == 0xd) {
        fVar2 = (float)_DAT_005eb62d;
        afStack_2c8[2] = 0.0;
        afStack_2c8[3] = 0.0;
        fVar1 = 0x3F000000 * 0x41200000;
        afStack_2c8[4] = *(float *)(param_1 + 0x25700) * param_2;
        *(uint *)(param_1 + 0x256fc) = 0;
        *(float *)(param_1 + 0x25700) = *(float *)(param_1 + 0x25700) - fVar1 * param_2;
        *(float *)(param_1 + 0x258c) = *(float *)(param_1 + 0x258c) - param_2 * fVar2;
        if (*(float *)(param_1 + 0x25700) < 0.0) {
          *(uint *)(param_1 + 0x25700) = 0;
          FUN_00503620(iStack_60,0xf,1);
        }
      }
      else {
        if (iVar5 != 0xe) {
          if (iVar5 == 0xf) {
            afStack_2c8[4] = 0.0;
            fVar2 = *(float *)(param_1 + 0x258c) - param_2 * (float)_DAT_005eb62d;
            *(uint *)(param_1 + 0x256fc) = 0x461c3f9a;
            goto LAB_00564f88;
          }
          if (iVar5 == 0x10) {
            afStack_2c8[4] = 0.0;
            afStack_2c8[3] = 0.0;
            afStack_2c8[2] = 0.0;
            fVar2 = *(float *)(param_1 + 0x258c) - param_2 * (float)_DAT_005eb62d;
          }
          else {
            fVar2 = *(float *)(param_1 + 0x258c) - param_2 * (float)_DAT_005eb62d;
          }
          goto LAB_00564f8a;
        }
        afStack_2c8[3] = 0.0;
      }
    }
    FUN_00408d30(param_1,param_1 + 0x256e4);
    fStack_2a8 = fStack_14c;
    afStack_2c8[(uint)bVar11 * -2 + 9] = afStack_2c8[(uint)bVar11 * -2 + 0x60];
    afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x61];
    fStack_314 = *(float *)(param_1 + 0x2588) * param_2;
    pfVar7 = afStack_2c8 + 2;
    fStack_310 = *(float *)(param_1 + 0x258c) * param_2;
    fStack_30c = *(float *)(param_1 + 0x2590) * param_2;
    fStack_374 = fStack_314;
    afStack_3a0[(uint)bVar11 * -2 + 0xc] = afStack_3a0[(uint)bVar11 * -2 + 0x24];
    afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
         afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25];
    fStack_128 = fStack_374 + fStack_2a8;
    fStack_124 = fStack_370 + fStack_2a4;
    fStack_120 = fStack_36c + fStack_2a0;
    fStack_ec = fStack_374 + fStack_2a8;
    afStack_2c8[(uint)bVar11 * -2 + 0x78] = afStack_2c8[(uint)bVar11 * -2 + 0x69];
    afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x79] =
         afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x6a];
    afStack_2c8[2] = afStack_2c8[2] + fStack_ec;
    afStack_2c8[3] = afStack_2c8[3] + fStack_e8;
    afStack_2c8[4] = afStack_2c8[4] + fStack_e4;
    *(uint *)(param_1 + 0x258d8) = *(uint *)(param_1 + 0x258c);
    FUN_00423a60(param_1,pfVar7);
    if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x2574) + (float)_DAT_005eb635) {
      *(uint *)(param_1 + 0x2570) = 1;
    }
    if (((iStack_38 == 0xf) || (iStack_38 == 9)) || (iStack_38 == 0xd)) {
      if (*(int *)(param_1 + 0x2570) != 0) {
        FUN_00436710(PTR_DAT_00609ed0,"Splat at %3.2f fps\n",
                     (double)*(float *)(param_1 + 0x258c));
        fVar1 = -*(float *)(param_1 + 0x258d8);
        if (fVar1 < (float)_DAT_005eb63d) {
          if (iStack_38 == 0xd) {
            uVar12 = 0x10000000e;
            goto LAB_0056514e;
          }
          if (iStack_38 == 9) {
            uVar12 = 0x10000000a;
            goto LAB_0056514e;
          }
          if (iStack_38 == 0xf) {
            uVar12 = 0x100000010;
            goto LAB_0056514e;
          }
        }
        else {
          FUN_004222d0();
          fVar2 = (fVar1 + (float)_DAT_005eb645) * (float)_DAT_005eb64d * (float)_DAT_005eb655;
          fStack_45c = fVar2;
          if (0x42c80000 < (int)fVar2) {
            fStack_45c = 9999.0;
          }
          *(uint *)(param_1 + 0x10a60) = 0;
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x110))(param_1,auStack_460);
          if ((*(float *)(param_1 + 0x25a8) <= 0.0) || (0x42c80000 < (int)fVar2)) {
            FUN_00503620(param_1 + 0x2b4,0x12,1);
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"fall-?.wav");
            iVar5 = *(int *)(param_1 + 0x2570);
            fStack_464 = 0x3F000000;
            goto joined_r0x00565514;
          }
          uVar12 = 0x100000011;
LAB_0056514e:
          FUN_00503620(param_1 + 0x2b4,uVar12);
        }
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x2c))
                  (param_1,&DAT_0265370c,fVar1 * _DAT_005eb65d + 1.0);
      }
      iVar5 = *(int *)(param_1 + 0x2570);
      fStack_464 = 0x3F000000;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x2570);
      fStack_464 = 0x3F000000;
    }
joined_r0x00565514:
    0x3F000000 = fStack_464;
    if (iVar5 == 0) {
      *(float *)(param_1 + 0x256fc) = *(float *)(param_1 + 0x256fc) + param_2;
      if (iStack_38 == 3) {
        fStack_464 = fStack_464 * (float)_DAT_005eb5d5;
      }
      if ((fStack_464 < *(float *)(param_1 + 0x256fc)) ||
         (*(float *)(param_1 + 0x258d8) < (float)_DAT_005eb645)) {
        if (iStack_38 != 0xf) {
          FUN_00503620(param_1 + 0x2b4,0xf,1);
        }
        *(uint *)(param_1 + 0x2570) = 0;
      }
      goto LAB_005639ef;
    }
  }
  else {
    puStack_18 = (uint *)(param_1 + 0x2508);
    FUN_00408cf0(param_1,puStack_18);
    fStack_26c = fStack_2e4;
    afStack_2c8[(uint)bVar11 * -2 + 0x18] = afStack_3a0[(uint)bVar11 * -2 + 0x30];
    afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
         afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x31];
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + fStack_26c;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fStack_268;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_264;
    puStack_18[2] = 0;
    puStack_18[1] = puStack_18[2];
    *puStack_18 = puStack_18[1];
  }
  *(uint *)(param_1 + 0x256fc) = 0;
LAB_005639ef:
  *(uint *)(param_1 + 0x256ec) = 0;
  *(uint *)(param_1 + 0x256e8) = *(uint *)(param_1 + 0x256ec);
  *(uint *)(param_1 + 0x256e4) = *(uint *)(param_1 + 0x256e8);
  iVar5 = 0x01CB6900;
  if (iStack_34 != 0) {
    if (*(int *)(param_1 + 0x10a80) != 0) {
      if (*(int *)(param_1 + 0x25640) == 0) {
        *(uint *)(param_1 + 0x25640) = 1;
      }
      else {
        *(uint *)(param_1 + 0x25640) = 0;
        if (*(int *)(iVar5 + 0x264) != 0) {
          *(uint *)(iVar5 + 0x264) = 0;
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"flashlit.wav");
        }
      }
    }
    if (((*(int *)(param_1 + 0x10a7c) != 0) &&
        (iVar5 = *(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4), iVar5 != 0)) &&
       (*(int *)(iVar5 + 0x44c) != 0)) {
      uVar3 = (uint)(*(int *)(0x01CB6900 + 0x264) == 0);
      *(uint *)(0x01CB6900 + 0x264) = uVar3;
      if (uVar3 != 0) {
        *(uint *)(param_1 + 0x25640) = 1;
      }
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"flashlit.wav");
    }
  }
  iVar5 = *(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4);
  if (iVar5 == 0) {
    *(uint *)(0x01CB6900 + 0x264) = 0;
  }
  else if (*(int *)(iVar5 + 0x44c) == 0) {
    *(uint *)(0x01CB6900 + 0x264) = 0;
  }
  if (iStack_3c != 0) {
    FUN_0056db50(param_1,param_2);
  }
  if (*(int *)(param_1 + 0x25640) == 0) {
    fVar1 = *(float *)(param_1 + 0x25644) - param_2 / _DAT_005fc1c0;
    *(float *)(param_1 + 0x25644) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x25644) = 0;
    }
  }
  else {
    fVar1 = param_2 / _DAT_005fc1bc + *(float *)(param_1 + 0x25644);
    *(float *)(param_1 + 0x25644) = fVar1;
    if (1.0 < fVar1) {
      *(uint *)(param_1 + 0x25644) = 0x3f800000;
    }
  }
  fVar1 = *(float *)(param_1 + 0x25664) - param_2 / _DAT_005fc1c4;
  *(uint *)(param_1 + 0x25648) = 0;
  *(float *)(param_1 + 0x25664) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x25664) = 0;
  }
  fVar1 = *(float *)(param_1 + 0x25684) - param_2 / _DAT_005fc1c4;
  *(float *)(param_1 + 0x25684) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x25684) = 0;
  }
  if (iStack_28 != 0) {
    FUN_0056e4d0();
  }
  FUN_00565ff0();
  if (((*(int *)(param_1 + 0x24378) == 2) && (*(int *)(param_1 + 0x25698) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x25698) + 0x43c) == 0)) {
    FUN_00546ae0();
    FUN_005683d0(param_1,0);
    FUN_0056ca10();
    FUN_00565ff0();
  }
  FUN_0056d3d0(param_1,param_2,uStack_24);
  FUN_0056eb60();
  FUN_00429e90(param_1,param_2);
  puStack_18 = (uint *)FUN_005038a0(param_1 + 0x2b4,6);
  if ((float)puStack_18 <= 0.0) {
    FUN_004cf830();
  }
  else {
    puStack_18 = (uint *)FUN_00503e60();
    if ((1.0 < (float)puStack_18) &&
       (iStack_6c = FUN_0040c8f0(*(uint *)(param_1 + 0x2560c),DAT_007bc9e8), iStack_6c != 0))
    {
      FUN_00565f30();
      pfVar7 = afStack_2c8 + 0x47;
      afStack_1ac[0] = (float)uStack_164;
      afStack_2c8[(uint)bVar11 * -2 + 0x48] = afStack_2c8[(uint)bVar11 * -2 + 0x5a];
      afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x49] =
           afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x5b];
      FUN_00408d70(param_1,pfVar7);
      pfVar7 = afStack_3a0 + 0x17;
      afStack_ac[2] = fStack_e0;
      afStack_ac[(uint)bVar11 * -2 + 3] = afStack_2c8[(uint)bVar11 * -2 + 0x7b];
      afStack_ac[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x7c];
      fStack_308 = afStack_ac[2] - fStack_20c;
      fStack_304 = afStack_ac[3] - fStack_208;
      fStack_300 = fStack_9c - fStack_204;
      fStack_344 = afStack_ac[2] - fStack_20c;
      afStack_3a0[(uint)bVar11 * -2 + 0x18] = afStack_3a0[(uint)bVar11 * -2 + 0x27];
      afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
           afStack_3a0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28];
      uStack_340 = 0;
      FUN_00408d30(param_1,pfVar7);
      uStack_f8 = uStack_158;
      afStack_2c8[(uint)bVar11 * -2 + 0x75] = afStack_2c8[(uint)bVar11 * -2 + 0x5d];
      afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x76] =
           afStack_2c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x5e];
      if (0.0 < fStack_f0) {
        FUN_0041cb40(iStack_6c,afStack_2c8 + 0x2f,afStack_3a0 + 0x17);
      }
    }
  }
  FUN_005683d0(param_1,0);
  FUN_0056bf00(param_1,0,param_2);
  FUN_0056bf00(param_1,1,param_2);
  FUN_0056e850(param_1,param_2);
  FUN_004dccd0();
  FUN_0056eed0(param_1,param_2);
  if ((*(int *)(param_1 + 0x25698) != 0) && (*(int *)(*(int *)(param_1 + 0x25698) + 0xfc) != 0)) {
    *(uint *)(param_1 + 0xfc) = 1;
  }
  iVar5 = FUN_00550b70();
  if (iVar5 == 0) {
    if (*(int *)(0x01CB6900 + 0x25c) != 0) {
      FUN_00551050();
      FUN_00550450();
      FUN_005503a0();
      uVar4 = FUN_005506b0();
      *(uint *)(param_1 + 0x256b8) = uVar4;
      FUN_00550270();
      uVar4 = FUN_005506b0();
      *(uint *)(param_1 + 0x256b4) = uVar4;
      FUN_005504d0();
      FUN_00551080(*(uint *)(param_1 + 0x256b4),0x3f800000,0x3f800000,0);
      return;
    }
  }
  else if (*(int *)(0x01CB6900 + 0x25c) == 0) {
    FUN_00551050();
    FUN_00551050();
    FUN_00550450();
    FUN_005503a0();
    FUN_005506b0();
    FUN_005504d0();
    return;
  }
  return;
}
