// Name: core_waypoint.cpp_FUN_005ec830
// Address: 005ec830
// Address Range: [[005ec830, 005ec8ce]]
// Convention: unknown
// Signature: undefined core_waypoint.cpp_FUN_005ec830()
// Cross-references:
//   core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700 (005ec700) at 005ec70e [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_FUN_005ec4f0 (005ec4f0) at 005ec4fc [UNCONDITIONAL_CALL]
// Function calls:
//   core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0

#include "nocturne.h"

/* Signature: undefined1 actors_other_waypoint.cpp_FUN_005ec830(undefined4 param_1) */

void core_waypoint_cpp_FUN_005ec830(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = in_stack_00000004;
  if (0 < *(int *)(in_stack_00000004 + 0x370)) {
    do {
      if ((*(int *)(iVar1 + 0x374) == 0) || (in_stack_00000004 == *(int *)(iVar1 + 0x374))) {
        core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0();
      }
      else {
        iVar2 = local_14 + 1;
        if (iVar2 < *(int *)(in_stack_00000004 + 0x370)) {
          iVar3 = iVar2 * 8 + in_stack_00000004;
          do {
            if (*(int *)(iVar3 + 0x374) == *(int *)(iVar1 + 0x374)) {
              core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0();
            }
            else {
              iVar2 = iVar2 + 1;
              iVar3 = iVar3 + 8;
            }
          } while (iVar2 < *(int *)(in_stack_00000004 + 0x370));
        }
        local_14 = local_14 + 1;
        iVar1 = iVar1 + 8;
      }
    } while (local_14 < *(int *)(in_stack_00000004 + 0x370));
  }
  return;
}


// Assembly code:
// 005ec830: PUSH EBX
//   Label: core_waypoint.cpp_FUN_005ec830
// 005ec831: PUSH ESI
// 005ec832: PUSH EDI
// 005ec833: PUSH EBP
// 005ec834: SUB ESP,0x8
// 005ec837: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005ec83b: XOR EDX,EDX
// 005ec83d: MOV ECX,dword ptr [EBX + 0x370]
// 005ec843: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005ec847: TEST ECX,ECX
// 005ec849: JLE 0x005ec875
//   XREF to: 005ec875 (CONDITIONAL_JUMP)
// 005ec84b: MOV EBP,EBX
// 005ec84d: MOV EDI,dword ptr [EBP + 0x374]
//   Label: LAB_005ec84d
// 005ec853: TEST EDI,EDI
// 005ec855: JZ 0x005ec85b
//   XREF to: 005ec85b (CONDITIONAL_JUMP)
// 005ec857: CMP EBX,EDI
// 005ec859: JNZ 0x005ec87d
//   XREF to: 005ec87d (CONDITIONAL_JUMP)
// 005ec85b: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_005ec85b
//   XREF to: Stack[-0x14] (READ)
// 005ec85f: PUSH ECX
// 005ec860: PUSH EBX
// 005ec861: CALL core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0
//   XREF to: 005ec7b0 (UNCONDITIONAL_CALL)
// 005ec866: ADD ESP,0x8
// 005ec869: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_005ec869
//   XREF to: Stack[-0x14] (READ)
// 005ec86d: CMP EAX,dword ptr [EBX + 0x370]
// 005ec873: JL 0x005ec84d
//   XREF to: 005ec84d (CONDITIONAL_JUMP)
// 005ec875: ADD ESP,0x8
//   Label: LAB_005ec875
// 005ec878: POP EBP
// 005ec879: POP EDI
// 005ec87a: POP ESI
// 005ec87b: POP EBX
// 005ec87c: RET
// 005ec87d: MOV ESI,dword ptr [ESP + 0x4]
//   Label: LAB_005ec87d
//   XREF to: Stack[-0x14] (READ)
// 005ec881: MOV EDX,dword ptr [EBX + 0x370]
// 005ec887: INC ESI
// 005ec888: CMP ESI,EDX
// 005ec88a: JGE 0x005ec8bb
//   XREF to: 005ec8bb (CONDITIONAL_JUMP)
// 005ec88c: LEA EDI,[ESI*0x8 + 0x0]
// 005ec893: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x18] (DATA)
// 005ec896: ADD EDI,EBX
// 005ec898: MOV EDX,dword ptr [ESP]
//   Label: LAB_005ec898
//   XREF to: Stack[-0x18] (DATA)
// 005ec89b: MOV EAX,dword ptr [EDI + 0x374]
// 005ec8a1: CMP EAX,dword ptr [EDX + 0x374]
// 005ec8a7: JNZ 0x005ec8c9
//   XREF to: 005ec8c9 (CONDITIONAL_JUMP)
// 005ec8a9: PUSH ESI
// 005ec8aa: PUSH EBX
// 005ec8ab: CALL core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0
//   XREF to: 005ec7b0 (UNCONDITIONAL_CALL)
// 005ec8b0: ADD ESP,0x8
// 005ec8b3: CMP ESI,dword ptr [EBX + 0x370]
//   Label: LAB_005ec8b3
// 005ec8b9: JL 0x005ec898
//   XREF to: 005ec898 (CONDITIONAL_JUMP)
// 005ec8bb: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_005ec8bb
//   XREF to: Stack[-0x14] (READ)
// 005ec8bf: INC EDX
// 005ec8c0: ADD EBP,0x8
// 005ec8c3: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005ec8c7: JMP 0x005ec869
//   XREF to: 005ec869 (UNCONDITIONAL_JUMP)
// 005ec8c9: INC ESI
//   Label: LAB_005ec8c9
// 005ec8ca: ADD EDI,0x8
// 005ec8cd: JMP 0x005ec8b3
//   XREF to: 005ec8b3 (UNCONDITIONAL_JUMP)
