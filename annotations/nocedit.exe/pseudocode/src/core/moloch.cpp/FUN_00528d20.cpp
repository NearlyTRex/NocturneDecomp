// Name: core_moloch.cpp_FUN_00528d20
// Address: 00528d20
// Address Range: [[00528d20, 005293a1]]
// Convention: unknown
// Signature: undefined core_moloch.cpp_FUN_00528d20()
// Globals:
//   TerminatedCString s_s_confused_while_walking_00639da5
//   TerminatedCString s_moloch_h_dfm_00639dcf
//   TerminatedCString s_moloch_d_dfm_00639ddc
//   TerminatedCString s_moloch_d_dfm_00639de9
//   TerminatedCString s_moloch_h_dfm_00639df6
//   undefined4 DAT_00639e05
//   undefined4 DAT_00639e0d
//   undefined4 DAT_00639e15
//   undefined4 DAT_00639e1d
//   undefined4 DAT_00639e25
//   undefined4 DAT_00639e2d
//   undefined4 DAT_00639e35
//   undefined4 DAT_00639e3d
//   undefined4 DAT_00661938
//   CConsole* g_CConsolePtr = 0083b1a4
//   CEventList* g_CEventListPtr = 02d05310
//   CGame* g_CGamePtr = 02d81a9c
//   CConsole g_ConsolePtr
//   undefined4 DAT_02d05310
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cc4
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408c10
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_FUN_0040cd70
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00428f40
//   core_charactr.cpp_CCharacter_FUN_00429820
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ca70
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_moloch.cpp_FUN_005293b0
//   core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900
//   core_morph.cpp_CallToFreeSomething1_FUN_0052b430
//   core_morph.cpp_CMorph_getReady_FUN_0052b680
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_FUN_0052ddb0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e000
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrDoSomething20_FUN_005a1510
//   core_skeleton.cpp_FUN_005a0840
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_moloch.cpp_FUN_00528d20(undefined4 param_1, undefined4 param_2)
    */

void core_moloch_cpp_FUN_00528d20(void)

{
  CDemonActor *this_ptr;
  CGame *pCVar1;
  int iVar2;
  CVector3f *pCVar3;
  float fVar4;
  BADSPACEBASE *in_ESP;
  uint uVar5;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float fStack_1b04;
  SCollisionInfo *in_stack_ffffe50c;
  CVector3f local_44 [3];
  float fStack_20;
  float local_1c;
  float local_18;
  int local_14;
  
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x54f0) == 4) {
    return;
  }
  iVar2 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar2 == 0) {
    return;
  }
  fVar4 = *(float *)in_stack_00000004[1].base_actor.actor_name - in_stack_00000008;
  *(float *)in_stack_00000004[1].base_actor.actor_name = fVar4;
  if (fVar4 < 0.0) {
    in_stack_00000004[1].base_actor.actor_name[0] = '\0';
    in_stack_00000004[1].base_actor.actor_name[1] = '\0';
    in_stack_00000004[1].base_actor.actor_name[2] = '\0';
    in_stack_00000004[1].base_actor.actor_name[3] = '\0';
  }
  (in_stack_00000004->model).padding_0x0[0x225c] = '\0';
  (in_stack_00000004->model).padding_0x0[0x225d] = '\0';
  (in_stack_00000004->model).padding_0x0[0x225e] = '\0';
  (in_stack_00000004->model).padding_0x0[0x225f] = '\0';
  *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x2258) =
       *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x225c);
  *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x2254) =
       *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x2258);
  fVar4 = in_stack_00000008;
  while (pCVar1 = g_CGamePtr, 0.0 < fVar4) {
    core_motion_cpp_CMotionController_advance_FUN_0052d610();
    core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
  }
  fVar4 = (float)_DAT_00639e05;
  *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x28) =
       *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x225c);
  *(float *)(in_stack_00000004->field2_0x240c + 0x2c) = in_stack_00000008 * fVar4;
  if (pCVar1->letterbox_mode != 0) {
    *(float *)(in_stack_00000004->field2_0x240c + 0x2c) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x2c) * (float)_DAT_00639e0d;
  }
  iVar2 = core_charactr_cpp_CCharacter_FUN_0042ca70(in_stack_00000004);
  if (iVar2 == 0) {
    if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 4) == 2) {
      core_moloch_cpp_FUN_005293b0();
    }
    iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0();
    uVar5 = *(uint *)(iVar2 + 0x24);
    if ((((uVar5 == 0) || (uVar5 < 2)) || (uVar5 == 2)) &&
       (*(int *)(in_stack_00000004->field2_0x240c + 4) != 0)) {
      uVar5 = (uint)(*(int *)(in_stack_00000004[1].base_actor.actor_name + 8) != 0);
      if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) != 0) {
        uVar5 = 2;
      }
      if (in_stack_00000004[1].base_actor.location.position.x != 0.0) {
        if (*(int *)(in_stack_00000004[2].cloth_data + 0x77ac) == 0) {
          core_moloch_cpp_PlaySoundAbtMolochMorphing_FUN_00529900();
        }
        in_stack_00000004[1].base_actor.location.position.x = 0.0;
      }
      *(float *)(in_stack_00000004->field2_0x240c + 0xc) =
           (float)in_stack_00000004[1].base_actor.location.area_id *
           *(float *)(in_stack_00000004->field2_0x240c + 0x2c);
      iVar2 = core_motion_cpp_CMotionController_FUN_0052dab0();
      if (uVar5 != *(uint *)(iVar2 + 0x24)) goto LAB_00528e32;
    }
  }
  else {
    uVar5 = *(uint *)(in_stack_00000004->field11_0x25a0 + 0x10);
    if (((uVar5 < 2) || (uVar5 < 3)) || (uVar5 != 3)) {
LAB_00528e32:
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
    }
    else {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s confused while walking to scriptDest!\n");
    }
  }
  if (in_stack_00000004->grabbed_by == (CDemonActor *)0x0) {
    *(float *)(in_stack_00000004->field2_0x240c + 0x20) =
         *(float *)(in_stack_00000004->field2_0x240c + 0x20) -
         in_stack_00000008 * (float)_DAT_00639e15;
    fStack_20 = *(float *)(in_stack_00000004->field2_0x240c + 0x1c) * in_stack_00000008;
    local_1c = *(float *)(in_stack_00000004->field2_0x240c + 0x20) * in_stack_00000008;
    local_18 = in_stack_00000008 * *(float *)(in_stack_00000004->field2_0x240c + 0x24);
    (in_stack_00000004->model).padding_0x0[0x225c] = '\0';
    (in_stack_00000004->model).padding_0x0[0x225d] = '\0';
    (in_stack_00000004->model).padding_0x0[0x225e] = '\0';
    (in_stack_00000004->model).padding_0x0[0x225f] = '\0';
    *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x2258) =
         *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x225c);
    *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x2254) =
         *(undefined4 *)((in_stack_00000004->model).padding_0x0 + 0x2258);
    in_stack_00000004->field2_0x240c[0x18] = '\0';
    in_stack_00000004->field2_0x240c[0x19] = '\0';
    in_stack_00000004->field2_0x240c[0x1a] = '\0';
    in_stack_00000004->field2_0x240c[0x1b] = '\0';
    *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x14) =
         *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x18);
    *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x10) =
         *(undefined4 *)(in_stack_00000004->field2_0x240c + 0x14);
    core_charactr_cpp_CCharacter_FUN_00428f40(in_stack_00000004);
  }
  else {
    if (in_stack_00000004->grabbed_type == 0) {
      pCVar3 = core_actor_cpp_CDemonActor_FUN_00408f10(&in_stack_00000004->base_actor);
      pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(local_44,pCVar3);
      fStack_1b04 = core_actor_cpp_FUN_0040cd70(pCVar3->y);
      if (fStack_1b04 < (float)_DAT_00639e1d) {
        fStack_1b04 = fStack_1b04 + _DAT_00639e25;
      }
      if ((float)_DAT_00639e2d < fStack_1b04) {
        fStack_1b04 = fStack_1b04 + _DAT_00639e35;
      }
      fVar4 = in_stack_00000008 * (float)_DAT_00639e3d;
      if (fStack_1b04 < -fVar4) {
        fStack_1b04 = -fVar4;
      }
      if (fVar4 < fStack_1b04) {
        fStack_1b04 = fVar4;
      }
      (in_stack_00000004->base_actor).orient.bank =
           (in_stack_00000004->base_actor).orient.bank + fStack_1b04;
      core_actor_cpp_CDemonActor_FUN_00408c10(&in_stack_00000004->base_actor);
    }
    this_ptr = in_stack_00000004->grabbed_by;
    pCVar3 = (CVector3f *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
    fVar4 = (**(code **)(local_14 + 0x124))(this_ptr,(float)in_stack_00000004,pCVar3);
    if (fVar4 == 0.0) {
      in_stack_00000004->grabbed_by = (CDemonActor *)0x0;
    }
    else if ((in_stack_00000004->grabbed_by != (CDemonActor *)0x0) &&
            (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x14) == 0)) goto LAB_00528f8e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
  }
LAB_00528f8e:
  core_charactr_cpp_CCharacter_FUN_00429820(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
  (*(in_stack_00000004->base_actor).metadata.vtable[1].hasCollision)
            (&in_stack_00000004->base_actor,in_stack_ffffe50c);
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  if (*(int *)(in_stack_00000004[2].cloth_data + 0x77ac) == 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x77a8) == 0) {
      iVar2 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                        (g_CEventListPtr,in_stack_00000004[2].cloth_data + 0x7818);
      if (iVar2 != 0) {
        core_moloch_cpp_PlaySoundAbtMolochMorphing_FUN_00529900();
        return;
      }
    }
    else {
      iVar2 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                        (g_CEventListPtr,in_stack_00000004[2].cloth_data + 0x77b4);
      if (iVar2 != 0) {
        core_moloch_cpp_PlaySoundAbtMolochMorphing_FUN_00529900();
        return;
      }
    }
  }
  else {
    core_motion_cpp_CMotionController_FUN_0052dab0();
    core_motion_cpp_CMotionController_FUN_0052ddb0();
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059e000();
    in_stack_00000008 = *(float *)(in_stack_00000004[2].cloth_data + 0x77b0) + in_stack_00000008;
    *(float *)(in_stack_00000004[2].cloth_data + 0x77b0) = in_stack_00000008;
    if (_DAT_00661938 < in_stack_00000008) {
      if (*(int *)(in_stack_00000004[2].cloth_data + 0x77a8) == 0) {
        in_stack_00000004[2].cloth_data[0x77a8] = '\x01';
        in_stack_00000004[2].cloth_data[0x77a9] = '\0';
        in_stack_00000004[2].cloth_data[0x77aa] = '\0';
        in_stack_00000004[2].cloth_data[0x77ab] = '\0';
      }
      else {
        in_stack_00000004[2].cloth_data[0x77a8] = '\0';
        in_stack_00000004[2].cloth_data[0x77a9] = '\0';
        in_stack_00000004[2].cloth_data[0x77aa] = '\0';
        in_stack_00000004[2].cloth_data[0x77ab] = '\0';
      }
      in_stack_00000004[2].cloth_data[0x77ac] = '\0';
      in_stack_00000004[2].cloth_data[0x77ad] = '\0';
      in_stack_00000004[2].cloth_data[0x77ae] = '\0';
      in_stack_00000004[2].cloth_data[0x77af] = '\0';
      in_stack_00000004[2].cloth_data[0x77b0] = '\0';
      in_stack_00000004[2].cloth_data[0x77b1] = '\0';
      in_stack_00000004[2].cloth_data[0x77b2] = '\0';
      in_stack_00000004[2].cloth_data[0x77b3] = '\0';
      core_skeleton_cpp_CDeformableModelInstance_GetModelPtrDoSomething20_FUN_005a1510();
      core_motion_cpp_CMotionController_FUN_0052dab0();
      core_skeleton_cpp_FUN_005a0840();
      core_skeleton_cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450();
      core_motion_cpp_CMotionController_FUN_0052ddb0();
      core_skeleton_cpp_FUN_005a0840();
      core_skeleton_cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450();
      core_morph_cpp_CallToFreeSomething1_FUN_0052b430();
      core_morph_cpp_CallToFreeSomething1_FUN_0052b430();
      core_morph_cpp_CMorph_getReady_FUN_0052b680();
      return;
    }
  }
  return;
}


// Assembly code:
// 00528d20: PUSH EBX
//   Label: core_moloch.cpp_FUN_00528d20
// 00528d21: PUSH ESI
// 00528d22: PUSH EDI
// 00528d23: PUSH EBP
// 00528d24: MOV EBP,ESP
// 00528d26: SUB ESP,0x1b08
// 00528d2c: AND ESP,0xfffffff8
// 00528d2f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00528d32: CMP dword ptr [EBX + 0x1fbd0],0x4
// 00528d39: JNZ 0x00528d42
//   XREF to: 00528d42 (CONDITIONAL_JUMP)
// 00528d3b: MOV ESP,EBP
//   Label: LAB_00528d3b
// 00528d3d: POP EBP
// 00528d3e: POP EDI
// 00528d3f: POP ESI
// 00528d40: POP EBX
// 00528d41: RET
// 00528d42: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_00528d42
//   XREF to: Stack[0x8] (READ)
// 00528d45: PUSH EBX
// 00528d46: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 00528d4b: ADD ESP,0x8
// 00528d4e: TEST EAX,EAX
// 00528d50: JZ 0x00528d3b
//   XREF to: 00528d3b (CONDITIONAL_JUMP)
// 00528d52: FLD float ptr [EBX + 0xbe24]
// 00528d58: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00528d5b: FST float ptr [EBX + 0xbe24]
// 00528d61: FLDZ
// 00528d63: FCOMPP
// 00528d65: FNSTSW AX
// 00528d67: SAHF
// 00528d68: JA 0x00528db6
//   XREF to: 00528db6 (CONDITIONAL_JUMP)
// 00528d6a: LEA EAX,[EBX + 0x23ac]
//   Label: LAB_00528d6a
// 00528d70: MOV dword ptr [EAX + 0x8],0x0
// 00528d77: MOV EDX,dword ptr [EAX + 0x8]
// 00528d7a: MOV dword ptr [EAX + 0x4],EDX
// 00528d7d: MOV EDX,dword ptr [EAX + 0x4]
// 00528d80: MOV dword ptr [EAX],EDX
// 00528d82: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00528d85: LEA ESI,[EBX + 0x158]
// 00528d8b: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1b14] (WRITE)
// 00528d8f: FLD float ptr [ESP + 0x4]
//   Label: LAB_00528d8f
//   XREF to: Stack[-0x1b14] (READ)
// 00528d93: FLDZ
// 00528d95: FCOMPP
// 00528d97: FNSTSW AX
// 00528d99: SAHF
// 00528d9a: JNC 0x00528dc2
//   XREF to: 00528dc2 (CONDITIONAL_JUMP)
// 00528d9c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1b14] (DATA)
// 00528da0: PUSH EAX
// 00528da1: PUSH ESI
// 00528da2: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 00528da7: ADD ESP,0x8
// 00528daa: PUSH EAX
// 00528dab: PUSH EBX
// 00528dac: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 00528db1: ADD ESP,0x8
// 00528db4: JMP 0x00528d8f
//   XREF to: 00528d8f (UNCONDITIONAL_JUMP)
// 00528db6: MOV dword ptr [EBX + 0xbe24],0x0
//   Label: LAB_00528db6
// 00528dc0: JMP 0x00528d6a
//   XREF to: 00528d6a (UNCONDITIONAL_JUMP)
// 00528dc2: FLD float ptr [EBP + 0x18]
//   Label: LAB_00528dc2
//   XREF to: Stack[0x8] (READ)
// 00528dc5: FMUL double ptr [0x00639e05]
//   XREF to: 00639e05 (READ)
// 00528dcb: FLD float ptr [EBX + 0x23b4]
// 00528dd1: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00528dd6: FSTP float ptr [EBX + 0x2434]
// 00528ddc: FSTP float ptr [EBX + 0x2438]
// 00528de2: CMP dword ptr [EAX + 0x228],0x0
//   XREF to: 02d81cc4 (READ)
// 00528de9: JZ 0x00528dfd
//   XREF to: 00528dfd (CONDITIONAL_JUMP)
// 00528deb: FLD float ptr [EBX + 0x2438]
// 00528df1: FMUL double ptr [0x00639e0d]
//   XREF to: 00639e0d (READ)
// 00528df7: FSTP float ptr [EBX + 0x2438]
// 00528dfd: PUSH dword ptr [EBP + 0x18]
//   Label: LAB_00528dfd
//   XREF to: Stack[0x8] (READ)
// 00528e00: PUSH EBX
// 00528e01: CALL core_charactr.cpp_CCharacter_FUN_0042ca70
//   XREF to: 0042ca70 (UNCONDITIONAL_CALL)
// 00528e06: ADD ESP,0x8
// 00528e09: TEST EAX,EAX
// 00528e0b: JZ 0x0052904e
//   XREF to: 0052904e (CONDITIONAL_JUMP)
// 00528e11: MOV EAX,dword ptr [EBX + 0x25b0]
// 00528e17: LEA ESI,[EBX + 0x158]
// 00528e1d: CMP EAX,0x2
// 00528e20: JNC 0x00529037
//   XREF to: 00529037 (CONDITIONAL_JUMP)
// 00528e26: CMP EAX,0x1
// 00528e29: JNZ 0x0052903e
//   XREF to: 0052903e (CONDITIONAL_JUMP)
// 00528e2f: PUSH EAX
// 00528e30: PUSH EAX
// 00528e31: PUSH ESI
//   Label: LAB_00528e31
// 00528e32: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_00528e32
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00528e37: ADD ESP,0xc
//   Label: LAB_00528e37
// 00528e3a: MOV EDX,dword ptr [EBX + 0x2598]
//   Label: LAB_00528e3a
// 00528e40: TEST EDX,EDX
// 00528e42: JZ 0x00529144
//   XREF to: 00529144 (CONDITIONAL_JUMP)
// 00528e48: CMP dword ptr [EBX + 0x259c],0x0
// 00528e4f: JNZ 0x00528f27
//   XREF to: 00528f27 (CONDITIONAL_JUMP)
// 00528e55: LEA EAX,[EDX + 0x20]
// 00528e58: PUSH EAX
// 00528e59: LEA EAX,[ESP + 0x1ac0]
//   XREF to: Stack[-0x5c] (DATA)
// 00528e60: PUSH EAX
// 00528e61: PUSH EBX
// 00528e62: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00528e67: ADD ESP,0xc
// 00528e6a: PUSH EAX
// 00528e6b: LEA EAX,[ESP + 0x1acc]
//   XREF to: Stack[-0x50] (DATA)
// 00528e72: PUSH EAX
// 00528e73: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 00528e78: ADD ESP,0x8
// 00528e7b: PUSH dword ptr [EAX + 0x4]
// 00528e7e: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 00528e83: MOV dword ptr [ESP + 0x1b08],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00528e8a: FLD float ptr [ESP + 0x1b08]
//   XREF to: Stack[-0x14] (READ)
// 00528e91: ADD ESP,0x4
// 00528e94: FST float ptr [ESP]
//   XREF to: Stack[-0x1b18] (DATA)
// 00528e97: FCOMP double ptr [0x00639e1d]
//   XREF to: 00639e1d (READ)
// 00528e9d: FNSTSW AX
// 00528e9f: SAHF
// 00528ea0: JNC 0x00528eae
//   XREF to: 00528eae (CONDITIONAL_JUMP)
// 00528ea2: FLD float ptr [ESP]
//   XREF to: Stack[-0x1b18] (DATA)
// 00528ea5: FADD float ptr [0x00639e25]
//   XREF to: 00639e25 (READ)
// 00528eab: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1b18] (DATA)
// 00528eae: FLD float ptr [ESP]
//   Label: LAB_00528eae
//   XREF to: Stack[-0x1b18] (DATA)
// 00528eb1: FCOMP double ptr [0x00639e2d]
//   XREF to: 00639e2d (READ)
// 00528eb7: FNSTSW AX
// 00528eb9: SAHF
// 00528eba: JBE 0x00528ec8
//   XREF to: 00528ec8 (CONDITIONAL_JUMP)
// 00528ebc: FLD float ptr [ESP]
//   XREF to: Stack[-0x1b18] (DATA)
// 00528ebf: FADD float ptr [0x00639e35]
//   XREF to: 00639e35 (READ)
// 00528ec5: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1b18] (DATA)
// 00528ec8: FLD float ptr [EBP + 0x18]
//   Label: LAB_00528ec8
//   XREF to: Stack[0x8] (READ)
// 00528ecb: FMUL double ptr [0x00639e3d]
//   XREF to: 00639e3d (READ)
// 00528ed1: FLD float ptr [ESP]
//   XREF to: Stack[-0x1b18] (DATA)
// 00528ed4: FXCH
// 00528ed6: FST float ptr [ESP + 0x1b00]
//   XREF to: Stack[-0x18] (WRITE)
// 00528edd: FCHS
// 00528edf: FSTP float ptr [ESP + 0x1afc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00528ee6: FCOMP float ptr [ESP + 0x1afc]
//   XREF to: Stack[-0x1c] (READ)
// 00528eed: FNSTSW AX
// 00528eef: SAHF
// 00528ef0: JNC 0x00528efc
//   XREF to: 00528efc (CONDITIONAL_JUMP)
// 00528ef2: MOV EAX,dword ptr [ESP + 0x1afc]
//   XREF to: Stack[-0x1c] (READ)
// 00528ef9: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1b18] (DATA)
// 00528efc: FLD float ptr [ESP]
//   Label: LAB_00528efc
//   XREF to: Stack[-0x1b18] (DATA)
// 00528eff: FCOMP float ptr [ESP + 0x1b00]
//   XREF to: Stack[-0x18] (READ)
// 00528f06: FNSTSW AX
// 00528f08: SAHF
// 00528f09: JBE 0x00528f15
//   XREF to: 00528f15 (CONDITIONAL_JUMP)
// 00528f0b: MOV EAX,dword ptr [ESP + 0x1b00]
//   XREF to: Stack[-0x18] (READ)
// 00528f12: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1b18] (DATA)
// 00528f15: FLD float ptr [EBX + 0x34]
//   Label: LAB_00528f15
// 00528f18: FADD float ptr [ESP]
//   XREF to: Stack[-0x1b18] (DATA)
// 00528f1b: PUSH EBX
// 00528f1c: FSTP float ptr [EBX + 0x34]
// 00528f1f: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 00528f24: ADD ESP,0x4
// 00528f27: MOV ESI,dword ptr [EBX + 0x2598]
//   Label: LAB_00528f27
// 00528f2d: MOV EAX,dword ptr [ESI + 0x154]
// 00528f33: PUSH 0x0
// 00528f35: MOV dword ptr [ESP + 0x1b08],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00528f3c: LEA EAX,[ESP + 0x1ad8]
//   XREF to: Stack[-0x44] (DATA)
// 00528f43: PUSH EAX
// 00528f44: LEA EDI,[EBX + 0x158]
// 00528f4a: PUSH EDI
// 00528f4b: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00528f50: ADD ESP,0xc
// 00528f53: PUSH EAX
// 00528f54: PUSH EBX
// 00528f55: MOV EAX,dword ptr [ESP + 0x1b0c]
//   XREF to: Stack[-0x14] (READ)
// 00528f5c: PUSH ESI
// 00528f5d: CALL dword ptr [EAX + 0x124]
// 00528f63: ADD ESP,0xc
// 00528f66: TEST EAX,EAX
// 00528f68: JZ 0x00529122
//   XREF to: 00529122 (CONDITIONAL_JUMP)
// 00528f6e: CMP dword ptr [EBX + 0x2598],0x0
// 00528f75: JNZ 0x0052912d
//   XREF to: 0052912d (CONDITIONAL_JUMP)
// 00528f7b: PUSH 0x1
//   Label: LAB_00528f7b
// 00528f7d: PUSH 0x0
// 00528f7f: LEA EAX,[EBX + 0x158]
// 00528f85: PUSH EAX
// 00528f86: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_00528f86
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00528f8b: ADD ESP,0xc
// 00528f8e: PUSH EBX
//   Label: LAB_00528f8e
// 00528f8f: CALL core_charactr.cpp_CCharacter_FUN_00429820
//   XREF to: 00429820 (UNCONDITIONAL_CALL)
// 00528f94: ADD ESP,0x4
// 00528f97: LEA ESI,[EBX + 0x158]
// 00528f9d: PUSH ESI
// 00528f9e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 00528fa3: ADD ESP,0x4
// 00528fa6: MOV EAX,dword ptr [EBX + 0x154]
// 00528fac: PUSH EBX
// 00528fad: CALL dword ptr [EAX + 0x120]
// 00528fb3: ADD ESP,0x4
// 00528fb6: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00528fb9: PUSH EBX
// 00528fba: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 00528fbf: MOV EDX,dword ptr [EBX + 0x21e8c]
// 00528fc5: ADD ESP,0x8
// 00528fc8: TEST EDX,EDX
// 00528fca: JNZ 0x00529228
//   XREF to: 00529228 (CONDITIONAL_JUMP)
// 00528fd0: CMP dword ptr [EBX + 0x21e88],0x0
// 00528fd7: JZ 0x00529374
//   XREF to: 00529374 (CONDITIONAL_JUMP)
// 00528fdd: LEA EAX,[EBX + 0x21e94]
// 00528fe3: PUSH EAX
// 00528fe4: MOV EDI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00528fea: PUSH EDI
//   XREF to: 02d05310 (DATA)
// 00528feb: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00528ff0: ADD ESP,0x8
// 00528ff3: TEST EAX,EAX
// 00528ff5: JZ 0x00528d3b
//   XREF to: 00528d3b (CONDITIONAL_JUMP)
// 00528ffb: PUSH EBX
// 00528ffc: CALL core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900
//   XREF to: 00529900 (UNCONDITIONAL_CALL)
// 00529001: ADD ESP,0x4
// 00529004: MOV ESP,EBP
// 00529006: POP EBP
// 00529007: POP EDI
// 00529008: POP ESI
// 00529009: POP EBX
// 0052900a: RET
// 0052900b: PUSH 0x1
//   Label: LAB_0052900b
// 0052900d: PUSH 0x0
// 0052900f: PUSH ESI
// 00529010: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00529015: ADD ESP,0xc
// 00529018: PUSH EBX
// 00529019: PUSH 0x639da5
//   XREF to: 00639da5 (DATA)
// 0052901e: MOV EAX,[0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 00529023: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 00529024: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00529029: JMP 0x00528e37
//   XREF to: 00528e37 (UNCONDITIONAL_JUMP)
// 0052902e: PUSH 0x1
//   Label: LAB_0052902e
// 00529030: PUSH 0x1
// 00529032: JMP 0x00528e31
//   XREF to: 00528e31 (UNCONDITIONAL_JUMP)
// 00529037: JBE 0x0052902e
//   Label: LAB_00529037
//   XREF to: 0052902e (CONDITIONAL_JUMP)
// 00529039: CMP EAX,0x3
// 0052903c: JZ 0x0052900b
//   XREF to: 0052900b (CONDITIONAL_JUMP)
// 0052903e: PUSH 0x1
//   Label: LAB_0052903e
// 00529040: PUSH 0x0
// 00529042: LEA EAX,[EBX + 0x158]
// 00529048: PUSH EAX
// 00529049: JMP 0x00528e32
//   XREF to: 00528e32 (UNCONDITIONAL_JUMP)
// 0052904e: CMP dword ptr [EBX + 0xbe28],0x2
//   Label: LAB_0052904e
// 00529055: JNZ 0x00529063
//   XREF to: 00529063 (CONDITIONAL_JUMP)
// 00529057: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052905a: PUSH EBX
// 0052905b: CALL core_moloch.cpp_FUN_005293b0
//   XREF to: 005293b0 (UNCONDITIONAL_CALL)
// 00529060: ADD ESP,0x8
// 00529063: LEA EAX,[EBX + 0x158]
//   Label: LAB_00529063
// 00529069: PUSH EAX
// 0052906a: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0052906f: MOV EAX,dword ptr [EAX + 0x24]
// 00529072: ADD ESP,0x4
// 00529075: CMP EAX,0x1
// 00529078: JNC 0x0052910e
//   XREF to: 0052910e (CONDITIONAL_JUMP)
// 0052907e: TEST EAX,EAX
// 00529080: JNZ 0x00528e3a
//   XREF to: 00528e3a (CONDITIONAL_JUMP)
// 00529086: CMP dword ptr [EBX + 0x2410],0x0
//   Label: LAB_00529086
// 0052908d: JZ 0x00528e3a
//   XREF to: 00528e3a (CONDITIONAL_JUMP)
// 00529093: MOV EAX,dword ptr [EBX + 0xbe2c]
// 00529099: XOR ESI,ESI
// 0052909b: TEST EAX,EAX
// 0052909d: JZ 0x005290a4
//   XREF to: 005290a4 (CONDITIONAL_JUMP)
// 0052909f: MOV ESI,0x1
// 005290a4: CMP dword ptr [EBX + 0xbe30],0x0
//   Label: LAB_005290a4
// 005290ab: JZ 0x005290b2
//   XREF to: 005290b2 (CONDITIONAL_JUMP)
// 005290ad: MOV ESI,0x2
// 005290b2: CMP dword ptr [EBX + 0xbe44],0x0
//   Label: LAB_005290b2
// 005290b9: JZ 0x005290ce
//   XREF to: 005290ce (CONDITIONAL_JUMP)
// 005290bb: CMP dword ptr [EBX + 0x21e8c],0x0
// 005290c2: JZ 0x00529103
//   XREF to: 00529103 (CONDITIONAL_JUMP)
// 005290c4: MOV dword ptr [EBX + 0xbe44],0x0
//   Label: LAB_005290c4
// 005290ce: FLD float ptr [EBX + 0xbe50]
//   Label: LAB_005290ce
// 005290d4: LEA EDI,[EBX + 0x158]
// 005290da: FMUL float ptr [EBX + 0x2438]
// 005290e0: PUSH EDI
// 005290e1: FSTP float ptr [EBX + 0x2418]
// 005290e7: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005290ec: MOV EAX,dword ptr [EAX + 0x24]
// 005290ef: ADD ESP,0x4
// 005290f2: CMP ESI,EAX
// 005290f4: JZ 0x00528e3a
//   XREF to: 00528e3a (CONDITIONAL_JUMP)
// 005290fa: PUSH 0x1
// 005290fc: PUSH ESI
// 005290fd: PUSH EDI
// 005290fe: JMP 0x00528e32
//   XREF to: 00528e32 (UNCONDITIONAL_JUMP)
// 00529103: PUSH EBX
//   Label: LAB_00529103
// 00529104: CALL core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900
//   XREF to: 00529900 (UNCONDITIONAL_CALL)
// 00529109: ADD ESP,0x4
// 0052910c: JMP 0x005290c4
//   XREF to: 005290c4 (UNCONDITIONAL_JUMP)
// 0052910e: JBE 0x00529086
//   Label: LAB_0052910e
//   XREF to: 00529086 (CONDITIONAL_JUMP)
// 00529114: CMP EAX,0x2
// 00529117: JZ 0x00529086
//   XREF to: 00529086 (CONDITIONAL_JUMP)
// 0052911d: JMP 0x00528e3a
//   XREF to: 00528e3a (UNCONDITIONAL_JUMP)
// 00529122: MOV dword ptr [EBX + 0x2598],EAX
//   Label: LAB_00529122
// 00529128: JMP 0x00528f7b
//   XREF to: 00528f7b (UNCONDITIONAL_JUMP)
// 0052912d: CMP dword ptr [EBX + 0xbe38],0x0
//   Label: LAB_0052912d
// 00529134: JZ 0x00528f8e
//   XREF to: 00528f8e (CONDITIONAL_JUMP)
// 0052913a: PUSH 0x1
// 0052913c: PUSH 0x0
// 0052913e: PUSH EDI
// 0052913f: JMP 0x00528f86
//   XREF to: 00528f86 (UNCONDITIONAL_JUMP)
// 00529144: FLD float ptr [EBP + 0x18]
//   Label: LAB_00529144
//   XREF to: Stack[0x8] (READ)
// 00529147: FLD ST0
// 00529149: FMUL double ptr [0x00639e15]
//   XREF to: 00639e15 (READ)
// 0052914f: FLD float ptr [EBX + 0x242c]
// 00529155: FXCH
// 00529157: FSUBR ST0,ST1
// 00529159: LEA EAX,[EBX + 0x2428]
// 0052915f: FSTP ST1
// 00529161: FSTP float ptr [EBX + 0x242c]
// 00529167: FLD float ptr [EAX]
// 00529169: FMUL ST1
// 0052916b: FSTP float ptr [ESP + 0x1ae0]
//   XREF to: Stack[-0x38] (WRITE)
// 00529172: FLD float ptr [EAX + 0x4]
// 00529175: FMUL ST1
// 00529177: LEA ESI,[EBX + 0x23ac]
// 0052917d: FSTP float ptr [ESP + 0x1ae4]
//   XREF to: Stack[-0x34] (WRITE)
// 00529184: FMUL float ptr [EAX + 0x8]
// 00529187: LEA EAX,[EBX + 0x241c]
// 0052918d: FSTP float ptr [ESP + 0x1ae8]
//   XREF to: Stack[-0x30] (WRITE)
// 00529194: FLD float ptr [ESI]
// 00529196: FADD float ptr [EAX]
// 00529198: FST float ptr [ESP + 0x1aa4]
//   XREF to: Stack[-0x74] (WRITE)
// 0052919f: FLD float ptr [ESI + 0x4]
// 005291a2: FADD float ptr [EAX + 0x4]
// 005291a5: FXCH
// 005291a7: FADD float ptr [ESP + 0x1ae0]
//   XREF to: Stack[-0x38] (READ)
// 005291ae: FXCH
// 005291b0: FST float ptr [ESP + 0x1aa8]
//   XREF to: Stack[-0x70] (WRITE)
// 005291b7: FLD float ptr [ESI + 0x8]
// 005291ba: FADD float ptr [EAX + 0x8]
// 005291bd: FXCH
// 005291bf: FADD float ptr [ESP + 0x1ae4]
//   XREF to: Stack[-0x34] (READ)
// 005291c6: FXCH
// 005291c8: FSTP float ptr [ESP + 0x1aac]
//   XREF to: Stack[-0x6c] (WRITE)
// 005291cf: FXCH
// 005291d1: FSTP float ptr [ESP + 0x1ab0]
//   XREF to: Stack[-0x68] (WRITE)
// 005291d8: FLD float ptr [ESP + 0x1aac]
//   XREF to: Stack[-0x6c] (READ)
// 005291df: FADD float ptr [ESP + 0x1ae8]
//   XREF to: Stack[-0x30] (READ)
// 005291e6: FXCH
// 005291e8: FSTP float ptr [ESP + 0x1ab4]
//   XREF to: Stack[-0x64] (WRITE)
// 005291ef: FSTP float ptr [ESP + 0x1ab8]
//   XREF to: Stack[-0x60] (WRITE)
// 005291f6: MOV dword ptr [ESI + 0x8],EDX
// 005291f9: MOV ECX,dword ptr [ESI + 0x8]
// 005291fc: MOV dword ptr [ESI + 0x4],ECX
// 005291ff: MOV ECX,dword ptr [ESI + 0x4]
// 00529202: MOV dword ptr [ESI],ECX
// 00529204: MOV dword ptr [EAX + 0x8],EDX
// 00529207: MOV EDX,dword ptr [EAX + 0x8]
// 0052920a: MOV dword ptr [EAX + 0x4],EDX
// 0052920d: MOV EDX,dword ptr [EAX + 0x4]
// 00529210: MOV dword ptr [EAX],EDX
// 00529212: LEA EAX,[ESP + 0x1ab0]
//   XREF to: Stack[-0x68] (DATA)
// 00529219: PUSH EAX
// 0052921a: PUSH EBX
// 0052921b: CALL core_charactr.cpp_CCharacter_FUN_00428f40
//   XREF to: 00428f40 (UNCONDITIONAL_CALL)
// 00529220: ADD ESP,0x8
// 00529223: JMP 0x00528f8e
//   XREF to: 00528f8e (UNCONDITIONAL_JUMP)
// 00529228: PUSH ESI
//   Label: LAB_00529228
// 00529229: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0052922e: ADD ESP,0x4
// 00529231: SUB ESP,0x4
// 00529234: MOV EDX,dword ptr [ESI + 0x8]
// 00529237: MOV dword ptr [ESP],EDX
// 0052923a: PUSH EAX
// 0052923b: LEA ESI,[EBX + 0x1fbd4]
// 00529241: PUSH ESI
// 00529242: CALL core_motion.cpp_CMotionController_FUN_0052ddb0
//   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
// 00529247: ADD ESP,0xc
// 0052924a: PUSH ESI
// 0052924b: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 00529250: ADD ESP,0x4
// 00529253: FLD float ptr [EBX + 0x21e90]
// 00529259: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052925c: FST float ptr [EBX + 0x21e90]
// 00529262: FCOMP float ptr [0x00661938]
//   XREF to: 00661938 (READ)
// 00529268: FNSTSW AX
// 0052926a: SAHF
// 0052926b: JBE 0x00528d3b
//   XREF to: 00528d3b (CONDITIONAL_JUMP)
// 00529271: CMP dword ptr [EBX + 0x21e88],0x0
// 00529278: JNZ 0x00529354
//   XREF to: 00529354 (CONDITIONAL_JUMP)
// 0052927e: MOV EDX,0x639ddc
//   XREF to: 00639ddc (PARAM)
// 00529283: MOV EDI,0x639dcf
//   XREF to: 00639dcf (DATA)
// 00529288: MOV dword ptr [EBX + 0x21e88],0x1
// 00529292: MOV dword ptr [ESP + 0x1af8],EDX
//   XREF to: 00639ddc (DATA)
// 00529299: LEA EAX,[ESP + 0x8]
//   Label: LAB_00529299
// 0052929d: PUSH EAX
// 0052929e: LEA ESI,[EBX + 0x1fbd4]
// 005292a4: MOV dword ptr [EBX + 0x21e8c],0x0
// 005292ae: PUSH ESI
// 005292af: MOV dword ptr [EBX + 0x21e90],0x0
// 005292b9: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrDoSomething20_FUN_005a1510
//   XREF to: 005a1510 (UNCONDITIONAL_CALL)
// 005292be: ADD ESP,0x8
// 005292c1: PUSH ESI
// 005292c2: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005292c7: MOV dword ptr [ESP + 0x1b08],EAX
// 005292ce: ADD ESP,0x4
// 005292d1: PUSH EDI
//   XREF to: 00639dcf (DATA)
// 005292d2: LEA EDI,[EBX + 0x158]
// 005292d8: MOV EAX,dword ptr [ESI + 0x8]
// 005292db: PUSH EDI
// 005292dc: MOV dword ptr [ESP + 0x1afc],EAX
// 005292e3: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005292e8: ADD ESP,0x8
// 005292eb: PUSH EDI
// 005292ec: CALL core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 005292f1: ADD ESP,0x4
// 005292f4: MOV EAX,dword ptr [ESP + 0x1b04]
// 005292fb: PUSH dword ptr [ESP + 0x1af4]
// 00529302: PUSH EAX
// 00529303: PUSH EDI
// 00529304: CALL core_motion.cpp_CMotionController_FUN_0052ddb0
//   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)
// 00529309: ADD ESP,0xc
// 0052930c: MOV EDX,dword ptr [ESP + 0x1af8]
//   XREF to: 00639ddc (PARAM)
// 00529313: PUSH EDX
//   XREF to: 00639ddc (DATA)
// 00529314: PUSH ESI
// 00529315: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0052931a: ADD ESP,0x8
// 0052931d: PUSH ESI
// 0052931e: CALL core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 00529323: ADD ESP,0x4
// 00529326: PUSH EDI
// 00529327: PUSH 0x0
// 00529329: ADD EBX,0x21f5c
// 0052932f: PUSH EBX
// 00529330: CALL core_morph.cpp_CallToFreeSomething1_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 00529335: ADD ESP,0xc
// 00529338: PUSH ESI
// 00529339: PUSH 0x1
// 0052933b: PUSH EBX
// 0052933c: CALL core_morph.cpp_CallToFreeSomething1_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 00529341: ADD ESP,0xc
// 00529344: PUSH EBX
// 00529345: CALL core_morph.cpp_CMorph_getReady_FUN_0052b680
//   XREF to: 0052b680 (UNCONDITIONAL_CALL)
// 0052934a: ADD ESP,0x4
// 0052934d: MOV ESP,EBP
// 0052934f: POP EBP
// 00529350: POP EDI
// 00529351: POP ESI
// 00529352: POP EBX
// 00529353: RET
// 00529354: MOV EDI,0x639de9
//   Label: LAB_00529354
//   XREF to: 00639de9 (DATA)
// 00529359: MOV ECX,0x639df6
//   XREF to: 00639df6 (DATA)
// 0052935e: MOV dword ptr [EBX + 0x21e88],0x0
// 00529368: MOV dword ptr [ESP + 0x1af8],ECX
//   XREF to: 00639df6 (DATA)
// 0052936f: JMP 0x00529299
//   XREF to: 00529299 (UNCONDITIONAL_JUMP)
// 00529374: LEA EAX,[EBX + 0x21ef8]
//   Label: LAB_00529374
// 0052937a: PUSH EAX
// 0052937b: MOV ESI,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
// 00529381: PUSH ESI
//   XREF to: 02d05310 (DATA)
// 00529382: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00529387: ADD ESP,0x8
// 0052938a: TEST EAX,EAX
// 0052938c: JZ 0x00528d3b
//   XREF to: 00528d3b (CONDITIONAL_JUMP)
// 00529392: PUSH EBX
// 00529393: CALL core_moloch.cpp_PlaySoundAbtMolochMorphing_FUN_00529900
//   XREF to: 00529900 (UNCONDITIONAL_CALL)
// 00529398: ADD ESP,0x4
// 0052939b: MOV ESP,EBP
// 0052939d: POP EBP
// 0052939e: POP EDI
// 0052939f: POP ESI
// 005293a0: POP EBX
// 005293a1: RET
