// Name: core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_00514f40
// Address: 00514f40
// Address Range: [[00514f40, 005155da]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_00514f40(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_00514f40(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)

{
  CDemonActor *pCVar1;
  CPendulum *pCVar2;
  EDeathState EVar3;
  ECollisionType EVar4;
  CKeyFramedModel *pCVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_10cc [960];
  uint uStack_1c4;
  CBoundingBox3D *in_stack_fffffe44;
  CBoundingBox3D *in_stack_fffffe4c;
  CBoundingBox3D *in_stack_fffffe64;
  float in_stack_fffffe68;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_94;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
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
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  pCVar2 = this_ptr;
  bVar9 = 0;
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)&stack0xfffffe38);
  if ((((left_hand_actor == (CDemonActor *)0x0) ||
       (EVar3 = (*(((left_hand_actor->vtable)._uc)->_uc).getDeathState)
                          ((CCharacter *)left_hand_actor), EVar3 == DEATH_STATE_ALIVE)) &&
      ((right_hand_actor == (CDemonActor *)0x0 ||
       (EVar3 = (*(((right_hand_actor->vtable)._uc)->_uc).getDeathState)
                          ((CCharacter *)right_hand_actor), EVar3 == DEATH_STATE_ALIVE)))) &&
     (EVar4 = (*((actor->vtable)._ub)->getCollisionType)(actor,(SCollisionInfo *)&stack0xfffffe3c),
     EVar4 == COLLISION_TYPE_CYLINDER)) {
    uStack_1c4 = 0x514fd2;
    (*((actor->vtable)._ub)->getBoundingBox)(actor,in_stack_fffffe44);
    puVar7 = (uint *)&stack0xfffffeec;
    puVar8 = &stack0xfffffe6c;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    fStack_b4 = fStack_18c + fStack_180;
    fStack_b0 = fStack_188 + fStack_17c;
    fStack_ac = fStack_184 + fStack_178;
    fStack_48 = fStack_18c + fStack_180;
    *(uint *)((int)&stack0xffffffbc + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff50 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffffc0 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff54 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    fStack_24 = fStack_48 * _DAT_005e1a26;
    fStack_20 = fStack_44 * _DAT_005e1a26;
    fStack_1c = fStack_40 * _DAT_005e1a26;
    fStack_e4 = fStack_48 * _DAT_005e1a26;
    *(float *)((int)&stack0xffffff20 + (uint)bVar9 * -8) =
         (&stack0xffffffe0)[(uint)bVar9 * 0xfffffffe];
    *(uint *)((int)&stack0xffffff24 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffe4 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    fStack_54 = *(float *)&actor->field_0x20 + fStack_e4;
    fStack_50 = *(float *)&actor->field_0x24 + fStack_e0;
    fStack_4c = *(float *)&actor->field_0x28 + fStack_dc;
    fStack_d8 = fStack_54;
    *(uint *)((int)&stack0xffffff2c + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffb0 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffff30 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    fStack_a8 = fStack_d8 - *(float *)&(this_ptr->base).field_0x20;
    fStack_a4 = fStack_d4 - *(float *)&(this_ptr->base).field_0x24;
    fStack_a0 = fStack_d0 - *(float *)&(this_ptr->base).field_0x28;
    fStack_3c = fStack_a8;
    *(uint *)(&stack0xffffffc8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff5c + (uint)bVar9 * -8);
    *(uint *)(&stack0xffffffcc + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff60 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    core_dirmat_cpp_FUN_004495a0();
    fStack_cc = fStack_60;
    *(uint *)((int)&stack0xffffff38 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffa4 + (uint)bVar9 * -8);
    *(uint *)((int)&stack0xffffff3c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffffa8 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    if (&stack0xffffff28 != &stack0xffffff34) {
      fStack_d8 = fStack_cc;
      fStack_d4 = fStack_c8;
      fStack_d0 = fStack_c4;
    }
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffe4c);
    puVar7 = (uint *)&stack0xfffffec4;
    puVar8 = (uint *)&stack0xfffffea4;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    if (((((fStack_154 <= fStack_d0) && (fStack_150 <= fStack_cc)) && (fStack_14c <= fStack_c8)) &&
        ((fStack_d0 <= fStack_148 && (fStack_cc <= fStack_144)))) && (fStack_c8 <= fStack_140)) {
      pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
      iVar6 = pCVar5->vertex_count;
      actor = (CDemonActor *)0x0;
      if (0 < iVar6) {
        pCVar1 = &this_ptr->base;
        this_ptr = (CPendulum *)pCVar5->vertex_list;
        while( true ) {
          fStack_28 = (float)*(int *)(this_ptr->base).actor_name * _DAT_005faae8;
          fStack_24 = (float)*(int *)((this_ptr->base).actor_name + 4) * _DAT_005faae8;
          fStack_20 = (float)*(int *)((this_ptr->base).actor_name + 8) * _DAT_005faae8;
          core_dirmat_cpp_FUN_00449530();
          fStack_b8 = fStack_94;
          (&stack0xffffff4c)[(uint)bVar9 * 0xfffffffe] =
               (float)*(uint *)((int)&stack0xffffff70 + (uint)bVar9 * 0xfffffffe * 4);
          *(uint *)((int)&stack0xffffff50 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
               *(uint *)(&stack0xffffff74 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
          if (&stack0xffffffd8 != &stack0xffffff48) {
            fStack_28 = fStack_b8;
            fStack_24 = fStack_b4;
            fStack_20 = fStack_b0;
          }
          fStack_28 = (fStack_28 + *(float *)&pCVar1->field_0x20) - fRam00000020;
          fStack_24 = (fStack_24 + *(float *)&(pCVar2->base).field_0x24) - fRam00000024;
          fStack_20 = (fStack_20 + *(float *)&(pCVar2->base).field_0x28) - fRam00000028;
          if (((in_stack_fffffe68 <= fStack_24) && (fStack_24 <= fStack_194 + 1.0)) &&
             (fStack_28 * fStack_28 + fStack_20 * fStack_20 <= fStack_190 * fStack_190)) break;
          actor = (CDemonActor *)(actor->actor_name + 1);
          this_ptr = (CPendulum *)((this_ptr->base).actor_name + 0xc);
          if (iVar6 <= (int)actor) {
            return;
          }
        }
        if (left_hand_actor != (CDemonActor *)0x0) {
          (*(((left_hand_actor->vtable)._uc)->_uc).kill)
                    ((CCharacter *)left_hand_actor,7,(CVector3f *)0x0,-1.0);
        }
        if (right_hand_actor != (CDemonActor *)0x0) {
          (*(((right_hand_actor->vtable)._uc)->_uc).kill)
                    ((CCharacter *)right_hand_actor,7,(CVector3f *)0x0,-1.0);
        }
        (*((actor->vtable)._ub)->getBoundingBox)(actor,in_stack_fffffe64);
        puVar7 = &stack0xfffffeac;
        puVar8 = &stack0xfffffef4;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
        }
        fStack_64 = fStack_10c + fStack_100;
        fStack_60 = fStack_108 + fStack_fc;
        fStack_5c = fStack_104 + fStack_f8;
        fStack_4c = fStack_10c + fStack_100;
        *(uint *)((int)&stack0xffffffb8 + (uint)bVar9 * -8) =
             *(uint *)((int)&stack0xffffffa0 + (uint)bVar9 * -8);
        *(uint *)((int)&stack0xffffffbc + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             *(uint *)((int)&stack0xffffffa4 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        fStack_70 = fStack_4c * _DAT_005e1a26;
        fStack_6c = fStack_48 * _DAT_005e1a26;
        fStack_68 = fStack_44 * _DAT_005e1a26;
        fStack_d0 = fStack_4c * _DAT_005e1a26;
        (&stack0xffffff34)[(uint)bVar9 * 0xfffffffe] = (&stack0xffffff94)[(uint)bVar9 * 0xfffffffe];
        *(uint *)((int)&stack0xffffff38 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             *(uint *)((int)&stack0xffffff98 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        fStack_dc = *(float *)&actor->field_0x20 + fStack_d0;
        fStack_d8 = *(float *)&actor->field_0x24 + fStack_cc;
        fStack_d4 = *(float *)&actor->field_0x28 + fStack_c8;
        fStack_58 = fStack_dc;
        *(float *)((int)&stack0xffffffac + (uint)bVar9 * -8) =
             (&stack0xffffff28)[(uint)bVar9 * 0xfffffffe];
        *(uint *)((int)&stack0xffffffb0 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
             *(uint *)((int)&stack0xffffff2c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                  (g_CGorePtr,(CVector3f *)&stack0xfffffff0,(CVector3f *)0x0,200,BLOOD_TYPE_RED);
        return;
      }
    }
  }
  return;
}
