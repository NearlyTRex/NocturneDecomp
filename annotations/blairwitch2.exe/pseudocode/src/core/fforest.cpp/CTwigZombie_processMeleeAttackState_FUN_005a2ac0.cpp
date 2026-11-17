// Name: core_fforest.cpp_CTwigZombie_processMeleeAttackState_FUN_005a2ac0
// Address: 005a2ac0
// Address Range: [[005a2ac0, 005a2db8]]
// Convention: __cdecl
// Signature: void __cdecl core_fforest_cpp_CTwigZombie_processMeleeAttackState_FUN_005a2ac0(CTwigZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_fforest_cpp_CTwigZombie_processMeleeAttackState_FUN_005a2ac0(CTwigZombie *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  CDemonActor *pCVar4;
  SMotion *pSVar5;
  SStateMachine *this_ptr_01;
  byte bVar6;
  float afStackY_106c [999];
  SDamageInfo SStack_c0;
  CVector3f CStack_84;
  float fStack_78;
  float afStack_74 [2];
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [4];
  float fStack_34;
  CVector3f CStack_30;
  float fStack_1c;
  float fStack_18;
  CMatrix3x4f *pCStack_14;
  
  bVar6 = 0;
  pCVar4 = (*(this_ptr->base).base.base.base.vtable._ub[1].getCarrier)((CDemonActor *)this_ptr);
  if (pCVar4 != (CDemonActor *)0x0) {
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              ((CCharacter *)this_ptr,&(((this_ptr->base).base.victim)->base).location.position);
    this_ptr_00 = &(this_ptr->base).base.base.model;
    fStack_18 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_00503e60
                          (&this_ptr_00->base);
    pCStack_14 = (CMatrix3x4f *)fStack_18;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(&this_ptr_00->base);
    if (pSVar5->state_index != 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(&this_ptr_00->base,2,1);
      return;
    }
    if ((0.15f <= fStack_18) && (fStack_18 <= 0.2f)) {
      (this_ptr->base).base.speed = 1.0;
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_c0);
      SStack_c0.damage_amount = (this_ptr->base).base.base.size_scale * 10.0f;
      SStack_c0.attacker = (CDemonActor *)this_ptr;
      SStack_c0.wielder = (CDemonActor *)this_ptr;
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
      pCStack_14 = (this_ptr->base).base.base.model.bone_transform.bone_model_matrices;
      core_xform_cpp_transformVector3x4_FUN_00591530
                (&g_CVector3f_0265370c,pCStack_14 + this_ptr->finger_parent_bone,&CStack_30);
      afStack_44[2] = CStack_30.x;
      afStack_44[(uint)bVar6 * -2 + 3] = *(float *)((int)&CStack_30 + (uint)bVar6 * -8 + 4);
      afStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           *(float *)((int)&CStack_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_xform_cpp_transformVector3x4_FUN_00591530
                (&g_CVector3f_0265370c,pCStack_14 + this_ptr->finger_bone,&CStack_54);
      fStack_48 = CStack_54.x;
      afStack_44[(uint)bVar6 * -2] = *(float *)((int)&CStack_54 + (uint)bVar6 * -8 + 4);
      afStack_44[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           *(float *)((int)&CStack_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      fStack_78 = fStack_48 - afStack_44[2];
      afStack_74[0] = afStack_44[0] - afStack_44[3];
      afStack_74[1] = afStack_44[1] - fStack_34;
      CStack_84.x = fStack_48 - afStack_44[2];
      *(float *)((int)&CStack_84 + (uint)bVar6 * -8 + 4) = afStack_74[(uint)bVar6 * -2];
      *(float *)((int)&CStack_84 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      CStack_84.y = CStack_84.y * 0.5f + afStack_44[3];
      CStack_84.x = CStack_84.x * 0.5f + afStack_44[2];
      CStack_84.z = CStack_84.z * 0.5f + fStack_34;
      fStack_1c = SQRT(CStack_84.z * CStack_84.z +
                       CStack_84.x * CStack_84.x + CStack_84.y * CStack_84.y);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                ((CDemonActor *)this_ptr,&CStack_84,&CStack_6c);
      CStack_60.x = CStack_6c.x;
      *(uint *)((int)&CStack_60 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_6c + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_60 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_6c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      if (&CStack_84 != &CStack_60) {
        CStack_84.x = CStack_60.x;
        CStack_84.y = CStack_60.y;
        CStack_84.z = CStack_60.z;
      }
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110
                ((CEnemy *)this_ptr,&CStack_84,fStack_1c,&SStack_c0);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr);
      return;
    }
    if ((0.2f < fStack_18) &&
       (pCVar1 = (this_ptr->base).base.victim,
       fVar2 = (pCVar1->base).location.position.x -
               (this_ptr->base).base.base.base.location.position.x,
       fVar3 = (pCVar1->base).location.position.z -
               (this_ptr->base).base.base.base.location.position.z,
       3.0f < SQRT(fVar3 * fVar3 + fVar2 * fVar2))) {
      this_ptr_01 = &(this_ptr->base).state_machine;
      core_muzzle_cpp_SStateMachine_setTransitionDelay_FUN_0059dcb0(this_ptr_01,1.0);
      core_muzzle_cpp_SStateMachine_setNextState_FUN_0059d8e0(this_ptr_01,"Chasing");
      return;
    }
  }
  return;
}
