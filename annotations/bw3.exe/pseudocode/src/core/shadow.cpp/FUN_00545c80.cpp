// Name: core_shadow.cpp_FUN_00545c80
// Address: 00545c80
// Address Range: [[00545c80, 00545e63]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_00545c80(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_FUN_00545c80(CCharacter *param_1)

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
  byte local_54 [4];
  float local_50 [4];
  float local_40;
  CVector3f local_3c;
  double local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  if ((*(int *)&param_1[1].field_0x2bc != 0) && (*(int *)&param_1[1].field_0x18 != 0)) {
    local_78 = 0;
    local_74 = 0xbe99999a;
    local_70 = 0;
    core_xform_cpp_FUN_00583260(&stack0xffffff88);
    local_60 = local_84;
    *(uint *)((int)&stack0xffffffa4 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff80 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffa8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff84 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    core_actor_cpp_FUN_00408bf0(param_1);
    local_9c = local_90;
    *(uint *)((int)&stack0xffffff68 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffff6c + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (local_98 < (float)_DAT_005d13de) {
      local_3c._0_4_ = local_90;
      *(uint *)((int)&local_3c + ((uint)bVar2 * -2 + 1) * 4) =
           *(uint *)(&stack0xffffff74 + (uint)bVar2 * -8);
      *(uint *)((int)&local_3c + ((uint)bVar2 * -2 + (uint)bVar2 * -2 + 2) * 4) =
           *(uint *)(&stack0xffffff78 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      local_3c._4_4_ = 0;
      core_charactr_cpp_FUN_0042c230(param_1,&local_3c);
      return;
    }
    local_6c = local_9c - local_60;
    local_68 = local_98 - local_5c;
    local_64 = local_94 - local_58;
    local_50[2] = local_9c - local_60;
    local_50[(uint)bVar2 * -2 + 3] = (&stack0xffffff98)[(uint)bVar2 * 0xfffffffe];
    local_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
         local_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -5];
    local_20 = local_50[3] * local_50[3];
    local_28 = SQRT(local_40 * local_40 + local_50[2] * local_50[2] + local_20);
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"$@Chain stretched to %f\n" + 2,(double)local_28);
    if ((*(float *)&param_1[1].field_0x2c0 < local_28) &&
       (fVar1 = *(float *)&param_1[1].field_0x2c0 * *(float *)&param_1[1].field_0x2c0 - local_20,
       local_30 = (double)fVar1, 0.0 <= local_30)) {
      fVar1 = SQRT(fVar1);
      local_54 = (byte  [4])local_6c;
      local_50[(uint)bVar2 * -2] = (&stack0xffffff98)[(uint)bVar2 * 0xfffffffe];
      local_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           local_50[(uint)bVar2 * -2 + (uint)bVar2 * -2 + -5];
      local_1c = SQRT(local_50[1] * local_50[1] + (float)local_54 * (float)local_54);
      if ((0.0 < local_1c) && (local_24 = local_1c - fVar1, 0.0 < local_24)) {
        local_18 = local_24 / local_1c;
        local_54 = (byte  [4])((float)local_54 * local_18);
        local_50[0] = local_18 * 0.0;
        local_50[1] = local_50[1] * local_18;
        local_14 = fVar1;
        core_charactr_cpp_FUN_0042c230(param_1,(CVector3f *)local_54);
        return;
      }
    }
  }
  return;
}
