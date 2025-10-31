// Name: core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80
// Address: 0053bc80
// Address Range: [[0053bc80, 0053bce0]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80()
// Cross-references:
//   core_msnedit.cpp_DeleteActors_FUN_0053df90 (0053df90) at 0053e0a5 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053ab64 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Really_delete_actor_s_0063c71b
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   core_mission.cpp_CDemonMission_FUN_00523f20
//   core_msnedit.cpp_FUN_00538ea0
//   core_msnedit.cpp_FUN_0053bcf0
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_ReallyDeleteActorQuestion(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_msnedit_cpp_ReallyDeleteActorQuestion_FUN_0053bc80(void)

{
  int iVar1;
  CDemonMission *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_00000008 != 0) {
    if (in_stack_0000000c == 0) {
      iVar1 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"Really delete actor %s",in_stack_00000008);
      if (iVar1 == 0) {
        return;
      }
    }
    if (in_stack_00000008 == *(int *)(in_stack_00000004->field2_0xc + 0x1c)) {
      core_msnedit_cpp_FUN_0053bcf0();
    }
    core_msnedit_cpp_FUN_00538ea0();
    core_mission_cpp_CDemonMission_FUN_00523f20(in_stack_00000004);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
  }
  return;
}


// Assembly code:
// 0053bc80: PUSH EBX
//   Label: core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80
// 0053bc81: PUSH ESI
// 0053bc82: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0053bc86: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0053bc8a: TEST ESI,ESI
// 0053bc8c: JZ 0x0053bcc2
//   XREF to: 0053bcc2 (CONDITIONAL_JUMP)
// 0053bc8e: CMP dword ptr [ESP + 0x14],0x0
//   XREF to: Stack[0xc] (READ)
// 0053bc93: JZ 0x0053bcc5
//   XREF to: 0053bcc5 (CONDITIONAL_JUMP)
// 0053bc95: CMP ESI,dword ptr [EBX + 0x28]
//   Label: LAB_0053bc95
// 0053bc98: JNZ 0x0053bca3
//   XREF to: 0053bca3 (CONDITIONAL_JUMP)
// 0053bc9a: PUSH EBX
// 0053bc9b: CALL core_msnedit.cpp_FUN_0053bcf0
//   XREF to: 0053bcf0 (UNCONDITIONAL_CALL)
// 0053bca0: ADD ESP,0x4
// 0053bca3: PUSH ESI
//   Label: LAB_0053bca3
// 0053bca4: PUSH EBX
// 0053bca5: CALL core_msnedit.cpp_FUN_00538ea0
//   XREF to: 00538ea0 (UNCONDITIONAL_CALL)
// 0053bcaa: ADD ESP,0x8
// 0053bcad: PUSH 0x1
// 0053bcaf: PUSH ESI
// 0053bcb0: PUSH EBX
// 0053bcb1: CALL core_mission.cpp_CDemonMission_FUN_00523f20
//   XREF to: 00523f20 (UNCONDITIONAL_CALL)
// 0053bcb6: ADD ESP,0xc
// 0053bcb9: PUSH EBX
// 0053bcba: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 0053bcbf: ADD ESP,0x4
// 0053bcc2: POP ESI
//   Label: LAB_0053bcc2
// 0053bcc3: POP EBX
// 0053bcc4: RET
// 0053bcc5: PUSH ESI
//   Label: LAB_0053bcc5
// 0053bcc6: PUSH 0x63c71b
//   XREF to: 0063c71b (DATA)
// 0053bccb: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053bcd1: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0053bcd2: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 0053bcd7: ADD ESP,0xc
// 0053bcda: TEST EAX,EAX
// 0053bcdc: JNZ 0x0053bc95
//   XREF to: 0053bc95 (CONDITIONAL_JUMP)
// 0053bcde: POP ESI
// 0053bcdf: POP EBX
// 0053bce0: RET
