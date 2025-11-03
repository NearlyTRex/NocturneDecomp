// Name: core_tentacle.cpp_CTentacle_process_FUN_005db050
// Address: 005db050
// Address Range: [[005db050, 005db3d8] [005db479, 005db83c]]
// Convention: __cdecl
// Signature: void core_tentacle.cpp_CTentacle_process_FUN_005db050(CTentacle * this_ptr)
// Globals:
//   TerminatedCString s_CHero_CNPC_00654ddc
//   TerminatedCString s_CEnemy_CHero_CNPC_00654de7
//   undefined4 DAT_00654dfc
//   undefined4 DAT_00654e04
//   undefined4 DAT_00654e0c
//   undefined4 DAT_00654e14
//   undefined4 DAT_00654e1c
//   undefined4 DAT_00654e24
//   undefined4 DAT_00654e2c
//   undefined4 DAT_00654e34
//   undefined4 DAT_00654e3c
//   undefined4 DAT_00654e44
//   undefined4 DAT_00664468
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_grave.cpp_FUN_004ee790
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   core_tentacle.cpp_FUN_005db900
//   core_tentacle.cpp_FUN_005dbb70
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_clearTranslation_FUN_005f5370
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_inverse_FUN_005f6210
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_tentacle_cpp_CTentacle_process_FUN_005db050(CTentacle *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  float fVar2;
  int iVar3;
  CVector3f *input_local_point;
  CTentacle *pCVar4;
  uint uVar5;
  CVector3f *pCVar6;
  BADSPACEBASE *in_ESP;
  float *pfVar7;
  undefined4 *puVar8;
  char *pcVar9;
  CMatrix3x4f *pCVar10;
  CMatrix3x4f *pCVar11;
  char *pcVar12;
  byte bVar13;
  float in_stack_00000008;
  CMatrix3x4f *in_stack_fffffda0;
  CMatrix3x4f CStack_250;
  float afStack_220 [12];
  CMatrix3x4f CStack_1f0;
  float afStack_1c0 [12];
  CMatrix3x4f CStack_190;
  CMatrix3x4f CStack_160;
  CMatrix3x4f CStack_130;
  undefined4 auStack_100 [12];
  float afStack_d0 [12];
  CVector3f CStack_a0;
  undefined1 auStack_94 [20];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 auStack_6c [12];
  float fStack_60;
  float fStack_5c;
  CVector3f CStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_34;
  float fStack_30;
  char *local_28;
  CVector3f *local_24;
  CVector3f *local_20;
  CDeformableModelInstance *local_1c;
  float fStack_18;
  float fStack_14;
  
  bVar13 = 0;
  iVar3 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if (iVar3 != 0) {
    local_24 = (CVector3f *)&(this_ptr->base_enemy).base_character.base_actor.orient;
    fVar1 = (this_ptr->base_enemy).speed;
    local_28 = this_ptr->field1_0xbeb4 + 0x48;
    local_20 = &(this_ptr->base_enemy).base_character.base_actor.location.position;
    local_1c = &(this_ptr->base_enemy).base_character.model;
    while (0.0 < in_stack_00000008 * fVar1) {
      uVar5 = core_motion_cpp_CMotionController_advance_FUN_0052d610(&local_1c->motion_controller);
      if (99 < uVar5) {
        if (uVar5 < 0x65) {
          iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
          if ((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x108))(), iVar3 == 0)
             ) {
            core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40(local_1c);
            core_tentacle_cpp_FUN_005dbb70();
            pfVar7 = afStack_1c0;
            pCVar10 = &CStack_1f0;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              pCVar10->m[0].w = *pfVar7;
              pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
              pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar13 * -2 + 1) * 4);
            }
            core_xform_cpp_getTranslation_FUN_005f6110
                      ((CVector3f *)&CStack_1f0,(CMatrix3x4f *)auStack_94);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                      ((CDemonActor *)this_ptr,&CStack_a0,input_local_point);
            iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
            fStack_4c = CStack_a0.x - *(float *)(iVar3 + 0x20);
            fStack_48 = CStack_a0.y - *(float *)(iVar3 + 0x24);
            fStack_44 = CStack_a0.z - *(float *)(iVar3 + 0x28);
            if (((ABS(fStack_48) <= (float)_DAT_00654e3c) &&
                (fStack_4c * fStack_4c + fStack_44 * fStack_44 <= (float)_DAT_00654e44)) &&
               (iVar3 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) +
                                             0x154) + 0x100))(), iVar3 != 0)) {
              iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
              this_ptr->field1_0xbeb4[0x14] = '\0';
              this_ptr->field1_0xbeb4[0x15] = '\0';
              this_ptr->field1_0xbeb4[0x16] = '\0';
              this_ptr->field1_0xbeb4[0x17] = '\0';
              core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                        (&CStack_160,(CVector3f *)(iVar3 + 0x20),(CVector3f *)(iVar3 + 0x30));
              core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                        (&CStack_190,local_20,local_24);
              core_xform_cpp_inverse_FUN_005f6210(&CStack_1f0,in_stack_fffffda0);
              pCVar10 = &CStack_250;
              pfVar7 = afStack_220;
              pCVar11 = &CStack_250;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                pCVar11->m[0].w = *pfVar7;
                pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
                pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_160,&CStack_190,pCVar10);
              pfVar7 = afStack_d0;
              pCVar11 = &CStack_130;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                pCVar11->m[0].w = *pfVar7;
                pfVar7 = pfVar7 + (uint)bVar13 * -2 + 1;
                pCVar11 = (CMatrix3x4f *)((int)pCVar11 + ((uint)bVar13 * -2 + 1) * 4);
              }
              core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_130,pCVar10,in_stack_fffffda0);
              puVar8 = auStack_100;
              pcVar9 = this_ptr->field1_0xbeb4 + 0x18;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pcVar9 = *puVar8;
                puVar8 = puVar8 + (uint)bVar13 * -2 + 1;
                pcVar9 = pcVar9 + (uint)bVar13 * -8 + 4;
              }
              pcVar9 = this_ptr->field1_0xbeb4 + 0x18;
              pcVar12 = this_ptr->field1_0xbeb4 + 0x48;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + (uint)bVar13 * -8 + 4;
                pcVar12 = pcVar12 + (uint)bVar13 * -8 + 4;
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
        else if (((uVar5 == 0x65) &&
                 (iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4), iVar3 != 0)) &&
                (pCVar4 = (CTentacle *)(**(code **)(*(int *)(iVar3 + 0x154) + 0x108))(),
                pCVar4 == this_ptr)) {
          *(undefined4 *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) + 0x70) = 2;
        }
      }
    }
    iVar3 = core_motion_cpp_CMotionController_FUN_0052dab0(&local_1c->motion_controller);
    uVar5 = *(uint *)(iVar3 + 0x24);
    if (uVar5 < 2) {
      if (uVar5 == 0) {
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
                        (&this_ptr_00->motion_controller);
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
                        (&this_ptr_00->motion_controller);
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
    else if (uVar5 < 3) {
      fVar1 = *(float *)(this_ptr->field1_0xbeb4 + 0xc) + in_stack_00000008;
      *(float *)(this_ptr->field1_0xbeb4 + 0xc) = fVar1;
      if (fVar1 < (float)_DAT_00654e04) {
        (*(this_ptr->base_enemy).base_character.base_actor.vtable[1].getAllowedMeleeAttackTypes)
                  ((CDemonActor *)this_ptr);
        iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
        if (iVar3 != 0) {
          auStack_94._16_4_ =
               *(float *)(iVar3 + 0x20) - (float)(local_1c->motion_controller).motion_list_ptr;
          fStack_80 = *(float *)(iVar3 + 0x24) -
                      (float)(local_1c->motion_controller).current_motion_index;
          fStack_7c = *(float *)(iVar3 + 0x28) - (local_1c->motion_controller).current_frame_number;
          pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             ((CVector3f *)auStack_6c,(CVector3f *)(auStack_94 + 0x10));
          CStack_250.m[0].w =
               core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                         (pCVar6->y - (this_ptr->base_enemy).base_character.base_actor.orient.bank);
          local_28 = (char *)(in_stack_00000008 * (float)_DAT_00654e0c);
          *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = CStack_250.m[0].w;
          fStack_34 = -(float)local_28;
          if (*(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) < fStack_34) {
            *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fStack_34;
          }
          if ((float)local_28 <
              *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc)) {
            *(char **)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = local_28;
          }
          fStack_14 = CStack_250.m[0].w;
          if ((float)_DAT_00654e14 < *(float *)(this_ptr->field1_0xbeb4 + 0xc)) {
            iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
            fVar1 = (this_ptr->base_enemy).base_character.base_actor.location.position.x -
                    *(float *)(iVar3 + 0x20);
            fVar2 = (this_ptr->base_enemy).base_character.base_actor.location.position.z -
                    *(float *)(iVar3 + 0x28);
            fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
            if (((CStack_250.m[0].w < (float)_DAT_00654e1c) &&
                (ABS((this_ptr->base_enemy).base_character.base_actor.location.position.y -
                     *(float *)(iVar3 + 0x24)) < (float)_DAT_00654e24)) &&
               ((float)_DAT_00654e2c < fVar1 && fVar1 < (float)_DAT_00654e34)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base_enemy).base_character.model.motion_controller);
              this_ptr->field1_0xbeb4[8] = '\0';
              this_ptr->field1_0xbeb4[9] = '\0';
              this_ptr->field1_0xbeb4[10] = -0x38;
              this_ptr->field1_0xbeb4[0xb] = 'A';
            }
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&local_1c->motion_controller)
        ;
        this_ptr->field1_0xbeb4[8] = '\0';
        this_ptr->field1_0xbeb4[9] = '\0';
        this_ptr->field1_0xbeb4[10] = -0x38;
        this_ptr->field1_0xbeb4[0xb] = 'A';
      }
    }
    else if ((((uVar5 == 6) &&
              (iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4), iVar3 != 0)) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x120))(), iVar3 < 1)) &&
            (iVar3 = (**(code **)(*(int *)(*(int *)((this_ptr->base_enemy).field6_0xbe38 + 4) +
                                          0x154) + 0x108))(), iVar3 == 0)) {
      iVar3 = *(int *)((this_ptr->base_enemy).field6_0xbe38 + 4);
      auStack_6c._8_4_ = *(float *)(iVar3 + 0x20) - ((CVector3f *)&local_20->x)->x;
      fStack_60 = *(float *)(iVar3 + 0x24) - local_20->y;
      fStack_5c = *(float *)(iVar3 + 0x28) - local_20->z;
      pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&CStack_58,(CVector3f *)(auStack_6c + 8));
      fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                            (pCVar6->y -
                             (this_ptr->base_enemy).base_character.base_actor.orient.bank);
      fStack_30 = in_stack_00000008 * (float)_DAT_00654dfc;
      *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fStack_18;
      fStack_34 = -fStack_30;
      if (fStack_18 < fStack_34) {
        *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fStack_34;
      }
      if (fStack_30 < *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc)) {
        *(float *)((this_ptr->base_enemy).base_character.field2_0x240c + 0xc) = fStack_30;
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
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
    core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  }
  return;
}


// Assembly code:
// 005db050: PUSH EBX
//   Label: core_tentacle.cpp_CTentacle_process_FUN_005db050
// 005db051: PUSH ESI
// 005db052: PUSH EDI
// 005db053: PUSH EBP
// 005db054: MOV EBP,ESP
// 005db056: SUB ESP,0x24c
// 005db05c: AND ESP,0xfffffff8
// 005db05f: MOV EBX,dword ptr [EBP + 0x14]
// 005db062: PUSH dword ptr [EBP + 0x18]
// 005db065: PUSH EBX
// 005db066: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 005db06b: ADD ESP,0x8
// 005db06e: TEST EAX,EAX
// 005db070: JZ 0x005db1bb
//   XREF to: 005db1bb (CONDITIONAL_JUMP)
// 005db076: FLD float ptr [EBP + 0x18]
// 005db079: LEA EAX,[EBX + 0x30]
// 005db07c: FMUL float ptr [EBX + 0xbe24]
// 005db082: MOV dword ptr [ESP + 0x23c],EAX
// 005db089: LEA EAX,[EBX + 0xbefc]
// 005db08f: MOV dword ptr [ESP + 0x238],EAX
// 005db096: LEA EAX,[EBX + 0x20]
// 005db099: MOV dword ptr [ESP + 0x240],EAX
// 005db0a0: LEA EAX,[EBX + 0x158]
// 005db0a6: FSTP float ptr [ESP + 0x8]
// 005db0aa: MOV dword ptr [ESP + 0x244],EAX
// 005db0b1: FLD float ptr [ESP + 0x8]
//   Label: LAB_005db0b1
// 005db0b5: FLDZ
// 005db0b7: FCOMPP
// 005db0b9: FNSTSW AX
// 005db0bb: SAHF
// 005db0bc: JC 0x005db4b3
//   XREF to: 005db4b3 (CONDITIONAL_JUMP)
// 005db0c2: MOV EDX,dword ptr [ESP + 0x244]
// 005db0c9: PUSH EDX
// 005db0ca: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005db0cf: MOV EAX,dword ptr [EAX + 0x24]
// 005db0d2: ADD ESP,0x4
// 005db0d5: CMP EAX,0x2
// 005db0d8: JNC 0x005db829
//   XREF to: 005db829 (CONDITIONAL_JUMP)
// 005db0de: TEST EAX,EAX
// 005db0e0: JNZ 0x005db16f
//   XREF to: 005db16f (CONDITIONAL_JUMP)
// 005db0e6: FLD float ptr [EBX + 0xbebc]
// 005db0ec: FLDZ
// 005db0ee: MOV dword ptr [EBX + 0xbec0],EAX
// 005db0f4: FCOMPP
// 005db0f6: FNSTSW AX
// 005db0f8: SAHF
// 005db0f9: JNC 0x005db10a
//   XREF to: 005db10a (CONDITIONAL_JUMP)
// 005db0fb: FLD float ptr [EBX + 0xbebc]
// 005db101: FSUB float ptr [EBP + 0x18]
// 005db104: FSTP float ptr [EBX + 0xbebc]
// 005db10a: FLD float ptr [EBX + 0xbebc]
//   Label: LAB_005db10a
// 005db110: FLDZ
// 005db112: FCOMPP
// 005db114: FNSTSW AX
// 005db116: SAHF
// 005db117: JC 0x005db16f
//   XREF to: 005db16f (CONDITIONAL_JUMP)
// 005db119: MOV EAX,dword ptr [EBX + 0xbec4]
// 005db11f: LEA ESI,[EBX + 0x158]
// 005db125: TEST EAX,EAX
// 005db127: JZ 0x005db4e1
//   XREF to: 005db4e1 (CONDITIONAL_JUMP)
// 005db12d: PUSH 0x654ddc
//   XREF to: 00654ddc (DATA)
// 005db132: PUSH EBX
// 005db133: CALL core_tentacle.cpp_FUN_005db900
//   XREF to: 005db900 (UNCONDITIONAL_CALL)
// 005db138: ADD ESP,0x8
// 005db13b: TEST EAX,EAX
// 005db13d: JZ 0x005db16f
//   XREF to: 005db16f (CONDITIONAL_JUMP)
// 005db13f: PUSH 0x1
// 005db141: PUSH 0x2
// 005db143: PUSH ESI
// 005db144: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005db149: ADD ESP,0xc
// 005db14c: MOV EDX,dword ptr [EBX + 0xbec4]
// 005db152: PUSH EDX
// 005db153: MOV dword ptr [EBX + 0xbebc],0x0
// 005db15d: CALL core_grave.cpp_FUN_004ee790
//   XREF to: 004ee790 (UNCONDITIONAL_CALL)
// 005db162: ADD ESP,0x4
// 005db165: MOV dword ptr [EBX + 0xbec4],0x0
// 005db16f: FLD float ptr [EBP + 0x18]
//   Label: LAB_005db16f
// 005db172: FDIV float ptr [0x00664468]
//   XREF to: 00664468 (READ)
// 005db178: FADD float ptr [EBX + 0xbec8]
// 005db17e: FST float ptr [EBX + 0xbec8]
// 005db184: FLD1
// 005db186: FCOMPP
// 005db188: FNSTSW AX
// 005db18a: SAHF
// 005db18b: JNC 0x005db197
//   XREF to: 005db197 (CONDITIONAL_JUMP)
// 005db18d: MOV dword ptr [EBX + 0xbec8],0x3f800000
// 005db197: PUSH EBX
//   Label: LAB_005db197
// 005db198: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 005db19d: ADD ESP,0x4
// 005db1a0: LEA EAX,[EBX + 0x158]
// 005db1a6: PUSH EAX
// 005db1a7: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 005db1ac: ADD ESP,0x4
// 005db1af: PUSH dword ptr [EBP + 0x18]
// 005db1b2: PUSH EBX
// 005db1b3: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 005db1b8: ADD ESP,0x8
// 005db1bb: MOV ESP,EBP
//   Label: LAB_005db1bb
// 005db1bd: POP EBP
// 005db1be: POP EDI
// 005db1bf: POP ESI
// 005db1c0: POP EBX
// 005db1c1: RET
// 005db1c2: MOV EDI,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005db1c2
// 005db1c8: TEST EDI,EDI
// 005db1ca: JZ 0x005db0b1
//   XREF to: 005db0b1 (CONDITIONAL_JUMP)
// 005db1d0: PUSH EDI
// 005db1d1: MOV ESI,dword ptr [EDI + 0x154]
// 005db1d7: CALL dword ptr [ESI + 0x108]
// 005db1dd: ADD ESP,0x4
// 005db1e0: TEST EAX,EAX
// 005db1e2: JNZ 0x005db0b1
//   XREF to: 005db0b1 (CONDITIONAL_JUMP)
// 005db1e8: MOV EAX,dword ptr [ESP + 0x244]
// 005db1ef: PUSH EAX
// 005db1f0: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 005db1f5: ADD ESP,0x4
// 005db1f8: PUSH EBX
// 005db1f9: LEA ESI,[ESP + 0xa4]
// 005db200: LEA EDI,[ESP + 0x74]
// 005db204: CALL core_tentacle.cpp_FUN_005dbb70
//   XREF to: 005dbb70 (UNCONDITIONAL_CALL)
// 005db209: ADD ESP,0x4
// 005db20c: LEA EAX,[ESP + 0x1cc]
// 005db213: MOV ECX,0xc
// 005db218: PUSH EAX
// 005db219: LEA EAX,[ESP + 0x74]
// 005db21d: LEA ESI,[ESP + 0xa4]
// 005db224: PUSH EAX
// 005db225: MOVSD.REP ES:EDI,ESI
// 005db227: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 005db22c: ADD ESP,0x8
// 005db22f: PUSH EAX
// 005db230: LEA EAX,[ESP + 0x1c4]
// 005db237: PUSH EAX
// 005db238: PUSH EBX
// 005db239: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005db23e: ADD ESP,0xc
// 005db241: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005db247: FLD float ptr [ESP + 0x1c0]
// 005db24e: FSUB float ptr [EAX + 0x20]
// 005db251: FLD float ptr [ESP + 0x1c4]
// 005db258: FXCH
// 005db25a: FSTP float ptr [ESP + 0x214]
// 005db261: FSUB float ptr [EAX + 0x24]
// 005db264: FLD float ptr [ESP + 0x1c8]
// 005db26b: FXCH
// 005db26d: FST float ptr [ESP + 0x218]
// 005db274: FXCH
// 005db276: FSUB float ptr [EAX + 0x28]
// 005db279: FXCH
// 005db27b: FABS
// 005db27d: FXCH
// 005db27f: FSTP float ptr [ESP + 0x21c]
// 005db286: FCOMP double ptr [0x00654e3c]
//   XREF to: 00654e3c (READ)
// 005db28c: FNSTSW AX
// 005db28e: SAHF
// 005db28f: JA 0x005db0b1
//   XREF to: 005db0b1 (CONDITIONAL_JUMP)
// 005db295: FLD float ptr [ESP + 0x21c]
// 005db29c: FMUL ST0
// 005db29e: FLD float ptr [ESP + 0x214]
// 005db2a5: FMUL ST0
// 005db2a7: FADDP
// 005db2a9: FCOMP double ptr [0x00654e44]
//   XREF to: 00654e44 (READ)
// 005db2af: FNSTSW AX
// 005db2b1: SAHF
// 005db2b2: JA 0x005db0b1
//   XREF to: 005db0b1 (CONDITIONAL_JUMP)
// 005db2b8: PUSH 0x1
// 005db2ba: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005db2c0: PUSH EBX
// 005db2c1: MOV ESI,dword ptr [EAX + 0x154]
// 005db2c7: PUSH EAX
// 005db2c8: CALL dword ptr [ESI + 0x100]
// 005db2ce: ADD ESP,0xc
// 005db2d1: TEST EAX,EAX
// 005db2d3: JZ 0x005db0b1
//   XREF to: 005db0b1 (CONDITIONAL_JUMP)
// 005db2d9: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005db2df: LEA ESI,[EAX + 0x30]
// 005db2e2: PUSH ESI
// 005db2e3: ADD EAX,0x20
// 005db2e6: PUSH EAX
// 005db2e7: LEA EAX,[ESP + 0x108]
// 005db2ee: PUSH EAX
// 005db2ef: MOV dword ptr [EBX + 0xbec8],0x0
// 005db2f9: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005db2fe: ADD ESP,0xc
// 005db301: MOV EDX,dword ptr [ESP + 0x23c]
// 005db308: PUSH EDX
// 005db309: MOV ECX,dword ptr [ESP + 0x244]
// 005db310: PUSH ECX
// 005db311: LEA EAX,[ESP + 0xd8]
// 005db318: PUSH EAX
// 005db319: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 005db31e: ADD ESP,0xc
// 005db321: LEA EAX,[ESP + 0x70]
// 005db325: PUSH EAX
// 005db326: LEA ESI,[ESP + 0x44]
// 005db32a: LEA EDI,[ESP + 0x14]
// 005db32e: CALL core_xform.cpp_inverse_FUN_005f6210
//   XREF to: 005f6210 (UNCONDITIONAL_CALL)
// 005db333: ADD ESP,0x4
// 005db336: LEA EAX,[ESP + 0x10]
// 005db33a: MOV ECX,0xc
// 005db33f: PUSH EAX
// 005db340: LEA EAX,[ESP + 0xd4]
// 005db347: LEA ESI,[ESP + 0x44]
// 005db34b: PUSH EAX
// 005db34c: LEA EAX,[ESP + 0x108]
// 005db353: MOVSD.REP ES:EDI,ESI
// 005db355: PUSH EAX
// 005db356: LEA ESI,[ESP + 0x19c]
// 005db35d: LEA EDI,[ESP + 0x13c]
// 005db364: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005db369: MOV ECX,0xc
// 005db36e: LEA ESI,[ESP + 0x19c]
// 005db375: ADD ESP,0x8
// 005db378: LEA EAX,[ESP + 0x134]
// 005db37f: MOVSD.REP ES:EDI,ESI
// 005db381: PUSH EAX
// 005db382: LEA ESI,[ESP + 0x168]
// 005db389: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005db38e: MOV ECX,0xc
// 005db393: LEA ESI,[ESP + 0x168]
// 005db39a: LEA EDI,[EBX + 0xbecc]
// 005db3a0: ADD ESP,0x8
// 005db3a3: MOVSD.REP ES:EDI,ESI
// 005db3a5: MOV ECX,0xc
// 005db3aa: LEA EDI,[EBX + 0xbefc]
// 005db3b0: LEA ESI,[EBX + 0xbecc]
// 005db3b6: MOVSD.REP ES:EDI,ESI
// 005db3b8: MOV ESI,dword ptr [ESP + 0x238]
// 005db3bf: PUSH ESI
// 005db3c0: CALL core_xform.cpp_clearTranslation_FUN_005f5370
//   XREF to: 005f5370 (UNCONDITIONAL_CALL)
// 005db3c5: ADD ESP,0x4
// 005db3c8: XOR ESI,ESI
// 005db3ca: PUSH 0x40e00000
//   Label: LAB_005db3ca
// 005db3cf: PUSH 0xc0e00000
// 005db3d4: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005db479: MOV ESI,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005db479
// 005db47f: TEST ESI,ESI
// 005db481: JZ 0x005db0b1
//   XREF to: 005db0b1 (CONDITIONAL_JUMP)
// 005db487: MOV EAX,ESI
// 005db489: PUSH EAX
// 005db48a: MOV ESI,dword ptr [ESI + 0x154]
// 005db490: CALL dword ptr [ESI + 0x108]
// 005db496: ADD ESP,0x4
// 005db499: CMP EAX,EBX
// 005db49b: JNZ 0x005db0b1
//   XREF to: 005db0b1 (CONDITIONAL_JUMP)
// 005db4a1: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005db4a7: MOV dword ptr [EAX + 0x70],0x2
// 005db4ae: JMP 0x005db0b1
//   XREF to: 005db0b1 (UNCONDITIONAL_JUMP)
// 005db4b3: LEA EAX,[ESP + 0x8]
//   Label: LAB_005db4b3
// 005db4b7: PUSH EAX
// 005db4b8: MOV ECX,dword ptr [ESP + 0x248]
// 005db4bf: PUSH ECX
// 005db4c0: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005db4c5: ADD ESP,0x8
// 005db4c8: CMP EAX,0x64
// 005db4cb: JC 0x005db0b1
//   XREF to: 005db0b1 (CONDITIONAL_JUMP)
// 005db4d1: JBE 0x005db1c2
//   XREF to: 005db1c2 (CONDITIONAL_JUMP)
// 005db4d7: CMP EAX,0x65
// 005db4da: JZ 0x005db479
//   XREF to: 005db479 (CONDITIONAL_JUMP)
// 005db4dc: JMP 0x005db0b1
//   XREF to: 005db0b1 (UNCONDITIONAL_JUMP)
// 005db4e1: PUSH 0x654de7
//   Label: LAB_005db4e1
//   XREF to: 00654de7 (DATA)
// 005db4e6: PUSH EBX
// 005db4e7: CALL core_tentacle.cpp_FUN_005db900
//   XREF to: 005db900 (UNCONDITIONAL_CALL)
// 005db4ec: ADD ESP,0x8
// 005db4ef: TEST EAX,EAX
// 005db4f1: JZ 0x005db16f
//   XREF to: 005db16f (CONDITIONAL_JUMP)
// 005db4f7: PUSH 0x1
// 005db4f9: PUSH 0x2
// 005db4fb: PUSH ESI
// 005db4fc: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005db501: ADD ESP,0xc
// 005db504: MOV dword ptr [EBX + 0xbebc],0x0
// 005db50e: JMP 0x005db16f
//   XREF to: 005db16f (UNCONDITIONAL_JUMP)
// 005db513: FLD float ptr [EBX + 0xbec0]
//   Label: LAB_005db513
// 005db519: FADD float ptr [EBP + 0x18]
// 005db51c: FST float ptr [EBX + 0xbec0]
// 005db522: FCOMP double ptr [0x00654e04]
//   XREF to: 00654e04 (READ)
// 005db528: FNSTSW AX
// 005db52a: SAHF
// 005db52b: JC 0x005db550
//   XREF to: 005db550 (CONDITIONAL_JUMP)
// 005db52d: PUSH 0x1
// 005db52f: PUSH 0x0
// 005db531: MOV EDI,dword ptr [ESP + 0x24c]
// 005db538: PUSH EDI
// 005db539: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005db53e: ADD ESP,0xc
// 005db541: MOV dword ptr [EBX + 0xbebc],0x41c80000
// 005db54b: JMP 0x005db16f
//   XREF to: 005db16f (UNCONDITIONAL_JUMP)
// 005db550: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005db550
// 005db553: MOV EAX,dword ptr [EBX + 0x154]
// 005db559: PUSH EBX
// 005db55a: CALL dword ptr [EAX + 0x158]
// 005db560: MOV ESI,dword ptr [EBX + 0xbe3c]
// 005db566: ADD ESP,0x8
// 005db569: TEST ESI,ESI
// 005db56b: JZ 0x005db16f
//   XREF to: 005db16f (CONDITIONAL_JUMP)
// 005db571: MOV EAX,ESI
// 005db573: MOV EDX,dword ptr [ESP + 0x240]
// 005db57a: FLD float ptr [EAX + 0x20]
// 005db57d: FSUB float ptr [EDX]
// 005db57f: FSTP float ptr [ESP + 0x1d8]
// 005db586: FLD float ptr [EAX + 0x24]
// 005db589: FSUB float ptr [EDX + 0x4]
// 005db58c: FSTP float ptr [ESP + 0x1dc]
// 005db593: FLD float ptr [EAX + 0x28]
// 005db596: LEA EAX,[ESP + 0x1d8]
// 005db59d: PUSH EAX
// 005db59e: LEA EAX,[ESP + 0x1f4]
// 005db5a5: FSUB float ptr [EDX + 0x8]
// 005db5a8: PUSH EAX
// 005db5a9: FSTP float ptr [ESP + 0x1e8]
// 005db5b0: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005db5b5: FLD float ptr [EAX + 0x4]
// 005db5b8: ADD ESP,0x8
// 005db5bb: FSUB float ptr [EBX + 0x34]
// 005db5be: SUB ESP,0x4
// 005db5c1: FSTP float ptr [ESP]
// 005db5c4: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005db5c9: MOV dword ptr [ESP + 0x24c],EAX
// 005db5d0: FLD float ptr [ESP + 0x24c]
// 005db5d7: ADD ESP,0x4
// 005db5da: FLD float ptr [EBP + 0x18]
// 005db5dd: FMUL double ptr [0x00654e0c]
//   XREF to: 00654e0c (READ)
// 005db5e3: FXCH
// 005db5e5: FSTP float ptr [ESP + 0xc]
// 005db5e9: MOV EAX,dword ptr [ESP + 0xc]
// 005db5ed: FSTP float ptr [ESP + 0x234]
// 005db5f4: MOV dword ptr [EBX + 0x2418],EAX
// 005db5fa: FLD float ptr [EBX + 0x2418]
// 005db600: FLD float ptr [ESP + 0x234]
// 005db607: FCHS
// 005db609: FSTP float ptr [ESP + 0x228]
// 005db610: FCOMP float ptr [ESP + 0x228]
// 005db617: FNSTSW AX
// 005db619: SAHF
// 005db61a: JC 0x005db6f8
//   XREF to: 005db6f8 (CONDITIONAL_JUMP)
// 005db620: FLD float ptr [EBX + 0x2418]
//   Label: LAB_005db620
// 005db626: FCOMP float ptr [ESP + 0x234]
// 005db62d: FNSTSW AX
// 005db62f: SAHF
// 005db630: JBE 0x005db63f
//   XREF to: 005db63f (CONDITIONAL_JUMP)
// 005db632: MOV EAX,dword ptr [ESP + 0x234]
// 005db639: MOV dword ptr [EBX + 0x2418],EAX
// 005db63f: FLD float ptr [EBX + 0xbec0]
//   Label: LAB_005db63f
// 005db645: FCOMP double ptr [0x00654e14]
//   XREF to: 00654e14 (READ)
// 005db64b: FNSTSW AX
// 005db64d: SAHF
// 005db64e: JBE 0x005db16f
//   XREF to: 005db16f (CONDITIONAL_JUMP)
// 005db654: MOV EDX,dword ptr [EBX + 0xbe3c]
// 005db65a: LEA EAX,[EBX + 0x20]
// 005db65d: LEA ESI,[EDX + 0x20]
// 005db660: FLD float ptr [EAX]
// 005db662: FSUB float ptr [ESI]
// 005db664: FMUL ST0
// 005db666: FLD float ptr [EAX + 0x8]
// 005db669: FSUB float ptr [ESI + 0x8]
// 005db66c: FMUL ST0
// 005db66e: FADDP
// 005db670: FSQRT
// 005db672: FSTP float ptr [ESP + 0x4]
// 005db676: MOV EAX,dword ptr [ESP + 0x4]
// 005db67a: FLD float ptr [ESP + 0xc]
// 005db67e: MOV dword ptr [ESP],EAX
// 005db681: FCOMP double ptr [0x00654e1c]
//   XREF to: 00654e1c (READ)
// 005db687: FNSTSW AX
// 005db689: SAHF
// 005db68a: JNC 0x005db16f
//   XREF to: 005db16f (CONDITIONAL_JUMP)
// 005db690: FLD float ptr [EBX + 0x24]
// 005db693: FSUB float ptr [EDX + 0x24]
// 005db696: FABS
// 005db698: FCOMP double ptr [0x00654e24]
//   XREF to: 00654e24 (READ)
// 005db69e: FNSTSW AX
// 005db6a0: SAHF
// 005db6a1: JNC 0x005db16f
//   XREF to: 005db16f (CONDITIONAL_JUMP)
// 005db6a7: FLD float ptr [ESP + 0x4]
// 005db6ab: FCOMP double ptr [0x00654e2c]
//   XREF to: 00654e2c (READ)
// 005db6b1: FNSTSW AX
// 005db6b3: SAHF
// 005db6b4: JBE 0x005db70a
//   XREF to: 005db70a (CONDITIONAL_JUMP)
// 005db6b6: MOV EDX,0x1
// 005db6bb: FLD float ptr [ESP]
//   Label: LAB_005db6bb
// 005db6be: FCOMP double ptr [0x00654e34]
//   XREF to: 00654e34 (READ)
// 005db6c4: FNSTSW AX
// 005db6c6: SAHF
// 005db6c7: JNC 0x005db70e
//   XREF to: 005db70e (CONDITIONAL_JUMP)
// 005db6c9: MOV EAX,0x1
// 005db6ce: TEST EDX,EAX
//   Label: LAB_005db6ce
// 005db6d0: JZ 0x005db16f
//   XREF to: 005db16f (CONDITIONAL_JUMP)
// 005db6d6: PUSH 0x1
// 005db6d8: PUSH 0x6
// 005db6da: LEA EAX,[EBX + 0x158]
// 005db6e0: PUSH EAX
// 005db6e1: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005db6e6: ADD ESP,0xc
// 005db6e9: MOV dword ptr [EBX + 0xbebc],0x41c80000
// 005db6f3: JMP 0x005db16f
//   XREF to: 005db16f (UNCONDITIONAL_JUMP)
// 005db6f8: MOV EAX,dword ptr [ESP + 0x228]
//   Label: LAB_005db6f8
// 005db6ff: MOV dword ptr [EBX + 0x2418],EAX
// 005db705: JMP 0x005db620
//   XREF to: 005db620 (UNCONDITIONAL_JUMP)
// 005db70a: XOR EDX,EDX
//   Label: LAB_005db70a
// 005db70c: JMP 0x005db6bb
//   XREF to: 005db6bb (UNCONDITIONAL_JUMP)
// 005db70e: XOR EAX,EAX
//   Label: LAB_005db70e
// 005db710: JMP 0x005db6ce
//   XREF to: 005db6ce (UNCONDITIONAL_JUMP)
// 005db712: MOV ECX,dword ptr [EBX + 0xbe3c]
//   Label: LAB_005db712
// 005db718: TEST ECX,ECX
// 005db71a: JZ 0x005db16f
//   XREF to: 005db16f (CONDITIONAL_JUMP)
// 005db720: PUSH ECX
// 005db721: MOV EDX,dword ptr [ECX + 0x154]
// 005db727: CALL dword ptr [EDX + 0x120]
// 005db72d: ADD ESP,0x4
// 005db730: TEST EAX,EAX
// 005db732: JG 0x005db16f
//   XREF to: 005db16f (CONDITIONAL_JUMP)
// 005db738: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005db73e: PUSH EAX
// 005db73f: MOV EDX,dword ptr [EAX + 0x154]
// 005db745: CALL dword ptr [EDX + 0x108]
// 005db74b: ADD ESP,0x4
// 005db74e: TEST EAX,EAX
// 005db750: JNZ 0x005db16f
//   XREF to: 005db16f (CONDITIONAL_JUMP)
// 005db756: MOV EAX,dword ptr [EBX + 0xbe3c]
// 005db75c: MOV EDX,dword ptr [ESP + 0x240]
// 005db763: FLD float ptr [EAX + 0x20]
// 005db766: FSUB float ptr [EDX]
// 005db768: FSTP float ptr [ESP + 0x1fc]
// 005db76f: FLD float ptr [EAX + 0x24]
// 005db772: FSUB float ptr [EDX + 0x4]
// 005db775: FSTP float ptr [ESP + 0x200]
// 005db77c: FLD float ptr [EAX + 0x28]
// 005db77f: LEA EAX,[ESP + 0x1fc]
// 005db786: PUSH EAX
// 005db787: LEA EAX,[ESP + 0x20c]
// 005db78e: FSUB float ptr [EDX + 0x8]
// 005db791: PUSH EAX
// 005db792: FSTP float ptr [ESP + 0x20c]
// 005db799: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005db79e: FLD float ptr [EAX + 0x4]
// 005db7a1: ADD ESP,0x8
// 005db7a4: FSUB float ptr [EBX + 0x34]
// 005db7a7: SUB ESP,0x4
// 005db7aa: FSTP float ptr [ESP]
// 005db7ad: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005db7b2: MOV dword ptr [ESP + 0x24c],EAX
// 005db7b9: FLD float ptr [ESP + 0x24c]
// 005db7c0: ADD ESP,0x4
// 005db7c3: FLD float ptr [EBP + 0x18]
// 005db7c6: FMUL double ptr [0x00654dfc]
//   XREF to: 00654dfc (READ)
// 005db7cc: FXCH
// 005db7ce: FST float ptr [EBX + 0x2418]
// 005db7d4: FXCH
// 005db7d6: FST float ptr [ESP + 0x230]
// 005db7dd: FCHS
// 005db7df: FSTP float ptr [ESP + 0x22c]
// 005db7e6: FCOMP float ptr [ESP + 0x22c]
// 005db7ed: FNSTSW AX
// 005db7ef: SAHF
// 005db7f0: JC 0x005db81a
//   XREF to: 005db81a (CONDITIONAL_JUMP)
// 005db7f2: FLD float ptr [EBX + 0x2418]
//   Label: LAB_005db7f2
// 005db7f8: FCOMP float ptr [ESP + 0x230]
// 005db7ff: FNSTSW AX
// 005db801: SAHF
// 005db802: JBE 0x005db16f
//   XREF to: 005db16f (CONDITIONAL_JUMP)
// 005db808: MOV EAX,dword ptr [ESP + 0x230]
// 005db80f: MOV dword ptr [EBX + 0x2418],EAX
// 005db815: JMP 0x005db16f
//   XREF to: 005db16f (UNCONDITIONAL_JUMP)
// 005db81a: MOV EAX,dword ptr [ESP + 0x22c]
//   Label: LAB_005db81a
// 005db821: MOV dword ptr [EBX + 0x2418],EAX
// 005db827: JMP 0x005db7f2
//   XREF to: 005db7f2 (UNCONDITIONAL_JUMP)
// 005db829: JBE 0x005db513
//   Label: LAB_005db829
//   XREF to: 005db513 (CONDITIONAL_JUMP)
// 005db82f: CMP EAX,0x6
// 005db832: JZ 0x005db712
//   XREF to: 005db712 (CONDITIONAL_JUMP)
// 005db838: JMP 0x005db16f
//   XREF to: 005db16f (UNCONDITIONAL_JUMP)
