// Name: core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0
// Address: 005d8ba0
// Address Range: [[005d8ba0, 005d9256]]
// Convention: __cdecl
// Signature: void core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0(CSvetlana * this_ptr)
// Globals:
//   void* switchdataD_005d8b6c = 005d8f7e
//   TerminatedCString s_s_confused_while_walking_00654a51
//   undefined4 DAT_00654a82
//   undefined4 DAT_00654a8a
//   undefined4 DAT_00654a92
//   undefined4 DAT_00654a9a
//   undefined4 DAT_00654aa2
//   undefined4 DAT_00654aaa
//   undefined4 DAT_00654ab2
//   undefined4 DAT_00654aba
//   undefined4 DAT_00654ac2
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   undefined4 DAT_03f6cb90
// Function calls:
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ea40
//   core_cloth.cpp_FUN_0043ab80
//   core_hero.cpp_FUN_004f2af0
//   core_hero.cpp_FUN_004f2c40
//   core_hero.cpp_FUN_004f2d70
//   core_hero.cpp_FUN_004f2ed0
//   core_hero.cpp_FUN_004f2f50
//   core_hero.cpp_FUN_004f30f0
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_svetlana.cpp_FUN_005d9260
//   core_svetlana.cpp_MotionControllerAdvance_ParentBones_FUN_005d9970
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_svetlana_cpp_CSvetlana_process_FUN_005d8ba0(CSvetlana *this_ptr)

{
  char *pcVar1;
  CDeformableModelInstance *pCVar2;
  CDemonActor *pCVar3;
  bool bVar4;
  float fVar5;
  CCharacter *pCVar6;
  int iVar7;
  CVector3f *pCVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  BADSPACEBASE *in_ESP;
  byte bVar12;
  int unaff_retaddr;
  float in_stack_00000008;
  int in_stack_00000014;
  CDeformableModelInstance *pCStack0000002c;
  CDeformableModelInstance *in_stack_00000048;
  CLocation *pCStack00000058;
  CDeformableModelInstance *apCStackY_1810 [5];
  float afStackY_17fc [504];
  CDeformableModelInstance *apCStackY_101c [5];
  float afStackY_1008 [986];
  int in_stack_ffffff94;
  SCollisionInfo *in_stack_ffffffb4;
  code *bone_index;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffffc8;
  undefined1 auStack_34 [8];
  CDeformableModelInstance *pCStack_2c;
  CVector3f CStack_28;
  float afStack_1c [3];
  
  bVar12 = 0;
  if (((this_ptr->base_hero).base_character.hit_points < (float)_DAT_00654a82) &&
     (fVar9 = (this_ptr->base_hero).base_character.hit_points + in_stack_00000008,
     (this_ptr->base_hero).base_character.hit_points = fVar9, (float)_DAT_00654a82 < fVar9)) {
    (this_ptr->base_hero).base_character.hit_points = 100.0;
  }
  iVar7 = core_charactr_cpp_CCharacter_FUN_00429870((CCharacter *)this_ptr);
  if ((iVar7 == 0) || ((this_ptr->base_hero).ai_task == 4)) {
switchD_005d8f77_caseD_9:
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042ea40((CCharacter *)this_ptr);
  fVar9 = (float)(this_ptr->base_hero).field1_0xbe24 - in_stack_00000008;
  fVar5 = (float)_DAT_00654a8a;
  (this_ptr->base_hero).field1_0xbe24 = (int)fVar9;
  *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x2c) = in_stack_00000008 * fVar5;
  if (fVar9 < 0.0) {
    (this_ptr->base_hero).field1_0xbe24 = 0;
  }
  pcVar1 = (this_ptr->base_hero).base_character.model.field17_0x2254;
  pCVar6 = &(this_ptr->base_hero).base_character;
  (pCVar6->model).field17_0x2254[8] = '\0';
  (pCVar6->model).field17_0x2254[9] = '\0';
  (pCVar6->model).field17_0x2254[10] = '\0';
  (pCVar6->model).field17_0x2254[0xb] = '\0';
  *(undefined4 *)((this_ptr->base_hero).base_character.model.field17_0x2254 + 4) =
       *(undefined4 *)((this_ptr->base_hero).base_character.model.field17_0x2254 + 8);
  *(undefined4 *)pcVar1 =
       *(undefined4 *)((this_ptr->base_hero).base_character.model.field17_0x2254 + 4);
  core_svetlana_cpp_MotionControllerAdvance_ParentBones_FUN_005d9970();
  *(undefined4 *)((this_ptr->base_hero).base_character.field2_0x240c + 0x28) =
       *(undefined4 *)((this_ptr->base_hero).base_character.model.field17_0x2254 + 8);
  iVar7 = core_charactr_cpp_CCharacter_FUN_0042ca70((CCharacter *)this_ptr);
  if (iVar7 == 0) {
    if ((this_ptr->base_hero).control_type == 2) {
      core_svetlana_cpp_FUN_005d9260();
    }
    iVar7 = core_motion_cpp_CMotionController_FUN_0052dab0
                      (&(this_ptr->base_hero).base_character.model.motion_controller);
    switch(*(undefined4 *)(iVar7 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)((this_ptr->base_hero).base_character.field2_0x240c + 4) != 0) {
        iVar7 = 0;
        if (*(int *)this_ptr->field1_0x1fbd4 != 0) {
          iVar7 = 10;
        }
        if (*(int *)(this_ptr->base_hero).field3_0xbe2c != 0) {
          if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 8) == 0) {
            iVar7 = 1;
          }
          else {
            iVar7 = 2;
          }
        }
        if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 4) != 0) {
          iVar7 = 3;
        }
        if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 0x18) != 0) {
          iVar7 = *(int *)this_ptr->field1_0x1fbd4;
          (this_ptr->base_hero).field3_0xbe2c[0x18] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0x19] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0x1a] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0x1b] = '\0';
          uVar10 = (uint)(iVar7 == 0);
          *(uint *)this_ptr->field1_0x1fbd4 = uVar10;
          if (uVar10 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = 10;
          }
        }
        if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 0xc) != 0) {
          bVar4 = true;
          if ((*(int *)this_ptr->field1_0x1fbd4 == 0) && ((this_ptr->base_hero).control_type != 2))
          {
            iVar11 = core_hero_cpp_FUN_004f2af0();
            bVar4 = false;
            if (iVar11 != 0) goto LAB_005d9011;
            iVar11 = core_hero_cpp_FUN_004f2d70();
            if ((iVar11 != 0) && (iVar11 != 1)) {
              core_hero_cpp_FUN_004f2ed0();
            }
            if ((unaff_retaddr != 0) || (iVar11 = core_hero_cpp_FUN_004f2c40(), iVar11 != 0))
            goto LAB_005d9011;
            iVar11 = core_hero_cpp_FUN_004f2f50();
            if (iVar11 != 0) {
              core_hero_cpp_FUN_004f30f0();
              goto LAB_005d9011;
            }
          }
          else {
LAB_005d9011:
            if (!bVar4) goto LAB_005d9032;
          }
          iVar7 = *(int *)(this_ptr->field1_0x1fbd4 + 4);
          (this_ptr->base_hero).field3_0xbe2c[0xc] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0xd] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0xe] = '\0';
          (this_ptr->base_hero).field3_0xbe2c[0xf] = '\0';
          if (iVar7 == 0) {
            iVar7 = 0xf;
          }
          else {
            iVar7 = 0xe;
          }
        }
LAB_005d9032:
        *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0xc) =
             *(float *)((this_ptr->base_hero).field3_0xbe2c + 0x24) *
             *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x2c);
        iVar11 = core_motion_cpp_CMotionController_FUN_0052dab0
                           (&(this_ptr->base_hero).base_character.model.motion_controller);
        if (iVar7 != *(int *)(iVar11 + 0x24)) {
          in_stack_ffffff94 = 1;
          goto LAB_005d8cdd;
        }
      }
      break;
    case 9:
      goto switchD_005d8f77_caseD_9;
    }
  }
  else {
    iVar7 = core_motion_cpp_CMotionController_FUN_0052dab0
                      (&(this_ptr->base_hero).base_character.model.motion_controller);
    if ((*(int *)(iVar7 + 0x24) != 0x1a) && (*(int *)(iVar7 + 0x24) != 0x1b)) {
      pCVar6 = &(this_ptr->base_hero).base_character;
      (pCVar6->model).field17_0x2254[8] = '\0';
      (pCVar6->model).field17_0x2254[9] = '\0';
      (pCVar6->model).field17_0x2254[10] = '\0';
      (pCVar6->model).field17_0x2254[0xb] = '\0';
      *(undefined4 *)((this_ptr->base_hero).base_character.model.field17_0x2254 + 4) =
           *(undefined4 *)((this_ptr->base_hero).base_character.model.field17_0x2254 + 8);
      *(undefined4 *)pcVar1 =
           *(undefined4 *)((this_ptr->base_hero).base_character.model.field17_0x2254 + 4);
    }
    uVar10 = *(uint *)((this_ptr->base_hero).base_character.field11_0x25a0 + 0x10);
    if (uVar10 < 2) {
      if (uVar10 != 1) goto LAB_005d8f37;
LAB_005d8cdc:
      iVar7 = 1;
    }
    else {
      if (uVar10 < 3) goto LAB_005d8cdc;
      if (uVar10 == 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base_hero).base_character.model.motion_controller,0,1);
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
        goto switchD_005d8f77_caseD_8;
      }
LAB_005d8f37:
      iVar7 = 1;
    }
LAB_005d8cdd:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(this_ptr->base_hero).base_character.model.motion_controller,iVar7,in_stack_ffffff94
              );
  }
switchD_005d8f77_caseD_8:
  pCVar3 = (this_ptr->base_hero).base_character.grabbed_by;
  if (pCVar3 == (CDemonActor *)0x0) {
    CStack_28.x = *(float *)(this_ptr->base_hero).base_character.model.field17_0x2254;
    CStack_28.y = *(float *)((this_ptr->base_hero).base_character.model.field17_0x2254 + 4);
    CStack_28.z = *(float *)((this_ptr->base_hero).base_character.model.field17_0x2254 + 8);
    iVar7 = core_motion_cpp_CMotionController_FUN_0052dab0
                      (&(this_ptr->base_hero).base_character.model.motion_controller);
    if (*(int *)(iVar7 + 0x24) != 0x1a) {
      *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x20) =
           *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x20) -
           in_stack_00000008 * (float)_DAT_00654a92;
    }
    in_stack_ffffffc8 =
         (CDeformableModel_MotionBlendWeightFunc *)
         (*(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x20) * in_stack_00000008
         + *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x14));
    CStack_28.y = CStack_28.y +
                  *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x1c) *
                  in_stack_00000008 +
                  *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x10);
    auStack_34._0_4_ =
         in_stack_00000008 * *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x24) +
         *(float *)((this_ptr->base_hero).base_character.field2_0x240c + 0x18);
    CStack_28.z = CStack_28.z + (float)in_stack_ffffffc8;
    afStack_1c[0] = afStack_1c[0] + (float)auStack_34._0_4_;
    iVar7 = core_motion_cpp_CMotionController_FUN_0052dab0
                      (&(this_ptr->base_hero).base_character.model.motion_controller);
    iVar7 = *(int *)(iVar7 + 0x24);
    if ((((iVar7 != 0x17) && (iVar7 != 0x18)) && (iVar7 != 0x19)) &&
       (((iVar7 != 0x25 && (iVar7 != 0x26)) && ((iVar7 != 0x27 && (iVar7 != 0x28)))))) {
      core_charactr_cpp_CCharacter_FUN_00428f40((CCharacter *)this_ptr);
    }
    iVar7 = core_motion_cpp_CMotionController_FUN_0052dab0
                      (&(this_ptr->base_hero).base_character.model.motion_controller);
    if (*(int *)(iVar7 + 0x24) == 0x1a) {
      (this_ptr->base_hero).base_character.base_actor.location.position.y =
           in_stack_00000008 * (float)_DAT_00654a9a +
           (this_ptr->base_hero).base_character.base_actor.location.position.y;
    }
    goto LAB_005d8e27;
  }
  if ((this_ptr->base_hero).base_character.grabbed_type == 0) {
    pCVar8 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,(CVector3f *)auStack_34,&(pCVar3->location).position
                       );
    pCVar8 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_28,pCVar8);
    fVar9 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar8->y);
    if (fVar9 < (float)_DAT_00654aa2) {
      fVar9 = fVar9 + _DAT_00654aaa;
    }
    if ((float)_DAT_00654ab2 < fVar9) {
      fVar9 = fVar9 + _DAT_00654aba;
    }
    fVar5 = in_stack_00000008 * (float)_DAT_00654ac2;
    if (fVar9 < -fVar5) {
      fVar9 = -fVar5;
    }
    if (fVar5 < fVar9) {
      fVar9 = fVar5;
    }
    (this_ptr->base_hero).base_character.base_actor.orient.bank =
         (this_ptr->base_hero).base_character.base_actor.orient.bank + fVar9;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10((CDemonActor *)this_ptr);
  }
  pCVar3 = (this_ptr->base_hero).base_character.grabbed_by;
  pCVar8 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&(this_ptr->base_hero).base_character.model,(CVector3f *)&stack0xfffffffc,0);
  fVar9 = (**(code **)(in_stack_00000014 + 0x124))(pCVar3,(float)this_ptr,pCVar8);
  if (fVar9 == 0.0) {
    (this_ptr->base_hero).base_character.grabbed_by = (CDemonActor *)0x0;
LAB_005d8e14:
    iVar7 = 0;
  }
  else {
    if ((this_ptr->base_hero).base_character.grabbed_by == (CDemonActor *)0x0) goto LAB_005d8e14;
    if (*(int *)((this_ptr->base_hero).field3_0xbe2c + 0xc) == 0) goto LAB_005d8e27;
    iVar7 = 0x10;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base_hero).base_character.model.motion_controller,iVar7,1);
LAB_005d8e27:
  core_charactr_cpp_CCharacter_FUN_00429820((CCharacter *)this_ptr);
  pCStack0000002c = &(this_ptr->base_hero).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(pCStack0000002c);
  iVar7 = (*(this_ptr->base_hero).base_character.base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)this_ptr,in_stack_ffffffb4);
  if (iVar7 == 0) {
    bone_index = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar9 = (float)DAT_03f6cb90;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(this_ptr->field1_0x1fbd4 + 0x7fcec),
               *(CVector3f **)(this_ptr->field1_0x1fbd4 + 0x7fcf8));
    auStack_34._0_4_ = CStack_28.z;
    *(float *)(auStack_34 + (uint)bVar12 * -8 + 4) = afStack_1c[(uint)bVar12 * -2];
    (&pCStack_2c)[(uint)bVar12 * -2 + (uint)bVar12 * -2] =
         (CDeformableModelInstance *)afStack_1c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    (&pCStack_2c + (uint)bVar12 * -2 + (uint)bVar12 * -2)[(uint)bVar12 * -2 + 1] =
         (CDeformableModelInstance *)
         (afStack_1c + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (in_stack_00000048,(CQuaternion4f *)(auStack_34 + 4),fVar9,(int)bone_index,
               in_stack_ffffffc8);
  }
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0((CCharacter *)this_ptr);
  pCVar2 = &(this_ptr->base_hero).base_character.model;
  auStack_34._0_4_ = *(undefined4 *)((this_ptr->base_hero).base_character.field2_0x240c + 8);
  pCStack00000058 = &(this_ptr->base_hero).base_character.base_actor.location;
  auStack_34._4_4_ = pCVar2;
  core_cloth_cpp_FUN_0043ab80();
  auStack_34._4_4_ = *(undefined4 *)((this_ptr->base_hero).base_character.field2_0x240c + 8);
  pCStack_2c = pCVar2;
  core_cloth_cpp_FUN_0043ab80();
  return;
}


// Assembly code:
// 005d8ba0: PUSH EBX
//   Label: core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0
// 005d8ba1: PUSH ESI
// 005d8ba2: PUSH EDI
// 005d8ba3: PUSH EBP
// 005d8ba4: MOV EBP,ESP
// 005d8ba6: SUB ESP,0x88
// 005d8bac: AND ESP,0xfffffff8
// 005d8baf: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d8bb2: FLD float ptr [EBX + 0x243c]
// 005d8bb8: FCOMP double ptr [0x00654a82]
//   XREF to: 00654a82 (READ)
// 005d8bbe: FNSTSW AX
// 005d8bc0: SAHF
// 005d8bc1: JNC 0x005d8be7
//   XREF to: 005d8be7 (CONDITIONAL_JUMP)
// 005d8bc3: FLD float ptr [EBX + 0x243c]
// 005d8bc9: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d8bcc: FST float ptr [EBX + 0x243c]
// 005d8bd2: FCOMP double ptr [0x00654a82]
//   XREF to: 00654a82 (READ)
// 005d8bd8: FNSTSW AX
// 005d8bda: SAHF
// 005d8bdb: JBE 0x005d8be7
//   XREF to: 005d8be7 (CONDITIONAL_JUMP)
// 005d8bdd: MOV dword ptr [EBX + 0x243c],0x42c80000
// 005d8be7: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005d8be7
//   XREF to: Stack[0x8] (READ)
// 005d8bea: PUSH EBX
// 005d8beb: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 005d8bf0: ADD ESP,0x8
// 005d8bf3: TEST EAX,EAX
// 005d8bf5: JZ 0x005d8c00
//   XREF to: 005d8c00 (CONDITIONAL_JUMP)
// 005d8bf7: CMP dword ptr [EBX + 0x1fbd0],0x4
// 005d8bfe: JNZ 0x005d8c07
//   XREF to: 005d8c07 (CONDITIONAL_JUMP)
// 005d8c00: MOV ESP,EBP
//   Label: caseD_9
// 005d8c02: POP EBP
// 005d8c03: POP EDI
// 005d8c04: POP ESI
// 005d8c05: POP EBX
// 005d8c06: RET
// 005d8c07: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005d8c07
//   XREF to: Stack[0x8] (READ)
// 005d8c0a: PUSH EBX
// 005d8c0b: CALL core_charactr.cpp_CCharacter_FUN_0042ea40
//   XREF to: 0042ea40 (UNCONDITIONAL_CALL)
// 005d8c10: ADD ESP,0x8
// 005d8c13: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d8c16: FLD float ptr [EBX + 0xbe24]
// 005d8c1c: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d8c1f: FXCH
// 005d8c21: FMUL double ptr [0x00654a8a]
//   XREF to: 00654a8a (READ)
// 005d8c27: FXCH
// 005d8c29: FST float ptr [EBX + 0xbe24]
// 005d8c2f: FXCH
// 005d8c31: FSTP float ptr [EBX + 0x2438]
// 005d8c37: FLDZ
// 005d8c39: FCOMPP
// 005d8c3b: FNSTSW AX
// 005d8c3d: SAHF
// 005d8c3e: JBE 0x005d8c4a
//   XREF to: 005d8c4a (CONDITIONAL_JUMP)
// 005d8c40: MOV dword ptr [EBX + 0xbe24],0x0
// 005d8c4a: LEA ESI,[EBX + 0x23ac]
//   Label: LAB_005d8c4a
// 005d8c50: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d8c53: MOV dword ptr [ESI + 0x8],0x0
// 005d8c5a: PUSH EBX
// 005d8c5b: MOV EAX,dword ptr [ESI + 0x8]
// 005d8c5e: MOV dword ptr [ESI + 0x4],EAX
// 005d8c61: MOV EAX,dword ptr [ESI + 0x4]
// 005d8c64: MOV dword ptr [ESI],EAX
// 005d8c66: CALL core_svetlana.cpp_MotionControllerAdvance_ParentBones_FUN_005d9970
//   XREF to: 005d9970 (UNCONDITIONAL_CALL)
// 005d8c6b: ADD ESP,0x8
// 005d8c6e: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d8c71: FLD float ptr [EBX + 0x23b4]
// 005d8c77: PUSH EBX
// 005d8c78: FSTP float ptr [EBX + 0x2434]
// 005d8c7e: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 005d8c83: ADD ESP,0x8
// 005d8c86: TEST EAX,EAX
// 005d8c88: JZ 0x005d8f47
//   XREF to: 005d8f47 (CONDITIONAL_JUMP)
// 005d8c8e: LEA EAX,[EBX + 0x158]
// 005d8c94: PUSH EAX
// 005d8c95: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005d8c9a: MOV EAX,dword ptr [EAX + 0x24]
// 005d8c9d: ADD ESP,0x4
// 005d8ca0: CMP EAX,0x1a
// 005d8ca3: JZ 0x005d8cbc
//   XREF to: 005d8cbc (CONDITIONAL_JUMP)
// 005d8ca5: CMP EAX,0x1b
// 005d8ca8: JZ 0x005d8cbc
//   XREF to: 005d8cbc (CONDITIONAL_JUMP)
// 005d8caa: MOV dword ptr [ESI + 0x8],0x0
// 005d8cb1: MOV EAX,dword ptr [ESI + 0x8]
// 005d8cb4: MOV dword ptr [ESI + 0x4],EAX
// 005d8cb7: MOV EAX,dword ptr [ESI + 0x4]
// 005d8cba: MOV dword ptr [ESI],EAX
// 005d8cbc: MOV EAX,dword ptr [EBX + 0x25b0]
//   Label: LAB_005d8cbc
// 005d8cc2: LEA ESI,[EBX + 0x158]
// 005d8cc8: CMP EAX,0x2
// 005d8ccb: JNC 0x005d8f30
//   XREF to: 005d8f30 (CONDITIONAL_JUMP)
// 005d8cd1: CMP EAX,0x1
// 005d8cd4: JNZ 0x005d8f37
//   XREF to: 005d8f37 (CONDITIONAL_JUMP)
// 005d8cda: PUSH EAX
// 005d8cdb: PUSH EAX
// 005d8cdc: PUSH ESI
//   Label: LAB_005d8cdc
// 005d8cdd: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_005d8cdd
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005d8ce2: ADD ESP,0xc
//   Label: LAB_005d8ce2
// 005d8ce5: MOV EAX,dword ptr [EBX + 0x2598]
//   Label: caseD_8
// 005d8ceb: TEST EAX,EAX
// 005d8ced: JZ 0x005d9116
//   XREF to: 005d9116 (CONDITIONAL_JUMP)
// 005d8cf3: CMP dword ptr [EBX + 0x259c],0x0
// 005d8cfa: JNZ 0x005d8dc3
//   XREF to: 005d8dc3 (CONDITIONAL_JUMP)
// 005d8d00: ADD EAX,0x20
// 005d8d03: PUSH EAX
// 005d8d04: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x68] (DATA)
// 005d8d08: PUSH EAX
// 005d8d09: PUSH EBX
// 005d8d0a: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 005d8d0f: ADD ESP,0xc
// 005d8d12: PUSH EAX
// 005d8d13: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x50] (DATA)
// 005d8d17: PUSH EAX
// 005d8d18: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 005d8d1d: ADD ESP,0x8
// 005d8d20: PUSH dword ptr [EAX + 0x4]
// 005d8d23: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 005d8d28: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005d8d2f: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x14] (READ)
// 005d8d36: ADD ESP,0x4
// 005d8d39: FST float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005d8d3c: FCOMP double ptr [0x00654aa2]
//   XREF to: 00654aa2 (READ)
// 005d8d42: FNSTSW AX
// 005d8d44: SAHF
// 005d8d45: JNC 0x005d8d53
//   XREF to: 005d8d53 (CONDITIONAL_JUMP)
// 005d8d47: FLD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005d8d4a: FADD float ptr [0x00654aaa]
//   XREF to: 00654aaa (READ)
// 005d8d50: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005d8d53: FLD float ptr [ESP]
//   Label: LAB_005d8d53
//   XREF to: Stack[-0x98] (DATA)
// 005d8d56: FCOMP double ptr [0x00654ab2]
//   XREF to: 00654ab2 (READ)
// 005d8d5c: FNSTSW AX
// 005d8d5e: SAHF
// 005d8d5f: JBE 0x005d8d6d
//   XREF to: 005d8d6d (CONDITIONAL_JUMP)
// 005d8d61: FLD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005d8d64: FADD float ptr [0x00654aba]
//   XREF to: 00654aba (READ)
// 005d8d6a: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005d8d6d: FLD float ptr [EBP + 0x18]
//   Label: LAB_005d8d6d
//   XREF to: Stack[0x8] (READ)
// 005d8d70: FMUL double ptr [0x00654ac2]
//   XREF to: 00654ac2 (READ)
// 005d8d76: FLD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005d8d79: FXCH
// 005d8d7b: FST float ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (WRITE)
// 005d8d82: FCHS
// 005d8d84: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (WRITE)
// 005d8d88: FCOMP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 005d8d8c: FNSTSW AX
// 005d8d8e: SAHF
// 005d8d8f: JNC 0x005d8d98
//   XREF to: 005d8d98 (CONDITIONAL_JUMP)
// 005d8d91: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 005d8d95: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x98] (DATA)
// 005d8d98: FLD float ptr [ESP]
//   Label: LAB_005d8d98
//   XREF to: Stack[-0x98] (DATA)
// 005d8d9b: FCOMP float ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (READ)
// 005d8da2: FNSTSW AX
// 005d8da4: SAHF
// 005d8da5: JBE 0x005d8db1
//   XREF to: 005d8db1 (CONDITIONAL_JUMP)
// 005d8da7: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (READ)
// 005d8dae: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x98] (DATA)
// 005d8db1: FLD float ptr [EBX + 0x34]
//   Label: LAB_005d8db1
// 005d8db4: FADD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 005d8db7: PUSH EBX
// 005d8db8: FSTP float ptr [EBX + 0x34]
// 005d8dbb: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 005d8dc0: ADD ESP,0x4
// 005d8dc3: MOV ESI,dword ptr [EBX + 0x2598]
//   Label: LAB_005d8dc3
// 005d8dc9: MOV EAX,dword ptr [ESI + 0x154]
// 005d8dcf: PUSH 0x0
// 005d8dd1: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005d8dd8: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x38] (DATA)
// 005d8ddc: PUSH EAX
// 005d8ddd: LEA EDI,[EBX + 0x158]
// 005d8de3: PUSH EDI
// 005d8de4: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005d8de9: ADD ESP,0xc
// 005d8dec: PUSH EAX
// 005d8ded: PUSH EBX
// 005d8dee: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 005d8df5: PUSH ESI
// 005d8df6: CALL dword ptr [EAX + 0x124]
// 005d8dfc: ADD ESP,0xc
// 005d8dff: TEST EAX,EAX
// 005d8e01: JZ 0x005d90f4
//   XREF to: 005d90f4 (CONDITIONAL_JUMP)
// 005d8e07: CMP dword ptr [EBX + 0x2598],0x0
// 005d8e0e: JNZ 0x005d90ff
//   XREF to: 005d90ff (CONDITIONAL_JUMP)
// 005d8e14: PUSH 0x1
//   Label: LAB_005d8e14
// 005d8e16: PUSH 0x0
// 005d8e18: LEA EAX,[EBX + 0x158]
// 005d8e1e: PUSH EAX
// 005d8e1f: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_005d8e1f
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005d8e24: ADD ESP,0xc
// 005d8e27: PUSH EBX
//   Label: LAB_005d8e27
// 005d8e28: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 005d8e2d: ADD ESP,0x4
// 005d8e30: LEA EAX,[EBX + 0x158]
// 005d8e36: PUSH EAX
// 005d8e37: MOV dword ptr [ESP + 0x80],EAX
// 005d8e3e: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 005d8e43: ADD ESP,0x4
// 005d8e46: MOV EAX,dword ptr [EBX + 0x154]
// 005d8e4c: PUSH EBX
// 005d8e4d: CALL dword ptr [EAX + 0x120]
// 005d8e53: ADD ESP,0x4
// 005d8e56: TEST EAX,EAX
// 005d8e58: JNZ 0x005d8ea0
//   XREF to: 005d8ea0 (CONDITIONAL_JUMP)
// 005d8e5a: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005d8e5f: MOV ESI,dword ptr [0x03f6cb90]
//   XREF to: 03f6cb90 (READ)
// 005d8e65: PUSH ESI
// 005d8e66: LEA EAX,[EBX + 0x9f8c0]
// 005d8e6c: PUSH dword ptr [EBX + 0x9f8cc]
// 005d8e72: PUSH EAX
// 005d8e73: LEA ESI,[ESP + 0x24]
// 005d8e77: LEA EDI,[ESP + 0x14]
// 005d8e7b: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 005d8e80: LEA ESI,[ESP + 0x24]
// 005d8e84: ADD ESP,0x4
// 005d8e87: LEA EAX,[ESP + 0x10]
// 005d8e8b: MOVSD ES:EDI,ESI
// 005d8e8c: MOVSD ES:EDI,ESI
// 005d8e8d: MOVSD ES:EDI,ESI
// 005d8e8e: MOVSD ES:EDI,ESI
// 005d8e8f: PUSH EAX
// 005d8e90: MOV EDI,dword ptr [ESP + 0x8c]
// 005d8e97: PUSH EDI
// 005d8e98: CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   XREF to: 0059f750 (UNCONDITIONAL_CALL)
// 005d8e9d: ADD ESP,0x14
// 005d8ea0: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_005d8ea0
//   XREF to: Stack[0x8] (READ)
// 005d8ea3: PUSH EBX
// 005d8ea4: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 005d8ea9: ADD ESP,0x8
// 005d8eac: LEA ESI,[EBX + 0x158]
// 005d8eb2: PUSH ESI
// 005d8eb3: PUSH dword ptr [EBX + 0x2414]
// 005d8eb9: LEA EDI,[EBX + 0x30]
// 005d8ebc: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d8ebf: PUSH EDI
// 005d8ec0: LEA EAX,[EBX + 0x20]
// 005d8ec3: PUSH EAX
// 005d8ec4: MOV dword ptr [ESP + 0x98],EAX
// 005d8ecb: LEA EAX,[EBX + 0x1fbdc]
// 005d8ed1: PUSH EAX
// 005d8ed2: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 005d8ed7: ADD ESP,0x18
// 005d8eda: PUSH ESI
// 005d8edb: PUSH dword ptr [EBX + 0x2414]
// 005d8ee1: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d8ee4: PUSH EDI
// 005d8ee5: MOV EDX,dword ptr [ESP + 0x94]
// 005d8eec: PUSH EDX
// 005d8eed: ADD EBX,0x5fa4c
// 005d8ef3: PUSH EBX
// 005d8ef4: CALL core_cloth.cpp_FUN_0043ab80
//   XREF to: 0043ab80 (UNCONDITIONAL_CALL)
// 005d8ef9: ADD ESP,0x18
// 005d8efc: MOV ESP,EBP
// 005d8efe: POP EBP
// 005d8eff: POP EDI
// 005d8f00: POP ESI
// 005d8f01: POP EBX
// 005d8f02: RET
// 005d8f03: PUSH 0x1
//   Label: LAB_005d8f03
// 005d8f05: PUSH 0x0
// 005d8f07: PUSH ESI
// 005d8f08: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005d8f0d: ADD ESP,0xc
// 005d8f10: PUSH EBX
// 005d8f11: PUSH 0x654a51
//   XREF to: 00654a51 (DATA)
// 005d8f16: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005d8f1c: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 005d8f1d: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005d8f22: JMP 0x005d8ce2
//   XREF to: 005d8ce2 (UNCONDITIONAL_JUMP)
// 005d8f27: PUSH 0x1
//   Label: LAB_005d8f27
// 005d8f29: PUSH 0x2
// 005d8f2b: JMP 0x005d8cdc
//   XREF to: 005d8cdc (UNCONDITIONAL_JUMP)
// 005d8f30: JBE 0x005d8f27
//   Label: LAB_005d8f30
//   XREF to: 005d8f27 (CONDITIONAL_JUMP)
// 005d8f32: CMP EAX,0x3
// 005d8f35: JZ 0x005d8f03
//   XREF to: 005d8f03 (CONDITIONAL_JUMP)
// 005d8f37: PUSH 0x1
//   Label: LAB_005d8f37
// 005d8f39: PUSH 0x0
// 005d8f3b: LEA EAX,[EBX + 0x158]
// 005d8f41: PUSH EAX
// 005d8f42: JMP 0x005d8cdd
//   XREF to: 005d8cdd (UNCONDITIONAL_JUMP)
// 005d8f47: CMP dword ptr [EBX + 0xbe28],0x2
//   Label: LAB_005d8f47
// 005d8f4e: JNZ 0x005d8f5c
//   XREF to: 005d8f5c (CONDITIONAL_JUMP)
// 005d8f50: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d8f53: PUSH EBX
// 005d8f54: CALL core_svetlana.cpp_FUN_005d9260
//   XREF to: 005d9260 (UNCONDITIONAL_CALL)
// 005d8f59: ADD ESP,0x8
// 005d8f5c: LEA EAX,[EBX + 0x158]
//   Label: LAB_005d8f5c
// 005d8f62: PUSH EAX
// 005d8f63: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005d8f68: MOV EAX,dword ptr [EAX + 0x24]
// 005d8f6b: ADD ESP,0x4
// 005d8f6e: CMP EAX,0xa
// 005d8f71: JA 0x005d8ce5
//   XREF to: 005d8ce5 (CONDITIONAL_JUMP)
// 005d8f77: JMP dword ptr [EAX*0x4 + 0x5d8b6c]
//   Label: switchD
//   XREF to: 005d8c00 (COMPUTED_JUMP)
//   XREF to: 005d8ce5 (COMPUTED_JUMP)
//   XREF to: 005d8f7e (COMPUTED_JUMP)
//   XREF to: 005d8b6c (DATA)
// 005d8f7e: CMP dword ptr [EBX + 0x2410],0x0
//   Label: caseD_a
// 005d8f85: JZ 0x005d8ce5
//   XREF to: 005d8ce5 (CONDITIONAL_JUMP)
// 005d8f8b: MOV EDI,dword ptr [EBX + 0x1fbd4]
// 005d8f91: XOR ESI,ESI
// 005d8f93: TEST EDI,EDI
// 005d8f95: JZ 0x005d8f9c
//   XREF to: 005d8f9c (CONDITIONAL_JUMP)
// 005d8f97: MOV ESI,0xa
// 005d8f9c: CMP dword ptr [EBX + 0xbe2c],0x0
//   Label: LAB_005d8f9c
// 005d8fa3: JZ 0x005d8fb7
//   XREF to: 005d8fb7 (CONDITIONAL_JUMP)
// 005d8fa5: CMP dword ptr [EBX + 0xbe34],0x0
// 005d8fac: JZ 0x005d9067
//   XREF to: 005d9067 (CONDITIONAL_JUMP)
// 005d8fb2: MOV ESI,0x2
// 005d8fb7: CMP dword ptr [EBX + 0xbe30],0x0
//   Label: LAB_005d8fb7
// 005d8fbe: JZ 0x005d8fc5
//   XREF to: 005d8fc5 (CONDITIONAL_JUMP)
// 005d8fc0: MOV ESI,0x3
// 005d8fc5: CMP dword ptr [EBX + 0xbe44],0x0
//   Label: LAB_005d8fc5
// 005d8fcc: JZ 0x005d8ff9
//   XREF to: 005d8ff9 (CONDITIONAL_JUMP)
// 005d8fce: MOV EDX,dword ptr [EBX + 0x1fbd4]
// 005d8fd4: MOV dword ptr [EBX + 0xbe44],0x0
// 005d8fde: TEST EDX,EDX
// 005d8fe0: SETZ AL
// 005d8fe3: AND EAX,0xff
// 005d8fe8: MOV dword ptr [EBX + 0x1fbd4],EAX
// 005d8fee: JZ 0x005d9071
//   XREF to: 005d9071 (CONDITIONAL_JUMP)
// 005d8ff4: MOV ESI,0xa
// 005d8ff9: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_005d8ff9
// 005d9000: JZ 0x005d9032
//   XREF to: 005d9032 (CONDITIONAL_JUMP)
// 005d9002: MOV EAX,dword ptr [EBX + 0x1fbd4]
// 005d9008: MOV EDI,0x1
// 005d900d: TEST EAX,EAX
// 005d900f: JZ 0x005d9075
//   XREF to: 005d9075 (CONDITIONAL_JUMP)
// 005d9011: TEST EDI,EDI
//   Label: LAB_005d9011
// 005d9013: JZ 0x005d9032
//   XREF to: 005d9032 (CONDITIONAL_JUMP)
// 005d9015: MOV ESI,dword ptr [EBX + 0x1fbd8]
//   Label: LAB_005d9015
// 005d901b: MOV dword ptr [EBX + 0xbe38],0x0
// 005d9025: TEST ESI,ESI
// 005d9027: JZ 0x005d90ea
//   XREF to: 005d90ea (CONDITIONAL_JUMP)
// 005d902d: MOV ESI,0xe
// 005d9032: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_005d9032
// 005d9038: LEA EDI,[EBX + 0x158]
// 005d903e: FMUL float ptr [EBX + 0x2438]
// 005d9044: PUSH EDI
// 005d9045: FSTP float ptr [EBX + 0x2418]
// 005d904b: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005d9050: MOV EAX,dword ptr [EAX + 0x24]
// 005d9053: ADD ESP,0x4
// 005d9056: CMP ESI,EAX
// 005d9058: JZ 0x005d8ce5
//   XREF to: 005d8ce5 (CONDITIONAL_JUMP)
// 005d905e: PUSH 0x1
// 005d9060: PUSH ESI
// 005d9061: PUSH EDI
// 005d9062: JMP 0x005d8cdd
//   XREF to: 005d8cdd (UNCONDITIONAL_JUMP)
// 005d9067: MOV ESI,0x1
//   Label: LAB_005d9067
// 005d906c: JMP 0x005d8fb7
//   XREF to: 005d8fb7 (UNCONDITIONAL_JUMP)
// 005d9071: XOR ESI,ESI
//   Label: LAB_005d9071
// 005d9073: JMP 0x005d8ff9
//   XREF to: 005d8ff9 (UNCONDITIONAL_JUMP)
// 005d9075: CMP dword ptr [EBX + 0xbe28],0x2
//   Label: LAB_005d9075
// 005d907c: JZ 0x005d9011
//   XREF to: 005d9011 (CONDITIONAL_JUMP)
// 005d907e: PUSH EBX
// 005d907f: CALL core_hero.cpp_FUN_004f2af0
//   XREF to: 004f2af0 (UNCONDITIONAL_CALL)
// 005d9084: XOR EDI,EDI
// 005d9086: ADD ESP,0x4
// 005d9089: TEST EAX,EAX
// 005d908b: JNZ 0x005d9011
//   XREF to: 005d9011 (CONDITIONAL_JUMP)
// 005d908d: PUSH EBX
// 005d908e: CALL core_hero.cpp_FUN_004f2d70
//   XREF to: 004f2d70 (UNCONDITIONAL_CALL)
// 005d9093: ADD ESP,0x4
// 005d9096: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005d909a: TEST EAX,EAX
// 005d909c: JBE 0x005d90a3
//   XREF to: 005d90a3 (CONDITIONAL_JUMP)
// 005d909e: CMP EAX,0x1
// 005d90a1: JNZ 0x005d90d1
//   XREF to: 005d90d1 (CONDITIONAL_JUMP)
// 005d90a3: CMP dword ptr [ESP + 0x74],0x0
//   Label: LAB_005d90a3
//   XREF to: Stack[-0x24] (READ)
// 005d90a8: JNZ 0x005d9011
//   XREF to: 005d9011 (CONDITIONAL_JUMP)
// 005d90ae: PUSH EBX
// 005d90af: CALL core_hero.cpp_FUN_004f2c40
//   XREF to: 004f2c40 (UNCONDITIONAL_CALL)
// 005d90b4: ADD ESP,0x4
// 005d90b7: TEST EAX,EAX
// 005d90b9: JNZ 0x005d9011
//   XREF to: 005d9011 (CONDITIONAL_JUMP)
// 005d90bf: PUSH EBX
// 005d90c0: CALL core_hero.cpp_FUN_004f2f50
//   XREF to: 004f2f50 (UNCONDITIONAL_CALL)
// 005d90c5: ADD ESP,0x4
// 005d90c8: TEST EAX,EAX
// 005d90ca: JNZ 0x005d90dc
//   XREF to: 005d90dc (CONDITIONAL_JUMP)
// 005d90cc: JMP 0x005d9015
//   XREF to: 005d9015 (UNCONDITIONAL_JUMP)
// 005d90d1: PUSH EBX
//   Label: LAB_005d90d1
// 005d90d2: CALL core_hero.cpp_FUN_004f2ed0
//   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)
// 005d90d7: ADD ESP,0x4
// 005d90da: JMP 0x005d90a3
//   XREF to: 005d90a3 (UNCONDITIONAL_JUMP)
// 005d90dc: PUSH EBX
//   Label: LAB_005d90dc
// 005d90dd: CALL core_hero.cpp_FUN_004f30f0
//   XREF to: 004f30f0 (UNCONDITIONAL_CALL)
// 005d90e2: ADD ESP,0x4
// 005d90e5: JMP 0x005d9011
//   XREF to: 005d9011 (UNCONDITIONAL_JUMP)
// 005d90ea: MOV ESI,0xf
//   Label: LAB_005d90ea
// 005d90ef: JMP 0x005d9032
//   XREF to: 005d9032 (UNCONDITIONAL_JUMP)
// 005d90f4: MOV dword ptr [EBX + 0x2598],EAX
//   Label: LAB_005d90f4
// 005d90fa: JMP 0x005d8e14
//   XREF to: 005d8e14 (UNCONDITIONAL_JUMP)
// 005d90ff: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_005d90ff
// 005d9106: JZ 0x005d8e27
//   XREF to: 005d8e27 (CONDITIONAL_JUMP)
// 005d910c: PUSH 0x1
// 005d910e: PUSH 0x10
// 005d9110: PUSH EDI
// 005d9111: JMP 0x005d8e1f
//   XREF to: 005d8e1f (UNCONDITIONAL_JUMP)
// 005d9116: MOV dword ptr [ESP + 0x3c],EAX
//   Label: LAB_005d9116
//   XREF to: Stack[-0x5c] (WRITE)
// 005d911a: LEA ESI,[EBX + 0x23ac]
// 005d9120: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005d9124: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005d9128: MOV EAX,dword ptr [ESI]
// 005d912a: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005d912e: MOV EAX,dword ptr [ESI + 0x4]
// 005d9131: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005d9135: MOV EAX,dword ptr [ESI + 0x8]
// 005d9138: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 005d913c: LEA EAX,[EBX + 0x158]
// 005d9142: PUSH EAX
// 005d9143: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005d9148: MOV EAX,dword ptr [EAX + 0x24]
// 005d914b: ADD ESP,0x4
// 005d914e: CMP EAX,0x1a
// 005d9151: JZ 0x005d9168
//   XREF to: 005d9168 (CONDITIONAL_JUMP)
// 005d9153: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d9156: FMUL double ptr [0x00654a92]
//   XREF to: 00654a92 (READ)
// 005d915c: FSUBR float ptr [EBX + 0x242c]
// 005d9162: FSTP float ptr [EBX + 0x242c]
// 005d9168: LEA ESI,[EBX + 0x2428]
//   Label: LAB_005d9168
// 005d916e: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d9171: FLD float ptr [ESI]
// 005d9173: FMUL ST1
// 005d9175: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x44] (WRITE)
// 005d9179: FLD float ptr [ESI + 0x4]
// 005d917c: FMUL ST1
// 005d917e: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x40] (WRITE)
// 005d9182: FMUL float ptr [ESI + 0x8]
// 005d9185: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x5c] (READ)
// 005d9189: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (READ)
// 005d918d: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x54] (READ)
// 005d9191: LEA EAX,[EBX + 0x241c]
// 005d9197: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x44] (READ)
// 005d919b: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x40] (READ)
// 005d919f: FXCH ST5
// 005d91a1: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x3c] (WRITE)
// 005d91a5: FADD float ptr [EAX]
// 005d91a7: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x3c] (READ)
// 005d91ab: FXCH
// 005d91ad: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x74] (WRITE)
// 005d91b1: FXCH ST4
// 005d91b3: FADD float ptr [EAX + 0x4]
// 005d91b6: FXCH ST3
// 005d91b8: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x74] (READ)
// 005d91bc: FXCH ST3
// 005d91be: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x70] (WRITE)
// 005d91c2: FXCH ST3
// 005d91c4: FADD float ptr [EAX + 0x8]
// 005d91c7: FXCH
// 005d91c9: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x70] (READ)
// 005d91cd: FXCH
// 005d91cf: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x6c] (WRITE)
// 005d91d3: FXCH
// 005d91d5: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x5c] (WRITE)
// 005d91d9: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x58] (WRITE)
// 005d91dd: LEA EAX,[EBX + 0x158]
// 005d91e3: FADD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x6c] (READ)
// 005d91e7: PUSH EAX
// 005d91e8: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x54] (WRITE)
// 005d91ec: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005d91f1: MOV EAX,dword ptr [EAX + 0x24]
// 005d91f4: ADD ESP,0x4
// 005d91f7: CMP EAX,0x17
// 005d91fa: JZ 0x005d9228
//   XREF to: 005d9228 (CONDITIONAL_JUMP)
// 005d91fc: CMP EAX,0x18
// 005d91ff: JZ 0x005d9228
//   XREF to: 005d9228 (CONDITIONAL_JUMP)
// 005d9201: CMP EAX,0x19
// 005d9204: JZ 0x005d9228
//   XREF to: 005d9228 (CONDITIONAL_JUMP)
// 005d9206: CMP EAX,0x25
// 005d9209: JZ 0x005d9228
//   XREF to: 005d9228 (CONDITIONAL_JUMP)
// 005d920b: CMP EAX,0x26
// 005d920e: JZ 0x005d9228
//   XREF to: 005d9228 (CONDITIONAL_JUMP)
// 005d9210: CMP EAX,0x27
// 005d9213: JZ 0x005d9228
//   XREF to: 005d9228 (CONDITIONAL_JUMP)
// 005d9215: CMP EAX,0x28
// 005d9218: JZ 0x005d9228
//   XREF to: 005d9228 (CONDITIONAL_JUMP)
// 005d921a: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x5c] (DATA)
// 005d921e: PUSH EAX
// 005d921f: PUSH EBX
// 005d9220: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 005d9225: ADD ESP,0x8
// 005d9228: LEA EAX,[EBX + 0x158]
//   Label: LAB_005d9228
// 005d922e: PUSH EAX
// 005d922f: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005d9234: MOV EAX,dword ptr [EAX + 0x24]
// 005d9237: ADD ESP,0x4
// 005d923a: CMP EAX,0x1a
// 005d923d: JNZ 0x005d8e27
//   XREF to: 005d8e27 (CONDITIONAL_JUMP)
// 005d9243: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d9246: FMUL double ptr [0x00654a9a]
//   XREF to: 00654a9a (READ)
// 005d924c: FADD float ptr [EBX + 0x24]
// 005d924f: FSTP float ptr [EBX + 0x24]
// 005d9252: JMP 0x005d8e27
//   XREF to: 005d8e27 (UNCONDITIONAL_JUMP)
