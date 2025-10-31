// Name: crt_unknown.c_CondCallDoNothing_FUN_00603ccc
// Address: 00603ccc
// Address Range: [[00603ccc, 00603d5f]]
// Convention: unknown
// Signature: undefined crt_unknown.c_CondCallDoNothing_FUN_00603ccc()
// Cross-references:
//   crt_unknown.c_FUN_00603d60 (00603d60) at 00603da5 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_unknown.c_FUN_00603c74
//   crt_unknown.c_FUN_0060445e

#include "nocturne.h"

/* Signature: undefined1 unk_CondCallDoNothingAgain1(undefined4 param_1, undefined4 param_2) */

void crt_unknown_c_CondCallDoNothing_FUN_00603ccc(void)

{
  undefined2 in_FPUControlWord;
  float10 *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    if (in_stack_00000008 < 0) {
      crt_unknown_c_FUN_00603c74();
      *in_stack_00000004 = *in_stack_00000004 / (float10)CONCAT28(0x3fff,0x8000000000000000);
    }
    else {
      crt_unknown_c_FUN_00603c74();
      *in_stack_00000004 = (float10)CONCAT28(0x3fff,0x8000000000000000) * *in_stack_00000004;
    }
    crt_unknown_c_FUN_0060445e(in_FPUControlWord);
    return;
  }
  return;
}


// Assembly code:
// 00603ccc: PUSH EBP
//   Label: crt_unknown.c_CondCallDoNothing_FUN_00603ccc
// 00603ccd: MOV EBP,ESP
// 00603ccf: PUSH EBX
// 00603cd0: PUSH ESI
// 00603cd1: PUSH EDI
// 00603cd2: SUB ESP,0xc
// 00603cd5: MOV ESI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00603cd8: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00603cdb: TEST EBX,EBX
// 00603cdd: JZ 0x0060445e
//   XREF to: 0060445e (CONDITIONAL_JUMP)
// 00603ce3: PUSH 0x0
// 00603ce5: FSTCW word ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00603ce9: POP EAX
// 00603cea: MOV EDI,EAX
// 00603cec: OR AH,0x3
// 00603cef: AND EAX,0xffff
// 00603cf4: PUSH EAX
// 00603cf5: FLDCW word ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00603cf8: POP EAX
// 00603cf9: MOV EDX,0x3fff
// 00603cfe: XOR ECX,ECX
// 00603d00: MOV word ptr [EBP + -0x10],DX
//   XREF to: Stack[-0x14] (WRITE)
// 00603d04: MOV EDX,0x80000000
// 00603d09: MOV dword ptr [EBP + -0x18],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00603d0c: MOV dword ptr [EBP + -0x14],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00603d0f: TEST EBX,EBX
// 00603d11: JGE 0x00603d35
//   XREF to: 00603d35 (CONDITIONAL_JUMP)
// 00603d13: MOV EAX,EBX
// 00603d15: NEG EAX
// 00603d17: PUSH EAX
// 00603d18: LEA EAX,[EBP + -0x18]
//   XREF to: Stack[-0x1c] (DATA)
// 00603d1b: PUSH EAX
// 00603d1c: MOV EBX,ESI
// 00603d1e: CALL crt_unknown.c_FUN_00603c74
//   XREF to: 00603c74 (UNCONDITIONAL_CALL)
// 00603d23: ADD ESP,0x8
// 00603d26: LEA EDX,[EBP + -0x18]
//   XREF to: Stack[-0x1c] (DATA)
// 00603d29: MOV EAX,ESI
// 00603d2b: FLD extended double ptr [EAX]
// 00603d2d: FLD extended double ptr [EDX]
//   XREF to: Stack[-0x1c] (DATA)
// 00603d2f: FDIVP
// 00603d31: FSTP extended double ptr [EBX]
// 00603d33: JMP 0x00603d51
//   XREF to: 00603d51 (UNCONDITIONAL_JUMP)
// 00603d35: PUSH EBX
//   Label: LAB_00603d35
// 00603d36: LEA EAX,[EBP + -0x18]
//   XREF to: Stack[-0x1c] (DATA)
// 00603d39: PUSH EAX
// 00603d3a: CALL crt_unknown.c_FUN_00603c74
//   XREF to: 00603c74 (UNCONDITIONAL_CALL)
// 00603d3f: MOV EBX,ESI
// 00603d41: ADD ESP,0x8
// 00603d44: LEA EDX,[EBP + -0x18]
//   XREF to: Stack[-0x1c] (DATA)
// 00603d47: MOV EAX,ESI
// 00603d49: FLD extended double ptr [EAX]
// 00603d4b: FLD extended double ptr [EDX]
//   XREF to: Stack[-0x1c] (DATA)
// 00603d4d: FMULP
// 00603d4f: FSTP extended double ptr [EBX]
// 00603d51: XOR EAX,EAX
//   Label: LAB_00603d51
// 00603d53: MOV AX,DI
// 00603d56: PUSH EAX
//   Label: LAB_00603d56
// 00603d57: FLDCW word ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00603d5a: POP EAX
// 00603d5b: JMP 0x0060445e
//   XREF to: 0060445e (UNCONDITIONAL_CALL)
