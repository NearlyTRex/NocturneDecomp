// Name: FUN_005656f0
// Address: 005656f0
// Address Range: [[005656f0, 00565ecb]]
// Convention: unknown
// Signature: void FUN_005656f0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005656f0(int param_1,float param_2)

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
  byte *puVar10;
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
  float afStack_a0 [5];
  float afStack_8c [3];
  uint local_80;
  float afStack_7c [5];
  float afStack_68 [3];
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
  local_1c = param_1 + 0x2b4;
  local_28 = param_1 + 0x2562c;
  local_2c = param_1 + 0x25620;
  do {
    uVar1 = FUN_005030c0(local_1c,&param_2);
    if (uVar1 < 0x12) {
      if (uVar1 < 6) {
        if (uVar1 < 2) {
          if (uVar1 == 1) {
LAB_00565763:
            uVar2 = _DAT_0264be4c;
            if (uVar1 == 7) {
              uVar2 = _DAT_0264be50;
            }
            FUN_005469a0(local_1c,uVar2);
            afStack_7c[2] = (float)local_a4;
            afStack_7c[(uint)bVar7 * -2 + 3] = afStack_a0[(uint)bVar7 * -2];
            iVar3 = local_1c;
            afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
                 afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
            if (*(int *)(param_1 + 0x25614) == 0) {
              iVar4 = *(int *)(param_1 + 0x25694);
              if (iVar4 == 0) {
                if (*(int *)(param_1 + 0x2570) != 0) {
                  local_18 = (float)FUN_005038a0(local_1c,3);
                  if ((float)_DAT_005eb7b5 < local_18) {
                    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x2c))
                              (param_1,afStack_7c + 2,0x3fd9999a);
                  }
                  else {
                    local_18 = (float)FUN_005038a0(iVar3,1);
                    if (local_18 <= (float)_DAT_005eb7b5) {
                      local_18 = (float)FUN_005038a0(iVar3,2);
                      if ((float)_DAT_005eb7b5 < local_18) {
                        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x2c))
                                  (param_1,afStack_7c + 2,0x3f800000);
                      }
                    }
                    else {
                      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x2c))
                                (param_1,afStack_7c + 2,0x3f800000);
                    }
                  }
                }
                goto LAB_00565806;
              }
              local_18 = *(float *)(param_1 + 0x2b0);
              uVar2 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x4c))(iVar4,0x3f800000);
              FUN_00408d70(param_1,afStack_7c + 2,uVar2);
              pfVar9 = afStack_d0 + 8;
              pfVar6 = afStack_d0 + 8;
              pfVar5 = afStack_8c;
            }
            else {
              local_18 = *(float *)(param_1 + 0x2b0);
              uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x25614) + 0x2b0) + 0x4c))
                                (*(int *)(param_1 + 0x25614),0x3f800000);
              FUN_00408d70(param_1,afStack_7c + 2,uVar2);
              pfVar9 = afStack_a0 + 2;
              pfVar6 = afStack_a0 + 2;
              pfVar5 = afStack_7c + 5;
            }
            *pfVar6 = *pfVar5;
            iVar3 = param_1;
            pfVar6[(uint)bVar7 * -2 + 1] = pfVar5[(uint)bVar7 * -2 + 1];
            (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
                 (pfVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
            (**(code **)((int)local_18 + 0x30))(iVar3,pfVar9);
          }
          else {
LAB_00565ebd:
            FUN_0042aa00(param_1,uVar1);
          }
        }
        else if (uVar1 < 3) {
          if (*(int *)(param_1 + 0x256a4) == 4) {
            *(uint *)(param_1 + 0x256a4) = 0;
          }
          else {
            FUN_0047bdf0(0x01C25594,"actionPending = %d\nstranger.cpp line %d",
                         *(int *)(param_1 + 0x256a4),0x778);
          }
          iVar3 = *(int *)(param_1 + 0x25608);
          if (iVar3 == 0) {
            FUN_0047bdf0(0x01C25594,"Object to pick up is now NULL\nstranger.cpp line %d",0x77e);
          }
          else {
            iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x8c))(iVar3,param_1);
            if (iVar3 == 0) {
              *(uint *)(param_1 + 0x25608) = 0;
            }
            else {
              iVar4 = *(int *)(param_1 + 0x25608);
              if ((iVar4 != 0) &&
                 (iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x8c))(iVar4,param_1), iVar4 == 4))
              {
                *(uint *)(param_1 + 0x2d08) = 0;
                *(uint *)(param_1 + 0x2d04) = 0xe;
              }
              if (iVar3 == 2) {
                if (*(int *)(param_1 + 0x256a4) != 0) {
                  FUN_0047bdf0(0x01C25594,"actionPending = %d\nstranger.cpp line %d",
                               *(int *)(param_1 + 0x256a4),0x79c);
                }
                *(uint *)(param_1 + 0x256a4) = 1;
              }
              FUN_004cff50(param_1,1);
            }
          }
        }
        else {
          if (uVar1 != 3) goto LAB_00565ebd;
          iVar3 = *(int *)(param_1 + 0x2698);
          FUN_0056a1e0(param_1);
          iVar4 = *(int *)(param_1 + 0x256a4);
          if (iVar4 == 2) {
            if (iVar3 != 0) {
              (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x70))(iVar3,local_2c,local_28);
            }
LAB_00565858:
            *(uint *)(param_1 + 0x256a4) = 0;
          }
          else {
            if (iVar4 == 6) goto LAB_00565858;
            FUN_0047bdf0(0x01C25594,"<actionPending = %d\nstranger.cpp line %d" + 1,iVar4,0x75a);
          }
          *(uint *)(param_1 + 0x2561c) = 0;
          if (*(int *)(param_1 + 0x2d04) == 0xe) {
            *(uint *)(param_1 + 0x2d08) = 0;
            *(uint *)(param_1 + 0x2d04) = 0;
          }
          if (iVar3 == *(int *)(param_1 + 0x25698)) {
            *(uint *)(param_1 + 0x25698) = 0;
          }
        }
      }
      else if (uVar1 < 7) {
        local_24 = FUN_0040c8f0(*(uint *)(param_1 + 0x276c),_DAT_01c264e0);
        local_20 = local_24;
        if (local_24 != 0) {
          FUN_005469a0(local_1c,_DAT_0264be60);
          pfVar9 = afStack_58 + 2;
          afStack_58[2] = (float)local_d4;
          afStack_58[(uint)bVar7 * -2 + 3] = afStack_d0[(uint)bVar7 * -2];
          afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          FUN_00408d70(param_1,pfVar9);
          puVar10 = local_110;
          local_44[0] = (float)local_bc;
          afStack_58[(uint)bVar7 * -2 + 6] = afStack_d0[(uint)bVar7 * -2 + 6];
          afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
               afStack_d0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          FUN_004222d0(puVar10);
          local_10c = (float)FUN_0040cf60(0x41200000,0x41700000);
          local_18 = local_10c;
          FUN_00408de0(local_20,afStack_58 + 5);
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
          (**(code **)(*(int *)(local_24 + 0x2b0) + 0x110))(local_24,local_110);
          if (0.0 < local_10c) {
            fVar8 = (float10)local_10c * (float10)_DAT_005eb7ad;
            FUN_005b7ff0();
            local_18 = (float)(int)ROUND(fVar8);
            FUN_004c9850(0x01CB8284,afStack_58 + 5,0,(int)local_18 + 1,0);
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"kick1.wav");
          }
        }
        *(uint *)(param_1 + 0x276c) = 0;
      }
      else if (uVar1 < 0xf) {
        if (uVar1 == 7) goto LAB_00565763;
        FUN_0042aa00(param_1,uVar1);
      }
      else if (uVar1 < 0x10) {
        if (*(int *)(param_1 + 0x276c) != 0) {
          FUN_00408de0(param_1,*(int *)(param_1 + 0x276c) + 0x20);
          local_80 = local_38;
          afStack_7c[(uint)bVar7 * -2] = afStack_58[(uint)bVar7 * -2 + 9];
          afStack_7c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
          if (0.0 < afStack_7c[1]) {
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"hit-gh[4,7].wav");
          }
        }
      }
      else if (uVar1 == 0x11) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"fall-1.wav");
      }
      else {
        FUN_0042aa00(param_1,uVar1);
      }
    }
    else if (0x12 < uVar1) {
      if (uVar1 < 0x17) {
        if (uVar1 < 0x15) {
          if (uVar1 != 0x13) goto LAB_00565ebd;
          FUN_0056a160(param_1);
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
            FUN_0047bdf0(0x01C25594,"actionPending = %d\nstranger.cpp line %d",
                         *(int *)(param_1 + 0x256a4),0x7bc);
          }
        }
        else {
          if (*(int *)(param_1 + 0x256a4) == 5) {
            *(uint *)(param_1 + 0x256a4) = 0;
          }
          else {
            FUN_0047bdf0(0x01C25594,"actionPending = %d\nstranger.cpp line %d",
                         *(int *)(param_1 + 0x256a4),0x80f);
          }
          if (*(int *)(param_1 + 0x25604) == 0) {
            FUN_0047bdf0(0x01C25594,"doorToOpen == NULL\nstranger.cpp line %d",0x815);
          }
          iVar3 = FUN_004cf230(param_1);
          if (iVar3 == 0) {
            FUN_00503620(local_1c,0,1);
          }
        }
      }
      else if (uVar1 < 0x18) {
        FUN_004cf440(param_1);
      }
      else if (uVar1 < 0x29a) {
        if (uVar1 != 0x18) goto LAB_00565ebd;
      }
      else if (uVar1 < 0x29b) {
        *(uint *)(param_1 + 0x258c) = 0x41200000;
      }
      else {
        if (uVar1 != 0x29b) goto LAB_00565ebd;
        *(uint *)(param_1 + 0x258c) = 0x41000000;
      }
    }
LAB_00565806:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
