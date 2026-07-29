// Name: core_tentacle.cpp_FUN_00543c50
// Address: 00543c50
// Address Range: [[00543c50, 0054443c]]
// Convention: unknown
// Signature: void core_tentacle_cpp_FUN_00543c50(CTentacle *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_tentacle_cpp_FUN_00543c50(CTentacle *param_1,float param_2)

{
  CDeformableModelInstance *this_ptr;
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  CTentacle *pCVar6;
  uint uVar7;
  EDeathState EVar8;
  CDemonActor *pCVar9;
  CVector3f *pCVar10;
  uint *puVar11;
  float *pfVar12;
  CMatrix3x4f *pCVar13;
  uint *puVar14;
  CMatrix3x4f *pCVar15;
  byte bVar16;
  float local_258;
  float fStack_254;
  uint auStack_250 [12];
  uint auStack_220 [12];
  CMatrix3x4f CStack_1f0;
  float afStack_1c0 [12];
  CMatrix3x4f CStack_190;
  CMatrix3x4f CStack_160;
  uint auStack_130 [12];
  float afStack_100 [12];
  uint auStack_d0 [12];
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
  
  bVar16 = 0;
  iVar4 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2);
  if (iVar4 != 0) {
    local_24 = (CVector3f *)&(param_1->base).base.base.orient;
    local_258 = param_2 * (param_1->base).speed;
    local_28 = &param_1->prev_target_matrix;
    local_20 = &(param_1->base).base.base.location.position;
    local_1c = &(param_1->base).base.model;
    while (0.0 < local_258) {
      uVar7 = core_motion_cpp_CMotionController_advance_FUN_004e11c0
                        (&local_1c->motion_controller,&local_258);
      if (99 < uVar7) {
        if (uVar7 < 0x65) {
          pCVar1 = (param_1->base).victim;
          if ((pCVar1 != (CCharacter *)0x0) &&
             (pCVar9 = (*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1),
             pCVar9 == (CDemonActor *)0x0)) {
            core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(local_1c);
            core_tentacle_cpp_CTentacle_computeGripBoneMatrix_FUN_00544760(param_1);
            pfVar12 = afStack_1c0;
            pCVar13 = &CStack_1f0;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              pCVar13->m[0].w = *pfVar12;
              pfVar12 = pfVar12 + (uint)bVar16 * -2 + 1;
              pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar16 * -2 + 1) * 4);
            }
            pCVar10 = core_xform_cpp_getTranslation_FUN_0055bc00(&CStack_1f0,&CStack_94);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                      ((CDemonActor *)param_1,&CStack_a0,pCVar10);
            pCVar1 = (param_1->base).victim;
            fStack_4c = CStack_a0.x - (pCVar1->base).location.position.x;
            fStack_48 = CStack_a0.y - (pCVar1->base).location.position.y;
            fStack_44 = CStack_a0.z - (pCVar1->base).location.position.z;
            if (((ABS(fStack_48) <= (float)6) &&
                (fStack_4c * fStack_4c + fStack_44 * fStack_44 <= (float)16)) &&
               (pCVar1 = (param_1->base).victim,
               iVar4 = (*(((pCVar1->base).vtable._uc)->_uc).getGrabbed)
                                 (pCVar1,(CDemonActor *)param_1,1), iVar4 != 0)) {
              pCVar1 = (param_1->base).victim;
              param_1->target_blend = 0.0;
              core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                        (&CStack_160,&(pCVar1->base).location.position,&(pCVar1->base).orient.vec);
              core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
                        (&CStack_190,local_20,local_24);
              core_xform_cpp_inverse_FUN_0055bd00(&CStack_1f0);
              puVar11 = auStack_220;
              puVar14 = auStack_250;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar14 = *puVar11;
                puVar11 = puVar11 + (uint)bVar16 * -2 + 1;
                puVar14 = puVar14 + (uint)bVar16 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&CStack_160,&CStack_190,auStack_250);
              puVar11 = auStack_d0;
              puVar14 = auStack_130;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar14 = *puVar11;
                puVar11 = puVar11 + (uint)bVar16 * -2 + 1;
                puVar14 = puVar14 + (uint)bVar16 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_130);
              pfVar12 = afStack_100;
              pCVar13 = &param_1->target_matrix;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                pCVar13->m[0].w = *pfVar12;
                pfVar12 = pfVar12 + (uint)bVar16 * -2 + 1;
                pCVar13 = (CMatrix3x4f *)((int)pCVar13 + (uint)bVar16 * -8 + 4);
              }
              pCVar13 = &param_1->target_matrix;
              pCVar15 = &param_1->prev_target_matrix;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                pCVar15->m[0].w = pCVar13->m[0].w;
                pCVar13 = (CMatrix3x4f *)((int)pCVar13 + (uint)bVar16 * -8 + 4);
                pCVar15 = (CMatrix3x4f *)((int)pCVar15 + (uint)bVar16 * -8 + 4);
              }
              core_xform_cpp_clearTranslation_FUN_0055ae60(local_28);
              iVar4 = 0;
              do {
                CStack_7c.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-7.0,7.0);
                fStack_18 = CStack_7c.x;
                CStack_7c.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-7.0,7.0);
                fStack_18 = CStack_7c.z;
                CStack_7c.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(-1.0,15.0);
                iVar4 = iVar4 + 1;
                fStack_18 = CStack_7c.y;
                core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
                          ((CGore *)INT_005b96c4,&CStack_a0,&CStack_7c,
                           ((param_1->base).victim)->blood_type);
              } while (iVar4 < 0x46);
            }
          }
        }
        else if (((uVar7 == 0x65) && (pCVar1 = (param_1->base).victim, pCVar1 != (CCharacter *)0x0))
                && (pCVar6 = (CTentacle *)(*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1),
                   pCVar6 == param_1)) {
          (((param_1->base).victim)->base).lifecycle_state = ACTOR_DESTROYED;
        }
      }
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                       (&local_1c->motion_controller);
    uVar7 = pSVar5->state_index;
    if (uVar7 < 2) {
      if (uVar7 == 0) {
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
    else if (uVar7 < 3) {
      fVar2 = param_1->chase_timer + param_2;
      param_1->chase_timer = fVar2;
      if (fVar2 < (float)25) {
        (*(((param_1->base).base.base.vtable._ue)->_ue).updateVictim)(&param_1->base,param_2);
        pCVar1 = (param_1->base).victim;
        if (pCVar1 != (CCharacter *)0x0) {
          CStack_88.x = (pCVar1->base).location.position.x - ((CVector3f *)&local_20->x)->x;
          CStack_88.y = (pCVar1->base).location.position.y - local_20->y;
          CStack_88.z = (pCVar1->base).location.position.z - local_20->z;
          pCVar10 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                              (&CStack_70,&CStack_88);
          fStack_254 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                 (pCVar10->y - (param_1->base).base.base.orient.vec.y);
          fStack_2c = param_2 * (float)0.78539816337500001;
          (param_1->base).base.turn_angle_accumulator = fStack_254;
          fStack_38 = -fStack_2c;
          if ((param_1->base).base.turn_angle_accumulator < fStack_38) {
            (param_1->base).base.turn_angle_accumulator = fStack_38;
          }
          if (fStack_2c < (param_1->base).base.turn_angle_accumulator) {
            (param_1->base).base.turn_angle_accumulator = fStack_2c;
          }
          fStack_18 = fStack_254;
          if ((float)5 < param_1->chase_timer) {
            pCVar1 = (param_1->base).victim;
            fVar2 = (param_1->base).base.base.location.position.x -
                    (pCVar1->base).location.position.x;
            fVar3 = (param_1->base).base.base.location.position.z -
                    (pCVar1->base).location.position.z;
            fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
            if (((fStack_254 < (float)0.17453292519444399) &&
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
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                  (&local_1c->motion_controller,0,1);
        param_1->wait_timer = 25.0;
      }
    }
    else if ((((uVar7 == 6) && (pCVar1 = (param_1->base).victim, pCVar1 != (CCharacter *)0x0)) &&
             (EVar8 = (*(((pCVar1->base).vtable._uc)->_uc).getDeathState)(pCVar1), (int)EVar8 < 1))
            && (pCVar1 = (param_1->base).victim,
               pCVar9 = (*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1),
               pCVar9 == (CDemonActor *)0x0)) {
      pCVar1 = (param_1->base).victim;
      CStack_64.x = (pCVar1->base).location.position.x - ((CVector3f *)&local_20->x)->x;
      CStack_64.y = (pCVar1->base).location.position.y - local_20->y;
      CStack_64.z = (pCVar1->base).location.position.z - local_20->z;
      pCVar10 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                          (&CStack_58,&CStack_64);
      fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                            (pCVar10->y - (param_1->base).base.base.orient.vec.y);
      fStack_30 = param_2 * (float)1.04719755116667;
      (param_1->base).base.turn_angle_accumulator = fStack_18;
      fStack_34 = -fStack_30;
      if (fStack_18 < fStack_34) {
        (param_1->base).base.turn_angle_accumulator = fStack_34;
      }
      if (fStack_30 < (param_1->base).base.turn_angle_accumulator) {
        (param_1->base).base.turn_angle_accumulator = fStack_30;
      }
    }
    fVar2 = param_2 / _DAT_005a30f8 + param_1->target_blend;
    param_1->target_blend = fVar2;
    if (1.0 < fVar2) {
      param_1->target_blend = 1.0;
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_004259a0((CCharacter *)param_1);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0
              (&(param_1->base).base.model);
    core_charactr_cpp_FUN_0042a150((CCharacter *)param_1,param_2);
  }
  return;
}
