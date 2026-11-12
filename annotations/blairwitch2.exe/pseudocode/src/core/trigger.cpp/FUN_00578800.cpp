// Name: core_trigger.cpp_FUN_00578800
// Address: 00578800
// Address Range: [[00578800, 00578b8c]]
// Convention: unknown
// Signature: undefined4 core_trigger_cpp_FUN_00578800(int param_1,CDemonActor *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_trigger_cpp_FUN_00578800(int param_1,CDemonActor *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonActor *pCVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_1060 [979];
  CBoundingBox3D *in_stack_fffffef0;
  float *pfVar9;
  float fStack_104;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  bVar8 = 0;
  if (param_2 != (CDemonActor *)0x0) {
    (*((param_2->vtable)._ub)->getBoundingBox)(param_2,in_stack_fffffef0);
    puVar6 = (uint *)&stack0xffffff28;
    puVar7 = (uint *)&stack0xffffff50;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    fStack_78 = fStack_a8 + fStack_9c;
    fStack_74 = fStack_a4 + fStack_98;
    fStack_70 = fStack_a0 + fStack_94;
    fStack_54 = fStack_a8 + fStack_9c;
    (&stack0xffffffa4)[(uint)bVar8 * -2 + 3] =
         (float)*(uint *)((int)&stack0xffffff8c + (uint)bVar8 * -8);
    (&stack0xffffffa4)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         (float)*(uint *)((int)&stack0xffffff90 + ((uint)bVar8 * -2 + (uint)bVar8 * -2) * 4);
    pfVar9 = &stack0xffffffb8;
    fStack_24 = fStack_54 * _DAT_005ecf7e;
    fStack_20 = fStack_50 * _DAT_005ecf7e;
    fStack_1c = fStack_4c * _DAT_005ecf7e;
    fStack_48 = fStack_54 * _DAT_005ecf7e;
    *(float *)((int)&stack0xffffffbc + (uint)bVar8 * 0xfffffffe * 4) =
         (&stack0xffffffc8)[(uint)bVar8 * -2 + 6];
    *(float *)((int)&stack0xffffffbc + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4) =
         (&stack0xffffffc8)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    core_actor_cpp_FUN_00408d70(param_2,pfVar9);
    fStack_60 = fStack_30;
    (&stack0xffffffa4)[(uint)bVar8 * 0xfffffffe] = (&stack0xffffffc8)[(uint)bVar8 * -2 + 3];
    (&stack0xffffffa4)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         (&stack0xffffffc8)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    if (*(int *)(param_1 + 0x374) != 0) {
      pCVar4 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c8f0(param_2,g_CCharacterClassInfo.name_hash);
      if ((pCVar4 != (CDemonActor *)0x0) && (pCVar4[0xd].particle_systems[3].fade_duration == 0.0))
      {
        return 0;
      }
      fStack_5c = (param_2->location).position.y;
    }
    fVar1 = fStack_60 - *(float *)(param_1 + 0x20);
    fVar3 = fStack_5c - *(float *)(param_1 + 0x24);
    fVar2 = fStack_58 - *(float *)(param_1 + 0x28);
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
        *(float *)(param_1 + 0x2b4) * *(float *)(param_1 + 0x2b4)) {
      core_actor_cpp_FUN_00408de0(param_1,&stack0xffffffa0);
      fStack_3c = fStack_6c;
      (&stack0xffffffc8)[(uint)bVar8 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffff98 + (uint)bVar8 * -8);
      (&stack0xffffffc8)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
           (float)*(uint *)(&stack0xffffff9c + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      if (&stack0xffffffa0 != &stack0xffffffc4) {
        fStack_60 = fStack_3c;
        fStack_5c = fStack_38;
        fStack_58 = fStack_34;
      }
      if (*(int *)(param_1 + 0x2cc) == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
        puVar6 = (uint *)&stack0xffffff40;
        puVar7 = &stack0xffffff10;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        if (((((fStack_f0 <= fStack_60) && (fStack_ec <= fStack_5c)) && (fStack_e8 <= fStack_58)) &&
            ((fStack_60 <= fStack_e4 && (fStack_5c <= local_e0)))) && (fStack_58 <= fStack_dc)) {
          return 1;
        }
      }
      else {
        if (*(int *)(param_1 + 0x2cc) != 1) {
          _DAT_01d046a0 = "..\\core\\trigger.cpp";
          _DAT_01d046a4 = 0x391;
          core_main_c_FUN_004e4500
                    ("CTrigger::containsActor - invalid trigger shape %d for %s",*(uint *)(param_1 + 0x2cc),param_1);
          _DAT_01d046a0 = "..\\core\\trigger.cpp";
          _DAT_01d046a4 = 0x397;
          core_main_c_FUN_004e4500("Hell froze...");
          return 0;
        }
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
        puVar6 = (uint *)&stack0xffffff70;
        puVar7 = (uint *)&stack0xfffffef8;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        if ((fStack_104 <= fStack_5c) && (fStack_5c <= fStack_f8)) {
          if (fStack_60 * fStack_60 + fStack_58 * fStack_58 <=
              *(float *)(param_1 + 700) * *(float *)(param_1 + 0x2c4) * (float)_DAT_005ecf82) {
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}
