// Name: FUN_0053c500
// Address: 0053c500
// Address Range: [[0053c500, 0053df0f]]
// Convention: unknown
// Signature: void FUN_0053c500(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053c500(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  ulonglong uVar13;
  float afStackY_127c [973];
  uint uVar14;
  byte auStack_330 [4];
  float fStack_32c;
  int iStack_2fc;
  int iStack_2f8;
  float afStack_2f4 [6];
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
  float afStack_2ac [6];
  float fStack_294;
  float afStack_290 [5];
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  uint uStack_270;
  float afStack_264 [3];
  float fStack_258;
  float afStack_254 [4];
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  uint uStack_228;
  float afStack_224 [5];
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  uint uStack_1f8;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  uint uStack_1d4;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  uint uStack_1b0;
  float afStack_1ac [3];
  int iStack_1a0;
  int iStack_19c;
  uint uStack_198;
  float afStack_194 [5];
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [4];
  float fStack_130;
  float afStack_12c [3];
  float afStack_120 [3];
  float afStack_114 [3];
  float afStack_108 [3];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  uint uStack_b4;
  float fStack_a8;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [3];
  float afStack_54 [5];
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar10 = 0;
  iVar4 = FUN_005035c0();
  fStack_2c = *(float *)(param_1 + 700);
  iStack_1c = *(int *)(iVar4 + 0x24);
  iVar4 = FUN_005035c0();
  fStack_20 = (float)*(int *)(iVar4 + 100);
  FUN_0042a7a0(param_1,param_2);
  iVar4 = FUN_004244b0(param_1,param_2);
  if (iVar4 == 0) {
    FUN_00551050();
    return;
  }
  if ((*(int *)(param_1 + 0x10af8) == 2) && (0.0 <= *(float *)(param_1 + 0x10b44))) {
    *(float *)(param_1 + 0x10b44) = *(float *)(param_1 + 0x10b44) - param_2;
  }
  fStack_24 = param_2 * *(float *)(param_1 + 0x10a60);
  *(uint *)(param_1 + 0x2510) = 0;
  *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
  *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
  while (0.0 < fStack_24) {
    FUN_005030c0(param_1 + 0x2b4);
    FUN_0042aa00();
  }
  *(uint *)(param_1 + 0x2594) = *(uint *)(param_1 + 0x2510);
  FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 0x10a60));
  if (*(int *)(param_1 + 0x10af8) == 2) {
    *(float *)(param_1 + 0x2598) = *(float *)(param_1 + 0x2598) * (float)_DAT_005e6635;
  }
  iVar4 = FUN_004287f0(param_1,param_2);
  if (iVar4 != 0) {
    uVar1 = *(uint *)(param_1 + 0x27ac);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        uVar13 = 0x100000005;
      }
      else {
LAB_0053cbd1:
        fStack_14 = (float)FUN_00503e60();
        if (fStack_14 <= (float)_DAT_005e6675) goto LAB_0053c6de;
        uVar14 = 1;
        uVar5 = FUN_0040cfc0(0,4,1);
        uVar13 = CONCAT44(uVar14,uVar5);
      }
LAB_0053c6d5:
      FUN_00503620(param_1 + 0x2b4,uVar13);
    }
    else if (uVar1 < 3) {
      fStack_14 = (float)FUN_00503e60();
      if ((float)_DAT_005e6675 < fStack_14) {
        uVar5 = 1;
        iVar4 = FUN_0040cfc0(0,1,1);
        uVar13 = CONCAT44(uVar5,iVar4 + 0xb);
        goto LAB_0053c6d5;
      }
    }
    else {
      if (uVar1 != 3) goto LAB_0053cbd1;
      FUN_00503620(param_1 + 0x2b4,0,1);
      FUN_00436710(PTR_DAT_00609ed0,"%s confused while walking to scriptDest!\n",param_1);
    }
LAB_0053c6de:
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
    goto LAB_0053c710;
  }
  switch(iStack_1c) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_0053dec8_caseD_0;
  case 5:
  case 0xb:
  case 0xc:
    if (*(int *)(param_1 + 0x10b5c) != 0) {
      fVar2 = *(float *)(param_1 + 0x10b64) - param_2;
      *(float *)(param_1 + 0x10b64) = fVar2;
      if (0.0 < fVar2) {
        FUN_00428260(param_1,*(uint *)(param_1 + 0x10b5c),0x3f800000,0x3f800000,
                     param_1 + 0x10b60);
        uVar1 = *(uint *)(param_1 + 0x10b60);
        if (uVar1 == 0) {
LAB_0053d90f:
          uVar5 = FUN_0040cfc0(0,4,1);
          FUN_00503620(param_1 + 0x2b4,uVar5);
          *(uint *)(param_1 + 0x10b5c) = 0;
        }
        else {
          if (uVar1 < 2) {
            FUN_00503620(param_1 + 0x2b4,5,1);
          }
          else {
            if (uVar1 != 2) goto LAB_0053d90f;
            fStack_14 = (float)FUN_00503e60();
            if ((float)_DAT_005e666d < fStack_14) {
              *(int *)(param_1 + 0x10b6c) = *(int *)(param_1 + 0x10b6c) + 1;
            }
            if (2 < *(int *)(param_1 + 0x10b6c)) {
              fStack_14 = (float)FUN_00503e60();
              if ((float)_DAT_005e6675 < fStack_14) {
                iVar4 = FUN_0040cfc0(0,1,1);
                FUN_00503620(param_1 + 0x2b4,iVar4 + 0xb);
                *(uint *)(param_1 + 0x10b6c) = 0;
              }
            }
          }
          if (*(int *)(param_1 + 0x10b5c) != 0) break;
        }
      }
      else {
        *(uint *)(param_1 + 0x10b5c) = 0;
        *(uint *)(param_1 + 0x10b64) = 0;
      }
    }
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
    iVar4 = *(int *)(param_1 + 0x10a78);
    if (iVar4 == 0) {
      fStack_14 = (float)FUN_00503e60();
      if ((float)_DAT_005e6675 < fStack_14) {
        uVar5 = FUN_0040cfc0(0,4,1);
        FUN_00503620(param_1 + 0x2b4,uVar5);
      }
    }
    else {
      if (*(int *)(param_1 + 0x10b2c) != 0) {
        fStack_9c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        fStack_98 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_94 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        fStack_210 = fStack_9c;
        afStack_224[(uint)bVar10 * -2 + 6] = afStack_140[(uint)bVar10 * -2 + 0x2a];
        afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b];
        if (*(float *)(param_1 + 0x10a70) <
            SQRT(fStack_208 * fStack_208 + fStack_210 * fStack_210 + fStack_20c * fStack_20c)) {
          *(uint *)(param_1 + 0x10a78) = 0;
          fStack_14 = (float)FUN_00503e60();
          if ((float)_DAT_005e6675 < fStack_14) {
            uVar5 = FUN_0040cfc0(0,4,1);
            FUN_00503620(param_1 + 0x2b4,uVar5);
          }
          break;
        }
      }
      iVar4 = FUN_0040c8f0(*(uint *)(param_1 + 0x10b2c),_DAT_026535b0);
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x10a78);
        if (*(int *)(param_1 + 0x10af8) == 2) {
          if ((*(int *)(param_1 + 0x10b34) == 0) || (*(int *)(param_1 + 0x10b38) == 0)) {
            _DAT_01d046a0 = "..\\core\\shadow.cpp";
            _DAT_01d046a4 = 0x20a;
            FUN_004e4500();
          }
          FUN_00436710(PTR_DAT_00609ed0,"Phase: %d, Timer: %f\n",
                       *(uint *)(param_1 + 0x10b40),(double)*(float *)(param_1 + 0x10b44));
          if ((*(int *)(param_1 + 0x10b40) == 1) || (*(int *)(param_1 + 0x10b40) == 3)) {
            FUN_00408de0(*(uint *)(param_1 + 0x10a78),*(int *)(param_1 + 0x10b34) + 0x20);
            uStack_228 = uStack_1f8;
            afStack_224[(uint)bVar10 * -2] = afStack_224[(uint)bVar10 * -2 + 0xc];
            afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
            if (0.0 <= afStack_224[1]) {
              FUN_00408de0(*(uint *)(param_1 + 0x10a78),*(int *)(param_1 + 0x10b38) + 0x20);
              uStack_1d4 = afStack_290[2];
              afStack_224[(uint)bVar10 * -2 + 0x15] = afStack_290[(uint)bVar10 * -2 + 3];
              afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
                   afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
              if (0.0 <= fStack_1cc) {
                iVar6 = *(int *)(param_1 + 0x10a78);
                iVar7 = *(int *)(param_1 + 0x10b34);
                fStack_d8 = *(float *)(iVar6 + 0x20) - *(float *)(iVar7 + 0x20);
                fStack_d4 = *(float *)(iVar6 + 0x24) - *(float *)(iVar7 + 0x24);
                fStack_d0 = *(float *)(iVar6 + 0x28) - *(float *)(iVar7 + 0x28);
                fStack_cc = fStack_d8;
                afStack_140[(uint)bVar10 * -2 + 0x1e] = afStack_140[(uint)bVar10 * -2 + 0x1b];
                afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f] =
                     afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
                fVar2 = fStack_cc * fStack_cc;
                iVar4 = *(int *)(param_1 + 0x10b38);
                fStack_258 = *(float *)(iVar6 + 0x20) - *(float *)(iVar4 + 0x20);
                afStack_254[0] = *(float *)(iVar6 + 0x24) - *(float *)(iVar4 + 0x24);
                afStack_254[1] = *(float *)(iVar6 + 0x28) - *(float *)(iVar4 + 0x28);
                fStack_240 = fStack_258;
                afStack_254[(uint)bVar10 * -2 + 6] = afStack_254[(uint)bVar10 * -2];
                afStack_254[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
                     afStack_254[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
                if (SQRT(fStack_238 * fStack_238 + fStack_240 * fStack_240 + fStack_23c * fStack_23c
                        ) < SQRT(fStack_c4 * fStack_c4 + fVar2 + fStack_c8 * fStack_c8)) {
                  iVar4 = iVar7;
                }
              }
              else {
                iVar4 = *(int *)(param_1 + 0x10b38);
              }
            }
            else {
              iVar4 = *(int *)(param_1 + 0x10b34);
            }
          }
          if ((*(int *)(param_1 + 0x10b40) == 1) || (*(int *)(param_1 + 0x10b40) == 3)) {
            fStack_78 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_74 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_70 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            fStack_168 = fStack_78;
            afStack_194[(uint)bVar10 * -2 + 0xc] = afStack_140[(uint)bVar10 * -2 + 0x33];
            afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
                 afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x34];
            if (SQRT(fStack_160 * fStack_160 + fStack_168 * fStack_168 + fStack_164 * fStack_164) <
                (float)_DAT_005e667d) {
              iVar6 = *(int *)(param_1 + 0x10b40) + 1;
              *(int *)(param_1 + 0x10b40) = iVar6;
              if (3 < iVar6) {
                *(uint *)(param_1 + 0x10b40) = 0;
              }
              *(uint *)(param_1 + 0x10b44) = 0x41200000;
            }
          }
          else if ((*(float *)(param_1 + 0x10b44) <= 0.0) &&
                  (iVar6 = *(int *)(param_1 + 0x10b40) + 1, *(int *)(param_1 + 0x10b40) = iVar6,
                  3 < iVar6)) {
            *(uint *)(param_1 + 0x10b40) = 0;
          }
        }
        afStack_264[2] = 0x40400000;
        fStack_18 = 0x40400000;
        *(uint *)(param_1 + 0x2510) = 0;
        *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
        *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
        afStack_264[0] = 0.0;
        afStack_264[1] = 0.0;
        uVar5 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xcc))
                          (iVar4,afStack_290 + 0xb,0x3f000000,0x3e32b8c2);
        iVar6 = FUN_00423000(param_1,(float *)(iVar4 + 0x20),uVar5);
        if (iVar6 < 0) {
          FUN_00436710(PTR_DAT_00609ed0,"%s gave up chase - I'm confused\n",param_1);
          fStack_14 = (float)FUN_00503e60();
          if ((float)_DAT_005e6675 < fStack_14) {
            uVar5 = FUN_0040cfc0(0,4,1);
            FUN_00503620(param_1 + 0x2b4,uVar5);
          }
        }
        else if (iVar6 < 1) {
          iVar6 = FUN_0040c8f0(*(uint *)(param_1 + 0x10b2c),_DAT_026535b0);
          if (iVar6 == 0) {
            fStack_c0 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            fStack_bc = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            fStack_b8 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            fStack_180 = fStack_c0;
            afStack_194[(uint)bVar10 * -2 + 6] = afStack_140[(uint)bVar10 * -2 + 0x21];
            afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
                 afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22];
            if (afStack_224 + 0x1a != afStack_194 + 5) {
              fStack_1bc = fStack_180;
              fStack_1b8 = fStack_17c;
              fStack_1b4 = fStack_178;
            }
            fStack_34 = SQRT(fStack_1b4 * fStack_1b4 +
                             fStack_1bc * fStack_1bc + fStack_1b8 * fStack_1b8);
            fStack_28 = 20.0;
            if (*(int *)(param_1 + 0x10af8) == 1) {
              fStack_28 = 10.0;
            }
            if (*(int *)(param_1 + 0x10af8) == 2) {
              fStack_28 = 10.0;
            }
            if (fStack_28 < fStack_34) {
              FUN_005838f0();
              uStack_198 = afStack_194[2];
              afStack_194[(uint)bVar10 * -2] = afStack_194[(uint)bVar10 * -2 + 3];
              afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                   afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
              fStack_14 = (float)FUN_0040d0c0();
              if (ABS(fStack_14) < (float)_DAT_005e6685) {
                fStack_14 = (float)FUN_00503e60();
                if ((float)_DAT_005e6675 < fStack_14) {
                  iVar4 = FUN_0040cfc0(0,1,1);
                  FUN_00503620(param_1 + 0x2b4,iVar4 + 0xb);
                }
                iVar4 = FUN_0040d060();
                if (iVar4 != 0) {
                  FUN_0053df80();
                }
                iVar4 = 0;
                iVar6 = 0;
                while (iVar6 < *(int *)(0x01E661B8 + 0x150fec)) {
                  iVar7 = FUN_0040c8f0(*(uint *)(iVar4 + 0x150ff0 + 0x01E661B8),
                                       _DAT_020b199c);
                  if ((iVar7 == 0) || (iVar7 == param_1)) {
                    iVar6 = iVar6 + 1;
                    iVar4 = iVar4 + 4;
                  }
                  else {
                    iVar7 = FUN_005035c0();
                    if ((*(int *)(iVar7 + 0x24) == 0xb) ||
                       (iVar7 = FUN_005035c0(), *(int *)(iVar7 + 0x24) == 0xc)) {
                      iVar4 = FUN_0040cfc0(0,2);
                      if (iVar4 == 1) {
                        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + _DAT_005e6695;
                      }
                      if (iVar4 == 2) {
                        *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + _DAT_005e6699;
                      }
                      break;
                    }
                    iVar6 = iVar6 + 1;
                    iVar4 = iVar4 + 4;
                  }
                }
              }
            }
            else if (fStack_34 < 0x40400000 * _DAT_005e6659) {
              if ((iStack_1c == 5) &&
                 (fStack_14 = (float)FUN_00503e60(), (float)_DAT_005e6675 < fStack_14)) {
                uVar5 = FUN_0040cfc0(0,4,1);
                FUN_00503620(param_1 + 0x2b4,uVar5);
              }
              if ((iStack_1c == 0xb) || (iStack_1c == 0xc)) {
                FUN_00503620(param_1 + 0x2b4,5,1);
              }
            }
          }
        }
        else {
          if ((*(int *)(param_1 + 0x10af8) == 2) &&
             ((*(int *)(param_1 + 0x10b40) == 1 || (*(int *)(param_1 + 0x10b40) == 3)))) break;
          if (*(float *)(param_1 + 0x10a74) <= 0.0) {
            iVar4 = FUN_0040cfc0(0,3,1);
            FUN_00503620(param_1 + 0x2b4,iVar4 + 6);
            iVar4 = FUN_0042b300(param_1,&DAT_005e662c);
            *(int *)(param_1 + 0x10b5c) = iVar4;
            if (iVar4 != 0) {
              fStack_14 = (float)FUN_0040cf60(0x40800000,0x41400000);
              *(float *)(param_1 + 0x10b64) = fStack_14;
            }
            iVar4 = FUN_0040d060();
            if (iVar4 != 0) {
              FUN_0053df80();
            }
          }
        }
        fVar2 = *(float *)(param_1 + 0x10b20) - param_2;
        *(float *)(param_1 + 0x10b20) = fVar2;
        if (fVar2 < 0.0) {
          FUN_0053df80();
        }
      }
      else {
        uVar5 = FUN_0040cfc0(0,4,1);
        FUN_00503620(param_1 + 0x2b4,uVar5);
      }
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    FUN_004222d0();
    fStack_32c = (float)FUN_0040cf60(0x40e00000,0x41700000);
    iStack_2fc = param_1;
    iStack_2f8 = param_1;
    fStack_14 = fStack_32c;
    FUN_00591530(&DAT_0265370c,*(int *)(param_1 + 0x10b04) * 0x30 + param_1 + 0x1134,0x3ecccccd,
                 auStack_330);
    afStack_12c[0] = (float)uStack_15c;
    afStack_140[(uint)bVar10 * -2 + 6] = afStack_194[(uint)bVar10 * -2 + 0xf];
    afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
         afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
    FUN_00408d70(param_1,afStack_140 + 5);
    afStack_120[0] = (float)uStack_b4;
    afStack_140[(uint)bVar10 * -2 + 9] = afStack_140[(uint)bVar10 * -2 + 0x24];
    afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25];
    FUN_00488110(param_1,afStack_140 + 8);
    fStack_32c = (float)FUN_0040cf60(0x40e00000,0x41700000);
    iStack_2fc = param_1;
    iStack_2f8 = param_1;
    fStack_14 = fStack_32c;
    FUN_00591530(&DAT_0265370c,param_1 + 0x1134 + *(int *)(param_1 + 0x10b00) * 0x30,0x3ecccccd,
                 auStack_330);
    pfVar8 = afStack_140 + 0xb;
    afStack_114[0] = (float)uStack_1b0;
    afStack_140[(uint)bVar10 * -2 + 0xc] = afStack_1ac[(uint)bVar10 * -2];
    afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    FUN_00408d70(param_1,pfVar8);
    pfVar8 = afStack_140 + 0xe;
    afStack_108[0] = (float)uStack_270;
    afStack_140[(uint)bVar10 * -2 + 0xf] = afStack_290[(uint)bVar10 * -2 + 9];
    iVar4 = param_1;
    afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
         afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    FUN_00488110(iVar4,pfVar8);
    if ((*(int *)(param_1 + 0x10a78) != 0) &&
       (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0x114))(), iVar4 != 0))
    {
      FUN_00503620(param_1 + 0x2b4,10,1);
    }
    FUN_0053dfc0();
    break;
  default:
    *(uint *)(param_1 + 0x10b70) = 1;
    *(uint *)(param_1 + 0x10b78) = 65000;
switchD_0053dec8_caseD_0:
    *(uint *)(param_1 + 0x10b70) = 1;
    *(uint *)(param_1 + 0x10b78) = 65000;
    iVar4 = FUN_00488970(param_1,param_2);
    if (iVar4 != 0) {
      FUN_00503620(param_1 + 0x2b4,5,1);
      break;
    }
    if (*(int *)(param_1 + 0x10b5c) != 0) {
      fVar2 = *(float *)(param_1 + 0x10b64) - param_2;
      *(float *)(param_1 + 0x10b64) = fVar2;
      if (0.0 < fVar2) {
        FUN_00428260(param_1,*(uint *)(param_1 + 0x10b5c),0x3f800000,0x3f800000,
                     param_1 + 0x10b60);
        uVar1 = *(uint *)(param_1 + 0x10b60);
        if (uVar1 == 0) {
LAB_0053d2f5:
          *(uint *)(param_1 + 0x10b5c) = 0;
        }
        else {
          if (uVar1 < 2) {
            uVar13 = 0x100000005;
          }
          else {
            if (uVar1 != 2) goto LAB_0053d2f5;
            uVar5 = 1;
            iVar4 = FUN_0040cfc0(0,1,1);
            uVar13 = CONCAT44(uVar5,iVar4 + 0xb);
          }
          FUN_00503620(param_1 + 0x2b4,uVar13);
          if (*(int *)(param_1 + 0x10b5c) != 0) break;
        }
      }
      else {
        *(uint *)(param_1 + 0x10b5c) = 0;
        *(uint *)(param_1 + 0x10b64) = 0;
      }
    }
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
    iVar4 = *(int *)(param_1 + 0x10a78);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x10b2c) != 0) {
        afStack_140[2] = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        afStack_140[3] = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        fStack_130 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        afStack_254[2] = afStack_140[2];
        afStack_254[(uint)bVar10 * -2 + 3] = afStack_140[(uint)bVar10 * -2 + 3];
        afStack_254[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        fStack_30 = SQRT(fStack_244 * fStack_244 +
                         afStack_254[2] * afStack_254[2] + afStack_254[3] * afStack_254[3]);
        if ((*(float *)(param_1 + 0x10a70) < fStack_30) || ((float)_DAT_005e668d < fStack_30)) {
          *(uint *)(param_1 + 0x10a78) = 0;
          break;
        }
      }
      iVar4 = FUN_0040c8f0(*(uint *)(param_1 + 0x10b2c),_DAT_026535b0);
      if (iVar4 == 0) {
        if (*(int *)(param_1 + 0x10a78) == 0) {
          fStack_14 = (float)FUN_00503e60();
          if ((float)_DAT_005e6675 < fStack_14) {
            uVar5 = FUN_0040cfc0(0,4,1);
            FUN_00503620(param_1 + 0x2b4,uVar5);
          }
        }
        else {
          iVar4 = FUN_0040d060();
          if (iVar4 != 0) {
            FUN_0053df80();
          }
          FUN_00503620(param_1 + 0x2b4,5,1);
        }
      }
      else {
        FUN_00503620(param_1 + 0x2b4,0,1);
      }
    }
    break;
  case 0xd:
  case 0xe:
    fVar11 = (((float10)fStack_20 - (float10)fStack_2c) * (float10)_DAT_005e663d) /
             (float10)fStack_20;
    *(uint *)(param_1 + 0x10b70) = 0;
    uVar13 = FUN_005b7ff0();
    iVar4 = (int)uVar13;
    *(int *)(iVar4 + 0x10b78) = (int)ROUND(fVar11);
    fVar11 = (float10)*(float *)((int)((ulonglong)uVar13 >> 0x20) + 0x284) * (float10)_DAT_005e6645
             + (float10)*(float *)(iVar4 + 0x10b3c);
    *(float *)(iVar4 + 0x10b3c) = (float)fVar11;
    fVar12 = (float10)fsin(fVar11);
    fVar11 = (float10)fcos(fVar11);
    fStack_38 = (float)fVar12;
    fStack_40 = (float)fVar11;
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))();
    pfVar8 = afStack_2ac;
    pfVar9 = &fStack_2c4;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
      pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
    }
    fVar2 = (fStack_2b0 - fStack_2bc) * fStack_40;
    fVar3 = (fStack_2b8 - fStack_2c4) * fStack_38 * (float)_DAT_005e664d;
    fStack_90 = fStack_2c4 + fStack_2b8;
    fStack_8c = fStack_2c0 + fStack_2b4;
    fStack_88 = fStack_2bc + fStack_2b0;
    fStack_f0 = fStack_2c4 + fStack_2b8;
    afStack_140[(uint)bVar10 * -2 + 0x15] = afStack_140[(uint)bVar10 * -2 + 0x2d];
    afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
         afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2e];
    fStack_234 = fVar3;
    fStack_22c = fVar2 * (float)_DAT_005e664d;
    fStack_1ec = fStack_f0 * _DAT_005e6655;
    fStack_1e8 = fStack_ec * _DAT_005e6655;
    fStack_1e4 = fStack_e8 * _DAT_005e6655;
    afStack_224[2] = fStack_f0 * _DAT_005e6655;
    afStack_224[(uint)bVar10 * -2 + 3] = afStack_224[(uint)bVar10 * -2 + 0xf];
    afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
    fStack_230 = afStack_224[3];
    fStack_174 = fVar3 + *(float *)(param_1 + 0x20);
    fStack_170 = afStack_224[3] + *(float *)(param_1 + 0x24);
    fStack_16c = fStack_22c + *(float *)(param_1 + 0x28);
    fStack_204 = fStack_174;
    afStack_224[(uint)bVar10 * -2 + 9] = afStack_194[(uint)bVar10 * -2 + 9];
    afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    if (afStack_254 + 8 != afStack_224 + 8) {
      fStack_234 = fStack_204;
      fStack_230 = fStack_200;
      fStack_22c = fStack_1fc;
    }
    FUN_00448810(0x20b1924,afStack_254 + 8);
    _DAT_020b1960 = 60000;
    DAT_020b1940 = 0x3a;
    FUN_00448860(0x20b1924,0x40c00000);
    _DAT_020b1944 = 0;
    FUN_005306b0(0x01E661B8,0x20b1924);
    iVar4 = param_1 + 0x2b4;
    *(uint *)(param_1 + 0x10b7c) = 1;
    iVar6 = FUN_00547890();
    fStack_14 = (float)FUN_00503e60();
    fVar11 = (float10)_DAT_005e665d;
    FUN_005b9484();
    fVar12 = (float10)_DAT_005e6665;
    FUN_005b9484();
    *(float *)(param_1 + 0x10b74) = (float)((float10)1 + fVar11 / fVar12);
    iVar7 = 0;
    if (0 < *(int *)(iVar6 + 0x1d1f8)) {
      do {
        iVar7 = iVar7 + 1;
        *(uint *)(iVar4 + 0x514) = *(uint *)(param_1 + 0x10b74);
        iVar4 = iVar4 + 4;
      } while (iVar7 < *(int *)(iVar6 + 0x1d1f8));
    }
    break;
  case 0xf:
    *(uint *)(param_1 + 0x10b78) = 0;
    *(uint *)(param_1 + 0x10b74) = 0x3f800000;
    *(uint *)(param_1 + 0x70) = 2;
    return;
  case 0x14:
    fVar11 = ((float10)fStack_2c * (float10)_DAT_005e663d) / (float10)fStack_20;
    *(uint *)(param_1 + 0x10b70) = 0;
    iVar4 = FUN_005b7ff0();
    *(int *)(iVar4 + 0x10b78) = (int)ROUND(fVar11);
  }
LAB_0053c710:
  *(uint *)(param_1 + 0x3434) = 0x40000000;
  if (0.0 < *(float *)(param_1 + 0x10a74)) {
    *(float *)(param_1 + 0x10a74) = *(float *)(param_1 + 0x10a74) - param_2;
  }
  iVar4 = FUN_005035c0();
  iVar4 = *(int *)(iVar4 + 0x24);
  if ((((((iVar4 != 0xf) && (iVar4 != 0)) && (iVar4 != 1)) && ((iVar4 != 2 && (iVar4 != 3)))) &&
      (iVar4 != 4)) || (*(int *)(param_1 + 0xdc) != 0)) {
    if ((*(int *)(param_1 + 0x10a78) != 0) &&
       (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xfc))(),
       iVar4 == param_1)) {
      FUN_00537e30(0x01E661B8,*(uint *)(param_1 + 0x10a78));
    }
    FUN_00423a10(param_1,param_2);
    fStack_27c = *(float *)(param_1 + 0x2588) * param_2;
    fStack_278 = *(float *)(param_1 + 0x258c) * param_2;
    fStack_274 = *(float *)(param_1 + 0x2590) * param_2;
    fStack_1c8 = fStack_27c;
    afStack_224[(uint)bVar10 * -2 + 0x18] = afStack_290[(uint)bVar10 * -2 + 6];
    afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
         afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    fStack_1e0 = fStack_1c8 + *(float *)(param_1 + 0x2508);
    fStack_1dc = fStack_1c4 + *(float *)(param_1 + 0x250c);
    fStack_1d8 = fStack_1c0 + *(float *)(param_1 + 0x2510);
    fStack_144 = fStack_1e0;
    afStack_140[(uint)bVar10 * -2] = afStack_224[(uint)bVar10 * -2 + 0x12];
    afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_224[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
    fStack_e4 = fStack_144 + *(float *)(param_1 + 0x257c);
    fStack_e0 = afStack_140[0] + *(float *)(param_1 + 0x2580);
    fStack_dc = afStack_140[1] + *(float *)(param_1 + 0x2584);
    afStack_60[0] = fStack_e4;
    afStack_140[(uint)bVar10 * -2 + 0x39] = afStack_140[(uint)bVar10 * -2 + 0x18];
    afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x3a] =
         afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
    *(uint *)(param_1 + 0x2510) = 0;
    *(uint *)(param_1 + 0x2584) = 0;
    *(uint *)(param_1 + 0x250c) = *(uint *)(param_1 + 0x2510);
    *(uint *)(param_1 + 0x2508) = *(uint *)(param_1 + 0x250c);
    *(uint *)(param_1 + 0x2580) = *(uint *)(param_1 + 0x2584);
    *(uint *)(param_1 + 0x257c) = *(uint *)(param_1 + 0x2580);
    FUN_00423a60(param_1,afStack_140 + 0x38);
  }
  FUN_00424470();
  FUN_00544f00();
  FUN_00429e90(param_1,param_2);
  FUN_0053ece0();
  if ((0.0 <= *(float *)(param_1 + 0x10b68)) &&
     (param_2 = *(float *)(param_1 + 0x10b68) - param_2, *(float *)(param_1 + 0x10b68) = param_2,
     param_2 <= 0.0)) {
    fStack_14 = (float)FUN_0040cf60(0x3f800000,0x40000000);
    *(float *)(param_1 + 0x10b68) = fStack_14;
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))();
    pfVar8 = afStack_2f4;
    pfVar9 = &fStack_2dc;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar9 = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
      pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
    }
    fStack_6c = fStack_2dc + fStack_2d0;
    fStack_68 = fStack_2d8 + fStack_2cc;
    fStack_64 = fStack_2d4 + fStack_2c8;
    fStack_84 = fStack_2dc + fStack_2d0;
    afStack_140[(uint)bVar10 * -2 + 0x30] = afStack_140[(uint)bVar10 * -2 + 0x36];
    afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x31] =
         afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x37];
    pfVar8 = afStack_140 + 0x3b;
    fStack_294 = fStack_84 * _DAT_005e6655;
    afStack_290[0] = fStack_80 * _DAT_005e6655;
    afStack_290[1] = fStack_7c * _DAT_005e6655;
    afStack_54[0] = fStack_84 * _DAT_005e6655;
    afStack_140[(uint)bVar10 * -2 + 0x3c] = afStack_290[(uint)bVar10 * -2];
    afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x3d] =
         afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    FUN_00408d70(param_1,pfVar8);
    fStack_fc = fStack_a8;
    afStack_140[(uint)bVar10 * -2 + 0x12] = afStack_140[(uint)bVar10 * -2 + 0x27];
    afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
         afStack_140[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28];
    if (afStack_194 + 0x11 != afStack_140 + 0x11) {
      fStack_150 = fStack_fc;
      fStack_14c = fStack_f8;
      fStack_148 = fStack_f4;
    }
    afStack_1ac[2] = (float)(int)ROUND(fStack_150 * _DAT_005fb3e0);
    iStack_1a0 = (int)ROUND(fStack_14c * _DAT_005fb3e0);
    iStack_19c = (int)ROUND(fStack_148 * _DAT_005fb3e0);
    fStack_14 = (float)FUN_005311e0(0x01E661B8,afStack_1ac + 2,0);
    if (_DAT_005fb40c * (float)_DAT_005e669d <= (float)(int)fStack_14) {
      uVar5 = FUN_0040cfc0(0,4,1);
      FUN_00503620(param_1 + 0x2b4,uVar5);
      iVar4 = FUN_0042b300(param_1,&DAT_005e662e);
      *(int *)(param_1 + 0x10b5c) = iVar4;
      if (iVar4 != 0) {
        uVar5 = FUN_0040cf60(0x40400000,0x40c00000);
        *(uint *)(param_1 + 0x10b64) = uVar5;
      }
      *(float *)(param_1 + 0x10b68) = *(float *)(param_1 + 0x10b68) + _DAT_005e66a5;
      return;
    }
  }
  return;
}
