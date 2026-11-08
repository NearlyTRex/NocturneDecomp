// Name: FUN_0052e940
// Address: 0052e940
// Address Range: [[0052e940, 0052ef76]]
// Convention: unknown
// Signature: int FUN_0052e940(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0052e940(int param_1)

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
  float afStack_60 [4];
  int iStack_50;
  int local_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int iStack_18;
  
  bVar8 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14d164)) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x14d164));
  }
  if (*(int *)(0x01CB6900 + 0x228) != 0) {
    local_4c = FUN_0058e9e0();
    local_28 = 0;
  }
  _DAT_01fc9608 = 0;
  _DAT_01fc961c = 0;
  local_b0 = *(float *)(0x01CB6900 + 0x284);
  iVar3 = CONCAT22((short)((uint)local_b0 >> 0x10),
                   (ushort)(0.0 < local_b0) << 8 | (ushort)NAN(local_b0) << 10 |
                   (ushort)(local_b0 == 0.0) << 0xe);
  if (0.0 < local_b0) {
    afStack_60[3] = local_b0;
    FUN_00537fc0();
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
      local_2c = -999999;
      iVar3 = local_2c;
      do {
        local_2c = iVar3;
        local_24 = 999999;
        local_1c = 0;
        if (0 < *(int *)(param_1 + 0x14d164)) {
          local_20 = param_1;
          iVar3 = local_28 << 2;
          do {
            iVar4 = *(int *)(local_20 + 0x14d168);
            if (*(int *)(iVar4 + 0x104) == 0) {
              iVar5 = *(int *)(iVar4 + 100);
              if (iVar5 == local_2c) {
                puVar7 = (uint *)(iVar4 + 0x34 + (uint)bVar8 * -8);
                local_64 = *(float *)(iVar4 + 0x30);
                *(uint *)((int)afStack_60 + (uint)bVar8 * 0xfffffff8) = *puVar7;
                afStack_60[(uint)bVar8 * 0xfffffffe + (uint)bVar8 * 0xfffffffe + 1] =
                     (float)puVar7[(uint)bVar8 * -2 + 1];
                DAT_007bbff4 = iVar4;
                if (*(int *)(0x01CB6900 + 0x228) == 2) {
                  local_30 = FUN_0058e9e0();
                }
                (**(code **)(*(int *)(DAT_007bbff4 + 0x2b0) + 0x14))(DAT_007bbff4,local_b0);
                if (*(int *)(0x01CB6900 + 0x228) == 2) {
                  iVar4 = FUN_0058e9e0();
                  *(int *)(iVar3 + 0x200a3bc) = iVar4 - local_30;
                  *(int *)(iVar3 + 0x200c2fc) = DAT_007bbff4;
                }
                if (*(int *)(0x01CB6900 + 0x228) != 0) {
                  local_28 = local_28 + 1;
                  iVar3 = iVar3 + 4;
                }
                iVar4 = (**(code **)(*(int *)(DAT_007bbff4 + 0x2b0) + 0xcc))();
                if (iVar4 != 0) {
                  FUN_005121a0(iVar4);
                }
                if (((afStack_60[0] == *(float *)(DAT_007bbff4 + 0x34)) &&
                    (local_64 == *(float *)(DAT_007bbff4 + 0x30))) &&
                   (afStack_60[1] == *(float *)(DAT_007bbff4 + 0x38))) {
                  DAT_007bbff4 = 0;
                }
                else {
                  FUN_00408ae0();
                  DAT_007bbff4 = 0;
                }
              }
              else if ((local_2c < iVar5) && (iVar5 < local_24)) {
                local_24 = iVar5;
              }
            }
            local_20 = local_20 + 4;
            local_1c = local_1c + 1;
          } while (local_1c < *(int *)(param_1 + 0x14d164));
        }
        iVar3 = local_24;
      } while (local_24 < 999999);
    }
    iVar4 = 0;
    iVar3 = param_1;
    if (0 < *(int *)(param_1 + 0x14d164)) {
      do {
        iVar5 = FUN_0040c8f0(*(uint *)(iVar3 + 0x14d168),DAT_007bdc94);
        local_3c = iVar5;
        if (((iVar5 != 0) && (iVar6 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x114))(), iVar6 == 0))
           && (iStack_50 = iVar6, iVar5 = FUN_0049e3e0(0x01C3DEB4,iVar5 + 0x20,0,&uStack_70),
              iVar5 != 0)) {
          FUN_004222d0();
          uStack_7c = 4;
          if (&uStack_a0 != &uStack_70) {
            uStack_a0 = uStack_70;
            uStack_9c = uStack_6c;
            uStack_98 = uStack_68;
          }
          (**(code **)(*(int *)(local_3c + 0x2b0) + 0x110))(local_3c);
        }
        iVar5 = FUN_0040c8f0(*(uint *)(iVar3 + 0x14d168),_DAT_01cb8280);
        if (iVar5 != 0) {
          iStack_40 = iVar5 + 0x20;
          iVar6 = FUN_0049e3e0(0x01C3DEB4,iStack_40,0,0);
          if ((iVar6 != 0) && (iVar6 = FUN_004c72d0(), iVar6 != 0)) {
            FUN_004c6d40(iVar5);
          }
        }
        iVar5 = FUN_0040c8f0(*(uint *)(iVar3 + 0x14d168),_DAT_02653628);
        if (((iVar5 != 0) && (*(int *)(iVar5 + 0x2d0) == 7)) && (*(char *)(iVar5 + 0x464) == '\0'))
        {
          afStack_60[2] = 0.0;
          iVar6 = FUN_0049e3e0(0x01C3DEB4,iVar5 + 0x20,0,0);
          if (iVar6 != 0) {
            FUN_005785b0(iVar5);
          }
        }
        iVar5 = FUN_0040c8f0(*(uint *)(iVar3 + 0x14d168),_DAT_01cab6f8);
        if ((iVar5 != 0) && (iVar5 = FUN_0049e3e0(0x01C3DEB4,iVar5 + 0x20,0), iVar5 != 0)) {
          FUN_004a08d0();
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x14d164));
    }
    if (*(int *)(0x01CB6900 + 0x228) != 0) {
      if (*(int *)(0x01CB6900 + 0x228) == 2) {
        local_34 = 0;
        local_44 = local_28 + -1;
        local_38 = 0;
        if (0 < local_44) {
          iStack_48 = local_28 << 2;
          do {
            if (local_34 + 1 < local_28) {
              iVar3 = (local_34 + 1) * 4;
              do {
                iVar4 = *(int *)(local_38 + 0x200a3bc);
                if (iVar4 < *(int *)(iVar3 + 0x200a3bc)) {
                  *(int *)(local_38 + 0x200a3bc) = *(int *)(iVar3 + 0x200a3bc);
                  *(int *)(iVar3 + 0x200a3bc) = iVar4;
                  uVar2 = *(uint *)(local_38 + 0x200c2fc);
                  *(uint *)(local_38 + 0x200c2fc) = *(uint *)(iVar3 + 0x200c2fc);
                  *(uint *)(iVar3 + 0x200c2fc) = uVar2;
                }
                iVar3 = iVar3 + 4;
              } while (iVar3 < iStack_48);
            }
            local_38 = local_38 + 4;
            local_34 = local_34 + 1;
          } while (local_34 < local_44);
        }
        iVar3 = 0x14;
        if (local_28 < 0x14) {
          iVar3 = local_28;
        }
        if (0 < iVar3) {
          iVar5 = 0;
          iVar4 = 0;
          do {
            piVar1 = (int *)(iVar5 + 0x200a3bc);
            puVar7 = (uint *)(iVar5 + 0x200c2fc);
            iVar5 = iVar5 + 4;
            iVar6 = iVar4 + 1;
            FUN_00436710(PTR_DAT_00609ed0,"%d. %s : %3.2f ms\n",iVar4,*puVar7,
                         ((double)*piVar1 * _DAT_005e586a * _DAT_005e5872 * _DAT_005e587a) /
                         (double)local_b0);
            iVar4 = iVar6;
          } while (iVar6 < iVar3);
        }
      }
      iVar3 = local_4c;
      iStack_18 = FUN_0058e9e0();
      iStack_18 = iStack_18 - iVar3;
      FUN_00436710(PTR_DAT_00609ed0,"Process time (%d actors) : %3.2f ms\n",local_28,
                   ((double)iStack_18 * _DAT_005e586a * _DAT_005e5872 * _DAT_005e587a) /
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
