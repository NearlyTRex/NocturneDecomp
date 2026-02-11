// Name: core_tentacle.cpp_CTentacle_process_FUN_005db050
// Address: 005db050
// Address Range: [[005db050, 005db3d8] [005db479, 005db83c]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005db050(CTentacle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005db050(CTentacle *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  CGrave *this_ptr_01;
  CCharacter *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  CTentacle *pCVar6;
  uint uVar7;
  CDemonActor *pCVar8;
  CVector3f *pCVar9;
  float fVar10;
  CVector3f *unaff_EBP;
  float *pfVar11;
  float *pfVar12;
  CMatrix3x4f *pCVar13;
  char *pcVar14;
  float *pfVar15;
  CMatrix3x4f *pCVar16;
  char *pcVar17;
  byte bVar18;
  CCharacter *in_stack_fffffda0;
  CMatrix3x4f CStack_240;
  byte auStack_210 [48];
  CMatrix3x4f aCStack_1e0 [2];
  CMatrix3x4f CStack_180;
  CMatrix3x4f CStack_150;
  CMatrix3x4f CStack_120;
  CMatrix3x4f CStack_f0;
  byte auStack_c0 [40];
  float fStack_98;
  float fStack_94;
  CVector3f CStack_90;
  CVector3f CStack_80;
  float fStack_6c;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_30;
  float fStack_2c;
  char *local_28;
  UOrientationVector *local_24;
  CLocation *local_20;
  CMotionController *local_1c;
  CDeformableModelInstance *pCStack_18;
  CVector3f *pCStack_14;
  
  bVar18 = 0;
  iVar4 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar4 != 0) {
    local_24 = &(this_ptr->base).base.base.orient;
    pfVar12 = (float *)(delta_time * (this_ptr->base).speed);
    local_28 = this_ptr->unk2 + 0x34;
    local_20 = &(this_ptr->base).base.base.location;
    local_1c = &(this_ptr->base).base.model.motion_controller;
    while (0.0 < (float)pfVar12) {
      uVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610(local_1c);
      if (99 < uVar7) {
        if (uVar7 < 0x65) {
          pCVar1 = (CCharacter *)(this_ptr->base).victim;
          if ((pCVar1 != (CCharacter *)0x0) &&
             (pCVar8 = (*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1),
             pCVar8 == (CDemonActor *)0x0)) {
            core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                      (pCStack_18);
            core_tentacle_cpp_CTentacle_FUN_005dbb70(this_ptr);
            pfVar11 = &aCStack_1e0[0].m[2].x;
            pfVar15 = (float *)(auStack_210 + 0x24);
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *pfVar15 = *pfVar11;
              pfVar11 = pfVar11 + (uint)bVar18 * -2 + 1;
              pfVar15 = pfVar15 + (uint)bVar18 * -2 + 1;
            }
            in_stack_fffffda0 =
                 (CCharacter *)
                 core_xform_cpp_getTranslation_FUN_005f6110
                           ((CMatrix3x4f *)(auStack_210 + 0x24),&CStack_90);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,(CVector3f *)(auStack_c0 + 0x24),
                       (CVector3f *)in_stack_fffffda0);
            pCVar8 = (this_ptr->base).victim;
            CStack_50.z = (float)auStack_c0._36_4_ - (pCVar8->location).position.x;
            fStack_44 = fStack_98 - (pCVar8->location).position.y;
            fStack_40 = fStack_94 - (pCVar8->location).position.z;
            if ((ABS(fStack_44) <= (float)6) &&
               (CStack_50.z * CStack_50.z + fStack_40 * fStack_40 <= (float)16)) {
              in_stack_fffffda0 = (CCharacter *)0x1;
              pCVar1 = (CCharacter *)(this_ptr->base).victim;
              iVar4 = (*(((pCVar1->base).vtable._uc)->_uc).getGrabbed)
                                (pCVar1,(CDemonActor *)this_ptr,1);
              if (iVar4 != 0) {
                pCVar8 = (this_ptr->base).victim;
                this_ptr->unk2[0] = '\0';
                this_ptr->unk2[1] = '\0';
                this_ptr->unk2[2] = '\0';
                this_ptr->unk2[3] = '\0';
                core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                          (&CStack_150,&(pCVar8->location).position,&(pCVar8->orient).vec);
                core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                          (&CStack_180,unaff_EBP,pCStack_14);
                core_xform_cpp_inverse_FUN_005f6210(aCStack_1e0,(CMatrix3x4f *)auStack_210);
                pCVar13 = &CStack_240;
                pfVar12 = (float *)auStack_210;
                pCVar16 = &CStack_240;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar16->m[0].w = *pfVar12;
                  pfVar12 = pfVar12 + (uint)bVar18 * -2 + 1;
                  pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar18 * -2 + 1) * 4);
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                          (&CStack_150,&CStack_180,(CMatrix3x4f *)auStack_c0);
                pfVar12 = (float *)auStack_c0;
                pCVar16 = &CStack_120;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  pCVar16->m[0].w = *pfVar12;
                  pfVar12 = pfVar12 + (uint)bVar18 * -2 + 1;
                  pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar18 * -2 + 1) * 4);
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_120,pCVar13,&CStack_f0);
                pCVar13 = &CStack_f0;
                pcVar14 = this_ptr->unk2 + 4;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(float *)pcVar14 = pCVar13->m[0].w;
                  pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar18 * -2 + 1) * 4);
                  pcVar14 = pcVar14 + (uint)bVar18 * -8 + 4;
                }
                pcVar14 = this_ptr->unk2 + 4;
                pcVar17 = this_ptr->unk2 + 0x34;
                for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(uint *)pcVar17 = *(uint *)pcVar14;
                  pcVar14 = pcVar14 + (uint)bVar18 * -8 + 4;
                  pcVar17 = pcVar17 + (uint)bVar18 * -8 + 4;
                }
                core_xform_cpp_clearTranslation_FUN_005f5370((CMatrix3x4f *)pCStack_18);
                iVar4 = 0;
                do {
                  fStack_6c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-7.0,7.0);
                  CStack_68.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-7.0,7.0);
                  CStack_68.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(-1.0,15.0);
                  pfVar12 = &fStack_6c;
                  iVar4 = iVar4 + 1;
                  in_stack_fffffda0 = (CCharacter *)g_CGorePtr;
                  core_gore_cpp_CGore_FUN_004edaa0(g_CGorePtr);
                } while (iVar4 < 0x46);
              }
            }
          }
        }
        else if (((uVar7 == 0x65) &&
                 (pCVar1 = (CCharacter *)(this_ptr->base).victim, pCVar1 != (CCharacter *)0x0)) &&
                (pCVar6 = (CTentacle *)(*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1),
                pCVar6 == this_ptr)) {
          ((this_ptr->base).victim)->was_created = 2;
        }
      }
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(local_1c);
    uVar7 = pSVar5->state_index;
    if (uVar7 < 2) {
      if (uVar7 == 0) {
        fVar10 = *(float *)this_ptr->unk1;
        this_ptr->unk1[4] = '\0';
        this_ptr->unk1[5] = '\0';
        this_ptr->unk1[6] = '\0';
        this_ptr->unk1[7] = '\0';
        if (0.0 < fVar10) {
          *(float *)this_ptr->unk1 = *(float *)this_ptr->unk1 - delta_time;
        }
        if (*(float *)this_ptr->unk1 <= 0.0) {
          this_ptr_00 = &(this_ptr->base).base.model;
          if (this_ptr->grave_actor == (CDemonActor *)0x0) {
            iVar4 = core_tentacle_cpp_CTentacle_FUN_005db900(this_ptr);
            if (iVar4 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&this_ptr_00->motion_controller,2,1);
              this_ptr->unk1[0] = '\0';
              this_ptr->unk1[1] = '\0';
              this_ptr->unk1[2] = '\0';
              this_ptr->unk1[3] = '\0';
            }
          }
          else {
            iVar4 = core_tentacle_cpp_CTentacle_FUN_005db900(this_ptr);
            if (iVar4 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&this_ptr_00->motion_controller,2,1);
              this_ptr_01 = (CGrave *)this_ptr->grave_actor;
              this_ptr->unk1[0] = '\0';
              this_ptr->unk1[1] = '\0';
              this_ptr->unk1[2] = '\0';
              this_ptr->unk1[3] = '\0';
              core_grave_cpp_CGrave_FUN_004ee790(this_ptr_01);
              this_ptr->grave_actor = (CDemonActor *)0x0;
            }
          }
        }
      }
    }
    else if (uVar7 < 3) {
      fVar10 = *(float *)(this_ptr->unk1 + 4) + delta_time;
      *(float *)(this_ptr->unk1 + 4) = fVar10;
      if (fVar10 < (float)25) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).updateVictim)(&this_ptr->base,delta_time);
        pCVar8 = (this_ptr->base).victim;
        if (pCVar8 != (CDemonActor *)0x0) {
          CStack_80.x = (pCVar8->location).position.x -
                        (float)(pCStack_18->motion_controller).motion_list_ptr;
          CStack_80.y = (pCVar8->location).position.y -
                        (float)(pCStack_18->motion_controller).current_motion_index;
          CStack_80.z = (pCVar8->location).position.z -
                        (float)(pCStack_18->motion_controller).current_frame_number;
          pCVar9 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&CStack_68,&CStack_80);
          in_stack_fffffda0 = (CCharacter *)0x5db5c9;
          fVar10 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                             (pCVar9->y - (this_ptr->base).base.base.orient.vec.y);
          local_24 = (UOrientationVector *)(delta_time * (float)0.78539816337500001);
          (this_ptr->base).base.turn_angle_accumulator = fVar10;
          fStack_30 = -(float)local_24;
          if ((this_ptr->base).base.turn_angle_accumulator < fStack_30) {
            (this_ptr->base).base.turn_angle_accumulator = fStack_30;
          }
          if ((float)local_24 < (this_ptr->base).base.turn_angle_accumulator) {
            (this_ptr->base).base.turn_angle_accumulator = (float)local_24;
          }
          if ((float)5 < *(float *)(this_ptr->unk1 + 4)) {
            pCVar8 = (this_ptr->base).victim;
            fVar2 = (this_ptr->base).base.base.location.position.x - (pCVar8->location).position.x;
            fVar3 = (this_ptr->base).base.base.location.position.z - (pCVar8->location).position.z;
            fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
            if (((fVar10 < (float)0.17453292519444399) &&
                (ABS((this_ptr->base).base.base.location.position.y - (pCVar8->location).position.y)
                 < (float)4)) &&
               ((float)7 < fVar2 && fVar2 < (float)12)) {
              in_stack_fffffda0 = (CCharacter *)0x6;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,6,1);
              this_ptr->unk1[0] = '\0';
              this_ptr->unk1[1] = '\0';
              this_ptr->unk1[2] = -0x38;
              this_ptr->unk1[3] = 'A';
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(local_1c,0,1);
        this_ptr->unk1[0] = '\0';
        this_ptr->unk1[1] = '\0';
        this_ptr->unk1[2] = -0x38;
        this_ptr->unk1[3] = 'A';
      }
    }
    else if (((uVar7 == 6) &&
             (pCVar1 = (CCharacter *)(this_ptr->base).victim, pCVar1 != (CCharacter *)0x0)) &&
            (iVar4 = (*(((pCVar1->base).vtable._uc)->_uc).getDeathState)(pCVar1), iVar4 < 1)) {
      in_stack_fffffda0 = (CCharacter *)(this_ptr->base).victim;
      pCVar8 = (*(((in_stack_fffffda0->base).vtable._uc)->_uc).getGrabber)(in_stack_fffffda0);
      if (pCVar8 == (CDemonActor *)0x0) {
        pCVar8 = (this_ptr->base).victim;
        CStack_5c.x = (pCVar8->location).position.x -
                      (float)(pCStack_18->motion_controller).motion_list_ptr;
        CStack_5c.y = (pCVar8->location).position.y -
                      (float)(pCStack_18->motion_controller).current_motion_index;
        CStack_5c.z = (pCVar8->location).position.z -
                      (float)(pCStack_18->motion_controller).current_frame_number;
        pCVar9 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_50,&CStack_5c);
        in_stack_fffffda0 = (CCharacter *)0x5db7b2;
        fVar10 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                           (pCVar9->y - (this_ptr->base).base.base.orient.vec.y);
        local_28 = (char *)(delta_time * (float)1.04719755116667);
        (this_ptr->base).base.turn_angle_accumulator = fVar10;
        fStack_2c = -(float)local_28;
        if (fVar10 < fStack_2c) {
          (this_ptr->base).base.turn_angle_accumulator = fStack_2c;
        }
        if ((float)local_28 < (this_ptr->base).base.turn_angle_accumulator) {
          (this_ptr->base).base.turn_angle_accumulator = (float)local_28;
        }
      }
    }
    fVar10 = delta_time / 0.5f + *(float *)this_ptr->unk2;
    *(float *)this_ptr->unk2 = fVar10;
    if (1.0 < fVar10) {
      this_ptr->unk2[0] = '\0';
      this_ptr->unk2[1] = '\0';
      this_ptr->unk2[2] = -0x80;
      this_ptr->unk2[3] = '?';
    }
    core_charactr_cpp_CCharacter_preProcess_FUN_00429820((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
              ((CCharacter *)this_ptr,delta_time,(float)in_stack_fffffda0);
  }
  return;
}
