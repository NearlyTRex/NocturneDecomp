// Name: crt_unknown.c_FUN_0060b142
// Address: 0060b142
// Address Range: [[0060b142, 0060b174]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060b142()
// Cross-references:
//   crt_unknown.c_thunk_FUN_0060b142 (0060477a) at 0060477a [UNCONDITIONAL_JUMP]
// Function calls:
//   crt_unknown.c_FUN_0060b133
//   crt_unknown.c_FUN_0060d480
//   crt_unknown.c_FUN_0060d48c

#include "nocturne.h"

void crt_unknown_c_FUN_0060b142(void)

{
  undefined4 uVar1;
  int in_stack_0000000c;
  int *in_stack_00000010;
  
  crt_unknown_c_FUN_0060d480();
  uVar1 = crt_unknown_c_FUN_0060d48c();
  crt_unknown_c_FUN_0060b133(uVar1,in_stack_0000000c + *in_stack_00000010);
  return;
}


// Assembly code:
// 0060b142: PUSH EBP
//   Label: crt_unknown.c_FUN_0060b142
// 0060b143: MOV EBP,ESP
// 0060b145: PUSH EBX
// 0060b146: PUSH ESI
// 0060b147: PUSH EDI
// 0060b148: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 0060b14b: CALL crt_unknown.c_FUN_0060d480
//   XREF to: 0060d480 (UNCONDITIONAL_CALL)
// 0060b150: PUSH EAX
// 0060b151: PUSH 0x46
// 0060b153: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 0060b156: PUSH EDX
// 0060b157: PUSH EBX
// 0060b158: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060b15b: PUSH ECX
// 0060b15c: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060b15f: PUSH ESI
// 0060b160: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060b163: PUSH EDI
// 0060b164: CALL crt_unknown.c_FUN_0060d48c
//   XREF to: 0060d48c (UNCONDITIONAL_CALL)
// 0060b169: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060b16c: MOV ECX,dword ptr [EBX]
// 0060b16e: ADD ESP,0x1c
// 0060b171: ADD EDX,ECX
// 0060b173: JMP 0x0060b133
//   XREF to: 0060b133 (UNCONDITIONAL_CALL)
