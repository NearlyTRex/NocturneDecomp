// Name: core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
// Address: 00523e60
// Address Range: [[00523e60, 00523f17]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_FUN_00523f50 (00523f50) at 00523f7f [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00523fb0 (00523fb0) at 00523fe1 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 (00524a80) at 00524b7b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053bf42 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053b9f0 (0053b9f0) at 0053bbea [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d7b0 (0053d7b0) at 0053d814 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053dbde [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e310 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539497 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80 (0053bc80) at 0053bcba [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_FUN_005ec4f0 (005ec4f0) at 005ec53a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_00639133
//   TerminatedCString s_core_mission_cpp_00639147
//   TerminatedCString s_CDemonMission_buildSetAc_0063915b
//   CDemonSet* g_CDemonSetPtr = 03114278
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_FUN_00570fc0
//   core_setcolid.cpp_CDemonSet_FUN_005743e0

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  CDemonSet *pCVar1;
  
  g_CDemonSetPtr->actor_list_ptr = (void *)0x0;
  for (this_ptr_00 = this_ptr->first_actor; this_ptr_00 != (CDemonActor *)0x0;
      this_ptr_00 = this_ptr_00->next_actor) {
    core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
              (this_ptr_00,"..\\core\\mission.cpp",0x365);
    if ((this_ptr_00->location).area_id == *(int *)this_ptr->field0_0x0) {
      if (1999 < (int)g_CDemonSetPtr->actor_list_ptr) {
        g_CurrentFilename = "..\\core\\mission.cpp";
        g_CurrentLineNumber = 0x36d;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::buildSetActorList - Too many actors in current set!");
      }
      pCVar1 = g_CDemonSetPtr;
      *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + (int)g_CDemonSetPtr->actor_list_ptr * 4) =
           this_ptr_00;
      pCVar1->actor_list_ptr = (void *)((int)pCVar1->actor_list_ptr + 1);
    }
  }
  core_setcolid_cpp_CDemonSet_FUN_005743e0(g_CDemonSetPtr);
  core_set_cpp_CDemonSet_FUN_00570fc0(g_CDemonSetPtr);
  return;
}


// Assembly code:
// 00523e60: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
// 00523e61: PUSH ESI
// 00523e62: PUSH EDI
// 00523e63: PUSH EBP
// 00523e64: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00523e68: MOV EAX,[0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00523e6d: MOV dword ptr [EAX + 0x14d154],0x0
//   XREF to: 032613cc (WRITE)
// 00523e77: MOV EBX,dword ptr [ESI + 0x548]
// 00523e7d: TEST EBX,EBX
// 00523e7f: JZ 0x00523eb1
//   XREF to: 00523eb1 (CONDITIONAL_JUMP)
// 00523e81: MOV EDI,0x639147
//   XREF to: 00639147 (DATA)
// 00523e86: MOV EBP,0x36d
// 00523e8b: PUSH 0x365
//   Label: LAB_00523e8b
// 00523e90: PUSH 0x639133
//   XREF to: 00639133 (DATA)
// 00523e95: PUSH EBX
// 00523e96: CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
//   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
// 00523e9b: MOV EAX,dword ptr [EBX + 0x2c]
// 00523e9e: MOV EDX,dword ptr [ESI]
// 00523ea0: ADD ESP,0xc
// 00523ea3: CMP EAX,EDX
// 00523ea5: JZ 0x00523ed4
//   XREF to: 00523ed4 (CONDITIONAL_JUMP)
// 00523ea7: MOV EBX,dword ptr [EBX + 0x14c]
//   Label: LAB_00523ea7
// 00523ead: TEST EBX,EBX
// 00523eaf: JNZ 0x00523e8b
//   XREF to: 00523e8b (CONDITIONAL_JUMP)
// 00523eb1: MOV ECX,dword ptr [0x006810c8]
//   Label: LAB_00523eb1
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00523eb7: PUSH ECX
//   XREF to: 03114278 (DATA)
// 00523eb8: CALL core_setcolid.cpp_CDemonSet_FUN_005743e0
//   XREF to: 005743e0 (UNCONDITIONAL_CALL)
// 00523ebd: ADD ESP,0x4
// 00523ec0: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00523ec6: PUSH EBX
//   XREF to: 03114278 (DATA)
// 00523ec7: CALL core_set.cpp_CDemonSet_FUN_00570fc0
//   XREF to: 00570fc0 (UNCONDITIONAL_CALL)
// 00523ecc: ADD ESP,0x4
// 00523ecf: POP EBP
// 00523ed0: POP EDI
// 00523ed1: POP ESI
// 00523ed2: POP EBX
// 00523ed3: RET
// 00523ed4: MOV EAX,[0x006810c8]
//   Label: LAB_00523ed4
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00523ed9: CMP dword ptr [EAX + 0x14d154],0x7d0
//   XREF to: 032613cc (READ)
// 00523ee3: JL 0x00523efe
//   XREF to: 00523efe (CONDITIONAL_JUMP)
// 00523ee5: PUSH 0x63915b
//   XREF to: 0063915b (DATA)
// 00523eea: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00523ef0: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00523ef6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00523efb: ADD ESP,0x4
// 00523efe: MOV EAX,[0x006810c8]
//   Label: LAB_00523efe
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00523f03: MOV EDX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 00523f09: MOV dword ptr [EAX + EDX*0x4 + 0x14d158],EBX
//   XREF to: 032613d0 (WRITE)
// 00523f10: INC dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ_WRITE)
// 00523f16: JMP 0x00523ea7
//   XREF to: 00523ea7 (UNCONDITIONAL_JUMP)
