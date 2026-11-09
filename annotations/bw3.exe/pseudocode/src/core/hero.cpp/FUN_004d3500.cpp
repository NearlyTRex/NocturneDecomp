// Name: core_hero.cpp_FUN_004d3500
// Address: 004d3500
// Address Range: [[004d3500, 004d3842]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004d3500(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_hero_cpp_FUN_004d3500(CCharacter *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_10b0 [1002];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  uint uStack_b0;
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  uint uStack_8c;
  uint uStack_80;
  uint uStack_7c;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  float fStack_2c;
  int local_20;
  int local_1c;
  float fStack_18;
  
  bVar8 = 0;
  iVar3 = core_charactr_cpp_FUN_00432060(param_1);
  if (iVar3 != 0) {
    return 0;
  }
  if (*(int *)&param_1[2].field_0x7004 == 0) {
    local_1c = 0;
    for (local_20 = 0; local_20 < *(int *)&g_CDemonSetPtr->field_0x14d164; local_20 = local_20 + 1)
    {
      iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + local_1c),
                         g_CBoxActorClassInfo.name_hash);
      if (((iVar3 != 0) && (*(int *)(iVar3 + 0x31c) != 0)) && (*(int *)(iVar3 + 800) == 0)) {
        (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
        puVar6 = (uint *)&stack0xffffff20;
        puVar7 = &stack0xffffff08;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        fStack_c8 = local_f8 + fStack_ec;
        fStack_c4 = fStack_f4 + fStack_e8;
        fStack_c0 = fStack_f0 + fStack_e4;
        fStack_50 = local_f8 + fStack_ec;
        *(uint *)((int)&stack0xffffffb4 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffff3c + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffffb8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffff40 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        fStack_44 = fStack_50 * _DAT_005c4d99;
        fStack_40 = fStack_4c * _DAT_005c4d99;
        fStack_3c = fStack_48 * _DAT_005c4d99;
        fStack_2c = fStack_50 * _DAT_005c4d99;
        *(uint *)((int)&stack0xffffffd8 + (uint)bVar8 * 0xfffffffe * 4) =
             *(uint *)((int)&stack0xffffffc0 + (uint)bVar8 * -8);
        *(uint *)(&stack0xffffffdc + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffffc4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        core_actor_cpp_FUN_00408b80(iVar3,&stack0xffffffd4);
        puVar6 = &stack0xffffff50;
        uStack_b0 = uStack_98;
        *(uint *)((int)&stack0xffffff54 + (uint)bVar8 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff6c + (uint)bVar8 * -8);
        *(uint *)(&stack0xffffff58 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffff70 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        core_actor_cpp_FUN_00408bf0(param_1,puVar6);
        fVar2 = fStack_e8;
        fVar1 = fStack_ec;
        uStack_a4 = uStack_38;
        (&stack0xffffff60)[(uint)bVar8 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffffcc + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffff64 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)(&stack0xffffffd0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        fStack_5c = fVar1 - local_f8;
        fStack_58 = fVar2 - fStack_f4;
        fStack_54 = fStack_e4 - fStack_f0;
        fStack_bc = fVar1 - local_f8;
        *(uint *)((int)&stack0xffffff48 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffffa8 + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffff4c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffffac + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        fStack_74 = fStack_bc * _DAT_005c4d99;
        fStack_70 = fStack_b8 * _DAT_005c4d99;
        fStack_6c = fStack_b4 * _DAT_005c4d99;
        fStack_68 = fStack_bc * _DAT_005c4d99;
        *(uint *)((int)&stack0xffffff9c + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffff90 + (uint)bVar8 * -8);
        *(uint *)((int)&stack0xffffffa0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
             *(uint *)((int)&stack0xffffff94 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
        uStack_64 = 0;
        if (((fStack_9c - SQRT(fStack_60 * fStack_60 + fStack_68 * fStack_68) <=
              (float)_DAT_005c4d9d) && (1.0 <= (double)fStack_a0)) &&
           ((double)fStack_a0 <= _DAT_005c4da5)) {
          core_vecdir_cpp_FUN_00576250(&stack0xffffff5c);
          uStack_80 = uStack_8c;
          *(uint *)((int)&stack0xffffff84 + (uint)bVar8 * -8) =
               *(uint *)(&stack0xffffff78 + (uint)bVar8 * -8);
          *(uint *)(&stack0xffffff88 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               *(uint *)(&stack0xffffff7c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          fStack_18 = (float)core_actor_cpp_FUN_0040cfa0(uStack_7c);
          if (ABS(fStack_18) <= (float)_DAT_005c4dad) {
            *(int *)&param_1[2].field_0x7004 = iVar3;
            break;
          }
        }
      }
      local_1c = local_1c + 4;
    }
    if (*(int *)&param_1[2].field_0x7004 == 0) {
      return 0;
    }
    iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(int *)&param_1[2].field_0x7004,g_CBoxActorClassInfo.name_hash);
    if (iVar3 != 0) {
      *(CCharacter **)(iVar3 + 800) = param_1;
      uVar4 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x30))(iVar3,iVar3 + 0x32c);
      *(uint *)(iVar3 + 0x328) = uVar4;
    }
  }
  return 1;
}
