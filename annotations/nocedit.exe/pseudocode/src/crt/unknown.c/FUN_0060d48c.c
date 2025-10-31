// Name: crt_unknown.c_FUN_0060d48c
// Address: 0060d48c
// Address Range: [[0060d48c, 0060d50f]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060d48c()
// Cross-references:
//   crt_unknown.c_FUN_0060b106 (0060b106) at 0060b128 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060b142 (0060b142) at 0060b164 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_unknown.c_FUN_00603dc8

#include "nocturne.h"

undefined4 crt_unknown_c_FUN_0060d48c(void)

{
  undefined4 *in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined4 in_stack_0000001c;
  undefined4 local_3c;
  undefined4 local_38;
  
  crt_unknown_c_FUN_00603dc8();
  *in_stack_00000010 = local_38;
  *in_stack_00000014 = local_3c;
  return in_stack_0000001c;
}


// Assembly code:
// 0060d48c: PUSH EBP
//   Label: crt_unknown.c_FUN_0060d48c
// 0060d48d: MOV EBP,ESP
// 0060d48f: PUSH EBX
// 0060d490: PUSH ESI
// 0060d491: PUSH EDI
// 0060d492: SUB ESP,0x40
// 0060d495: MOV EAX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060d498: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0060d49b: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060d49e: LEA EDX,[EBP + -0x20]
//   XREF to: Stack[-0x24] (DATA)
// 0060d4a1: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060d4a4: LEA EAX,[EBP + -0x14]
//   XREF to: Stack[-0x18] (DATA)
// 0060d4a7: FLD double ptr [EAX]
//   XREF to: Stack[-0x18] (DATA)
// 0060d4a9: FSTP extended double ptr [EDX]
//   XREF to: Stack[-0x24] (DATA)
// 0060d4ab: CMP dword ptr [EBP + 0x1c],0x46
//   XREF to: Stack[0x18] (READ)
// 0060d4af: JNZ 0x0060d4c0
//   XREF to: 0060d4c0 (CONDITIONAL_JUMP)
// 0060d4b1: MOV ESI,0xa
// 0060d4b6: XOR EDI,EDI
// 0060d4b8: MOV dword ptr [EBP + -0x44],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 0060d4bb: MOV dword ptr [EBP + -0x48],EDI
//   XREF to: Stack[-0x4c] (WRITE)
// 0060d4be: JMP 0x0060d4d0
//   XREF to: 0060d4d0 (UNCONDITIONAL_JUMP)
// 0060d4c0: MOV EBX,0xc
//   Label: LAB_0060d4c0
// 0060d4c5: MOV ECX,0x1
// 0060d4ca: MOV dword ptr [EBP + -0x44],EBX
//   XREF to: Stack[-0x48] (WRITE)
// 0060d4cd: MOV dword ptr [EBP + -0x48],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 0060d4d0: MOV EAX,dword ptr [EBP + 0x10]
//   Label: LAB_0060d4d0
//   XREF to: Stack[0xc] (READ)
// 0060d4d3: MOV dword ptr [EBP + -0x4c],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0060d4d6: XOR EAX,EAX
// 0060d4d8: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x1c] (READ)
// 0060d4db: MOV dword ptr [EBP + -0x3c],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0060d4de: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 0060d4e1: PUSH EDX
// 0060d4e2: MOV dword ptr [EBP + -0x40],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0060d4e5: LEA EAX,[EBP + -0x4c]
//   XREF to: Stack[-0x50] (DATA)
// 0060d4e8: PUSH EAX
// 0060d4e9: LEA EAX,[EBP + -0x20]
//   XREF to: Stack[-0x24] (DATA)
// 0060d4ec: PUSH EAX
// 0060d4ed: CALL crt_unknown.c_FUN_00603dc8
//   XREF to: 00603dc8 (UNCONDITIONAL_CALL)
// 0060d4f2: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0060d4f5: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x38] (READ)
// 0060d4f8: MOV dword ptr [EDX],EAX
// 0060d4fa: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 0060d4fd: MOV EAX,dword ptr [EBP + -0x38]
//   XREF to: Stack[-0x3c] (READ)
// 0060d500: ADD ESP,0xc
// 0060d503: MOV dword ptr [EDX],EAX
// 0060d505: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x1c] (READ)
// 0060d508: LEA ESP,[EBP + -0xc]
//   XREF to: Stack[-0x10] (DATA)
// 0060d50b: POP EDI
// 0060d50c: POP ESI
// 0060d50d: POP EBX
// 0060d50e: POP EBP
// 0060d50f: RET
