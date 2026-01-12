// Name: core_tentacle.cpp_CTentacle_process_FUN_005db050
// Address: 005db050
// Address Range: [[005db050, 005db3d8] [005db479, 005db83c]]
// Convention: __cdecl
// Signature: void core_tentacle.cpp_CTentacle_process_FUN_005db050(CTentacle * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005db050(CTentacle *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  int iVar3;
  SMotion *pSVar4;
  CVector3f *input_local_point;
  CTentacle *pCVar5;
  uint uVar6;
  CVector3f *pCVar7;
  BADSPACEBASE *in_ESP;
  float *pfVar8;
  uint *puVar9;
  char *pcVar10;
  CMatrix3x4f *pCVar11;
  uint *puVar12;
  char *pcVar13;
  byte bVar14;
  float in_stack_00000008;
  CMatrix3x4f *in_stack_fffffda4;
  CMatrix3x4f *in_stack_fffffda8;
  CMatrix3x4f CStack_24c;
  float afStack_21c [12];
  CMatrix3x4f CStack_1ec;
  float afStack_1bc [12];
  CMatrix3x4f CStack_18c;
  CMatrix3x4f CStack_15c;
  uint uStack_12c;
  CMatrix3x4f CStack_128;
  uint auStack_f8 [11];
  uint auStack_cc [12];
  CVector3f CStack_9c;
  byte auStack_90 [16];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  char *local_24;
  CVector3f *local_20;
  CVector3f *local_1c;
  CDeformableModelInstance *pCStack_18;
  float fStack_14;
  
  bVar14 = 0;
  iVar3 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar3 != 0) {
    local_20 = (CVector3f *)&(this_ptr->base_enemy).base_character.base_actor.orient;
    fVar1 = (this_ptr->base_enemy).speed;
    local_24 = this_ptr->field1_0xbeb4 + 0x48;
    local_1c = &(this_ptr->base_enemy).base_character.base_actor.location.position;
    pCStack_18 = &(this_ptr->base_enemy).base_character.model;
    while (0.0 < in_stack_00000008 * fVar1) {
      uVar6 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&pCStack_18->motion_controller)
      ;
      if (99 < uVar6) {
        if (uVar6 < 0x65) {
          iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
          if ((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x108))(), iVar3 == 0)
             ) {
            core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                      (pCStack_18);
            core_tentacle_cpp_FUN_005dbb70();
            pfVar8 = afStack_1bc;
            pCVar11 = &CStack_1ec;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              pCVar11->m[0].w = *pfVar8;
              pfVar8 = pfVar8 + (uint)bVar14 * -2 + 1;
              pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar14 * -2 + 1) * 4);
            }
            core_xform_cpp_getTranslation_FUN_005f6110
                      ((CVector3f *)&CStack_1ec,(CMatrix3x4f *)auStack_90);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&CStack_9c,input_local_point);
            iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
            fStack_48 = CStack_9c.x - *(float *)(iVar3 + 0x20);
            fStack_44 = CStack_9c.y - *(float *)(iVar3 + 0x24);
            fStack_40 = CStack_9c.z - *(float *)(iVar3 + 0x28);
            if (((ABS(fStack_44) <= (float)6) &&
                (fStack_48 * fStack_48 + fStack_40 * fStack_40 <= (float)16)) &&
               (iVar3 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) +
                                             0x154) + 0x100))(), iVar3 != 0)) {
              iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
              this_ptr->field1_0xbeb4[0x14] = '\0';
              this_ptr->field1_0xbeb4[0x15] = '\0';
              this_ptr->field1_0xbeb4[0x16] = '\0';
              this_ptr->field1_0xbeb4[0x17] = '\0';
              core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                        (&CStack_15c,(CVector3f *)(iVar3 + 0x20),(CVector3f *)(iVar3 + 0x30));
              core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                        (&CStack_18c,local_1c,local_20);
              core_xform_cpp_inverse_FUN_005f6210(&CStack_1ec,in_stack_fffffda4);
              pfVar8 = afStack_21c;
              pCVar11 = &CStack_24c;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                pCVar11->m[0].w = *pfVar8;
                pfVar8 = pfVar8 + (uint)bVar14 * -2 + 1;
                pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar14 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_15c,&CStack_18c,&CStack_24c);
              puVar9 = auStack_cc;
              puVar12 = &uStack_12c;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar12 = *puVar9;
                puVar9 = puVar9 + (uint)bVar14 * -2 + 1;
                puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                        (&CStack_128,in_stack_fffffda4,in_stack_fffffda8);
              puVar9 = auStack_f8;
              pcVar10 = this_ptr->field1_0xbeb4 + 0x18;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(uint *)pcVar10 = *puVar9;
                puVar9 = puVar9 + (uint)bVar14 * -2 + 1;
                pcVar10 = pcVar10 + (uint)bVar14 * -8 + 4;
              }
              pcVar10 = this_ptr->field1_0xbeb4 + 0x18;
              pcVar13 = this_ptr->field1_0xbeb4 + 0x48;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(uint *)pcVar13 = *(uint *)pcVar10;
                pcVar10 = pcVar10 + (uint)bVar14 * -8 + 4;
                pcVar13 = pcVar13 + (uint)bVar14 * -8 + 4;
              }
              core_xform_cpp_clearTranslation_FUN_005f5370((CMatrix3x4f *)local_24);
              iVar3 = 0;
              do {
                fStack_78 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-7.0,7.0);
                fStack_14 = fStack_78;
                fStack_70 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-7.0,7.0);
                fStack_14 = fStack_70;
                fStack_74 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-1.0,15.0);
                iVar3 = iVar3 + 1;
                fStack_14 = fStack_74;
                core_gore_cpp_FUN_004edaa0();
              } while (iVar3 < 0x46);
            }
          }
        }
        else if (((uVar6 == 0x65) &&
                 (iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4), iVar3 != 0)) &&
                (pCVar5 = (CTentacle *)(**(code **)(*(int *)(iVar3 + 0x154) + 0x108))(),
                pCVar5 == this_ptr)) {
          *(uint *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x70) = 2;
        }
      }
    }
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&pCStack_18->motion_controller);
    uVar6 = pSVar4->state_index;
    if (uVar6 < 2) {
      if (uVar6 == 0) {
        fVar1 = *(float *)(this_ptr->field1_0xbeb4 + 8);
        this_ptr->field1_0xbeb4[0xc] = '\0';
        this_ptr->field1_0xbeb4[0xd] = '\0';
        this_ptr->field1_0xbeb4[0xe] = '\0';
        this_ptr->field1_0xbeb4[0xf] = '\0';
        if (0.0 < fVar1) {
          *(float *)(this_ptr->field1_0xbeb4 + 8) =
               *(float *)(this_ptr->field1_0xbeb4 + 8) - in_stack_00000008;
        }
        if (*(float *)(this_ptr->field1_0xbeb4 + 8) <= 0.0) {
          this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
          if (*(int *)(this_ptr->field1_0xbeb4 + 0x10) == 0) {
            iVar3 = core_tentacle_cpp_FUN_005db900();
            if (iVar3 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&this_ptr_00->motion_controller,2,1);
              this_ptr->field1_0xbeb4[8] = '\0';
              this_ptr->field1_0xbeb4[9] = '\0';
              this_ptr->field1_0xbeb4[10] = '\0';
              this_ptr->field1_0xbeb4[0xb] = '\0';
            }
          }
          else {
            iVar3 = core_tentacle_cpp_FUN_005db900();
            if (iVar3 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&this_ptr_00->motion_controller,2,1);
              this_ptr->field1_0xbeb4[8] = '\0';
              this_ptr->field1_0xbeb4[9] = '\0';
              this_ptr->field1_0xbeb4[10] = '\0';
              this_ptr->field1_0xbeb4[0xb] = '\0';
              core_grave_cpp_FUN_004ee790();
              this_ptr->field1_0xbeb4[0x10] = '\0';
              this_ptr->field1_0xbeb4[0x11] = '\0';
              this_ptr->field1_0xbeb4[0x12] = '\0';
              this_ptr->field1_0xbeb4[0x13] = '\0';
            }
          }
        }
      }
    }
    else if (uVar6 < 3) {
      fVar1 = *(float *)(this_ptr->field1_0xbeb4 + 0xc) + in_stack_00000008;
      *(float *)(this_ptr->field1_0xbeb4 + 0xc) = fVar1;
      if (fVar1 < (float)25) {
        (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                  ((CDemonActor *)this_ptr);
        iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if (iVar3 != 0) {
          auStack_90._12_4_ = *(float *)(iVar3 + 0x20) - ((CVector3f *)&local_1c->x)->x;
          fStack_80 = *(float *)(iVar3 + 0x24) - local_1c->y;
          fStack_7c = *(float *)(iVar3 + 0x28) - local_1c->z;
          pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&CStack_6c,(CVector3f *)(auStack_90 + 0xc));
          fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                                (pCVar7->y -
                                 (this_ptr->base_enemy).base_character.base_actor.orient.bank);
          local_28 = in_stack_00000008 * (float)0.78539816337500001;
          *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fStack_14;
          fStack_34 = -local_28;
          if (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) < fStack_34) {
            *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fStack_34;
          }
          if (local_28 < *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc)) {
            *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = local_28;
          }
          if ((float)5 < *(float *)(this_ptr->field1_0xbeb4 + 0xc)) {
            iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
            fVar1 = (this_ptr->base_enemy).base_character.base_actor.location.position.x -
                    *(float *)(iVar3 + 0x20);
            fVar2 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                    *(float *)(iVar3 + 0x28);
            fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
            if (((fStack_14 < (float)0.17453292519444399) &&
                (ABS((this_ptr->base_enemy).base_character.base_actor.location.position.y -
                     *(float *)(iVar3 + 0x24)) < (float)4)) &&
               ((float)7 < fVar1 && fVar1 < (float)12)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base_enemy).base_character.model.motion_controller,6,1);
              this_ptr->field1_0xbeb4[8] = '\0';
              this_ptr->field1_0xbeb4[9] = '\0';
              this_ptr->field1_0xbeb4[10] = -0x38;
              this_ptr->field1_0xbeb4[0xb] = 'A';
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&pCStack_18->motion_controller,0,1);
        this_ptr->field1_0xbeb4[8] = '\0';
        this_ptr->field1_0xbeb4[9] = '\0';
        this_ptr->field1_0xbeb4[10] = -0x38;
        this_ptr->field1_0xbeb4[0xb] = 'A';
      }
    }
    else if ((((uVar6 == 6) &&
              (iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4), iVar3 != 0)) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x120))(), iVar3 < 1)) &&
            (iVar3 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) +
                                          0x154) + 0x108))(), iVar3 == 0)) {
      iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
      CStack_60.x = *(float *)(iVar3 + 0x20) - ((CVector3f *)&local_1c->x)->x;
      CStack_60.y = *(float *)(iVar3 + 0x24) - local_1c->y;
      CStack_60.z = *(float *)(iVar3 + 0x28) - local_1c->z;
      pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&CStack_54,&CStack_60);
      fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            (pCVar7->y -
                             (this_ptr->base_enemy).base_character.base_actor.orient.bank);
      fStack_2c = in_stack_00000008 * (float)1.04719755116667;
      *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fStack_14;
      fStack_30 = -fStack_2c;
      if (fStack_14 < fStack_30) {
        *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fStack_30;
      }
      if (fStack_2c < *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc)) {
        *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fStack_2c;
      }
    }
    fVar1 = in_stack_00000008 / _DAT_00664468 + *(float *)(this_ptr->field1_0xbeb4 + 0x14);
    *(float *)(this_ptr->field1_0xbeb4 + 0x14) = fVar1;
    if (1.0 < fVar1) {
      this_ptr->field1_0xbeb4[0x14] = '\0';
      this_ptr->field1_0xbeb4[0x15] = '\0';
      this_ptr->field1_0xbeb4[0x16] = -0x80;
      this_ptr->field1_0xbeb4[0x17] = '?';
    }
    core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
              (&(this_ptr->base_enemy).base_character.model);
    core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  }
  return;
}
