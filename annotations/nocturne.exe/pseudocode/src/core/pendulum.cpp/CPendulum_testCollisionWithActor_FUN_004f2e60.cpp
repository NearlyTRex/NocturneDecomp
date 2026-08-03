// Name: core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_004f2e60
// Address: 004f2e60
// Address Range: [[004f2e60, 004f3332]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_004f2e60(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_004f2e60(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)

{
  EDeathState EVar1;
  ECollisionType EVar2;
  CBoundingBox3D *pCVar3;
  CVector3f *pCVar4;
  CKeyFramedModel *pCVar5;
  CVector3i *pCVar6;
  SCollisionInfo SStack_110;
  CBoundingBox3D CStack_e8;
  CBoundingBox3D CStack_d0;
  CBoundingBox3D CStack_b8;
  CVector3f CStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CMatrix3x3f *pCStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  CLocation *pCStack_18;
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(&SStack_110);
  if ((((left_hand_actor == (CDemonActor *)0x0) ||
       (EVar1 = (*(((left_hand_actor->vtable)._uc)->_uc).getDeathState)
                          ((CCharacter *)left_hand_actor), EVar1 == DEATH_STATE_ALIVE)) &&
      ((right_hand_actor == (CDemonActor *)0x0 ||
       (EVar1 = (*(((right_hand_actor->vtable)._uc)->_uc).getDeathState)
                          ((CCharacter *)right_hand_actor), EVar1 == DEATH_STATE_ALIVE)))) &&
     (EVar2 = (*((actor->vtable)._ub)->getCollisionType)(actor,&SStack_110),
     EVar2 == COLLISION_TYPE_CYLINDER)) {
    pCVar3 = (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_b8);
    fStack_58 = (pCVar3->min).x + (pCVar3->max).x;
    fStack_54 = (pCVar3->min).y + (pCVar3->max).y;
    fStack_34 = fStack_58 * 0.5f;
    fStack_50 = (pCVar3->min).z + (pCVar3->max).z;
    fStack_30 = fStack_54 * 0.5f;
    fStack_2c = fStack_50 * 0.5f;
    CStack_7c.x = (actor->location).position.x + fStack_34;
    CStack_7c.y = (actor->location).position.y + fStack_30;
    CStack_7c.z = (actor->location).position.z + fStack_2c;
    CStack_70.x = CStack_7c.x - (this_ptr->base).location.position.x;
    CStack_70.y = CStack_7c.y - (this_ptr->base).location.position.y;
    CStack_70.z = CStack_7c.z - (this_ptr->base).location.position.z;
    pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                       (&(this_ptr->base).orient_matrix,&CStack_40,&CStack_70);
    if (&CStack_7c != pCVar4) {
      CStack_7c.x = pCVar4->x;
      CStack_7c.y = pCVar4->y;
      CStack_7c.z = pCVar4->z;
    }
    pCVar3 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_e8);
    if ((((((pCVar3->min).x <= CStack_7c.x) && ((pCVar3->min).y <= CStack_7c.y)) &&
         ((pCVar3->min).z <= CStack_7c.z)) &&
        ((CStack_7c.x <= (pCVar3->max).x && (CStack_7c.y <= (pCVar3->max).y)))) &&
       (CStack_7c.z <= (pCVar3->max).z)) {
      pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&this_ptr->model);
      fStack_24 = SStack_110.cylinder_radius * SStack_110.cylinder_radius;
      iStack_20 = pCVar5->vertex_count;
      pCVar6 = pCVar5->vertex_list;
      iStack_1c = 0;
      if (0 < iStack_20) {
        pCStack_18 = &actor->location;
        pCStack_28 = &(this_ptr->base).orient_matrix;
        while( true ) {
          CStack_a0.x = (float)pCVar6->x * _DAT_005a1228;
          CStack_a0.y = (float)pCVar6->y * _DAT_005a1228;
          CStack_a0.z = (float)pCVar6->z * _DAT_005a1228;
          pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                             (pCStack_28,&CStack_64,&CStack_a0);
          if (&CStack_a0 != pCVar4) {
            CStack_a0.x = pCVar4->x;
            CStack_a0.y = pCVar4->y;
            CStack_a0.z = pCVar4->z;
          }
          CStack_a0.x = (CStack_a0.x + (this_ptr->base).location.position.x) -
                        (pCStack_18->position).x;
          CStack_a0.y = (CStack_a0.y + (this_ptr->base).location.position.y) -
                        (pCStack_18->position).y;
          CStack_a0.z = (CStack_a0.z + (this_ptr->base).location.position.z) -
                        (pCStack_18->position).z;
          if (((SStack_110.cylinder_bottom_y <= CStack_a0.y) &&
              (CStack_a0.y <= SStack_110.cylinder_top_y + 1.0)) &&
             (CStack_a0.x * CStack_a0.x + CStack_a0.z * CStack_a0.z <= fStack_24)) break;
          iStack_1c = iStack_1c + 1;
          pCVar6 = pCVar6 + 1;
          if (iStack_20 <= iStack_1c) {
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
        pCVar3 = (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_d0);
        fStack_94 = (pCVar3->min).x + (pCVar3->max).x;
        fStack_90 = (pCVar3->min).y + (pCVar3->max).y;
        fStack_88 = fStack_94 * 0.5f;
        fStack_8c = (pCVar3->min).z + (pCVar3->max).z;
        fStack_84 = fStack_90 * 0.5f;
        fStack_80 = fStack_8c * 0.5f;
        CStack_4c.x = (actor->location).position.x + fStack_88;
        CStack_4c.y = (actor->location).position.y + fStack_84;
        CStack_4c.z = (actor->location).position.z + fStack_80;
        if (&CStack_a0 != &CStack_4c) {
          CStack_a0.x = CStack_4c.x;
          CStack_a0.y = CStack_4c.y;
          CStack_a0.z = CStack_4c.z;
        }
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                  (g_CGore_PTR_005b96c4,&CStack_a0,(CVector3f *)0x0,200,0);
        return;
      }
    }
  }
  return;
}
