// Name: FUN_005353e0
// Address: 005353e0
// Address Range: [[005353e0, 00535a77]]
// Convention: unknown
// Signature: int FUN_005353e0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005353e0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_104c [993];
  float local_b0;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_7c;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  float local_64;
  float afStack_60 [3];
  int aiStack_54 [3];
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  bVar8 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14d164)) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x14d164));
  }
  if (*(int *)(0x01D2130C + 0x230) != 0) {
    local_48 = FUN_005806a0();
    local_24 = 0;
  }
  _DAT_0203ad1c = 0;
  _DAT_0203ad30 = 0;
  local_b0 = *(float *)(0x01D2130C + 0x314);
  iVar3 = CONCAT22((short)((uint)local_b0 >> 0x10),
                   (ushort)(0.0 < local_b0) << 8 | (ushort)NAN(local_b0) << 10 |
                   (ushort)(local_b0 == 0.0) << 0xe);
  if (0.0 < local_b0) {
    afStack_60[2] = local_b0;
    FUN_0053eda0();
    iVar4 = 0;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x14d164)) {
      do {
        *(int *)(*(int *)(iVar3 + 0x14d168) + 0x6c) = iVar4;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x14d164));
    }
    if (0.0 < local_b0) {
      local_28 = -999999;
      iVar3 = local_28;
      do {
        local_28 = iVar3;
        local_20 = 999999;
        local_18 = 0;
        if (0 < *(int *)(param_1 + 0x14d164)) {
          local_1c = param_1;
          iVar3 = local_24 << 2;
          do {
            iVar4 = *(int *)(local_1c + 0x14d168);
            if (*(int *)(iVar4 + 0x104) == 0) {
              iVar5 = *(int *)(iVar4 + 100);
              if (iVar5 == local_28) {
                puVar7 = (uint *)(iVar4 + 0x34 + (uint)bVar8 * -8);
                local_64 = *(float *)(iVar4 + 0x30);
                *(uint *)((int)afStack_60 + (uint)bVar8 * 0xfffffff8) = *puVar7;
                afStack_60[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 1] =
                     (float)puVar7[(uint)bVar8 * -2 + 1];
                DAT_007df974 = iVar4;
                if (*(int *)(0x01D2130C + 0x230) == 2) {
                  local_2c = FUN_005806a0();
                }
                (**(code **)(*(int *)(DAT_007df974 + 0x154) + 0xc))(DAT_007df974,local_b0);
                if (*(int *)(0x01D2130C + 0x230) == 2) {
                  iVar4 = FUN_005806a0();
                  *(int *)(iVar3 + 0x207bad8) = iVar4 - local_2c;
                  *(int *)(iVar3 + 0x207da18) = DAT_007df974;
                }
                if (*(int *)(0x01D2130C + 0x230) != 0) {
                  local_24 = local_24 + 1;
                  iVar3 = iVar3 + 4;
                }
                iVar4 = (**(code **)(*(int *)(DAT_007df974 + 0x154) + 0xc4))();
                if (iVar4 != 0) {
                  FUN_0050b1d0(iVar4);
                }
                if (((afStack_60[0] == *(float *)(DAT_007df974 + 0x34)) &&
                    (local_64 == *(float *)(DAT_007df974 + 0x30))) &&
                   (afStack_60[1] == *(float *)(DAT_007df974 + 0x38))) {
                  DAT_007df974 = 0;
                }
                else {
                  FUN_004088f0();
                  DAT_007df974 = 0;
                }
              }
              else if ((local_28 < iVar5) && (iVar5 < local_20)) {
                local_20 = iVar5;
              }
            }
            local_1c = local_1c + 4;
            local_18 = local_18 + 1;
          } while (local_18 < *(int *)(param_1 + 0x14d164));
        }
        iVar3 = local_20;
      } while (local_20 < 999999);
    }
    iVar4 = 0;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x14d164)) {
      do {
        iVar5 = FUN_0040c840(*(uint *)(iVar3 + 0x14d168),DAT_007e2cec);
        local_38 = iVar5;
        if (((iVar5 != 0) && (iVar6 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(), iVar6 == 0))
           && (aiStack_54[0] = iVar6,
              iVar6 = FUN_004a3790(0x01C73654,iVar5 + 0x20,0,&uStack_70,aiStack_54), iVar6 != 0))
        {
          if (aiStack_54[2] == 1) {
            iVar6 = FUN_0040c840(iVar5,_DAT_01d5ba70);
            if (iVar6 == 0) {
              *(uint *)(iVar5 + 0x3254) = 0x41200000;
              *(uint *)(iVar5 + 0x3258) = 0;
            }
          }
          else if (aiStack_54[2] == 0) {
            FUN_0042abb0();
            uStack_7c = 4;
            if (&uStack_a0 != &uStack_70) {
              uStack_a0 = uStack_70;
              uStack_9c = uStack_6c;
              uStack_98 = uStack_68;
            }
            (**(code **)(*(int *)(local_38 + 0x154) + 0x108))(local_38);
          }
        }
        iVar5 = FUN_0040c840(*(uint *)(iVar3 + 0x14d168),_DAT_01d22e04);
        if (iVar5 != 0) {
          iStack_3c = iVar5 + 0x20;
          iVar6 = FUN_004a3790(0x01C73654,iStack_3c,0,0,0);
          if ((iVar6 != 0) && (iVar6 = FUN_004cc5d0(), iVar6 != 0)) {
            FUN_004cc040(iVar5);
          }
        }
        iVar5 = FUN_0040c840(*(uint *)(iVar3 + 0x14d168),_DAT_02cfd894);
        if (((iVar5 != 0) && (*(int *)(iVar5 + 0x174) == 7)) && (*(char *)(iVar5 + 0x308) == '\0'))
        {
          aiStack_54[1] = 0;
          iVar6 = FUN_004a3790(0x01C73654,iVar5 + 0x20,0,0,aiStack_54 + 1);
          if (iVar6 != 0) {
            FUN_0056ee20(iVar5);
          }
        }
        iVar5 = FUN_0040c840(*(uint *)(iVar3 + 0x14d168),_DAT_01d0cf60);
        if ((iVar5 != 0) && (iVar5 = FUN_004a3790(0x01C73654,iVar5 + 0x20,0,0), iVar5 != 0)) {
          FUN_004a7110();
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x14d164));
    }
    if (*(int *)(0x01D2130C + 0x230) != 0) {
      if (*(int *)(0x01D2130C + 0x230) == 2) {
        local_30 = 0;
        local_40 = local_24 + -1;
        local_34 = 0;
        if (0 < local_40) {
          iStack_44 = local_24 << 2;
          do {
            if (local_30 + 1 < local_24) {
              iVar3 = (local_30 + 1) * 4;
              do {
                iVar4 = *(int *)(local_34 + 0x207bad8);
                if (iVar4 < *(int *)(iVar3 + 0x207bad8)) {
                  *(uint *)(local_34 + 0x207bad8) = *(uint *)(iVar3 + 0x207bad8);
                  *(int *)(iVar3 + 0x207bad8) = iVar4;
                  uVar2 = *(uint *)(local_34 + 0x207da18);
                  *(uint *)(local_34 + 0x207da18) = *(uint *)(iVar3 + 0x207da18);
                  *(uint *)(iVar3 + 0x207da18) = uVar2;
                }
                iVar3 = iVar3 + 4;
              } while (iVar3 < iStack_44);
            }
            local_34 = local_34 + 4;
            local_30 = local_30 + 1;
          } while (local_30 < local_40);
        }
        iVar3 = 0x14;
        if (local_24 < 0x14) {
          iVar3 = local_24;
        }
        if (0 < iVar3) {
          iVar5 = 0;
          iVar4 = 0;
          do {
            piVar1 = (int *)(iVar5 + 0x207bad8);
            puVar7 = (uint *)(iVar5 + 0x207da18);
            iVar5 = iVar5 + 4;
            iVar6 = iVar4 + 1;
            FUN_00441ff0(PTR_DAT_005f1690,"%d. %s : %3.2f ms\n",iVar4,*puVar7,
                         ((double)*piVar1 * _DAT_005d0527 * _DAT_005d052f * _DAT_005d0537) /
                         (double)local_b0);
            iVar4 = iVar6;
          } while (iVar6 < iVar3);
        }
      }
      iVar3 = local_48;
      iStack_14 = FUN_005806a0();
      iStack_14 = iStack_14 - iVar3;
      FUN_00441ff0(PTR_DAT_005f1690,"Process time (%d actors) : %3.2f ms\n",local_24,
                   ((double)iStack_14 * _DAT_005d0527 * _DAT_005d052f * _DAT_005d0537) /
                   (double)local_b0);
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x14d164)) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x14d164));
    }
  }
  return iVar3;
}
