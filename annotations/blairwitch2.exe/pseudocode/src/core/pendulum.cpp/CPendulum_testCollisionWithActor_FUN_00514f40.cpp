// Name: core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_00514f40
// Address: 00514f40
// Address Range: [[00514f40, 005155da]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_00514f40(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_00514f40(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)

{
  CDemonActor *pCVar1;
  CDemonActor *pCVar2;
  CPendulum *pCVar3;
  EDeathState EVar4;
  ECollisionType EVar5;
  CKeyFramedModel *pCVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  float afStackY_10cc [960];
  int iStack_1c4;
  CBoundingBox3D *in_stack_fffffe44;
  CVector3f *input;
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
  CVector3f CStack_b8;
  float afStack_ac [6];
  CVector3f aCStack_94 [3];
  float fStack_70;
  float afStack_6c [3];
  CVector3f CStack_60;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  CVector3f CStack_3c;
  CVector3f CStack_28;
  float afStack_1c [3];
  
  pCVar3 = this_ptr;
  bVar10 = 0;
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)&stack0xfffffe38);
  if ((((left_hand_actor == (CDemonActor *)0x0) ||
       (EVar4 = (*(((left_hand_actor->vtable)._uc)->_uc).getDeathState)
                          ((CCharacter *)left_hand_actor), EVar4 == DEATH_STATE_ALIVE)) &&
      ((right_hand_actor == (CDemonActor *)0x0 ||
       (EVar4 = (*(((right_hand_actor->vtable)._uc)->_uc).getDeathState)
                          ((CCharacter *)right_hand_actor), EVar4 == DEATH_STATE_ALIVE)))) &&
     (EVar5 = (*((actor->vtable)._ub)->getCollisionType)(actor,(SCollisionInfo *)&stack0xfffffe3c),
     EVar5 == COLLISION_TYPE_CYLINDER)) {
    iStack_1c4 = 0x514fd2;
    (*((actor->vtable)._ub)->getBoundingBox)(actor,in_stack_fffffe44);
    puVar8 = (uint *)&stack0xfffffeec;
    puVar9 = &stack0xfffffe6c;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
    }
    CStack_b8.y = fStack_18c + fStack_180;
    CStack_b8.z = fStack_188 + fStack_17c;
    afStack_ac[0] = fStack_184 + fStack_178;
    afStack_54[3] = fStack_18c + fStack_180;
    afStack_54[(uint)bVar10 * -2 + 4] = afStack_ac[(uint)bVar10 * -2 + -1];
    afStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5] =
         afStack_ac[(uint)bVar10 * -2 + (uint)bVar10 * -2];
    CStack_28.y = afStack_54[3] * _DAT_005e1a26;
    CStack_28.z = fStack_44 * _DAT_005e1a26;
    afStack_1c[0] = fStack_40 * _DAT_005e1a26;
    fStack_e4 = afStack_54[3] * _DAT_005e1a26;
    *(float *)((int)&stack0xffffff20 + (uint)bVar10 * -8) = afStack_1c[(uint)bVar10 * -2 + -1];
    *(float *)((int)&stack0xffffff20 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 1) * 4) =
         afStack_1c[(uint)bVar10 * -2 + (uint)bVar10 * -2];
    afStack_54[0] = (actor->location).position.x + fStack_e4;
    afStack_54[1] = (actor->location).position.y + fStack_e0;
    afStack_54[2] = (actor->location).position.z + fStack_dc;
    fStack_d8 = afStack_54[0];
    *(float *)((int)&stack0xffffff20 + ((uint)bVar10 * -2 + 3) * 4) =
         afStack_54[(uint)bVar10 * -2 + 1];
    *(float *)((int)&stack0xffffff20 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 4) * 4) =
         afStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 2];
    afStack_ac[1] = fStack_d8 - (this_ptr->base).location.position.x;
    afStack_ac[2] = fStack_d4 - (this_ptr->base).location.position.y;
    input = &CStack_3c;
    afStack_ac[3] = fStack_d0 - (this_ptr->base).location.position.z;
    CStack_3c.x = afStack_ac[1];
    *(float *)((int)&CStack_3c + (uint)bVar10 * -8 + 4) = afStack_ac[(uint)bVar10 * -2 + 2];
    *(float *)((int)&CStack_3c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3];
    core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
              (&(this_ptr->base).orient_matrix,input,&CStack_60);
    fStack_cc = CStack_60.x;
    *(float *)((int)&stack0xffffff20 + ((uint)bVar10 * -2 + 6) * 4) =
         afStack_54[(uint)bVar10 * -2 + -2];
    *(float *)((int)&stack0xffffff20 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 7) * 4) =
         afStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1];
    if (&stack0xffffff28 != &stack0xffffff34) {
      fStack_d8 = fStack_cc;
      fStack_d4 = fStack_c8;
      fStack_d0 = fStack_c4;
    }
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffe4c);
    puVar8 = (uint *)&stack0xfffffec4;
    puVar9 = (uint *)&stack0xfffffea4;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
    }
    if (((((fStack_154 <= fStack_d0) && (fStack_150 <= fStack_cc)) && (fStack_14c <= fStack_c8)) &&
        ((fStack_d0 <= fStack_148 && (fStack_cc <= fStack_144)))) && (fStack_c8 <= fStack_140)) {
      pCVar6 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(&this_ptr->model);
      iVar7 = pCVar6->vertex_count;
      actor = (CDemonActor *)0x0;
      if (0 < iVar7) {
        pCVar1 = &this_ptr->base;
        pCVar2 = &this_ptr->base;
        this_ptr = (CPendulum *)pCVar6->vertex_list;
        while( true ) {
          CStack_28.x = (float)*(int *)(this_ptr->base).actor_name * _DAT_005faae8;
          CStack_28.y = (float)*(int *)((this_ptr->base).actor_name + 4) * _DAT_005faae8;
          CStack_28.z = (float)*(int *)((this_ptr->base).actor_name + 8) * _DAT_005faae8;
          core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
                    (&pCVar2->orient_matrix,&CStack_28,aCStack_94);
          CStack_b8.x = aCStack_94[0].x;
          afStack_ac[(uint)bVar10 * -2 + -2] = *(float *)((int)aCStack_94 + (uint)bVar10 * -8 + 4);
          afStack_ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -1] =
               *(float *)((int)aCStack_94 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          if (&CStack_28 != &CStack_b8) {
            CStack_28.x = CStack_b8.x;
            CStack_28.y = CStack_b8.y;
            CStack_28.z = CStack_b8.z;
          }
          CStack_28.x = (CStack_28.x + (pCVar1->location).position.x) - fRam00000020;
          CStack_28.y = (CStack_28.y + (pCVar3->base).location.position.y) - fRam00000024;
          CStack_28.z = (CStack_28.z + (pCVar3->base).location.position.z) - fRam00000028;
          if (((in_stack_fffffe68 <= CStack_28.y) && (CStack_28.y <= fStack_194 + 1.0)) &&
             (CStack_28.x * CStack_28.x + CStack_28.z * CStack_28.z <= fStack_190 * fStack_190))
          break;
          actor = (CDemonActor *)(actor->actor_name + 1);
          this_ptr = (CPendulum *)((this_ptr->base).actor_name + 0xc);
          if (iVar7 <= (int)actor) {
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
        puVar8 = &stack0xfffffeac;
        puVar9 = &stack0xfffffef4;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
        }
        afStack_6c[2] = fStack_10c + fStack_100;
        CStack_60.x = fStack_108 + fStack_fc;
        CStack_60.y = fStack_104 + fStack_f8;
        afStack_54[2] = fStack_10c + fStack_100;
        afStack_54[(uint)bVar10 * -2 + 3] = *(float *)((int)&CStack_60 + (uint)bVar10 * -8);
        afStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2 + -2];
        fStack_70 = afStack_54[2] * _DAT_005e1a26;
        afStack_6c[0] = afStack_54[3] * _DAT_005e1a26;
        afStack_6c[1] = fStack_44 * _DAT_005e1a26;
        fStack_d0 = afStack_54[2] * _DAT_005e1a26;
        *(float *)((int)&stack0xffffff20 + ((uint)bVar10 * -2 + 5) * 4) =
             afStack_6c[(uint)bVar10 * -2];
        *(float *)((int)&stack0xffffff20 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 6) * 4) =
             afStack_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        fStack_dc = (actor->location).position.x + fStack_d0;
        fStack_d8 = (actor->location).position.y + fStack_cc;
        fStack_d4 = (actor->location).position.z + fStack_c8;
        CStack_60.z = fStack_dc;
        afStack_54[(uint)bVar10 * -2] =
             *(float *)((int)&stack0xffffff20 + ((uint)bVar10 * -2 + 2) * 4);
        afStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             *(float *)((int)&stack0xffffff20 + ((uint)bVar10 * -2 + (uint)bVar10 * -2 + 3) * 4);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                  (g_CGorePtr,(CVector3f *)&stack0xfffffff0,(CVector3f *)0x0,200,BLOOD_TYPE_RED);
        return;
      }
    }
  }
  return;
}
