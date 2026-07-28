// Name: core_tentacle.cpp_FUN_00543c50
// Address: 00543c50
// Address Range: [[00543c50, 0054443c]]
// Convention: unknown
// Signature: void core_tentacle_cpp_FUN_00543c50(CTentacle *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tentacle_cpp_FUN_00543c50(CTentacle *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  CVector3f *input_local_point;
  CDemonActor *pCVar6;
  CTentacle *pCVar7;
  uint uVar8;
  float fVar9;
  CDeformableModelInstance *unaff_EBP;
  uint *puVar10;
  float *pfVar11;
  CMatrix3x4f *pCVar12;
  CVector3f *unaff_EDI;
  uint *puVar13;
  CMatrix3x4f *pCVar14;
  byte bVar15;
  CTentacle *in_stack_fffffda0;
  CTentacle *in_stack_fffffda4;
  uint auStack_23c [12];
  uint auStack_20c [10];
  CMatrix3x4f CStack_1e4;
  float afStack_1b4 [14];
  CMatrix3x4f aCStack_17c [2];
  uint auStack_11c [12];
  float afStack_ec [12];
  uint auStack_bc [10];
  float fStack_94;
  float fStack_90;
  byte auStack_8c [16];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  byte auStack_68 [20];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_2c;
  CMatrix3x4f *local_28;
  UOrientationVector *local_24;
  CLocation *local_20;
  CMotionController *local_1c;
  float *pfStack_14;
  
  bVar15 = 0;
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 != 0) {
    local_24 = &(param_1->base).base.base.orient;
    input_local_point = (CVector3f *)(param_2 * (param_1->base).speed);
    local_28 = &param_1->prev_target_matrix;
    local_20 = &(param_1->base).base.base.location;
    local_1c = &(param_1->base).base.model.motion_controller;
    while (0.0 < (float)input_local_point) {
      uVar8 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                        (local_1c,(float *)&stack0xfffffda8);
      if (99 < uVar8) {
        if (uVar8 < 0x65) {
          pCVar1 = (param_1->base).victim;
          if ((pCVar1 != (CCharacter *)0x0) &&
             (iVar4 = (*(((pCVar1->base).vtable._uc)->_uc).applyDamage)
                                (pCVar1,(int)in_stack_fffffda0,(float)in_stack_fffffda4), iVar4 == 0
             )) {
            core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(unaff_EBP)
            ;
            core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_00544760();
            pfVar11 = afStack_1b4;
            pCVar12 = &CStack_1e4;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              pCVar12->m[0].w = *pfVar11;
              pfVar11 = pfVar11 + (uint)bVar15 * -2 + 1;
              pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar15 * -2 + 1) * 4);
            }
            input_local_point =
                 core_xform_cpp_getTranslation_FUN_0055bc00
                           (&CStack_1e4,(CVector3f *)(auStack_8c + 4));
            in_stack_fffffda4 = (CTentacle *)&fStack_94;
            in_stack_fffffda0 = param_1;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      ((CDemonActor *)param_1,(CVector3f *)in_stack_fffffda4,input_local_point);
            pCVar1 = (param_1->base).victim;
            fStack_40 = fStack_94 - (pCVar1->base).location.position.x;
            fStack_3c = fStack_90 - (pCVar1->base).location.position.y;
            fStack_38 = (float)auStack_8c._0_4_ - (pCVar1->base).location.position.z;
            if ((ABS(fStack_3c) <= (float)6) &&
               (fStack_40 * fStack_40 + fStack_38 * fStack_38 <= (float)16)) {
              input_local_point = (CVector3f *)0x1;
              in_stack_fffffda0 = (CTentacle *)(param_1->base).victim;
              in_stack_fffffda4 = param_1;
              pCVar6 = (*((in_stack_fffffda0->base).base.base.vtable._ub)->dtor)
                                 ((CDemonActor *)in_stack_fffffda0,(uint)param_1);
              if (pCVar6 != (CDemonActor *)0x0) {
                param_1->target_blend = 0.0;
                core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0();
                core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
                          (aCStack_17c,unaff_EDI,(CVector3f *)unaff_EBP);
                core_xform_cpp_inverse_FUN_0055bd00();
                puVar10 = auStack_20c;
                puVar13 = auStack_23c;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar13 = *puVar10;
                  puVar10 = puVar10 + (uint)bVar15 * -2 + 1;
                  puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00();
                puVar10 = auStack_bc;
                puVar13 = auStack_11c;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar13 = *puVar10;
                  puVar10 = puVar10 + (uint)bVar15 * -2 + 1;
                  puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00();
                pfVar11 = afStack_ec;
                pCVar12 = &param_1->target_matrix;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar12->m[0].w = *pfVar11;
                  pfVar11 = pfVar11 + (uint)bVar15 * -2 + 1;
                  pCVar12 = (CMatrix3x4f *)((int)pCVar12 + (uint)bVar15 * -8 + 4);
                }
                pCVar12 = &param_1->target_matrix;
                pCVar14 = &param_1->prev_target_matrix;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar14->m[0].w = pCVar12->m[0].w;
                  pCVar12 = (CMatrix3x4f *)((int)pCVar12 + (uint)bVar15 * -8 + 4);
                  pCVar14 = (CMatrix3x4f *)((int)pCVar14 + (uint)bVar15 * -8 + 4);
                }
                core_xform_cpp_clearTranslation_FUN_0055ae60();
                iVar4 = 0;
                do {
                  auStack_68._0_4_ = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
                  auStack_68._8_4_ = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
                  auStack_68._4_4_ = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
                  input_local_point = (CVector3f *)auStack_8c;
                  iVar4 = iVar4 + 1;
                  in_stack_fffffda0 = (CTentacle *)0x544068;
                  in_stack_fffffda4 = (CTentacle *)INT_005b96c4;
                  core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
                            ((CGore *)INT_005b96c4,input_local_point,(CVector3f *)auStack_68,
                             ((param_1->base).victim)->blood_type);
                } while (iVar4 < 0x46);
              }
            }
          }
        }
        else if (((uVar8 == 0x65) && (pCVar1 = (param_1->base).victim, pCVar1 != (CCharacter *)0x0))
                && (pCVar7 = (CTentacle *)
                             (*(((pCVar1->base).vtable._uc)->_uc).applyDamage)
                                       (pCVar1,(int)in_stack_fffffda0,(float)in_stack_fffffda4),
                   pCVar7 == param_1)) {
          (((param_1->base).victim)->base).lifecycle_state = ACTOR_DESTROYED;
        }
      }
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(local_1c);
    uVar8 = pSVar5->state_index;
    if (uVar8 < 2) {
      if (uVar8 == 0) {
        param_1->chase_timer = 0.0;
        if (0.0 < param_1->wait_timer) {
          param_1->wait_timer = param_1->wait_timer - param_2;
        }
        if (param_1->wait_timer <= 0.0) {
          this_ptr = &(param_1->base).base.model;
          if (param_1->grave_actor == (CDemonActor *)0x0) {
            iVar4 = core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_005444f0
                              (param_1,"CEnemy CHero CNPC");
            if (iVar4 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&this_ptr->motion_controller,2,1);
              param_1->wait_timer = 0.0;
            }
          }
          else {
            iVar4 = core_tentacle_cpp_CTentacle_findNearbyTarget_FUN_005444f0
                              (param_1,"CHero CNPC");
            if (iVar4 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&this_ptr->motion_controller,2,1);
              param_1->wait_timer = 0.0;
              core_grave_cpp_CGrave_startAnimation_FUN_004b0dc0((CGrave *)param_1->grave_actor);
              param_1->grave_actor = (CDemonActor *)0x0;
            }
          }
        }
      }
    }
    else if (uVar8 < 3) {
      fVar9 = param_1->chase_timer + param_2;
      param_1->chase_timer = fVar9;
      if (fVar9 < (float)25) {
        (*(((param_1->base).base.base.vtable._uc)->_uc).dropCarriedObject)
                  ((CCharacter *)param_1,(int)param_2,(CVector3f *)in_stack_fffffda0);
        pCVar1 = (param_1->base).victim;
        if (pCVar1 != (CCharacter *)0x0) {
          fStack_7c = (pCVar1->base).location.position.x - *pfStack_14;
          fStack_78 = (pCVar1->base).location.position.y - pfStack_14[1];
          fStack_74 = (pCVar1->base).location.position.z - pfStack_14[2];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(auStack_68 + 4);
          fVar9 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
          local_20 = (CLocation *)(param_2 * (float)0.78539816337500001);
          (param_1->base).base.turn_angle_accumulator = fVar9;
          fStack_2c = -(float)local_20;
          if ((param_1->base).base.turn_angle_accumulator < fStack_2c) {
            (param_1->base).base.turn_angle_accumulator = fStack_2c;
          }
          if ((float)local_20 < (param_1->base).base.turn_angle_accumulator) {
            (param_1->base).base.turn_angle_accumulator = (float)local_20;
          }
          if ((float)5 < param_1->chase_timer) {
            pCVar1 = (param_1->base).victim;
            fVar2 = (param_1->base).base.base.location.position.x -
                    (pCVar1->base).location.position.x;
            fVar3 = (param_1->base).base.base.location.position.z -
                    (pCVar1->base).location.position.z;
            fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
            if (((fVar9 < (float)0.17453292519444399) &&
                (ABS((param_1->base).base.base.location.position.y -
                     (pCVar1->base).location.position.y) < (float)4)) &&
               ((float)7 < fVar2 && fVar2 < (float)12)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(param_1->base).base.model.motion_controller,6,1);
              param_1->wait_timer = 25.0;
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_1c,0,1);
        param_1->wait_timer = 25.0;
      }
    }
    else if (((uVar8 == 6) && (pCVar1 = (param_1->base).victim, pCVar1 != (CCharacter *)0x0)) &&
            ((iVar4 = (*(((pCVar1->base).vtable._uc)->_uc).releaseFromGrab)(pCVar1), iVar4 < 1 &&
             (pCVar1 = (param_1->base).victim,
             iVar4 = (*(((pCVar1->base).vtable._uc)->_uc).applyDamage)
                               (pCVar1,(int)in_stack_fffffda4,(float)input_local_point), iVar4 == 0)
             ))) {
      pCVar1 = (param_1->base).victim;
      fStack_54 = (pCVar1->base).location.position.x -
                  (float)(unaff_EBP->motion_controller).motion_list_ptr;
      fStack_50 = (pCVar1->base).location.position.y -
                  (float)(unaff_EBP->motion_controller).current_motion_index;
      fStack_4c = (pCVar1->base).location.position.z -
                  (unaff_EBP->motion_controller).current_frame_number;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0();
      fVar9 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00();
      local_20 = (CLocation *)(param_2 * (float)1.04719755116667);
      (param_1->base).base.turn_angle_accumulator = fVar9;
      local_24 = (UOrientationVector *)-(float)local_20;
      if (fVar9 < (float)local_24) {
        (param_1->base).base.turn_angle_accumulator = (float)local_24;
      }
      if ((float)local_20 < (param_1->base).base.turn_angle_accumulator) {
        (param_1->base).base.turn_angle_accumulator = (float)local_20;
      }
    }
    fVar9 = param_2 / _DAT_005a30f8 + param_1->target_blend;
    param_1->target_blend = fVar9;
    if (1.0 < fVar9) {
      param_1->target_blend = 1.0;
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
              (&(param_1->base).base.model);
    core_charactr_cpp_FUN_0042a150(param_1,param_2);
  }
  return;
}
