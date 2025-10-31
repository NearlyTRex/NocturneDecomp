// Name: core_platfrm.cpp_FUN_0054e4e0
// Address: 0054e4e0
// Address Range: [[0054e4e0, 0054e52d]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e4e0()
// Cross-references:
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e8c1 [DATA]
// Globals:
//   TerminatedCString s_Manual_course_0063f9d9
//   undefined4 s_Manual_course)_0063f9da
//   undefined4 g_CPlatformClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054e4e0(undefined4 param_1, undefined1
   param_2, undefined4 param_3) */

void core_platfrm_cpp_FUN_0054e4e0(void)

{
  char cVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPlatformClassInfo.name_hash);
  if (*(char *)&pCVar2[2].orient_matrix.m[0].y == '\0') {
    pcVar3 = "(Manual course)";
  }
  else {
    pcVar3 = (char *)&pCVar2[2].orient_matrix.m[0].y;
  }
  do {
    cVar1 = *pcVar3;
    *in_stack_0000000c = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = *(char *)((int)pcVar3 + 1);
    pcVar3 = (char *)((int)pcVar3 + 2);
    in_stack_0000000c[1] = cVar1;
    in_stack_0000000c = in_stack_0000000c + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 0054e4e0: PUSH ESI
//   Label: core_platfrm.cpp_FUN_0054e4e0
// 0054e4e1: PUSH EDI
// 0054e4e2: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0054e4e6: MOV EDX,dword ptr [0x030d508c]
//   XREF to: 030d508c (READ)
// 0054e4ec: PUSH EDX
// 0054e4ed: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0054e4f1: PUSH ECX
// 0054e4f2: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0054e4f7: MOV DL,byte ptr [EAX + 0x2f0]
// 0054e4fd: ADD ESP,0x8
// 0054e500: TEST DL,DL
// 0054e502: JZ 0x0054e527
//   XREF to: 0054e527 (CONDITIONAL_JUMP)
// 0054e504: LEA ESI,[EAX + 0x2f0]
// 0054e50a: PUSH EDI
//   Label: LAB_0054e50a
// 0054e50b: MOV AL,byte ptr [ESI]
//   Label: LAB_0054e50b
//   XREF to: 0063f9d9 (READ)
// 0054e50d: MOV byte ptr [EDI],AL
// 0054e50f: CMP AL,0x0
// 0054e511: JZ 0x0054e523
//   XREF to: 0054e523 (CONDITIONAL_JUMP)
// 0054e513: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063f9da (READ)
// 0054e516: ADD ESI,0x2
// 0054e519: MOV byte ptr [EDI + 0x1],AL
// 0054e51c: ADD EDI,0x2
// 0054e51f: CMP AL,0x0
// 0054e521: JNZ 0x0054e50b
//   XREF to: 0054e50b (CONDITIONAL_JUMP)
// 0054e523: POP EDI
//   Label: LAB_0054e523
// 0054e524: POP EDI
// 0054e525: POP ESI
// 0054e526: RET
// 0054e527: MOV ESI,0x63f9d9
//   Label: LAB_0054e527
//   XREF to: 0063f9d9 (DATA)
// 0054e52c: JMP 0x0054e50a
//   XREF to: 0054e50a (UNCONDITIONAL_JUMP)
