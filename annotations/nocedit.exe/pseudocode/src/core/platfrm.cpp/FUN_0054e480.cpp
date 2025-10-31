// Name: core_platfrm.cpp_FUN_0054e480
// Address: 0054e480
// Address Range: [[0054e480, 0054e4df]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e480()
// Cross-references:
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e8e5 [DATA]
//   core_platfrm.cpp_FUN_0054ea00 (0054ea00) at 0054eb47 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0054e464 = 0054e4a8
//   undefined4 g_CPlatformClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054e480(undefined4 param_1) */

undefined4 core_platfrm_cpp_FUN_0054e480(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPlatformClassInfo.name_hash);
  switch(pCVar1[5].field7_0x6c) {
  case 0:
    pCVar1[5].field7_0x6c = 1;
    break;
  case 1:
    pCVar1[5].field7_0x6c = 2;
    break;
  case 2:
    pCVar1[5].field7_0x6c = 3;
    break;
  default:
    pCVar1[5].field7_0x6c = 0;
    return 1;
  }
  return 1;
}


// Assembly code:
// 0054e480: MOV EDX,dword ptr [0x030d508c]
//   Label: core_platfrm.cpp_FUN_0054e480
//   XREF to: 030d508c (READ)
// 0054e486: PUSH EDX
// 0054e487: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054e48b: PUSH ECX
// 0054e48c: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0054e491: ADD ESP,0x8
// 0054e494: MOV EDX,dword ptr [EAX + 0x724]
// 0054e49a: MOV ECX,EAX
// 0054e49c: CMP EDX,0x3
// 0054e49f: JA 0x0054e4d0
//   XREF to: 0054e4d0 (CONDITIONAL_JUMP)
// 0054e4a1: JMP dword ptr [EDX*0x4 + 0x54e464]
//   Label: switchD
//   XREF to: 0054e4a8 (COMPUTED_JUMP)
//   XREF to: 0054e4b8 (COMPUTED_JUMP)
//   XREF to: 0054e4c4 (COMPUTED_JUMP)
//   XREF to: 0054e4d0 (COMPUTED_JUMP)
//   XREF to: 0054e464 (DATA)
// 0054e4a8: MOV dword ptr [EAX + 0x724],0x1
//   Label: caseD_0
// 0054e4b2: MOV EAX,0x1
//   Label: LAB_0054e4b2
// 0054e4b7: RET
// 0054e4b8: MOV dword ptr [EAX + 0x724],0x2
//   Label: caseD_1
// 0054e4c2: JMP 0x0054e4b2
//   XREF to: 0054e4b2 (UNCONDITIONAL_JUMP)
// 0054e4c4: MOV dword ptr [EAX + 0x724],0x3
//   Label: caseD_2
// 0054e4ce: JMP 0x0054e4b2
//   XREF to: 0054e4b2 (UNCONDITIONAL_JUMP)
// 0054e4d0: MOV dword ptr [ECX + 0x724],0x0
//   Label: caseD_3
// 0054e4da: MOV EAX,0x1
// 0054e4df: RET
