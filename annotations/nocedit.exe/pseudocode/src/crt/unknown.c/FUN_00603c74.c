// Name: crt_unknown.c_FUN_00603c74
// Address: 00603c74
// Address Range: [[00603c74, 00603ccb]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00603c74()
// Cross-references:
//   crt_unknown.c_CondCallDoNothing_FUN_00603ccc (00603ccc) at 00603d3a [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00684f30
//   undefined4 DAT_00684f34
//   undefined2 DAT_00684f38
// Function calls:
//   crt_unknown.c_FUN_0060445e

#include "nocturne.h"

/* Signature: undefined1 FUN_00603c74(undefined4 param_1, undefined4 param_2) */

void crt_unknown_c_FUN_00603c74(void)

{
  float10 *pfVar1;
  float10 *in_stack_00000004;
  uint in_stack_00000008;
  
  if (0x1fff < (int)in_stack_00000008) {
    in_stack_00000008 = 0x2000;
  }
  pfVar1 = (float10 *)&DAT_00684f30;
  for (; 0 < (int)in_stack_00000008; in_stack_00000008 = (int)in_stack_00000008 >> 1) {
    if ((in_stack_00000008 & 1) != 0) {
      *in_stack_00000004 = *pfVar1 * *in_stack_00000004;
    }
    pfVar1 = (float10 *)((int)pfVar1 + 10);
  }
  crt_unknown_c_FUN_0060445e();
  return;
}


// Assembly code:
// 00603c74: PUSH EBP
//   Label: crt_unknown.c_FUN_00603c74
// 00603c75: MOV EBP,ESP
// 00603c77: PUSH EBX
// 00603c78: PUSH ESI
// 00603c79: PUSH EDI
// 00603c7a: SUB ESP,0xc
// 00603c7d: MOV EDI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00603c80: CMP EDI,0x2000
// 00603c86: JL 0x00603c8d
//   XREF to: 00603c8d (CONDITIONAL_JUMP)
// 00603c88: MOV EDI,0x2000
// 00603c8d: MOV ESI,0x684f30
//   Label: LAB_00603c8d
//   XREF to: 00684f30 (DATA)
// 00603c92: JMP 0x00603cc3
//   XREF to: 00603cc3 (UNCONDITIONAL_JUMP)
// 00603c94: TEST DI,0x1
//   Label: LAB_00603c94
// 00603c99: JZ 0x00603cbe
//   XREF to: 00603cbe (CONDITIONAL_JUMP)
// 00603c9b: MOV AX,word ptr [ESI + 0x8]
//   XREF to: 00684f38 (READ)
// 00603c9f: MOV word ptr [EBP + -0x10],AX
//   XREF to: Stack[-0x14] (WRITE)
// 00603ca3: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: 00684f34 (READ)
// 00603ca6: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00603ca9: MOV EBX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00603cac: MOV EAX,dword ptr [ESI]
//   XREF to: 00684f30 (READ)
// 00603cae: LEA EDX,[EBP + -0x18]
//   XREF to: Stack[-0x1c] (DATA)
// 00603cb1: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00603cb4: MOV EAX,EBX
// 00603cb6: FLD extended double ptr [EAX]
// 00603cb8: FLD extended double ptr [EDX]
//   XREF to: Stack[-0x1c] (DATA)
// 00603cba: FMULP
// 00603cbc: FSTP extended double ptr [EBX]
// 00603cbe: SAR EDI,0x1
//   Label: LAB_00603cbe
// 00603cc0: ADD ESI,0xa
// 00603cc3: TEST EDI,EDI
//   Label: LAB_00603cc3
// 00603cc5: JG 0x00603c94
//   XREF to: 00603c94 (CONDITIONAL_JUMP)
// 00603cc7: JMP 0x0060445e
//   XREF to: 0060445e (UNCONDITIONAL_CALL)
