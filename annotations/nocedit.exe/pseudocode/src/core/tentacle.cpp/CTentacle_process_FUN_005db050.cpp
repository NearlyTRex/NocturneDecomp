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
  int iVar3;
  SMotion *pSVar4;
  CTentacle *pCVar5;
  uint uVar6;
  CDemonActor *pCVar7;
  CVector3f *pCVar8;
  float fVar9;
  CVector3f *unaff_EBP;
  float *pfVar10;
  float *pfVar11;
  CMatrix3x4f *pCVar12;
  char *pcVar13;
  float *pfVar14;
  CMatrix3x4f *pCVar15;
  char *pcVar16;
  byte bVar17;
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
  byte auStack_90 [12];
  float fStack_84;
  float fStack_80;
  CVector3f CStack_70;
  float fStack_64;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_2c;
  char *local_28;
  UOrientationVector *local_24;
  CLocation *local_20;
  CMotionController *local_1c;
  CDeformableModelInstance *pCStack_18;
  CVector3f *pCStack_14;
  
  bVar17 = 0;
  iVar3 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar3 != 0) {
    local_24 = &(this_ptr->base).base.base.orient;
    pfVar11 = (float *)(delta_time * (this_ptr->base).speed);
    local_28 = this_ptr->unk2 + 0x34;
    local_20 = &(this_ptr->base).base.base.location;
    local_1c = &(this_ptr->base).base.model.motion_controller;
    while (0.0 < (float)pfVar11) {
      uVar6 = core_motion_cpp_CMotionController_advance_FUN_0052d610(local_1c);
      if (99 < uVar6) {
        if (uVar6 < 0x65) {
          pCVar1 = (CCharacter *)(this_ptr->base).victim;
          if ((pCVar1 != (CCharacter *)0x0) &&
             (pCVar7 = (*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1),
             pCVar7 == (CDemonActor *)0x0)) {
            core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                      (pCStack_18);
            core_tentacle_cpp_CTentacle_FUN_005dbb70(this_ptr);
            pfVar10 = &aCStack_1e0[0].m[2].x;
            pfVar14 = (float *)(auStack_210 + 0x24);
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *pfVar14 = *pfVar10;
              pfVar10 = pfVar10 + (uint)bVar17 * -2 + 1;
              pfVar14 = pfVar14 + (uint)bVar17 * -2 + 1;
            }
            in_stack_fffffda0 =
                 (CCharacter *)
                 core_xform_cpp_getTranslation_FUN_005f6110
                           ((CMatrix3x4f *)(auStack_210 + 0x24),(CVector3f *)auStack_90);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,(CVector3f *)(auStack_c0 + 0x24),
                       (CVector3f *)in_stack_fffffda0);
            pCVar7 = (this_ptr->base).victim;
            CStack_50.z = (float)auStack_c0._36_4_ - (pCVar7->location).position.x;
            fStack_44 = fStack_98 - (pCVar7->location).position.y;
            fStack_40 = fStack_94 - (pCVar7->location).position.z;
            if ((ABS(fStack_44) <= (float)6) &&
               (CStack_50.z * CStack_50.z + fStack_40 * fStack_40 <= (float)16)) {
              in_stack_fffffda0 = (CCharacter *)0x1;
              pCVar1 = (CCharacter *)(this_ptr->base).victim;
              iVar3 = (*(((pCVar1->base).vtable._uc)->_uc).getGrabbed)
                                (pCVar1,(CDemonActor *)this_ptr,1);
              if (iVar3 != 0) {
                pCVar7 = (this_ptr->base).victim;
                this_ptr->unk2[0] = '\0';
                this_ptr->unk2[1] = '\0';
                this_ptr->unk2[2] = '\0';
                this_ptr->unk2[3] = '\0';
                core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                          (&CStack_150,&(pCVar7->location).position,&(pCVar7->orient).vec);
                core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                          (&CStack_180,unaff_EBP,pCStack_14);
                core_xform_cpp_inverse_FUN_005f6210(aCStack_1e0,(CMatrix3x4f *)auStack_210);
                pCVar12 = &CStack_240;
                pfVar11 = (float *)auStack_210;
                pCVar15 = &CStack_240;
                for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                  pCVar15->m[0].w = *pfVar11;
                  pfVar11 = pfVar11 + (uint)bVar17 * -2 + 1;
                  pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar17 * -2 + 1) * 4);
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                          (&CStack_150,&CStack_180,(CMatrix3x4f *)auStack_c0);
                pfVar11 = (float *)auStack_c0;
                pCVar15 = &CStack_120;
                for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                  pCVar15->m[0].w = *pfVar11;
                  pfVar11 = pfVar11 + (uint)bVar17 * -2 + 1;
                  pCVar15 = (CMatrix3x4f *)((int)pCVar15 + ((uint)bVar17 * -2 + 1) * 4);
                }
                core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_120,pCVar12,&CStack_f0);
                pCVar12 = &CStack_f0;
                pcVar13 = this_ptr->unk2 + 4;
                for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *(float *)pcVar13 = pCVar12->m[0].w;
                  pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar17 * -2 + 1) * 4);
                  pcVar13 = pcVar13 + (uint)bVar17 * -8 + 4;
                }
                pcVar13 = this_ptr->unk2 + 4;
                pcVar16 = this_ptr->unk2 + 0x34;
                for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *(uint *)pcVar16 = *(uint *)pcVar13;
                  pcVar13 = pcVar13 + (uint)bVar17 * -8 + 4;
                  pcVar16 = pcVar16 + (uint)bVar17 * -8 + 4;
                }
                core_xform_cpp_clearTranslation_FUN_005f5370((CMatrix3x4f *)pCStack_18);
                iVar3 = 0;
                do {
                  CStack_70.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(-7.0,7.0);
                  fStack_64 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-7.0,7.0);
                  CStack_70.z = core_actor_cpp_getRandomFloat_FUN_0040cc10(-1.0,15.0);
                  pfVar11 = &CStack_70.y;
                  iVar3 = iVar3 + 1;
                  in_stack_fffffda0 = (CCharacter *)g_CGorePtr;
                  core_gore_cpp_CGore_FUN_004edaa0(g_CGorePtr);
                } while (iVar3 < 0x46);
              }
            }
          }
        }
        else if (((uVar6 == 0x65) &&
                 (pCVar1 = (CCharacter *)(this_ptr->base).victim, pCVar1 != (CCharacter *)0x0)) &&
                (pCVar5 = (CTentacle *)(*(((pCVar1->base).vtable._uc)->_uc).getGrabber)(pCVar1),
                pCVar5 == this_ptr)) {
          ((this_ptr->base).victim)->was_created = 2;
        }
      }
    }
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(local_1c);
    uVar6 = pSVar4->state_index;
    if (uVar6 < 2) {
      if (uVar6 == 0) {
        fVar9 = *(float *)this_ptr->unk1;
        this_ptr->unk1[4] = '\0';
        this_ptr->unk1[5] = '\0';
        this_ptr->unk1[6] = '\0';
        this_ptr->unk1[7] = '\0';
        if (0.0 < fVar9) {
          *(float *)this_ptr->unk1 = *(float *)this_ptr->unk1 - delta_time;
        }
        if (*(float *)this_ptr->unk1 <= 0.0) {
          this_ptr_00 = &(this_ptr->base).base.model;
          if (this_ptr->grave_actor == (CDemonActor *)0x0) {
            iVar3 = core_tentacle_cpp_CTentacle_FUN_005db900(this_ptr);
            if (iVar3 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&this_ptr_00->motion_controller,2,1);
              this_ptr->unk1[0] = '\0';
              this_ptr->unk1[1] = '\0';
              this_ptr->unk1[2] = '\0';
              this_ptr->unk1[3] = '\0';
            }
          }
          else {
            iVar3 = core_tentacle_cpp_CTentacle_FUN_005db900(this_ptr);
            if (iVar3 != 0) {
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
    else if (uVar6 < 3) {
      fVar9 = *(float *)(this_ptr->unk1 + 4) + delta_time;
      *(float *)(this_ptr->unk1 + 4) = fVar9;
      if (fVar9 < (float)25) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        pCVar7 = (this_ptr->base).victim;
        if (pCVar7 != (CDemonActor *)0x0) {
          auStack_90._8_4_ = (pCVar7->location).position.x - (local_20->position).x;
          fStack_84 = (pCVar7->location).position.y - (local_20->position).y;
          fStack_80 = (pCVar7->location).position.z - (local_20->position).z;
          pCVar8 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&CStack_70,(CVector3f *)(auStack_90 + 8));
          pCStack_18 = (CDeformableModelInstance *)
                       core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                 (pCVar8->y - (this_ptr->base).base.base.orient.vec.y);
          fStack_2c = delta_time * (float)0.78539816337500001;
          (this_ptr->base).base.turn_angle_accumulator = (float)pCStack_18;
          fStack_38 = -fStack_2c;
          if ((this_ptr->base).base.turn_angle_accumulator < fStack_38) {
            (this_ptr->base).base.turn_angle_accumulator = fStack_38;
          }
          if (fStack_2c < (this_ptr->base).base.turn_angle_accumulator) {
            (this_ptr->base).base.turn_angle_accumulator = fStack_2c;
          }
          if ((float)5 < *(float *)(this_ptr->unk1 + 4)) {
            pCVar7 = (this_ptr->base).victim;
            fVar9 = (this_ptr->base).base.base.location.position.x - (pCVar7->location).position.x;
            fVar2 = (this_ptr->base).base.base.location.position.z - (pCVar7->location).position.z;
            in_stack_fffffda0 = (CCharacter *)SQRT(fVar2 * fVar2 + fVar9 * fVar9);
            if ((((float)pCStack_18 < (float)0.17453292519444399) &&
                (ABS((this_ptr->base).base.base.location.position.y - (pCVar7->location).position.y)
                 < (float)4)) &&
               ((float)7 < (float)in_stack_fffffda0 &&
                (float)in_stack_fffffda0 < (float)12)) {
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
    else if (((uVar6 == 6) &&
             (pCVar1 = (CCharacter *)(this_ptr->base).victim, pCVar1 != (CCharacter *)0x0)) &&
            (iVar3 = (*(((pCVar1->base).vtable._uc)->_uc).getDeathState)(pCVar1), iVar3 < 1)) {
      in_stack_fffffda0 = (CCharacter *)(this_ptr->base).victim;
      pCVar7 = (*(((in_stack_fffffda0->base).vtable._uc)->_uc).getGrabber)(in_stack_fffffda0);
      if (pCVar7 == (CDemonActor *)0x0) {
        pCVar7 = (this_ptr->base).victim;
        CStack_5c.x = (pCVar7->location).position.x -
                      (float)(pCStack_18->motion_controller).motion_list_ptr;
        CStack_5c.y = (pCVar7->location).position.y -
                      (float)(pCStack_18->motion_controller).current_motion_index;
        CStack_5c.z = (pCVar7->location).position.z -
                      (float)(pCStack_18->motion_controller).current_frame_number;
        pCVar8 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_50,&CStack_5c);
        in_stack_fffffda0 = (CCharacter *)0x5db7b2;
        fVar9 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (pCVar8->y - (this_ptr->base).base.base.orient.vec.y);
        local_28 = (char *)(delta_time * (float)1.04719755116667);
        (this_ptr->base).base.turn_angle_accumulator = fVar9;
        fStack_2c = -(float)local_28;
        if (fVar9 < fStack_2c) {
          (this_ptr->base).base.turn_angle_accumulator = fStack_2c;
        }
        if ((float)local_28 < (this_ptr->base).base.turn_angle_accumulator) {
          (this_ptr->base).base.turn_angle_accumulator = (float)local_28;
        }
      }
    }
    fVar9 = delta_time / 0.5f + *(float *)this_ptr->unk2;
    *(float *)this_ptr->unk2 = fVar9;
    if (1.0 < fVar9) {
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
