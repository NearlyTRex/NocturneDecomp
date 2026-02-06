// Name: core_tentacle.cpp_CTentacle_process_FUN_005db050
// Address: 005db050
// Address Range: [[005db050, 005db3d8] [005db479, 005db83c]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005db050(CTentacle *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005db050(CTentacle *this_ptr,float delta_time)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  int iVar3;
  SMotion *pSVar4;
  CTentacle *pCVar5;
  uint uVar6;
  CVector3f *pCVar7;
  float *pfVar8;
  CMatrix3x4f *pCVar9;
  CMatrix3x4f *pCVar10;
  char *pcVar11;
  CMatrix3x4f *pCVar12;
  char *pcVar13;
  byte bVar14;
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
  
  bVar14 = 0;
  iVar3 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar3 != 0) {
    local_24 = (CVector3f *)&(this_ptr->base).base.base.orient;
    fVar1 = (this_ptr->base).speed;
    local_28 = this_ptr->unk + 0x48;
    local_20 = &(this_ptr->base).base.base.location.position;
    local_1c = &(this_ptr->base).base.model;
    while (0.0 < delta_time * fVar1) {
      uVar6 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_1c->motion_controller);
      if (99 < uVar6) {
        if (uVar6 < 0x65) {
          iVar3 = *(int *)((this_ptr->base).unk2 + 4);
          if ((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x108))(), iVar3 == 0)
             ) {
            core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(local_1c);
            core_tentacle_cpp_FUN_005dbb70();
            pfVar8 = afStack_1c0;
            pCVar10 = &CStack_1f0;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              pCVar10->m[0].w = *pfVar8;
              pfVar8 = pfVar8 + (uint)bVar14 * -2 + 1;
              pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar14 * -2 + 1) * 4);
            }
            pCVar7 = core_xform_cpp_getTranslation_FUN_005f6110(&CStack_1f0,&CStack_94);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&CStack_a0,pCVar7);
            iVar3 = *(int *)((this_ptr->base).unk2 + 4);
            fStack_4c = CStack_a0.x - *(float *)(iVar3 + 0x20);
            fStack_48 = CStack_a0.y - *(float *)(iVar3 + 0x24);
            fStack_44 = CStack_a0.z - *(float *)(iVar3 + 0x28);
            if (((ABS(fStack_48) <= (float)6) &&
                (fStack_4c * fStack_4c + fStack_44 * fStack_44 <= (float)16)) &&
               (iVar3 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x100))
                                  (), iVar3 != 0)) {
              iVar3 = *(int *)((this_ptr->base).unk2 + 4);
              this_ptr->unk[0x14] = '\0';
              this_ptr->unk[0x15] = '\0';
              this_ptr->unk[0x16] = '\0';
              this_ptr->unk[0x17] = '\0';
              core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                        (&CStack_160,(CVector3f *)(iVar3 + 0x20),(CVector3f *)(iVar3 + 0x30));
              core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                        (&CStack_190,local_20,local_24);
              core_xform_cpp_inverse_FUN_005f6210(&CStack_1f0,&CStack_220);
              pCVar10 = &CStack_250;
              pCVar9 = &CStack_220;
              pCVar12 = &CStack_250;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                pCVar12->m[0].w = pCVar9->m[0].w;
                pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
                pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar14 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_160,&CStack_190,&CStack_d0);
              pCVar9 = &CStack_d0;
              pCVar12 = &CStack_130;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                pCVar12->m[0].w = pCVar9->m[0].w;
                pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar14 * -2 + 1) * 4);
                pCVar12 = (CMatrix3x4f *)((int)pCVar12 + ((uint)bVar14 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_130,pCVar10,&CStack_100);
              pCVar10 = &CStack_100;
              pcVar11 = this_ptr->unk + 0x18;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(float *)pcVar11 = pCVar10->m[0].w;
                pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar14 * -2 + 1) * 4);
                pcVar11 = pcVar11 + (uint)bVar14 * -8 + 4;
              }
              pcVar11 = this_ptr->unk + 0x18;
              pcVar13 = this_ptr->unk + 0x48;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(uint *)pcVar13 = *(uint *)pcVar11;
                pcVar11 = pcVar11 + (uint)bVar14 * -8 + 4;
                pcVar13 = pcVar13 + (uint)bVar14 * -8 + 4;
              }
              core_xform_cpp_clearTranslation_FUN_005f5370((CMatrix3x4f *)local_28);
              iVar3 = 0;
              do {
                fStack_7c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-7.0,7.0);
                fStack_18 = fStack_7c;
                fStack_74 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-7.0,7.0);
                fStack_18 = fStack_74;
                fStack_78 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-1.0,15.0);
                iVar3 = iVar3 + 1;
                fStack_18 = fStack_78;
                core_gore_cpp_FUN_004edaa0();
              } while (iVar3 < 0x46);
            }
          }
        }
        else if (((uVar6 == 0x65) && (iVar3 = *(int *)((this_ptr->base).unk2 + 4), iVar3 != 0)) &&
                (pCVar5 = (CTentacle *)(**(code **)(*(int *)(iVar3 + 0x154) + 0x108))(),
                pCVar5 == this_ptr)) {
          *(uint *)(*(int *)((this_ptr->base).unk2 + 4) + 0x70) = 2;
        }
      }
    }
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&local_1c->motion_controller);
    uVar6 = pSVar4->state_index;
    if (uVar6 < 2) {
      if (uVar6 == 0) {
        fVar1 = *(float *)(this_ptr->unk + 8);
        this_ptr->unk[0xc] = '\0';
        this_ptr->unk[0xd] = '\0';
        this_ptr->unk[0xe] = '\0';
        this_ptr->unk[0xf] = '\0';
        if (0.0 < fVar1) {
          *(float *)(this_ptr->unk + 8) = *(float *)(this_ptr->unk + 8) - delta_time;
        }
        if (*(float *)(this_ptr->unk + 8) <= 0.0) {
          this_ptr_00 = &(this_ptr->base).base.model;
          if (*(int *)(this_ptr->unk + 0x10) == 0) {
            iVar3 = core_tentacle_cpp_FUN_005db900();
            if (iVar3 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&this_ptr_00->motion_controller,2,1);
              this_ptr->unk[8] = '\0';
              this_ptr->unk[9] = '\0';
              this_ptr->unk[10] = '\0';
              this_ptr->unk[0xb] = '\0';
            }
          }
          else {
            iVar3 = core_tentacle_cpp_FUN_005db900();
            if (iVar3 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&this_ptr_00->motion_controller,2,1);
              this_ptr->unk[8] = '\0';
              this_ptr->unk[9] = '\0';
              this_ptr->unk[10] = '\0';
              this_ptr->unk[0xb] = '\0';
              core_grave_cpp_FUN_004ee790();
              this_ptr->unk[0x10] = '\0';
              this_ptr->unk[0x11] = '\0';
              this_ptr->unk[0x12] = '\0';
              this_ptr->unk[0x13] = '\0';
            }
          }
        }
      }
    }
    else if (uVar6 < 3) {
      fVar1 = *(float *)(this_ptr->unk + 0xc) + delta_time;
      *(float *)(this_ptr->unk + 0xc) = fVar1;
      if (fVar1 < (float)25) {
        (*(((this_ptr->base).base.base.vtable._ue)->_ue).enemyfunc2)();
        iVar3 = *(int *)((this_ptr->base).unk2 + 4);
        if (iVar3 != 0) {
          CStack_88.x = *(float *)(iVar3 + 0x20) - ((CVector3f *)&local_20->x)->x;
          CStack_88.y = *(float *)(iVar3 + 0x24) - local_20->y;
          CStack_88.z = *(float *)(iVar3 + 0x28) - local_20->z;
          pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&CStack_70,&CStack_88);
          fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                (pCVar7->y - (this_ptr->base).base.base.orient.bank);
          fStack_2c = delta_time * (float)0.78539816337500001;
          (this_ptr->base).base.turn_angle_accumulator = fStack_18;
          fStack_38 = -fStack_2c;
          if ((this_ptr->base).base.turn_angle_accumulator < fStack_38) {
            (this_ptr->base).base.turn_angle_accumulator = fStack_38;
          }
          if (fStack_2c < (this_ptr->base).base.turn_angle_accumulator) {
            (this_ptr->base).base.turn_angle_accumulator = fStack_2c;
          }
          if ((float)5 < *(float *)(this_ptr->unk + 0xc)) {
            iVar3 = *(int *)((this_ptr->base).unk2 + 4);
            fVar1 = (this_ptr->base).base.base.location.position.x - *(float *)(iVar3 + 0x20);
            fVar2 = (this_ptr->base).base.base.location.position.z - *(float *)(iVar3 + 0x28);
            fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
            if (((fStack_18 < (float)0.17453292519444399) &&
                (ABS((this_ptr->base).base.base.location.position.y - *(float *)(iVar3 + 0x24)) <
                 (float)4)) &&
               ((float)7 < fVar1 && fVar1 < (float)12)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,6,1);
              this_ptr->unk[8] = '\0';
              this_ptr->unk[9] = '\0';
              this_ptr->unk[10] = -0x38;
              this_ptr->unk[0xb] = 'A';
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&local_1c->motion_controller,0,1);
        this_ptr->unk[8] = '\0';
        this_ptr->unk[9] = '\0';
        this_ptr->unk[10] = -0x38;
        this_ptr->unk[0xb] = 'A';
      }
    }
    else if ((((uVar6 == 6) && (iVar3 = *(int *)((this_ptr->base).unk2 + 4), iVar3 != 0)) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x120))(), iVar3 < 1)) &&
            (iVar3 = (**(code **)(*(int *)(*(int *)((this_ptr->base).unk2 + 4) + 0x154) + 0x108))(),
            iVar3 == 0)) {
      iVar3 = *(int *)((this_ptr->base).unk2 + 4);
      CStack_64.x = *(float *)(iVar3 + 0x20) - ((CVector3f *)&local_20->x)->x;
      CStack_64.y = *(float *)(iVar3 + 0x24) - local_20->y;
      CStack_64.z = *(float *)(iVar3 + 0x28) - local_20->z;
      pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&CStack_58,&CStack_64);
      fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            (pCVar7->y - (this_ptr->base).base.base.orient.bank);
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
    fVar1 = delta_time / 0.5f + *(float *)(this_ptr->unk + 0x14);
    *(float *)(this_ptr->unk + 0x14) = fVar1;
    if (1.0 < fVar1) {
      this_ptr->unk[0x14] = '\0';
      this_ptr->unk[0x15] = '\0';
      this_ptr->unk[0x16] = -0x80;
      this_ptr->unk[0x17] = '?';
    }
    core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base).base.model);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  }
  return;
}
