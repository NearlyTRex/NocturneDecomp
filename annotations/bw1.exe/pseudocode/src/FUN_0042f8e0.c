// Name: FUN_0042f8e0
// Address: 0042f8e0
// Address Range: [[0042f8e0, 0042fdfe]]
// Convention: unknown
// Signature: void FUN_0042f8e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f8e0(int param_1,float param_2)

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
  iVar4 = param_1 + 0x158;
  local_18 = FUN_00569f30(iVar4);
  if (*(int *)(param_1 + 0xb9e8) == 0) {
    if (0 < *(int *)(param_1 + 0x3120)) {
      iVar3 = FUN_00569f30(iVar4);
      local_40 = iVar3;
      iVar4 = FUN_00569eb0(iVar4);
      iVar7 = 0;
      if (0 < *(int *)(iVar3 + 0x1de78)) {
        iVar3 = 0;
        do {
          *(uint *)((int)&DAT_007c6384 + iVar3) = 0;
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar7 < *(int *)(local_40 + 0x1de78));
      }
      fVar1 = 0x40400000;
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x3120)) {
        fVar2 = (float)_DAT_005d59ff;
        iVar7 = param_1;
        do {
          iVar3 = iVar3 + 1;
          (&DAT_007c6384)[*(int *)(iVar7 + 0x3130)] =
               (float)(&DAT_007c6384)[*(int *)(iVar7 + 0x3130)] +
               (*(float *)(iVar7 + 0x3140) * fVar2) / fVar1;
          iVar7 = iVar7 + 0x18;
        } while (iVar3 < *(int *)(param_1 + 0x3120));
      }
      iVar3 = 0;
      local_38 = 0;
      if (0 < *(int *)(local_40 + 0x1de78)) {
        local_48 = param_1 + 0x158;
        iVar7 = 0;
        local_3c = iVar4;
        do {
          if ((float)_DAT_005d59ff <= *(float *)((int)&DAT_007c6384 + iVar7)) {
            iVar3 = iVar3 + 1;
          }
          if (*(int *)(local_3c + 0x33cc) == -1) {
            iVar3 = iVar3 + 1;
          }
          iVar4 = FUN_00569eb0(local_48);
          if (*(int *)(param_1 + 0x2298 + *(int *)(iVar7 + 0x323c + iVar4) * 4) == 0) {
            iVar3 = iVar3 + 1;
          }
          iVar7 = iVar7 + 4;
          local_3c = local_3c + 4;
          local_38 = local_38 + 1;
        } while (local_38 < *(int *)(local_40 + 0x1de78));
      }
      if (iVar3 == *(int *)(local_40 + 0x1de78)) {
        *(uint *)(param_1 + 0xb9ec) = 0x3f800000;
        *(uint *)(param_1 + 0xb9e8) = 1;
      }
      local_54 = (float)*(int *)(param_1 + 0x3120) * (float)_DAT_005d5a07 * (float)_DAT_005d5a0f +
                 (float)_DAT_005d5a17;
      iVar4 = FUN_00573950(*(uint *)(param_1 + 0xb9e4),local_54);
      if (iVar4 == 0) {
        FUN_00572ac0();
        FUN_005728e0(local_54);
        uVar5 = (**(code **)(*(int *)(param_1 + 0x154) + 0x30))
                          (param_1,"character-onfire-loop.wav");
        *(uint *)(param_1 + 0xb9e4) = uVar5;
        FUN_00572b40();
      }
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0xb9ec) - param_2;
    *(float *)(param_1 + 0xb9ec) = fVar1;
    if (fVar1 < 0.0) {
      FUN_00573a80(*(uint *)(param_1 + 0xb9e4));
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                (param_1,"?character-onfire-fallapart.wav" + 1);
      FUN_00430d90(param_1,0,0xbf800000,0);
    }
  }
  local_30 = 0;
  if (0 < *(int *)(param_1 + 0x3120)) {
    local_4c = param_1 + 0xfd8;
    local_44 = param_1 + 0x35dc;
    local_24 = (int *)(param_1 + 0x312c);
    local_28 = param_1;
    local_2c = (uint *)(param_1 + 0x35fc);
    do {
      if (*(int *)(param_1 + 0x2298 + *local_24 * 4) != 0) {
        *(uint *)(param_1 + 0xfc) = 1;
        FUN_005b5080(local_24 + 2,local_24[1] * 0x30 + local_4c);
        puVar9 = &stack0xffffff9c;
        local_64 = local_7c;
        *(uint *)((int)&stack0xffffffa0 + (uint)bVar8 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff88 + (uint)bVar8 * -8);
        *(uint *)(&stack0xffffffa4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff8c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        FUN_00408b40(param_1,puVar9);
        iVar4 = local_30 * 0x2a4;
        local_70 = local_88;
        *(uint *)((int)&stack0xffffff94 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff7c + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffff98 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff80 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        *local_2c = local_70;
        local_2c[1] = local_6c;
        local_2c[2] = local_68;
        fVar1 = (float)_DAT_005d5a1f;
        *(float *)(local_28 + 0x3734) = (float)local_24[5] * fVar1;
        *(int *)(local_28 + 0x3738) = local_24[5];
        iVar4 = iVar4 + local_44;
        *(float *)(local_28 + 0x373c) = fVar1 * (float)local_24[5];
        (**(code **)(*(int *)(iVar4 + 0x154) + 0xc))(iVar4,param_2);
      }
      local_24 = local_24 + 6;
      local_28 = local_28 + 0x2a4;
      local_2c = local_2c + 0xa9;
      local_30 = local_30 + 1;
    } while (local_30 < *(int *)(param_1 + 0x3120));
  }
  if ((*(int *)(param_1 + 0x27a4) == 0) && (0 < *(int *)(param_1 + 0x3120))) {
    local_20 = (int *)(param_1 + 0x312c);
    local_50 = param_2 * _DAT_005fd60c;
    local_34 = 0;
    do {
      local_1c = local_20;
      if ((*(int *)(param_1 + 0x2298 + *local_20 * 4) != 0) &&
         (fVar1 = local_50 * *(float *)(param_1 + 0x3128) + (float)local_20[5],
         local_20[5] = (int)fVar1, 0x40400000 < fVar1)) {
        local_20[5] = (int)0x40400000;
        iVar3 = 0;
        iVar4 = local_18;
        if (0 < *(int *)(local_18 + 0x1de78)) {
          do {
            if (*(uint *)(iVar4 + 0x1de9c) == local_1c[1]) {
              uVar6 = *(uint *)(iVar4 + 0x1de9c) ^ local_1c[1];
              iVar7 = param_1;
              if (0 < *(int *)(param_1 + 0x3120)) {
                do {
                  if (iVar3 == *(int *)(iVar7 + 0x3130)) break;
                  uVar6 = uVar6 + 1;
                  iVar7 = iVar7 + 0x18;
                } while ((int)uVar6 < *(int *)(param_1 + 0x3120));
              }
              if (uVar6 == *(uint *)(param_1 + 0x3120)) {
                FUN_0042f4d0(param_1,local_18,iVar3);
              }
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 0x24;
          } while (iVar3 < *(int *)(local_18 + 0x1de78));
        }
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x3120)) {
          iVar3 = param_1;
          do {
            if (*(int *)(local_1c[1] * 0x24 + local_18 + 0x1de9c) == *(int *)(iVar3 + 0x3130))
            break;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x18;
          } while (iVar4 < *(int *)(param_1 + 0x3120));
        }
        if (iVar4 == *(int *)(param_1 + 0x3120)) {
          FUN_0042f4d0(param_1,local_18,*(uint *)(local_1c[1] * 0x24 + local_18 + 0x1de9c));
        }
      }
      local_20 = local_20 + 6;
      local_34 = local_34 + 1;
    } while (local_34 < *(int *)(param_1 + 0x3120));
  }
  return;
}
