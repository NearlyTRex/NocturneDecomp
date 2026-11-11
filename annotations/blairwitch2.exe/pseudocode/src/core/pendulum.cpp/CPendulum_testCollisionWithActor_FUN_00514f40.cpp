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
  float *pfVar8;
  uint *puVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_10cc [960];
  int iStack_1c4;
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
  float afStack_b4 [4];
  float fStack_a4;
  float fStack_a0;
  float fStack_94;
  float afStack_90 [8];
  float fStack_70;
  float afStack_6c [4];
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
  float afStack_20 [4];
  
  pCVar2 = this_ptr;
  bVar11 = 0;
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)&stack0xfffffe38);
  if ((((left_hand_actor == (CDemonActor *)0x0) ||
       (EVar3 = (*(((left_hand_actor->vtable)._uc)->_uc).getDeathState)
                          ((CCharacter *)left_hand_actor), EVar3 == DEATH_STATE_ALIVE)) &&
      ((right_hand_actor == (CDemonActor *)0x0 ||
       (EVar3 = (*(((right_hand_actor->vtable)._uc)->_uc).getDeathState)
                          ((CCharacter *)right_hand_actor), EVar3 == DEATH_STATE_ALIVE)))) &&
     (EVar4 = (*((actor->vtable)._ub)->getCollisionType)(actor,(SCollisionInfo *)&stack0xfffffe3c),
     EVar4 == COLLISION_TYPE_CYLINDER)) {
    iStack_1c4 = 0x514fd2;
    (*((actor->vtable)._ub)->getBoundingBox)(actor,in_stack_fffffe44);
    pfVar8 = (float *)&stack0xfffffeec;
    pfVar10 = &stack0xfffffe6c;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar10 = *pfVar8;
      pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
      pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
    }
    afStack_b4[0] = fStack_18c + fStack_180;
    afStack_b4[1] = fStack_188 + fStack_17c;
    afStack_b4[2] = fStack_184 + fStack_178;
    fStack_48 = fStack_18c + fStack_180;
    afStack_6c[(uint)bVar11 * -2 + 10] = afStack_b4[(uint)bVar11 * -2 + 1];
    afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xb] =
         afStack_b4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2];
    fStack_24 = fStack_48 * _DAT_005e1a26;
    afStack_20[0] = fStack_44 * _DAT_005e1a26;
    afStack_20[1] = fStack_40 * _DAT_005e1a26;
    fStack_e4 = fStack_48 * _DAT_005e1a26;
    (&stack0xffffff20)[(uint)bVar11 * -2] = afStack_20[(uint)bVar11 * -2];
    (&stack0xffffff20)[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_20[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    fStack_54 = (actor->location).position.x + fStack_e4;
    fStack_50 = (actor->location).position.y + fStack_e0;
    fStack_4c = (actor->location).position.z + fStack_dc;
    fStack_d8 = fStack_54;
    (&stack0xffffff20)[(uint)bVar11 * -2 + 3] = afStack_6c[(uint)bVar11 * -2 + 7];
    (&stack0xffffff20)[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 8];
    afStack_b4[3] = fStack_d8 - (this_ptr->base).location.position.x;
    fStack_a4 = fStack_d4 - (this_ptr->base).location.position.y;
    fStack_a0 = fStack_d0 - (this_ptr->base).location.position.z;
    fStack_3c = afStack_b4[3];
    afStack_6c[(uint)bVar11 * -2 + 0xd] = afStack_b4[(uint)bVar11 * -2 + 4];
    afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xe] =
         afStack_b4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
    core_dirmat_cpp_FUN_004495a0();
    fStack_cc = afStack_6c[3];
    (&stack0xffffff20)[(uint)bVar11 * -2 + 6] = afStack_6c[(uint)bVar11 * -2 + 4];
    (&stack0xffffff20)[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5];
    if (&fStack_d8 != &fStack_cc) {
      fStack_d8 = fStack_cc;
      fStack_d4 = fStack_c8;
      fStack_d0 = fStack_c4;
    }
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffe4c);
    puVar7 = (uint *)&stack0xfffffec4;
    puVar9 = (uint *)&stack0xfffffea4;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
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
          afStack_20[0] = (float)*(int *)((this_ptr->base).actor_name + 8) * _DAT_005faae8;
          core_dirmat_cpp_FUN_00449530();
          fStack_b8 = fStack_94;
          afStack_b4[(uint)bVar11 * -2] = afStack_90[(uint)bVar11 * -2];
          afStack_b4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_90[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          if (&fStack_28 != &fStack_b8) {
            fStack_28 = fStack_b8;
            fStack_24 = afStack_b4[0];
            afStack_20[0] = afStack_b4[1];
          }
          fStack_28 = (fStack_28 + (pCVar1->location).position.x) - fRam00000020;
          fStack_24 = (fStack_24 + (pCVar2->base).location.position.y) - fRam00000024;
          afStack_20[0] = (afStack_20[0] + (pCVar2->base).location.position.z) - fRam00000028;
          if (((in_stack_fffffe68 <= fStack_24) && (fStack_24 <= fStack_194 + 1.0)) &&
             (fStack_28 * fStack_28 + afStack_20[0] * afStack_20[0] <= fStack_190 * fStack_190))
          break;
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
        pfVar8 = &stack0xfffffeac;
        pfVar10 = &stack0xfffffef4;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar10 = *pfVar8;
          pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
          pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
        }
        afStack_6c[2] = fStack_10c + fStack_100;
        afStack_6c[3] = fStack_108 + fStack_fc;
        fStack_5c = fStack_104 + fStack_f8;
        fStack_4c = fStack_10c + fStack_100;
        afStack_6c[(uint)bVar11 * -2 + 9] = afStack_6c[(uint)bVar11 * -2 + 3];
        afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
             afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        fStack_70 = fStack_4c * _DAT_005e1a26;
        afStack_6c[0] = fStack_48 * _DAT_005e1a26;
        afStack_6c[1] = fStack_44 * _DAT_005e1a26;
        fStack_d0 = fStack_4c * _DAT_005e1a26;
        (&stack0xffffff20)[(uint)bVar11 * -2 + 5] = afStack_6c[(uint)bVar11 * -2];
        (&stack0xffffff20)[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6] =
             afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        fStack_dc = (actor->location).position.x + fStack_d0;
        fStack_d8 = (actor->location).position.y + fStack_cc;
        fStack_d4 = (actor->location).position.z + fStack_c8;
        fStack_58 = fStack_dc;
        afStack_6c[(uint)bVar11 * -2 + 6] = (&stack0xffffff20)[(uint)bVar11 * -2 + 2];
        afStack_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             (&stack0xffffff20)[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                  (g_CGorePtr,(CVector3f *)&stack0xfffffff0,(CVector3f *)0x0,200,BLOOD_TYPE_RED);
        return;
      }
    }
  }
  return;
}
