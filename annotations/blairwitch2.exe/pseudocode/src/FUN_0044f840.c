// Name: FUN_0044f840
// Address: 0044f840
// Address Range: [[0044f840, 0044fb94]]
// Convention: unknown
// Signature: void FUN_0044f840(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f840(int param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  float afStackY_108c [1014];
  float local_a4;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar3 = 0;
  if ((uint *)(param_1 + 0x364) != param_2) {
    *(uint *)(param_1 + 0x364) = *param_2;
    *(uint *)(param_1 + 0x368) = param_2[1];
    *(uint *)(param_1 + 0x36c) = param_2[2];
  }
  iVar2 = param_1 + 0x370;
  FUN_00449280(iVar2,param_1 + 0x364);
  local_18 = *(int *)(param_1 + 0x358);
  local_38 = 0;
  local_34 = iVar2;
  local_30 = iVar2;
  local_24 = iVar2;
  if (0 < *(int *)(param_1 + 0x100)) {
    do {
      local_20 = *(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0x104) * local_38 * 0xc;
      local_28 = 0;
      if (0 < *(int *)(param_1 + 0x110)) {
        local_2c = 0;
        do {
          local_1c = local_2c + *(int *)(param_1 + 0x114);
          piVar1 = (int *)(*(int *)(local_1c + 0x18) * 0xc + local_20);
          local_80 = (float)*piVar1 * _DAT_005f50c4;
          local_7c = (float)piVar1[1] * _DAT_005f50c4;
          local_78 = (float)piVar1[2] * _DAT_005f50c4;
          piVar1 = (int *)(*(int *)(local_1c + 0x24) * 0xc + local_20);
          local_8c = (float)*piVar1 * _DAT_005f50c4;
          local_88 = (float)piVar1[1] * _DAT_005f50c4;
          local_84 = (float)piVar1[2] * _DAT_005f50c4;
          FUN_00449530(local_34,&stack0xffffff80);
          local_44 = local_50;
          (&stack0xffffffc0)[(uint)bVar3 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8);
          *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if (&stack0xffffff80 != &stack0xffffffbc) {
            local_80 = local_44;
            local_7c = local_40;
            local_78 = local_3c;
          }
          FUN_00449530(local_30,&stack0xffffff74);
          local_98 = local_a4;
          (&stack0xffffff6c)[(uint)bVar3 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffff60 + (uint)bVar3 * -8);
          *(uint *)((int)&stack0xffffff70 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffff64 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if (&stack0xffffff74 != &stack0xffffff68) {
            local_8c = local_98;
            local_88 = local_94;
            local_84 = local_90;
          }
          iVar2 = 2;
          if (2 < *(int *)(local_1c + 4)) {
            local_14 = local_1c + 0x18;
            do {
              piVar1 = (int *)(*(int *)(local_14 + 0x18) * 0xc + local_20);
              local_68 = (float)*piVar1 * _DAT_005f50c4;
              local_64 = (float)piVar1[1] * _DAT_005f50c4;
              local_60 = (float)piVar1[2] * _DAT_005f50c4;
              FUN_00449530(local_24,&stack0xffffff98);
              local_5c = local_74;
              (&stack0xffffffa8)[(uint)bVar3 * 0xfffffffe] =
                   (float)*(uint *)((int)&stack0xffffff90 + (uint)bVar3 * 0xfffffffe * 4);
              *(uint *)((int)&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                   *(uint *)(&stack0xffffff94 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
              if (&stack0xffffff98 != &stack0xffffffa4) {
                local_68 = local_5c;
                local_64 = local_58;
                local_60 = local_54;
              }
              FUN_004779e0(local_18,&stack0xffffff80,&stack0xffffff74,&stack0xffffff98);
              local_18 = local_18 + 0x38;
              if (&stack0xffffff74 != &stack0xffffff98) {
                local_8c = local_68;
                local_88 = local_64;
                local_84 = local_60;
              }
              iVar2 = iVar2 + 1;
              local_14 = local_14 + 0xc;
            } while (iVar2 < *(int *)(local_1c + 4));
          }
          local_28 = local_28 + 1;
          local_2c = local_2c + 0x48;
        } while (local_28 < *(int *)(param_1 + 0x110));
      }
      local_38 = local_38 + 1;
    } while (local_38 < *(int *)(param_1 + 0x100));
  }
  return;
}
