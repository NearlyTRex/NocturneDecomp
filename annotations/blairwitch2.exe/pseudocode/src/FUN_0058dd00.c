// Name: FUN_0058dd00
// Address: 0058dd00
// Address Range: [[0058dd00, 0058dee3]]
// Convention: unknown
// Signature: void FUN_0058dd00(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058dd00(int param_1)

{
  float fVar1;
  byte bVar2;
  float afStackY_1084 [1014];
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_84;
  uint local_78;
  uint local_74;
  uint local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  double local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  if ((*(int *)(param_1 + 0x10b24) != 0) && (*(int *)(param_1 + 0x10a78) != 0)) {
    local_78 = 0;
    local_74 = 0xbe99999a;
    local_70 = 0;
    FUN_00591530(&stack0xffffff88,*(int *)(param_1 + 0x10b0c) * 0x30 + param_1 + 0x1134);
    local_60 = local_84;
    *(uint *)((int)&stack0xffffffa4 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff80 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    FUN_00408de0(param_1,*(int *)(param_1 + 0x10b24) + 0x20);
    local_9c = local_90;
    *(uint *)((int)&stack0xffffff68 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffff6c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (local_98 < (float)_DAT_005ee82a) {
      local_3c = local_90;
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffff74 + (uint)bVar2 * -8);
      *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      local_38 = 0;
      FUN_00423a60(param_1,&stack0xffffffc4);
      return;
    }
    local_6c = local_9c - local_60;
    local_68 = local_98 - local_5c;
    local_64 = local_94 - local_58;
    local_48 = local_9c - local_60;
    *(float *)((int)&stack0xffffffbc + (uint)bVar2 * -8) =
         (&stack0xffffff98)[(uint)bVar2 * 0xfffffffe];
    *(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&stack0xffffff9c + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    local_20 = local_44 * local_44;
    local_28 = SQRT(local_40 * local_40 + local_48 * local_48 + local_20);
    FUN_00436710(PTR_DAT_00609ed0,"Chain stretched to %f\n",(double)local_28);
    if ((*(float *)(param_1 + 0x10b28) < local_28) &&
       (fVar1 = *(float *)(param_1 + 0x10b28) * *(float *)(param_1 + 0x10b28) - local_20,
       local_30 = (double)fVar1, 0.0 <= local_30)) {
      fVar1 = SQRT(fVar1);
      local_54 = local_6c;
      (&stack0xffffffb0)[(uint)bVar2 * 0xfffffffe] = (&stack0xffffff98)[(uint)bVar2 * 0xfffffffe];
      *(uint *)((int)&stack0xffffffb4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)((int)&stack0xffffff9c + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      local_1c = SQRT(local_4c * local_4c + local_54 * local_54);
      if ((0.0 < local_1c) && (local_24 = local_1c - fVar1, 0.0 < local_24)) {
        local_18 = local_24 / local_1c;
        local_54 = local_54 * local_18;
        local_50 = local_18 * 0.0;
        local_4c = local_4c * local_18;
        local_14 = fVar1;
        FUN_00423a60(param_1,&stack0xffffffac);
        return;
      }
    }
  }
  return;
}
