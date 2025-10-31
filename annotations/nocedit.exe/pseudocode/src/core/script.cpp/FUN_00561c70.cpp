// Name: core_script.cpp_FUN_00561c70
// Address: 00561c70
// Address Range: [[00561c70, 00561caa]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00561c70()
// Cross-references:
//   core_script.cpp_FUN_00565ae0 (00565ae0) at 00565b56 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00565e70 (00565e70) at 00565ee8 [UNCONDITIONAL_CALL]
// Globals:
//   void* PTR_s_label_006441c0_00680e28 = 006441c0
// Function calls:
//   core_script.cpp_FUN_00561690

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00561c70(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4
   param_7) */

void core_script_cpp_FUN_00561c70(void)

{
  core_script_cpp_FUN_00561690();
  return;
}


// Assembly code:
// 00561c70: PUSH EBX
//   Label: core_script.cpp_FUN_00561c70
// 00561c71: PUSH ESI
// 00561c72: PUSH EDI
// 00561c73: PUSH EBP
// 00561c74: PUSH 0x78
// 00561c76: PUSH 0x680e28
//   XREF to: 00680e28 (DATA)
// 00561c7b: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x1c] (READ)
// 00561c7f: PUSH EDX
// 00561c80: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x18] (READ)
// 00561c84: PUSH ECX
// 00561c85: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 00561c89: PUSH EBX
// 00561c8a: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x10] (READ)
// 00561c8e: PUSH ESI
// 00561c8f: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 00561c93: PUSH EDI
// 00561c94: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00561c98: PUSH EBP
// 00561c99: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00561c9d: PUSH EAX
// 00561c9e: CALL core_script.cpp_FUN_00561690
//   XREF to: 00561690 (UNCONDITIONAL_CALL)
// 00561ca3: ADD ESP,0x24
// 00561ca6: POP EBP
// 00561ca7: POP EDI
// 00561ca8: POP ESI
// 00561ca9: POP EBX
// 00561caa: RET
