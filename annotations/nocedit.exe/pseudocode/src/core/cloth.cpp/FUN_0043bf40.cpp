// Name: core_cloth.cpp_FUN_0043bf40
// Address: 0043bf40
// Address Range: [[0043bf40, 0043bf74]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043bf40()
// Cross-references:
//   core_charactr.cpp_CCharacter_ctor_FUN_00427e20 (00427e20) at 00427e44 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80 (005c6a80) at 005c6aa4 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_FUN_0043bf40(undefined4 param_1) */

undefined4 * core_cloth_cpp_FUN_0043bf40(void)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 1,0,400);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x65,0,0x28);
  return in_stack_00000004;
}


// Assembly code:
// 0043bf40: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043bf40
// 0043bf41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043bf45: PUSH 0x190
// 0043bf4a: PUSH 0x0
// 0043bf4c: LEA EAX,[EBX + 0x4]
// 0043bf4f: PUSH EAX
// 0043bf50: MOV dword ptr [EBX],0x0
// 0043bf56: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0043bf5b: ADD ESP,0xc
// 0043bf5e: PUSH 0x28
// 0043bf60: PUSH 0x0
// 0043bf62: LEA EAX,[EBX + 0x194]
// 0043bf68: PUSH EAX
// 0043bf69: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0043bf6e: ADD ESP,0xc
// 0043bf71: MOV EAX,EBX
// 0043bf73: POP EBX
// 0043bf74: RET
