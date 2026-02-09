// Name: core_tentacle.cpp_CTentacle_process_FUN_005db050
// Address: 005db050
// Address Range: [[005db050, 005db3d8] [005db479, 005db83c]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005db050(CTentacle *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005db050(CTentacle *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  CGrave *this_ptr_01;
  CCharacter *this_ptr_02;
  CDemonActor *pCVar2;
  float fVar3;
  int iVar4;
  SMotion *pSVar5;
  CTentacle *pCVar6;
  uint uVar7;
  CVector3f *pCVar8;
  float *pfVar9;
  CMatrix3x4f *pCVar10;
  CMatrix3x4f *pCVar11;
  char *pcVar12;
  CMatrix3x4f *pCVar13;
  char *pcVar14;
  byte bVar15;
  CMatrix3x4f CStack_250;
  CMatrix3x4f CStack_220;
  CMatrix3x4f CStack_1f0;
  float afStack_1c0 [12];
  CMatrix3x4f CStack_190;
  CMatrix3x4f CStack_160;
  CMatrix3x4f CStack_130;
  CMatrix3x4f CStack_100;
  CMatrix3x4f CStack_d0;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
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
  char *local_28;
  CVector3f *local_24;
  CVector3f *local_20;
  CDeformableModelInstance *local_1c;
  float fStack_18;
  
  bVar15 = 0;
  iVar4 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar4 != 0) {
    local_24 = (CVector3f *)&(this_ptr->base).base.base.orient;
    fVar1 = (this_ptr->base).speed;
    local_28 = this_ptr->unk2 + 0x34;
    local_20 = &(this_ptr->base).base.base.location.position;
    local_1c = &(this_ptr->base).base.model;
    while (0.0 < delta_time * fVar1) {
      uVar7 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_1c->motion_controller);
      if (99 < uVar7) {
        if (uVar7 < 0x65) {
          pCVar2 = (this_ptr->base).victim;
          if ((pCVar2 != (CDemonActor *)0x0) &&
             (iVar4 = (*(((pCVar2->vtable)._uc)->_uc).cfunc8)(), iVar4 == 0)) {
            core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(local_1c);
            core_tentacle_cpp_CTentacle_FUN_005dbb70(this_ptr);
            pfVar9 = afStack_1c0;
            pCVar11 = &CStack_1f0;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              pCVar11->m[0].w = *pfVar9;
              pfVar9 = pfVar9 + (uint)bVar15 * -2 + 1;
              pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar15 * -2 + 1) * 4);
            }
            pCVar8 = core_xform_cpp_getTranslation_FUN_005f6110(&CStack_1f0,&CStack_94);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&CStack_a0,pCVar8);
            pCVar2 = (this_ptr->base).victim;
            fStack_4c = CStack_a0.x - (pCVar2->location).position.x;
            fStack_48 = CStack_a0.y - (pCVar2->location).position.y;
            fStack_44 = CStack_a0.z - (pCVar2->location).position.z;
            if (((ABS(fStack_48) <= (float)6) &&
                (fStack_4c * fStack_4c + fStack_44 * fStack_44 <= (float)16)) &&
               (iVar4 = (*(((((this_ptr->base).victim)->vtable)._uc)->_uc).cfunc6)(), iVar4 != 0)) {
              pCVar2 = (this_ptr->base).victim;
              this_ptr->unk2[0] = '\0';
              this_ptr->unk2[1] = '\0';
              this_ptr->unk2[2] = '\0';
              this_ptr->unk2[3] = '\0';
              core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                        (&CStack_160,&(pCVar2->location).position,(CVector3f *)&pCVar2->orient);
              core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                        (&CStack_190,local_20,local_24);
              core_xform_cpp_inverse_FUN_005f6210(&CStack_1f0,&CStack_220);
              pCVar11 = &CStack_250;
              pCVar10 = &CStack_220;
              pCVar13 = &CStack_250;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                pCVar13->m[0].w = pCVar10->m[0].w;
                pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
                pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar15 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_160,&CStack_190,&CStack_d0);
              pCVar10 = &CStack_d0;
              pCVar13 = &CStack_130;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                pCVar13->m[0].w = pCVar10->m[0].w;
                pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar15 * -2 + 1) * 4);
                pCVar13 = (CMatrix3x4f *)((int)pCVar13 + ((uint)bVar15 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_130,pCVar11,&CStack_100);
              pCVar11 = &CStack_100;
              pcVar12 = this_ptr->unk2 + 4;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(float *)pcVar12 = pCVar11->m[0].w;
                pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar15 * -2 + 1) * 4);
                pcVar12 = pcVar12 + (uint)bVar15 * -8 + 4;
              }
              pcVar12 = this_ptr->unk2 + 4;
              pcVar14 = this_ptr->unk2 + 0x34;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(uint *)pcVar14 = *(uint *)pcVar12;
                pcVar12 = pcVar12 + (uint)bVar15 * -8 + 4;
                pcVar14 = pcVar14 + (uint)bVar15 * -8 + 4;
              }
              core_xform_cpp_clearTranslation_FUN_005f5370((CMatrix3x4f *)local_28);
              iVar4 = 0;
              do {
                fStack_7c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-7.0,7.0);
                fStack_18 = fStack_7c;
                fStack_74 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-7.0,7.0);
                fStack_18 = fStack_74;
                fStack_78 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-1.0,15.0);
                iVar4 = iVar4 + 1;
                fStack_18 = fStack_78;
                core_gore_cpp_CGore_FUN_004edaa0(g_CGorePtr);
              } while (iVar4 < 0x46);
            }
          }
        }
        else if (((uVar7 == 0x65) &&
                 (pCVar2 = (this_ptr->base).victim, pCVar2 != (CDemonActor *)0x0)) &&
                (pCVar6 = (CTentacle *)(*(((pCVar2->vtable)._uc)->_uc).cfunc8)(), pCVar6 == this_ptr
                )) {
          ((this_ptr->base).victim)->was_created = 2;
        }
      }
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&local_1c->motion_controller);
    uVar7 = pSVar5->state_index;
    if (uVar7 < 2) {
      if (uVar7 == 0) {
        fVar1 = *(float *)this_ptr->unk1;
        this_ptr->unk1[4] = '\0';
        this_ptr->unk1[5] = '\0';
        this_ptr->unk1[6] = '\0';
        this_ptr->unk1[7] = '\0';
        if (0.0 < fVar1) {
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
      fVar1 = *(float *)(this_ptr->unk1 + 4) + delta_time;
      *(float *)(this_ptr->unk1 + 4) = fVar1;
      if (fVar1 < (float)25) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        pCVar2 = (this_ptr->base).victim;
        if (pCVar2 != (CDemonActor *)0x0) {
          CStack_88.x = (pCVar2->location).position.x - ((CVector3f *)&local_20->x)->x;
          CStack_88.y = (pCVar2->location).position.y - local_20->y;
          CStack_88.z = (pCVar2->location).position.z - local_20->z;
          pCVar8 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&CStack_70,&CStack_88);
          fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                (pCVar8->y - (this_ptr->base).base.base.orient.bank);
          fStack_2c = delta_time * (float)0.78539816337500001;
          (this_ptr->base).base.turn_angle_accumulator = fStack_18;
          fStack_38 = -fStack_2c;
          if ((this_ptr->base).base.turn_angle_accumulator < fStack_38) {
            (this_ptr->base).base.turn_angle_accumulator = fStack_38;
          }
          if (fStack_2c < (this_ptr->base).base.turn_angle_accumulator) {
            (this_ptr->base).base.turn_angle_accumulator = fStack_2c;
          }
          if ((float)5 < *(float *)(this_ptr->unk1 + 4)) {
            pCVar2 = (this_ptr->base).victim;
            fVar1 = (this_ptr->base).base.base.location.position.x - (pCVar2->location).position.x;
            fVar3 = (this_ptr->base).base.base.location.position.z - (pCVar2->location).position.z;
            fVar1 = SQRT(fVar3 * fVar3 + fVar1 * fVar1);
            if (((fStack_18 < (float)0.17453292519444399) &&
                (ABS((this_ptr->base).base.base.location.position.y - (pCVar2->location).position.y)
                 < (float)4)) &&
               ((float)7 < fVar1 && fVar1 < (float)12)) {
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
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&local_1c->motion_controller,0,1);
        this_ptr->unk1[0] = '\0';
        this_ptr->unk1[1] = '\0';
        this_ptr->unk1[2] = -0x38;
        this_ptr->unk1[3] = 'A';
      }
    }
    else if ((((uVar7 == 6) &&
              (this_ptr_02 = (CCharacter *)(this_ptr->base).victim, this_ptr_02 != (CCharacter *)0x0
              )) && (iVar4 = (*(((this_ptr_02->base).vtable._uc)->_uc).isDamageable)(this_ptr_02),
                    iVar4 < 1)) &&
            (iVar4 = (*(((((this_ptr->base).victim)->vtable)._uc)->_uc).cfunc8)(), iVar4 == 0)) {
      pCVar2 = (this_ptr->base).victim;
      CStack_64.x = (pCVar2->location).position.x - ((CVector3f *)&local_20->x)->x;
      CStack_64.y = (pCVar2->location).position.y - local_20->y;
      CStack_64.z = (pCVar2->location).position.z - local_20->z;
      pCVar8 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&CStack_58,&CStack_64);
      fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            (pCVar8->y - (this_ptr->base).base.base.orient.bank);
      fStack_30 = delta_time * (float)1.04719755116667;
      (this_ptr->base).base.turn_angle_accumulator = fStack_18;
      fStack_34 = -fStack_30;
      if (fStack_18 < fStack_34) {
        (this_ptr->base).base.turn_angle_accumulator = fStack_34;
      }
      if (fStack_30 < (this_ptr->base).base.turn_angle_accumulator) {
        (this_ptr->base).base.turn_angle_accumulator = fStack_30;
      }
    }
    fVar1 = delta_time / 0.5f + *(float *)this_ptr->unk2;
    *(float *)this_ptr->unk2 = fVar1;
    if (1.0 < fVar1) {
      this_ptr->unk2[0] = '\0';
      this_ptr->unk2[1] = '\0';
      this_ptr->unk2[2] = -0x80;
      this_ptr->unk2[3] = '?';
    }
    core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  }
  return;
}
