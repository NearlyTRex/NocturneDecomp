// Name: FUN_005881d0
// Address: 005881d0
// Address Range: [[005881d0, 005889ab]]
// Convention: unknown
// Signature: void FUN_005881d0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005881d0(int param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_10bc [996];
  float *pfVar9;
  uint *puVar10;
  byte *puVar11;
  byte local_110 [4];
  float local_10c;
  float local_f4;
  uint local_f0;
  uint local_ec;
  int local_dc;
  int local_d8;
  uint local_d4;
  float afStack_d0 [4];
  uint local_c0;
  uint local_bc;
  float afStack_b0 [3];
  uint local_a4;
  float afStack_a0 [8];
  uint local_80;
  float afStack_7c [8];
  float local_5c;
  float afStack_58 [5];
  float local_44 [3];
  uint local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar7 = 0;
  local_1c = param_1 + 0x158;
  local_28 = param_1 + 0x1ff9c;
  local_2c = param_1 + 0x1ff90;
  do {
    uVar1 = FUN_00524270(local_1c,&param_2);
    if (uVar1 < 0x12) {
      if (uVar1 < 6) {
        if (uVar1 < 2) {
          if (uVar1 == 1) {
LAB_00588243:
            uVar2 = _DAT_02c8361c;
            if (uVar1 == 7) {
              uVar2 = _DAT_02c83620;
            }
            FUN_00569040(local_1c,uVar2);
            afStack_7c[2] = afStack_58[2];
            afStack_7c[(uint)bVar7 * -2 + 3] = afStack_58[(uint)bVar7 * -2 + 3];
            iVar3 = local_1c;
            afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            if (*(int *)(param_1 + 0x1ff84) == 0) {
              iVar4 = *(int *)(param_1 + 0x20000);
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x2500) != 0) {
                  local_18 = (float)FUN_00524a40(local_1c,4);
                  if ((float)_DAT_005f6a29 < local_18) {
                    (**(code **)(*(int *)(param_1 + 0x154) + 0x24))
                              (param_1,afStack_7c + 2,0x3fd9999a);
                  }
                  else {
                    local_18 = (float)FUN_00524a40(iVar3,1);
                    if (local_18 <= (float)_DAT_005f6a29) {
                      local_18 = (float)FUN_00524a40(iVar3,2);
                      if ((float)_DAT_005f6a29 < local_18) {
                        (**(code **)(*(int *)(param_1 + 0x154) + 0x24))
                                  (param_1,afStack_7c + 2,0x3f800000);
                      }
                    }
                    else {
                      (**(code **)(*(int *)(param_1 + 0x154) + 0x24))
                                (param_1,afStack_7c + 2,0x3f800000);
                    }
                  }
                }
                goto LAB_005882ec;
              }
              local_18 = *(float *)(param_1 + 0x154);
              uVar2 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x44))(iVar4,0x3f800000);
              FUN_00408b40(param_1,afStack_7c + 2,uVar2);
              pfVar9 = afStack_d0 + 8;
              pfVar6 = afStack_d0 + 8;
              pfVar5 = afStack_a0;
            }
            else {
              local_18 = *(float *)(param_1 + 0x154);
              uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x1ff84) + 0x154) + 0x44))
                                (*(int *)(param_1 + 0x1ff84),0x3f800000);
              FUN_00408b40(param_1,afStack_7c + 2,uVar2);
              pfVar9 = afStack_a0 + 2;
              pfVar6 = afStack_a0 + 2;
              pfVar5 = afStack_7c;
            }
            pfVar5 = pfVar5 + 5;
            *pfVar6 = *pfVar5;
            iVar3 = param_1;
            pfVar6[(uint)bVar7 * -2 + 1] = pfVar5[(uint)bVar7 * -2 + 1];
            (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
                 (pfVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
            (**(code **)((int)local_18 + 0x28))(iVar3,pfVar9);
          }
          else {
LAB_0058899d:
            FUN_00434a80(param_1,uVar1);
          }
        }
        else if (uVar1 < 3) {
          if (*(int *)(param_1 + 0x1ff5c) == 4) {
            *(uint *)(param_1 + 0x1ff5c) = 0;
          }
          else {
            FUN_00494340(0x01C3EB54,"actionPending = %d\nstranger.cpp line %d",
                         *(int *)(param_1 + 0x1ff5c),0x7e2);
          }
          iVar3 = *(int *)(param_1 + 0x1ff78);
          if (iVar3 == 0) {
            FUN_00494340(0x01C3EB54,"Object to pick up is now NULL\nstranger.cpp line %d",0x7e8);
          }
          else {
            iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x84))(iVar3,param_1);
            if (iVar3 == 0) {
              *(uint *)(param_1 + 0x1ff78) = 0;
            }
            else {
              iVar4 = *(int *)(param_1 + 0x1ff78);
              if ((iVar4 != 0) &&
                 (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x84))(iVar4,param_1), iVar4 == 4))
              {
                *(uint *)(param_1 + 0x2c9c) = 0;
                *(uint *)(param_1 + 0x2c98) = 0xe;
              }
              if (iVar3 == 2) {
                if (*(int *)(param_1 + 0x1ff5c) != 0) {
                  FUN_00494340(0x01C3EB54,"actionPending = %d\nstranger.cpp line %d",
                               *(int *)(param_1 + 0x1ff5c),0x806);
                }
                *(uint *)(param_1 + 0x1ff5c) = 1;
              }
              FUN_004ec280(param_1,1);
            }
          }
        }
        else {
          if (uVar1 != 3) goto LAB_0058899d;
          iVar3 = *(int *)(param_1 + 0x2628);
          FUN_0058ce20(param_1);
          iVar4 = *(int *)(param_1 + 0x1ff5c);
          if (iVar4 == 2) {
            if (iVar3 != 0) {
              (**(code **)(*(int *)(iVar3 + 0x154) + 0x68))(iVar3,local_2c,local_28);
            }
LAB_0058833e:
            *(uint *)(param_1 + 0x1ff5c) = 0;
          }
          else {
            if (iVar4 == 6) goto LAB_0058833e;
            FUN_00494340(0x01C3EB54,"<actionPending = %d\nstranger.cpp line %d" + 1,iVar4,0x7c4);
          }
          *(uint *)(param_1 + 0x1ff8c) = 0;
          if (*(int *)(param_1 + 0x2c98) == 0xe) {
            *(uint *)(param_1 + 0x2c9c) = 0;
            *(uint *)(param_1 + 0x2c98) = 0;
          }
          if (iVar3 == *(int *)(param_1 + 0x20004)) {
            *(uint *)(param_1 + 0x20004) = 0;
          }
        }
      }
      else if (uVar1 < 7) {
        local_24 = FUN_0040c600(*(uint *)(param_1 + 0x26fc),_DAT_01c3f6a0);
        local_20 = local_24;
        if (local_24 != 0) {
          FUN_00569040(local_1c,_DAT_02c83630);
          puVar10 = &local_80;
          local_80 = local_d4;
          afStack_7c[(uint)bVar7 * -2] = afStack_d0[(uint)bVar7 * -2];
          afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          FUN_00408b40(param_1,puVar10);
          puVar11 = local_110;
          local_44[0] = (float)local_bc;
          afStack_58[(uint)bVar7 * -2 + 6] = afStack_d0[(uint)bVar7 * -2 + 6];
          afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
               afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          FUN_0042c010(puVar11);
          local_10c = (float)FUN_0040cc00(0x41200000,0x41700000);
          local_18 = local_10c;
          FUN_00408bb0(local_20,afStack_58 + 5);
          afStack_d0[2] = local_5c;
          afStack_d0[(uint)bVar7 * -2 + 3] = afStack_58[(uint)bVar7 * -2];
          afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          if (&local_f4 != afStack_d0 + 2) {
            local_f4 = afStack_d0[2];
            local_f0 = afStack_d0[3];
            local_ec = local_c0;
          }
          local_dc = param_1;
          local_d8 = param_1;
          (**(code **)(*(int *)(local_24 + 0x154) + 0x108))(local_24,local_110);
          if (0.0 < local_10c) {
            fVar8 = (float10)local_10c * (float10)_DAT_005f6a21;
            FUN_005c03a0();
            local_18 = (float)(int)ROUND(fVar8);
            FUN_004e6060(0x01CD0E3C,afStack_58 + 5,0,(int)local_18 + 1,0);
            (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"kick1.wav");
          }
        }
        *(uint *)(param_1 + 0x26fc) = 0;
      }
      else if (uVar1 < 0xf) {
        if (uVar1 == 7) goto LAB_00588243;
        FUN_00434a80(param_1,uVar1);
      }
      else if (uVar1 < 0x10) {
        if (*(int *)(param_1 + 0x26fc) != 0) {
          FUN_00408bb0(param_1,*(int *)(param_1 + 0x26fc) + 0x20);
          local_a4 = local_38;
          afStack_a0[(uint)bVar7 * -2] = afStack_58[(uint)bVar7 * -2 + 9];
          afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
          if (0.0 < afStack_a0[1]) {
            (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"hit-gh[4,7].wav");
          }
        }
      }
      else if (uVar1 == 0x11) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"fall-1.wav");
      }
      else {
        FUN_00434a80(param_1,uVar1);
      }
    }
    else if (0x12 < uVar1) {
      if (uVar1 < 0x17) {
        if (uVar1 < 0x15) {
          if (uVar1 != 0x13) goto LAB_0058899d;
          FUN_0058cda0(param_1);
        }
        else if (uVar1 < 0x16) {
          if (*(int *)(param_1 + 0x2628) == *(int *)(param_1 + 0x20004)) {
            *(uint *)(param_1 + 0x20004) = 0;
          }
          FUN_004ec2c0(param_1,1);
          if (*(int *)(param_1 + 0x1ff5c) == 1) {
            *(uint *)(param_1 + 0x1ff5c) = 0;
          }
          else {
            FUN_00494340(0x01C3EB54,"actionPending = %d\nstranger.cpp line %d",
                         *(int *)(param_1 + 0x1ff5c),0x826);
          }
        }
        else {
          if (*(int *)(param_1 + 0x1ff5c) == 5) {
            *(uint *)(param_1 + 0x1ff5c) = 0;
          }
          else {
            FUN_00494340(0x01C3EB54,"actionPending = %d\nstranger.cpp line %d",
                         *(int *)(param_1 + 0x1ff5c),0x879);
          }
          if (*(int *)(param_1 + 0x1ff74) == 0) {
            FUN_00494340(0x01C3EB54,"doorToOpen == NULL\nstranger.cpp line %d",0x87f);
          }
          iVar3 = FUN_004eb5e0(param_1);
          if (iVar3 == 0) {
            FUN_005247c0(local_1c,0,1);
          }
        }
      }
      else if (uVar1 < 0x18) {
        FUN_004eb7f0(param_1);
      }
      else if (uVar1 < 0x29a) {
        if (uVar1 != 0x18) goto LAB_0058899d;
      }
      else if (uVar1 < 0x29b) {
        *(uint *)(param_1 + 0x251c) = 0x41200000;
      }
      else {
        if (uVar1 != 0x29b) goto LAB_0058899d;
        *(uint *)(param_1 + 0x251c) = 0x41000000;
      }
    }
LAB_005882ec:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
