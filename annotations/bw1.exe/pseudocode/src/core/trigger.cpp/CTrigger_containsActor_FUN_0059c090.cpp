// Name: core_trigger.cpp_CTrigger_containsActor_FUN_0059c090
// Address: 0059c090
// Address Range: [[0059c090, 0059c41c]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_containsActor_FUN_0059c090(CTrigger *this_ptr,CDemonActor *actor)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_containsActor_FUN_0059c090(CTrigger *this_ptr,CDemonActor *actor)

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
  CVector3f *input_local_point;
  CBoundingBox3D *in_stack_fffffef8;
  float fStack_fc;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  float fStack_54;
  float afStack_50 [2];
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  float fStack_24;
  float afStack_20 [4];
  
  bVar8 = 0;
  if (actor != (CDemonActor *)0x0) {
    (*((actor->vtable)._ub)->getBoundingBox)(actor,in_stack_fffffef0);
    puVar6 = &stack0xffffff28;
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
    afStack_50[(uint)bVar8 * -2] = *(float *)((int)&stack0xffffff8c + (uint)bVar8 * -8);
    afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         *(float *)((int)&stack0xffffff90 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    input_local_point = &CStack_48;
    fStack_24 = fStack_54 * 0.5f;
    afStack_20[0] = afStack_50[0] * 0.5f;
    afStack_20[1] = afStack_50[1] * 0.5f;
    CStack_48.x = fStack_54 * 0.5f;
    *(float *)((int)&CStack_48 + (uint)bVar8 * -8 + 4) = afStack_20[(uint)bVar8 * -2];
    *(float *)((int)&CStack_48 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_20[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(actor,input_local_point,&CStack_30);
    CStack_60.x = CStack_30.x;
    *(uint *)((int)&CStack_60 + (uint)bVar8 * -8 + 4) =
         *(uint *)((int)&CStack_30 + (uint)bVar8 * -8 + 4);
    *(uint *)((int)&CStack_60 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         *(uint *)((int)&CStack_30 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    if (this_ptr->pressure_plate != 0) {
      pCVar4 = (CCharacter *)core_actor_cpp_castToClassHash_FUN_0040c600(actor,g_CCharacterClassInfo.name_hash);
      if ((pCVar4 != (CDemonActor *)0x0) && (*(int *)(pCVar4[0x1b].create_event + 0x40) == 0)) {
        return 0;
      }
      CStack_60.y = (actor->location).position.y;
    }
    fVar1 = CStack_60.x - (this_ptr->base).location.position.x;
    fVar3 = CStack_60.y - (this_ptr->base).location.position.y;
    fVar2 = CStack_60.z - (this_ptr->base).location.position.z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <=
        this_ptr->test_radius * this_ptr->test_radius) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                (&this_ptr->base,&CStack_60,&CStack_6c);
      CStack_3c.x = CStack_6c.x;
      *(uint *)((int)&CStack_3c + (uint)bVar8 * -8 + 4) =
           *(uint *)((int)&CStack_6c + (uint)bVar8 * -8 + 4);
      *(uint *)((int)&CStack_3c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           *(uint *)((int)&CStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
      if (&CStack_60 != &CStack_3c) {
        CStack_60.x = CStack_3c.x;
        CStack_60.y = CStack_3c.y;
        CStack_60.z = CStack_3c.z;
      }
      if (this_ptr->trigger_shape == TRIGGER_SHAPE_BOX) {
        (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffef8);
        puVar6 = (uint *)&stack0xffffff48;
        puVar7 = &stack0xffffff10;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        if (((((fStack_e8 <= CStack_60.z) && (fStack_e4 <= fStack_54)) &&
             (local_e0 <= afStack_50[0])) &&
            ((CStack_60.z <= fStack_dc && (fStack_54 <= fStack_d8)))) &&
           (afStack_50[0] <= fStack_d4)) {
          return 1;
        }
      }
      else {
        if (this_ptr->trigger_shape != TRIGGER_SHAPE_CYLINDER) {
          g_CHAR_PTR_01d1d400 = "..\\core\\trigger.cpp";
          g_INT_01d1d404 = 0x38e;
          core_main_c_displayErrorAndQuit_FUN_005030e0("CTrigger::containsActor - invalid trigger shape %d for %s");
          g_CHAR_PTR_01d1d400 = "..\\core\\trigger.cpp";
          g_INT_01d1d404 = 0x394;
          core_main_c_displayErrorAndQuit_FUN_005030e0("Hell froze...");
          return 0;
        }
        (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffef8);
        puVar6 = (uint *)&stack0xffffff78;
        puVar7 = (uint *)&stack0xfffffef8;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        if ((fStack_fc <= fStack_54) && (fStack_54 <= fStack_f0)) {
          if (CStack_60.z * CStack_60.z + afStack_50[0] * afStack_50[0] <=
              (this_ptr->trigger_size).x * (this_ptr->trigger_size).z * (float)0.25) {
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}
