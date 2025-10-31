// Name: core_dracbrid.cpp_FUN_00486e50
// Address: 00486e50
// Address Range: [[00486e50, 00486e64]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00486e50()
// Globals:
//   WatcomTypeInfo g_SFreakyTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_dracbrid_cpp_FUN_00486e50(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,6,&g_SFreakyTypeInfo);
  return;
}


// Assembly code:
// 00486e50: PUSH 0x65cf00
//   Label: core_dracbrid.cpp_FUN_00486e50
//   XREF to: 0065cf00 (DATA)
// 00486e55: PUSH 0x6
// 00486e57: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00486e5b: PUSH EDX
// 00486e5c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00486e61: ADD ESP,0xc
// 00486e64: RET
