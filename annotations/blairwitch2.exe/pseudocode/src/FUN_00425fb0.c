// Name: FUN_00425fb0
// Address: 00425fb0
// Address Range: [[00425fb0, 004264cd]]
// Convention: unknown
// Signature: void FUN_00425fb0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425fb0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  float afStackY_1070 [1014];
  uint *puVar9;
  uint local_88;
  uint local_7c;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint *local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  
  bVar8 = 0;
  iVar4 = param_1 + 0x2b4;
  local_18 = FUN_00547890(iVar4);
  if (*(int *)(param_1 + 0x10224) == 0) {
    if (0 < *(int *)(param_1 + 0x3564)) {
      iVar3 = FUN_00547890(iVar4);
      local_40 = iVar3;
      iVar4 = FUN_00547810(iVar4);
      iVar7 = 0;
      if (0 < *(int *)(iVar3 + 0x1d1f8)) {
        iVar3 = 0;
        do {
          *(uint *)((int)&DAT_007bdc9c + iVar3) = 0;
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar7 < *(int *)(local_40 + 0x1d1f8));
      }
      fVar1 = 0x40400000;
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x3564)) {
        fVar2 = (float)_DAT_005ccd76;
        iVar7 = param_1;
        do {
          iVar3 = iVar3 + 1;
          (&DAT_007bdc9c)[*(int *)(iVar7 + 0x3574)] =
               (float)(&DAT_007bdc9c)[*(int *)(iVar7 + 0x3574)] +
               (*(float *)(iVar7 + 0x3584) * fVar2) / fVar1;
          iVar7 = iVar7 + 0x18;
        } while (iVar3 < *(int *)(param_1 + 0x3564));
      }
      iVar3 = 0;
      local_38 = 0;
      if (0 < *(int *)(local_40 + 0x1d1f8)) {
        local_48 = param_1 + 0x2b4;
        iVar7 = 0;
        local_3c = iVar4;
        do {
          if ((float)_DAT_005ccd76 <= *(float *)((int)&DAT_007bdc9c + iVar7)) {
            iVar3 = iVar3 + 1;
          }
          if (*(int *)(local_3c + 0x288c) == -1) {
            iVar3 = iVar3 + 1;
          }
          iVar4 = FUN_00547810(local_48);
          if (*(int *)(param_1 + 0x23f4 + *(int *)(iVar7 + 0x26fc + iVar4) * 4) == 0) {
            iVar3 = iVar3 + 1;
          }
          iVar7 = iVar7 + 4;
          local_3c = local_3c + 4;
          local_38 = local_38 + 1;
        } while (local_38 < *(int *)(local_40 + 0x1d1f8));
      }
      if (iVar3 == *(int *)(local_40 + 0x1d1f8)) {
        *(uint *)(param_1 + 0x10228) = 0x3f800000;
        *(uint *)(param_1 + 0x10224) = 1;
      }
      local_54 = (float)*(int *)(param_1 + 0x3564) * (float)_DAT_005ccd7e * (float)_DAT_005ccd86 +
                 (float)_DAT_005ccd8e;
      iVar4 = FUN_00550f20(*(uint *)(param_1 + 0x10220),local_54);
      if (iVar4 == 0) {
        FUN_00550450();
        FUN_00550270(local_54);
        uVar5 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))
                          (param_1,"character-onfire-loop.wav");
        *(uint *)(param_1 + 0x10220) = uVar5;
        FUN_005504d0();
      }
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x10228) - param_2;
    *(float *)(param_1 + 0x10228) = fVar1;
    if (fVar1 < 0.0) {
      FUN_00551050(*(uint *)(param_1 + 0x10220));
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))
                (param_1,"?character-onfire-fallapart.wav" + 1);
      FUN_00427360(param_1,0,0xbf800000,0);
    }
  }
  local_30 = 0;
  if (0 < *(int *)(param_1 + 0x3564)) {
    local_4c = param_1 + 0x1134;
    local_44 = param_1 + 0x3a20;
    local_24 = (int *)(param_1 + 0x3570);
    local_28 = param_1;
    local_2c = (uint *)(param_1 + 0x3a40);
    do {
      if (*(int *)(param_1 + 0x23f4 + *local_24 * 4) != 0) {
        *(uint *)(param_1 + 0xfc) = 1;
        FUN_00591530(local_24 + 2,local_24[1] * 0x30 + local_4c);
        puVar9 = &stack0xffffff9c;
        local_64 = local_7c;
        *(uint *)((int)&stack0xffffffa0 + (uint)bVar8 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff88 + (uint)bVar8 * -8);
        *(uint *)(&stack0xffffffa4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff8c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        FUN_00408d70(param_1,puVar9);
        iVar3 = local_30;
        iVar4 = local_44;
        local_70 = local_88;
        *(uint *)((int)&stack0xffffff94 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff7c + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffff98 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff80 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        iVar4 = iVar3 * 0x400 + iVar4;
        *local_2c = local_70;
        local_2c[1] = local_6c;
        local_2c[2] = local_68;
        fVar1 = (float)_DAT_005ccd96;
        *(float *)(local_28 + 0x3cd4) = (float)local_24[5] * fVar1;
        *(int *)(local_28 + 0x3cd8) = local_24[5];
        *(float *)(local_28 + 0x3cdc) = fVar1 * (float)local_24[5];
        (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x14))(iVar4,param_2);
      }
      local_24 = local_24 + 6;
      local_28 = local_28 + 0x400;
      local_2c = local_2c + 0x100;
      local_30 = local_30 + 1;
    } while (local_30 < *(int *)(param_1 + 0x3564));
  }
  if ((*(int *)(param_1 + 0x2810) == 0) && (0 < *(int *)(param_1 + 0x3564))) {
    local_20 = (int *)(param_1 + 0x3570);
    local_50 = param_2 * _DAT_005f407c;
    local_34 = 0;
    do {
      local_1c = local_20;
      if ((*(int *)(param_1 + 0x23f4 + *local_20 * 4) != 0) &&
         (fVar1 = local_50 * *(float *)(param_1 + 0x356c) + (float)local_20[5],
         local_20[5] = (int)fVar1, 0x40400000 < fVar1)) {
        local_20[5] = (int)0x40400000;
        iVar3 = 0;
        iVar4 = local_18;
        if (0 < *(int *)(local_18 + 0x1d1f8)) {
          do {
            if (*(uint *)(iVar4 + 0x1d21c) == local_1c[1]) {
              uVar6 = *(uint *)(iVar4 + 0x1d21c) ^ local_1c[1];
              iVar7 = param_1;
              if (0 < *(int *)(param_1 + 0x3564)) {
                do {
                  if (iVar3 == *(int *)(iVar7 + 0x3574)) break;
                  uVar6 = uVar6 + 1;
                  iVar7 = iVar7 + 0x18;
                } while ((int)uVar6 < *(int *)(param_1 + 0x3564));
              }
              if (uVar6 == *(uint *)(param_1 + 0x3564)) {
                FUN_00425bb0(param_1,local_18,iVar3);
              }
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 0x24;
          } while (iVar3 < *(int *)(local_18 + 0x1d1f8));
        }
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x3564)) {
          iVar3 = param_1;
          do {
            if (*(int *)(local_1c[1] * 0x24 + local_18 + 0x1d21c) == *(int *)(iVar3 + 0x3574))
            break;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x18;
          } while (iVar4 < *(int *)(param_1 + 0x3564));
        }
        if (iVar4 == *(int *)(param_1 + 0x3564)) {
          FUN_00425bb0(param_1,local_18,*(uint *)(local_1c[1] * 0x24 + local_18 + 0x1d21c));
        }
      }
      local_20 = local_20 + 6;
      local_34 = local_34 + 1;
    } while (local_34 < *(int *)(param_1 + 0x3564));
  }
  return;
}
