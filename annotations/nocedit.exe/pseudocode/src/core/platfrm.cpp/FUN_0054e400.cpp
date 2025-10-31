// Name: core_platfrm.cpp_FUN_0054e400
// Address: 0054e400
// Address Range: [[0054e400, 0054e462]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e400()
// Cross-references:
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e8ea [DATA]
// Globals:
//   void* switchdataD_0054e3e8 = 0054e42c
//   TerminatedCString s_Disabled_0063f9c1
//   undefined4 s_isabled_0063f9c2
//   undefined4 s_sabled_0063f9c3
//   undefined4 s_abled_0063f9c4
//   TerminatedCString s_Start_0063f9ca
//   undefined4 s_tart_0063f9cb
//   undefined4 s_art_0063f9cc
//   undefined4 s_rt_0063f9cd
//   TerminatedCString s_End_0063f9d0
//   undefined4 s_nd_0063f9d1
//   undefined4 s_d_0063f9d2
//   undefined4 s__0063f9d3
//   TerminatedCString s_Both_0063f9d4
//   undefined4 s_oth_0063f9d5
//   undefined4 s_th_0063f9d6
//   undefined4 s_h_0063f9d7
//   undefined4 g_CPlatformClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

void core_platfrm_cpp_FUN_0054e400(void)

{
  char cVar1;
  CDemonActor *pCVar2;
  char *pcVar3;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPlatformClassInfo.name_hash);
  switch(pCVar2[5].field7_0x6c) {
  default:
    pcVar3 = "Disabled";
    break;
  case 1:
    pcVar3 = "Start";
    break;
  case 2:
    pcVar3 = "End";
    break;
  case 3:
    pcVar3 = "Both";
  }
  do {
    cVar1 = *pcVar3;
    *in_stack_0000000c = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    in_stack_0000000c[1] = cVar1;
    in_stack_0000000c = in_stack_0000000c + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 0054e400: PUSH ESI
//   Label: core_platfrm.cpp_FUN_0054e400
// 0054e401: PUSH EDI
// 0054e402: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0054e406: MOV EDX,dword ptr [0x030d508c]
//   XREF to: 030d508c (READ)
// 0054e40c: PUSH EDX
// 0054e40d: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0054e411: PUSH ECX
// 0054e412: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0054e417: MOV EAX,dword ptr [EAX + 0x724]
// 0054e41d: ADD ESP,0x8
// 0054e420: CMP EAX,0x3
// 0054e423: JA 0x0054e42c
//   XREF to: 0054e42c (CONDITIONAL_JUMP)
// 0054e425: JMP dword ptr [EAX*0x4 + 0x54e3e8]
//   Label: switchD
//   XREF to: 0054e42c (COMPUTED_JUMP)
//   XREF to: 0054e44e (COMPUTED_JUMP)
//   XREF to: 0054e455 (COMPUTED_JUMP)
//   XREF to: 0054e45c (COMPUTED_JUMP)
//   XREF to: 0054e3e8 (DATA)
// 0054e42c: MOV ESI,0x63f9c1
//   Label: caseD_0
//   XREF to: 0063f9c1 (DATA)
// 0054e431: PUSH EDI
//   Label: LAB_0054e431
// 0054e432: MOV AL,byte ptr [ESI]
//   Label: LAB_0054e432
//   XREF to: 0063f9c1 (READ)
//   XREF to: 0063f9c3 (READ)
//   XREF to: 0063f9ca (READ)
//   XREF to: 0063f9cc (READ)
//   XREF to: 0063f9d0 (READ)
//   XREF to: 0063f9d2 (READ)
//   XREF to: 0063f9d4 (READ)
//   XREF to: 0063f9d6 (READ)
// 0054e434: MOV byte ptr [EDI],AL
// 0054e436: CMP AL,0x0
// 0054e438: JZ 0x0054e44a
//   XREF to: 0054e44a (CONDITIONAL_JUMP)
// 0054e43a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063f9c2 (READ)
//   XREF to: 0063f9c4 (READ)
//   XREF to: 0063f9cb (READ)
//   XREF to: 0063f9cd (READ)
//   XREF to: 0063f9d1 (READ)
//   XREF to: 0063f9d3 (READ)
//   XREF to: 0063f9d5 (READ)
//   XREF to: 0063f9d7 (READ)
// 0054e43d: ADD ESI,0x2
// 0054e440: MOV byte ptr [EDI + 0x1],AL
// 0054e443: ADD EDI,0x2
// 0054e446: CMP AL,0x0
// 0054e448: JNZ 0x0054e432
//   XREF to: 0054e432 (CONDITIONAL_JUMP)
// 0054e44a: POP EDI
//   Label: LAB_0054e44a
// 0054e44b: POP EDI
// 0054e44c: POP ESI
// 0054e44d: RET
// 0054e44e: MOV ESI,0x63f9ca
//   Label: caseD_1
//   XREF to: 0063f9ca (DATA)
// 0054e453: JMP 0x0054e431
//   XREF to: 0054e431 (UNCONDITIONAL_JUMP)
// 0054e455: MOV ESI,0x63f9d0
//   Label: caseD_2
//   XREF to: 0063f9d0 (DATA)
// 0054e45a: JMP 0x0054e431
//   XREF to: 0054e431 (UNCONDITIONAL_JUMP)
// 0054e45c: MOV ESI,0x63f9d4
//   Label: caseD_3
//   XREF to: 0063f9d4 (DATA)
// 0054e461: JMP 0x0054e431
//   XREF to: 0054e431 (UNCONDITIONAL_JUMP)
