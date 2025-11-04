// Name: core_haystack.cpp_FUN_004f0e40
// Address: 004f0e40
// Address Range: [[004f0e40, 004f13e7]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f0e40()
// Globals:
//   void* switchdataD_004f0e14 = 004f1143
//   TerminatedCString s_s_confused_while_walking_0062e8f9
//   double DOUBLE_0062e923 = 12.5663706140000
//   double DOUBLE_0062e92b = 0.333333333333333
//   double DOUBLE_0062e933 = 32
//   double DOUBLE_0062e93b = -1.57079632675000
//   float FLOAT_0062e943 = 3.141593
//   double DOUBLE_0062e94b = 1.57079632675000
//   float FLOAT_0062e953 = -3.141593
//   double DOUBLE_0062e95b = 3.14159265350000
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGame* g_CGamePtr = 02d81a9c
//   CConsole g_ConsolePtr
//   undefined4 DAT_02d81cc4
//   undefined4 DAT_02db8700
// Function calls:
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_haystack.cpp_FUN_004f13f0
//   core_haystack.cpp_FUN_004f1970
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
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_hero_haystack.cpp_FUN_004f0e40(undefined4 param_1, undefined4
   param_2) */

void core_haystack_cpp_FUN_004f0e40(void)

{
  char *pcVar1;
  CDemonActor *this_ptr;
  bool bVar2;
  float fVar3;
  CCharacter *pCVar4;
  CGame *pCVar5;
  int iVar6;
  CVector3f *pCVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  undefined4 *puVar11;
  byte bVar12;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  CMotionController *in_stack_00000014;
  CDeformableModelInstance *in_stack_0000001c;
  float afStackY_1828 [1507];
  CCharacter *this_ptr_00;
  CCharacter *desired_state_index;
  CDeformableModelInstance *this_ptr_01;
  SCollisionInfo *in_stack_ffffff94;
  undefined4 local_68;
  CQuaternion4f *source_quaternions;
  code *bone_index;
  CDeformableModel_MotionBlendWeightFunc *in_stack_ffffffac;
  float fStack_50;
  CVector3f CStack_4c;
  undefined1 local_3c [20];
  float local_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  int iStack_14;
  
  bVar12 = 0;
  iVar6 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar6 == 0) {
    return;
  }
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 2) {
    core_haystack_cpp_FUN_004f13f0();
  }
  pCVar5 = g_CGamePtr;
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * (float)DOUBLE_0062e923;
  if (pCVar5->letterbox_mode != 0) {
    *(float *)(in_stack_00000004->field2_0x240c + 0x2c) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x2c) * (float)DOUBLE_0062e92b;
  }
  fVar8 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar8;
  if (fVar8 < 0.0) {
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  (in_stack_00000004->model).field17_0x2254[8] = '\0';
  (in_stack_00000004->model).field17_0x2254[9] = '\0';
  (in_stack_00000004->model).field17_0x2254[10] = '\0';
  (in_stack_00000004->model).field17_0x2254[0xb] = '\0';
  *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 4) =
       *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 8);
  *(undefined4 *)(in_stack_00000004->model).field17_0x2254 =
       *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 4);
  core_haystack_cpp_FUN_004f1970();
  this_ptr_00 = in_stack_00000004;
  iVar6 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar6 == 0) {
    desired_state_index = (CCharacter *)0x4f12bf;
    iVar6 = core_motion_cpp_CMotionController_FUN_0052dab0
                      (&(in_stack_00000004->model).motion_controller);
    switch(*(undefined4 *)(iVar6 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
      if (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0) {
        iVar6 = 0;
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) != 0) {
          iVar6 = 10;
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) != 0) {
          if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x10) == 0) {
            iVar6 = 1;
          }
          else {
            iVar6 = 2;
          }
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) != 0) {
          iVar6 = 3;
        }
        if (in_stack_00000004[1].base_actor.location.position.x != 0.0) {
          iVar6 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f4);
          in_stack_00000004[1].base_actor.location.position.x = 0.0;
          uVar9 = (uint)(iVar6 == 0);
          *(uint *)(in_stack_00000004[2].cloth_data + 0x54f4) = uVar9;
          if (uVar9 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = 10;
          }
        }
        if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) != 0) {
          bVar2 = true;
          if ((*(int *)(in_stack_00000004[2].cloth_data + 0x54f4) == 0) &&
             (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) != 2)) {
            iVar10 = core_hero_cpp_FUN_004f2af0();
            bVar2 = false;
            if (iVar10 != 0) goto LAB_004f11d6;
            iStack_14 = core_hero_cpp_FUN_004f2d70();
            if ((iStack_14 != 0) && (iStack_14 != 1)) {
              this_ptr_00 = in_stack_00000004;
              core_hero_cpp_FUN_004f2ed0();
            }
            if (unaff_EBP != 0) goto LAB_004f11d6;
            this_ptr_00 = (CCharacter *)0x4f1279;
            desired_state_index = in_stack_00000004;
            iVar10 = core_hero_cpp_FUN_004f2c40();
            if (iVar10 != 0) goto LAB_004f11d6;
            desired_state_index = (CCharacter *)0x4f128a;
            iVar10 = core_hero_cpp_FUN_004f2f50();
            if (iVar10 != 0) {
              core_hero_cpp_FUN_004f30f0();
              goto LAB_004f11d6;
            }
          }
          else {
LAB_004f11d6:
            if (!bVar2) goto LAB_004f11f7;
          }
          iVar6 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f8);
          pCVar4 = in_stack_00000004 + 1;
          (pCVar4->base_actor).actor_name[0x14] = '\0';
          (pCVar4->base_actor).actor_name[0x15] = '\0';
          (pCVar4->base_actor).actor_name[0x16] = '\0';
          (pCVar4->base_actor).actor_name[0x17] = '\0';
          if (iVar6 == 0) {
            iVar6 = 0xf;
          }
          else {
            iVar6 = 0xe;
          }
        }
LAB_004f11f7:
        this_ptr_01 = &in_stack_00000004->model;
        *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
             (float)in_stack_00000004[1].base_actor.location.area_id *
             *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
        iVar10 = core_motion_cpp_CMotionController_FUN_0052dab0(&this_ptr_01->motion_controller);
        if (iVar6 != *(int *)(iVar10 + 0x24)) goto LAB_004f0f1c;
      }
      break;
    case 9:
      goto switchD_004f12ce_caseD_9;
    }
  }
  else {
    uVar9 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
    if (uVar9 < 2) {
      if (uVar9 == 1) {
        desired_state_index = (CCharacter *)&DAT_00000001;
      }
      else {
LAB_004f1134:
        desired_state_index = (CCharacter *)0x0;
      }
    }
    else {
      if (2 < uVar9) {
        if (uVar9 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,0,1);
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",in_stack_00000004);
          goto switchD_004f12ce_caseD_8;
        }
        goto LAB_004f1134;
      }
      desired_state_index = (CCharacter *)&DAT_00000002;
    }
    this_ptr_01 = (CDeformableModelInstance *)&DAT_00000001;
    this_ptr_00 = (CCharacter *)&in_stack_00000004->model;
LAB_004f0f1c:
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              ((CMotionController *)this_ptr_00,(int)desired_state_index,(int)this_ptr_01);
  }
switchD_004f12ce_caseD_8:
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    pcVar1 = (in_stack_00000004->model).field17_0x2254;
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)DOUBLE_0062e933;
    local_28 = *(float *)pcVar1 + *(float *)(in_stack_00000004->field2_0x240c + 0x10);
    fStack_24 = *(float *)((in_stack_00000004->model).field17_0x2254 + 4) +
                *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    local_20 = *(float *)((in_stack_00000004->model).field17_0x2254 + 8) +
               *(float *)(in_stack_00000004->field2_0x240c + 0x18);
    (in_stack_00000004->model).field17_0x2254[8] = '\0';
    (in_stack_00000004->model).field17_0x2254[9] = '\0';
    (in_stack_00000004->model).field17_0x2254[10] = '\0';
    (in_stack_00000004->model).field17_0x2254[0xb] = '\0';
    *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 4) =
         *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 8);
    *(undefined4 *)pcVar1 = *(undefined4 *)((in_stack_00000004->model).field17_0x2254 + 4);
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x18);
    *(float *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x14);
    iVar6 = core_motion_cpp_CMotionController_FUN_0052dab0
                      (&(in_stack_00000004->model).motion_controller);
    if ((*(int *)(iVar6 + 0x24) == 0xe) || (*(int *)(iVar6 + 0x24) == 0xf)) {
      local_20 = 0.0;
      fStack_24 = 0.0;
      local_1c = 0.0;
    }
    in_stack_ffffffac =
         (CDeformableModel_MotionBlendWeightFunc *)
         (*(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008);
    fStack_50 = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    CStack_4c.x = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    fStack_24 = fStack_24 + (float)in_stack_ffffffac;
    local_20 = local_20 + fStack_50;
    local_1c = local_1c + CStack_4c.x;
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
  }
  else {
    if (in_stack_00000004->grabbed_type == 0) {
      pCVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                         (&in_stack_00000004->base_actor,&CStack_4c,
                          &(in_stack_00000004->grabbed_by->location).position);
      pCVar7 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_4c,pCVar7);
      fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar7->y);
      if (fVar8 < (float)DOUBLE_0062e93b) {
        fVar8 = fVar8 + FLOAT_0062e943;
      }
      if ((float)DOUBLE_0062e94b < fVar8) {
        fVar8 = fVar8 + FLOAT_0062e953;
      }
      fVar3 = in_stack_00000008 * (float)DOUBLE_0062e95b;
      local_18 = -fVar3;
      if (fVar8 < local_18) {
        fVar8 = local_18;
      }
      if (fVar3 < fVar8) {
        fVar8 = fVar3;
      }
      (in_stack_00000004->base_actor).orient.bank =
           (in_stack_00000004->base_actor).orient.bank + fVar8;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (&in_stack_00000004->base_actor);
    }
    this_ptr = in_stack_00000004->grabbed_by;
    pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       (&in_stack_00000004->model,(CVector3f *)(local_3c + 8),0);
    fVar8 = (**(code **)((int)local_18 + 0x124))(this_ptr,(float)in_stack_00000004,pCVar7);
    if (fVar8 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
LAB_004f1041:
      iVar6 = 0;
    }
    else {
      if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) goto LAB_004f1041;
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0) goto LAB_004f1054;
      iVar6 = 0x11;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&(in_stack_00000004->model).motion_controller,iVar6,1);
  }
LAB_004f1054:
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  iVar6 = (*(in_stack_00000004->base_actor).vtable[1].hasCollision)
                    (&in_stack_00000004->base_actor,in_stack_ffffff94);
  if ((iVar6 == 0) &&
     (iVar6 = core_motion_cpp_CMotionController_FUN_0052dab0(in_stack_00000014),
     *(int *)(iVar6 + 0x24) != 0x13)) {
    bone_index = core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0;
    local_68 = 0x4f10bb;
    fVar8 = (float)DAT_02db8700;
    core_xform_cpp_eulerToQuaternion_FUN_005f7b20
              ((CQuaternion4f *)(in_stack_00000004[2].cloth_data + 0x54fc),
               *(CVector3f **)(in_stack_00000004[2].cloth_data + 0x5508));
    source_quaternions = (CQuaternion4f *)local_3c;
    local_3c._0_4_ = CStack_4c.x;
    puVar11 = (undefined4 *)((int)&CStack_4c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
    *(undefined4 *)(local_3c + (uint)bVar12 * -8 + 4) =
         *(undefined4 *)((int)&CStack_4c + (uint)bVar12 * -8 + 4);
    *(undefined4 *)(local_3c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) = *puVar11;
    *(undefined4 *)
     ((int)(local_3c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) + ((uint)bVar12 * -2 + 1) * 4) =
         puVar11[(uint)bVar12 * -2 + 1];
    local_68 = 0x4f10d9;
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (in_stack_0000001c,source_quaternions,fVar8,(int)bone_index,in_stack_ffffffac);
  }
  fStack_50 = in_stack_00000008;
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
switchD_004f12ce_caseD_9:
  return;
}


// Assembly code:
// 004f0e40: PUSH EBX
//   Label: core_haystack.cpp_FUN_004f0e40
// 004f0e41: PUSH ESI
// 004f0e42: PUSH EDI
// 004f0e43: PUSH EBP
// 004f0e44: MOV EBP,ESP
// 004f0e46: SUB ESP,0x7c
// 004f0e49: AND ESP,0xfffffff8
// 004f0e4c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f0e4f: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f0e52: PUSH EBX
// 004f0e53: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 004f0e58: ADD ESP,0x8
// 004f0e5b: TEST EAX,EAX
// 004f0e5d: JZ 0x004f10e8
//   XREF to: 004f10e8 (CONDITIONAL_JUMP)
// 004f0e63: CMP dword ptr [EBX + 0xbe28],0x2
// 004f0e6a: JZ 0x004f10ef
//   XREF to: 004f10ef (CONDITIONAL_JUMP)
// 004f0e70: FLD float ptr [EBP + 0x18]
//   Label: LAB_004f0e70
//   XREF to: Stack[0x8] (READ)
// 004f0e73: FMUL double ptr [0x0062e923]
//   XREF to: 0062e923 (READ)
// 004f0e79: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004f0e7e: FSTP float ptr [EBX + 0x2438]
// 004f0e84: CMP dword ptr [EAX + 0x228],0x0
//   XREF to: 02d81cc4 (READ)
// 004f0e8b: JZ 0x004f0e9f
//   XREF to: 004f0e9f (CONDITIONAL_JUMP)
// 004f0e8d: FLD float ptr [EBX + 0x2438]
// 004f0e93: FMUL double ptr [0x0062e92b]
//   XREF to: 0062e92b (READ)
// 004f0e99: FSTP float ptr [EBX + 0x2438]
// 004f0e9f: FLD float ptr [EBX + 0xbe24]
//   Label: LAB_004f0e9f
// 004f0ea5: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f0ea8: FST float ptr [EBX + 0xbe24]
// 004f0eae: FLDZ
// 004f0eb0: FCOMPP
// 004f0eb2: FNSTSW AX
// 004f0eb4: SAHF
// 004f0eb5: JBE 0x004f0ec1
//   XREF to: 004f0ec1 (CONDITIONAL_JUMP)
// 004f0eb7: MOV dword ptr [EBX + 0xbe24],0x0
// 004f0ec1: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_004f0ec1
// 004f0ec7: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f0eca: MOV dword ptr [EAX + 0x8],0x0
// 004f0ed1: PUSH EBX
// 004f0ed2: MOV EDX,dword ptr [EAX + 0x8]
// 004f0ed5: MOV dword ptr [EAX + 0x4],EDX
// 004f0ed8: MOV EDX,dword ptr [EAX + 0x4]
// 004f0edb: MOV dword ptr [EAX],EDX
// 004f0edd: CALL core_haystack.cpp_FUN_004f1970
//   XREF to: 004f1970 (UNCONDITIONAL_CALL)
// 004f0ee2: ADD ESP,0x8
// 004f0ee5: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f0ee8: PUSH EBX
// 004f0ee9: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 004f0eee: MOV ESI,EAX
// 004f0ef0: ADD ESP,0x8
// 004f0ef3: LEA EAX,[EBX + 0x158]
// 004f0ef9: TEST ESI,ESI
// 004f0efb: JZ 0x004f12b9
//   XREF to: 004f12b9 (CONDITIONAL_JUMP)
// 004f0f01: MOV ESI,dword ptr [EBX + 0x25b0]
// 004f0f07: CMP ESI,0x2
// 004f0f0a: JNC 0x004f112d
//   XREF to: 004f112d (CONDITIONAL_JUMP)
// 004f0f10: CMP ESI,0x1
// 004f0f13: JNZ 0x004f1134
//   XREF to: 004f1134 (CONDITIONAL_JUMP)
// 004f0f19: PUSH ESI
// 004f0f1a: PUSH ESI
// 004f0f1b: PUSH EAX
//   Label: LAB_004f0f1b
// 004f0f1c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_004f0f1c
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f0f21: ADD ESP,0xc
//   Label: LAB_004f0f21
// 004f0f24: MOV EAX,dword ptr [EBX + 0x2598]
//   Label: caseD_8
// 004f0f2a: TEST EAX,EAX
// 004f0f2c: JZ 0x004f12f7
//   XREF to: 004f12f7 (CONDITIONAL_JUMP)
// 004f0f32: CMP dword ptr [EBX + 0x259c],0x0
// 004f0f39: JNZ 0x004f0ff3
//   XREF to: 004f0ff3 (CONDITIONAL_JUMP)
// 004f0f3f: ADD EAX,0x20
// 004f0f42: PUSH EAX
// 004f0f43: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x60] (DATA)
// 004f0f47: PUSH EAX
// 004f0f48: PUSH EBX
// 004f0f49: CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004f0f4e: ADD ESP,0xc
// 004f0f51: PUSH EAX
// 004f0f52: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x54] (DATA)
// 004f0f56: PUSH EAX
// 004f0f57: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 004f0f5c: ADD ESP,0x8
// 004f0f5f: PUSH dword ptr [EAX + 0x4]
// 004f0f62: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 004f0f67: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f0f6b: FLD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x18] (READ)
// 004f0f6f: ADD ESP,0x4
// 004f0f72: FST float ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 004f0f75: FCOMP double ptr [0x0062e93b]
//   XREF to: 0062e93b (READ)
// 004f0f7b: FNSTSW AX
// 004f0f7d: SAHF
// 004f0f7e: JNC 0x004f0f8c
//   XREF to: 004f0f8c (CONDITIONAL_JUMP)
// 004f0f80: FLD float ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 004f0f83: FADD float ptr [0x0062e943]
//   XREF to: 0062e943 (READ)
// 004f0f89: FSTP float ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 004f0f8c: FLD float ptr [ESP]
//   Label: LAB_004f0f8c
//   XREF to: Stack[-0x90] (DATA)
// 004f0f8f: FCOMP double ptr [0x0062e94b]
//   XREF to: 0062e94b (READ)
// 004f0f95: FNSTSW AX
// 004f0f97: SAHF
// 004f0f98: JBE 0x004f0fa6
//   XREF to: 004f0fa6 (CONDITIONAL_JUMP)
// 004f0f9a: FLD float ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 004f0f9d: FADD float ptr [0x0062e953]
//   XREF to: 0062e953 (READ)
// 004f0fa3: FSTP float ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 004f0fa6: FLD float ptr [EBP + 0x18]
//   Label: LAB_004f0fa6
//   XREF to: Stack[0x8] (READ)
// 004f0fa9: FMUL double ptr [0x0062e95b]
//   XREF to: 0062e95b (READ)
// 004f0faf: FLD float ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 004f0fb2: FXCH
// 004f0fb4: FST float ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (WRITE)
// 004f0fb8: FCHS
// 004f0fba: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x28] (WRITE)
// 004f0fbe: FCOMP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x28] (READ)
// 004f0fc2: FNSTSW AX
// 004f0fc4: SAHF
// 004f0fc5: JNC 0x004f0fce
//   XREF to: 004f0fce (CONDITIONAL_JUMP)
// 004f0fc7: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x28] (READ)
// 004f0fcb: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x90] (DATA)
// 004f0fce: FLD float ptr [ESP]
//   Label: LAB_004f0fce
//   XREF to: Stack[-0x90] (DATA)
// 004f0fd1: FCOMP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (READ)
// 004f0fd5: FNSTSW AX
// 004f0fd7: SAHF
// 004f0fd8: JBE 0x004f0fe1
//   XREF to: 004f0fe1 (CONDITIONAL_JUMP)
// 004f0fda: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x20] (READ)
// 004f0fde: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x90] (DATA)
// 004f0fe1: FLD float ptr [EBX + 0x34]
//   Label: LAB_004f0fe1
// 004f0fe4: FADD float ptr [ESP]
//   XREF to: Stack[-0x90] (DATA)
// 004f0fe7: PUSH EBX
// 004f0fe8: FSTP float ptr [EBX + 0x34]
// 004f0feb: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 004f0ff0: ADD ESP,0x4
// 004f0ff3: MOV ESI,dword ptr [EBX + 0x2598]
//   Label: LAB_004f0ff3
// 004f0ff9: MOV EAX,dword ptr [ESI + 0x154]
// 004f0fff: PUSH 0x0
// 004f1001: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004f1005: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x48] (DATA)
// 004f1009: PUSH EAX
// 004f100a: LEA EDI,[EBX + 0x158]
// 004f1010: PUSH EDI
// 004f1011: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004f1016: ADD ESP,0xc
// 004f1019: PUSH EAX
// 004f101a: PUSH EBX
// 004f101b: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x18] (READ)
// 004f1022: PUSH ESI
// 004f1023: CALL dword ptr [EAX + 0x124]
// 004f1029: ADD ESP,0xc
// 004f102c: TEST EAX,EAX
// 004f102e: JZ 0x004f12d5
//   XREF to: 004f12d5 (CONDITIONAL_JUMP)
// 004f1034: CMP dword ptr [EBX + 0x2598],0x0
// 004f103b: JNZ 0x004f12e0
//   XREF to: 004f12e0 (CONDITIONAL_JUMP)
// 004f1041: PUSH 0x1
//   Label: LAB_004f1041
// 004f1043: PUSH 0x0
// 004f1045: LEA EAX,[EBX + 0x158]
// 004f104b: PUSH EAX
// 004f104c: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_004f104c
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f1051: ADD ESP,0xc
// 004f1054: PUSH EBX
//   Label: LAB_004f1054
// 004f1055: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 004f105a: ADD ESP,0x4
// 004f105d: LEA EAX,[EBX + 0x158]
// 004f1063: PUSH EAX
// 004f1064: MOV dword ptr [ESP + 0x70],EAX
// 004f1068: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004f106d: ADD ESP,0x4
// 004f1070: MOV EAX,dword ptr [EBX + 0x154]
// 004f1076: PUSH EBX
// 004f1077: CALL dword ptr [EAX + 0x120]
// 004f107d: ADD ESP,0x4
// 004f1080: TEST EAX,EAX
// 004f1082: JNZ 0x004f10dc
//   XREF to: 004f10dc (CONDITIONAL_JUMP)
// 004f1084: MOV ESI,dword ptr [ESP + 0x6c]
// 004f1088: PUSH ESI
// 004f1089: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f108e: MOV EAX,dword ptr [EAX + 0x24]
// 004f1091: ADD ESP,0x4
// 004f1094: CMP EAX,0x13
// 004f1097: JZ 0x004f10dc
//   XREF to: 004f10dc (CONDITIONAL_JUMP)
// 004f1099: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 004f109e: MOV EDI,dword ptr [0x02db8700]
//   XREF to: 02db8700 (READ)
// 004f10a4: PUSH EDI
// 004f10a5: LEA EAX,[EBX + 0x1fbdc]
// 004f10ab: PUSH dword ptr [EBX + 0x1fbe8]
// 004f10b1: PUSH EAX
// 004f10b2: LEA ESI,[ESP + 0x14]
// 004f10b6: CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20
//   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
// 004f10bb: ADD ESP,0x4
// 004f10be: LEA EAX,[ESP + 0x20]
// 004f10c2: LEA EDI,[ESP + 0x20]
// 004f10c6: PUSH EAX
// 004f10c7: MOV EAX,dword ptr [ESP + 0x7c]
// 004f10cb: LEA ESI,[ESP + 0x14]
// 004f10cf: PUSH EAX
// 004f10d0: MOVSD ES:EDI,ESI
// 004f10d1: MOVSD ES:EDI,ESI
// 004f10d2: MOVSD ES:EDI,ESI
// 004f10d3: MOVSD ES:EDI,ESI
// 004f10d4: CALL core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
//   XREF to: 0059f750 (UNCONDITIONAL_CALL)
// 004f10d9: ADD ESP,0x14
// 004f10dc: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_004f10dc
//   XREF to: Stack[0x8] (READ)
// 004f10df: PUSH EBX
// 004f10e0: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 004f10e5: ADD ESP,0x8
// 004f10e8: MOV ESP,EBP
//   Label: caseD_9
// 004f10ea: POP EBP
// 004f10eb: POP EDI
// 004f10ec: POP ESI
// 004f10ed: POP EBX
// 004f10ee: RET
// 004f10ef: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_004f10ef
//   XREF to: Stack[0x8] (READ)
// 004f10f2: PUSH EBX
// 004f10f3: CALL core_haystack.cpp_FUN_004f13f0
//   XREF to: 004f13f0 (UNCONDITIONAL_CALL)
// 004f10f8: ADD ESP,0x8
// 004f10fb: JMP 0x004f0e70
//   XREF to: 004f0e70 (UNCONDITIONAL_JUMP)
// 004f1100: PUSH 0x1
//   Label: LAB_004f1100
// 004f1102: PUSH 0x0
// 004f1104: PUSH EAX
// 004f1105: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f110a: ADD ESP,0xc
// 004f110d: PUSH EBX
// 004f110e: PUSH 0x62e8f9
//   XREF to: 0062e8f9 (DATA)
// 004f1113: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 004f1119: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 004f111a: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 004f111f: JMP 0x004f0f21
//   XREF to: 004f0f21 (UNCONDITIONAL_JUMP)
// 004f1124: PUSH 0x1
//   Label: LAB_004f1124
// 004f1126: PUSH 0x2
// 004f1128: JMP 0x004f0f1b
//   XREF to: 004f0f1b (UNCONDITIONAL_JUMP)
// 004f112d: JBE 0x004f1124
//   Label: LAB_004f112d
//   XREF to: 004f1124 (CONDITIONAL_JUMP)
// 004f112f: CMP ESI,0x3
// 004f1132: JZ 0x004f1100
//   XREF to: 004f1100 (CONDITIONAL_JUMP)
// 004f1134: PUSH 0x1
//   Label: LAB_004f1134
// 004f1136: PUSH 0x0
// 004f1138: LEA EAX,[EBX + 0x158]
// 004f113e: JMP 0x004f0f1b
//   XREF to: 004f0f1b (UNCONDITIONAL_JUMP)
// 004f1143: CMP dword ptr [EBX + 0x2410],0x0
//   Label: caseD_a
// 004f114a: JZ 0x004f0f24
//   XREF to: 004f0f24 (CONDITIONAL_JUMP)
// 004f1150: MOV EDI,dword ptr [EBX + 0x1fbd4]
// 004f1156: XOR ESI,ESI
// 004f1158: TEST EDI,EDI
// 004f115a: JZ 0x004f1161
//   XREF to: 004f1161 (CONDITIONAL_JUMP)
// 004f115c: MOV ESI,0xa
// 004f1161: CMP dword ptr [EBX + 0xbe2c],0x0
//   Label: LAB_004f1161
// 004f1168: JZ 0x004f117c
//   XREF to: 004f117c (CONDITIONAL_JUMP)
// 004f116a: CMP dword ptr [EBX + 0xbe34],0x0
// 004f1171: JZ 0x004f122c
//   XREF to: 004f122c (CONDITIONAL_JUMP)
// 004f1177: MOV ESI,0x2
// 004f117c: CMP dword ptr [EBX + 0xbe30],0x0
//   Label: LAB_004f117c
// 004f1183: JZ 0x004f118a
//   XREF to: 004f118a (CONDITIONAL_JUMP)
// 004f1185: MOV ESI,0x3
// 004f118a: CMP dword ptr [EBX + 0xbe44],0x0
//   Label: LAB_004f118a
// 004f1191: JZ 0x004f11be
//   XREF to: 004f11be (CONDITIONAL_JUMP)
// 004f1193: MOV EDX,dword ptr [EBX + 0x1fbd4]
// 004f1199: MOV dword ptr [EBX + 0xbe44],0x0
// 004f11a3: TEST EDX,EDX
// 004f11a5: SETZ AL
// 004f11a8: AND EAX,0xff
// 004f11ad: MOV dword ptr [EBX + 0x1fbd4],EAX
// 004f11b3: JZ 0x004f1236
//   XREF to: 004f1236 (CONDITIONAL_JUMP)
// 004f11b9: MOV ESI,0xa
// 004f11be: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_004f11be
// 004f11c5: JZ 0x004f11f7
//   XREF to: 004f11f7 (CONDITIONAL_JUMP)
// 004f11c7: MOV EAX,dword ptr [EBX + 0x1fbd4]
// 004f11cd: MOV EDI,0x1
// 004f11d2: TEST EAX,EAX
// 004f11d4: JZ 0x004f123a
//   XREF to: 004f123a (CONDITIONAL_JUMP)
// 004f11d6: TEST EDI,EDI
//   Label: LAB_004f11d6
// 004f11d8: JZ 0x004f11f7
//   XREF to: 004f11f7 (CONDITIONAL_JUMP)
// 004f11da: MOV ESI,dword ptr [EBX + 0x1fbd8]
//   Label: LAB_004f11da
// 004f11e0: MOV dword ptr [EBX + 0xbe38],0x0
// 004f11ea: TEST ESI,ESI
// 004f11ec: JZ 0x004f12af
//   XREF to: 004f12af (CONDITIONAL_JUMP)
// 004f11f2: MOV ESI,0xe
// 004f11f7: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_004f11f7
// 004f11fd: LEA EDI,[EBX + 0x158]
// 004f1203: FMUL float ptr [EBX + 0x2438]
// 004f1209: PUSH EDI
// 004f120a: FSTP float ptr [EBX + 0x2418]
// 004f1210: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f1215: MOV EAX,dword ptr [EAX + 0x24]
// 004f1218: ADD ESP,0x4
// 004f121b: CMP ESI,EAX
// 004f121d: JZ 0x004f0f24
//   XREF to: 004f0f24 (CONDITIONAL_JUMP)
// 004f1223: PUSH 0x1
// 004f1225: PUSH ESI
// 004f1226: PUSH EDI
// 004f1227: JMP 0x004f0f1c
//   XREF to: 004f0f1c (UNCONDITIONAL_JUMP)
// 004f122c: MOV ESI,0x1
//   Label: LAB_004f122c
// 004f1231: JMP 0x004f117c
//   XREF to: 004f117c (UNCONDITIONAL_JUMP)
// 004f1236: XOR ESI,ESI
//   Label: LAB_004f1236
// 004f1238: JMP 0x004f11be
//   XREF to: 004f11be (UNCONDITIONAL_JUMP)
// 004f123a: CMP dword ptr [EBX + 0xbe28],0x2
//   Label: LAB_004f123a
// 004f1241: JZ 0x004f11d6
//   XREF to: 004f11d6 (CONDITIONAL_JUMP)
// 004f1243: PUSH EBX
// 004f1244: CALL core_hero.cpp_FUN_004f2af0
//   XREF to: 004f2af0 (UNCONDITIONAL_CALL)
// 004f1249: XOR EDI,EDI
// 004f124b: ADD ESP,0x4
// 004f124e: TEST EAX,EAX
// 004f1250: JNZ 0x004f11d6
//   XREF to: 004f11d6 (CONDITIONAL_JUMP)
// 004f1252: PUSH EBX
// 004f1253: CALL core_hero.cpp_FUN_004f2d70
//   XREF to: 004f2d70 (UNCONDITIONAL_CALL)
// 004f1258: ADD ESP,0x4
// 004f125b: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f125f: TEST EAX,EAX
// 004f1261: JBE 0x004f1268
//   XREF to: 004f1268 (CONDITIONAL_JUMP)
// 004f1263: CMP EAX,0x1
// 004f1266: JNZ 0x004f1296
//   XREF to: 004f1296 (CONDITIONAL_JUMP)
// 004f1268: CMP dword ptr [ESP + 0x74],0x0
//   Label: LAB_004f1268
//   XREF to: Stack[-0x1c] (READ)
// 004f126d: JNZ 0x004f11d6
//   XREF to: 004f11d6 (CONDITIONAL_JUMP)
// 004f1273: PUSH EBX
// 004f1274: CALL core_hero.cpp_FUN_004f2c40
//   XREF to: 004f2c40 (UNCONDITIONAL_CALL)
// 004f1279: ADD ESP,0x4
// 004f127c: TEST EAX,EAX
// 004f127e: JNZ 0x004f11d6
//   XREF to: 004f11d6 (CONDITIONAL_JUMP)
// 004f1284: PUSH EBX
// 004f1285: CALL core_hero.cpp_FUN_004f2f50
//   XREF to: 004f2f50 (UNCONDITIONAL_CALL)
// 004f128a: ADD ESP,0x4
// 004f128d: TEST EAX,EAX
// 004f128f: JNZ 0x004f12a1
//   XREF to: 004f12a1 (CONDITIONAL_JUMP)
// 004f1291: JMP 0x004f11da
//   XREF to: 004f11da (UNCONDITIONAL_JUMP)
// 004f1296: PUSH EBX
//   Label: LAB_004f1296
// 004f1297: CALL core_hero.cpp_FUN_004f2ed0
//   XREF to: 004f2ed0 (UNCONDITIONAL_CALL)
// 004f129c: ADD ESP,0x4
// 004f129f: JMP 0x004f1268
//   XREF to: 004f1268 (UNCONDITIONAL_JUMP)
// 004f12a1: PUSH EBX
//   Label: LAB_004f12a1
// 004f12a2: CALL core_hero.cpp_FUN_004f30f0
//   XREF to: 004f30f0 (UNCONDITIONAL_CALL)
// 004f12a7: ADD ESP,0x4
// 004f12aa: JMP 0x004f11d6
//   XREF to: 004f11d6 (UNCONDITIONAL_JUMP)
// 004f12af: MOV ESI,0xf
//   Label: LAB_004f12af
// 004f12b4: JMP 0x004f11f7
//   XREF to: 004f11f7 (UNCONDITIONAL_JUMP)
// 004f12b9: PUSH EAX
//   Label: LAB_004f12b9
// 004f12ba: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f12bf: MOV EAX,dword ptr [EAX + 0x24]
// 004f12c2: ADD ESP,0x4
// 004f12c5: CMP EAX,0xa
// 004f12c8: JA 0x004f0f24
//   XREF to: 004f0f24 (CONDITIONAL_JUMP)
// 004f12ce: JMP dword ptr [EAX*0x4 + 0x4f0e14]
//   Label: switchD
//   XREF to: 004f0f24 (COMPUTED_JUMP)
//   XREF to: 004f10e8 (COMPUTED_JUMP)
//   XREF to: 004f1143 (COMPUTED_JUMP)
//   XREF to: 004f0e14 (DATA)
// 004f12d5: MOV dword ptr [EBX + 0x2598],EAX
//   Label: LAB_004f12d5
// 004f12db: JMP 0x004f1041
//   XREF to: 004f1041 (UNCONDITIONAL_JUMP)
// 004f12e0: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_004f12e0
// 004f12e7: JZ 0x004f1054
//   XREF to: 004f1054 (CONDITIONAL_JUMP)
// 004f12ed: PUSH 0x1
// 004f12ef: PUSH 0x11
// 004f12f1: PUSH EDI
// 004f12f2: JMP 0x004f104c
//   XREF to: 004f104c (UNCONDITIONAL_JUMP)
// 004f12f7: FLD float ptr [EBP + 0x18]
//   Label: LAB_004f12f7
//   XREF to: Stack[0x8] (READ)
// 004f12fa: FMUL double ptr [0x0062e933]
//   XREF to: 0062e933 (READ)
// 004f1300: LEA ESI,[EBX + 0x23ac]
// 004f1306: FLD float ptr [EBX + 0x242c]
// 004f130c: FXCH
// 004f130e: FSUBR ST0,ST1
// 004f1310: LEA EAX,[EBX + 0x241c]
// 004f1316: FSTP ST1
// 004f1318: FSTP float ptr [EBX + 0x242c]
// 004f131e: FLD float ptr [ESI]
// 004f1320: FADD float ptr [EAX]
// 004f1322: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (WRITE)
// 004f1326: FLD float ptr [ESI + 0x4]
// 004f1329: FADD float ptr [EAX + 0x4]
// 004f132c: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (WRITE)
// 004f1330: FLD float ptr [ESI + 0x8]
// 004f1333: FADD float ptr [EAX + 0x8]
// 004f1336: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x34] (WRITE)
// 004f133a: MOV dword ptr [ESI + 0x8],0x0
// 004f1341: MOV EDX,dword ptr [ESI + 0x8]
// 004f1344: MOV dword ptr [ESI + 0x4],EDX
// 004f1347: MOV EDX,dword ptr [ESI + 0x4]
// 004f134a: MOV dword ptr [ESI],EDX
// 004f134c: MOV dword ptr [EAX + 0x8],0x0
// 004f1353: MOV EDX,dword ptr [EAX + 0x8]
// 004f1356: MOV dword ptr [EAX + 0x4],EDX
// 004f1359: MOV EDX,dword ptr [EAX + 0x4]
// 004f135c: MOV dword ptr [EAX],EDX
// 004f135e: LEA EAX,[EBX + 0x158]
// 004f1364: PUSH EAX
// 004f1365: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f136a: MOV EAX,dword ptr [EAX + 0x24]
// 004f136d: ADD ESP,0x4
// 004f1370: CMP EAX,0xe
// 004f1373: JNZ 0x004f13e1
//   XREF to: 004f13e1 (CONDITIONAL_JUMP)
// 004f1375: XOR EDX,EDX
//   Label: LAB_004f1375
// 004f1377: MOV dword ptr [ESP + 0x58],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 004f137b: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 004f137f: MOV dword ptr [ESP + 0x5c],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 004f1383: LEA EAX,[EBX + 0x2428]
//   Label: LAB_004f1383
// 004f1389: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f138c: FLD float ptr [EAX]
// 004f138e: FMUL ST1
// 004f1390: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x6c] (WRITE)
// 004f1394: FLD float ptr [EAX + 0x4]
// 004f1397: FMUL ST1
// 004f1399: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x68] (WRITE)
// 004f139d: FMUL float ptr [EAX + 0x8]
// 004f13a0: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (READ)
// 004f13a4: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (READ)
// 004f13a8: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x6c] (READ)
// 004f13ac: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x34] (READ)
// 004f13b0: FXCH
// 004f13b2: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x3c] (WRITE)
// 004f13b6: FXCH
// 004f13b8: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x68] (READ)
// 004f13bc: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x3c] (DATA)
// 004f13c0: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (WRITE)
// 004f13c4: FXCH
// 004f13c6: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x64] (WRITE)
// 004f13ca: PUSH EAX
// 004f13cb: FADD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x64] (READ)
// 004f13cf: PUSH EBX
// 004f13d0: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x34] (WRITE)
// 004f13d4: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 004f13d9: ADD ESP,0x8
// 004f13dc: JMP 0x004f1054
//   XREF to: 004f1054 (UNCONDITIONAL_JUMP)
// 004f13e1: CMP EAX,0xf
//   Label: LAB_004f13e1
// 004f13e4: JZ 0x004f1375
//   XREF to: 004f1375 (CONDITIONAL_JUMP)
// 004f13e6: JMP 0x004f1383
//   XREF to: 004f1383 (UNCONDITIONAL_JUMP)
