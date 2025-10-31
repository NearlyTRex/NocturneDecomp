// Name: core_platfrm.cpp_FUN_0054e700
// Address: 0054e700
// Address Range: [[0054e700, 0054e758]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054e700()
// Cross-references:
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e902 [DATA]
// Globals:
//   TerminatedCString s_At_start_0063faa2
//   undefined4 s_t_start_0063faa3
//   TerminatedCString s_At_end_0063faab
//   undefined4 s_t_end_0063faac
//   undefined4 s_end_0063faad
//   undefined4 s_end_0063faae
//   TerminatedCString s_WTF_0063fab2
//   undefined4 DAT_0063fab3
//   undefined4 g_CPlatformClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054e700(undefined4 param_1, undefined1
   param_2, undefined4 param_3) */

void core_platfrm_cpp_FUN_0054e700(void)

{
  char cVar1;
  float fVar2;
  CDemonActor *pCVar3;
  char *pcVar4;
  CDemonActor *in_stack_00000004;
  char *in_stack_0000000c;
  
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPlatformClassInfo.name_hash);
  fVar2 = pCVar3[2].location.position.y;
  if (fVar2 == 0.0) {
    pcVar4 = "At start";
  }
  else if (fVar2 == 1.4013e-45) {
    pcVar4 = "At end";
  }
  else {
    pcVar4 = "WTF";
  }
  do {
    cVar1 = *pcVar4;
    *in_stack_0000000c = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    in_stack_0000000c[1] = cVar1;
    in_stack_0000000c = in_stack_0000000c + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 0054e700: PUSH ESI
//   Label: core_platfrm.cpp_FUN_0054e700
// 0054e701: PUSH EDI
// 0054e702: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0054e706: MOV EDX,dword ptr [0x030d508c]
//   XREF to: 030d508c (READ)
// 0054e70c: PUSH EDX
// 0054e70d: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0054e711: PUSH ECX
// 0054e712: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0054e717: MOV EAX,dword ptr [EAX + 0x2d4]
// 0054e71d: ADD ESP,0x8
// 0054e720: TEST EAX,EAX
// 0054e722: JBE 0x0054e74b
//   XREF to: 0054e74b (CONDITIONAL_JUMP)
// 0054e724: CMP EAX,0x1
// 0054e727: JNZ 0x0054e752
//   XREF to: 0054e752 (CONDITIONAL_JUMP)
// 0054e729: MOV ESI,0x63faab
//   XREF to: 0063faab (DATA)
// 0054e72e: PUSH EDI
//   Label: LAB_0054e72e
// 0054e72f: MOV AL,byte ptr [ESI]
//   Label: LAB_0054e72f
//   XREF to: 0063faa2 (READ)
//   XREF to: 0063faab (READ)
//   XREF to: 0063faad (READ)
//   XREF to: 0063fab2 (READ)
// 0054e731: MOV byte ptr [EDI],AL
// 0054e733: CMP AL,0x0
// 0054e735: JZ 0x0054e747
//   XREF to: 0054e747 (CONDITIONAL_JUMP)
// 0054e737: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063faa3 (READ)
//   XREF to: 0063faac (READ)
//   XREF to: 0063faae (READ)
//   XREF to: 0063fab3 (READ)
// 0054e73a: ADD ESI,0x2
// 0054e73d: MOV byte ptr [EDI + 0x1],AL
// 0054e740: ADD EDI,0x2
// 0054e743: CMP AL,0x0
// 0054e745: JNZ 0x0054e72f
//   XREF to: 0054e72f (CONDITIONAL_JUMP)
// 0054e747: POP EDI
//   Label: LAB_0054e747
// 0054e748: POP EDI
// 0054e749: POP ESI
// 0054e74a: RET
// 0054e74b: MOV ESI,0x63faa2
//   Label: LAB_0054e74b
//   XREF to: 0063faa2 (DATA)
// 0054e750: JMP 0x0054e72e
//   XREF to: 0054e72e (UNCONDITIONAL_JUMP)
// 0054e752: MOV ESI,0x63fab2
//   Label: LAB_0054e752
//   XREF to: 0063fab2 (DATA)
// 0054e757: JMP 0x0054e72e
//   XREF to: 0054e72e (UNCONDITIONAL_JUMP)
