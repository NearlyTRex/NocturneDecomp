// Name: core_pendulum.cpp_CPendulum_testCollisionWithActor_FUN_005495c0
// Address: 005495c0
// Address Range: [[005495c0, 00549a92]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_005495c0(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_CPendulum_testCollisionWithActor_FUN_005495c0(CPendulum *this_ptr,CDemonActor *actor,CDemonActor *left_hand_actor,CDemonActor *right_hand_actor)

{
  int iVar1;
  CBoundingBox3D *pCVar2;
  CVector3f *pCVar3;
  CKeyFramedModel *pCVar4;
  CVector3i *pCVar5;
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
  
  core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(&SStack_110);
  if ((((left_hand_actor == (CDemonActor *)0x0) ||
       (iVar1 = (*(((left_hand_actor->vtable)._uc)->_uc).getDeathState)
                          ((CCharacter *)left_hand_actor), iVar1 == 0)) &&
      ((right_hand_actor == (CDemonActor *)0x0 ||
       (iVar1 = (*(((right_hand_actor->vtable)._uc)->_uc).getDeathState)
                          ((CCharacter *)right_hand_actor), iVar1 == 0)))) &&
     (iVar1 = (*((actor->vtable)._ub)->hasCollision)(actor,&SStack_110), iVar1 == 2)) {
    pCVar2 = (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_b8);
    fStack_58 = (pCVar2->min).x + (pCVar2->max).x;
    fStack_54 = (pCVar2->min).y + (pCVar2->max).y;
    fStack_34 = fStack_58 * 0.5f;
    fStack_50 = (pCVar2->min).z + (pCVar2->max).z;
    fStack_30 = fStack_54 * 0.5f;
    fStack_2c = fStack_50 * 0.5f;
    CStack_7c.x = (actor->location).position.x + fStack_34;
    CStack_7c.y = (actor->location).position.y + fStack_30;
    CStack_7c.z = (actor->location).position.z + fStack_2c;
    CStack_70.x = CStack_7c.x - (this_ptr->base).location.position.x;
    CStack_70.y = CStack_7c.y - (this_ptr->base).location.position.y;
    CStack_70.z = CStack_7c.z - (this_ptr->base).location.position.z;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       (&(this_ptr->base).orient_matrix,&CStack_40,&CStack_70);
    if (&CStack_7c != pCVar3) {
      CStack_7c.x = pCVar3->x;
      CStack_7c.y = pCVar3->y;
      CStack_7c.z = pCVar3->z;
    }
    pCVar2 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_e8);
    if ((((((pCVar2->min).x <= CStack_7c.x) && ((pCVar2->min).y <= CStack_7c.y)) &&
         ((pCVar2->min).z <= CStack_7c.z)) &&
        ((CStack_7c.x <= (pCVar2->max).x && (CStack_7c.y <= (pCVar2->max).y)))) &&
       (CStack_7c.z <= (pCVar2->max).z)) {
      pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
      fStack_24 = SStack_110.cylinder_radius * SStack_110.cylinder_radius;
      iStack_20 = pCVar4->vertex_count;
      pCVar5 = pCVar4->vertex_list;
      iStack_1c = 0;
      if (0 < iStack_20) {
        pCStack_18 = &actor->location;
        pCStack_28 = &(this_ptr->base).orient_matrix;
        while( true ) {
          CStack_a0.x = (float)pCVar5->x * 0.00390625f;
          CStack_a0.y = (float)pCVar5->y * 0.00390625f;
          CStack_a0.z = (float)pCVar5->z * 0.00390625f;
          pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (pCStack_28,&CStack_64,&CStack_a0);
          if (&CStack_a0 != pCVar3) {
            CStack_a0.x = pCVar3->x;
            CStack_a0.y = pCVar3->y;
            CStack_a0.z = pCVar3->z;
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
          pCVar5 = pCVar5 + 1;
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
        pCVar2 = (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_d0);
        fStack_94 = (pCVar2->min).x + (pCVar2->max).x;
        fStack_90 = (pCVar2->min).y + (pCVar2->max).y;
        fStack_88 = fStack_94 * 0.5f;
        fStack_8c = (pCVar2->min).z + (pCVar2->max).z;
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
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                  (g_CGorePtr,&CStack_a0,(CVector3f *)0x0,200,0);
        return;
      }
    }
  }
  return;
}
