// Name: core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640
// Address: 005ec640
// Address Range: [[005ec640, 005ec689]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640()
// Cross-references:
//   core_waypoint.cpp_CWayPoint_FUN_005ec610 (005ec610) at 005ec630 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700 (005ec700) at 005ec718 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_FUN_005ec4f0 (005ec4f0) at 005ec51e [UNCONDITIONAL_CALL]
// Function calls:
//   core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0

#include "nocturne.h"

/* Signature: undefined1 actors_other_waypoint.cpp_CallWayPoint_removeAdj(undefined4 param_1,
   undefined4 param_2) */

void core_waypoint_cpp_CallWayPoint_removeAdj_FUN_005ec640(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = 0;
  iVar2 = in_stack_00000004;
  if (0 < *(int *)(in_stack_00000004 + 0x370)) {
    do {
      while (in_stack_00000008 == *(int *)(iVar2 + 0x374)) {
        core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0();
        if (*(int *)(in_stack_00000004 + 0x370) <= iVar1) {
          return;
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar1 < *(int *)(in_stack_00000004 + 0x370));
  }
  return;
}


// Assembly code:
// 005ec640: PUSH EBX
//   Label: core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640
// 005ec641: PUSH ESI
// 005ec642: PUSH EDI
// 005ec643: PUSH EBP
// 005ec644: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ec648: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ec64c: MOV EDX,dword ptr [EDI + 0x370]
// 005ec652: XOR EBX,EBX
// 005ec654: TEST EDX,EDX
// 005ec656: JLE 0x005ec66e
//   XREF to: 005ec66e (CONDITIONAL_JUMP)
// 005ec658: MOV ESI,EDI
// 005ec65a: CMP EBP,dword ptr [ESI + 0x374]
//   Label: LAB_005ec65a
// 005ec660: JZ 0x005ec673
//   XREF to: 005ec673 (CONDITIONAL_JUMP)
// 005ec662: INC EBX
// 005ec663: ADD ESI,0x8
// 005ec666: CMP EBX,dword ptr [EDI + 0x370]
// 005ec66c: JL 0x005ec65a
//   XREF to: 005ec65a (CONDITIONAL_JUMP)
// 005ec66e: POP EBP
//   Label: LAB_005ec66e
// 005ec66f: POP EDI
// 005ec670: POP ESI
// 005ec671: POP EBX
// 005ec672: RET
// 005ec673: PUSH EBX
//   Label: LAB_005ec673
// 005ec674: PUSH EDI
// 005ec675: CALL core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0
//   XREF to: 005ec7b0 (UNCONDITIONAL_CALL)
// 005ec67a: ADD ESP,0x8
// 005ec67d: CMP EBX,dword ptr [EDI + 0x370]
// 005ec683: JL 0x005ec65a
//   XREF to: 005ec65a (CONDITIONAL_JUMP)
// 005ec685: POP EBP
// 005ec686: POP EDI
// 005ec687: POP ESI
// 005ec688: POP EBX
// 005ec689: RET
