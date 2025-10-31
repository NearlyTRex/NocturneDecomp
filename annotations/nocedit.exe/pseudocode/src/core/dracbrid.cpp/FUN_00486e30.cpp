// Name: core_dracbrid.cpp_FUN_00486e30
// Address: 00486e30
// Address Range: [[00486e30, 00486e44]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00486e30()
// Cross-references:
//   core_dracbrid.cpp_dtor_FUN_00486d50 (00486d50) at 00486d5a [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004ccd40 (004ccd40) at 004ccd4a [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ee390 (004ee390) at 004ee39a [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void core_dracbrid_cpp_FUN_00486e30(void)

{
  void **in_stack_00000004;
  
  crt_memory_c_freeTypeArray_FUN_005feee9(in_stack_00000004,4,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 00486e30: PUSH 0x6598c0
//   Label: core_dracbrid.cpp_FUN_00486e30
//   XREF to: 006598c0 (DATA)
// 00486e35: PUSH 0x4
// 00486e37: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00486e3b: PUSH EDX
// 00486e3c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00486e41: ADD ESP,0xc
// 00486e44: RET
