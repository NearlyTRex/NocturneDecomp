// Name: core_colonel.cpp_FUN_0043fa00
// Address: 0043fa00
// Address Range: [[0043fa00, 0043ff16]]
// Convention: unknown
// Signature: undefined core_colonel.cpp_FUN_0043fa00()
// Globals:
//   void* switchdataD_0043f9e4 = 0043fce4
//   TerminatedCString s_s_confused_while_walking_00618c8c
//   double DOUBLE_00618cb9 = 12.5663706140000
//   double DOUBLE_00618cc1 = 32
//   double DOUBLE_00618cc9 = -1.57079632675000
//   double DOUBLE_00618cd1 = 5.32864626443882E-315
//   double DOUBLE_00618cd9 = 1.57079632675000
//   float FLOAT_00618ce1 = -3.141593
//   double DOUBLE_00618ce9 = 3.14159265350000
//   CConsole* g_CConsolePtr = 0083b1a4
//   undefined4 DAT_0083b124
//   CConsole g_ConsolePtr
// Function calls:
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_colonel.cpp_FUN_0043ff20
//   core_colonel.cpp_FUN_00440430
//   core_hero.cpp_FUN_004f2af0
//   core_hero.cpp_FUN_004f2c40
//   core_hero.cpp_FUN_004f2d70
//   core_hero.cpp_FUN_004f2ed0
//   core_hero.cpp_FUN_004f2f50
//   core_hero.cpp_FUN_004f30f0
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_hero_colonel.cpp_FUN_0043fa00(undefined4 param_1, undefined4
   param_2) */

void core_colonel_cpp_FUN_0043fa00(void)

{
  CDeformableModelInstance *this_ptr;
  uint uVar1;
  CDemonActor *this_ptr_00;
  bool bVar2;
  float fVar3;
  CCharacter *pCVar4;
  int iVar5;
  CVector3f *pCVar6;
  float fVar7;
  int iVar8;
  SMotion *pSVar9;
  BADSPACEBASE *in_ESP;
  byte bVar10;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CDeformableModelInstance *in_stack_00000020;
  float afStackY_1838 [1508];
  CCharacter *this_ptr_01;
  CCharacter *desired_state_index;
  CDeformableModelInstance *this_ptr_02;
  SCollisionInfo *in_stack_ffffff88;
  CQuaternion4f *source_quaternions;
  code *bone_index;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffff9c;
  CVector3f local_60;
  float afStack_54 [2];
  undefined1 local_4c [8];
  float local_44 [2];
  CVector3f aCStack_3c [2];
  float local_24;
  float local_20;
  float local_1c;
  int iStack_18;
  
  bVar10 = 0;
  iVar5 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar5 == 0) {
    return;
  }
  fVar7 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar7;
  if (fVar7 < 0.0) {
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  core_colonel_cpp_FUN_00440430();
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 2) {
    core_colonel_cpp_FUN_0043ff20();
  }
  fVar7 = (float)DOUBLE_00618cb9;
  *(float *)(in_stack_00000004->field2_0x240c + 0x28) =
       (in_stack_00000004->model).accumulated_root_motion.z;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar7;
  this_ptr_01 = in_stack_00000004;
  iVar5 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  this_ptr = &in_stack_00000004->model;
  if (iVar5 == 0) {
    desired_state_index = (CCharacter *)0x43fe28;
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    switch(pSVar9->state_index) {
    case 0:
    case 1:
    case 2:
    case 3:
      if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
        iVar5 = 0;
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) != 0) {
          if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = 2;
          }
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) != 0) {
          iVar5 = 3;
        }
        if (in_stack_00000004[1].base_actor.location.position.x != 0.0) {
          iVar8 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f4);
          in_stack_00000004[1].base_actor.location.position.x = 0.0;
          iVar5 = 0;
          *(uint *)(in_stack_00000004[2].cloth_data + 0x54f4) = (uint)(iVar8 == 0);
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
          bVar2 = true;
          if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) &&
             (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) != 2)) {
            iVar8 = core_hero_cpp_FUN_004f2af0();
            bVar2 = false;
            if (iVar8 != 0) goto LAB_0043fd60;
            local_1c = (float)core_hero_cpp_FUN_004f2d70();
            if ((local_1c != 0.0) && (local_1c != 1.4013e-45)) {
              this_ptr_01 = in_stack_00000004;
              core_hero_cpp_FUN_004f2ed0();
            }
            if (iStack_18 != 0) goto LAB_0043fd60;
            this_ptr_01 = (CCharacter *)0x43fdec;
            desired_state_index = in_stack_00000004;
            iVar8 = core_hero_cpp_FUN_004f2c40();
            if (iVar8 != 0) goto LAB_0043fd60;
            desired_state_index = (CCharacter *)0x43fdfd;
            iVar8 = core_hero_cpp_FUN_004f2f50();
            if (iVar8 != 0) {
              core_hero_cpp_FUN_004f30f0();
              goto LAB_0043fd60;
            }
          }
          else {
LAB_0043fd60:
            if (!bVar2) goto LAB_0043fd6e;
          }
          pCVar4 = in_stack_00000004 + 1;
          (pCVar4->base_actor).actor_name[0x14] = '\0';
          (pCVar4->base_actor).actor_name[0x15] = '\0';
          (pCVar4->base_actor).actor_name[0x16] = '\0';
          (pCVar4->base_actor).actor_name[0x17] = '\0';
        }
LAB_0043fd6e:
        this_ptr_02 = &in_stack_00000004->model;
        *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
             (float)in_stack_00000004[1].base_actor.location.area_id *
             *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
        pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&this_ptr_02->motion_controller);
        if (iVar5 != pSVar9->state_index) goto LAB_0043fad3;
      }
      break;
    case 6:
      goto switchD_0043fe37_caseD_6;
    }
  }
  else {
    uVar1 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
        desired_state_index = (CCharacter *)&DAT_00000001;
        goto LAB_0043fad2;
      }
LAB_0043fcd4:
      this_ptr_02 = (CDeformableModelInstance *)&DAT_00000001;
      desired_state_index = (CCharacter *)0x0;
      this_ptr_01 = (CCharacter *)&in_stack_00000004->model;
    }
    else {
      if (2 < uVar1) {
        if (uVar1 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&this_ptr->motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
          goto switchD_0043fe37_caseD_5;
        }
        goto LAB_0043fcd4;
      }
      desired_state_index = (CCharacter *)&DAT_00000002;
LAB_0043fad2:
      this_ptr_02 = (CDeformableModelInstance *)&DAT_00000001;
      this_ptr_01 = (CCharacter *)this_ptr;
    }
LAB_0043fad3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)this_ptr_01,(int)desired_state_index,(int)this_ptr_02);
  }
switchD_0043fe37_caseD_5:
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)DOUBLE_00618cc1;
    local_24 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_20 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_1c = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    pCVar6 = &(in_stack_00000004->model).accumulated_root_motion;
    aCStack_3c[0].x = pCVar6->x + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    aCStack_3c[0].y =
         (in_stack_00000004->model).accumulated_root_motion.y +
         *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    afStack_54[0] = aCStack_3c[0].x + local_24;
    aCStack_3c[0].z =
         (in_stack_00000004->model).accumulated_root_motion.z +
         *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    afStack_54[1] = aCStack_3c[0].y + local_20;
    local_4c._0_4_ = aCStack_3c[0].z + local_1c;
    (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
    (in_stack_00000004->model).accumulated_root_motion.y =
         (in_stack_00000004->model).accumulated_root_motion.z;
    pCVar6->x = (in_stack_00000004->model).accumulated_root_motion.y;
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(float *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
  }
  else {
    if (in_stack_00000004->grabbed_type == 0) {
      pCVar6 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&in_stack_00000004->base_actor,(CVector3f *)(local_4c + 4),
                          &(in_stack_00000004->grabbed_by->location).position);
      pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(aCStack_3c,pCVar6);
      fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar6->y);
      if (fVar7 < (float)DOUBLE_00618cc9) {
        fVar7 = fVar7 + DOUBLE_00618cd1._0_4_;
      }
      if ((float)DOUBLE_00618cd9 < fVar7) {
        fVar7 = fVar7 + FLOAT_00618ce1;
      }
      fVar3 = in_stack_00000008 * (float)DOUBLE_00618ce9;
      if (fVar7 < -fVar3) {
        fVar7 = -fVar3;
      }
      if (fVar3 < fVar7) {
        fVar7 = fVar3;
      }
      (in_stack_00000004->base_actor).orient.bank =
           (in_stack_00000004->base_actor).orient.bank + fVar7;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (&in_stack_00000004->base_actor);
    }
    this_ptr_00 = in_stack_00000004->grabbed_by;
    pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&in_stack_00000004->model,&local_60,0);
    fVar7 = (**(code **)(iStack_18 + 0x124))(this_ptr_00,(float)in_stack_00000004,pCVar6);
    if (fVar7 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_0043fc01:
      iVar5 = 0;
    }
    else {
      if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_0043fc01;
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) goto LAB_0043fc14;
      iVar5 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar5,1);
  }
LAB_0043fc14:
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  iVar5 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                    (&in_stack_00000004->base_actor,in_stack_ffffff88);
  if (iVar5 == 0) {
    bone_index = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    fVar7 = (float)DAT_0083b124;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(in_stack_00000004[2].cloth_data + 0x54fc),
               *(CVector3f **)(in_stack_00000004[2].cloth_data + 0x5508));
    source_quaternions = (CQuaternion4f *)local_4c;
    local_4c._0_4_ = local_60.y;
    *(float *)(local_4c + (uint)bVar10 * -8 + 4) = afStack_54[(uint)bVar10 * -2 + -1];
    local_44[(uint)bVar10 * -2 + (uint)bVar10 * -2] =
         afStack_54[(uint)bVar10 * -2 + (uint)bVar10 * -2];
    (local_44 + (uint)bVar10 * -2 + (uint)bVar10 * -2)[(uint)bVar10 * -2 + 1] =
         (afStack_54 + (uint)bVar10 * -2 + (uint)bVar10 * -2)[(uint)bVar10 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (in_stack_00000020,source_quaternions,fVar7,(int)bone_index,in_stack_ffffff9c);
  }
  local_60.x = in_stack_00000008;
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
switchD_0043fe37_caseD_6:
  return;
}


// Assembly code:
// 0043fa00: PUSH EBX
//   Label: core_colonel.cpp_FUN_0043fa00
// 0043fa01: PUSH ESI
// 0043fa02: PUSH EDI
// 0043fa03: PUSH EBP
// 0043fa04: MOV EBP,ESP
// 0043fa06: SUB ESP,0x88
// 0043fa0c: AND ESP,0xfffffff8
// 0043fa0f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043fa12: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043fa15: PUSH EBX
// 0043fa16: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 0043fa1b: ADD ESP,0x8
// 0043fa1e: TEST EAX,EAX
// 0043fa20: JZ 0x0043fc99
//   XREF to: 0043fc99 (CONDITIONAL_JUMP)
// 0043fa26: FLD float ptr [EBX + 0xbe24]
// 0043fa2c: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043fa2f: FST float ptr [EBX + 0xbe24]
// 0043fa35: FLDZ
// 0043fa37: FCOMPP
// 0043fa39: FNSTSW AX
// 0043fa3b: SAHF
// 0043fa3c: JBE 0x0043fa48
//   XREF to: 0043fa48 (CONDITIONAL_JUMP)
// 0043fa3e: MOV dword ptr [EBX + 0xbe24],0x0
// 0043fa48: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_0043fa48
// 0043fa4e: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043fa51: MOV dword ptr [EAX + 0x8],0x0
// 0043fa58: PUSH EBX
// 0043fa59: MOV EDX,dword ptr [EAX + 0x8]
// 0043fa5c: MOV dword ptr [EAX + 0x4],EDX
// 0043fa5f: MOV EDX,dword ptr [EAX + 0x4]
// 0043fa62: MOV dword ptr [EAX],EDX
// 0043fa64: CALL core_colonel.cpp_FUN_00440430
//   XREF to: 00440430 (UNCONDITIONAL_CALL)
// 0043fa69: MOV EDX,dword ptr [EBX + 0xbe28]
// 0043fa6f: ADD ESP,0x8
// 0043fa72: CMP EDX,0x2
// 0043fa75: JNZ 0x0043fa83
//   XREF to: 0043fa83 (CONDITIONAL_JUMP)
// 0043fa77: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043fa7a: PUSH EBX
// 0043fa7b: CALL core_colonel.cpp_FUN_0043ff20
//   XREF to: 0043ff20 (UNCONDITIONAL_CALL)
// 0043fa80: ADD ESP,0x8
// 0043fa83: FLD float ptr [EBP + 0x18]
//   Label: LAB_0043fa83
//   XREF to: Stack[0x8] (READ)
// 0043fa86: FMUL double ptr [0x00618cb9]
//   XREF to: 00618cb9 (READ)
// 0043fa8c: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043fa8f: MOV EAX,dword ptr [EBX + 0x23b4]
// 0043fa95: MOV dword ptr [EBX + 0x2434],EAX
// 0043fa9b: PUSH EBX
// 0043fa9c: FSTP float ptr [EBX + 0x2438]
// 0043faa2: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 0043faa7: LEA ESI,[EBX + 0x158]
// 0043faad: ADD ESP,0x8
// 0043fab0: TEST EAX,EAX
// 0043fab2: JZ 0x0043fe22
//   XREF to: 0043fe22 (CONDITIONAL_JUMP)
// 0043fab8: MOV EAX,dword ptr [EBX + 0x25b0]
// 0043fabe: CMP EAX,0x2
// 0043fac1: JNC 0x0043fccd
//   XREF to: 0043fccd (CONDITIONAL_JUMP)
// 0043fac7: CMP EAX,0x1
// 0043faca: JNZ 0x0043fcd4
//   XREF to: 0043fcd4 (CONDITIONAL_JUMP)
// 0043fad0: PUSH EAX
// 0043fad1: PUSH EAX
// 0043fad2: PUSH ESI
//   Label: LAB_0043fad2
// 0043fad3: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_0043fad3
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0043fad8: ADD ESP,0xc
//   Label: LAB_0043fad8
// 0043fadb: MOV EDI,dword ptr [EBX + 0x2598]
//   Label: caseD_5
// 0043fae1: TEST EDI,EDI
// 0043fae3: JZ 0x0043fe60
//   XREF to: 0043fe60 (CONDITIONAL_JUMP)
// 0043fae9: CMP dword ptr [EBX + 0x259c],0x0
// 0043faf0: JNZ 0x0043fbb0
//   XREF to: 0043fbb0 (CONDITIONAL_JUMP)
// 0043faf6: LEA EAX,[EDI + 0x20]
// 0043faf9: PUSH EAX
// 0043fafa: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x5c] (DATA)
// 0043fafe: PUSH EAX
// 0043faff: PUSH EBX
// 0043fb00: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0043fb05: ADD ESP,0xc
// 0043fb08: PUSH EAX
// 0043fb09: LEA EAX,[ESP + 0x58]
//   XREF to: Stack[-0x44] (DATA)
// 0043fb0d: PUSH EAX
// 0043fb0e: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0043fb13: ADD ESP,0x8
// 0043fb16: PUSH dword ptr [EAX + 0x4]
// 0043fb19: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0043fb1e: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0043fb25: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0x14] (READ)
// 0043fb2c: ADD ESP,0x4
// 0043fb2f: FST float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 0043fb32: FCOMP double ptr [0x00618cc9]
//   XREF to: 00618cc9 (READ)
// 0043fb38: FNSTSW AX
// 0043fb3a: SAHF
// 0043fb3b: JNC 0x0043fb49
//   XREF to: 0043fb49 (CONDITIONAL_JUMP)
// 0043fb3d: FLD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 0043fb40: FADD float ptr [0x00618cd1]
//   XREF to: 00618cd1 (READ)
// 0043fb46: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 0043fb49: FLD float ptr [ESP]
//   Label: LAB_0043fb49
//   XREF to: Stack[-0x98] (DATA)
// 0043fb4c: FCOMP double ptr [0x00618cd9]
//   XREF to: 00618cd9 (READ)
// 0043fb52: FNSTSW AX
// 0043fb54: SAHF
// 0043fb55: JBE 0x0043fb63
//   XREF to: 0043fb63 (CONDITIONAL_JUMP)
// 0043fb57: FLD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 0043fb5a: FADD float ptr [0x00618ce1]
//   XREF to: 00618ce1 (READ)
// 0043fb60: FSTP float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 0043fb63: FLD float ptr [EBP + 0x18]
//   Label: LAB_0043fb63
//   XREF to: Stack[0x8] (READ)
// 0043fb66: FMUL double ptr [0x00618ce9]
//   XREF to: 00618ce9 (READ)
// 0043fb6c: FLD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 0043fb6f: FXCH
// 0043fb71: FST float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (WRITE)
// 0043fb75: FCHS
// 0043fb77: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (WRITE)
// 0043fb7b: FCOMP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 0043fb7f: FNSTSW AX
// 0043fb81: SAHF
// 0043fb82: JNC 0x0043fb8b
//   XREF to: 0043fb8b (CONDITIONAL_JUMP)
// 0043fb84: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x20] (READ)
// 0043fb88: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x98] (DATA)
// 0043fb8b: FLD float ptr [ESP]
//   Label: LAB_0043fb8b
//   XREF to: Stack[-0x98] (DATA)
// 0043fb8e: FCOMP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (READ)
// 0043fb92: FNSTSW AX
// 0043fb94: SAHF
// 0043fb95: JBE 0x0043fb9e
//   XREF to: 0043fb9e (CONDITIONAL_JUMP)
// 0043fb97: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x1c] (READ)
// 0043fb9b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x98] (DATA)
// 0043fb9e: FLD float ptr [EBX + 0x34]
//   Label: LAB_0043fb9e
// 0043fba1: FADD float ptr [ESP]
//   XREF to: Stack[-0x98] (DATA)
// 0043fba4: PUSH EBX
// 0043fba5: FSTP float ptr [EBX + 0x34]
// 0043fba8: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0043fbad: ADD ESP,0x4
// 0043fbb0: MOV ESI,dword ptr [EBX + 0x2598]
//   Label: LAB_0043fbb0
// 0043fbb6: MOV EAX,dword ptr [ESI + 0x154]
// 0043fbbc: PUSH 0x0
// 0043fbbe: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0043fbc5: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x74] (DATA)
// 0043fbc9: PUSH EAX
// 0043fbca: LEA EDI,[EBX + 0x158]
// 0043fbd0: PUSH EDI
// 0043fbd1: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0043fbd6: ADD ESP,0xc
// 0043fbd9: PUSH EAX
// 0043fbda: PUSH EBX
// 0043fbdb: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 0043fbe2: PUSH ESI
// 0043fbe3: CALL dword ptr [EAX + 0x124]
// 0043fbe9: ADD ESP,0xc
// 0043fbec: TEST EAX,EAX
// 0043fbee: JZ 0x0043fe3e
//   XREF to: 0043fe3e (CONDITIONAL_JUMP)
// 0043fbf4: CMP dword ptr [EBX + 0x2598],0x0
// 0043fbfb: JNZ 0x0043fe49
//   XREF to: 0043fe49 (CONDITIONAL_JUMP)
// 0043fc01: PUSH 0x1
//   Label: LAB_0043fc01
// 0043fc03: PUSH 0x0
// 0043fc05: LEA EAX,[EBX + 0x158]
// 0043fc0b: PUSH EAX
// 0043fc0c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_0043fc0c
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0043fc11: ADD ESP,0xc
// 0043fc14: PUSH EBX
//   Label: LAB_0043fc14
// 0043fc15: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 0043fc1a: ADD ESP,0x4
// 0043fc1d: LEA EAX,[EBX + 0x158]
// 0043fc23: PUSH EAX
// 0043fc24: MOV dword ptr [ESP + 0x84],EAX
// 0043fc2b: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 0043fc30: ADD ESP,0x4
// 0043fc33: MOV EAX,dword ptr [EBX + 0x154]
// 0043fc39: PUSH EBX
// 0043fc3a: CALL dword ptr [EAX + 0x120]
// 0043fc40: ADD ESP,0x4
// 0043fc43: TEST EAX,EAX
// 0043fc45: JNZ 0x0043fc8d
//   XREF to: 0043fc8d (CONDITIONAL_JUMP)
// 0043fc47: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 0043fc4c: MOV EDI,dword ptr [0x0083b124]
//   XREF to: 0083b124 (READ)
// 0043fc52: PUSH EDI
// 0043fc53: LEA EAX,[EBX + 0x1fbdc]
// 0043fc59: PUSH dword ptr [EBX + 0x1fbe8]
// 0043fc5f: PUSH EAX
// 0043fc60: LEA ESI,[ESP + 0x14]
// 0043fc64: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 0043fc69: ADD ESP,0x4
// 0043fc6c: LEA EAX,[ESP + 0x20]
// 0043fc70: LEA EDI,[ESP + 0x20]
// 0043fc74: PUSH EAX
// 0043fc75: MOV EAX,dword ptr [ESP + 0x90]
// 0043fc7c: LEA ESI,[ESP + 0x14]
// 0043fc80: PUSH EAX
// 0043fc81: MOVSD ES:EDI,ESI
// 0043fc82: MOVSD ES:EDI,ESI
// 0043fc83: MOVSD ES:EDI,ESI
// 0043fc84: MOVSD ES:EDI,ESI
// 0043fc85: CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   XREF to: 0059f750 (UNCONDITIONAL_CALL)
// 0043fc8a: ADD ESP,0x14
// 0043fc8d: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_0043fc8d
//   XREF to: Stack[0x8] (READ)
// 0043fc90: PUSH EBX
// 0043fc91: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 0043fc96: ADD ESP,0x8
// 0043fc99: MOV ESP,EBP
//   Label: caseD_6
// 0043fc9b: POP EBP
// 0043fc9c: POP EDI
// 0043fc9d: POP ESI
// 0043fc9e: POP EBX
// 0043fc9f: RET
// 0043fca0: PUSH 0x1
//   Label: LAB_0043fca0
// 0043fca2: PUSH 0x0
// 0043fca4: PUSH ESI
// 0043fca5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0043fcaa: ADD ESP,0xc
// 0043fcad: PUSH EBX
// 0043fcae: PUSH 0x618c8c
//   XREF to: 00618c8c (DATA)
// 0043fcb3: MOV ESI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 0043fcb9: PUSH ESI
//   XREF to: 0083b1a4 (DATA)
// 0043fcba: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 0043fcbf: JMP 0x0043fad8
//   XREF to: 0043fad8 (UNCONDITIONAL_JUMP)
// 0043fcc4: PUSH 0x1
//   Label: LAB_0043fcc4
// 0043fcc6: PUSH 0x2
// 0043fcc8: JMP 0x0043fad2
//   XREF to: 0043fad2 (UNCONDITIONAL_JUMP)
// 0043fccd: JBE 0x0043fcc4
//   Label: LAB_0043fccd
//   XREF to: 0043fcc4 (CONDITIONAL_JUMP)
// 0043fccf: CMP EAX,0x3
// 0043fcd2: JZ 0x0043fca0
//   XREF to: 0043fca0 (CONDITIONAL_JUMP)
// 0043fcd4: PUSH 0x1
//   Label: LAB_0043fcd4
// 0043fcd6: PUSH 0x0
// 0043fcd8: LEA EAX,[EBX + 0x158]
// 0043fcde: PUSH EAX
// 0043fcdf: JMP 0x0043fad3
//   XREF to: 0043fad3 (UNCONDITIONAL_JUMP)
// 0043fce4: CMP dword ptr [EBX + 0x2410],0x0
//   Label: caseD_3
// 0043fceb: JZ 0x0043fadb
//   XREF to: 0043fadb (CONDITIONAL_JUMP)
// 0043fcf1: MOV EDI,dword ptr [EBX + 0xbe2c]
// 0043fcf7: XOR ESI,ESI
// 0043fcf9: TEST EDI,EDI
// 0043fcfb: JZ 0x0043fd0f
//   XREF to: 0043fd0f (CONDITIONAL_JUMP)
// 0043fcfd: CMP dword ptr [EBX + 0xbe34],0x0
// 0043fd04: JZ 0x0043fda3
//   XREF to: 0043fda3 (CONDITIONAL_JUMP)
// 0043fd0a: MOV ESI,0x2
// 0043fd0f: CMP dword ptr [EBX + 0xbe30],0x0
//   Label: LAB_0043fd0f
// 0043fd16: JZ 0x0043fd1d
//   XREF to: 0043fd1d (CONDITIONAL_JUMP)
// 0043fd18: MOV ESI,0x3
// 0043fd1d: CMP dword ptr [EBX + 0xbe44],0x0
//   Label: LAB_0043fd1d
// 0043fd24: JZ 0x0043fd48
//   XREF to: 0043fd48 (CONDITIONAL_JUMP)
// 0043fd26: MOV ESI,dword ptr [EBX + 0x1fbd4]
// 0043fd2c: MOV dword ptr [EBX + 0xbe44],0x0
// 0043fd36: TEST ESI,ESI
// 0043fd38: SETZ AL
// 0043fd3b: AND EAX,0xff
// 0043fd40: XOR ESI,ESI
// 0043fd42: MOV dword ptr [EBX + 0x1fbd4],EAX
// 0043fd48: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_0043fd48
// 0043fd4f: JZ 0x0043fd6e
//   XREF to: 0043fd6e (CONDITIONAL_JUMP)
// 0043fd51: MOV EAX,dword ptr [EBX + 0x1fbd4]
// 0043fd57: MOV EDI,0x1
// 0043fd5c: TEST EAX,EAX
// 0043fd5e: JZ 0x0043fdad
//   XREF to: 0043fdad (CONDITIONAL_JUMP)
// 0043fd60: TEST EDI,EDI
//   Label: LAB_0043fd60
// 0043fd62: JZ 0x0043fd6e
//   XREF to: 0043fd6e (CONDITIONAL_JUMP)
// 0043fd64: MOV dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_0043fd64
// 0043fd6e: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_0043fd6e
// 0043fd74: LEA EDI,[EBX + 0x158]
// 0043fd7a: FMUL float ptr [EBX + 0x2438]
// 0043fd80: PUSH EDI
// 0043fd81: FSTP float ptr [EBX + 0x2418]
// 0043fd87: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0043fd8c: MOV EAX,dword ptr [EAX + 0x24]
// 0043fd8f: ADD ESP,0x4
// 0043fd92: CMP ESI,EAX
// 0043fd94: JZ 0x0043fadb
//   XREF to: 0043fadb (CONDITIONAL_JUMP)
// 0043fd9a: PUSH 0x1
// 0043fd9c: PUSH ESI
// 0043fd9d: PUSH EDI
// 0043fd9e: JMP 0x0043fad3
//   XREF to: 0043fad3 (UNCONDITIONAL_JUMP)
// 0043fda3: MOV ESI,0x1
//   Label: LAB_0043fda3
// 0043fda8: JMP 0x0043fd0f
//   XREF to: 0043fd0f (UNCONDITIONAL_JUMP)
// 0043fdad: CMP dword ptr [EBX + 0xbe28],0x2
//   Label: LAB_0043fdad
// 0043fdb4: JZ 0x0043fd60
//   XREF to: 0043fd60 (CONDITIONAL_JUMP)
// 0043fdb6: PUSH EBX
// 0043fdb7: CALL core_hero.cpp_FUN_004f2af0
//   XREF to: 004f2af0 (UNCONDITIONAL_CALL)
// 0043fdbc: XOR EDI,EDI
// 0043fdbe: ADD ESP,0x4
// 0043fdc1: TEST EAX,EAX
// 0043fdc3: JNZ 0x0043fd60
//   XREF to: 0043fd60 (CONDITIONAL_JUMP)
// 0043fdc5: PUSH EBX
// 0043fdc6: CALL core_hero.cpp_FUN_004f2d70
//   XREF to: 004f2d70 (UNCONDITIONAL_CALL)
// 0043fdcb: ADD ESP,0x4
// 0043fdce: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0043fdd2: TEST EAX,EAX
// 0043fdd4: JBE 0x0043fddb
//   XREF to: 0043fddb (CONDITIONAL_JUMP)
// 0043fdd6: CMP EAX,0x1
// 0043fdd9: JNZ 0x0043fe09
//   XREF to: 0043fe09 (CONDITIONAL_JUMP)
// 0043fddb: CMP dword ptr [ESP + 0x74],0x0
//   Label: LAB_0043fddb
//   XREF to: Stack[-0x24] (READ)
// 0043fde0: JNZ 0x0043fd60
//   XREF to: 0043fd60 (CONDITIONAL_JUMP)
// 0043fde6: PUSH EBX
// 0043fde7: CALL core_hero.cpp_FUN_004f2c40
//   XREF to: 004f2c40 (UNCONDITIONAL_CALL)
// 0043fdec: ADD ESP,0x4
// 0043fdef: TEST EAX,EAX
// 0043fdf1: JNZ 0x0043fd60
//   XREF to: 0043fd60 (CONDITIONAL_JUMP)
// 0043fdf7: PUSH EBX
// 0043fdf8: CALL core_hero.cpp_FUN_004f2f50
//   XREF to: 004f2f50 (UNCONDITIONAL_CALL)
// 0043fdfd: ADD ESP,0x4
// 0043fe00: TEST EAX,EAX
// 0043fe02: JNZ 0x0043fe14
//   XREF to: 0043fe14 (CONDITIONAL_JUMP)
// 0043fe04: JMP 0x0043fd64
//   XREF to: 0043fd64 (UNCONDITIONAL_JUMP)
// 0043fe09: PUSH EBX
//   Label: LAB_0043fe09
// 0043fe0a: CALL core_hero.cpp_FUN_004f2ed0
//   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)
// 0043fe0f: ADD ESP,0x4
// 0043fe12: JMP 0x0043fddb
//   XREF to: 0043fddb (UNCONDITIONAL_JUMP)
// 0043fe14: PUSH EBX
//   Label: LAB_0043fe14
// 0043fe15: CALL core_hero.cpp_FUN_004f30f0
//   XREF to: 004f30f0 (UNCONDITIONAL_CALL)
// 0043fe1a: ADD ESP,0x4
// 0043fe1d: JMP 0x0043fd60
//   XREF to: 0043fd60 (UNCONDITIONAL_JUMP)
// 0043fe22: PUSH ESI
//   Label: LAB_0043fe22
// 0043fe23: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0043fe28: MOV EAX,dword ptr [EAX + 0x24]
// 0043fe2b: ADD ESP,0x4
// 0043fe2e: CMP EAX,0x6
// 0043fe31: JA 0x0043fadb
//   XREF to: 0043fadb (CONDITIONAL_JUMP)
// 0043fe37: JMP dword ptr [EAX*0x4 + 0x43f9e4]
//   Label: switchD
//   XREF to: 0043fadb (COMPUTED_JUMP)
//   XREF to: 0043fc99 (COMPUTED_JUMP)
//   XREF to: 0043fce4 (COMPUTED_JUMP)
//   XREF to: 0043f9e4 (DATA)
// 0043fe3e: MOV dword ptr [EBX + 0x2598],EAX
//   Label: LAB_0043fe3e
// 0043fe44: JMP 0x0043fc01
//   XREF to: 0043fc01 (UNCONDITIONAL_JUMP)
// 0043fe49: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_0043fe49
// 0043fe50: JZ 0x0043fc14
//   XREF to: 0043fc14 (CONDITIONAL_JUMP)
// 0043fe56: PUSH 0x1
// 0043fe58: PUSH 0x9
// 0043fe5a: PUSH EDI
// 0043fe5b: JMP 0x0043fc0c
//   XREF to: 0043fc0c (UNCONDITIONAL_JUMP)
// 0043fe60: FLD float ptr [EBP + 0x18]
//   Label: LAB_0043fe60
//   XREF to: Stack[0x8] (READ)
// 0043fe63: FLD ST0
// 0043fe65: FMUL double ptr [0x00618cc1]
//   XREF to: 00618cc1 (READ)
// 0043fe6b: FLD float ptr [EBX + 0x242c]
// 0043fe71: FXCH
// 0043fe73: FSUBR ST0,ST1
// 0043fe75: LEA EAX,[EBX + 0x2428]
// 0043fe7b: FSTP ST1
// 0043fe7d: FSTP float ptr [EBX + 0x242c]
// 0043fe83: FLD float ptr [EAX]
// 0043fe85: FMUL ST1
// 0043fe87: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x38] (WRITE)
// 0043fe8b: FLD float ptr [EAX + 0x4]
// 0043fe8e: FMUL ST1
// 0043fe90: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x34] (WRITE)
// 0043fe94: FMUL float ptr [EAX + 0x8]
// 0043fe97: LEA EAX,[EBX + 0x23ac]
// 0043fe9d: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x30] (WRITE)
// 0043fea1: LEA EDX,[EBX + 0x241c]
// 0043fea7: FLD float ptr [EAX]
// 0043fea9: FADD float ptr [EDX]
// 0043feab: FST float ptr [ESP + 0x48]
//   XREF to: Stack[-0x50] (WRITE)
// 0043feaf: FLD float ptr [EAX + 0x4]
// 0043feb2: FADD float ptr [EDX + 0x4]
// 0043feb5: FXCH
// 0043feb7: FADD float ptr [ESP + 0x60]
//   XREF to: Stack[-0x38] (READ)
// 0043febb: FXCH
// 0043febd: FST float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x4c] (WRITE)
// 0043fec1: FLD float ptr [EAX + 0x8]
// 0043fec4: FADD float ptr [EDX + 0x8]
// 0043fec7: FXCH
// 0043fec9: FADD float ptr [ESP + 0x64]
//   XREF to: Stack[-0x34] (READ)
// 0043fecd: FXCH
// 0043fecf: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x48] (WRITE)
// 0043fed3: FXCH
// 0043fed5: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x68] (WRITE)
// 0043fed9: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x48] (READ)
// 0043fedd: FADD float ptr [ESP + 0x68]
//   XREF to: Stack[-0x30] (READ)
// 0043fee1: FXCH
// 0043fee3: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x64] (WRITE)
// 0043fee7: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x60] (WRITE)
// 0043feeb: MOV dword ptr [EAX + 0x8],EDI
// 0043feee: MOV ECX,dword ptr [EAX + 0x8]
// 0043fef1: MOV dword ptr [EAX + 0x4],ECX
// 0043fef4: MOV ECX,dword ptr [EAX + 0x4]
// 0043fef7: MOV dword ptr [EAX],ECX
// 0043fef9: MOV dword ptr [EDX + 0x8],EDI
// 0043fefc: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x68] (DATA)
// 0043ff00: FLD float ptr [EDX + 0x8]
// 0043ff03: PUSH EAX
// 0043ff04: FST float ptr [EDX + 0x4]
// 0043ff07: PUSH EBX
// 0043ff08: FSTP float ptr [EDX]
// 0043ff0a: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 0043ff0f: ADD ESP,0x8
// 0043ff12: JMP 0x0043fc14
//   XREF to: 0043fc14 (UNCONDITIONAL_JUMP)
