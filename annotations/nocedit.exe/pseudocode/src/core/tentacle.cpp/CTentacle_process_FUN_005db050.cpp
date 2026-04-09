// Name: core_tentacle.cpp_CTentacle_process_FUN_005db050
// Address: 005db050
// Address Range: [[005db050, 005db83c] [03fc21da, 03fc23df]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005db050(CTentacle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005db050(CTentacle *this_ptr,float delta_time)

{
  CLocation *position;
  CDeformableModelInstance *pCVar2;
  uint uVar3;
  CCharacter *pCVar4;
  float fVar5;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CDemonActor *pCVar7;
  CTentacle *pCVar6;
  uint uVar7;
  CVector3f *pCVar8;
  EDeathState EVar8;
  CDemonActor *pCVar9;
  CVector3f *pCVar10;
  float fVar9;
  CMatrix3x4f *pCVar11;
  CMatrix3x4f *pCVar12;
  CMatrix3x4f *pCVar13;
  byte bVar14;
  CMatrix3x4f *matrix_b;
  float local_258;
  float fStack_254;
  CMatrix3x4f CStack_250;
  CMatrix3x4f CStack_220;
  CMatrix3x4f CStack_1f0;
  CMatrix3x4f CStack_1c0;
  CMatrix3x4f CStack_190;
  CMatrix3x4f CStack_160;
  CMatrix3x4f CStack_130;
  CMatrix3x4f CStack_100;
  CMatrix3x4f CStack_d0;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CMatrix3x4f *local_28;
  CVector3f *local_24;
  CVector3f *local_20;
  CDeformableModelInstance *local_1c;
  float fStack_18;
  CDeformableModelInstance *this_ptr_00;
  float fVar2;
  CCharacter *pCVar1;
  float fVar3;
  
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar4 != 0) {
    local_258 = delta_time * (this_ptr->base).speed;
    position = &(this_ptr->base).base.base.location;
    pCVar2 = &(this_ptr->base).base.model;
    while (0.0 < local_258) {
      uVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                        (&pCVar2->motion_controller,&local_258);
      if (99 < uVar7) {
        if (uVar7 < 0x65) {
          pCVar4 = (this_ptr->base).victim;
          if ((pCVar4 != (CCharacter *)0x0) &&
             (pCVar7 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
             pCVar7 == (CDemonActor *)0x0)) {
            core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(pCVar2);
            core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_005dbb70(this_ptr,&CStack_1c0);
            pCVar8 = core_xform_cpp_getTranslation_FUN_005f6110(&CStack_1f0,&CStack_94);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&CStack_a0,pCVar8);
            pCVar4 = (this_ptr->base).victim;
            fVar5 = CStack_a0.x - (pCVar4->base).location.position.x;
            fVar9 = CStack_a0.z - (pCVar4->base).location.position.z;
            if ((ABS(CStack_a0.y - (pCVar4->base).location.position.y) <= (float)6) &&
               ((fVar5 * fVar5 + fVar9 * fVar9 <= (float)16 &&
                (pCVar4 = (this_ptr->base).victim,
                iVar6 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar4,(CDemonActor *)this_ptr,1), iVar6 != 0)))) {
              pCVar4 = (this_ptr->base).victim;
              this_ptr->target_blend = 0.0;
              core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                        (&CStack_160,&(pCVar4->base).location.position,&(pCVar4->base).orient.vec);
              core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                        (&CStack_190,&position->position,&(this_ptr->base).base.base.orient.vec);
              core_xform_cpp_inverse_FUN_005f6210(&CStack_1f0,&CStack_220);
              matrix_b = &CStack_250;
              core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_160,&CStack_190,&CStack_d0);
              core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_130,matrix_b,&CStack_100);
              (this_ptr->target_matrix).m[0].w = CStack_100.m[0].w;
              (this_ptr->target_matrix).m[0].x = CStack_100.m[0].x;
              (this_ptr->target_matrix).m[0].y = CStack_100.m[0].y;
              (this_ptr->target_matrix).m[0].z = CStack_100.m[0].z;
              (this_ptr->target_matrix).m[1].w = CStack_100.m[1].w;
              (this_ptr->target_matrix).m[1].x = CStack_100.m[1].x;
              (this_ptr->target_matrix).m[1].y = CStack_100.m[1].y;
              (this_ptr->target_matrix).m[1].z = CStack_100.m[1].z;
              (this_ptr->target_matrix).m[2].w = CStack_100.m[2].w;
              (this_ptr->target_matrix).m[2].x = CStack_100.m[2].x;
              (this_ptr->target_matrix).m[2].y = CStack_100.m[2].y;
              (this_ptr->target_matrix).m[2].z = CStack_100.m[2].z;
              (this_ptr->prev_target_matrix).m[0].w = (this_ptr->target_matrix).m[0].w;
              (this_ptr->prev_target_matrix).m[0].x = (this_ptr->target_matrix).m[0].x;
              (this_ptr->prev_target_matrix).m[0].y = (this_ptr->target_matrix).m[0].y;
              (this_ptr->prev_target_matrix).m[0].z = (this_ptr->target_matrix).m[0].z;
              (this_ptr->prev_target_matrix).m[1].w = (this_ptr->target_matrix).m[1].w;
              (this_ptr->prev_target_matrix).m[1].x = (this_ptr->target_matrix).m[1].x;
              (this_ptr->prev_target_matrix).m[1].y = (this_ptr->target_matrix).m[1].y;
              (this_ptr->prev_target_matrix).m[1].z = (this_ptr->target_matrix).m[1].z;
              (this_ptr->prev_target_matrix).m[2].w = (this_ptr->target_matrix).m[2].w;
              (this_ptr->prev_target_matrix).m[2].x = (this_ptr->target_matrix).m[2].x;
              (this_ptr->prev_target_matrix).m[2].y = (this_ptr->target_matrix).m[2].y;
              (this_ptr->prev_target_matrix).m[2].z = (this_ptr->target_matrix).m[2].z;
              core_xform_cpp_clearTranslation_FUN_005f5370(&this_ptr->prev_target_matrix);
              iVar6 = 0;
              do {
                CStack_7c.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-7.0,7.0);
                CStack_7c.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-7.0,7.0);
                CStack_7c.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(-1.0,15.0);
                iVar6 = iVar6 + 1;
                core_gore_cpp_CGore_spawnBloodParticles_FUN_004edaa0
                          (g_CGorePtr,&CStack_a0,&CStack_7c,((this_ptr->base).victim)->blood_type);
              } while (iVar6 < 0x46);
            }
          }
        }
        else if (((uVar7 == 0x65) && (pCVar4 = (this_ptr->base).victim, pCVar4 != (CCharacter *)0x0)
                 ) && (pCVar6 = (CTentacle *)
                                (*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
                      pCVar6 == this_ptr)) {
          (((this_ptr->base).victim)->base).lifecycle_state = ACTOR_DESTROYED;
        }
      }
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCVar2->motion_controller);
    uVar3 = pSVar5->state_index;
    if (uVar3 < 2) {
      if (uVar3 == 0) {
        this_ptr->chase_timer = 0.0;
        if (0.0 < this_ptr->wait_timer) {
          this_ptr->wait_timer = this_ptr->wait_timer - delta_time;
        }
        if (this_ptr->wait_timer <= 0.0) {
          pCVar2 = &(this_ptr->base).base.model;
          if (this_ptr->grave_actor == (CDemonActor *)0x0) {
            iVar6 = core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_005db900
                              (this_ptr,"CEnemy CHero CNPC");
            if (iVar6 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,2,1);
              this_ptr->wait_timer = 0.0;
            }
          }
          else {
            iVar6 = core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_005db900
                              (this_ptr,"CHero CNPC");
            if (iVar6 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&pCVar2->motion_controller,2,1);
              this_ptr->wait_timer = 0.0;
              core_grave_cpp_CGrave_startAnimation_FUN_004ee790((CGrave *)this_ptr->grave_actor);
              this_ptr->grave_actor = (CDemonActor *)0x0;
            }
          }
        }
      }
    }
    else if (uVar3 < 3) {
      fVar5 = this_ptr->chase_timer + delta_time;
      this_ptr->chase_timer = fVar5;
      if (fVar5 < (float)25) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar4 = (this_ptr->base).victim;
        if (pCVar4 != (CCharacter *)0x0) {
          CStack_88.x = (pCVar4->base).location.position.x - (position->position).x;
          CStack_88.y = (pCVar4->base).location.position.y -
                        (this_ptr->base).base.base.location.position.y;
          CStack_88.z = (pCVar4->base).location.position.z -
                        (this_ptr->base).base.base.location.position.z;
          pCVar8 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&CStack_70,&CStack_88);
          fStack_254 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (pCVar8->y - (this_ptr->base).base.base.orient.vec.y);
          fVar5 = delta_time * (float)0.78539816337500001;
          (this_ptr->base).base.turn_angle_accumulator = fStack_254;
          if ((this_ptr->base).base.turn_angle_accumulator < -fVar5) {
            (this_ptr->base).base.turn_angle_accumulator = -fVar5;
          }
          if (fVar5 < (this_ptr->base).base.turn_angle_accumulator) {
            (this_ptr->base).base.turn_angle_accumulator = fVar5;
          }
          if ((float)5 < this_ptr->chase_timer) {
            pCVar4 = (this_ptr->base).victim;
            fVar2 = (this_ptr->base).base.base.location.position.x -
                    (pCVar4->base).location.position.x;
            fVar3 = (this_ptr->base).base.base.location.position.z -
                    (pCVar4->base).location.position.z;
            fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
            if (((fStack_254 < (float)0.17453292519444399) &&
                (ABS((this_ptr->base).base.base.location.position.y -
                     (pCVar4->base).location.position.y) < (float)4)) &&
               ((float)7 < fVar5 && fVar5 < (float)12)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,6,1);
              this_ptr->wait_timer = 25.0;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCVar2->motion_controller,0,1);
        this_ptr->wait_timer = 25.0;
      }
    }
    else if (((uVar3 == 6) && (pCVar1 = (this_ptr->base).victim, pCVar1 != (CCharacter *)0x0)) &&
            ((EVar8 = (*(((pCVar1->base).vtable._uc)->_uc).getDeathState)(pCVar1), (int)EVar8 < 1 &&
             (pCVar4 = (this_ptr->base).victim,
             pCVar9 = (*(((pCVar4->base).vtable._uc)->_uc).getGrabber)(pCVar4),
             pCVar9 == (CDemonActor *)0x0)))) {
      pCVar4 = (this_ptr->base).victim;
      CStack_64.x = (pCVar4->base).location.position.x - (position->position).x;
      CStack_64.y = (pCVar4->base).location.position.y -
                    (this_ptr->base).base.base.location.position.y;
      CStack_64.z = (pCVar4->base).location.position.z -
                    (this_ptr->base).base.base.location.position.z;
      pCVar10 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                          (&CStack_58,&CStack_64);
      fVar9 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (pCVar10->y - (this_ptr->base).base.base.orient.vec.y);
      fVar5 = delta_time * (float)1.04719755116667;
      (this_ptr->base).base.turn_angle_accumulator = fVar9;
      if (fVar9 < -fVar5) {
        (this_ptr->base).base.turn_angle_accumulator = -fVar5;
      }
      if (fVar5 < (this_ptr->base).base.turn_angle_accumulator) {
        (this_ptr->base).base.turn_angle_accumulator = fVar5;
      }
    }
    fVar5 = delta_time / 0.5f + this_ptr->target_blend;
    this_ptr->target_blend = fVar5;
    if (1.0 < fVar5) {
      this_ptr->target_blend = 1.0;
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr,delta_time);
  }
  return;
}
