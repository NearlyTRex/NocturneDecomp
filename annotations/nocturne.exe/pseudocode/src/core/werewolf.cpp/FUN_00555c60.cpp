// Name: FUN_00555c60
// Address: 00555c60
// Address Range: [[00555c60, 00557015]]
// Convention: unknown
// Signature: void FUN_00555c60(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00555c60(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  ulonglong uVar10;
  byte local_320 [4];
  float local_31c;
  int local_2ec;
  int local_2e8;
  byte local_2e4 [4];
  float local_2e0;
  int local_2b0;
  int local_2ac;
  byte local_2a8 [4];
  float local_2a4;
  int local_274;
  int local_270;
  byte local_26c [4];
  float local_268;
  int local_238;
  int local_234;
  byte local_230 [4];
  float local_22c;
  int local_1fc;
  int local_1f8;
  byte local_1f4 [12];
  uint local_1e8;
  uint local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  byte local_1d0 [12];
  float local_1c4;
  float local_1c0;
  float local_1bc;
  byte local_1b8 [12];
  byte local_1ac [12];
  byte local_1a0 [12];
  float local_194;
  float local_190;
  float local_18c;
  byte local_188 [12];
  byte local_17c [12];
  byte local_170 [12];
  byte local_164 [12];
  byte local_158 [12];
  byte local_14c [12];
  byte local_140 [12];
  float local_134;
  float local_130;
  float local_12c;
  byte local_128 [12];
  byte local_11c [12];
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  byte local_f8 [12];
  float local_ec;
  float local_e8;
  float local_e4;
  byte local_e0 [12];
  byte local_d4 [12];
  byte local_c8 [12];
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  byte local_a4 [12];
  byte local_98 [12];
  byte local_8c [12];
  float local_80;
  float local_7c;
  float local_78;
  byte local_74 [12];
  byte local_68 [12];
  byte local_5c [12];
  byte local_50 [20];
  float local_3c;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  float local_14;
  
  iVar4 = FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    FUN_00527230();
    return;
  }
  if ((*(int *)(param_1 + 0xbd24) == 2) && (0.0 <= *(float *)(param_1 + 0xbd64))) {
    *(float *)(param_1 + 0xbd64) = *(float *)(param_1 + 0xbd64) - param_2;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_3c = param_2 * *(float *)(param_1 + 0xbc8c);
  while (0.0 < local_3c) {
    uVar5 = FUN_004e11c0(param_1 + 0x150);
    if (uVar5 < 10) {
      FUN_0042add0(param_1);
    }
    else if (uVar5 < 0xb) {
      FUN_0051d2a0(param_1 + 0x150,local_158);
      FUN_0040a240(param_1,local_98);
      local_14 = (float)FUN_0040dda0(0x41000000);
      fVar9 = (float10)local_14 * (float10)_DAT_00597e01;
      FUN_00563a30();
      local_34 = (int)ROUND(fVar9);
      FUN_004b0200(0x01C78C7C,local_98,0,local_34);
    }
    else if (uVar5 == 0x29a) {
      FUN_004d9110(0x01CC9450,param_1);
    }
    else {
      FUN_0042add0(param_1);
    }
  }
  fVar2 = (float)_DAT_00597dd1;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar2 * *(float *)(param_1 + 0xbc8c);
  if (*(int *)(param_1 + 0xbd24) == 2) {
    *(float *)(param_1 + 0x2430) = *(float *)(param_1 + 0x2430) * (float)_DAT_00597dd9;
  }
  iVar4 = FUN_004e1660();
  uVar5 = *(uint *)(iVar4 + 0x24);
  local_18 = uVar5;
  iVar4 = FUN_00428c00(param_1,param_2);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))();
    if ((iVar4 == 0) && (*(int *)(param_1 + 0xbca4) == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8))) {
      FUN_00423ed0();
      local_2a4 = (float)FUN_0040dda0(0x40e00000,0x41700000);
      local_274 = param_1;
      local_270 = param_1;
      iVar4 = param_1 + 0xfd0;
      local_14 = local_2a4;
      uVar7 = FUN_0055a8b0(local_e0,&DAT_02dd1184,*(int *)(param_1 + 0xbd34) * 0x30 + iVar4,
                           *(uint *)(param_1 + 0x2614),local_2a8);
      uVar7 = FUN_0040a240(param_1,local_140,uVar7);
      FUN_004798e0(param_1,uVar7);
      local_2a4 = (float)FUN_0040dda0(0x40e00000,0x41700000);
      local_274 = param_1;
      local_270 = param_1;
      local_14 = local_2a4;
      uVar7 = FUN_0055a8b0(local_d4,&DAT_02dd1184,*(int *)(param_1 + 0xbd30) * 0x30 + iVar4,
                           *(uint *)(param_1 + 0x2614),local_2a8);
      uVar7 = FUN_0040a240(param_1,local_188,uVar7);
      FUN_004798e0(param_1,uVar7);
      local_2a4 = (float)FUN_0040dda0(0x40e00000,0x41700000);
      local_274 = param_1;
      local_270 = param_1;
      local_14 = local_2a4;
      uVar7 = FUN_0055a8b0(local_17c,&DAT_02dd1184,*(int *)(param_1 + 0xbd2c) * 0x30 + iVar4,
                           *(uint *)(param_1 + 0x2614),local_2a8);
      uVar7 = FUN_0040a240(param_1,local_a4,uVar7);
      FUN_004798e0(param_1,uVar7);
    }
    iVar4 = param_1 + 0xfd0;
    if (local_18 < 4) {
      if (local_18 == 0) goto LAB_00556301;
      if (1 < local_18) {
        if (2 < local_18) {
          if (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) != *(int *)(param_1 + 0xbca4)) {
            FUN_00423ed0();
            local_31c = (float)FUN_0040dda0(0x40e00000,0x41700000);
            local_2ec = param_1;
            local_2e8 = param_1;
            local_14 = local_31c;
            uVar7 = FUN_0055a8b0(local_74,&DAT_02dd1184,*(int *)(param_1 + 0xbd2c) * 0x30 + iVar4,
                                 0x3ecccccd,local_320);
            uVar7 = FUN_0040a240(param_1,local_14c,uVar7);
            FUN_004798e0(param_1,uVar7);
          }
          if ((*(int *)(param_1 + 0xbca4) != 0) &&
             (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x104))(),
             iVar4 != 0)) {
            FUN_004e16b0(param_1 + 0x150,7,1);
          }
          goto LAB_00555e90;
        }
        goto LAB_0055637f;
      }
LAB_005567cd:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      iVar4 = *(int *)(param_1 + 0xbca4);
      if (iVar4 == 0) {
        iVar4 = FUN_0047a030(param_1,param_2);
        if (iVar4 == 0) {
          FUN_004e16b0(param_1 + 0x150,0,1);
        }
        goto LAB_00555e90;
      }
      if (*(int *)(param_1 + 0xbd50) != 0) {
        local_104 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        local_100 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        local_fc = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        local_24 = SQRT(local_fc * local_fc + local_104 * local_104 + local_100 * local_100);
        if ((*(float *)(param_1 + 0xbc9c) < local_24) || ((float)_DAT_00597de1 < local_24)) {
          *(uint *)(param_1 + 0xbca4) = 0;
          FUN_004e16b0(param_1 + 0x150,0,1);
          goto LAB_00555e90;
        }
      }
      iVar4 = FUN_0040d890(*(uint *)(param_1 + 0xbd50),_DAT_02dd1044);
      if ((iVar4 == 0) || (local_18 != 0xf)) {
        iVar4 = *(int *)(param_1 + 0xbca4);
        if (*(int *)(param_1 + 0xbd24) == 2) {
          if ((*(int *)(param_1 + 0xbd58) == 0) || (*(int *)(param_1 + 0xbd5c) == 0)) {
            _DAT_01cc4800 = "..\\core\\werewolf.cpp";
            _DAT_01cc4804 = 0x1ad;
            FUN_004c8440();
          }
          FUN_0043ac60(PTR_DAT_005ad350,"Phase: %d, Timer: %f\n",
                       *(uint *)(param_1 + 0xbd60),(double)*(float *)(param_1 + 0xbd64));
          if ((*(int *)(param_1 + 0xbd60) == 1) || (*(int *)(param_1 + 0xbd60) == 3)) {
            iVar4 = FUN_0040a290(*(uint *)(param_1 + 0xbca4),local_f8,
                                 *(int *)(param_1 + 0xbd58) + 0x20);
            if (0.0 <= *(float *)(iVar4 + 8)) {
              iVar4 = FUN_0040a290(*(uint *)(param_1 + 0xbca4),local_128,
                                   *(int *)(param_1 + 0xbd5c) + 0x20);
              if (0.0 <= *(float *)(iVar4 + 8)) {
                iVar4 = *(int *)(param_1 + 0xbca4);
                iVar8 = *(int *)(param_1 + 0xbd58);
                local_1dc = *(float *)(iVar4 + 0x20) - *(float *)(iVar8 + 0x20);
                local_1d8 = *(float *)(iVar4 + 0x24) - *(float *)(iVar8 + 0x24);
                local_1d4 = *(float *)(iVar4 + 0x28) - *(float *)(iVar8 + 0x28);
                iVar4 = *(int *)(param_1 + 0xbca4);
                iVar8 = *(int *)(param_1 + 0xbd5c);
                local_110 = *(float *)(iVar4 + 0x20) - *(float *)(iVar8 + 0x20);
                local_10c = *(float *)(iVar4 + 0x24) - *(float *)(iVar8 + 0x24);
                local_108 = *(float *)(iVar4 + 0x28) - *(float *)(iVar8 + 0x28);
                if (SQRT(local_108 * local_108 + local_110 * local_110 + local_10c * local_10c) <
                    SQRT(local_1d4 * local_1d4 + local_1dc * local_1dc + local_1d8 * local_1d8))
                goto LAB_00556967;
                iVar4 = *(int *)(param_1 + 0xbd5c);
              }
              else {
                iVar4 = *(int *)(param_1 + 0xbd5c);
              }
            }
            else {
LAB_00556967:
              iVar4 = *(int *)(param_1 + 0xbd58);
            }
          }
          iVar8 = *(int *)(param_1 + 0xbd60);
          if ((iVar8 == 1) || (iVar8 == 3)) {
            local_134 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            local_130 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            local_12c = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            if (SQRT(local_12c * local_12c + local_134 * local_134 + local_130 * local_130) <
                (float)_DAT_00597de9) {
              iVar8 = *(int *)(param_1 + 0xbd60) + 1;
              *(int *)(param_1 + 0xbd60) = iVar8;
              if (3 < iVar8) {
                *(uint *)(param_1 + 0xbd60) = 0;
              }
              *(uint *)(param_1 + 0xbd64) = 0x41200000;
            }
          }
          else if ((*(float *)(param_1 + 0xbd64) <= 0.0) &&
                  (*(int *)(param_1 + 0xbd60) = iVar8 + 1, 3 < iVar8 + 1)) {
            *(uint *)(param_1 + 0xbd60) = 0;
          }
        }
        local_1e0 = 0x40400000;
        local_30 = 0x40400000;
        *(uint *)(param_1 + 0x23ac) = 0;
        *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
        *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
        local_1e8 = 0;
        local_1e4 = 0;
        uVar7 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xbc))
                          (iVar4,&local_1e8,0x3f000000,0x3e32b8c2);
        iVar8 = FUN_004247f0(param_1,(float *)(iVar4 + 0x20),uVar7);
        if (iVar8 < 0) {
          FUN_0043ac60(PTR_DAT_005ad350,"%s gave up chase - I'm confused\n",param_1);
          FUN_004e16b0(param_1 + 0x150,0,1);
        }
        else if (iVar8 < 1) {
          iVar8 = FUN_0040d890(*(uint *)(param_1 + 0xbd50),_DAT_02dd1044);
          if (iVar8 == 0) {
            local_194 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            local_190 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            local_18c = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            if (&local_bc != &local_194) {
              local_bc = local_194;
              local_b8 = local_190;
              local_b4 = local_18c;
            }
            local_28 = SQRT(local_b4 * local_b4 + local_bc * local_bc + local_b8 * local_b8);
            local_1c = 20.0;
            if (*(int *)(param_1 + 0xbd24) == 1) {
              local_1c = 10.0;
            }
            if (*(int *)(param_1 + 0xbd24) == 2) {
              local_1c = 10.0;
            }
            if (local_1c < local_28) {
              FUN_0054e4a0(local_170,&local_bc);
              local_14 = (float)FUN_0040df00();
              if (ABS(local_14) < (float)_DAT_00597df9) {
                FUN_004e16b0(param_1 + 0x150,8,1);
                iVar4 = FUN_0040dea0();
                if (iVar4 != 0) {
                  FUN_00557060();
                }
                iVar4 = 0;
                for (iVar8 = 0; iVar8 < *(int *)(0x01E57284 + 0x150bf4); iVar8 = iVar8 + 1) {
                  iVar6 = FUN_0040d890(*(uint *)(iVar4 + 0x150bf8 + 0x01E57284),
                                       _DAT_02de07c4);
                  if (((iVar6 != 0) && (iVar6 != param_1)) &&
                     (iVar6 = FUN_004e1660(), *(int *)(iVar6 + 0x24) == 8)) {
                    iVar4 = FUN_0040de00(0,2);
                    if (iVar4 == 1) {
                      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + _DAT_00597e09;
                    }
                    if (iVar4 == 2) {
                      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + _DAT_00597e0d;
                    }
                    break;
                  }
                  iVar4 = iVar4 + 4;
                }
              }
            }
            else if ((local_28 < 0x40400000 * _DAT_00597df1) && (local_18 == 0xf)) {
              FUN_004e16b0(param_1 + 0x150,0,1);
            }
          }
        }
        else {
          if ((*(int *)(param_1 + 0xbd24) == 2) &&
             ((*(int *)(param_1 + 0xbd60) == 1 || (*(int *)(param_1 + 0xbd60) == 3))))
          goto LAB_00555e90;
          if (*(float *)(param_1 + 0xbca0) <= 0.0) {
            iVar4 = FUN_0040de00(0,2);
            if (iVar4 == 0) {
              FUN_004e16b0(param_1 + 0x150,2,1);
            }
            if (iVar4 == 1) {
              FUN_004e16b0(param_1 + 0x150,3,1);
            }
            if (iVar4 == 2) {
              FUN_004e16b0(param_1 + 0x150,4,1);
            }
            *(uint *)(param_1 + 0xbca0) = 0x3f800000;
            iVar4 = FUN_0040dea0();
            if (iVar4 != 0) {
              FUN_00557060();
            }
          }
        }
        fVar2 = *(float *)(param_1 + 0xbd44) - param_2;
        *(float *)(param_1 + 0xbd44) = fVar2;
        if (fVar2 < 0.0) {
          FUN_00557060();
        }
        goto LAB_00555e90;
      }
LAB_005567aa:
      FUN_004e16b0(param_1 + 0x150,0,1);
    }
    else {
      if (local_18 < 5) {
        FUN_00423ed0();
        local_268 = (float)FUN_0040dda0(0x40e00000,0x41700000);
        local_238 = param_1;
        local_234 = param_1;
        local_14 = local_268;
        uVar7 = FUN_0055a8b0(local_11c,&DAT_02dd1184,*(int *)(param_1 + 0xbd30) * 0x30 + iVar4,
                             0x3ecccccd,local_26c);
        uVar7 = FUN_0040a240(param_1,local_164,uVar7);
        FUN_004798e0(param_1,uVar7);
        if ((*(int *)(param_1 + 0xbca4) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x104))(),
           iVar4 != 0)) {
          FUN_004e16b0(param_1 + 0x150,7,1);
        }
        goto LAB_00555e90;
      }
      if (local_18 < 0xe) {
        if (local_18 < 8) goto LAB_00555e90;
        if (8 < local_18) {
          if (((local_18 == 0xd) && (*(int *)(param_1 + 0xbc90) == 0)) &&
             (*(int *)(param_1 + 0xdc) == 0)) {
            uVar7 = FUN_0051d2a0(param_1 + 0x150,local_1ac,0);
            FUN_0040a240(param_1,local_1b8,uVar7);
            FUN_004b0480(0x01C78C7C,local_1b8,0);
            *(uint *)(param_1 + 0xbc90) = 1;
          }
          goto LAB_00555e90;
        }
        if (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) != *(int *)(param_1 + 0xbca4)) {
          FUN_00423ed0();
          local_22c = (float)FUN_0040dda0(0x40e00000,0x41700000);
          local_1fc = param_1;
          local_1f8 = param_1;
          local_14 = local_22c;
          uVar7 = FUN_0055a8b0(local_1d0,&DAT_02dd1184,*(int *)(param_1 + 0xbd34) * 0x30 + iVar4,
                               0x3f800000,local_230);
          uVar7 = FUN_0040a240(param_1,local_8c,uVar7);
          FUN_004798e0(param_1,uVar7);
          uVar7 = FUN_0055a8b0(local_68,&DAT_02dd1184,*(int *)(param_1 + 0xbd30) * 0x30 + iVar4,
                               0x3f800000,local_230);
          uVar7 = FUN_0040a240(param_1,local_5c,uVar7);
          FUN_004798e0(param_1,uVar7);
          uVar7 = FUN_0055a8b0(local_1a0,&DAT_02dd1184,*(int *)(param_1 + 0xbd2c) * 0x30 + iVar4,
                               0x3f800000,local_230);
          uVar7 = FUN_0040a240(param_1,local_c8,uVar7);
          FUN_004798e0(param_1,uVar7);
        }
        if ((*(int *)(param_1 + 0xbca4) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x104))(),
           iVar4 != 0)) {
          FUN_004e16b0(param_1 + 0x150,7,1);
        }
LAB_0055637f:
        if (*(int *)(param_1 + 0xbca4) != *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
          FUN_00423ed0();
          local_2e0 = (float)FUN_0040dda0(0x40e00000,0x41700000);
          local_2b0 = param_1;
          local_2ac = param_1;
          local_14 = local_2e0;
          uVar7 = FUN_0055a8b0(local_1f4,&DAT_02dd1184,
                               param_1 + 0xfd0 + *(int *)(param_1 + 0xbd34) * 0x30,0x3ecccccd,
                               local_2e4);
          uVar7 = FUN_0040a240(param_1,local_50,uVar7);
          FUN_004798e0(param_1,uVar7);
        }
        if ((*(int *)(param_1 + 0xbca4) != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x104))(),
           iVar4 != 0)) {
          FUN_004e16b0(param_1 + 0x150,7,1);
        }
        goto LAB_00555e90;
      }
      if (0xe < local_18) {
        if (0xf < local_18) {
          if (local_18 != 0x13) goto LAB_00555e90;
          goto LAB_00555e78;
        }
        goto LAB_005567cd;
      }
LAB_00556301:
      iVar4 = FUN_0047a030(param_1,param_2);
      if (iVar4 == 0) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        iVar4 = *(int *)(param_1 + 0xbca4);
        if (iVar4 == 0) goto LAB_00555e90;
        if (*(int *)(param_1 + 0xbd50) != 0) {
          local_b0 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          local_ac = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          local_a8 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          local_2c = SQRT(local_a8 * local_a8 + local_b0 * local_b0 + local_ac * local_ac);
          if ((*(float *)(param_1 + 0xbc9c) < local_2c) || ((float)_DAT_00597de1 < local_2c)) {
            *(uint *)(param_1 + 0xbca4) = 0;
            goto LAB_00555e90;
          }
        }
        iVar4 = FUN_0040d890(*(uint *)(param_1 + 0xbd50),_DAT_02dd1044);
        if ((iVar4 != 0) && (local_18 == 0xe)) goto LAB_005567aa;
        if (*(int *)(param_1 + 0xbca4) == 0) goto LAB_00555e90;
        iVar4 = FUN_0040dea0();
        if (iVar4 != 0) {
          FUN_00557060();
        }
        if (local_18 == 0xe) {
          FUN_004e16b0(param_1 + 0x150,0xf,1);
          goto LAB_00555e90;
        }
      }
      else if (local_18 == 0xe) {
        FUN_004e16b0(param_1 + 0x150,0xf,1);
        goto LAB_00555e90;
      }
      FUN_004e16b0(param_1 + 0x150,1,1);
    }
    goto LAB_00555e90;
  }
  uVar1 = *(uint *)(param_1 + 0x25a8);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) {
LAB_00555e65:
        uVar10 = 0x10000000f;
      }
      else {
        uVar10 = 0x100000001;
      }
    }
    else {
LAB_0055610d:
      uVar10 = 0x100000000;
    }
LAB_00555e70:
    FUN_004e16b0(param_1 + 0x150,uVar10);
  }
  else {
    if (uVar1 < 3) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) goto LAB_00555e65;
      if (*(float *)(param_1 + 0x2430) <= ABS(*(float *)(param_1 + 0x2410))) {
        uVar10 = 0x100000001;
      }
      else {
        uVar10 = 0x100000008;
      }
      goto LAB_00555e70;
    }
    if (uVar1 != 3) goto LAB_0055610d;
    FUN_004e16b0(param_1 + 0x150,0,1);
    FUN_0043ac60(PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
LAB_00555e78:
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
LAB_00555e90:
  if ((local_18 == 0x13) && (*(int *)(param_1 + 0x2618) != 0)) {
    iVar4 = FUN_00526c50();
    if (iVar4 == 0) {
      uVar7 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"werewolf-eat.wav");
      *(uint *)(param_1 + 0xbd4c) = uVar7;
    }
  }
  else {
    FUN_00527230();
  }
  local_20 = 1.0;
  if (*(int *)(param_1 + 0xbd24) == 0) {
    local_20 = 0.75;
  }
  dVar3 = _DAT_00597e19;
  if ((local_18 != 0xe) && (local_18 != 0xf)) {
    dVar3 = _DAT_00597e11;
  }
  *(float *)(param_1 + 0x2dd8) = local_20 * (float)dVar3;
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  iVar4 = FUN_004e1660();
  iVar4 = *(int *)(iVar4 + 0x24);
  if (((((iVar4 != 0xd) && (iVar4 != 0)) && (iVar4 != 0xe)) && (iVar4 != 0x14)) ||
     (*(int *)(param_1 + 0xdc) != 0)) {
    if ((*(int *)(param_1 + 0xbca4) != 0) &&
       (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))(),
       iVar4 == param_1)) {
      FUN_00511780(0x01E57284,*(uint *)(param_1 + 0xbca4));
    }
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)_DAT_00597de1;
    local_ec = *(float *)(param_1 + 0x2420) * param_2;
    local_e8 = *(float *)(param_1 + 0x2424) * param_2;
    local_e4 = param_2 * *(float *)(param_1 + 0x2428);
    local_80 = local_ec + *(float *)(param_1 + 0x23a4);
    local_7c = local_e8 + *(float *)(param_1 + 0x23a8);
    local_78 = local_e4 + *(float *)(param_1 + 0x23ac);
    local_1c4 = local_80 + *(float *)(param_1 + 0x2414);
    local_1c0 = local_7c + *(float *)(param_1 + 0x2418);
    local_1bc = local_78 + *(float *)(param_1 + 0x241c);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    FUN_00425050(param_1,&local_1c4);
  }
  FUN_004259a0();
  FUN_0051b8a0();
  FUN_0042a150(param_1,param_2);
  FUN_00557cc0();
  *(float *)(param_1 + 0xbd68) = param_2 * (float)_DAT_00597e21 + *(float *)(param_1 + 0xbd68);
  return;
}
