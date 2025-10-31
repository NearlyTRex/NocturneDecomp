// Name: core_hiram.cpp_FUN_004f4550
// Address: 004f4550
// Address Range: [[004f4550, 004f468d]]
// Convention: unknown
// Signature: undefined core_hiram.cpp_FUN_004f4550()
// Globals:
//   TerminatedCString s_GlassHiram_0062edfc
//   CEventList* g_CEventListInstance = 02d05310
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   undefined4 DAT_02d05310
//   undefined4 g_CGlassClassInfo.name_hash
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_FUN_00408c10
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   core_glass.cpp_FUN_004eaef0
//   core_mission.cpp_CDemonMission_FUN_00524030
//   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020

#include "nocturne.h"

/* Signature: undefined1 actors_npc_hiram.cpp_FUN_004f4550(undefined4 param_1, undefined4 param_2)
    */

void core_hiram_cpp_FUN_004f4550(void)

{
  CCharacter *this_ptr;
  int iVar1;
  CDemonActor *pCVar2;
  uint unaff_ESI;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  
  this_ptr = in_stack_00000004;
  iVar1 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = core_motion_cpp_CMotionController_FUN_0052dab0();
  if (*(int *)(iVar1 + 0x24) != 1) {
    iVar1 = core_event_cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
                      (g_CEventListInstance,in_stack_00000004[2].cloth_data + 0x5028);
    if (iVar1 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00();
      pCVar2 = (CDemonActor *)core_mission_cpp_CDemonMission_FUN_00524030(g_CDemonMissionPtr);
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar2,unaff_ESI);
      if (pCVar2 != (CDemonActor *)0x0) {
        core_glass_cpp_FUN_004eaef0();
      }
    }
  }
  in_stack_00000004 = (CCharacter *)in_stack_00000008;
  (this_ptr->model).padding_0x0[0x225c] = '\0';
  (this_ptr->model).padding_0x0[0x225d] = '\0';
  (this_ptr->model).padding_0x0[0x225e] = '\0';
  (this_ptr->model).padding_0x0[0x225f] = '\0';
  *(undefined4 *)((this_ptr->model).padding_0x0 + 0x2258) =
       *(undefined4 *)((this_ptr->model).padding_0x0 + 0x225c);
  *(undefined4 *)((this_ptr->model).padding_0x0 + 0x2254) =
       *(undefined4 *)((this_ptr->model).padding_0x0 + 0x2258);
  while( true ) {
    if ((float)in_stack_00000004 <= 0.0) break;
    in_stack_00000004 = (CCharacter *)core_motion_cpp_CMotionController_advance_FUN_0052d610();
    if (in_stack_00000004 == (CCharacter *)0x29a) {
      in_stack_00000004 = (CCharacter *)0x1;
      core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(this_ptr);
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
  core_actor_cpp_CDemonActor_FUN_00408c10(&this_ptr->base_actor);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e020();
  core_charactr_cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0(this_ptr);
  return;
}


// Assembly code:
// 004f4550: PUSH EBX
//   Label: core_hiram.cpp_FUN_004f4550
// 004f4551: PUSH ESI
// 004f4552: PUSH EDI
// 004f4553: PUSH EBP
// 004f4554: MOV EBP,ESP
// 004f4556: SUB ESP,0x4
// 004f4559: AND ESP,0xfffffff8
// 004f455c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f455f: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f4562: PUSH EBX
// 004f4563: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 004f4568: ADD ESP,0x8
// 004f456b: TEST EAX,EAX
// 004f456d: JNZ 0x004f4576
//   XREF to: 004f4576 (CONDITIONAL_JUMP)
// 004f456f: MOV ESP,EBP
// 004f4571: POP EBP
// 004f4572: POP EDI
// 004f4573: POP ESI
// 004f4574: POP EBX
// 004f4575: RET
// 004f4576: LEA ESI,[EBX + 0x158]
//   Label: LAB_004f4576
// 004f457c: PUSH ESI
// 004f457d: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f4582: MOV EAX,dword ptr [EAX + 0x24]
// 004f4585: ADD ESP,0x4
// 004f4588: CMP EAX,0x1
// 004f458b: JNZ 0x004f45ec
//   XREF to: 004f45ec (CONDITIONAL_JUMP)
// 004f458d: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_004f458d
//   XREF to: Stack[0x8] (READ)
// 004f4590: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 004f4593: LEA EAX,[EBX + 0x23ac]
// 004f4599: MOV dword ptr [EAX + 0x8],0x0
// 004f45a0: LEA ESI,[EBX + 0x158]
// 004f45a6: MOV EDX,dword ptr [EAX + 0x8]
// 004f45a9: MOV dword ptr [EAX + 0x4],EDX
// 004f45ac: MOV EDX,dword ptr [EAX + 0x4]
// 004f45af: MOV dword ptr [EAX],EDX
// 004f45b1: FLD float ptr [ESP]
//   Label: LAB_004f45b1
//   XREF to: Stack[-0x18] (DATA)
// 004f45b4: FLDZ
// 004f45b6: FCOMPP
// 004f45b8: FNSTSW AX
// 004f45ba: SAHF
// 004f45bb: JNC 0x004f4660
//   XREF to: 004f4660 (CONDITIONAL_JUMP)
// 004f45c1: MOV EAX,ESP
// 004f45c3: PUSH EAX
// 004f45c4: PUSH ESI
// 004f45c5: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 004f45ca: ADD ESP,0x8
// 004f45cd: CMP EAX,0x29a
// 004f45d2: JNZ 0x004f4651
//   XREF to: 004f4651 (CONDITIONAL_JUMP)
// 004f45d8: PUSH 0x1
// 004f45da: PUSH EBX
// 004f45db: MOV EDI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004f45e1: PUSH EDI
//   XREF to: 02f33740 (DATA)
// 004f45e2: CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   XREF to: 005240a0 (UNCONDITIONAL_CALL)
// 004f45e7: ADD ESP,0xc
// 004f45ea: JMP 0x004f45b1
//   XREF to: 004f45b1 (UNCONDITIONAL_JUMP)
// 004f45ec: LEA EAX,[EBX + 0x1f708]
//   Label: LAB_004f45ec
// 004f45f2: PUSH EAX
// 004f45f3: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 004f45f9: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 004f45fa: CALL core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 004f45ff: ADD ESP,0x8
// 004f4602: TEST EAX,EAX
// 004f4604: JZ 0x004f458d
//   XREF to: 004f458d (CONDITIONAL_JUMP)
// 004f4606: PUSH 0x1
// 004f4608: PUSH 0x1
// 004f460a: PUSH ESI
// 004f460b: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f4610: ADD ESP,0xc
// 004f4613: MOV ECX,dword ptr [0x02d83360]
//   XREF to: 02d83360 (READ)
// 004f4619: PUSH ECX
// 004f461a: PUSH 0x62edfc
//   XREF to: 0062edfc (DATA)
// 004f461f: MOV ESI,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 004f4625: PUSH ESI
//   XREF to: 02f33740 (DATA)
// 004f4626: CALL core_mission.cpp_CDemonMission_FUN_00524030
//   XREF to: 00524030 (UNCONDITIONAL_CALL)
// 004f462b: ADD ESP,0x8
// 004f462e: PUSH EAX
// 004f462f: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f4634: ADD ESP,0x8
// 004f4637: TEST EAX,EAX
// 004f4639: JZ 0x004f458d
//   XREF to: 004f458d (CONDITIONAL_JUMP)
// 004f463f: LEA ESI,[EAX + 0x20]
// 004f4642: PUSH ESI
// 004f4643: PUSH EAX
// 004f4644: CALL core_glass.cpp_FUN_004eaef0
//   XREF to: 004eaef0 (UNCONDITIONAL_CALL)
// 004f4649: ADD ESP,0x8
// 004f464c: JMP 0x004f458d
//   XREF to: 004f458d (UNCONDITIONAL_JUMP)
// 004f4651: PUSH EAX
//   Label: LAB_004f4651
// 004f4652: PUSH EBX
// 004f4653: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 004f4658: ADD ESP,0x8
// 004f465b: JMP 0x004f45b1
//   XREF to: 004f45b1 (UNCONDITIONAL_JUMP)
// 004f4660: PUSH ESI
//   Label: LAB_004f4660
// 004f4661: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004f4666: ADD ESP,0x4
// 004f4669: PUSH EBX
// 004f466a: CALL core_actor.cpp_CDemonActor_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 004f466f: ADD ESP,0x4
// 004f4672: PUSH ESI
// 004f4673: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020
//   XREF to: 0059e020 (UNCONDITIONAL_CALL)
// 004f4678: ADD ESP,0x4
// 004f467b: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004f467e: PUSH EBX
// 004f467f: CALL core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0
//   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)
// 004f4684: ADD ESP,0x8
// 004f4687: MOV ESP,EBP
// 004f4689: POP EBP
// 004f468a: POP EDI
// 004f468b: POP ESI
// 004f468c: POP EBX
// 004f468d: RET
