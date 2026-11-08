// Name: FUN_0051b550
// Address: 0051b550
// Address Range: [[0051b550, 0051c09a]]
// Convention: unknown
// Signature: void FUN_0051b550(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b550(int param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  float10 fVar8;
  float afStackY_10d0 [981];
  float *pfVar9;
  uint *puVar10;
  byte *puVar11;
  byte local_160 [4];
  float local_15c;
  float local_144;
  uint local_140;
  uint local_13c;
  int local_12c;
  int local_128;
  byte local_124 [4];
  uint local_120;
  uint local_e8;
  float afStack_e4 [4];
  uint local_d4;
  float afStack_d0 [3];
  float afStack_c4 [3];
  float afStack_b8 [3];
  uint local_ac;
  float afStack_a8 [5];
  uint local_94;
  uint local_7c;
  float afStack_78 [4];
  float local_68;
  float local_64;
  uint local_58;
  float local_4c;
  float local_48;
  float local_44;
  float afStack_40 [3];
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
  local_24 = param_1 + 0x158;
  local_30 = param_1 + 0x20bbc;
  local_34 = param_1 + 0x20bb0;
  do {
    uVar1 = FUN_004fbb70(local_24,&param_2);
    if (uVar1 < 0x12) {
      if (uVar1 < 6) {
        if (uVar1 < 2) {
          if (uVar1 == 1) {
LAB_0051b5c3:
            uVar2 = _DAT_01ed36f8;
            if (uVar1 == 7) {
              uVar2 = _DAT_01ed36fc;
            }
            FUN_0054dbd0(local_24,uVar2);
            local_ac = afStack_a8[2];
            afStack_a8[(uint)bVar7 * -2] = afStack_a8[(uint)bVar7 * -2 + 3];
            afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
            iVar3 = *(int *)(param_1 + 0x20ba4);
            if (iVar3 == 0) {
              if (*(int *)(param_1 + 0x20c20) == 0) {
                if (*(int *)(param_1 + 0x2500) != 0) {
                  local_14 = (float)FUN_004fc350(local_24,4);
                  iVar3 = local_24;
                  if ((float)_DAT_005cd307 < local_14) {
                    (**(code **)(*(int *)(param_1 + 0x154) + 0x24))(param_1,&local_ac,0x3fd9999a);
                  }
                  else {
                    local_14 = (float)FUN_004fc350(local_24,1);
                    if (((float)_DAT_005cd307 < local_14) ||
                       (local_14 = (float)FUN_004fc350(iVar3,2), (float)_DAT_005cd307 < local_14)) {
                      (**(code **)(*(int *)(param_1 + 0x154) + 0x24))(param_1,&local_ac,0x3f800000);
                    }
                    else {
                      local_14 = (float)FUN_004fc350(iVar3,3);
                      if ((float)_DAT_005cd307 < local_14) {
                        (**(code **)(*(int *)(param_1 + 0x154) + 0x24))
                                  (param_1,&local_ac,0x3fd9999a);
                      }
                      else {
                        local_14 = (float)FUN_004fc350(iVar3,5);
                        if (((local_14 <= (float)_DAT_005cd307) &&
                            (local_14 = (float)FUN_004fc350(iVar3,6),
                            local_14 <= (float)_DAT_005cd307)) &&
                           (local_14 = (float)FUN_004fc350(iVar3,7),
                           local_14 <= (float)_DAT_005cd307)) {
                          local_14 = (float)FUN_004fc350(iVar3,8);
                          if ((((float)_DAT_005cd307 < local_14) ||
                              (local_14 = (float)FUN_004fc350(iVar3,9),
                              (float)_DAT_005cd307 < local_14)) ||
                             (local_14 = (float)FUN_004fc350(iVar3,10),
                             (float)_DAT_005cd307 < local_14)) {
LAB_0051bbd6:
                            (**(code **)(*(int *)(param_1 + 0x154) + 0x24))
                                      (param_1,&local_ac,0x3f800000);
                            goto LAB_0051b667;
                          }
                          local_14 = (float)FUN_004fc350(iVar3,0xb);
                          if (local_14 <= (float)_DAT_005cd307) {
                            local_14 = (float)FUN_004fc350(iVar3,0xc);
                            if ((float)_DAT_005cd307 < local_14) goto LAB_0051bbd6;
                            local_14 = (float)FUN_004fc350(iVar3,0xd);
                            if (((local_14 <= (float)_DAT_005cd307) &&
                                (local_14 = (float)FUN_004fc350(iVar3,0xe),
                                local_14 <= (float)_DAT_005cd307)) &&
                               (local_14 = (float)FUN_004fc350(iVar3,0xf),
                               local_14 <= (float)_DAT_005cd307)) {
                              local_14 = (float)FUN_004fc350(iVar3,0x10);
                              if ((float)_DAT_005cd307 < local_14) {
                                (**(code **)(*(int *)(param_1 + 0x154) + 0x24))
                                          (param_1,&local_ac,0x3f800000);
                              }
                              goto LAB_0051b667;
                            }
                          }
                        }
                        (**(code **)(*(int *)(param_1 + 0x154) + 0x24))
                                  (param_1,&local_ac,0x3f800000);
                      }
                    }
                  }
                }
                goto LAB_0051b667;
              }
              local_14 = *(float *)(param_1 + 0x154);
              uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0x20c20) + 0x154) + 0x44))
                                (*(int *)(param_1 + 0x20c20),0x3f800000);
              FUN_00408b80(param_1,&local_ac,uVar2);
              pfVar9 = afStack_e4 + 5;
              pfVar6 = afStack_e4 + 5;
              pfVar5 = afStack_e4 + 8;
            }
            else {
              local_14 = *(float *)(param_1 + 0x154);
              uVar2 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x44))(iVar3,0x3f800000);
              FUN_00408b80(param_1,&local_ac,uVar2);
              pfVar9 = afStack_b8;
              pfVar6 = afStack_b8;
              pfVar5 = afStack_78 + 0xe;
            }
            *pfVar6 = *pfVar5;
            iVar3 = param_1;
            pfVar6[(uint)bVar7 * -2 + 1] = pfVar5[(uint)bVar7 * -2 + 1];
            (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
                 (pfVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
            (**(code **)((int)local_14 + 0x28))(iVar3,pfVar9);
          }
          else {
LAB_0051c08c:
            FUN_00433fb0(param_1,uVar1);
          }
        }
        else if (uVar1 < 3) {
          if (*(int *)(param_1 + 0x20b64) == 4) {
            *(uint *)(param_1 + 0x20b64) = 0;
          }
          else {
            FUN_0047cee0(0x01C5B0E4,"actionPending = %d\nprye.cpp line %d",
                         *(int *)(param_1 + 0x20b64),0xa56);
          }
          iVar3 = *(int *)(param_1 + 0x20b98);
          if (iVar3 == 0) {
            FUN_0047cee0(0x01C5B0E4,"Object to pick up is now NULL\nprye.cpp line %d",0xa5c);
          }
          else {
            iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x84))(iVar3,param_1);
            if (iVar3 == 0) {
              *(uint *)(param_1 + 0x20b98) = 0;
            }
            else {
              iVar4 = *(int *)(param_1 + 0x20b98);
              if ((iVar4 != 0) &&
                 (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x84))(iVar4,param_1), iVar4 == 4))
              {
                *(uint *)(param_1 + 0x2f04) = 0;
                *(uint *)(param_1 + 0x2f00) = 0x11;
              }
              if (iVar3 == 2) {
                if (*(int *)(param_1 + 0x20b64) != 0) {
                  FUN_0047cee0(0x01C5B0E4,"actionPending = %d\nprye.cpp line %d",
                               *(int *)(param_1 + 0x20b64),0xa7a);
                }
                *(uint *)(param_1 + 0x20b64) = 1;
              }
              FUN_004d4160(param_1,1);
            }
          }
        }
        else {
          if (uVar1 != 3) goto LAB_0051c08c;
          iVar3 = *(int *)(param_1 + 0x2628);
          FUN_00520da0(param_1);
          iVar4 = *(int *)(param_1 + 0x20b64);
          if (iVar4 == 2) {
            if (iVar3 != 0) {
              (**(code **)(*(int *)(iVar3 + 0x154) + 0x68))(iVar3,local_34,local_30);
            }
LAB_0051b6b9:
            *(uint *)(param_1 + 0x20b64) = 0;
          }
          else {
            if (iVar4 == 6) goto LAB_0051b6b9;
            FUN_0047cee0(0x01C5B0E4,"?actionPending = %d\nprye.cpp line %d" + 1,iVar4,0xa38);
          }
          *(uint *)(param_1 + 0x20bac) = 0;
          if (*(int *)(param_1 + 0x2f00) == 0x11) {
            *(uint *)(param_1 + 0x2f04) = 0;
            *(uint *)(param_1 + 0x2f00) = 0;
          }
          if (iVar3 == *(int *)(param_1 + 0x20c24)) {
            *(uint *)(param_1 + 0x20c24) = 0;
          }
        }
      }
      else if (uVar1 < 7) {
        local_28 = FUN_0040c840(*(uint *)(param_1 + 0x26fc),_DAT_01c5bc48);
        local_2c = local_28;
        if (local_28 != 0) {
          FUN_0054dbd0(local_24,_DAT_01ed370c);
          puVar10 = &local_7c;
          local_7c = local_58;
          afStack_78[(uint)bVar7 * -2] = afStack_78[(uint)bVar7 * -2 + 9];
          afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
          FUN_00408b80(param_1,puVar10);
          puVar11 = local_160;
          local_e8 = local_94;
          afStack_e4[(uint)bVar7 * -2] = afStack_a8[(uint)bVar7 * -2 + 6];
          afStack_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
               afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          FUN_0042abb0(puVar11);
          local_15c = (float)FUN_0040ce40(0x3f800000,0x40400000);
          local_14 = local_15c;
          FUN_00408bf0(local_28,&local_e8);
          afStack_e4[2] = local_64;
          afStack_e4[(uint)bVar7 * -2 + 3] = afStack_78[(uint)bVar7 * -2 + 6];
          afStack_e4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          if (&local_144 != afStack_e4 + 2) {
            local_144 = afStack_e4[2];
            local_140 = afStack_e4[3];
            local_13c = local_d4;
          }
          local_12c = param_1;
          local_128 = param_1;
          (**(code **)(*(int *)(local_2c + 0x154) + 0x108))(local_2c,local_160);
          if (0.0 < local_15c) {
            fVar8 = (float10)local_15c * (float10)_DAT_005cd2ff;
            FUN_005a3120();
            local_14 = (float)(int)ROUND(fVar8);
            FUN_004ce9c0(0x01D22E44,&local_e8,0,(int)local_14 + 1,0);
          }
        }
        local_20 = 0;
        for (local_1c = 0; local_1c < *(int *)(0x01ED78C8 + 0x150fec); local_1c = local_1c + 1) {
          local_18 = *(int *)(0x01ED78C8 + local_20 + 0x150ff0);
          iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          local_4c = *(float *)(iVar3 + 0x20) - *(float *)(local_18 + 0x20);
          local_48 = *(float *)(iVar3 + 0x24) - *(float *)(local_18 + 0x24);
          local_44 = *(float *)(iVar3 + 0x28) - *(float *)(local_18 + 0x28);
          afStack_78[2] = local_4c;
          afStack_78[(uint)bVar7 * -2 + 3] = afStack_78[(uint)bVar7 * -2 + 0xc];
          afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_78[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
          if (SQRT(local_68 * local_68 +
                   afStack_78[2] * afStack_78[2] + afStack_78[3] * afStack_78[3]) <=
              (float)_DAT_005cd30f) {
            FUN_0042abb0(local_124);
            local_120 = 0x40a00000;
            (**(code **)(*(int *)(local_18 + 0x154) + 0x108))(local_18,local_124);
          }
          local_20 = local_20 + 4;
        }
        *(uint *)(param_1 + 0x26fc) = 0;
      }
      else if (uVar1 < 0xf) {
        if (uVar1 == 7) goto LAB_0051b5c3;
        FUN_00433fb0(param_1,uVar1);
      }
      else if (uVar1 < 0x10) {
        if (*(int *)(param_1 + 0x26fc) != 0) {
          FUN_00408bf0(param_1,*(int *)(param_1 + 0x26fc) + 0x20);
        }
      }
      else if (uVar1 == 0x11) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"fall-1.wav");
      }
      else {
        FUN_00433fb0(param_1,uVar1);
      }
    }
    else if (0x12 < uVar1) {
      if (uVar1 < 0x17) {
        if (uVar1 < 0x15) {
          if (uVar1 != 0x13) goto LAB_0051c08c;
          FUN_00520d20(param_1);
        }
        else if (uVar1 < 0x16) {
          if (*(int *)(param_1 + 0x2628) == *(int *)(param_1 + 0x20c24)) {
            *(uint *)(param_1 + 0x20c24) = 0;
          }
          FUN_004d41a0(param_1,1);
          if (*(int *)(param_1 + 0x20b64) == 1) {
            *(uint *)(param_1 + 0x20b64) = 0;
          }
          else {
            FUN_0047cee0(0x01C5B0E4,"actionPending = %d\nprye.cpp line %d",
                         *(int *)(param_1 + 0x20b64),0xa9a);
          }
        }
        else {
          if (*(int *)(param_1 + 0x20b64) == 5) {
            *(uint *)(param_1 + 0x20b64) = 0;
          }
          else {
            FUN_0047cee0(0x01C5B0E4,"actionPending = %d\nprye.cpp line %d",
                         *(int *)(param_1 + 0x20b64),0xb13);
          }
          if (*(int *)(param_1 + 0x20b94) == 0) {
            FUN_0047cee0(0x01C5B0E4,"doorToOpen == NULL\nprye.cpp line %d",0xb19);
          }
          iVar3 = FUN_004d3250(param_1);
          if (iVar3 == 0) {
            FUN_004fc0d0(local_24,0,1);
          }
        }
      }
      else if (uVar1 < 0x18) {
        FUN_004d3460(param_1);
      }
      else if (uVar1 < 0x29a) {
        if (uVar1 != 0x18) goto LAB_0051c08c;
      }
      else if (uVar1 < 0x29b) {
        *(uint *)(param_1 + 0x251c) = 0x41200000;
      }
      else {
        if (uVar1 != 0x29b) goto LAB_0051c08c;
        *(uint *)(param_1 + 0x251c) = 0x41000000;
      }
    }
LAB_0051b667:
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
