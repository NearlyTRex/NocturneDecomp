// Name: core_passngr.cpp_FUN_00545ef0
// Address: 00545ef0
// Address Range: [[00545ef0, 005460b6]]
// Convention: unknown
// Signature: undefined core_passngr.cpp_FUN_00545ef0()
// Globals:
//   undefined4 DAT_00661f58
//   CEventList* g_CEventListPtr = 02d05310
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CEventList g_CEventListInstance
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_npc_passenger.cpp_FUN_00545ef0(undefined4 param_1, undefined4
   param_2) */

void core_passngr_cpp_FUN_00545ef0(void)

{
  CLocation *pCVar1;
  int iVar2;
  float fVar3;
  CDemonMission *this_ptr;
  SMotion *pSVar4;
  int iVar5;
  CVector3f *pCVar6;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float fStack_14;
  
  if (1.0 <= *(float *)(in_stack_00000004[2].cloth_data + 0x5d60)) {
    return;
  }
  pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                     (&(in_stack_00000004->model).motion_controller);
  iVar2 = pSVar4->state_index;
  if ((iVar2 == 1) || (iVar2 == 2)) {
    if ((iVar2 == 2) &&
       ((fVar3 = in_stack_00000008 / _DAT_00661f58 +
                 *(float *)(in_stack_00000004[2].cloth_data + 0x5d60),
        *(float *)(in_stack_00000004[2].cloth_data + 0x5d60) = fVar3, 1.0 <= fVar3 &&
        (*(int *)(in_stack_00000004[2].cloth_data + 0x5130) != 0)))) {
      core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
      this_ptr = g_CDemonMissionPtr;
      in_stack_00000004[2].cloth_data[0x5130] = '\0';
      in_stack_00000004[2].cloth_data[0x5131] = '\0';
      in_stack_00000004[2].cloth_data[0x5132] = '\0';
      in_stack_00000004[2].cloth_data[0x5133] = '\0';
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(this_ptr);
    }
  }
  else {
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,in_stack_00000004[2].cloth_data + 0x5028);
    if (iVar5 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,1,1);
      if (in_stack_00000004[2].cloth_data[0x50cc] != '\0') {
        (*((in_stack_00000004->base_actor).vtable)->playSound)
                  (&in_stack_00000004->base_actor,in_stack_00000004[2].cloth_data + 0x50cc);
        in_stack_00000004[2].cloth_data[0x50cc] = '\0';
      }
    }
  }
  fStack_14 = in_stack_00000008;
  (in_stack_00000004->model).accumulated_root_motion.z = 0.0;
  (in_stack_00000004->model).accumulated_root_motion.y =
       (in_stack_00000004->model).accumulated_root_motion.z;
  (in_stack_00000004->model).accumulated_root_motion.x =
       (in_stack_00000004->model).accumulated_root_motion.y;
  while (0.0 < fStack_14) {
    fStack_14 = (float)core_motion_cpp_CMotionController_advance_FUN_0052d610
                                 (&(in_stack_00000004->model).motion_controller);
    core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
  }
  if (iVar2 != 0) {
    pCVar6 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&in_stack_00000004->base_actor,(CVector3f *)&stack0xfffffff0,
                        &(in_stack_00000004->model).accumulated_root_motion);
    pCVar1 = &(in_stack_00000004->base_actor).location;
    (pCVar1->position).x = pCVar6->x + (pCVar1->position).x;
    (in_stack_00000004->base_actor).location.position.y =
         pCVar6->y + (in_stack_00000004->base_actor).location.position.y;
    (in_stack_00000004->base_actor).location.position.z =
         pCVar6->z + (in_stack_00000004->base_actor).location.position.z;
    iVar2 = *(int *)(in_stack_00000004[2].cloth_data + 0x5130);
    if (iVar2 != 0) {
      *(float *)(iVar2 + 0x20) = (pCVar1->position).x;
      *(float *)(iVar2 + 0x24) = (in_stack_00000004->base_actor).location.position.y;
      *(float *)(iVar2 + 0x28) = (in_stack_00000004->base_actor).location.position.z;
      *(int *)(iVar2 + 0x2c) = (in_stack_00000004->base_actor).location.area_id;
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(&in_stack_00000004->model)
  ;
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(in_stack_00000004);
  return;
}


// Assembly code:
// 00545ef0: PUSH EBX
//   Label: core_passngr.cpp_FUN_00545ef0
// 00545ef1: PUSH ESI
// 00545ef2: PUSH EDI
// 00545ef3: PUSH EBP
// 00545ef4: MOV EBP,ESP
// 00545ef6: SUB ESP,0x10
// 00545ef9: AND ESP,0xfffffff8
// 00545efc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00545eff: FLD float ptr [EBX + 0x20440]
// 00545f05: FLD1
// 00545f07: FCOMPP
// 00545f09: FNSTSW AX
// 00545f0b: SAHF
// 00545f0c: JA 0x00545f15
//   XREF to: 00545f15 (CONDITIONAL_JUMP)
// 00545f0e: MOV ESP,EBP
// 00545f10: POP EBP
// 00545f11: POP EDI
// 00545f12: POP ESI
// 00545f13: POP EBX
// 00545f14: RET
// 00545f15: LEA ESI,[EBX + 0x158]
//   Label: LAB_00545f15
// 00545f1b: PUSH ESI
// 00545f1c: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00545f21: MOV EAX,dword ptr [EAX + 0x24]
// 00545f24: ADD ESP,0x4
// 00545f27: MOV EDI,EAX
// 00545f29: CMP EAX,0x1
// 00545f2c: JZ 0x00545fd5
//   XREF to: 00545fd5 (CONDITIONAL_JUMP)
// 00545f32: CMP EAX,0x2
// 00545f35: JZ 0x00545fd5
//   XREF to: 00545fd5 (CONDITIONAL_JUMP)
// 00545f3b: LEA EAX,[EBX + 0x1f708]
// 00545f41: PUSH EAX
// 00545f42: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 00545f48: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 00545f49: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 00545f4e: ADD ESP,0x8
// 00545f51: TEST EAX,EAX
// 00545f53: JNZ 0x00545fa1
//   XREF to: 00545fa1 (CONDITIONAL_JUMP)
// 00545f55: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_00545f55
//   XREF to: Stack[0x8] (READ)
// 00545f58: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 00545f5b: LEA EAX,[EBX + 0x23ac]
// 00545f61: MOV dword ptr [EAX + 0x8],0x0
// 00545f68: LEA ESI,[EBX + 0x158]
// 00545f6e: MOV EDX,dword ptr [EAX + 0x8]
// 00545f71: MOV dword ptr [EAX + 0x4],EDX
// 00545f74: MOV EDX,dword ptr [EAX + 0x4]
// 00545f77: MOV dword ptr [EAX],EDX
// 00545f79: FLD float ptr [ESP]
//   Label: LAB_00545f79
//   XREF to: Stack[-0x20] (DATA)
// 00545f7c: FLDZ
// 00545f7e: FCOMPP
// 00545f80: FNSTSW AX
// 00545f82: SAHF
// 00545f83: JNC 0x0054603e
//   XREF to: 0054603e (CONDITIONAL_JUMP)
// 00545f89: MOV EAX,ESP
// 00545f8b: PUSH EAX
// 00545f8c: PUSH ESI
// 00545f8d: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 00545f92: ADD ESP,0x8
// 00545f95: PUSH EAX
// 00545f96: PUSH EBX
// 00545f97: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 00545f9c: ADD ESP,0x8
// 00545f9f: JMP 0x00545f79
//   XREF to: 00545f79 (UNCONDITIONAL_JUMP)
// 00545fa1: PUSH 0x1
//   Label: LAB_00545fa1
// 00545fa3: PUSH 0x1
// 00545fa5: PUSH ESI
// 00545fa6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00545fab: MOV AH,byte ptr [EBX + 0x1f7ac]
// 00545fb1: ADD ESP,0xc
// 00545fb4: TEST AH,AH
// 00545fb6: JZ 0x00545f55
//   XREF to: 00545f55 (CONDITIONAL_JUMP)
// 00545fb8: LEA ESI,[EBX + 0x1f7ac]
// 00545fbe: PUSH ESI
// 00545fbf: MOV EAX,dword ptr [EBX + 0x154]
// 00545fc5: PUSH EBX
// 00545fc6: CALL dword ptr [EAX + 0x24]
// 00545fc9: ADD ESP,0x8
// 00545fcc: MOV byte ptr [EBX + 0x1f7ac],0x0
// 00545fd3: JMP 0x00545f55
//   XREF to: 00545f55 (UNCONDITIONAL_JUMP)
// 00545fd5: CMP EDI,0x2
//   Label: LAB_00545fd5
// 00545fd8: JNZ 0x00545f55
//   XREF to: 00545f55 (CONDITIONAL_JUMP)
// 00545fde: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00545fe1: FDIV float ptr [0x00661f58]
//   XREF to: 00661f58 (READ)
// 00545fe7: FADD float ptr [EBX + 0x20440]
// 00545fed: FST float ptr [EBX + 0x20440]
// 00545ff3: FLD1
// 00545ff5: FCOMPP
// 00545ff7: FNSTSW AX
// 00545ff9: SAHF
// 00545ffa: JA 0x00545f55
//   XREF to: 00545f55 (CONDITIONAL_JUMP)
// 00546000: MOV EDX,dword ptr [EBX + 0x1f810]
// 00546006: TEST EDX,EDX
// 00546008: JZ 0x00545f55
//   XREF to: 00545f55 (CONDITIONAL_JUMP)
// 0054600e: PUSH EDX
// 0054600f: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 00546015: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 00546016: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 0054601b: ADD ESP,0x8
// 0054601e: PUSH 0x1
// 00546020: PUSH EBX
// 00546021: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 00546026: PUSH EAX
//   XREF to: 02f33740 (DATA)
// 00546027: MOV dword ptr [EBX + 0x1f810],0x0
// 00546031: CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   XREF to: 005240a0 (UNCONDITIONAL_CALL)
// 00546036: ADD ESP,0xc
// 00546039: JMP 0x00545f55
//   XREF to: 00545f55 (UNCONDITIONAL_JUMP)
// 0054603e: TEST EDI,EDI
//   Label: LAB_0054603e
// 00546040: JZ 0x00546095
//   XREF to: 00546095 (CONDITIONAL_JUMP)
// 00546042: LEA EAX,[EBX + 0x23ac]
// 00546048: PUSH EAX
// 00546049: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1c] (DATA)
// 0054604d: PUSH EAX
// 0054604e: PUSH EBX
// 0054604f: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 00546054: MOV ESI,EAX
// 00546056: LEA EAX,[EBX + 0x20]
// 00546059: FLD float ptr [ESI]
// 0054605b: FADD float ptr [EAX]
// 0054605d: FSTP float ptr [EAX]
// 0054605f: FLD float ptr [ESI + 0x4]
// 00546062: FADD float ptr [EAX + 0x4]
// 00546065: FSTP float ptr [EAX + 0x4]
// 00546068: FLD float ptr [ESI + 0x8]
// 0054606b: FADD float ptr [EAX + 0x8]
// 0054606e: FSTP float ptr [EAX + 0x8]
// 00546071: MOV ECX,dword ptr [EBX + 0x1f810]
// 00546077: ADD ESP,0xc
// 0054607a: TEST ECX,ECX
// 0054607c: JZ 0x00546095
//   XREF to: 00546095 (CONDITIONAL_JUMP)
// 0054607e: MOV EDX,dword ptr [EAX]
// 00546080: MOV dword ptr [ECX + 0x20],EDX
// 00546083: MOV EDX,dword ptr [EAX + 0x4]
// 00546086: MOV dword ptr [ECX + 0x24],EDX
// 00546089: MOV EDX,dword ptr [EAX + 0x8]
// 0054608c: MOV dword ptr [ECX + 0x28],EDX
// 0054608f: MOV EAX,dword ptr [EAX + 0xc]
// 00546092: MOV dword ptr [ECX + 0x2c],EAX
// 00546095: LEA EAX,[EBX + 0x158]
//   Label: LAB_00546095
// 0054609b: PUSH EAX
// 0054609c: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 005460a1: ADD ESP,0x4
// 005460a4: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005460a7: PUSH EBX
// 005460a8: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 005460ad: ADD ESP,0x8
// 005460b0: MOV ESP,EBP
// 005460b2: POP EBP
// 005460b3: POP EDI
// 005460b4: POP ESI
// 005460b5: POP EBX
// 005460b6: RET
