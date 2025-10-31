// Name: core_mission.cpp_CDemonMission_FUN_00523fb0
// Address: 00523fb0
// Address Range: [[00523fb0, 00524028]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_FUN_00523fb0(CDemonMission * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_FUN_005243a0 (005243a0) at 00524405 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00524760 (00524760) at 005247e2 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_process_FUN_00524250 (00524250) at 00524366 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 0052447b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538898 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d7b0 (0053d7b0) at 0053d807 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 (0053c140) at 0053c1d1 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 (00538ba0) at 00538c5d [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
// Function calls:
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   core_mission.cpp_CDemonMission_FUN_00523cf0
//   core_set.cpp_CDemonSet_load_FUN_00569410

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_FUN_00523fb0(CDemonMission *this_ptr)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000008;
  
  if (in_stack_00000008 != *(int *)this_ptr->field0_0x0) {
    *(int *)this_ptr->field0_0x0 = in_stack_00000008;
    core_set_cpp_CDemonSet_load_FUN_00569410
              (g_CDemonSetPtr,this_ptr->field4_0x148 + in_stack_00000008 * 0x100);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
    if (*(int *)(this_ptr->field6_0x54c + 0x338) == 0) {
      core_mission_cpp_CDemonMission_FUN_00523cf0(this_ptr);
    }
    iVar3 = 0;
    for (iVar2 = 0; iVar2 < (int)g_CDemonSetPtr->actor_list_ptr; iVar2 = iVar2 + 1) {
      pcVar1 = g_CDemonSetPtr->actor_list_data + iVar3;
      iVar3 = iVar3 + 4;
      (**(code **)(*(int *)(*(int *)pcVar1 + 0x154) + 0x48))();
    }
  }
  return;
}


// Assembly code:
// 00523fb0: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_FUN_00523fb0
// 00523fb1: PUSH ESI
// 00523fb2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00523fb6: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00523fba: CMP EAX,dword ptr [EBX]
// 00523fbc: JNZ 0x00523fc1
//   XREF to: 00523fc1 (CONDITIONAL_JUMP)
// 00523fbe: POP ESI
//   Label: LAB_00523fbe
// 00523fbf: POP EBX
// 00523fc0: RET
// 00523fc1: MOV EDX,EAX
//   Label: LAB_00523fc1
// 00523fc3: MOV dword ptr [EBX],EAX
// 00523fc5: SHL EDX,0x8
// 00523fc8: LEA EAX,[EBX + 0x148]
// 00523fce: ADD EAX,EDX
// 00523fd0: PUSH EAX
// 00523fd1: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 00523fd7: PUSH ECX
//   XREF to: 03114278 (DATA)
// 00523fd8: CALL core_set.cpp_CDemonSet_load_FUN_00569410
//   XREF to: 00569410 (UNCONDITIONAL_CALL)
// 00523fdd: ADD ESP,0x8
// 00523fe0: PUSH EBX
// 00523fe1: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 00523fe6: MOV ESI,dword ptr [EBX + 0x884]
// 00523fec: ADD ESP,0x4
// 00523fef: TEST ESI,ESI
// 00523ff1: JZ 0x0052401e
//   XREF to: 0052401e (CONDITIONAL_JUMP)
// 00523ff3: XOR ESI,ESI
//   Label: LAB_00523ff3
// 00523ff5: XOR EBX,EBX
// 00523ff7: MOV EAX,[0x006810c8]
//   Label: LAB_00523ff7
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 00523ffc: CMP EBX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 00524002: JGE 0x00523fbe
//   XREF to: 00523fbe (CONDITIONAL_JUMP)
// 00524004: MOV EAX,dword ptr [ESI + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
//   XREF to: 032613d4 (READ)
// 0052400b: PUSH EAX
// 0052400c: MOV EDX,dword ptr [EAX + 0x154]
// 00524012: ADD ESI,0x4
// 00524015: INC EBX
// 00524016: CALL dword ptr [EDX + 0x48]
// 00524019: ADD ESP,0x4
// 0052401c: JMP 0x00523ff7
//   XREF to: 00523ff7 (UNCONDITIONAL_JUMP)
// 0052401e: PUSH EBX
//   Label: LAB_0052401e
// 0052401f: CALL core_mission.cpp_CDemonMission_FUN_00523cf0
//   XREF to: 00523cf0 (UNCONDITIONAL_CALL)
// 00524024: ADD ESP,0x4
// 00524027: JMP 0x00523ff3
//   XREF to: 00523ff3 (UNCONDITIONAL_JUMP)
