// Name: core_msnedit.cpp_FUN_0053d7b0
// Address: 0053d7b0
// Address Range: [[0053d7b0, 0053d85a]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053d7b0()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538a49 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Preparing_actors_0063ccf4
//   TerminatedCString s_Rebuilding_waypoint_conn_0063cd06
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CEditorTools g_CEditorToolsPtr
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032690dc
//   undefined4 DAT_032690e0
// Function calls:
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   core_mission.cpp_CDemonMission_FUN_00523cf0
//   core_mission.cpp_CDemonMission_FUN_00523fb0
//   core_waypoint.cpp_FUN_005ec4f0
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053d7b0(undefined4 param_1) */

void core_msnedit_cpp_FUN_0053d7b0(void)

{
  int iVar1;
  int iVar2;
  CDemonMission *in_stack_00000004;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing actors.");
  iVar2 = 0;
  core_mission_cpp_CDemonMission_FUN_00523cf0(in_stack_00000004);
  if (0 < (int)in_stack_00000004->set_list) {
    do {
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Rebuilding waypoint connectivity in set %s");
      core_mission_cpp_CDemonMission_FUN_00523fb0(in_stack_00000004);
      core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
      for (iVar1 = 0; iVar1 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x5dc4); iVar1 = iVar1 + 1
          ) {
        core_waypoint_cpp_FUN_005ec4f0();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)in_stack_00000004->set_list);
  }
  return;
}


// Assembly code:
// 0053d7b0: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053d7b0
// 0053d7b1: PUSH ESI
// 0053d7b2: PUSH EDI
// 0053d7b3: PUSH EBP
// 0053d7b4: SUB ESP,0x4
// 0053d7b7: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0053d7bb: PUSH 0x63ccf4
//   XREF to: 0063ccf4 (DATA)
// 0053d7c0: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053d7c6: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053d7c7: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053d7cc: ADD ESP,0x8
// 0053d7cf: PUSH EBP
// 0053d7d0: XOR EDI,EDI
// 0053d7d2: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 0053d7d7: MOV ECX,dword ptr [EBP + 0x144]
// 0053d7dd: ADD ESP,0x4
// 0053d7e0: TEST ECX,ECX
// 0053d7e2: JLE 0x0053d840
//   XREF to: 0053d840 (CONDITIONAL_JUMP)
// 0053d7e4: LEA EAX,[EBP + 0x148]
// 0053d7ea: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0053d7ed: MOV EAX,dword ptr [ESP]
//   Label: LAB_0053d7ed
//   XREF to: Stack[-0x14] (DATA)
// 0053d7f0: PUSH EAX
// 0053d7f1: PUSH 0x63cd06
//   XREF to: 0063cd06 (DATA)
// 0053d7f6: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0053d7fc: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0053d7fd: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0053d802: ADD ESP,0xc
// 0053d805: PUSH EDI
// 0053d806: PUSH EBP
// 0053d807: CALL core_mission.cpp_CDemonMission_FUN_00523fb0
//   XREF to: 00523fb0 (UNCONDITIONAL_CALL)
// 0053d80c: ADD ESP,0x8
// 0053d80f: PUSH EBP
// 0053d810: XOR ESI,ESI
// 0053d812: XOR EBX,EBX
// 0053d814: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 0053d819: ADD ESP,0x4
//   Label: LAB_0053d819
// 0053d81c: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 0053d821: CMP ESI,dword ptr [EAX + 0x154e64]
//   XREF to: 032690dc (READ)
// 0053d827: JL 0x0053d848
//   XREF to: 0053d848 (CONDITIONAL_JUMP)
// 0053d829: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0053d82c: INC EDI
// 0053d82d: ADD EBX,0x100
// 0053d833: MOV ESI,dword ptr [EBP + 0x144]
// 0053d839: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x14] (DATA)
// 0053d83c: CMP EDI,ESI
// 0053d83e: JL 0x0053d7ed
//   XREF to: 0053d7ed (CONDITIONAL_JUMP)
// 0053d840: ADD ESP,0x4
//   Label: LAB_0053d840
// 0053d843: POP EBP
// 0053d844: POP EDI
// 0053d845: POP ESI
// 0053d846: POP EBX
// 0053d847: RET
// 0053d848: MOV EDX,dword ptr [EBX + EAX*0x1 + 0x154e68]
//   Label: LAB_0053d848
//   XREF to: 032690e0 (READ)
// 0053d84f: PUSH EDX
// 0053d850: ADD EBX,0x4
// 0053d853: INC ESI
// 0053d854: CALL core_waypoint.cpp_FUN_005ec4f0
//   XREF to: 005ec4f0 (UNCONDITIONAL_CALL)
// 0053d859: JMP 0x0053d819
//   XREF to: 0053d819 (UNCONDITIONAL_JUMP)
