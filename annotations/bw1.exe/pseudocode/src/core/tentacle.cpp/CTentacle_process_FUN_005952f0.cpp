// Name: core_tentacle.cpp_CTentacle_process_FUN_005952f0
// Address: 005952f0
// Address Range: [[005952f0, 00595b76]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005952f0(CTentacle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005952f0(CTentacle *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  CTentacle *pCVar6;
  uint uVar7;
  EDeathState EVar8;
  CDemonActor *pCVar9;
  CMatrix3x4f *pCVar10;
  CMatrix3x4f *pCVar11;
  CMatrix3x4f *pCVar12;
  byte bVar13;
  float afStackY_10dc [903];
  CVector3f *input_local_point;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  CMatrix3x4f CStack_2a4;
  CMatrix3x4f CStack_274;
  CMatrix3x4f CStack_244;
  CMatrix3x4f CStack_214;
  CMatrix3x4f CStack_1e4;
  CMatrix3x4f CStack_1b4;
  CMatrix3x4f CStack_184;
  CMatrix3x4f CStack_154;
  CMatrix3x4f CStack_124;
  CVector3f CStack_f4;
  CVector3f CStack_e8;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [2];
  CVector3f CStack_c4;
  float fStack_b8;
  float afStack_b4 [2];
  CVector3f CStack_ac;
  float fStack_a0;
  float afStack_9c [5];
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  float fStack_64;
  float afStack_60 [4];
  float fStack_50;
  CVector3f CStack_4c;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f *pCStack_24;
  CMatrix3x4f *pCStack_20;
  CVector3f *pCStack_1c;
  CDeformableModelInstance *pCStack_18;
  float fStack_14;
  
  bVar13 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar4 != 0) {
    pCStack_24 = (CVector3f *)&(this_ptr->base).base.base.orient;
    fStack_2a8 = delta_time * (this_ptr->base).speed;
    pCStack_20 = &this_ptr->prev_target_matrix;
    pCStack_1c = &(this_ptr->base).base.base.location.position;
    pCStack_18 = &(this_ptr->base).base.model;
    while (0.0 < fStack_2a8) {
      uVar7 = core_motion_cpp_CMotionController_advance_FUN_00524270
                        (&pCStack_18->base,&stack0xfffffd58);
      if (99 < uVar7) {
        if (uVar7 < 0x65) {
          pCVar1 = (this_ptr->base).victim;
          if ((pCVar1 != (CCharacter *)0x0) &&
             (pCVar9 = (*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1),
             pCVar9 == (CDemonActor *)0x0)) {
            core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180
                      (pCStack_18);
            core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_00595f10(this_ptr,&CStack_2a4);
            pCVar11 = &CStack_2a4;
            pCVar10 = &CStack_124;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              pCVar10->m[0].w = pCVar11->m[0].w;
              pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
              pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
            }
            core_xform_cpp_getTranslation_FUN_005b6270(&CStack_124,&CStack_c4);
            input_local_point = &CStack_f4;
            CStack_f4.x = CStack_c4.x;
            *(uint *)((int)&CStack_f4 + (uint)bVar13 * -8 + 4) =
                 *(uint *)((int)&CStack_c4 + (uint)bVar13 * -8 + 4);
            *(uint *)((int)&CStack_f4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 *(uint *)((int)&CStack_c4 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                      ((CDemonActor *)this_ptr,input_local_point,&CStack_70);
            CStack_4c.x = CStack_70.x;
            *(uint *)((int)&CStack_4c + (uint)bVar13 * -8 + 4) =
                 *(uint *)((int)&CStack_70 + (uint)bVar13 * -8 + 4);
            *(uint *)((int)&CStack_4c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
                 *(uint *)((int)&CStack_70 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
            pCVar1 = (this_ptr->base).victim;
            afStack_60[2] = CStack_4c.x - (pCVar1->base).location.position.x;
            afStack_60[3] = CStack_4c.y - (pCVar1->base).location.position.y;
            fStack_50 = CStack_4c.z - (pCVar1->base).location.position.z;
            fStack_d0 = afStack_60[2];
            afStack_cc[(uint)bVar13 * -2] = afStack_60[(uint)bVar13 * -2 + 3];
            afStack_cc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                 afStack_60[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
            if (((ABS(afStack_cc[0]) <= (float)_DAT_005f775e) &&
                (fStack_d0 * fStack_d0 + afStack_cc[1] * afStack_cc[1] <= (float)_DAT_005f7766)) &&
               (iVar4 = (*(((pCVar1->base).vtable._uc)->_uc).getGrabbed)
                                  (pCVar1,(CDemonActor *)this_ptr,1), iVar4 != 0)) {
              pCVar1 = (this_ptr->base).victim;
              this_ptr->target_blend = 0.0;
              core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005b5760
                        (&CStack_184,&(pCVar1->base).location.position,&(pCVar1->base).orient.vec);
              core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005b5620
                        (&CStack_244,pCStack_1c,pCStack_24);
              core_xform_cpp_inverse_FUN_005b6380(&CStack_124,&CStack_1b4);
              pCVar11 = &CStack_154;
              pCVar10 = &CStack_1b4;
              pCVar12 = &CStack_154;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                pCVar12->m[0].w = pCVar10->m[0].w;
                pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
                pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&CStack_184,&CStack_244,&CStack_214);
              pCVar10 = &CStack_214;
              pCVar12 = &CStack_1e4;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                pCVar12->m[0].w = pCVar10->m[0].w;
                pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
                pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005b5200(&CStack_1e4,pCVar11,&CStack_274);
              pCVar11 = &CStack_274;
              pCVar10 = &this_ptr->target_matrix;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                pCVar10->m[0].w = pCVar11->m[0].w;
                pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
                pCVar10 = (CMatrix3x4f *)((int)pCVar10 + (uint)bVar13 * -8 + 4);
              }
              pCVar11 = &this_ptr->target_matrix;
              pCVar10 = &this_ptr->prev_target_matrix;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                pCVar10->m[0].w = pCVar11->m[0].w;
                pCVar11 = (CMatrix3x4f *)((int)pCVar11 + (uint)bVar13 * -8 + 4);
                pCVar10 = (CMatrix3x4f *)((int)pCVar10 + (uint)bVar13 * -8 + 4);
              }
              core_xform_cpp_clearTranslation_FUN_005b5600(pCStack_20);
              iVar4 = 0;
              do {
                CStack_ac.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-7.0,7.0);
                fStack_14 = CStack_ac.x;
                CStack_ac.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-7.0,7.0);
                fStack_14 = CStack_ac.z;
                CStack_ac.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(-1.0,15.0);
                iVar4 = iVar4 + 1;
                fStack_14 = CStack_ac.y;
                core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40
                          (g_CGorePtr,&CStack_4c,&CStack_ac,((this_ptr->base).victim)->blood_type);
              } while (iVar4 < 0x46);
            }
          }
        }
        else if (((uVar7 == 0x65) && (pCVar1 = (this_ptr->base).victim, pCVar1 != (CCharacter *)0x0)
                 ) && (pCVar6 = (CTentacle *)
                                (*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1),
                      pCVar6 == this_ptr)) {
          (((this_ptr->base).victim)->base).lifecycle_state = ACTOR_DESTROYED;
        }
      }
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&pCStack_18->base);
    uVar7 = pSVar5->state_index;
    if (uVar7 < 2) {
      if (uVar7 == 0) {
        this_ptr->chase_timer = 0.0;
        if (0.0 < this_ptr->wait_timer) {
          this_ptr->wait_timer = this_ptr->wait_timer - delta_time;
        }
        if (this_ptr->wait_timer <= 0.0) {
          this_ptr_00 = &(this_ptr->base).base.model;
          if (this_ptr->grave_actor == (CDemonActor *)0x0) {
            iVar4 = core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_00595c40
                              (this_ptr,"CEnemy CHero CNPC");
            if (iVar4 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,2,1)
              ;
              this_ptr->wait_timer = 0.0;
            }
          }
          else {
            iVar4 = core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_00595c40
                              (this_ptr,"CHero CNPC");
            if (iVar4 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&this_ptr_00->base,2,1)
              ;
              this_ptr->wait_timer = 0.0;
              core_grave_cpp_CGrave_startAnimation_FUN_004e6bf0((CGrave *)this_ptr->grave_actor);
              this_ptr->grave_actor = (CDemonActor *)0x0;
            }
          }
        }
      }
    }
    else if (uVar7 < 3) {
      fVar2 = this_ptr->chase_timer + delta_time;
      this_ptr->chase_timer = fVar2;
      if (fVar2 < (float)_DAT_005f7726) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar1 = (this_ptr->base).victim;
        if (pCVar1 != (CCharacter *)0x0) {
          fStack_b8 = (pCVar1->base).location.position.x - ((CVector3f *)&pCStack_1c->x)->x;
          afStack_b4[0] = (pCVar1->base).location.position.y - pCStack_1c->y;
          afStack_b4[1] = (pCVar1->base).location.position.z - pCStack_1c->z;
          CStack_7c.x = fStack_b8;
          *(float *)((int)&CStack_7c + (uint)bVar13 * -8 + 4) = afStack_b4[(uint)bVar13 * -2];
          *(float *)((int)&CStack_7c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
               afStack_b4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_7c,&CStack_dc);
          fStack_64 = CStack_dc.x;
          afStack_60[(uint)bVar13 * -2] = *(float *)((int)&CStack_dc + (uint)bVar13 * -8 + 4);
          afStack_60[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
               *(float *)((int)&CStack_dc + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
          fStack_3c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                (afStack_60[0] - (this_ptr->base).base.base.orient.vec.y);
          fStack_2c = delta_time * _DAT_005f772e;
          (this_ptr->base).base.turn_angle_accumulator = fStack_3c;
          fStack_34 = -fStack_2c;
          if ((this_ptr->base).base.turn_angle_accumulator < fStack_34) {
            (this_ptr->base).base.turn_angle_accumulator = fStack_34;
          }
          if (fStack_2c < (this_ptr->base).base.turn_angle_accumulator) {
            (this_ptr->base).base.turn_angle_accumulator = fStack_2c;
          }
          fStack_14 = fStack_3c;
          if ((float)_DAT_005f7736 < this_ptr->chase_timer) {
            pCVar1 = (this_ptr->base).victim;
            fVar2 = (this_ptr->base).base.base.location.position.x -
                    (pCVar1->base).location.position.x;
            fVar3 = (this_ptr->base).base.base.location.position.z -
                    (pCVar1->base).location.position.z;
            fStack_2b0 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
            fStack_2ac = fStack_2b0;
            if (((fStack_3c < _DAT_005f773e) &&
                (ABS((this_ptr->base).base.base.location.position.y -
                     (pCVar1->base).location.position.y) < (float)_DAT_005f7746)) &&
               ((float)_DAT_005f774e < fStack_2b0 && fStack_2b0 < (float)_DAT_005f7756)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (&(this_ptr->base).base.model.base,6,1);
              this_ptr->wait_timer = 25.0;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(&pCStack_18->base,0,1);
        this_ptr->wait_timer = 25.0;
      }
    }
    else if ((((uVar7 == 6) && (pCVar1 = (this_ptr->base).victim, pCVar1 != (CCharacter *)0x0)) &&
             (EVar8 = (*(((pCVar1->base).vtable._uc)->_uc).getDeathState)(pCVar1), (int)EVar8 < 1))
            && (pCVar1 = (this_ptr->base).victim,
               pCVar9 = (*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1),
               pCVar9 == (CDemonActor *)0x0)) {
      pCVar1 = (this_ptr->base).victim;
      fStack_a0 = (pCVar1->base).location.position.x - ((CVector3f *)&pCStack_1c->x)->x;
      afStack_9c[0] = (pCVar1->base).location.position.y - pCStack_1c->y;
      afStack_9c[1] = (pCVar1->base).location.position.z - pCStack_1c->z;
      CStack_88.x = fStack_a0;
      *(float *)((int)&CStack_88 + (uint)bVar13 * -8 + 4) = afStack_9c[(uint)bVar13 * -2];
      *(float *)((int)&CStack_88 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           afStack_9c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&CStack_88,&CStack_e8);
      afStack_9c[2] = CStack_e8.x;
      afStack_9c[(uint)bVar13 * -2 + 3] = *(float *)((int)&CStack_e8 + (uint)bVar13 * -8 + 4);
      afStack_9c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           *(float *)((int)&CStack_e8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
      fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                            (afStack_9c[3] - (this_ptr->base).base.base.orient.vec.y);
      fStack_28 = delta_time * _DAT_005f771e;
      (this_ptr->base).base.turn_angle_accumulator = fStack_14;
      fStack_30 = -fStack_28;
      if (fStack_14 < fStack_30) {
        (this_ptr->base).base.turn_angle_accumulator = fStack_30;
      }
      if (fStack_28 < (this_ptr->base).base.turn_angle_accumulator) {
        (this_ptr->base).base.turn_angle_accumulator = fStack_28;
      }
    }
    fVar2 = delta_time / _DAT_00606ad8 + this_ptr->target_blend;
    this_ptr->target_blend = fVar2;
    if (1.0 < fVar2) {
      this_ptr->target_blend = 1.0;
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  }
  return;
}
