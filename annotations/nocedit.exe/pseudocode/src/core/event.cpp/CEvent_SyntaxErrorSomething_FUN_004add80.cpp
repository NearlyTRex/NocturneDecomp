// Name: core_event.cpp_CEvent_SyntaxErrorSomething_FUN_004add80
// Address: 004add80
// Address Range: [[004add80, 004added]]
// Convention: unknown
// Signature: undefined core_event.cpp_CEvent_SyntaxErrorSomething_FUN_004add80()
// Cross-references:
//   core_event.cpp_CEvent_LoggingSomethingToConsole_FUN_004adca0 (004adca0) at 004adcd2 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004add00 (004add00) at 004add21 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Syntax_error_006252b7
//   undefined4 s_yntax_error_006252b8
//   undefined4 s_tax_error_006252ba
//   undefined1 DAT_02d0a460
//   undefined1 DAT_02d0a461
//   undefined1 DAT_02d0a462
//   undefined1 DAT_02d0a463
// Function calls:
//   core_event.cpp_CEvent_EventReadingFromFileInMultiLoops_FUN_004b0270

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_CEvent_SyntaxErrorSomething(undefined4 param_1, undefined4
   param_2) */

int core_event_cpp_CEvent_SyntaxErrorSomething_FUN_004add80
              (undefined4 param_1,undefined4 param_2,int unaff_EBX)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int in_stack_0000000c;
  
  DAT_02d0a460 = 0;
  iVar2 = core_event_cpp_CEvent_EventReadingFromFileInMultiLoops_FUN_004b0270();
  if ((-1 < iVar2) && (*(char *)(in_stack_0000000c + unaff_EBX) != '\0')) {
    pcVar3 = "Syntax error";
    pcVar4 = &DAT_02d0a460;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return -1;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    return -1;
  }
  return iVar2;
}


// Assembly code:
// 004add80: PUSH EBX
//   Label: core_event.cpp_CEvent_SyntaxErrorSomething_FUN_004add80
// 004add81: SUB ESP,0x4
// 004add84: XOR AH,AH
// 004add86: MOV byte ptr [0x02d0a460],AH
//   XREF to: 02d0a460 (WRITE)
// 004add8c: MOV EAX,ESP
// 004add8e: PUSH EAX
// 004add8f: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004add93: PUSH ECX
// 004add94: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004add98: XOR EDX,EDX
// 004add9a: PUSH EBX
// 004add9b: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 004add9f: CALL core_event.cpp_CEvent_EventReadingFromFileInMultiLoops_FUN_004b0270
//   XREF to: 004b0270 (UNCONDITIONAL_CALL)
// 004adda4: ADD ESP,0xc
// 004adda7: TEST EAX,EAX
// 004adda9: JL 0x004addb7
//   XREF to: 004addb7 (CONDITIONAL_JUMP)
// 004addab: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004addaf: ADD EDX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 004addb2: CMP byte ptr [EDX],0x0
// 004addb5: JNZ 0x004addbc
//   XREF to: 004addbc (CONDITIONAL_JUMP)
// 004addb7: ADD ESP,0x4
//   Label: LAB_004addb7
// 004addba: POP EBX
// 004addbb: RET
// 004addbc: PUSH EDI
//   Label: LAB_004addbc
// 004addbd: PUSH ESI
// 004addbe: MOV ESI,0x6252b7
//   XREF to: 006252b7 (DATA)
// 004addc3: MOV EDI,0x2d0a460
//   XREF to: 02d0a460 (DATA)
// 004addc8: PUSH EDI
//   XREF to: 02d0a460 (DATA)
// 004addc9: MOV AL,byte ptr [ESI]
//   Label: LAB_004addc9
//   XREF to: 006252b7 (READ)
//   XREF to: 006252b9 (READ)
// 004addcb: MOV byte ptr [EDI],AL
//   XREF to: 02d0a460 (WRITE)
//   XREF to: 02d0a462 (WRITE)
// 004addcd: CMP AL,0x0
// 004addcf: JZ 0x004adde1
//   XREF to: 004adde1 (CONDITIONAL_JUMP)
// 004addd1: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006252b8 (READ)
//   XREF to: 006252ba (READ)
// 004addd4: ADD ESI,0x2
// 004addd7: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02d0a461 (WRITE)
//   XREF to: 02d0a463 (WRITE)
// 004addda: ADD EDI,0x2
// 004adddd: CMP AL,0x0
// 004adddf: JNZ 0x004addc9
//   XREF to: 004addc9 (CONDITIONAL_JUMP)
// 004adde1: POP EDI
//   Label: LAB_004adde1
// 004adde2: MOV EAX,0xffffffff
// 004adde7: POP ESI
// 004adde8: POP EDI
// 004adde9: ADD ESP,0x4
// 004addec: POP EBX
// 004added: RET
