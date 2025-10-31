// Name: core_waypoint.cpp_FUN_005ec4f0
// Address: 005ec4f0
// Address Range: [[005ec4f0, 005ec5d6]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_FUN_005ec4f0()
// Cross-references:
//   core_msnedit.cpp_FUN_0053d7b0 (0053d7b0) at 0053d854 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWayPoint_FUN_005ec5e0 (005ec5e0) at 005ec5e6 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonMission g_CDemonMissionInstance
//   CDemonSet g_CDemonSetInstance
//   undefined4 DAT_032690dc
//   undefined4 DAT_032690e0
//   undefined4 DAT_032690e4
// Function calls:
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640
//   core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700
//   core_waypoint.cpp_FUN_005ebd40
//   core_waypoint.cpp_FUN_005ec830

#include "nocturne.h"

/* Signature: undefined1 actors_other_waypoint.cpp_FUN_005ec4f0(undefined4 param_1) */

void core_waypoint_cpp_FUN_005ec4f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  
  core_waypoint_cpp_FUN_005ec830();
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x370)) {
    do {
      iVar2 = iVar2 + 1;
      core_waypoint_cpp_CallWayPoint_removeAdj_FUN_005ec640();
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x370));
  }
  iVar3 = 0;
  iVar2 = 0;
  core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(g_CDemonMissionPtr);
  *(undefined4 *)(in_stack_00000004 + 0x370) = 0;
  do {
    if (*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x5dc4) <= iVar3) {
      return;
    }
    if ((((*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar2 + 0x5dc8) != in_stack_00000004) &&
         (*(int *)(*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + iVar2 + 0x5dc8) + 0x370) < 0x3c)) &&
        (iVar1 = core_waypoint_cpp_FUN_005ebd40(), iVar1 != 0)) &&
       (iVar1 = core_waypoint_cpp_FUN_005ebd40(), iVar1 != 0)) {
      core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700();
      core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700();
      if (0x3b < *(int *)(in_stack_00000004 + 0x370)) {
        return;
      }
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}


// Assembly code:
// 005ec4f0: PUSH EBX
//   Label: core_waypoint.cpp_FUN_005ec4f0
// 005ec4f1: PUSH ESI
// 005ec4f2: PUSH EDI
// 005ec4f3: PUSH EBP
// 005ec4f4: SUB ESP,0x8
// 005ec4f7: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005ec4fb: PUSH EBX
// 005ec4fc: CALL core_waypoint.cpp_FUN_005ec830
//   XREF to: 005ec830 (UNCONDITIONAL_CALL)
// 005ec501: XOR ESI,ESI
// 005ec503: MOV EDX,dword ptr [EBX + 0x370]
// 005ec509: ADD ESP,0x4
// 005ec50c: TEST EDX,EDX
// 005ec50e: JLE 0x005ec530
//   XREF to: 005ec530 (CONDITIONAL_JUMP)
// 005ec510: MOV EDI,EBX
// 005ec512: PUSH EBX
//   Label: LAB_005ec512
// 005ec513: MOV ECX,dword ptr [EDI + 0x374]
// 005ec519: PUSH ECX
// 005ec51a: ADD EDI,0x8
// 005ec51d: INC ESI
// 005ec51e: CALL core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640
//   XREF to: 005ec640 (UNCONDITIONAL_CALL)
// 005ec523: MOV EBP,dword ptr [EBX + 0x370]
// 005ec529: ADD ESP,0x8
// 005ec52c: CMP ESI,EBP
// 005ec52e: JL 0x005ec512
//   XREF to: 005ec512 (CONDITIONAL_JUMP)
// 005ec530: MOV EAX,[0x0067d550]
//   Label: LAB_005ec530
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 005ec535: PUSH EAX
//   XREF to: 02f33740 (DATA)
// 005ec536: XOR EDI,EDI
// 005ec538: XOR EBP,EBP
// 005ec53a: CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
//   XREF to: 00523e60 (UNCONDITIONAL_CALL)
// 005ec53f: ADD ESP,0x4
// 005ec542: LEA EAX,[EBX + 0x20]
// 005ec545: MOV dword ptr [EBX + 0x370],0x0
// 005ec54f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 005ec552: MOV EAX,[0x006810c8]
//   Label: LAB_005ec552
//   XREF to: 03114278 (DATA)
//   XREF to: 006810c8 (READ)
// 005ec557: CMP EDI,dword ptr [EAX + 0x154e64]
//   XREF to: 032690dc (READ)
// 005ec55d: JGE 0x005ec5cf
//   XREF to: 005ec5cf (CONDITIONAL_JUMP)
// 005ec563: MOV ESI,dword ptr [EAX + EBP*0x1 + 0x154e68]
//   XREF to: 032690e0 (READ)
//   XREF to: 032690e4 (READ)
// 005ec56a: CMP ESI,EBX
// 005ec56c: JNZ 0x005ec574
//   XREF to: 005ec574 (CONDITIONAL_JUMP)
// 005ec56e: INC EDI
//   Label: LAB_005ec56e
// 005ec56f: ADD EBP,0x4
// 005ec572: JMP 0x005ec552
//   XREF to: 005ec552 (UNCONDITIONAL_JUMP)
// 005ec574: CMP dword ptr [ESI + 0x370],0x3c
//   Label: LAB_005ec574
// 005ec57b: JGE 0x005ec56e
//   XREF to: 005ec56e (CONDITIONAL_JUMP)
// 005ec57d: PUSH 0x1
// 005ec57f: LEA EAX,[ESI + 0x20]
// 005ec582: PUSH EAX
// 005ec583: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005ec587: PUSH EDX
// 005ec588: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ec58c: CALL core_waypoint.cpp_FUN_005ebd40
//   XREF to: 005ebd40 (UNCONDITIONAL_CALL)
// 005ec591: ADD ESP,0xc
// 005ec594: TEST EAX,EAX
// 005ec596: JZ 0x005ec56e
//   XREF to: 005ec56e (CONDITIONAL_JUMP)
// 005ec598: PUSH 0x1
// 005ec59a: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 005ec59e: PUSH ECX
// 005ec59f: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005ec5a3: PUSH EAX
// 005ec5a4: CALL core_waypoint.cpp_FUN_005ebd40
//   XREF to: 005ebd40 (UNCONDITIONAL_CALL)
// 005ec5a9: ADD ESP,0xc
// 005ec5ac: TEST EAX,EAX
// 005ec5ae: JZ 0x005ec56e
//   XREF to: 005ec56e (CONDITIONAL_JUMP)
// 005ec5b0: PUSH ESI
// 005ec5b1: PUSH EBX
// 005ec5b2: CALL core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700
//   XREF to: 005ec700 (UNCONDITIONAL_CALL)
// 005ec5b7: ADD ESP,0x8
// 005ec5ba: PUSH EBX
// 005ec5bb: PUSH ESI
// 005ec5bc: CALL core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700
//   XREF to: 005ec700 (UNCONDITIONAL_CALL)
// 005ec5c1: MOV EDX,dword ptr [EBX + 0x370]
// 005ec5c7: ADD ESP,0x8
// 005ec5ca: CMP EDX,0x3c
// 005ec5cd: JL 0x005ec56e
//   XREF to: 005ec56e (CONDITIONAL_JUMP)
// 005ec5cf: ADD ESP,0x8
//   Label: LAB_005ec5cf
// 005ec5d2: POP EBP
// 005ec5d3: POP EDI
// 005ec5d4: POP ESI
// 005ec5d5: POP EBX
// 005ec5d6: RET
