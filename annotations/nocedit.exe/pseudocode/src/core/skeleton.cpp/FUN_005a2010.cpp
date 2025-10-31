// Name: core_skeleton.cpp_FUN_005a2010
// Address: 005a2010
// Address Range: [[005a2010, 005a2027]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_005a2010()
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_skeleton_cpp_FUN_005a2010(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,5000,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 005a2010: PUSH 0x6598c0
//   Label: core_skeleton.cpp_FUN_005a2010
//   XREF to: 006598c0 (DATA)
// 005a2015: PUSH 0x1388
// 005a201a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a201e: PUSH EDX
// 005a201f: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 005a2024: ADD ESP,0xc
// 005a2027: RET
