// Name: FUN_00453250
// Address: 00453250
// Address Range: [[00453250, 00453c5a]]
// Convention: unknown
// Signature: void FUN_00453250(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453250(int param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_10e0 [981];
  float *pfVar9;
  byte *puVar10;
  byte local_170 [4];
  uint local_16c;
  byte local_134 [4];
  float local_130;
  float local_118;
  uint local_114;
  uint local_110;
  int local_100;
  int local_fc;
  uint local_f8;
  float afStack_f4 [4];
  float local_e4;
  float local_d4;
  float local_d0 [5];
  uint local_bc;
  float afStack_b8 [5];
  float local_a4 [3];
  float local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_80;
  float afStack_74 [3];
  uint local_68;
  float afStack_64 [8];
  float local_44;
  float afStack_40 [2];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar7 = 0;
  local_24 = param_1 + 0x2b4;
  local_38 = param_1 + 0x2437c;
  local_34 = param_1 + 0x2562c;
  local_30 = param_1 + 0x25620;
  do {
    uVar1 = FUN_005030c0(local_24,&param_2);
    if (uVar1 < 0x12) {
      if (uVar1 < 6) {
        if (uVar1 < 2) {
          if (uVar1 == 1) {
LAB_004532d0:
            uVar2 = _DAT_01b4d274;
            if (uVar1 == 7) {
              uVar2 = _DAT_01b4d278;
            }
            FUN_005469a0(local_24,uVar2);
            local_68 = local_f8;
            afStack_64[(uint)bVar7 * -2] = afStack_f4[(uint)bVar7 * -2];
            afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            iVar3 = *(int *)(param_1 + 0x25614);
            if (iVar3 == 0) {
              iVar3 = *(int *)(param_1 + 0x25694);
              if (iVar3 == 0) {
                if (*(int *)(param_1 + 0x2570) != 0) {
                  local_14 = (float)FUN_005038a0(local_24,3);
                  if ((float)_DAT_005d012f < local_14) {
                    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x2c))(param_1,&local_68,0x3fd9999a);
                  }
                  else {
                    local_14 = (float)FUN_005038a0(local_24,1);
                    if (local_14 <= (float)_DAT_005d012f) {
                      local_14 = (float)FUN_005038a0(local_24,2);
                      if ((float)_DAT_005d012f < local_14) {
                        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x2c))
                                  (param_1,&local_68,0x3f800000);
                      }
                    }
                    else {
                      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x2c))(param_1,&local_68,0x3f800000);
                    }
                  }
                }
                goto LAB_00453374;
              }
              local_14 = *(float *)(param_1 + 0x2b0);
              uVar2 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x4c))(iVar3,0x3f800000);
              FUN_00408d70(param_1,&local_68,uVar2);
              pfVar9 = afStack_f4;
              pfVar6 = afStack_f4;
              pfVar4 = afStack_b8 + 0x11;
            }
            else {
              local_14 = *(float *)(param_1 + 0x2b0);
              uVar2 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x4c))(iVar3,0x3f800000);
              FUN_00408d70(param_1,&local_68,uVar2);
              pfVar9 = afStack_64;
              pfVar6 = afStack_64;
              pfVar4 = local_d0 + 2;
            }
            pfVar9 = pfVar9 + 5;
            pfVar6 = pfVar6 + 5;
            *pfVar6 = *pfVar4;
            iVar3 = param_1;
            pfVar6[(uint)bVar7 * -2 + 1] = pfVar4[(uint)bVar7 * -2 + 1];
            (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
                 (pfVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
            (**(code **)((int)local_14 + 0x30))(iVar3,pfVar9);
          }
          else {
LAB_00453c4c:
            FUN_0042aa00(param_1,uVar1);
          }
        }
        else if (uVar1 < 3) {
          if (*(int *)(param_1 + 0x256a4) == 4) {
            *(uint *)(param_1 + 0x256a4) = 0;
          }
          else {
            FUN_0047bdf0(0x01C25594,"actionPending = %d\ndoc.cpp line %d",*(int *)(param_1 + 0x256a4)
                         ,0x899);
          }
          iVar3 = *(int *)(param_1 + 0x25608);
          if (iVar3 == 0) {
            FUN_0047bdf0(0x01C25594,"Object to pick up is now NULL\ndoc.cpp line %d",0x89f);
          }
          else {
            iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x8c))(iVar3,param_1);
            if (iVar3 == 0) {
              *(uint *)(param_1 + 0x25608) = 0;
            }
            else {
              iVar5 = *(int *)(param_1 + 0x25608);
              if ((iVar5 != 0) &&
                 (iVar5 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x8c))(iVar5,param_1), iVar5 == 4))
              {
                *(uint *)(param_1 + 0x2d08) = 0;
                *(uint *)(param_1 + 0x2d04) = 9;
              }
              iVar5 = 0;
              if (iVar3 != 2) goto LAB_004535e0;
              if (*(int *)(param_1 + 0x256a4) != 0) {
                FUN_0047bdf0(0x01C25594,"actionPending = %d\ndoc.cpp line %d",
                             *(int *)(param_1 + 0x256a4),0x8c2);
              }
              iVar5 = FUN_0040c8f0(*(uint *)(param_1 + 0x25608),_DAT_02661f38);
              if (iVar5 == 0) {
LAB_00453522:
                *(uint *)(param_1 + 0x256a4) = 1;
              }
              else {
                uVar1 = *(uint *)(iVar5 + 0x43c);
                if (uVar1 < 6) {
                  if (uVar1 == 0) goto LAB_00453522;
LAB_004535e0:
                  if (*(int *)(param_1 + 0x256a4) != 0) {
                    FUN_004cff50(param_1,1);
                    goto LAB_00453374;
                  }
                }
                else {
                  if ((6 < uVar1) && ((uVar1 < 8 || ((8 < uVar1 && (uVar1 != 0xd))))))
                  goto LAB_004535e0;
                  *(uint *)(param_1 + 0x256a4) = 0;
                }
                if (iVar5 != 0) {
                  FUN_004cff50(param_1,1);
                  FUN_004cff90(param_1,1);
                  FUN_004db9d0(local_38,iVar5,5,1);
                  *(uint *)(param_1 + 0x25640) = 1;
                  *(uint *)(param_1 + 0x2d04) = 3;
                  *(uint *)(param_1 + 0x2d08) = 0x3f800000;
                  *(int *)(param_1 + 0x25698) = iVar5;
                  goto LAB_00453374;
                }
              }
              FUN_004cff50(param_1,1);
            }
          }
        }
        else {
          if (uVar1 != 3) goto LAB_00453c4c;
          iVar3 = *(int *)(param_1 + 0x2698);
          FUN_004583a0(param_1);
          iVar5 = *(int *)(param_1 + 0x256a4);
          if (iVar5 == 2) {
            if (iVar3 != 0) {
              (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x70))(iVar3,local_30,local_34);
            }
LAB_004533c6:
            *(uint *)(param_1 + 0x256a4) = 0;
          }
          else {
            if (iVar5 == 6) goto LAB_004533c6;
            FUN_0047bdf0(0x01C25594,"<actionPending = %d\ndoc.cpp line %d" + 1,iVar5,0x87a);
          }
          *(uint *)(param_1 + 0x2561c) = 0;
          if (*(int *)(param_1 + 0x2d04) == 9) {
            *(uint *)(param_1 + 0x2d08) = 0;
            *(uint *)(param_1 + 0x2d04) = 0;
          }
          if (iVar3 == *(int *)(param_1 + 0x25698)) {
            *(uint *)(param_1 + 0x25698) = 0;
          }
        }
      }
      else if (uVar1 < 7) {
        local_28 = FUN_0040c8f0(*(uint *)(param_1 + 0x276c),_DAT_01c264e0);
        local_2c = local_28;
        if (local_28 != 0) {
          FUN_005469a0(local_24,_DAT_01b4d288);
          pfVar4 = afStack_b8 + 5;
          local_a4[0] = (float)local_80;
          afStack_b8[(uint)bVar7 * -2 + 6] = afStack_b8[(uint)bVar7 * -2 + 0xf];
          afStack_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
               afStack_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
          FUN_00408d70(param_1,pfVar4);
          puVar10 = local_134;
          afStack_b8[2] = afStack_64[2];
          afStack_b8[(uint)bVar7 * -2 + 3] = afStack_64[(uint)bVar7 * -2 + 3];
          afStack_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          FUN_004222d0(puVar10);
          local_130 = (float)FUN_0040cf60(0x41200000,0x41700000);
          local_14 = local_130;
          FUN_00408de0(local_28,afStack_b8 + 2);
          local_98 = local_44;
          afStack_b8[(uint)bVar7 * -2 + 9] = afStack_40[(uint)bVar7 * -2];
          afStack_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               afStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if (&local_118 != afStack_b8 + 8) {
            local_118 = local_98;
            local_114 = local_94;
            local_110 = local_90;
          }
          local_100 = param_1;
          local_fc = param_1;
          (**(code **)(*(int *)(local_2c + 0x2b0) + 0x110))(local_2c,local_134);
          if (0.0 < local_130) {
            fVar8 = (float10)local_130 * (float10)_DAT_005d0127;
            FUN_005b7ff0();
            local_14 = (float)(int)ROUND(fVar8);
            FUN_004c9850(0x01CB8284,afStack_b8 + 2,0,(int)local_14 + 1,0);
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"kick1.wav");
          }
        }
        local_1c = 0;
        for (local_20 = 0; local_20 < *(int *)(0x01E661B8 + 0x150fec); local_20 = local_20 + 1) {
          local_18 = *(int *)(0x01E661B8 + local_1c + 0x150ff0);
          iVar3 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          local_d4 = *(float *)(iVar3 + 0x20) - *(float *)(local_18 + 0x20);
          local_d0[0] = *(float *)(iVar3 + 0x24) - *(float *)(local_18 + 0x24);
          local_d0[1] = *(float *)(iVar3 + 0x28) - *(float *)(local_18 + 0x28);
          afStack_f4[2] = local_d4;
          afStack_f4[(uint)bVar7 * -2 + 3] = local_d0[(uint)bVar7 * -2];
          afStack_f4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               local_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if (SQRT(local_e4 * local_e4 +
                   afStack_f4[2] * afStack_f4[2] + afStack_f4[3] * afStack_f4[3]) <=
              (float)_DAT_005d0137) {
            FUN_004222d0(local_170);
            local_16c = 0x40a00000;
            (**(code **)(*(int *)(local_18 + 0x2b0) + 0x110))(local_18,local_170);
          }
          local_1c = local_1c + 4;
        }
        *(uint *)(param_1 + 0x276c) = 0;
      }
      else if (uVar1 < 0xf) {
        if (uVar1 == 7) goto LAB_004532d0;
        FUN_0042aa00(param_1,uVar1);
      }
      else if (uVar1 < 0x10) {
        if (*(int *)(param_1 + 0x276c) != 0) {
          FUN_00408de0(param_1,*(int *)(param_1 + 0x276c) + 0x20);
          local_bc = local_8c;
          afStack_b8[(uint)bVar7 * -2] = afStack_b8[(uint)bVar7 * -2 + 0xc];
          afStack_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_b8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
          if (0.0 < afStack_b8[1]) {
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"hit-gh[4,7].wav");
          }
        }
      }
      else if (uVar1 != 0x11) {
        FUN_0042aa00(param_1,uVar1);
      }
    }
    else if (0x12 < uVar1) {
      if (uVar1 < 0x17) {
        if (uVar1 < 0x15) {
          if (uVar1 != 0x13) goto LAB_00453c4c;
          FUN_00458320(param_1);
        }
        else if (uVar1 < 0x16) {
          if (*(int *)(param_1 + 0x2698) == *(int *)(param_1 + 0x25698)) {
            *(uint *)(param_1 + 0x25698) = 0;
          }
          FUN_004cff90(param_1,1);
          if (*(int *)(param_1 + 0x256a4) == 1) {
            *(uint *)(param_1 + 0x256a4) = 0;
          }
          else {
            FUN_0047bdf0(0x01C25594,"actionPending = %d\ndoc.cpp line %d",*(int *)(param_1 + 0x256a4)
                         ,0x912);
          }
        }
        else {
          if (*(int *)(param_1 + 0x256a4) == 5) {
            *(uint *)(param_1 + 0x256a4) = 0;
          }
          else {
            FUN_0047bdf0(0x01C25594,"actionPending = %d\ndoc.cpp line %d",*(int *)(param_1 + 0x256a4)
                         ,0x971);
          }
          if (*(int *)(param_1 + 0x25604) == 0) {
            FUN_0047bdf0(0x01C25594,"doorToOpen == NULL\ndoc.cpp line %d",0x977);
          }
          iVar3 = FUN_004cf230(param_1);
          if (iVar3 == 0) {
            FUN_00503620(local_24,0,1);
          }
        }
      }
      else if (uVar1 < 0x18) {
        FUN_004cf440(param_1);
      }
      else if (uVar1 < 0x29a) {
        if (uVar1 != 0x18) goto LAB_00453c4c;
      }
      else if (uVar1 < 0x29b) {
        *(uint *)(param_1 + 0x258c) = 0x41200000;
      }
      else {
        if (uVar1 != 0x29b) goto LAB_00453c4c;
        *(uint *)(param_1 + 0x258c) = 0x40800000;
      }
    }
LAB_00453374:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
